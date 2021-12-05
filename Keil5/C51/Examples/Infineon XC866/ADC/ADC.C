//****************************************************************************
// @Module        Analog / Digital Converter (ADC)
// @Filename      ADC.C
// @Project       test2.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866
//
// @Compiler      Keil
//
// @Codegenerator 1.0
//
// @Description:  This file contains functions that use the ADC module.
//
//----------------------------------------------------------------------------
// @Date          2/3/2005 11:33:36 AM
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
// @Date          2/3/2005
//
//****************************************************************************

// USER CODE BEGIN (ADC_Init,1)

// USER CODE END

void ADC_vInit(void)
{
  // USER CODE BEGIN (ADC_Init,2)

  // USER CODE END

    ADC_PAGE    =  0x00;         // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Global Control:
  ///  -----------------------------------------------------------------------
  ///  - the ADC module clock is enabled
  ///  - the ADC module clock = 26.67 MHz
  ///   
  ///  --- Conversion Timing -----------------
  ///  - conversion time (CTC)    = 00.34 us
  ///  - the result data width is 8 bits wide

    ADC_GLOBCTR  =  0xC0;        // load global control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Priority and Arbitration:
  ///  -----------------------------------------------------------------------
  ///  - the priority of request source 0 is low
  ///  - the wait-for-start mode is selected for source 0
  ///  - the priority of request source 1 is high
  ///  - the wait-for-start mode is selected for source 1
  ///  - the arbitration started by pending conversion request is selected
  ///  - the ASEN0 is disabled
  ///  - the ASEN1 is enabled

    ADC_PRAR    =  0x94;         // load Priority and Arbitration register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Limit Check Boundary:
  ///  -----------------------------------------------------------------------

    ADC_LCBR    =  0x00;         // load limit check boundary register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Sample Time Control:
  ///  -----------------------------------------------------------------------

    ADC_INPCR0  =  0x00;         // load input class register

  ///  -----------------------------------------------------------------------
  ///  Configuration of External Trigger Control:
  ///  -----------------------------------------------------------------------
  ///  - the trigger input for Source 0 ETR0is selected
  ///  - the trigger input for Source 1 ETR0is selected
  ///  - the synchronizing stage is not in external trigger input REQTR0 path
  ///  - the synchronizing stage is not in external trigger input REQTR1 path

    ADC_ETRCR   =  0x00;         // load external trigger control register

    ADC_PAGE    =  0x01;         // switch to page 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Control Registers:
  ///  -----------------------------------------------------------------------
  ///  - the result register0 is selected
  ///  - the limit check 0 is selected

    ADC_CHCTR4  =  0x00;         // load channel control register

  ///  - the result register1 is selected
  ///  - the limit check 0 is selected

    ADC_CHCTR5  =  0x01;         // load channel control register

  ///  - the result register2 is selected
  ///  - the limit check 0 is selected

    ADC_CHCTR6  =  0x02;         // load channel control register

  ///  - the result register3 is selected
  ///  - the limit check 0 is selected

    ADC_CHCTR7  =  0x03;         // load channel control register

    ADC_PAGE    =  0x06;         // switch to page 6

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Control Registers:
  ///  -----------------------------------------------------------------------

    ADC_CRPR1   =  0x00;         // load conversion request control register 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Request Mode Registers:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 1
  ///  - the external trigger is disabled
  ///  - the source interrupt is disabled
  ///  - the autoscan functionality is disabled

    ADC_CRMR1   =  0x01;         // load conversion request mode register 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Queue Mode Register:
  ///  -----------------------------------------------------------------------
  ///  - the gating line is permanently 0
  ///  - the external trigger is disabled
  ///  - the trigger mode 0 is selected

    ADC_QMR0    =  0x00;         // load conversion request mode register 1

  ///  -----------------------------------------------------------------------
  ///  Configuration of Conversion Queue Input Register:
  ///  -----------------------------------------------------------------------
  ///  - the requested channel number is 0
  ///  - the refill is 0
  ///  - the source interrupt is disabled
  ///  - the external trigger is disabled

    ADC_QINR0   =  0x00;         // load conversion request mode register 1

    ADC_PAGE    =  0x04;         // switch to page 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Result Control Registers:
  ///  -----------------------------------------------------------------------
  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the FIFO functionlaity is disabled
  ///  - the wait-for-read mode is enabled
  ///  - the VF reset by read access to RESRxH/RESRAxH

    ADC_RCR0    =  0xC0;         // load result control register 0

  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the FIFO functionlaity is disabled
  ///  - the wait-for-read mode is enabled
  ///  - the VF reset by read access to RESRxH/RESRAxH

    ADC_RCR1    =  0xC0;         // load result control register 1

  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the FIFO functionlaity is disabled
  ///  - the wait-for-read mode is enabled
  ///  - the VF reset by read access to RESRxH/RESRAxH

    ADC_RCR2    =  0xC0;         // load result control register 2

  ///  - the data reduction filter is disabled
  ///  - the event interrupt is disabled
  ///  - the FIFO functionlaity is disabled
  ///  - the wait-for-read mode is enabled
  ///  - the VF reset by read access to RESRxH/RESRAxH

    ADC_RCR3    =  0xC0;         // load result control register 3

  ///  -----------------------------------------------------------------------
  ///  Configuration of Valid Flag Clear Register:
  ///  -----------------------------------------------------------------------

    ADC_VFCR    =  0x00;         // load clear valid flag register 

    ADC_PAGE    =  0x05;         // switch to page 5

  ///  -----------------------------------------------------------------------
  ///  Configuration of Clear Channel Interrupt Register:
  ///  -----------------------------------------------------------------------

    ADC_CHINCR  =  0x00;         // load channel interrupt clear register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Set Channel Interrupt Register:
  ///  -----------------------------------------------------------------------

    ADC_CHINSR  =  0x00;         // load channel interrupt set register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Channel Interrupt Node Pointer Register:
  ///  -----------------------------------------------------------------------
  ///  - the SR 0 line become activated if channel 0 interrupt is generated
  ///  - the SR 0 line become activated if channel 1 interrupt is generated
  ///  - the SR 0 line become activated if channel 2 interrupt is generated
  ///  - the SR 0 line become activated if channel 3 interrupt is generated
  ///  - the SR 0 line become activated if channel 4 interrupt is generated
  ///  - the SR 0 line become activated if channel 5 interrupt is generated
  ///  - the SR 0 line become activated if channel 6 interrupt is generated
  ///  - the SR 0 line become activated if channel 7 interrupt is generated

    ADC_CHINPR  =  0x00;         // load channel interrupt node pointer 
                                 // register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Clear Event Interrupt Flag Register:
  ///  -----------------------------------------------------------------------

    ADC_EVINCR  =  0x00;         // load event interrupt clear flag register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Set Event Interrupt Flag Register:
  ///  -----------------------------------------------------------------------

    ADC_EVINSR  =  0x00;         // load event interrupt set flag register 

  ///  -----------------------------------------------------------------------
  ///  Configuration of Event Interrupt Node Pointer Registers:
  ///  -----------------------------------------------------------------------

    ADC_EVINPR  =  0x00;         // load event interrupt set flag register 

    ADC_PAGE    =  0x00;         // switch to page 0

  ///  - ADC-Interrupt (EADC) remains disabled


  // USER CODE BEGIN (ADC_Init,3)

  // USER CODE END

} //  End of function ADC_vInit


//****************************************************************************
// @Function      ubyte ADC_bBusy(void) 
//
//----------------------------------------------------------------------------
// @Description   This function checks the conversion state of the current 
//                ADC-channel by examination of the busy flag (BUSY). It 
//                returns TRUE while a conversion is running.
//
//----------------------------------------------------------------------------
// @Returnvalue   1 if conversion is currently active, else 0
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2/3/2005
//
//****************************************************************************

ubyte ADC_bBusy(void)
{
  ubyte ubResult = 0;

  ADC_PAGE      =  0x90;         // switch to page 0 with automatic page 
                                 // saving

  ubResult = (ADC_GLOBSTR & 0x01);

  ADC_PAGE      =  0xD0;         // automatic restore page action

  return(ubResult);
} //  End of function ADC_bBusy


// USER CODE BEGIN (ADC_General,10)

// USER CODE END

