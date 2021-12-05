/*------------------------------------------------------------------------
upsd3300_i2c.c

Version:
October 15, 2004 Version 2.0 - Comments and include file name updates.
May      2004 Version 0.4 - upsd_i2c_init() function further revised.

April    2004 Version 0.3 - Comments revised.  upsd_i2c_init() function
updated. Various other changes made.

February 2004 Version 0.2 - Initial Release

Dependencies:
FREQ_OSC (from upsd3300_hardware.h) - used in the calculation that
determines the prescaler setting for the I2C bus frequncy.

Description:
The uPSD I2C device driver is intended to provide a standard interrupt I/O
set of functions for the I2C unit inside the uPSD 3300 MCU.  See the
functions below for their respective descriptions.


Copyright (c) 2005 ST Microelectronics

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD product (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
-------------------------------------------------------------------------*/

#pragma CODE											

#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_i2c.h"


/*-------------------------------------------------------------------------
Declaration of local variables
-------------------------------------------------------------------------*/
unsigned char* i2c_xmit_buf;						// Message transmit buffer address pointer
unsigned char* i2c_rcv_buf;							// Message receive buffer address pointer
unsigned char dummybyte;							// Dummy byte 
static unsigned char i2c_data_len,i2c_data_index;	// The length and pointer of data buffer 
bit i2c_master, i2c_xmitr;							// Callable status flag bits
													// Indicate the status of I2C device, Master 
													//  or slave, Transmit or receive
bit	i2c_slave_addressed;							// Indicate if the slave has been addressed
unsigned char i2c_state;   							// The current state of I2C operation
unsigned char i2c_sta;								// Used to store the content of register S1STA
													//   when I2C device enter into ISR.
													// Temporary value of S1STA in ISR.
static unsigned int toggle;

/*-------------------------------------------------------------------------
upsd_i2c_Timeout(operation, Max_time)

This function is used to indicate if the current I2C operation timed out.

operation 	- unsigned char 	
			- current I2C operation (I2C_MX/I2C_MR/I2C_SX/I2C_SR).
Max_time	- unsigned int	
			- the wait time.

Returns:
0:	Did not time out
1:	Timed out 
-------------------------------------------------------------------------*/
unsigned char upsd_i2c_Timeout(unsigned char operation,unsigned int Max_time)
{
	toggle=0;
	while(i2c_state==operation)
	{
	  toggle++;
	  if(toggle>=Max_time){
	  return (1);}
	}
	return (0);
}

/*-------------------------------------------------------------------------
char upsd_i2c_init (Bus_Freq, Slave_Addr)

This function is used to initialize the I2C port including the specified bus 
frequency and slave address.  This function must be called before using the
I2C driver functions.

Slave_Addr 	- unsigned char 	
			- I2C port slave address
Bus_Freq	- unsigned int	
			- I2C bus frequency (KHz).

Returns:
0:	Initialization successful 
1:	Input argument error
-------------------------------------------------------------------------*/
unsigned char upsd_i2c_init (unsigned int Bus_Freq,
					         unsigned char Slave_Addr)
{
    // The following table is mid points of the I2C divisor so that rounding will occur
    unsigned int code table[10] = {20,27,45,90,180,360,720,1440,0xffff};
    unsigned char prescaler;
	unsigned int MCU_Freq_mem, divider, mhz, ns_clk, holdtime, no_clks;

	if ((Bus_Freq > 833) || (Bus_Freq < 6))  return (1);    // Bad Requested range

    MCU_Freq_mem = (unsigned int) FREQ_OSC;			      	// Caclualte divider needed
	MCU_Freq_mem = MCU_Freq_mem >> 1;						// Divide Freq_osc by 2
	divider =  MCU_Freq_mem / Bus_Freq;			 
    
    prescaler = 0;
    while (divider > table[prescaler]) prescaler++;  	// Use table to calc best fit prescaler
    if (prescaler > 7) return(1);						// Past max range - bad bus freq

	if (prescaler >= 4) prescaler = (prescaler-4)+0x80;	// fix bit positions for S1CON
	S1CON = prescaler;					// set I2C prescaler for specified bus freq

	P3SFS |= 0xC0;						// Enable P3.7 for SCL, P3.6 for SDA

	// Calcualte S1SETUP time based on Bus_Freq and FREQ_OSC
    mhz = FREQ_OSC / 1000;  					// get Mhz number - compile time constant
	ns_clk = (unsigned int) 1000 / mhz; 		// Calc ns per clock period
    if (Bus_Freq <= 100) holdtime = 4000;    	// Use 4us Spec for slow I2C
    else if (Bus_Freq <= 400) holdtime = 600;  	// Use 600ns Spec for Fast I2C 
    else holdtime = 160;                        // Use 160ns Spec for high speec I2C
	no_clks = holdtime / ns_clk; 				// Calc the number of clocks needed for hold time
    if (no_clks > 127) no_clks = 127;			// Satuarate to max number of clocks
	S1SETUP = (unsigned char) no_clks | 0x80;	// set start and stop detection time
 
	IPA |= 0x02;						// set high priority for I2C interrupt
	IEA |= 0x02;						// set I2C interrupt Enable bit
	S1ADR = Slave_Addr;					// set up i2c slave address
	S1CON |= AA;		     			// set Enable Acknowledge bit
	
	return(0);
}

