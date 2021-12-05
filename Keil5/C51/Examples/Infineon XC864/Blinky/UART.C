//****************************************************************************
// @Module        UART (Serial Interface)
// @Filename      UART.C
// @Project       keiltest.DAV
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description:  This file contains functions that use the UART module.
//
//----------------------------------------------------------------------------
// @Date          10.02.2005 10:10:13
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
// @Date          10.02.2005
//
//****************************************************************************

// USER CODE BEGIN (UART_Init,1)

// USER CODE END

void UART_vInit(void)
{
  // USER CODE BEGIN (UART_Init,2)

  // USER CODE END

  ///  Pin TXD_0 (P1.1) is selected for transmission
  ///  Pin RXD_0 (P1.0) is selected for reception
  ///  Receiver enabled
  ///  Mode 1: 8-bit data, 1 start bit, 1 stop bit, variable baud rate


  SFR_PAGE(_pp2, SST2);          // switch to page 2
  P1_ALTSEL0   &= ~(ubyte)0x02;  // configure alternate function register 0
  P1_ALTSEL1   |=  (ubyte)0x02;  // configure alternate function register 1
  SFR_PAGE(_pp0, SST2);          // switch to page 0
  P1_DIR       |=  (ubyte)0x02;  // set output direction

  SFR_PAGE(_pp0, SST2);          // switch to page 2
  	
  MODPISEL     &= ~(ubyte)0x01;  // configure peripheral input select register
  BCON          =  0x00;         // reset baudrate timer/reload register
  SCON          =  0x50;         // load serial channel control register

  ///  -----------------------------------------------------------------------
  ///  Baudrate generator settings
  ///  -----------------------------------------------------------------------
  ///  input clock = fPCLK
  ///  baudrate = 9,5785 kbaud

  BG            =  0xAD;         // load baudrate timer/reload register
  BCON         |=  0x01;         // load baud rate control register


  // USER CODE BEGIN (UART_Init,3)

  // USER CODE END

} //  End of function UART_vInit


// USER CODE BEGIN (UART_General,10)

// USER CODE END

