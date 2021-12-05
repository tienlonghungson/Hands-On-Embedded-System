/*------------------------------------------------------------------------------
upsd3200_timer.C

Change Note:
Uncalled functions commented out to avoid compiler warnings.

Version:
September 2004 Ver 2.0 - Updated include file names, modified comments.

Dependencies:
FREQ_OSC - used to set up timer properly.  
FREQ_OSC is specified in upsd3200_hardware.h and must be defined.
Timer0 ISR makes use of Register Set 1.

Description:
uPSD3200 Timer 0 device driver functions.  This function sets
up timer 0 as a timer used to count 10 ms periods used to
delay and timing functions.


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

/*------------------------------------------------------------------------------
              Local Variable Declarations
------------------------------------------------------------------------------*/
static unsigned int idata timer0_tick;
unsigned int timer0_value;

/*------------------------------------------------------------------------------
timer0_isr()

This function is an interrupt service routine for TIMER 0.  It should never
be called by a C or assembly function.  It will be executed automatically
when TIMER 0 overflows.

This ISR stops timer0, adjusts the counter so that another interrupt occurs in
10ms, and then restarts the timer.
------------------------------------------------------------------------------*/
static void timer0_isr (void) interrupt TF0_VECTOR using 1
{
    TR0 = 0;                      /* stop timer 0 */
    TL0 = (timer0_value & 0x00FF);
    TH0 = (timer0_value >> 8);
    TR0 = 1;                      /* start timer 0 */
    timer0_tick++;                // Increment global var timer_tick (number of 10ms ticks)
}

/*------------------------------------------------------------------------------
timer0_init();

This function enables TIMER 0.  TIMER 0 will generate a synchronous interrupt
once every 100Hz (10ms).
------------------------------------------------------------------------------*/
void timer0_init (void)
{
    EA = 0;                 /* disable interrupts */
    timer0_tick = 0;
    TR0 = 0;                /* stop timer 0 */
    TMOD &= 0xF0;           /* clear timer 0 mode bits - bottom 4 bits */
    TMOD |= 0x01;           /* put timer 0 into 16-bit no prescale */

    // Calculate timer rollover based on FREQ_OSC to be 10ms periods (100hz)
    timer0_value = 0x10000 - ( ((FREQ_OSC * 5L) / 6L) - 17L);
    TL0 = (timer0_value & 0x00FF);
    TH0 = (timer0_value >> 8);

    PT0 = 1;                /* set high priority interrupt for timer 0 */
    ET0 = 1;                /* enable timer 0 interrupt */
    TR0 = 1;                /* start timer 0 */
    EA = 1;                 /* enable interrupts */
}


/*------------------------------------------------------------------------------
timer0_count ();

This function returns the current Timer 0 tick count.
------------------------------------------------------------------------------*/
unsigned int timer0_count (void)
{
    unsigned int t;

    EA = 0;               // disable interrupts to read a non-changing value
    t = timer0_tick;
    EA = 1;               // enable interrupts
    return(t);
}

/*------------------------------------------------------------------------------
timer0_delay (count);

This is a delay function that waits for the specified number of timer 0 ticks to
pass before returning.

count   - unsigned int
        - the number of timer ticks to wait before returning from function.
------------------------------------------------------------------------------*/
void timer0_delay (unsigned int count)
{
unsigned int start_count;

start_count = timer0_count(); /* get the start count */

while ((timer0_count() - start_count) <= count)   /* wait for count "ticks" */
{
    PCON |= 0x01;    // Idle MCU to wait for timer tick
}
}


/*------------------------------------------------------------------------------
delay_10ms ();

This is a 10 ms delay function.
------------------------------------------------------------------------------*/
/*
void delay_10ms()
{
    timer0_delay(1);
}
*/

/*------------------------------------------------------------------------------
delay_1sec ();

This is a 1 second delay function.
------------------------------------------------------------------------------*/
/*
void delay_1sec(void)
{
    timer0_delay(100);
}
*/

/*------------------------------------------------------------------------------
delay_2sec ();

This is a 2 second delay function.
------------------------------------------------------------------------------*/
/*
void delay_2sec(void)
{
    delay_1sec();
    delay_1sec();
}
*/

/*------------------------------------------------------------------------------
delay_10sec ();

This is a 10 second delay function.
------------------------------------------------------------------------------*/
/*
void delay_10sec(void)
{
    delay_2sec();
    delay_2sec();
    delay_2sec();
    delay_2sec();
    delay_2sec();
}
*/

/*------------------------------------------------------------------------------
delay_0_5sec ();

This is a 0.5 second delay function.
------------------------------------------------------------------------------*/
/*
void delay_0_5sec(void)
{
    timer0_delay(50);
}
*/

/*------------------------------------------------------------------------------
delay0_1sec ();

This is a 0.1 second delay function.
------------------------------------------------------------------------------*/
/*
void delay_0_1sec(void)
{
    timer0_delay(10);
}
*/