/*-------------------------------------------------------------------------
upsd_i2c_Master_Xmit (Slave_Addr, Data_Ptr,N)

This function is used to transmit a specified amount of data to a slave
while in Master mode.

Slave_Addr 	- unsigned char 	
			- slave address of I2C device.
Data_Ptr	- unsigned char*
			- pointer to transimt buffer
N			- unsigned char
			- the length of data to be transmited 
			
Returns:
I2C_MX_END		4			//Master Mode - transmission complete
I2C_TIME_OUT	9			//I2C Timed Out
I2C_NACK		13			//I2C NACK (No Acknowledge)
I2C_BUSLOST		14			//I2C bus lost
-------------------------------------------------------------------------*/

unsigned char upsd_i2c_Master_Xmit (unsigned char Slave_Addr, 
							unsigned char* Data_Ptr,
							unsigned char N)
{
	EA=0;
	S1CON|=ENI;
	S1DAT = Slave_Addr;					// Transmit I2C slave address
	S1CON &= ~STO;						// Clr STO in S1CON
	S1CON |= STA;						// Set STA (Send start bit)
	S1CON &= ~AA;						// Clr AA in S1CON	
	i2c_data_index=0;
	i2c_state=I2C_MX;					// Set up I2C current state I2C_MX.
	i2c_xmit_buf=Data_Ptr;			    // Initialize data point of transmit buffer
	i2c_data_len=N;	     				// Initialize length of data to be transmitted
	i2c_master = 1;
	i2c_xmitr = 1;						// Set up for master transmitter
	EA=1;
	if(upsd_i2c_Timeout(I2C_MX,10000)==1){
		S1CON&=~STA;
		S1CON&=~ENI;S1CON|=ENI;
		i2c_state=I2C_TIME_OUT;
		return (i2c_state);
	}					   				// I2C master transmit timed out
	else {
		return(i2c_state);
	} 									// Return I2C current state
}									     
/*-------------------------------------------------------------------------
upsd_i2c_Master_Recv (Slave_Addr,Data_Ptr,N)

This function is used to receive a specified length of data from a slave,
while in Master mode.

Slave_Addr 	- unsigned char 	
			- slave address of I2C device.
Data_Ptr	- unsigned char*
			- address pointer of receive buffer
N			- unsigned char
			- length of the receive data buffer. 

Returns:
I2C_MR_END		8			////Master Mode - reception complete
I2C_TIME_OUT	9			//I2C Timed Out
I2C_NACK		13			//I2C NACK (No Acknowledge)
I2C_BUSLOST		14			//I2C bus lost
-------------------------------------------------------------------------*/
unsigned char upsd_i2c_Master_Recv (unsigned char Slave_Addr, 
							unsigned char* Data_Ptr,
							unsigned char N){
	EA=0;
	S1CON|=ENI;
	S1DAT = (Slave_Addr | 0x01);		// Set up I2C address (set R/W bit)
	S1CON &= ~STO;						// Clr STO in S1CON
	S1CON |= STA;						// Set STA (Send start bit)
	S1CON &= ~AA;						// Clr AA in S1CON
	i2c_data_index=0;
	i2c_state=I2C_MR;
	i2c_rcv_buf= Data_Ptr;			    // Initialize address pointer of receive buffer
	i2c_data_len=N;	     				// Length of the receive data buffer
	i2c_master = 1;
	i2c_xmitr = 0;						// Set up for master mode, receive data
	EA=1;
	if(upsd_i2c_Timeout(I2C_MR,10000)==1){
		S1CON&=~STA;
		S1CON&=~ENI;S1CON|=ENI;
		i2c_state=I2C_TIME_OUT;
		return (i2c_state);
	}									// I2C master receive timeout
	else {
		return(i2c_state); 
	}									// Return I2C current state
}

