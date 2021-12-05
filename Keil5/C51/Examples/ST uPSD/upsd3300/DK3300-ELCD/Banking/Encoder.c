/*------------------------------------------------------------------------------
Encoder.c

Version:
October 11, 2004 Version 2.0 - Updated DK3300 version for DK3300 ELCD board.
April   2004 Version 0.2 - Comments added.

Dependencies: 

Description:
The uPSD encoder device driver is intended to provide various functions used
to demonstrate the interface with and features of the encoder on the DK3300
ELCD board.

Note: This encoder device driver is not a standard device driver and is only
intended to be used on the DK3300 ELCD.


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
#include "upsd3300_hardware.h"
#include "upsd3300_timer.h"

extern xdata PSD_REGS PSD_reg; 

// Loop reading Encoder until encoder event occurs:
// Return 1 = Turn Left
// Return 2 = Turn Right
// Return 3 = Select (Push)

//-----Waiting user select a demo to run-----------------------------------------
//	use OMC_AB[0,1] as a 2-bit counter to identify running of Encoder
//	use OMC_AB[2] as a running direction indication of Encoder
//-------------------------------------------------------------------------------


unsigned char Polling_Encoder(void) {
   while(1) {
      PSD_reg.OMC_AB&=0xF8;
      PSD_reg.OMC_AB|=0x04;
             
      while((PSD_reg.DATAIN_B&0x80)!=0)    // Encoder pressed?
      {                                       // no...
         if ((PSD_reg.OMC_AB & 0x01)!=0)   // Encoder moved?
           {                                  // yes...
             PSD_reg.OMC_AB &= 0xFE;
             timer0_delay(1);
		     if((PSD_reg.OMC_AB&0x08)!=0)
			    return(2);                    // Right
		     else return(1);                  // Left

            }
          else 
            {
               PSD_reg.DIRECTION_B |= 0x10;
               PSD_reg.DATAOUT_B   |= 0x10;
               PSD_reg.DIRECTION_B &= 0xEF;  // IN direction
            }
      }     
      PSD_reg.OMC_AB&=0xF8;
      PSD_reg.OMC_AB|=0x04;
      delay_0_5sec();
      return(3);                                // Encoder was pressed
   }
}            

