/*--------------------------------------------------------------------------
upsd3200_adc.h

Header file for uPSD3200 ADC Device Driver
September 2004 Verions 2.0 - Updated comments.

Copyright (c) 2004 ST Microelectronics

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
--------------------------------------------------------------------------*/

#ifndef _UPSD3200_ADC_H_
#define _UPSD3200_ADC_H_

// uPSD_ADC_Init(Channel) - Initialize uPSD ADC IP block and enable channel
// Channel is a value from 0 to 3 for the ADC channel to enable
// Must be called for each ADC Channel to enable
void uPSD_ADC_Init(unsigned char channel);

// uPSD_ADC_Read(Channel) - Reads the specified channel and returns value
// Channel is a value from 0 to 3
// ADC conversion time is approx 10us
// Note: uPSD_ADC_Init must be called first
unsigned char uPSD_ADC_Read(unsigned char channel);

#endif

