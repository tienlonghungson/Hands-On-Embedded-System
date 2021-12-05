/*------------------------------------------------------------------------------
upsd3300_adc.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments, and 
removed Turbo from function names.

Dependencies: None.

Description:
The uPSD3300 ADC device driver is intended to provide functions to initialize
and read the analog to digital converter for the uPSD family.
See uPSD3300_adc.h for function proto types.


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

#include <intrins.h>

#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_adc.h"

#if (FREQ_OSC > 20000)                      // Set up ADC Prescaler Divider
      #define ADC_CLOCK_DIVIDER 1
#else 
      #define ADC_CLOCK_DIVIDER 0
#endif


/*------------------------------------------------------------------------------
ADC_EnableAll()

This function enables all the ADC channels and sets the ADC Clock frequency.
------------------------------------------------------------------------------*/
void ADC_EnableAll() 
{
    ACON = 0;                           // Turn off ADC

    P1SFS0 = 0xFF;
    P1SFS1 = 0xFF;                      // Setup P1 Port corresponding pin as AD input

    ADCPS =(0x08 + ADC_CLOCK_DIVIDER);  // Enable ADC clock, setup ADC clock freq
    _nop_();
    ACON = 0x20;                        // Enable ADC

    // NOTE: USER CODE MUST WAIT AT LEAST 20 MS before calling ADC_Read (Using the ADC)
}



/*------------------------------------------------------------------------------
ADC_Init(channel)

channel - unsigned char
        - ADC channel to initialize (0 to 7)

This function enables the specified ADC channel, initializes the ADC clock, and
disables the ADC interrupt.  It must be called when the ADC channel is changed.
------------------------------------------------------------------------------*/
void ADC_Init (unsigned char channel) 
{
    unsigned char temp;
    ACON = 0;                           // Turn off ADC

    temp = (0x01) << channel;           // create channel bit pattern
    P1SFS0 |= temp;         
    P1SFS1 |= temp;                     // Setup P1 Port corresponding pin as AD input

    ADCPS =(0x08 + ADC_CLOCK_DIVIDER);  // Enable ADC clock, setup ADC clock freq
    _nop_();
    ACON = 0x20;                        // Enable ADC

    // NOTE: USER CODE MUST WAIT AT LEAST 20 MS before calling ADC_Read (Using the ADC)
}

/*------------------------------------------------------------------------------
ADC_Read(channel)

This function reads the specified ADC channel and returns the result.  The ADC
must be initialization first with ADC_Init() before calling this function.

channel - unsigned char
        - ADC channel to read (0 to 7)

Returns:
ADC result. 
-------------------------------------------------------------------------------*/
unsigned int ADC_Read( unsigned char channel )
{
    unsigned int  temp_ADC_result;  
    ACON &= 0xE0;                           //Clears the input channels ~(00101110B) = (11010001B)

    ACON |= (channel<<2);                   //Setup Channel 
    _nop_ ();
    _nop_ ();   

    ACON |= 0x02;                           //Start ADC conversion
    _nop_ ();                               //delay 1 machine cycle: ADST: 1->0

    while( (ACON & 0x01) != 1 );            //Waits for Conversion complish

      // Note: For increased ADC accuracy, the while loop above should be
      //       replaced with code that puts the MCU into Idle mode via PCON
      //       and makes use of the ADC interrupt to exit the Idle mode.
      //       The user would need to enable the ADC int and define the ADC ISR.

    temp_ADC_result = (ADAT1<<8)+ADAT0;     //Calculate ADC conversion result

    return (temp_ADC_result);
}





