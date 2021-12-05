/*------------------------------------------------------------------------------
upsd3300_pca-pwm.c

Version:
August 2004 Version 2.0 - Updated comments.

Dependencies: None.

Description:
This header file contains the function prototypes for those used in the  
uPSD3300 PCA-PWM driver (upsd3300_pca-pwm.c).


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

#define TCM_MODE_STOP_ALL       0x00
#define TCM_MODE_CAPTURE_PE     0x20
#define TCM_MODE_CAPTURE_NE     0x10
#define TCM_MODE_MATCH          0x08
#define TCM_MODE_TOGGLE         0x04
#define TCM_MODE_EINTF          0x80

// Select PCA Counter 0
#define CCONx                   CCON3
#define PCACONx                 PCACON1
#define PCACLx                  PCACL1
#define PCACHx                  PCACH1
#define PWMFx                   PWMF1

// Select TCM0
#define TCMMODEx                TCMMODE5
#define CAPCOMHx                CAPCOMH5
#define CAPCOMLx                CAPCOML5


#define PWM_MODE1_DUTY_CYCLE    0x01        // 0x80 out of 0x100, negative width
#define PWM_MODE2_DUTY_CYCLE    0x07        // 0x40 of 0x100
#define PWM_MODE2_FREQ_RATIO    0x06        // 0x80 of 0x100
#define PWM_MODE3_DUTY_CYCLE    0x0000  // 0x8000 out of 0x10000



/*------------------------------------------------------------------------------
PWM_Mode1_Init(channel, duty_cycle)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

channel - unsigned char
        - Channel to initialize (only 0 is supported at this time).
duty_cycle  - unsigned char
            - sets the duty cycle for the pulse
------------------------------------------------------------------------------*/
void PWM_Mode1_Init(unsigned char channel, unsigned char duty_cycle);


/*------------------------------------------------------------------------------
PwmInit_Mode1(PwmDuty_Mode1)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

PwmDuty_Mode1   - unsigned char
                - sets the duty cycle for the pulse.
------------------------------------------------------------------------------*/
void PwmInit_Mode1(unsigned char PwmDuty_Mode1);


/*------------------------------------------------------------------------------
PwmSetDuty_Mode1(PwmDuty_Mode1)

This function initializes the PCA to function in PWM Mode 1 with the specified
duty cycle.

PwmDuty_Mode1   - unsigned char
                - sets the duty cycle for the pulse.
------------------------------------------------------------------------------*/
void PwmSetDuty_Mode1(unsigned char PwmDuty_Mode1);

