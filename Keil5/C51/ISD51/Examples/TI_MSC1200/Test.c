/*------------------------------------------------------------------------------
TEST.C:  ISD51 Demo for TI MSC 1210

Copyright 2003 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <REG1200.H>
#include <intrins.h>
#include <stdio.h>
#include "ISD51.h"


#ifndef XTAL                        // if no XTAL defined use:
  #define XTAL  22118400            // XTAL frequency 22.1184 MHz
#endif

unsigned char xdata testarray[0x100];   // can be used to test access breakpoints (see below)
unsigned char j;

// On-board LEDs
sbit RedLed    = P3^4; 
sbit YellowLed = P3^5; 


#if 0   // uncomment this function to verify serial communication
/*
 * Test Function: verify serial communication with HyperTerminal
 */
void TestSerial (void)  { // for UART0
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

void TestSerial (void)  { // for UART1
  char c = 'A';

  TI_1 = 1;
  while (1)  {
    if (RI_1)  {
      c = SBUF1;
      RI_1 = 0;
    }
    while (!TI_1);
    TI_1 = 0;
    SBUF1 = c;
  }
}
#endif



// Other interrupt sources such as A/D Converter SPI, PFI
// and (milli)second timer which are sharing the interrupt vector at 
// address 33H (interrupt 6) must be relocated to address 6BH (interrupt 13)!

void AuxInterrupt (void) interrupt 6 {
  unsigned char x;

  if (AISTAT & 0x80) {     // Seconds Interrupt
    YellowLed = !YellowLed;// toggle yellow LED
    x = SECINT;            // dummy read to clear SECINT interrupt request flag
  }
  AI = 0;                  // clear auxiliary interrupt request flag
}


void delay(void) {
  long i;

  i = 0x1000;
  while(i--);
}


void main (void)  {
  unsigned int i;

  CKCON = 0x10;                          // 0 MOVX cycle stretch
  TCON  = 0;

// Setup Serial Interface
  PCON  = 0x80;
  SCON  = 0x52;		        
  TMOD  = 0x20;               
  TH1   = 0xEE;                
  TR1   = 1;                  
  TI    = 1;                  

  //RedLed = ON;

  P3DDRL = 0xC0;                     // set port pins of UART to input/strong drive output
  P3DDRH = 0x00;                     // set port pins of UART to input/strong drive output


#ifdef ISD51
// The following settings are important for ISD51 (enable flash programming, disable watchdog)
  USEC   = ((XTAL+500000)/1000000)-1; // USEC timer factor
  MSEC   = (XTAL/1000)-1;             // (MSECH+MSCL) MS Timer counting at 1.0ms

  HMSEC  = 100-1;                     // Hundred MS Timer to 100.0ms
  SECINT = (10-1) | 0x80;             // SECINT= 10 * HMS Timer Rate = 1 sec
                                      // '0x80' will set the MSB for write immediate
  MSINT  = (10-1) | 0x80;             // MSINT = 10ms for Tone period time base

  FTCON  = 0xA5;                      // setup flash programming times
#endif
// Setup Auxiliary Interrupts
  AIE     = 0x81;         // set EDLVB bit to enable hardware breakpoint interrupt
                          // and ESEC bit to enable seconds interrupt

//AIE     = 0x01;         // set EDLVB bit to enable hardware breakpoint interrupt
//AIE    |= 0x80;         // read-modify-write instructions do not work on AIE!!!

  EICON  |= 0x20;         // enable all auxiliary interrupts

  EA = 1;                 // Enable global interrupt flag

//  TestSerial ();        // uncomment this function to verify serial communication
 

#if 0   // init ISD51 and start user program until the uVision2 Debugger connects
  ISDinit ();        // initialize uVision2 Debugger and continue program run
#endif

#if 0   // init ISD51 and wait until the uVision2 Debugger connects
  ISDwait ();        // wait for connection to uVision2 Debugger
#endif

// The lines below demonstrate in-application flash programming with boot-ROM functions. 
// Function entries are defined in module ROM.A51, declarations are inROM.h.  See also: MWS register above.
//  MWS    = 0x01;          // enable flash programming (and disable internal RAM)
//  page_erase (0x3000, 0x00, 0x00);        // erase a 128 byte program flash page at address 0x3000
//  write_flash_byte (0x3003, 0x55, 0x00);  // write 0x55 to address 0x3003 into program flash
//  MWS = 0x00;                             // disable flash programming (and disable internal RAM)

// Following loop can be used to test access breakpoints:  With 'BS read &testarray[10]' and hardware
// breakpoints enabled, the debugger will stop in this for-loop. By default, flash breakpoints are
// enabled
  for (i = 0; i < sizeof (testarray); i++)  {
    j = testarray[i];
  }

  while (1)  {
#if 1   // init ISD51 only when the uVision2 Debugger tries to connect
    ISDcheck();      // initialize uVision2 Debugger and continue program run
#endif
    _nop_();         // these NOP's allocate space for test breakpoints.
    _nop_();
    _nop_();
    _nop_();
    _nop_();
    printf("Hello World\n");
    _nop_();
    _nop_();
    _nop_();
    RedLed = !RedLed;  // toggle red LED
    _nop_();
    _nop_();
    _nop_();
    delay();
#if 0   // you may use ISDbreak when ISD51 is started with ISDcheck or ISDwait
    ISDbreak ();  // hard coded stop (breakpoint)
#endif
    _nop_();
    _nop_();
    _nop_();
  }
}


