//****************************************************************************
// @Module        Timer 0/1
// @Filename      T01.C
// @Project       DaveTest.dav
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
// @Date          09.02.2005 00:47:36
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
// @Date          09.02.2005
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
  ///  Mode 0: 8-bit timer (TH0) with a divide-by-32 prescaler (TL0)
  ///  the timer 0 overflow is 65,362 µs


  ///  -----------------------------------------------------------------------
  ///  Timer 1
  ///  -----------------------------------------------------------------------
  ///  Mode 0: 8-bit timer (TH1) with a divide-by-32 prescaler (TL1)
  ///  the timer 1 overflow is 65,362 µs


  TMOD = 0x00;

  TL0 = 0x00;
  TH0 = 0x00;

  TL1 = 0x00;
  TH1 = 0x00;

  ///  Enable Timer 0 interrupt
  ET0 = 1;
  ///  Enable Timer 1 interrupt
  ET1 = 1;

  // USER CODE BEGIN (T01_Init,3)

  // USER CODE END

  ///  Start Timer 0
  TR0 = 1;
  ///  Start Timer 1
  TR1 = 1;
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
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (T01_IsrTmr0,1)
uword T0count;
// USER CODE END

void T01_viTmr0(void) interrupt T0INT
{

  // USER CODE BEGIN (T01_IsrTmr0,2)
  if (T0count++ > 0x100) P3_DATA ^= 0x02; // toggle every 256 T0
  if (T0count > 0x200)  T0count = 0;

  // USER CODE END

} //  End of function T01_viTmr0


//****************************************************************************
// @Function      void T01_viTmr1(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the timer 1 interrupt. It 
//                is called 
//                - when TH1 overflows if timer 1 is in mode 0 or 1 and timer 
//                0 is not in mode 3
//                - when TL1 overflows if timer 1 is in mode 2 and timer 0 is 
//                not in mode 3
//                - when TH0 overflows if timer 0 is in mode 3
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
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (T01_IsrTmr1,1)
unsigned char T1count;
// USER CODE END

void T01_viTmr1(void) interrupt T1INT
{

  // USER CODE BEGIN (T01_IsrTmr1,2)
  if (T1count++ > 0x80)  P3_DATA ^= 0x02; // toggle for 128 T1count

  // USER CODE END

} //  End of function T01_viTmr1


// USER CODE BEGIN (T01_General,10)

// USER CODE END

