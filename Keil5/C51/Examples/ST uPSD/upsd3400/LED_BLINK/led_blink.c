/*------------------------------------------------------------------------------
led_blink.c

Version:
February 22, 2005 - Version 1.0 - Initial release.


Dependencies:
upsd3400_timer.c - timer driver.

Description:  LED blinking example.
The main purpose of this code is to provide a simple example that blinks the 
LED conected to port PD1.

Supported platforms:
DK3400, DK3420

Important Note: It is important to modify the Target Platform definition in 
 upsd3400_hardware.h to match the platform being used for proper operation of
 this example.


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

#include "upsd3400.h"
#include "upsd3400_hardware.h"
#include "upsd3400_timer.h"

// Define the port D values for the specified states of the LED.
// PD1 => LED
// 0 = LED on, 1 = LED off

#define LED_OFF   0x02    // 00000010b
#define LED_ON    0xFD    // 11111101b

// Define the LED blink delay values (delay time is approximately "value * 10 ms") 
#define LONG   100
#define MEDIUM  50
#define SHORT   10

xdata volatile PSD_REGS PSD_reg _at_ PSD_REG_ADDR;      // Establish the CSIOP register

main()
{
   static char blink_delay;

    blink_delay = SHORT;       // Define the delay time between changing the state of the LEDs
                               //  SHORT, MEDIUM, or LONG

    timer0_init();             // Initialize timer 0 

    PSD_reg.DIRECTION_D|=0x02;              // set port pin PD1 to output
    PSD_reg.DATAOUT_D |= LED_OFF;            // Initialize LED to OFF

    while (1)
    {
        PSD_reg.DATAOUT_D &= LED_ON;

        timer0_delay(blink_delay);                 // Delay the defined amount of time

        PSD_reg.DATAOUT_D |= LED_OFF;

        timer0_delay(blink_delay);                 // Delay the defined amount of time
    }
}