/*-------------------------------------------------------------------------
upsd_i2c_slave_Xmit(Data_Ptr, N_Ptr)

This function is used to transmit data to master, only for slave.

Data_Ptr	- unsigned char*
			- address pointer of transmit buffer
N_Ptr		- unsigned char*
			- the length of data buffer transmitted to master.
 
Returns:
I2C_SX_END		6			//Slave Mode - transmission is complete
I2C_TIME_OUT	9			//I2C Timed Out
I2C_NACK		13			//I2C NACK (No Acknowledge)
I2C_BUSLOST		14			//I2C bus lost
-------------------------------------------------------------------------*/
unsigned char upsd_i2c_slave_Xmit(unsigned char* Data_Ptr,
									unsigned char* N_Ptr)
{
	EA=0;
	i2c_xmit_buf=Data_Ptr; 						// Initialize pointer to transmit buffer
	i2c_master = 0;
	i2c_xmitr = 1;								// Set up for Slave transmitter
	S1CON &= ~STO;								// Disable STOP control bit
	i2c_data_index=0;
	S1DAT = i2c_xmit_buf[i2c_data_index];  		// Send first data to master
	i2c_data_index++;
	i2c_state=I2C_SX; 							// Set I2C current status
	EA=1;
	if(upsd_i2c_Timeout(I2C_SX,10000)==1){
		S1CON&=~ENI;i2c_slave_addressed=0;i2c_state=I2C_TIME_OUT;return(i2c_state);
	}	   										// I2C slave timeout return
	else {
		*N_Ptr=i2c_data_index;return(i2c_state);
	}			    							// return current I2C state and the length
												// of the data buffer transmitted to master
}
/*-------------------------------------------------------------------------
upsd_i2c_slave_Recv(Data_Ptr, N_Ptr)

This function is used to receive data from a master while in slave mode.

Data_Ptr	- unsigned char*
			- address pointer to receive buffer
N_Ptr		- unsigned char*
			- the length of received data from the master.
 
Returns:
I2C_TIME_OUT	9			//I2C Timed Out
I2C_SR_END		11			//Slave Mode - reception complete
I2C_NACK		13			//I2C NACK (No Acknowledge)
I2C_BUSLOST		14			//I2C bus lost
I2C_SX_APP		15			//Slave to transmit data to master
-------------------------------------------------------------------------*/
unsigned char upsd_i2c_slave_Recv(unsigned char* Data_Ptr,
									unsigned char* N_Ptr)
{
	EA=0;
	S1CON&=~ENI;
	i2c_rcv_buf=Data_Ptr;						// initialize pointer to receive buffer
	i2c_master = 0;  
	i2c_xmitr = 0;								// Set to Slave transmitter
	i2c_data_index=0;
	i2c_state=I2C_SR;	 						// Set I2C current status to Slave Read
	S1CON|=ENI;
	EA=1;
	if(upsd_i2c_Timeout(I2C_SR,10000)==1){
		S1CON&=~ENI;i2c_slave_addressed=0;i2c_state=I2C_TIME_OUT; return(i2c_state); 
	}	    									// Slave receive timeout
	else {
		*N_Ptr=i2c_data_index; return(i2c_state);
	}											// Return I2C current state
}

/*------------------------------------------------------------------------	 
I2C Interrupt Service Routine

There are several types of interrupts handled by the ISR.

1. The address packet has been transmitted by master or received by slave with AA=1.
2. The data has been transmitted or received by master.
3. The data has been transmitted or recieved by addressed slave with AA=1.
4. The STOP condition has been received by addressed slave with AA=1.

------------------------------------------------------------------------*/ 

