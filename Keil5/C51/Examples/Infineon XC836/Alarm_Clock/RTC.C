//****************************************************************************
// @Module        Real Time Clock (RTC)
// @Filename      RTC.C
// @Project       alarm_clock.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC836MT-2F
//
// @Compiler      Keil
//
// @Codegenerator 0.03
//
// @Description:  This file contains functions that use the RTC module.
//
//----------------------------------------------------------------------------
// @Date          5/13/2010 11:09:47
//
//****************************************************************************

// USER CODE BEGIN (RTC_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"
#include <intrins.h>

// USER CODE BEGIN (RTC_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (RTC_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (RTC_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (RTC_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (RTC_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (RTC_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (RTC_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (RTC_General,9)

// USER CODE END


//****************************************************************************
// @Function      void RTC_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the RTC function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
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

// USER CODE BEGIN (RTC_Init,1)

// USER CODE END

void RTC_vInit(void)
{
  // USER CODE BEGIN (RTC_Init,2)

  // USER CODE END

  //   -----------------------------------------------------------------------
  //   32.768KHz XTAL Clock configuration:
  //   -----------------------------------------------------------------------
    SFR_PAGE(_su1, noSST);       // switch to page 1
    OSC_CON    &=  0xDF;         // Power up the 32.768 KHz oscillator pad
    while((OSC_CON & 0x40) == 0); //ensures that the 75 KHz oscillator is stabled
    OSC_CON    |=  0x08;         // Restart the 32.768 KHz
    while(OSC_CON & 0x10); //
    SFR_PAGE(_su0, noSST);       // switch to page 0

  //   -----------------------------------------------------------------------
  //   Configuration of Real-Time Clock Control Register:
  //   -----------------------------------------------------------------------
  ///  - Mode 0: Time Keeping mode with 32.768KHz XTAL clock selected
  ///  - Time Base = 15.625ms
  ///  - Real-time clock compare interrupt is disabled
  ///  - Interrupt at every second is enabled

    RTC_RTCON   =  0x20;         // load real-time clock control register

  //   -----------------------------------------------------------------------
  //   Configuration of Real-Time Clock Control Register 1:
  //   -----------------------------------------------------------------------
  ///  - Normal year (365days) selected

  //   -----------------------------------------------------------------------
  //   Configuration of Count Clock Registers:
  //   -----------------------------------------------------------------------
  //   -----------------------------------------------------------------------
  //   Configuration of Compare Registers:
  //   -----------------------------------------------------------------------


  ///  -----------------------------------------------------------------------
  ///  Start the Real-time Clock operation:
  ///  -----------------------------------------------------------------------

    RTC_RTCON |= 0x01;  //   set   RTCC

  // USER CODE BEGIN (RTC_Init,3)

  // USER CODE END

} //  End of function RTC_vInit


//****************************************************************************
// @Function      void RTC_vReadClkCounter(stRTC_REGx *pstCaptValue) 
//
//----------------------------------------------------------------------------
// @Description   This function reads the content of counter clock registers 
//                via capture mechanism.
//                
//                Note: Previous content of RTCCR registers will be 
//                overwritten with the captured event, So update of the RTCCR 
//                registers are necessary once again by calling API: 
//                RTC_ubWriteCompReg
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    stRTC_REGx *pstCaptValue: 
//                *pstCaptValue - is a structure variable, held the clock 
//                register's content
//
//----------------------------------------------------------------------------
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (RTC_vReadClkCounter,1)

// USER CODE END

void RTC_vReadClkCounter(stRTC_REGx *pstCaptValue)
{
    RTC_RTCON |= 0x08;  //   set   RTCCT

    _nop_();
    _nop_(); //wait for two PCLK cycles

    pstCaptValue->ubREG0 = RTC_RTCCR0; //read count clock register 0

    pstCaptValue->ubREG1 = RTC_RTCCR1; //read count clock register 1

    pstCaptValue->ubREG2 = RTC_RTCCR2; //read count clock register 2

    pstCaptValue->ubREG3 = RTC_RTCCR3; //read count clock register 3

    pstCaptValue->uwREG4_5 = (RTC_RTCCR5 << 8) + RTC_RTCCR4;  //read count clock register 4


} //  End of function RTC_vReadClkCounter


// USER CODE BEGIN (RTC_General,10)

// USER CODE END

