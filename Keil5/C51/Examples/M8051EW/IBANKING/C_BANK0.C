/*------------------------------------------------------------------------------
C_BANK0.C

Copyright 1995-2005 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <stdio.h>

extern void func2(void);

void func0(void) {
  printf("FUNCTION IN BANK 0 CALLS A FUNCTION IN BANK 2 \n");
  func2();
}

void intrp0 (void)  interrupt 0  {
  ;
}

