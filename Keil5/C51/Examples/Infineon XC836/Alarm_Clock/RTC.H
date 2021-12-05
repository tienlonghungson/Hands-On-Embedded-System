//****************************************************************************
// @Module        Real Time Clock (RTC)
// @Filename      RTC.H
// @Project       alarm_clock.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC836MT-2F
//
// @Compiler      Keil
//
// @Codegenerator 0.03
//
// @Description:  This file contains all function prototypes and macros for 
//                the RTC module.
//
//----------------------------------------------------------------------------
// @Date          5/13/2010 11:09:47
//
//****************************************************************************

// USER CODE BEGIN (RTC_Header,1)

// USER CODE END



#ifndef _RTC_H_
#define _RTC_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (RTC_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (RTC_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (RTC_Header,4)

// USER CODE END

//****************************************************************************
// @Typedefs
//****************************************************************************

typedef struct
{
     ubyte ubREG0 :6;        // count clock or compare register 0
     ubyte ubREG1 :6;        // count clock or compare register 1
     ubyte ubREG2 :6;        // count clock or compare register 2
     ubyte ubREG3 :5;        // count clock or compare register 3
     uword uwREG4_5 :9;      // count clock or compare registers 4 and 5
}stRTC_REGx;


// USER CODE BEGIN (RTC_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (RTC_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (RTC_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void RTC_vInit(void);
void RTC_vReadClkCounter(stRTC_REGx *pstCaptValue);

// USER CODE BEGIN (RTC_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

//   Shared interrupt vector definitions are defined in SHARED_INT.H


// USER CODE BEGIN (RTC_Header,9)

// USER CODE END

#endif  // ifndef _RTC_H_
