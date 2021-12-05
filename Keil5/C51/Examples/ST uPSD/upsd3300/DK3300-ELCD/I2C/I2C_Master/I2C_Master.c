/*------------------------------------------------------------------------------
i2c_master.c

Version:
November 30, 2004 Version 2.0 - Updated for DK3300-ELCD
April 2004 Version 0.2 - Initial Version

Dependencies:
upsd3300_lcd    - LCD driver.
upsd3300_i2c    - I2C driver.
upsd3300_timer  - Timer driver.


Description:  Demo for I2C Master
The main function of this code is to demonstrate the use of the I2C driver in
Master mode.  As a master, the uPSD device writes data to a slave device over
the I2C bus and reads it back.  It compares the received data with the sent data
and confirms with a message on the LCD if there is a match.  

It is intended that the I2C slave device this master communicates with is a uPSD
device programmed with the I2C Slave demo code.  The SCL and SDA lines of the
master and slave devices must be connected together and a pull-up is on each 
signal.  The two devices must also have their GNDs tied together.  Using two 
DK3300 boards, no pull-ups are required but the two signals (SCL, SDA) plus GND
must be connected.


Copyright (c) 2005 STMicroelectrons Inc.

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

#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_i2c.h"
#include "upsd3300_timer.h"
#include "upsd3300_lcd.h"

#define I2C_ADDR 0x88
#define buf_len 255
xdata unsigned char temp_xmit_buf[buf_len];				// message xmit buffer
xdata unsigned char temp_rcv_buf[buf_len];				// message rcv buffer
xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR; 

unsigned char match_buf(unsigned char* a, unsigned char* b) 
{
	unsigned char i;

	for(i=0; i<buf_len; i++)
	{
		if(a[i]!=b[i])
		return 0;
	}
	return 1;
}

main()
{	
	static unsigned char k, temp;
	unsigned char i;

	PSD_reg.VM |= 0x80;	
	timer0_init();   		 							// initialize timer0 
	lcd_init();	  										// initialize LCD
	printfLCD("I2C Master  V2.0");						// display on LCD
    printfLCD("\nlooking 4 slave \n");
    delay_1sec();

   	for(i=0;i<buf_len;i++) temp_xmit_buf[i]=i; 			// initiate transmit data buffer 

   	upsd_i2c_init (400,I2C_ADDR);						// I2C initialize

	while(1){
		k++;
		while(temp!=I2C_MX_END)       // loop xmiting to slave until good return code
		{
			temp = upsd_i2c_Master_Xmit(I2C_ADDR,temp_xmit_buf,buf_len);
		}
		printfLCD("\nMaster Xmit: OK \n");delay_1sec();

//		for(i=0;i<buf_len;i++)	temp_rcv_buf[i]=0;		// Clear buffer

		while(temp!=I2C_MR_END)		// loop waiting for receive from slave
		{
			temp=upsd_i2c_Master_Recv (I2C_ADDR,temp_rcv_buf,buf_len);
		}
		printfLCD("\nMaster Recv: OK \n");delay_1sec();

		// Now check to see if buffer received from slave matches the one sent
		if (match_buf(temp_xmit_buf,temp_rcv_buf))
		{ printfLCD("\nData Match OK   \n"); 
		  delay_1sec();
		}	
		else 
		{ printfLCD("\nData No Match   \n");
		  delay_1sec();
		}
	}
}
