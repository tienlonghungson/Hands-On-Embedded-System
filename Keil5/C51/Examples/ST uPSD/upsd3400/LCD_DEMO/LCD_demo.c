/*------------------------------------------------------------------------------
main.c

Version:
May 18, 2005 Version 0.1 - Initial Version

Description:
This is a basic LCD demo.

Target Platforms:
DK3400

Copyright (c) 2005 STMicroelectronics Inc.

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

#include "uPSD3400.h"
#include "upsd3400_hardware.h"
#include "upsd3400_timer.h"
#include "upsd3400_lcd.h"

xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR; 

main()
{
   unsigned char count;

	PSD_reg.VM|=0x80;		//enable PSD peripheral IO
	timer0_init(); 			// initialize timer0 interrupt 
	lcd_init ( );
    
	count = 0;

	while(1)
	{
       printfLCD("DK3400 - LCD Demo\n");
	   printfLCD("Count 0x%x\n",count);
	   delay_1sec();
	   lcd_clear();
	   count++;
	}	
}
