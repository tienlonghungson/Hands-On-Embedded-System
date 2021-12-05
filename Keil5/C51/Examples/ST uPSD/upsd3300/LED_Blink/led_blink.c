/*------------------------------------------------------------------------------
led_blink.c

Version:
September 20, 2004 - Version 1.1 - Added some power control.
September 10, 2004 - Version 1.0 - Initial release.

Dependencies:
upsd3300_timer.c - timer driver.

Description:  LED blinking example.
The main purpose of this code is to provide a simple example that blinks the 
LEDs conected to ports PD1 (LED-2) and PD2 (LED-1).

Supported platforms:
DK3300, ED3K3

Note: It is important to modify the FREQ_OSC setting in upsd3300_hardware.h
to match the oscillator frequency on the board being used.  


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

#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_timer.h"

// Define the port D values for the specified states of LED-1 and LED-2.
// PD2 => LED-1, PD1 => LED-2
// 0 = LED on, 1 = LED off

#define LED1_ON_LED2_ON    0xF9
#define LED1_OFF_LED2_OFF  0xFF
#define LED1_ON_LED2_OFF   0xFB
#define LED1_OFF_LED2_ON   0xFD

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

    blink_delay = SHORT;       // Define the delay time between changing the state of the LEDs
                               //  SHORT, MEDIUM, or LONG
    blink_leds_together = YES; // Define the LED blink mode --
                               // Blink the LEDs together - YES or NO?

    timer0_init();             // Initialize timer 0 

    PSD_reg.PMMR0|=0x08;                    // Disable PSD Module Turbo Mode to save power
    PSD_reg.PMMR2|=0x3C;                    // Set PSD Module PLD input blocking bits to save power   

    PSD_reg.DIRECTION_D|=0x06;              // set port pins PD1 and PD2 to output
    PSD_reg.DATAOUT_D = LED1_OFF_LED2_OFF;  // Initialize LED-1 and LED-2 to OFF

    while (1)
    {
        if (blink_leds_together == YES)
            PSD_reg.DATAOUT_D = LED1_ON_LED2_ON;
        else
            PSD_reg.DATAOUT_D = LED1_ON_LED2_OFF;

        timer0_delay(blink_delay);                 // Delay the defined amount of time

        if (blink_leds_together == YES)
            PSD_reg.DATAOUT_D = LED1_OFF_LED2_OFF;
        else
            PSD_reg.DATAOUT_D = LED1_OFF_LED2_ON;

        timer0_delay(blink_delay);                 // Delay the defined amount of time
    }
}


