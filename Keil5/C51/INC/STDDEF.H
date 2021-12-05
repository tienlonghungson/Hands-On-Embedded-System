/*--------------------------------------------------------------------------
STDDEF.H

Standard definitions.
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __STDDEF_H__
#define __STDDEF_H__

#ifndef NULL
 #define NULL ((void *)0)
#endif

#ifndef _SIZE_T
 #define _SIZE_T
 typedef unsigned int size_t;
#endif

#ifndef _WCHAR_T_DEFINED_
#define _WCHAR_T_DEFINED_
typedef char wchar_t;
#endif

#ifdef __CX2__
typedef int    ptrdiff_t;
#else
typedef long   ptrdiff_t;   // changed to 'long' due to 'far' pointer support
#endif
#define offsetof(s,m)	((size_t)&(((s code *)0)->m))

#endif

