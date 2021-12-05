/*------------------------------------------------------------------------------
C_PROG.C

Copyright 1995-2005 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <reg51.h>

extern code char *message0[];
extern code char *message1[];
extern switchbank (unsigned char);

void main(void) {

/* INITIALIZE SERIAL INTERFACE TO 2400 BAUD @12MHz */
  SCON = 0x52;    /* SCON */
  TMOD = 0x20;    /* TMOD */
  TCON = 0x69;    /* TCON */
  TH1 =  0xf3;    /* TH1 */

  switchbank(0);                /* switch to code-bank 0 */
  printf(message0[0]);
  switchbank(1);                /* switch to code-bank 1 */
  printf(message1[0]);

  while(1);
}
