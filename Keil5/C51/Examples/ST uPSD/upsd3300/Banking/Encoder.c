/*------------------------------------------------------------------------------
encoder.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments.

Description:
This code is part of the banking demo for the Turbo uPSD family.
This file is used to read the encoder on the board and return
the encoder event.  The encoder makes use of the PLD in the uPSD.


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
#define PollingTime 10000
extern xdata PSD_REGS PSD8xx_reg; 


// Loop reading Encoder until encoder event occurs:
// Return 1 = Turn Left
// Return 2 = Turn Right
// Return 3 = Select (Push)

unsigned char Polling_Encoder(void) {
   while(1) {
      PSD8xx_reg.OMC_AB&=0xF8;
      PSD8xx_reg.OMC_AB|=0x04;
             
      while((PSD8xx_reg.DATAIN_B&0x10)!=0)
      {
         if ((PSD8xx_reg.OMC_AB & 0x01)!=0)
           {
             PSD8xx_reg.OMC_AB &= 0xFE;
             timer0_delay(1);
             if ((PSD8xx_reg.OMC_BC & 0x02)!=0) return(1);  // Left Turn
             else return(2);   // Right Turn
            }
          else 
            {
               PSD8xx_reg.DIRECTION_B |= 0x10;
               PSD8xx_reg.DATAOUT_B   |= 0x10;
               PSD8xx_reg.DIRECTION_B &= 0xEF;  // IN direction
            }
      }     
      PSD8xx_reg.OMC_AB&=0xF8;
      PSD8xx_reg.OMC_AB|=0x04;
      delay_0_5sec();
      return(3);
   }
}            

