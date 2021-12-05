/*------------------------------------------------------------------------------
HELLO.C - adapted for the P89LPC932 and the Keil MCB900 Microcontroller Board

Copyright 1995-2005 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <REG935.H>               /* special function register declarations   */
                                  /* for the Philips P89C932 device           */

#include <stdio.h>                /* prototype declarations for I/O functions */

/* The delay C function is a for loop that
needs about 0.2 seconds execution time */
static void delay (void)  {
  unsigned long i;
  unsigned long v;

  v = AD1DAT2 * 100;              /* calculate delay (depends on A/D result   */
  for (i = 0; i < v; i++)  {      /* waste time and */
    ;                             /* do nothing */
  }
}

/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/
void main() {
  unsigned int j;
  P2M1 = 0;
  P1M1 = 0;

  SCON   = 0x52;                 /* initialize UART                            */
  BRGR0  = 0xF0;                 /* 9600 baud, 8 bit, no parity, 1 stop bit    */
  BRGR1  = 0x02;
  BRGCON = 0x03;
  ADMODA = 0x30;                 /* SCAN=1 single conversion                   */
  ADINS  = 0xF0;                 /* Enable AD10..AD13 inputs                   */
  ADMODB = 0x60;                 /* CLK: 1.5MHz for 12MHz XTAL                 */
  ADCON1 = 0x05;                 /* Enable+start A/D converter                 */

//  P2 = 0x55;

/*------------------------------------------------
Note that an embedded program never exits (because
there is no operating system to return to).  It
must loop and execute forever.
------------------------------------------------*/
  while (1) {
    for (j = 0x01; j <= 0x80; j <<= 1) { /* Blink LED 0,1,2,3,4,5,6 */
      P2 = j;       		            /* Toggle port 2 pins each time we print */
      printf ("Hello World\n");         /* Print "Hello World"                   */
      delay ();                         /* Delay about 0.2 seconds               */
    }
  }
}
