//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description   This file contains the Project initialization function.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:01
//
//****************************************************************************

// USER CODE BEGIN (MAIN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (MAIN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (MAIN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (MAIN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (MAIN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************


// USER CODE BEGIN (MAIN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (MAIN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void MAIN_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This function initializes the microcontroller. It is
//                assumed that the SFRs are in their reset state.
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

// USER CODE BEGIN (MAIN_Init,1)

// USER CODE END

void MAIN_vInit(void)
{
   volatile bit bClkStat;

  // USER CODE BEGIN (MAIN_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the System Clock:
  ///  -----------------------------------------------------------------------
  ///  - input frequency is 48 MHz

  ///  - Clock mode control is enabled

  ///  - 24 MHz mode is selected

  //   FPCLK for ADC,CCU6 and LED/TS is 48.00 MHz.

  //   calling BootROM routine which switches the clock to 24 MHz

  bClkStat      =  BR_FEATURE_SETTING(0x00, 0x80);

  //   Check the status for correct option selection
  if (bClkStat != 0 ){
      //   Failure in correct option selection
      while(1);
  }

  //   ---------- Modules configuration with PMCON1 reg.----------

  SFR_PAGE(_su1, noSST);         // switch to page 1
  PMCON1        =  0x92;         // load peripheral management control
                                 // register 1
  SFR_PAGE(_su0, noSST);         // switch to page 0



  ///  *********************************************************************************
  ///  Note : All peripheral related IO configurations are done in the
  ///  respective peripheral modules (alternate functions selection)
  ///  *********************************************************************************

  ///  Initialization of module 'UART (Serial Interface)'
  UART_vInit();

  ///  Initialization of module 'Timer 2'
  T2_vInit();

  ///  Initialization of module 'Analog / Digital Converter (ADC)'
  ADC_vInit();

  ///  Initialization of module 'Capture / Compare Unit 6 (CCU6)'
  CC6_vInit();

  ///  Initialization of module 'LED and Touch-Sense Controller'
  LTS_vInit();

  ///  Initialization of  'Shared interrupts'
  SHINT_vInit();

  //   Interrupt Priority

  IP            =  0x00;         // load Interrupt Priority Register
  IPH           =  0x20;         // load Interrupt Priority High Register
  IP1           =  0xA0;         // load Interrupt Priority 1 Register
  IPH1          =  0x00;         // load Interrupt Priority 1 High Register


  // USER CODE BEGIN (MAIN_Init,3)

  // USER CODE END



  //   globally enable interrupts
  EA            =  1;

} //  End of function MAIN_vInit


//****************************************************************************
// @Function      void main(void)
//
//----------------------------------------------------------------------------
// @Description   This is the main function.
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

// USER CODE BEGIN (MAIN_Main,1)

// USER CODE END

void main(void)
{
  // USER CODE BEGIN (MAIN_Main,2)

  // USER CODE END

  MAIN_vInit();

  // USER CODE BEGIN (MAIN_Main,3)

  SFR_PAGE(ADC_QINR0_PAGE, noSST);         // switch to page 0

  ADC_QINR0 = 0xa0;
  ADC_QINR0 = 0x21;
  ADC_QINR0 = 0x23;

  LDLINE_VALUE[2] = 0x01;


  // USER CODE END

  while(1)
  {

  // USER CODE BEGIN (MAIN_Main,4)
//	  LDLINE_VALUE[1] = PADFLAG;
//	  LDLINE_VALUE[2] = 0;
//	  PADERROR = PADRESULT = 0;

  // USER CODE END

  }

} //  End of function main


// USER CODE BEGIN (MAIN_General,10)

// USER CODE END

