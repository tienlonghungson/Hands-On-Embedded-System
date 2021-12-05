/*------------------------------------------------------------------------------
C_ROOT.C

Copyright 1995-2005 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <reg51.h>
#include <string.h>

extern void func0(void);
extern void func1(void);

unsigned int xdata  xarr[100];   // array in standard xdata memory
unsigned int far    farr[100];   // array in xdata bank 1
unsigned char xdata xstr[100];   // xdata string


void main(void) {

  unsigned int i;

/* INITIALIZE SERIAL INTERFACE TO 2400 BAUD @12MHz */
  SCON = 0x52;    /* SCON */
  TMOD = 0x20;    /* TMOD */
  TCON = 0x69;    /* TCON */
  TH1 =  0xf3;    /* TH1 */

  strcpy (xstr, "Test of multiple DPTR support");

  for (i = 0; i < 100; i++)  {  // initialize arrays 
    xarr[i] = i | 0x100;
    farr[i] = i | 0x200;
  }

  printf("MAIN PROGRAM CALLS A FUNCTION IN BANK 0 \n");
  func0();
  printf("MAIN PROGRAM CALLS A FUNCTION IN BANK 1 \n");
  func1();

  while(1);
}
