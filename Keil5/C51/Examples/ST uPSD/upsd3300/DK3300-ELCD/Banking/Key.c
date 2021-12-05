/*------------------------------------------------------------------------------
key.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments.

Description:
This code is part of the banking demo for the Turbo uPSD family.
This file reads the two button keys on the DK3300 and returns
whick keys are pressed.


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

#include "uPSD3300.h"
#include "uPSD3300_hardware.h"
#include "uPSD3300_timer.h"
extern xdata PSD_REGS PSD_reg; 


unsigned char Key_check(void)
{
      // Configure uPSD i/o ports for key button use.
    PSD_reg.DIRECTION_D|=0x06;   // Out direction
    PSD_reg.DATAOUT_D|=0x06;     // Output "1"
    PSD_reg.DIRECTION_B&=0xF9;   // In direction
    if((PSD_reg.DATAIN_D&0x06)==06)return(0);
    timer0_delay(2);                //delay 20ms
    if((PSD_reg.DATAIN_D&0x06)==06)return(0);
    else
    {
        if((PSD_reg.DATAIN_D&0x06)==02)return(1);
        if((PSD_reg.DATAIN_D&0x06)==04)return(2);
        if((PSD_reg.DATAIN_D&0x06)==06)return(3);
    }
	// Add default return value
	return(0xFF);
}
