//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.C
// @Project       keiltest.DAV
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description   This file contains the Project initialization function.
//
//----------------------------------------------------------------------------
// @Date          10.02.2005 10:10:13
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
// @Date          10.02.2005
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Init,1)
#include <stdio.h>

// USER CODE END

void MAIN_vInit(void)
{
  // USER CODE BEGIN (MAIN_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the System Clock:
  ///  -----------------------------------------------------------------------
  ///  - External Osc is selected (configuration is done in the startup file 
  ///    'START_XC.A51')
  ///  - PLL Mode, NDIV = 11
  ///  - input frequency is 5 MHz


  ///  Initialization of module 'GPIO'
  IO_vInit();

  ///  Initialization of module 'UART (Serial Interface)'
  UART_vInit();

  ///  Initialization of module 'Timer 0/1'
  T01_vInit();

  //   Interrupt Priority

  IP            =  0x00;         // load Interrupt Priority Register
  IPH           =  0x00;         // load Interrupt Priority High Register
  IP1           =  0x00;         // load Interrupt Priority 1 Register
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
// @Date          10.02.2005
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Main,1)

// USER CODE END

void main(void)
{
  // USER CODE BEGIN (MAIN_Main,2)
unsigned int i;
  // USER CODE END

  MAIN_vInit();

  // USER CODE BEGIN (MAIN_Main,3)
  TI = 1;    // enable send routine
  while (1) {
    for (i=0x8000; i>0; i++);
    P3_DATA++;
    printf ("Hello\n");
 }
  // USER CODE END

} //  End of function main


// USER CODE BEGIN (MAIN_General,10)

// USER CODE END

