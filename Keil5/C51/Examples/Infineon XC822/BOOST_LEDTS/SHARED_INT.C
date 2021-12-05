//****************************************************************************
// @Module        Shared Interrupt Routines
// @Filename      SHARED_INT.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description   This file contains the Shared interrupt routines.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:01
//
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "SHARED_INT.H"

// USER CODE BEGIN (SHARED_INT_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************


// USER CODE BEGIN (SHARED_INT_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,9)

// USER CODE END


//****************************************************************************
// @Function      void SHINT_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This function initializes the shared interrupts. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          08.01.2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_Init,1)

// USER CODE END

void SHINT_vInit(void)
{
  // USER CODE BEGIN (SHINT_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Shared  Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - LED/TS Time Frame Interrupt is Selected
  ///  - LED/TS Time Slice Interrupt is Selected


  IEN1         |=  0xA0;         // load interrupt enable register 1


  // USER CODE BEGIN (SHINT_Init,3)

  // USER CODE END


} //  End of function SHINT_vInit


//****************************************************************************
// @Function      void SHINT_viXINTR11Isr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node 
//                XINTR11. XINTR11 ISR Node is shared by CCU6 Node Pointer 1 
//                and LED/TS . Depending on the selected module interrupt it 
//                is called. 
//                CCU6 - If the content of the corresponding compare timer 
//                (configurable) equals the content of the capture/compare 
//                register or if a capture event occurs at the associated 
//                port pin, the interrupt request flag is set and an 
//                interrupt is triggered (only if enabled).
//                LED/TS - It is called after every time frame.
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
// @Date          08.01.2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_XINTR11Isr, 1)

// USER CODE END

void SHINT_viXINTR11Isr(void) interrupt XINTR11INT
{

  // USER CODE BEGIN (SHINT_XINTR11Isr, 2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  LED/TS Interrupt handling section
  ///  -----------------------------------------------------------------------
  if (TFF)
  {
    //   Time-Frame interrupt has occured

    TFF = 0;

    // ROM library support

    FINDTOUCHEDPAD();       //TS ROMLIB function

    // USER CODE BEGIN (LTS_TFIsr, 1)

    // USER CODE END
  }

  // USER CODE BEGIN (SHINT_XINTR11Isr, 3)

  // USER CODE END

} //  End of function SHINT_viXINTR11Isr

//****************************************************************************
// @Function      void SHINT_viXINTR13Isr(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node 
//                XINTR13. XINTR13 ISR Node is shared by CCU6 Node Pointer 3 
//                and LED/TS . Depending on the selected module interrupt it 
//                is called. 
//                CCU6 - If the content of the corresponding compare timer 
//                (configurable) equals the content of the capture/compare 
//                register or if a capture event occurs at the associated 
//                port pin, the interrupt request flag is set and an 
//                interrupt is triggered (only if enabled).
//                LED/TS - It is called after every time slice.
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
// @Date          08.01.2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_XINTR13Isr, 1)

// USER CODE END

void SHINT_viXINTR13Isr(void) interrupt XINTR13INT
{

  // USER CODE BEGIN (SHINT_XINTR13Isr, 2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  LED/TS Interrupt handling section
  ///  -----------------------------------------------------------------------
  if (TSF)
  {
    //   Time-slice interrupt has occured
    TSF = 0;

    // ROM library support
    SET_LDLINE_CMP(&LDLINE_VALUE[0], &TSCOMPARE[0]); //LEDTS ROMLIB function

    // USER CODE BEGIN (LTS_TSIsr, 1)

    // USER CODE END
  }

  // USER CODE BEGIN (SHINT_XINTR13Isr, 3)

  // USER CODE END

} //  End of function SHINT_viXINTR13Isr

// USER CODE BEGIN (SHARED_INT_General,10)

// USER CODE END


