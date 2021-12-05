/*------------------------------------------------------------------------------
upsd3200_pwm.c

uPSD PWM Device Driver Functions
September 2004 Version 2.0 - Updated comments and include file names.

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
#include "upsd3200_pwm.h"
#include "upsd3200_hardware.h"
#include "upsd3200.h"



/*------------------------------------------------------------------------------------
Setup 8-bit PWM IP  
PWM_channel_no= specify PWM channel (0-3)
Duty_Cyl= Specify duty cycle (0-0xff), 0x7F being 50% duty cycle
-------------------------------------------------------------------------------------*/
void uPSD_PWM_Channel_8bit(unsigned char PWM_channel_no, unsigned char Duty_Cyl)
{
   switch (PWM_channel_no) {        // Output duty cycle
       case 0:
             {
             PWM0 = Duty_Cyl;
             break;
             }
       case 1:
             {
             PWM1 = Duty_Cyl;
             break;
             }
       case 2:
             {
             PWM2 = Duty_Cyl;
             break;
             }
       case 3:
             {
             PWM3 = Duty_Cyl;
             break;
             }
       default:
             break;
   }

    //Enable PWM IP

    PWMCON |= 0x20;               //PWME = 1
    
}
/*
void uPSD_PWM_Variable_8bit(unsigned char PWM_Period, unsigned char PWM_PulseWidth)
{
    P4SFS  |= 0x80;               // Turn ON I/O port for the variable PWM channel
    PWMVP  |= PWM_Period;         // Load period value
    PWMVPW |= PWM_PulseWidth;     // Load pulse width value
    PWMCON |= 0x10;               // Set variable PWM to push-pull
    PWMCON |= 0x20;               // Enable variable PWM, PWME = 1
}
*/
/*---------------------------------------------------------------------------------
Initialize PWM IP.  
Setup Prescaler value and I/O ports for the select channel of the 8-bit PWM.
PWMCON_value = PWMCON[7,3:0].  CFG[3:0], 0=open drain, 1=push-pull; [7] polarity
Channel_No = PWM channel from 0 to 3
PWM_freq8 = Requested prescaler freq input to PWM unit
----------------------------------------------------------------------------------*/
void uPSD_PWM_Init_8bit(unsigned char PWM_channel_no, unsigned int PWM_freq8, unsigned char PWMCON_value)
{
    unsigned int PWM_prescaler;
    unsigned char output_polarity_mode;

    output_polarity_mode = PWMCON_value & 0x8F;       // bit[7],bit[3:0]} are used to define PWM output mode
    PWMCON = (PWMCON & 0x70) | output_polarity_mode;  // 0--open drain; 1-- push pull 

    P4SFS = (unsigned char) (0x08 << PWM_channel_no); // turn on I/O port bit for PWM

    // set up 8bit PWM prescaler for requested freq

    PWM_prescaler = (unsigned int) ( (((unsigned int) FREQ_OSC) / 2) / PWM_freq8);
    if (PWM_prescaler != 0) PWM_prescaler--;     // subtract 1 if not zero
    PSCL0L = PWM_prescaler & 0x00ff;
    PSCL0H = (PWM_prescaler >> 8);
    PSCL1L = PWM_prescaler & 0x00ff;
    PSCL1H = (PWM_prescaler >> 8);
}

/*---------------------------------------------------------------------------------
Disable PWM IP
----------------------------------------------------------------------------------*/
void uPSD_PWM_Disable(void)
{
       PWMCON &= 0xDF;              //PWME = 0
//       P4SFS  &= 0x07;              //Clear P4[7:3] I/O pins 
}