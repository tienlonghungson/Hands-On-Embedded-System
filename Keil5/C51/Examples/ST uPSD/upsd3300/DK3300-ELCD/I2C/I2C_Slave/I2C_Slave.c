/*------------------------------------------------------------------------------
i2c_slave.c

Version:
November 30, 2004 Version 2.0 - Updated to run on DK33300-ELCD boards.
April 2004 Version 0.2 - Initial Version

Dependencies:
upsd3300_lcd    - LCD driver.
upsd3300_i2c    - I2C driver.
upsd3300_timer  - Timer driver.


Description:  Demo for I2C Slave
The main function of this code is to demonstrate the use of the I2C driver in
Slave mode.  As a slave, the uPSD device receives data written to it and sends 
the data back when read.  The number of bytes received and sent is displayed
on the LCD.

It is intended that the I2C master device this slave communicates with is a uPSD
device programmed with the I2C Master demo code.  The SCL and SDA lines of the
master and slave devices must be connected together and a pull-up is on each 
signal.  The two devices must also have their GNDs tied together.  Using two 
DK3300 boards, no pull-ups are required but the two signals (SCL, SDA) plus GND
must be connected.


Copyright (c) 2005 STMicroelectrons Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD products (device).

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

xdata unsigned char temp_xmit_buf[255];							// I2C transmit buffer
xdata unsigned char temp_rcv_buf[255];							// I2C receive buffer

xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR; 

main()
{	
	unsigned char i,k,temp;
	static unsigned char *temp_data_len,r;
	PSD_reg.VM |= 0x80;		

	timer0_init();   		 								// Initialize timer0 interrupt 
	lcd_init();	  											// Initialize LCD
	printfLCD("I2C Slave   V2.0");							// Display on LCD
    printfLCD("\nwaiting 4 Master\n");
	delay_1sec();

	upsd_i2c_init (400,I2C_ADDR);							// Initialize I2C interface

	while(1){
		k++;

		// loop trying to receive data from master
		temp = upsd_i2c_slave_Recv(temp_rcv_buf,temp_data_len);

 		if(temp==I2C_SR_END){
			r=*temp_data_len;
			printfLCD("\nRecv %x bytes   \n",r);delay_1sec();
		}
		else if(temp==I2C_SX_APP)
		{	
			for(i=0;i<r;i++){temp_xmit_buf[i]=temp_rcv_buf[i];}
			temp=upsd_i2c_slave_Xmit(temp_xmit_buf,temp_data_len);
			if(temp==I2C_SX_END){
				r=*temp_data_len;
				printfLCD("\nSent %x bytes   \n",r);delay_1sec();
			}
		}
	}
}
