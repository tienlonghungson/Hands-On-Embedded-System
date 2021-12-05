/*--------------------------------------------------------------------------
STDLIB.H

Standard functions.
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __STDLIB_H__
#define __STDLIB_H__

#ifndef _SIZE_T
 #define _SIZE_T
 typedef unsigned int size_t;
#endif

#ifndef NULL
 #define NULL ((void *)0)
#endif

#ifndef _WCHAR_T_DEFINED_
#define _WCHAR_T_DEFINED_
typedef char wchar_t;
#endif

#if defined (__CX2__)
#ifndef _DIV_T_DEFINED
typedef struct _div_t {
        int quot;
        int rem;
} div_t;
typedef struct _ldiv_t {
        long quot;
        long rem;
} ldiv_t;
#define _DIV_T_DEFINED
#endif // _DIV_T_DEFINED
#endif // __CX2__

#ifndef RAND_MAX
 #define RAND_MAX  32767u
#endif

#if defined (__CX2__)
#pragma SAVE
#pragma FUNCTIONS(STATIC)
/* intrinsic functions are reentrant, but need static attribute */
extern int    abs  (int   val);
#pragma RESTORE
#endif // __CX2__

#pragma SAVE
#pragma REGPARMS

extern char   cabs (char  val);
#if !defined (__CX2__)
extern int    abs  (int   val);
#endif // __CX2__
extern long   labs (long  val);

extern float  atof (const char *s1);
extern long   atol (const char *s1);
extern int    atoi (const char *s1);
extern int    rand (void);
extern void   srand (unsigned int seed);

#ifdef _DIV_T_DEFINED
extern div_t  __div (int numer, int denom);
#define div(numer,denom)  __div((numer),(denom));
extern ldiv_t ldiv (long numer, long denom);
#endif // _DIV_T_DEFINED

extern float         strtod  (const char *nptr, char **endptr);
extern long          strtol  (const char *nptr, char **endptr, unsigned char base);
extern unsigned long strtoul (const char *nptr, char **endptr, unsigned char base);

#define _MALLOC_MEM_	xdata

extern void init_mempool          (void _MALLOC_MEM_ *p, size_t size);
extern void _MALLOC_MEM_ *malloc  (size_t size);
extern void free                  (void _MALLOC_MEM_ *p);
extern void _MALLOC_MEM_ *realloc (void _MALLOC_MEM_ *p, size_t size);
extern void _MALLOC_MEM_ *calloc  (size_t nmemb, size_t size);

#if defined (__CX2__)
extern void abort(void);
#endif // __CX2__

#pragma RESTORE

#endif // __STDLIB_H__
