/*------------------------------------------------------------------------------
upsd3300_adc.c

Version:
August 2004 Version 2.0 - Updated comments, removed Turbo from function names.

Dependencies: None.

Description:
This header file contains the function prototypes for those used in the  
uPSD3300 ADC driver (upsd3300_adc.c).


Copyright (c) 2004 STMicroelectronics Inc.

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

/*------------------------------------------------------------------------------
ADC_Init(channel)

channel - unsigned char
        - ADC channel to initialize (0 to 7)

This function enables the specified ADC channel, initializes the ADC clock, and
disables the ADC interrupt.  It must be called for each channel that is enabled.
------------------------------------------------------------------------------*/
void ADC_Init(unsigned char channel);


/*------------------------------------------------------------------------------
ADC_EnableAll()

This function enables all the ADC channels and sets the ADC Clock frequency.
------------------------------------------------------------------------------*/
void ADC_EnableAll(); 


/*------------------------------------------------------------------------------
ADC_Read(channel)

This function reads the specified ADC channel and returns the result.  The ADC
must be initialization first with ADC_Init() before calling this function.

channel - unsigned char
        - ADC channel to read (0 to 7)

Returns:
ADC result. 
-------------------------------------------------------------------------------*/
unsigned int ADC_Read(unsigned char channel);


