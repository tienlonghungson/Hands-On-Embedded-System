//****************************************************************************
// @Module        GPIO
// @Filename      IO.C
// @Project       DaveTest.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description:  This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          09.02.2005 00:47:35
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (IO_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
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
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (IO_Init,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P0 is used

  SFR_PAGE(_pp3, SST2);          // switch to page 3
  P0_OD         =  0x00;         // load open-drain register

  SFR_PAGE(_pp1, SST2);          // switch to page 1
  P0_PUDSEL     =  0xFF;         // load pullup/pulldown select register
  P0_PUDEN      =  0xC4;         // load pullup/pulldown enable register

  SFR_PAGE(_pp2, SST2);          // switch to page 2
  P0_ALTSEL0    =  0x00;         // load alternate output function select 
                                 // register 0
  P0_ALTSEL1    =  0x00;         // load alternate output function select 
                                 // register 1

  SFR_PAGE(_pp0, SST2);          // switch to page 0
  P0_DATA       =  0x00;         // load data output register
  P0_DIR        =  0x00;         // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P1 is used

  SFR_PAGE(_pp3, SST2);          // switch to page 3
  P1_OD         =  0x00;         // load open-drain register

  SFR_PAGE(_pp1, SST2);          // switch to page 1
  P1_PUDSEL     =  0xFF;         // load pullup/pulldown select register
  P1_PUDEN      =  0xFF;         // load pullup/pulldown enable register

  SFR_PAGE(_pp2, SST2);          // switch to page 2
  P1_ALTSEL0    =  0x00;         // load alternate output function select 
                                 // register 0
  P1_ALTSEL1    =  0x00;         // load alternate output function select 
                                 // register 1

  SFR_PAGE(_pp0, SST2);          // switch to page 0
  P1_DATA       =  0x00;         // load data output register
  P1_DIR        =  0x00;         // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P2 is used


  SFR_PAGE(_pp1, SST2);          // switch to page 1
  P2_PUDSEL     =  0xFF;         // load pullup/pulldown select register
  P2_PUDEN      =  0x00;         // load pullup/pulldown enable register

  SFR_PAGE(_pp0, SST2);          // switch to page 0
  P2_DATA       =  0x00;         // load data output register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P3:
  ///  -----------------------------------------------------------------------
  ///  P3.0:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.1:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.2:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.3:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.4:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.5:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.6:
  ///  - is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  - pull-up device is assigned
  ///  P3.7:
  ///  - is used as alternate output for the Output of Capture/Compare 
  ///    channel 3
  ///  - push/pull output is selected
  ///  - pull-up device is assigned

//  SFR_PAGE(_pp3, SST2);          // switch to page 3
//  P3_OD         =  0x7F;         // load open-drain register

  SFR_PAGE(_pp1, SST2);          // switch to page 1
  P3_PUDSEL     =  0xFF;         // load pullup/pulldown select register
  P3_PUDEN      =  0xFF;         // load pullup/pulldown enable register

//  SFR_PAGE(_pp2, SST2);          // switch to page 2
//  P3_ALTSEL0    =  0x80;         // load alternate output function select 
                                 // register 0
//  P3_ALTSEL1    =  0x00;         // load alternate output function select 
                                 // register 1
  // USER CODE BEGIN (IO_Init,2)
//  P3_ALTSEL0    =  0x10;         // P37 to ALT1-COUT63 

  // USER CODE END



  SFR_PAGE(_pp0, SST2);          // switch to page 0
  P3_DATA       =  0x00;         // load data output register
  P3_DIR        =  0xFF;         // load direction register


  // USER CODE BEGIN (IO_Init,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

