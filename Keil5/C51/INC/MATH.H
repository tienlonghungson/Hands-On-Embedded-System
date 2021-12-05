/*--------------------------------------------------------------------------
MATH.H

Prototypes for mathematic functions.
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __MATH_H__
#define __MATH_H__

#if defined __CX2__ && (__CX2__ >= 558 || __CX2__ == 556 && __CX2_MINOR__ >= 207)
#ifndef HUGE_VAL
#define HUGE_VAL __inf__
#endif // HUGE_VAL

#ifndef NAN
#define NAN __nan__
#endif // NAN

#pragma SAVE
#pragma FUNCTIONS(STATIC)
/* intrinsic functions are reentrant, but need static attribute */
extern int    abs  (int   val);
#pragma RESTORE
#endif

#pragma SAVE
#pragma REGPARMS
#if !defined (__CX2__)
extern char  cabs  (char  val);
extern int    abs  (int   val);
extern long  labs  (long  val);
#endif

extern float fabs  (float val);
extern float sqrt  (float val);
extern float exp   (float val);
extern float log   (float val);
extern float log10 (float val);
extern float sin   (float val);
extern float cos   (float val);
extern float tan   (float val);
extern float asin  (float val);
extern float acos  (float val);
extern float atan  (float val);
extern float sinh  (float val);
extern float cosh  (float val);
extern float tanh  (float val);
extern float atan2 (float y, float x);

extern float ceil  (float val);
extern float floor (float val);
extern float modf  (float val, float *n);
extern float fmod  (float x, float y);
extern float pow   (float x, float y);

#if defined (__CX2__)
extern float frexp (float val, int *exp);
extern float ldexp (float val, int exp);
#endif

#pragma RESTORE

#endif
