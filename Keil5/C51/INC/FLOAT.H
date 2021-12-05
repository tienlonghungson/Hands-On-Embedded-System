/*--------------------------------------------------------------------------
FLOAT.H

Limits for floating point types.
Copyright (c) 1988-2008 Keil Elektronik GmbH and ARM Germany GmbH
Copyright (c) 2008-2016 ARM Germany GmbH
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __FLOAT_H__
#define __FLOAT_H__

#define FLT_RADIX        2
#define FLT_ROUNDS       0

#define FLT_DIG          6
#define FLT_EPSILON	 5.96046e-8
#define FLT_MANT_DIG     24
#define FLT_MAX		 3.402823466e38
#define FLT_MAX_EXP      128
#define FLT_MAX_10_EXP	 38
#define FLT_MIN		 1.175494351e-38
#define FLT_MIN_EXP	 (-125)
#define FLT_MIN_10_EXP   (-37)

#define DBL_RADIX 	FLT_RADIX
#define DBL_ROUNDS	FLT_ROUNDS
#define DBL_DIG		FLT_DIG
#define DBL_EPSILON	FLT_EPSILON
#define DBL_MANT_DIG	FLT_MANT_DIG
#define DBL_MAX		FLT_MAX
#define DBL_MAX_EXP	FLT_MAX_EXP
#define DBL_MAX_10_EXP	FLT_MAX_10_EXP
#define DBL_MIN		FLT_MIN
#define DBL_MIN_EXP	FLT_MIN_EXP
#define DBL_MIN_10_EXP	FLT_MIN_10_EXP

#define LDBL_RADIX 	FLT_RADIX
#define LDBL_ROUNDS	FLT_ROUNDS
#define LDBL_DIG	FLT_DIG
#define LDBL_EPSILON	FLT_EPSILON
#define LDBL_MANT_DIG	FLT_MANT_DIG
#define LDBL_MAX	FLT_MAX
#define LDBL_MAX_EXP	FLT_MAX_EXP
#define LDBL_MAX_10_EXP	FLT_MAX_10_EXP
#define LDBL_MIN	FLT_MIN
#define LDBL_MIN_EXP	FLT_MIN_EXP
#define LDBL_MIN_10_EXP	FLT_MIN_10_EXP

#endif /* _floath */
