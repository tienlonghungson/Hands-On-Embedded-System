/*------------------------------------------------------------------------------
C_BANK3.C

Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
------------------------------------------------------------------------------*/

#include <stdio.h>

extern void func6(void);

void func3(void) {
  printf("FUNCTION IN BANK 3 CALLS A FUNCTION IN BANK 6 \n");
  func6();
}
