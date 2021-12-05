/*------------------------------------------------------------------------------
upsd3300_pca-pwm.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments.

Dependencies: None.

Description:
The uPSD3300 PCA-PWM device driver is intended to provide a set of standard
functions for using the PCA-PWM features.  The various modes of the PCA-PWM are:
Mode0 - Stop
Mode1 - 8-bit fixed frequency PWM
Mode2 - 8-bit variable frequency PWM
Mode3 - 16-bit fixed frequency PWM


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

#include "upsd3300.h"
#include "upsd3300_pca-pwm.h"


/*------------------------------------------------------------------------------
PWM_Mode1_Init(channel, duty_cycle)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

channel - unsigned char
        - Channel to initialize (only 0 is supported at this time).
duty_cycle  - unsigned char
            - sets the duty cycle for the pulse
------------------------------------------------------------------------------*/
void PWM_Mode1_Init(unsigned char channel, unsigned char duty_cycle)
{
    switch(channel)
    {
    case 0:
        P4SFS0 |= 0x01;
        P4SFS1 &= 0xFE;
        PCACL0 = PCACH0 = 0x00;
        CCON2 = 0x10;
        PCACON0 = 0x00;
        TCMMODE0 = 0x41;        //CAPCOML0=CAPCOMH0=duty_cycle;
        CAPCOMH0 = duty_cycle;
        PCACON0 |= 0x40;
        break;

    case 1:
        break;
    }
}


/*------------------------------------------------------------------------------
PwmInit_Mode1(PwmDuty_Mode1)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

PwmDuty_Mode1   - unsigned char
                - sets the duty cycle for the pulse.
------------------------------------------------------------------------------*/
/*
void PwmInit_Mode1(unsigned char PwmDuty_Mode1)
{
    {
    //0.1 Configure pins as PCA function
    P4SFS0=0xff;
    P4SFS1=0;
    //0.2 initialize PCA0 counter
    PCACL0=PCACH0=0;

    //1.1 set PCA0CLK frequency
    CCON0=0x10;
    //1.2 select PCA0CLK as PCA0 clock source
    //2. Configure PCA0 Counter operating mode
    PCACON0=0x00;
    //3. Set TCM0 operationg mode
    TCMMODE0=0x41;
    //4. Set duty for TCM0
    CAPCOML0=CAPCOMH0=PwmDuty_Mode1;
    //5. Start PCA0 counter
    PCACON0|=0x40;
    }
}
*/

/*------------------------------------------------------------------------------
PwmSetDuty_Mode1(PwmDuty_Mode1)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

PwmDuty_Mode1   - unsigned char
                - sets the duty cycle for the pulse.
------------------------------------------------------------------------------*/
/*
void PwmSetDuty_Mode1(unsigned char PwmDuty_Mode1)
{
    CAPCOMH0=PwmDuty_Mode1;
}

*/
