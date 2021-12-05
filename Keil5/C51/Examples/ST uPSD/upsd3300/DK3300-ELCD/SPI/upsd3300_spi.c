/*------------------------------------------------------------------------------
upsd3300_spi.c

Version:
October 8, 2004 Version 1.0 - Initial release.

Description:
This is the uPSD3300 SPI Device Driver.


Copyright (c) 2005 STMicroelectronics Inc.

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
------------------------------------------------------------------------------*/

#pragma optimize(8,size)

#include "upsd3300.h"
#include "upsd3300_spi.h"


#define SPI_BUSY_FLAG 0x10
#define SPI_TI_FLAG 0x02
#define SPI_TRANSMIT_END_FLAG 0x08
#define SPI_RI_FLAG 0x01
#define SPI_RO_FLAG 0x04


#define SPI_COMM_WREN 0x06  //E2PROM or serial flash enable command
#define SPI_COMM_WRDI 0x04  
#define SPI_COMM_RDSR 0x05
#define SPI_COMM_WRSR 0x01
#define SPI_COMM_READ 0x03  //E2PROM or serial flash read command
#define SPI_COMM_WRITE 0x02 //E2PROM or serial flash write command 

#define SPI_Dummy 0xff


unsigned char *buf1; 		// point to send data buffer 
unsigned char *buf2; 		// point to received data buffer 

unsigned char tlen;  		//dynamic send data length 
unsigned char rlen;  		// dynamic received data length
unsigned char tlength; 		// fixed send data lengrh


unsigned char flag;
unsigned char endflag;


/*-------------------------------------------------------------------------------------
	void SPI_isr(void);
	
	SPI interrupt service routine 	
--------------------------------------------------------------------------------------*/

void SPI_isr (void) interrupt SPI_VECTOR using 2 {

	unsigned char	status ;
	status = SPISTAT;
	if(status & SPI_TRANSMIT_END_FLAG)
	{
		while (SPISTAT & SPI_BUSY_FLAG);	// wait for last bit of last byte to finish transmission/reception	
			SPICON1&=(~TIE);
			SPICON0&=(~TE);
			SPICON1&=(~TEIE);
			endflag = 1;  //indicate the transmission is complete
	}
	if(status & SPI_TI_FLAG) // for TISF interrupt (SPITDR is empty)	
	{
		if(tlen < tlength) // check if byte count is satisfied
		{
			SPITDR=*buf1; // load SPI transmit buffer
			buf1++; // bump transmit buffer pointer
			tlen++; // bump byte count
		}
	}
	if(status & SPI_RI_FLAG) // for RISF interrupt (SPIRDR is full)

	{
		*buf2=SPIRDR;  // read SPI read buffer
		buf2++;   // bump recv buffer pinter
		rlen++;  // bump byte count
	}
}
/*-------------------------------------------------------------------------------------
	void SPI_Init(void);
	
	Setup 4-wires in SPI mode; MSB first; Sampling at rising edge; 
	Disable SPI interrupt;
	Configure SPI clock rate; 	
--------------------------------------------------------------------------------------*/
void SPI_Init(void)
{
	P4SFS0 = 0xF0;		   	
	P4SFS1 = 0xF0;			// Setup P4[4..7] Port as SPI function
	SPICON1=0x00;			//bit3:TEIE=0.	SPI transmission end interrupt disable
							//bit2:RORIE=0.	SPI receive overrun interrupt disable
							//bit1:TIE=0.	SPI transmission interrupt disable
							//bit0:RIE=0	SPI receiption interrupt disable

	SPICLKD=0x38;			//Because higher frequency of SCLKOUT need faster speed of MCU
							//So select frequency divider>=0x38

	SPICON0=0x1A;			//bit6:TE=0.	SPI Transmitter disable
							//bit5:RE=0.	SPI Receiver disable
							//bit4:SPIEN=1. SPI enable
							//bit3:SSEL=1. 	SPI Slave select output is enable
							//bit2:FLSB=0. 	SPI Transfer the MSB first according to requirement of M95080W
							//bit1:SPO=1.	SPI Sample data at rising edge of clock
	IEA|=0x40;
	IPA|=0x40;
	EA=1;
}




unsigned char SPI_transfer(unsigned char *send, unsigned char *receive, unsigned char length)
{
	tlength = length;
	buf1 = send;	
	buf2 = receive;	
	flag = 0;
	endflag = 0;
	while (SPISTAT & SPI_BUSY_FLAG); // check for busy		 	
	SPITDR=*buf1;	 // pre-load 1st byte for transmitting				
	buf1++;    // bump transmit buffer pointer
	tlen = 1;  // bump transmit byte count
	rlen = 0;  // initialize receive byte count
		 
					//enable transmit and receive interrupt below
	SPICON1|=RIE;  
    SPICON1|=RORIE;
	SPICON1|=TEIE;
	SPICON1|=TIE;
	
	SPICON0|=TE;
	SPICON0|=RE;
	while (!(endflag == 1));  //wait untill transmission ends
	if (tlen != rlen)flag =1; 
	return (flag); 	//flag = 1 means transfer failed, flag = 0 means transfer succeeded	
}


