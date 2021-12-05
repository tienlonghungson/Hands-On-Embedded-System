/*------------------------------------------------------------------------------
TEST.C:  ISD51 Demo for classic 8051 devices like Philips 89C51RD2/89C66x

Copyright 2002 - 2003 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <reg24e1.H>
#include <intrins.h>
#include <absacc.h>
#include "ISD51.h"

unsigned char j;

unsigned char code testarray[] = "Some Text";


#if 0   // uncomment this function to verify serial communication

/*
 * Test Function: verify serial communication with HyperTerminal
 */
void TestSerial (void)  {
  char c = 'A';

  TI = 1;
  while (1)  {
    if (RI)  {
      c = SBUF;
      RI = 0;
    }
    while (!TI);
    TI = 0;
    SBUF = c;
  }
}

#endif

void delay(void) {
  long i;
  
  i = 0x800;
  while(i--);
}

void main (void)  {
  unsigned int i;

  P0_DIR |= 0x02;                             // P0.1 (RxD) is an input
  P0_ALT |= 0x06;                             // Select alternate functions on pins P0.1 and P0.2

  T2CON   = 0x34;      /* Use Timer 2 as baudrate generator  */

  RCAP2H  = 0xFF;
  RCAP2L  = 0xF7;      /* 57600 baud @ 16MHz                  */

  SCON    = 0x50;      /* enable serial uart & receiver      */
  EA = 1;              /* Enable global interrupt flag       */

//TestSerial ();      // uncomment this function to verify serial communication
 
#if 0   // init ISD51 and start user program until the uVision2 Debugger connects
  ISDinit ();        // initialize uVision2 Debugger and continue program run
#endif

#if 0   // init ISD51 and wait until the uVision2 Debugger connects
  ISDwait ();        // wait for connection to uVision2 Debugger
#endif

  for (i = 0; i < sizeof (testarray); i++)  {
   j = testarray[i];
  }

  while (1)  {
#if 1   // init ISD51 only when the uVision2 Debugger tries to connect
    ISDcheck();      // initialize uVision2 Debugger and continue program run
#endif
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    _nop_();
#if 0   // you may use ISDbreak when ISD51 is started with ISDcheck or ISDwait
    ISDbreak ();  // hard coded stop (breakpoint)
#endif
    delay();
    _nop_();
    _nop_();
    _nop_();
  }
}


