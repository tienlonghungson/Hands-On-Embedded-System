/*------------------------------------------------------------------------------
upsd3200_adc.c

uPSD ADC Device Driver Functions
September 2004 Ver 2.0 - Updated commnents and include file names.

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

#pragma optimize(8,size)
#include <intrins.h>

#include "upsd3200.h"
#include "upsd3200_hardware.h"
#include "upsd3200_adc.h"



/*-------------------------------------------------------------------------------------
uPSD_ADC_Read(): reads an analog signal from the channel specified in hex format,
            and returns the converted value in ADAT reg.  
            uPSD_ADC_Init must be called first.
--------------------------------------------------------------------------------------*/
unsigned char uPSD_ADC_Read( unsigned char channel )
{
    unsigned char channel_no;

    channel_no &= 0x03;                    // Mask off to 2 bits (0..3)
    ACON &= 0xD1;                          //Clears the input channels ~(00101110B) = (11010001B)
    channel_no = channel << 2;
    ACON |=  channel_no;                   //Loads Channel to sampled

    ACON |= 0x22;                          //Enables and Starts Conversion (0010xx1xB)
    _nop_ ();
    _nop_ ();                              //delay 1 machine cycle: ADST: 1->0
    while( (ACON & 0x01) != 1 );           //Waits for Conversion to end

    ACON &= 0xDF;                          //disable ADC

    return( (unsigned char) ADAT);      
}


/*---------------------------------------------------------
Setup I/O ports (channel #) and ADC prescaler value
----------------------------------------------------------*/

void uPSD_ADC_Init (unsigned char channel) 
{

   switch (channel) {
       case 0:
             {
             P1SFS |= 0x10;        /* Input port P1[4] = ADC_in[0] */
             break;
             }
       case 1:
             {
             P1SFS |= 0x20;        /* Input port P1[5] = ADC_in[1] */
             break;
             }
       case 2:
             {
             P1SFS |= 0x40;        /* Input port P1[6] = ADC_in[2] */
             break;
             }
       case 3:
             {
             P1SFS |= 0x80;        /* Input port P1[7] = ADC_in[3] */
             break;
             }
       default:
            break;
   }

   ASCL = (unsigned char) (( FREQ_OSC / 2L) / 6000L); // ADC requires 6Mhz freq 

}





