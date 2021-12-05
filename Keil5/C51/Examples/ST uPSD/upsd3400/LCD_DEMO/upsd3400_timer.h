/*--------------------------------------------------------------------------
upsd3400_timer.h

Version:
May 2005 Version 1.0 - Initial release.

Dependencies: None.

Description:
This is the header file for the uPSD3400 Timer 0 Device Driver
(upsd3400_timer.c).


Copyright (c) 2005 STMicroelectronics

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
--------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
timer0_init();

This function enables TIMER 0.  TIMER 0 will generate a synchronous interrupt
once every 100Hz.
------------------------------------------------------------------------------*/
void timer0_init (void);

/*------------------------------------------------------------------------------
timer0_count ();

This function returns the current Timer 0 tick count.
------------------------------------------------------------------------------*/
unsigned int timer0_count (void);

/*------------------------------------------------------------------------------
timer0_delay (count);

This is a delay function that waits for the specified number of timer 0 ticks to
pass before returning.

count   - unsigned int
        - the number of timer ticks to wait before returning from function.
------------------------------------------------------------------------------*/
void timer0_delay (unsigned int count);

/*------------------------------------------------------------------------------
delay_10ms ();

This is a 10 ms delay function.
------------------------------------------------------------------------------*/
void delay_10ms(void);

/*------------------------------------------------------------------------------
delay_1sec ();

This is a 1 second delay function.
------------------------------------------------------------------------------*/
void delay_1sec(void);

/*------------------------------------------------------------------------------
delay_2sec ();

This is a 2 second delay function.
------------------------------------------------------------------------------*/
void delay_2sec(void);

/*------------------------------------------------------------------------------
delay_10sec ();

This is a 10 second delay function.
------------------------------------------------------------------------------*/
void delay_10sec(void);

/*------------------------------------------------------------------------------
delay_0_5sec ();

This is a 0.5 second delay function.
------------------------------------------------------------------------------*/
void delay_0_5sec(void);

/*------------------------------------------------------------------------------
delay0_1sec ();

This is a 0.1 second delay function.
------------------------------------------------------------------------------*/
void delay_0_1sec(void);


