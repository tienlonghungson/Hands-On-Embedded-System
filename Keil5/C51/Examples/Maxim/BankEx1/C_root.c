/*------------------------------------------------------------------------------
C_ROOT.C

Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <REG71M6543G.H>

extern void func0(void);
extern void func1(void);

void main(void) {

/* INITIALIZE SERIAL INTERFACE TO 2400 BAUD @12MHz */
  S0CON = 0x52;    /* SCON */
  TMOD  = 0x20;    /* TMOD */
  TCON  = 0x69;    /* TCON */
  TH1   = 0xf3;    /* TH1 */

  printf("MAIN PROGRAM CALLS A FUNCTION IN BANK 0 \n");
  func0();
 
  printf("MAIN PROGRAM CALLS A FUNCTION IN BANK 1 \n");
  func1();
 

  while(1);
}
