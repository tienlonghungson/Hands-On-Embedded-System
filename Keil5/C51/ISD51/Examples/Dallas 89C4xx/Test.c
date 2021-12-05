/*------------------------------------------------------------------------------
TEST.C:  ISD51 Demo for classic 8051 devices like Philips 89C51RD2/89C66x

Copyright 2002 - 2003 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <REG420.H>

#include <intrins.h>
#include <absacc.h>
#include "ISD51.h"

#define SBUF   SBUF0
#define ES     ES0

unsigned char j;

unsigned char xdata test;

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
unsigned long i;
  
  i = 150000;
  _nop_();
  while(i--);
}

void main (void)  {
  unsigned int i;


  TMOD  = 0x21;   // Timer 1: 8-bit autoreload from TH1
  TH1   = 221;    // 14400 baud rate
  CKMOD = 0x38;   // Use system clock for timer inputs
  T2CON = 0x00;   // Serial 0 runs off timer 1 overflow
  TCON  = 0x50;   // Enable timers 0 and 1
  SCON0 = 0x50;   // Enable serial port 0
  SBUF0 = ' ';

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
   test = j;
  }

  while (1)  {
#if 1   // init ISD51 only when the uVision2 Debugger tries to connect
    ISDcheck();      // initialize uVision2 Debugger and continue program run
#endif
    P1 ^= 0x10;
#if 0   // you may use ISDbreak when ISD51 is started with ISDcheck or ISDwait
    ISDbreak ();  // hard coded stop (breakpoint)
#endif
    delay();
  }
}


