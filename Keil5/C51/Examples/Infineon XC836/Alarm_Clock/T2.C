//****************************************************************************
// @Module        Timer 2
// @Filename      T2.C
// @Project       alarm_clock.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC836MT-2F
//
// @Compiler      Keil
//
// @Codegenerator 0.03
//
// @Description:  This file contains functions that use the T2 module.
//
//----------------------------------------------------------------------------
// @Date          5/13/2010 11:09:46
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
//                T2_T2H/T2L     -  timer 2 register
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
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (T2_Init,1)

// USER CODE END

void T2_vInit(void)
{
  // USER CODE BEGIN (T2_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------
  ///  - the T2 module clock = 24.00 MHz

  //   -----------------------------------------------------------------------
  //   Operating Mode
  //   -----------------------------------------------------------------------

  ///  16-bit timer function with automatic reload when timer 2 overflows
  ///  Prescaler enabled - input clock = fPCLK/128
  ///  the timer 2 resolution is 5.333  usec
  ///  the timer 2 overflow is 250000.000  usec
  ///  timer 2 interrupt: enabled
  ///  timer 2 remains stopped

  //   -----------------------------------------------------------------------
  //   Register Initialization
  //   -----------------------------------------------------------------------

  //   the reset values of T2H and T2L are not changed

  T2_RC2LH      =  0x48E5;       // load timer 2 reload/capture register low 
                                 // & high bytes


  T2_T2MOD      =  0x1E;         // load timer 2 mode register
  T2_T2CON1     =  0x02;         // load timer 2  control register 1

  ///  timer 2 interrupt: enabled
  ET2 = 1;                       // Enable interrupt

  // USER CODE BEGIN (T2_Init,3)

  // USER CODE END

  //   timer 2 remains stopped

} //  End of function T2_vInit



//****************************************************************************
// @Function      void T2_viTmr2(void) 
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
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (T2_IsrTmr,1)

// USER CODE END

void T2_viTmr2(void) interrupt T2INT
{
  // USER CODE BEGIN (T2_IsrTmr,2)

  // USER CODE END

  if ((TF2))
  {
    //   a timer 2 overflow has occured
    TF2 = 0;

    // USER CODE BEGIN (T2_IsrTmr,3)
    /* T2 overflow interrupt occurs every 250ms */
    /* to toggle the buzzer sound & small LEDs  */
    if (LDLINE_VALUE[5] == 0xFF)   // buzzer & small LEDs are on
    {
    	LDLINE_VALUE[5] = 0x00;    // turn off buzzer & small LEDs
    }
    else
    {
    	LDLINE_VALUE[5] = 0xFF;    // turn on buzzer & small LEDs
    }
    // USER CODE END

  }

  // USER CODE BEGIN (T2_IsrTmr,5)

  // USER CODE END

} //  End of function T2_viTmr2



// USER CODE BEGIN (T2_General,10)

// USER CODE END