void i2c_isr (void) interrupt I2C_VECTOR using 2 {	
	i2c_sta=S1STA;												// Store S1STA register
	S1STA&=~INTR;											    // Clear INTR flag
	toggle=0;

	//------Master transmit operation--------------------------------------------
	if (i2c_master & i2c_xmitr){							// master transmitter mode
		if ((i2c_sta & BLOST) !=0){ 						// if bus lost, read dummybyte to turn to Slave mode
			dummybyte=S1DAT;
			i2c_state=I2C_BUSLOST;							// Indicate the bus was lost
		}	
		else if ((i2c_sta & _ACKREP) !=0){
			S1CON |=STO;
			S1DAT=dummy; 									// if no ACK, send STOP condition to Bus
			i2c_state=I2C_NACK;								// Indicate NACK (no ACK)
		}
		else
		{	
			if((i2c_data_index)<=(i2c_data_len-1))
			{
				S1DAT = i2c_xmit_buf[i2c_data_index];	 	//send data from Master
				i2c_data_index++;  							//increment data-pointer
			}
			else if(i2c_data_index==i2c_data_len)
			{   
				S1CON |= STO;								// set STO (stop bit) for last data byte to be sent
				S1DAT=dummy;
				i2c_state=I2C_MX_END;						// Indicate the Master transmission is complete
			}
		}
	}

	//------Master receive operation--------------------------------------------
	if (i2c_master & ~i2c_xmitr){							// master receive mode
		//Handle interrupt in address field
		if(((S1CON&AA)==0)& (i2c_data_index==0))
		{
			if ((i2c_sta & _ACKREP) !=0){
				S1CON |=STO;
				dummybyte=S1DAT; 							
				i2c_state=I2C_NACK;							// indicate NACK (no ACK)
				return;  									
			}
			else
			{
				dummybyte=S1DAT;	 						//dummy read 
				if(i2c_data_len!=1)S1CON |= AA;   			//enable ACK to prepare to receive data from slave
				i2c_data_index++;
				return;
			}
		} 

		//Handle reception of data
		else
		{
			if(i2c_data_index<i2c_data_len)
			{
	
				i2c_rcv_buf[i2c_data_index-1] = S1DAT;	   		// Receive data
				i2c_data_index++;						  		// Increment data-pointer
				if(i2c_data_index==i2c_data_len){S1CON&=~AA;} 	// Disable ACK to return a NACK when
																//	 master received the last byte of data.
			}
			else  				
			{   
				S1CON |=STO;								// Generate a STOP condition on Bus
				i2c_rcv_buf[i2c_data_index-1] = S1DAT;		// Receive the last byte of data
				i2c_state=I2C_MR_END;						// Indicate Master reception is complete
			}
		}
	}

	//------slave operation--------------------------------------------
	if(i2c_master==0){
		//Handle STOP interrupt
		if((i2c_sta&STOP)!=0){
			if(i2c_slave_addressed==1){
				if(i2c_xmitr==1){
					i2c_state=I2C_SX_END;						// Indicate slave transmission is complete
					i2c_slave_addressed=0;					    // Reset addressed flag
					S1CON&=~ENI;								// Disable I2C to isolate slave from bus
					return;
				}
				else
				{
					i2c_rcv_buf[i2c_data_index] = S1DAT;		// Get last byte of data from Master
					i2c_slave_addressed=0;					    // Reset addressed flag
					i2c_state=I2C_SR_END;						// Indicate the data has been received completely
					S1CON&=~ENI;								// Disable I2C to isolate slave from bus
					return;
				}
			}
		}
		//Handle Address field interrupt
		else if(((S1CON&ADDR)!=0)&((S1CON&AA)!=0)){
			S1CON&=~ADDR;										// Clear ADDR flag
			i2c_slave_addressed=1;						    	// Set addressed flag bit													// if received address information, identify read or write command
			if((i2c_sta&TX_MODE)!=0){
				i2c_state=I2C_SX_APP;							// Indicate slave is required to transmit data to master
				return;
			}
			else{
				dummybyte=S1DAT;								// Dummy read
				return;
			}
		}
		//Handle data field interrupt
		else if(i2c_slave_addressed==1)
		{
			if(i2c_xmitr==0)
			{   
				
				i2c_rcv_buf[i2c_data_index] = S1DAT;			// Get data byte from Master
				i2c_data_index++;								// Increment data-pointer
			}
			else
			{
				if((i2c_sta &_ACKREP)!=0)
				{	
					S1DAT=dummy; 								// Dummy write
				}
				else
				{
					S1DAT = i2c_xmit_buf[i2c_data_index];		// Send data
					i2c_data_index++;							// Increment data-pointer
				}
			}
		}
	}
}



