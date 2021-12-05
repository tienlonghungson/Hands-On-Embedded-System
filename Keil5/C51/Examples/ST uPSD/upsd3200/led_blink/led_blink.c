/*------------------------------------------------------------------------------
led_blink.c

Version:
September 28, 2004 - Version 1.1 - updated comments
September 13, 2004 - Version 1.0

Dependencies:
upsd3200_timer.c - timer driver.

Description:  LED blinking example.
The main purpose of this code is to provide a simple example that blinks the 
LEDs conected to ports PB0 (LED-2) and PB1 (LED-1).

Supported platforms:
DK3200


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

#include "upsd3200.h"
#include "upsd3200_hardware.h"
#include "upsd3200_timer.h"

// Define the port B values for the specified states of LED-1 and LED-2.
// PB1 => LED-1, PB0 => LED-2
// 0 = LED on, 1 = LED off

#define LED1_ON_LED2_ON    0xFC
#define LED1_OFF_LED2_OFF  0xFF
#define LED1_ON_LED2_OFF   0xFD
#define LED1_OFF_LED2_ON   0xFE

// Define the LED blink delay values (delay time is approximately "value * 10 ms") 
#define LONG   100
#define MEDIUM  50
#define SHORT   10

#define YES 1
#define NO  0

xdata volatile PSD_REGS PSD_reg _at_ PSD_REG_ADDR;      // Establish the CSIOP register

main()
{
    static char blink_delay, blink_leds_together;

    blink_delay = SHORT;        // Define the delay time between changing the state of the LEDs
                                //  SHORT, MEDIUM, or LONG
    blink_leds_together = YES;  // Define the LED blink mode --
                                // Blink the LEDs together - YES or NO?

    timer0_init();              // Initialize timer 0 

    PSD_reg.DIRECTION_B = 0x03;             // Set port pins PB0 and PB1 to output and the 
                                            //  remaining bits to input.
    PSD_reg.DRIVE_B|=0x00;                  // Set PB0 and PB1 slew rate to slow.
    PSD_reg.DATAOUT_B = LED1_OFF_LED2_OFF;  // Initialize LED-1 and LED-2 to OFF

    while (1)
    {
        if (blink_leds_together == YES)
            PSD_reg.DATAOUT_B = LED1_ON_LED2_ON;
        else
            PSD_reg.DATAOUT_B = LED1_ON_LED2_OFF;

        timer0_delay(blink_delay);                 // Delay the defined amount of time

        if (blink_leds_together == YES)
            PSD_reg.DATAOUT_B = LED1_OFF_LED2_OFF;
        else
            PSD_reg.DATAOUT_B = LED1_OFF_LED2_ON;

        timer0_delay(blink_delay);                 // Delay the defined amount of time
    }
}


