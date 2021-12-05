/*--------------------------------------------------------------------------
upsd3200_pwm.h

Header file for uPSD 3200 Timer0 Device Driver
September 2004 Version 2.0 - Comments updated.

Copyright (c) 2004 STMicroelectronics

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

#ifndef _UPSD3200_PWM_H_
#define _UPSD3200_PWM_H_

// uPSD_PWM_Channel(Channel, Duty) - Modifies the duty cycle of PWM channel
// Channel = PWM Channel 0 to 3
// Note: PMW_Init must be called first
void uPSD_PWM_Channel_8bit(unsigned char PWM_channel_no, unsigned char Duty_Cyl);
void uPSD_PWM_Variable_8bit(unsigned char PWM_Period, unsigned char PWM_PulseWidth);
// uPSD_PWM_Init_8bit(Channel, Req_Freq, PWMCON) - Enables I/O for PWM channel and set Freq
// Channel = PWM channel 0 to 3
// Req_Freq = is the requested freq to run the PWM channel at (Time period)
// Note: Freq must be the same for all PWM operations (same prescaler)
// PWMCON = Controls the PWM output type and polarity (see uPSD datasheet)
void uPSD_PWM_Init_8bit(unsigned char PWM_channel_no, unsigned int Req_Freq, unsigned char PWMCON_value);

// uPSD_PWM_Disable - Global disable PWM output
void uPSD_PWM_Disable(void);


#endif
