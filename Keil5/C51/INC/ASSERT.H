/*--------------------------------------------------------------------------
ASSERT.H

Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __ASSERT_H__
#define __ASSERT_H__

#ifdef assert
#undef assert
#endif

#ifndef	__ASSERT_INC
#include <stdio.h>	/* prototype for 'printf' */
#include <stdlib.h>	/* prototype for 'abort' */
#define	__ASSERT_INC
#endif

#ifndef NDEBUG

#define assert(expr) \
  do { \
    if (expr) { ; } \
    else { \
      printf("Assert failed: " #expr " (file %s line %d)\n", __FILE__, (int) __LINE__ );\
      abort();\
    } \
  } while (0)
#else
#define	assert(expr)  ((void)0)
#endif

#endif
