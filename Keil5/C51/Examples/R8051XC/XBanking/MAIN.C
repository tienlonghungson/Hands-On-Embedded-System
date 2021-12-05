#include <REG51XC.H>                     // SFR definition header file
#include <stdio.h>                       // prototype declarations for I/O functions



/*
 * these large arrays are stored in 'banked' xdata and code memory
 */ 
              unsigned char far large_array0[0x8000];
extern        unsigned char far large_array1[0x8000];

/* 
 * the following timer interrupt routine uses a variable in xdata space
 * Note: This configuration allows xdata variable accesses in interrupt routines   
 *       with compiler directive VARBANKING because the common area is not part of 
 *       an xdata bank. However, if far variables are used in interrupt routines,
 *       the project must be translated with VARBANKING(1) => uVision dialog
 *       'Options — Target — Save address extension SFR in interrupts'
 */
#define PERIOD     -250                   // 250 usec interrupt period
unsigned char xdata timer_tick;           // xdata variable

void timer0 (void) interrupt 1 using 1 {  // Int Vector at 000BH, Reg Bank 1
  timer_tick++;                           // increment xdata variable
}

/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/

void main (void) {
  unsigned int i;
/*------------------------------------------------
Setup the serial port for 1200 baud at 16MHz.
------------------------------------------------*/
#ifndef MONITOR51
  S0CON  = 0x50;              // S0CON: mode 1, 8-bit UART, enable rcvr
  TMOD |= 0x20;               // TMOD: timer 1, mode 2, 8-bit reload
  TH1   = 221;                // TH1:  reload value for 1200 baud @ 16MHz
  TR1   = 1;                  // TR1:  timer 1 run
  TI0    = 1;                 // TI0:  set TI to send first char of UART
#endif

/* setup the timer 0 interrupt */
  TH0 = (unsigned char) PERIOD;          // set timer period
  TL0 = (unsigned char) PERIOD;
  TMOD = TMOD | 0x02;                    // select mode 2
  TR0 = 1;                               // start timer 0
  ET0 = 1;                               // enable timer 0 interrupt
  EAL = 1;                               // global interrupt enable

  for (i = 0; i < sizeof (large_array0); i++)  {
    large_array0[i] = (unsigned char) i;      // just an example
    large_array1[i] = (unsigned char) i+0x80; // just an example
  }
  for (i = 0; i < 20; i++)  {
    printf ("\nRead large_array0[0x%X]=%bX", i, large_array0[i]);
  }
  for (i = 0; i < 20; i++)  {
    printf ("\nRead large_array1[0x%X]=%bX", i, large_array1[i]);
  }
  while (1);
}


