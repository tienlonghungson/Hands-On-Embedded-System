//****************************************************************************
// @Module        Timer 2
// @Filename      T2.C
// @Project       DaveTest.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description:  This file contains functions that use the T2 module.
//
//----------------------------------------------------------------------------
// @Date          09.02.2005 00:47:36
//
//****************************************************************************

// USER CODE BEGIN (T2_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (T2_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (T2_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (T2_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (T2_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (T2_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (T2_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (T2_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (T2_General,9)

// USER CODE END


//****************************************************************************
// @Function      void T2_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the Timer 2 function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                
//                The following SFRs and SFR fields will be initialized:
//                T2_RC2H/RC2L     - reload/capture timer 2 register
//                ET2           - timer 2 interrupt enable
//                T2_T2MOD         - timer 2 mode register
//                CP/RL2        - Capture/Reload select
//                EXEN2         - External enable control
//                TR2           - Timer2 run control
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

// USER CODE BEGIN (T2_Init,1)

// USER CODE END

void T2_vInit(void)
{
  // USER CODE BEGIN (T2_Init,2)

  // USER CODE END

  //   -----------------------------------------------------------------------
  //   Operating Mode
  //   -----------------------------------------------------------------------

  ///  16-bit timer function with automatic reload when timer 2 overflows
  ///  Prescaler enabled - input clock = fPCLK/16
  ///  the timer 2 resolution is 0,766 µs
  ///  the timer 2 overflow is 50197,787 µs
  ///  timer 2 interrupt: enabled
  ///  timer 2 will be started

  //   -----------------------------------------------------------------------
  //   Register Initialization
  //   -----------------------------------------------------------------------

  //   the reset values of RC2H and RC2L are not changed
  T2_T2MOD      =  0x18;         // load timer 2 mode register

  ET2 = 1;                       // Enable interrupt

  // USER CODE BEGIN (T2_Init,3)

  // USER CODE END

  TR2 = 1; //   start timer

} //  End of function T2_vInit


//****************************************************************************
// @Function      void T2_viTmr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the Timer 2 interrupt. 
//                Depending on the selected operating mode it is called when 
//                TF2 is set by an overflow or underflow of the timer 2 
//                register or when EXF2 is set by a negative transition on 
//                T2EX.
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

// USER CODE BEGIN (T2_IsrTmr,1)

// USER CODE END

void T2_viTmr(void) interrupt T2INT
{
  // USER CODE BEGIN (T2_IsrTmr,2)
  ubyte T2count;
  // USER CODE END

  if (TF2)
  {
    //   a timer 2 overflow has occured
    // USER CODE BEGIN (T2_IsrTmr,3)
  if (T2count++ > 0x02) P3_DATA ^= 0x04; // toggle every 2nd T2OF
  if (T2count > 0x04)  T2count = 0;

//    SFR_PAGE(_cc2, SST2);          // switch to page 2
//	CCU6_PAGE = 0x02;
//	CCU6_ISSH |= 0x02; // set T13PM
//    SFR_PAGE(_cc2, RST2);        // restore the old CCU page

    // USER CODE END

    TF2 = 0;
  }

  // USER CODE BEGIN (T2_IsrTmr,5)

  // USER CODE END

} //  End of function T2_viTmr


// USER CODE BEGIN (T2_General,10)

// USER CODE END

