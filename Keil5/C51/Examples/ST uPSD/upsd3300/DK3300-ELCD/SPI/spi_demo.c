/*------------------------------------------------------------------------------
spi_demo.c

Version:
November 30, 2004 Version 1.0 - Initial release.

Description:
This demo writes and reads data to/from an SPI EEPROM device using various 
clock rates.  


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


#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_timer.h"
#include "upsd3300_lcd.h"
#include "upsd3300_spi.h"

xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR;

extern unsigned char tlen;
extern unsigned char rlen;
extern unsigned char flag;

unsigned char W_ENABLE[1]={0x06}; //write enable command

xdata unsigned char WRITE[36]={0x02,0x05,0x00,0x20,0x00,0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,0x99,0x0a,
0x0b,0x0c,0x0d,0x0e,0x0f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,
0x1b,0x1c,0x1d,0x1e,0x1f}; //the first byte is write command,the following three bytes are address, else are data

xdata unsigned char READ[36]={0x03,0x05,0x00,0x20,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff}; //the first byte is read command,,the following three bytes are address,else are dummy bytes

xdata unsigned char R_buf[36]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00};//receive buffer

xdata unsigned char ERASE[4]={0xd8,0x05,0x00,0x20}; //the first byte is sector(512kbit) erase command,
													//the following three bytes are address

main()
{
	unsigned char j,a,b,c,d,e, flag;
	SPI_Init();					    //SPI initialization
	timer0_init ();
	PSD_reg.VM|=0x80;				//enable PSD peripheral IO
    lcd_init();
	for (j =0x30; j<0xfc; j += 4)
	{
		flag = 0;
		a=b=c=d=e=0;
		SPICLKD = j;
        lcd_clear();
		printfLCD("SPICLKD=0x%x\n",j);
//------------------ erase  serial flash M25P80-----------------------------------
	a = SPI_transfer(W_ENABLE,R_buf,1); //enable write command
	d = SPI_transfer(ERASE,R_buf,4); //erase command
 		TR0=1;delay_1sec( ); delay_1sec( ); TR0=0;// wait for erase end, 1 sec is too short

//------------------ write  serial flash M25P80-----------------------------------																		//2 sec is enough 
	c = SPI_transfer(W_ENABLE,R_buf,1); //enable write command
	d = SPI_transfer(WRITE,R_buf,36);  //write 32 bytes to serial flash
		TR0=1;delay_10ms();delay_10ms();TR0=0;	//wait for write end	

//------------------ read  serial flash M25P80-----------------------------------	
	e = SPI_transfer(READ,R_buf,36);  //read 32 bytes from serial flash

	printfLCD("T:%x R:%x ROR:%x\n",tlen,rlen,e);
		TR0=1;delay_1sec( );TR0=0;
	}
	while(1);
}



