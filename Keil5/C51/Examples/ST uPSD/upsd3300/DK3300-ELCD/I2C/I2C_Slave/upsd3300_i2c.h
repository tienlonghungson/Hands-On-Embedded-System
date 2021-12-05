/*------------------------------------------------------------------------
upsd3300_i2c.h

Version:
October  2004, Version 0.4 - Comments and include file name updates.
April    2004, Version 0.3 - Comments revised.
February 2004, Version 0.2 - Initial release.

Dependencies: None

Description:
This is the header file for the uPSD3300 I2C Device Driver
(upsd3300_I2C.c).


Copyright (c) 2004 STMicroelectronics, Inc.

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

#ifndef _upsd3300_I2C_H_
#define _upsd3300_I2C_H_


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
unsigned char upsd_i2c_Timeout(unsigned char operation,unsigned int Max_time);


/*-------------------------------------------------------------------------
upsd_i2c_init (Bus_Freq, Slave_Addr)

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
					unsigned char Slave_Addr 
					);


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
							unsigned char N);


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
							unsigned char N);


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
									unsigned char* N_Ptr);

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
									unsigned char* N_Ptr);

/*-------------------------------------------------------------------------
Typical values for S1STA and S1CON 
-------------------------------------------------------------------------*/
#define  GCALL		0x80       		// General Call flag
#define  STOP		0x40      		// Stop condition flag
#define  INTR		0x20       		// Interrupt cond flag
#define  TX_MODE	0x10       		// I2C Tx mode flag
#define  BBUSY		0x08       		// Bus Busy flag
#define  BLOST		0x04       		// Bus Lost flag
#define  _ACKREP	0x02      		// ACK response flag
#define  SLV		0x01      		// Slave Mode flag

#define  CR2		0x80			// Prescaler bit 2
#define  ENI		0x40			// Enable I2C
#define  STA		0x20			// Start flag
#define  STO		0x10			// Stop flag
#define  ADDR		0x08			// Indicate that address has been received
#define  AA			0x04			// ACK control bit
#define  CR1		0x02			// Prescaler bit 1
#define  CR0		0x01			// Prescaler bit 0

/*-------------------------------------------------------------------------
Definition of dummy byte
-------------------------------------------------------------------------*/
#define  dummy		0xff			// dummy byte to send - needs to be FFH

/*-------------------------------------------------------------------------
Typical values for I2C current state
-------------------------------------------------------------------------*/
#define	I2C_MX			3			//Master Mode - transmitting
#define I2C_MX_END		4			//Master Mode - transmission complete
#define	I2C_SX			5			//Slave Mode - transmitting
#define I2C_SX_END		6			//Slave Mode - transmission is complete
#define	I2C_MR			7			//Master Mode - receiving
#define I2C_MR_END		8			//Master Mode - reception complete
#define I2C_TIME_OUT 	9			//I2C Timed Out
#define	I2C_SR			10			//Slave Mode - receiving
#define I2C_SR_END		11			//Slave Mode - reception complete
#define I2C_NACK		13			//I2C NACK (No Acknowledge)
#define I2C_BUSLOST		14			//I2C bus lost
#define I2C_SX_APP		15			//Slave to transmit data to master
#endif


