//****************************************************************************
// @Module        Timer 0/1
// @Filename      T01.C
// @Project       keiltest.DAV
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description:  This file contains functions that use the T01 module.
//
//----------------------------------------------------------------------------
// @Date          10.02.2005 10:10:13
//
//****************************************************************************

// USER CODE BEGIN (T01_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (T01_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (T01_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (T01_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (T01_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (T01_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (T01_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (T01_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (T01_General,9)

// USER CODE END


//****************************************************************************
// @Function      void T01_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the Timer 0/1 
//                function library. It is assumed that the SFRs used by this 
//                library are in their reset state. 
//                
//                The following SFR fields will be initialized for both 
//                timers 0 and 1:
//                T0M            - Timer 0 mode
//                T1M            - Timer 1 mode
//                GATE0/GATE1    - gating control
//                TLx, THx       - timer low/high registers
//                ETx            - interrupt enable
//                TRx            - timer run control (this is the final 
//                action)
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          10.02.2005
//
//****************************************************************************

// USER CODE BEGIN (T01_Init,1)

// USER CODE END

void T01_vInit(void)
{
  // USER CODE BEGIN (T01_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Timer 0
  ///  -----------------------------------------------------------------------
  ///  Mode 2: 8-bit timer (TL0) with 8-bit auto-reload (TH0)
  ///  the timer 0 overflow, calculated from the reload-value, is 19,200 µs


  ///  -----------------------------------------------------------------------
  ///  Timer 1
  ///  -----------------------------------------------------------------------
  ///  Mode 0: 8-bit timer (TH1) with a divide-by-32 prescaler (TL1)
  ///  the timer 1 overflow is 614,400 µs


  TMOD = 0x02;

  TL0 = 0x00;
  TH0 = 0x00;

  TL1 = 0x00;
  TH1 = 0x00;

  ///  Enable Timer 0 interrupt
  ET0 = 1;

  // USER CODE BEGIN (T01_Init,3)

  // USER CODE END

  ///  Start Timer 0
  TR0 = 1;
} //  End of function T01_vInit


//****************************************************************************
// @Function      void T01_viTmr0(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the timer 0 interrupt. It 
//                is called 
//                - when TH0 overflows if timer 0 is in mode 0 or 1
//                - when TL0 overflows if timer 0 is in mode 2 or 3
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   none
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          10.02.2005
//
//****************************************************************************

// USER CODE BEGIN (T01_IsrTmr0,1)

// USER CODE END

void T01_viTmr0(void) interrupt T0INT
{

  // USER CODE BEGIN (T01_IsrTmr0,2)

  // USER CODE END

} //  End of function T01_viTmr0


// USER CODE BEGIN (T01_General,10)

// USER CODE END

