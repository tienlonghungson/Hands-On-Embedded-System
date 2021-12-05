//****************************************************************************
// @Module        UART (Serial Interface)
// @Filename      UART.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description:  This file contains functions that use the UART module.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:01
//
//****************************************************************************

// USER CODE BEGIN (UART_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (UART_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (UART_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (UART_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (UART_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (UART_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (UART_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (UART_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (UART_General,9)

// USER CODE END


//****************************************************************************
// @Function      void UART_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the UART function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                
//                The following SFR fields will be initialized:
//                - register SCON
//                - bits SMOD and ES
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

// USER CODE BEGIN (UART_Init,1)

// USER CODE END

void UART_vInit(void)
{
  // USER CODE BEGIN (UART_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  UART settings
  ///  -----------------------------------------------------------------------
  ///  Pin P1.0 (TXD_1) is selected for transmission
  ///  Pin P1.0 (RXD_2) is selected for reception
  ///  Receiver disabled
  ///  Mode 1: 8-bit data, 1 start bit, 1 stop bit, variable baud rate
  ///  BRG is selected for baudrate generation

  SFR_PAGE(_pp2, noSST);         // switch to page 2 without saving
  P1_ALTSEL0   |=  (ubyte)0x01;  // configure alternate function register 0
  P1_ALTSEL1   |=  (ubyte)0x01;  // configure alternate function register 1

  SFR_PAGE(_pp3, noSST);         // switch to page 3 without saving
  P1_OD        |=  (ubyte)0x01;  // configure open drain register
  SFR_PAGE(_pp1, noSST);         // switch to page 1 without saving
  P1_PUDEN     |=  (ubyte)0x01;  // configure pull-up/pull-down enable 
                                 // register
  P1_PUDSEL    |=  (ubyte)0x01;  // configure pull-up/pull-down select 
                                 // register
  SFR_PAGE(_pp0, noSST);         // switch to page 0 without saving


  SFR_PAGE(_su3, noSST);         // switch to page 3 without saving
  MODPISEL1    |=  (ubyte)0x2;   // configure peripheral input select 
                                 // register 1
  SFR_PAGE(_su0, noSST);         // switch to page 0 without saving
  SFR_PAGE(_su5, noSST);         // switch to page 5 without saving
  BCON          =  0x00;         // reset baudrate timer/reload register
  SFR_PAGE(_su0, noSST);         // switch to page 0 without saving
  SCON          =  0x40;         // load serial channel control register

  ///  -----------------------------------------------------------------------
  ///  Baudrate generator settings
  ///  -----------------------------------------------------------------------
  ///  input clock = fPCLK
  ///  baudrate = 19,2000 kbaud

  SFR_PAGE(_su5, noSST);         // switch to page 5 without saving
  BGL           =  0xC4;         // load baudrate timer/reload register, low 
                                 // byte
  BGH           =  0x09;         // load baudrate timer/reload register, high 
                                 // byte
  LINST         =  0x00;         // load LIN status register
  BCON         |=  0x01;         // load baud rate control register
  SFR_PAGE(_su0, noSST);         // switch to page 0 without saving


  // USER CODE BEGIN (UART_Init,3)

  // USER CODE END

} //  End of function UART_vInit


// USER CODE BEGIN (UART_General,10)

// USER CODE END

