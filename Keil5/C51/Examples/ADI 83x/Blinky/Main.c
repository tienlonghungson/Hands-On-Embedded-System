#include <ADUC834.H>

/* 
 * the following timer interrupt routine increments TimerTick and sets a global flag to blink the LED
 */
#define PERIOD     -250                   // 250 clock cycles interrupt period
unsigned int  TimerTick;                  // variable to count interrupts
bit           TimeOver;                   // flag for main function to toggle port pin

void timer0 (void) interrupt 1 using 1{   // Int Vector at 000BH, Reg Bank 1

  TimerTick++;                            // increment interrupt counter
  if (TimerTick > 200) {
    TimeOver  = 1;                        // set event
    TimerTick = 0;
  }
}

/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/

void main (void) {

/* setup the timer 0 interrupt */
  TH0   = (unsigned char) PERIOD;        // set timer period
  TL0   = (unsigned char) PERIOD;
  TMOD |= TMOD | 0x02;                   // select mode 2
  TR0   = 1;                             // start timer 0
  ET0   = 1;                             // enable timer 0 interrupt
  EA    = 1;                             // global interrupt enable


  while (1) {
    while(!TimeOver);                    // wait until interrupt service routine sets flag
    P3 ^= 0x10;                          // blink LED on board
    TimeOver = 0;
  }
}
