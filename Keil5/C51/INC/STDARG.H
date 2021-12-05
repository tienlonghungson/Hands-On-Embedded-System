/*--------------------------------------------------------------------------
STDARG.H

Prototypes for variable argument lists.
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __STDARG_H__
#define __STDARG_H__

#ifndef __CX2__
#ifndef NULL
 #define NULL ((void *)0)
#endif
#endif

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

#if defined __CX2__ && __CX2__ >= 558
  #define va_start(ap,v) ap = _va_start_ (&v, sizeof(v))
  extern void *_va_start_ (void *ap, int sz);   // intrinsic
#else
  #define va_start(ap,v) ap = (va_list)&v + sizeof(v)
#endif

#define va_arg(ap,t) (((t *)ap)++[0])
#define va_end(ap)   (ap = (va_list)0)

#endif
