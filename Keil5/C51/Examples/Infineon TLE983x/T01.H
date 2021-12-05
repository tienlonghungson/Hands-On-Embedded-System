//****************************************************************************
// @Module        Timer 0/1
// @Filename      T01.H
//----------------------------------------------------------------------------
// @Controller    Infineon XC8xx
// @Compiler      Keil
// @Description:  This file contains all function prototypes and macros for 
//                the T01 module.
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************

#ifndef _T01_H_
#define _T01_H_


void T01_Init(void);


#define T01_TIMER_0          0
#define T01_TIMER_1          1
#define T01_MODE_0           0x00
#define T01_MODE_1           0x10
#define T01_MODE_2           0x20
#define T0INT 1							// Interrupt Vectors
#define T1INT 3							// Interrupt Vectors

#endif  // ifndef _T01_H_
