/*------------------------------------------------------------------------------
C_MODUL.C

Copyright 2010 Keil, Tools by ARM
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <reg51.h>

unsigned long msec;                   /* milli second counter    */
unsigned char intcycle;               /* interrupt cycle counter */

/**********************************************/
/* Timer 0 interrupt service function         */
/* executes each 250us @ 12 MHz Crystal Clock */
/**********************************************/
void timer0(void) interrupt 1 using 1          /* Int Vector at 000BH, Reg Bank 1  */
{
  if (++intcycle == 4)  {             /* 1 msec = 4* 250 usec cycle  */
    intcycle = 0;
    msec++;
  }
}


/***************************/
/* setup timer 0 interrupt */
/***************************/
void tinit (void)  {
  TH0 = -250;                         /* set timer period            */
  TL0 = -250;
  TMOD = TMOD | 0x02;                 /* select mode 2               */
  TR0 = 1;                            /* start timer 0               */
  ET0 = 1;                            /* enable timer 0 interrupt    */
  EA  = 1;                            /* global interrupt enable     */
}

void main(void) {
/* INITIALIZE SERIAL INTERFACE TO 2400 BAUD @12MHz */
  SCON = 0x52;    /* SCON */
  TMOD = 0x20;    /* TMOD */
  TCON = 0x69;    /* TCON */
  TH1 =  0xf3;    /* TH1 */

  tinit ();                          /* initialize timer 0 */
  while(1)  {
    printf ("MSEC=%lu\r", msec);
  }
}
