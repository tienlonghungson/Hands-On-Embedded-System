//****************************************************************************
// @Module        Analog / Digital Converter (ADC)
// @Filename      ADC.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description:  This file contains functions that use the ADC module.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:02
//
//****************************************************************************

// USER CODE BEGIN (ADC_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (ADC_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ADC_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ADC_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ADC_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (ADC_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (ADC_General,9)

// USER CODE END


//****************************************************************************
// @Function      void ADC_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the ADC function
//                library. It is assumed that the SFRs used by this library
//                are in their reset state.
//
//                Following SFR fields will be initialized:
//                GLOBCTR  - Global Control
//                PRAR     - Priority and Arbitration Register
//                ETRCR    - External Trigger Control Register
//                CHCTRx   - Channel Control Register x
//                RCRx     - Result Control Register x
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

// USER CODE BEGIN (ADC_Init,1)

// USER CODE END

void ADC_vInit(void)
{
  // USER CODE BEGIN (ADC_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of Global Control:
  ///  -----------------------------------------------------------------------
  ///  - the ADC module clock is enabled
  ///  - the ADC module clock = 48,00 MHz
  ///

  ///  - the ADC Advance mode is selected
  ///

  ///  - the result is 10 bits wide
  ///  --- Conversion Timing -----------------
  ///  - conversion time (CTC)    = 00,83 us

  ///  - Configure global control functions

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ADC_GLOBCTR   =  0x00;         // load global control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Priority and Arbitration:
  ///  -----------------------------------------------------------------------
  ///  - the priority of request source 0 is low
  ///  - the wait-for-start mode is selected for source 0
  ///  - the priority of request source 1 is low
  ///  - the wait-for-start mode is selected for source 1
  ///  - the arbitration started by pending conversion request is selected
  ///  - Arbitration Slot 0 is enabled
  ///  - Arbitration Slot 1 is disabled

  ADC_PRAR      =  0x50;         // load Priority and Arbitration register

  SFR_PAGE(_ad1, noSST);         // switch to page 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Control Registers:
  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel 0
  ///  - the result register0 is selected
  ///  - the limit check 0 is selected

  ADC_CHCTR0    =  0x08;         // load channel control register

  ///  Configuration of Channel 1
  ///  - the result register1 is selected
  ///  - the limit check 0 is selected

  ADC_CHCTR1    =  0x05;         // load channel control register

  ///  Configuration of Channel 3
  ///  - the result register3 is selected
  ///  - the limit check 0 is selected

  ADC_CHCTR3    =  0x03;         // load channel control register

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Sample Time Control:
  ///  -----------------------------------------------------------------------

  ADC_INPCR0    =  0x00;         // load input class register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Out of range comparator:
  ///  -----------------------------------------------------------------------

  ADC_ENORC     =  0x00;         // load out of range comparator register

  SFR_PAGE(_ad4, noSST);         // switch to page 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Out of range comparator edge trigger:
  ///  -----------------------------------------------------------------------

  ADC_CNF       =  0x00;         // load out of range comparator trigger edge
                                 // select register

  ///  -----------------------------------------------------------------------
  ///  Configuration of alias register:
  ///  -----------------------------------------------------------------------

  ADC_ALR0      =  0x00;         // load alias register 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Result Control Registers:
  ///  -----------------------------------------------------------------------
  ///  Configuration of Result Control Register 0
  ///  - the data reduction filter is disabled
  ///  - the digital low pass filter is enabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF reset by read access to RESRxH

  ADC_RCR0      =  0x84;         // load result control register 0

  ///  Configuration of Result Control Register 1
  ///  - the data reduction filter is disabled
  ///  - the digital low pass filter is enabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF unchaned by read access to RESRxH

  ADC_RCR1      =  0x04;         // load result control register 1

  ///  Configuration of Result Control Register 2
  ///  - the data reduction filter is disabled
  ///  - the digital low pass filter is disabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF reset by read access to RESRxH

  ADC_RCR2      =  0x80;         // load result control register 2

  ///  Configuration of Result Control Register 3
  ///  - the data reduction filter is disabled
  ///  - the digital low pass filter is enabled
  ///  - the event interrupt is disabled
  ///  - the wait-for-read mode is disabled
  ///  - the VF reset by read access to RESRxH

  ADC_RCR3      =  0x84;         // load result control register 3

  ///  -----------------------------------------------------------------------
  ///  Channel Interrupt Node Pointer:
  ///  -----------------------------------------------------------------------
  ///  - the SR 0 line become activated if any channel  interrupt is generated

  ///  -----------------------------------------------------------------------
  ///  Out of range comparator Interrupt Node Pointer:
  ///  -----------------------------------------------------------------------
  ///  - the SR 1 line become activated if out of range comparator  interrupt
  ///  for any channel is generated

  ///  -----------------------------------------------------------------------
  ///  Event Interrupt Node Pointer:
  ///  -----------------------------------------------------------------------
  ///  - the SR 0 line become activated if the event 0-1  interrupt is
  ///  generated
  ///  - the SR 0 line become activated if the event 4-7  interrupt is
  ///  generated

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Limit Check Boundary:
  ///  -----------------------------------------------------------------------

  ADC_LCBR0     =  0x70;         // load limit check boundary register 0
  ADC_LCBR1     =  0xB0;         // load limit check boundary register 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of External Trigger Control:
  ///  -----------------------------------------------------------------------
  ///  - the trigger input ETR02 is selected for Source 0
  ///  - the trigger input ETR10 is selected for Source 1

  SFR_PAGE(_ad4, noSST);         // switch to page 4

  ADC_ETRCR     =  0x02;         // load external trigger control register

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  SFR_PAGE(_ad6, noSST);         // switch to page 6

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Queue Mode Register:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 1
  ///  - the external trigger is enabled

  ADC_QMR0      =  0x05;         // load queue mode register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Request Mode Registers:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 0
  ///  - the external trigger is disabled
  ///  - the source interrupt is disabled
  ///  - the autoscan functionality is disabled

  ADC_CRMR1     =  0x00;         // load conversion request mode register 1

  SFR_PAGE(_ad0, noSST);         // switch to page 0

  ADC_GLOBCTR  |=  0x80;         // turn on Analog part

  ///  - Out of range comparator -Interrupt (ORCIEN) remains disabled

  ///  - Channel limit checking -Interrupt (CLCIEN) remains disabled

  ///  - ADC -Interrupt (EADC) remains disabled


  // USER CODE BEGIN (ADC_Init,3)

  // USER CODE END

} //  End of function ADC_vInit






// USER CODE BEGIN (ADC_General,10)

// USER CODE END

