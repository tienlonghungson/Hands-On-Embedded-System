/*--------------------------------------------------------------------------
SETJMP.H

Prototypes for longjmp facility.
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

/* define the buffer type for holding the state information */
#ifndef __SETJMP_H__
#define __SETJMP_H__

 #if defined (__CX51__)
  #define _JBLEN	9  /* SP, SPE, ?C_XBP, ?C_IBP, ?C_PBP, RET-ADDR */
 #elif defined (__CX2__)
  #define _JBLEN	7  /* SP, SPE, ?C_XBP, RET-ADDR */
 #else
  #define _JBLEN	7  /* RET-ADDR, ?C_XBP, ?C_IBP, ?C_PBP, SP */
  /* for Dallas 390:          RET-ADDR, ?C_XBP, ?C_IBP, PCX,    SP */
 #endif

typedef  char jmp_buf[_JBLEN];

/* function prototypes */
extern volatile int  setjmp  (jmp_buf);
extern volatile void longjmp (jmp_buf, int);
#endif

