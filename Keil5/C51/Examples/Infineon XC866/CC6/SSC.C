//****************************************************************************
// @Module        High Speed Synchronous Serial Interface(SSC)
// @Filename      SSC.C
// @Project       DaveTest.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description:  This file contains functions that use the SSC module.
//
//----------------------------------------------------------------------------
// @Date          09.02.2005 22:24:32
//
//****************************************************************************

// USER CODE BEGIN (SSC_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (SSC_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (SSC_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (SSC_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (SSC_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (SSC_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (SSC_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (SSC_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (SSC_General,9)

// USER CODE END


//****************************************************************************
// @Function      void SSC_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the SSC function 
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

// USER CODE BEGIN (Init,1)

// USER CODE END

void SSC_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  SSC_CONH_P &= ~(ubyte)0x80;           //  enable access to control bits

  ///  -----------------------------------------------------------------------
  ///  Configuration of the SSC Baud Rate Generator:
  ///  -----------------------------------------------------------------------
  ///  - required baud rate = 125333,333 kbaud
  ///  - real baud rate     = 125333,333 kbaud
  ///  - deviation          = 0,000 %

  SSC_BRH       =  0x00;         // load SSC baud rate time reload register 
                                 // high
  SSC_BRL       =  0x00;         // load SSC baud rate time reload register 
                                 // low

  ///  -----------------------------------------------------------------------
  ///  Configuration of the SSC Operation Mode:
  ///  -----------------------------------------------------------------------
  ///  - this device is configured as SSC master
  ///  - transfer data width is 2 bit
  ///  - transfer/receive LSB first
  ///  - shift transmit data on the leading clock edge, latch on trailing edge
  ///  - idle clock line is low, leading clock edge is low-to-high transition
  ///  - ignore receive error
  ///  - ignore phase error


  SSC_CONH_P    =  0x40;         // load SSC control register

  SSC_CONL_P    =  0x81;         // load SSC control register

  SSC_CONH_P |= 0x80;           //  disable access to control bits

  ///  - Port Selection
  SSC_PISEL     =  0x01;         // load SSC Port Input Select Register to 
                                 // Port A

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used SSC Port Pins:
  ///  -----------------------------------------------------------------------
  ///  Pin SCLK (P0.3) is selected for SCLK ouput 
  ///  Pin MTSR_1 (P0.4) is selected for Master Transmit Output 

  PORT_PAGE     =  0x02;         // switch to page 2
  P0_ALTSEL0      |= 0x10;              //  set AltSel0 
  P0_ALTSEL1      &= ~(ubyte)0x10;      //  set AltSel1

  PORT_PAGE     =  0x00;         // switch to page 0
  P0_DIR          |= 0x10;      //  set P0.4 OutPut


  PORT_PAGE     =  0x02;         // switch to page 2
  P0_ALTSEL0      |= 0x08;              //  set AltSel0 
  P0_ALTSEL1      &= ~(ubyte)0x08;      //  set AltSel1

  PORT_PAGE     =  0x00;         // switch to page 0
  P0_DIR          |= 0x08;      //  set P0.3 OutPut

  ///  Pin MRST_1 (P0.5) is selected for Master Receive Input 

  ///  - SSC interrupt is enabled
IEN1      |= 0x02;              //  Enable SSC interrupt 

  // USER CODE BEGIN (Init,3)

  // USER CODE END

} //  End of function SSC_vInit


//****************************************************************************
// @Function      void SSC_vSendData(ubyte Data) 
//
//----------------------------------------------------------------------------
// @Description   The master device can initiate the first data transfer by 
//                writing the transmit data into transmit buffer. This value 
//                is copied into the shift register (which is assumed to be 
//                empty at this time), and the selected first bit of the 
//                transmit data is placed onto the MTSR line on the next 
//                clock from the baud rate generator. 
//                A slave device immediately outputs the selected first bit 
//                (MSB or LSB of the transfer data) at pin MRST, when the 
//                contents of the transmit buffer are copied into the slave's 
//                shift register. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    Data: 
//                Data to be send
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (SendData,1)

// USER CODE END

void SSC_vSendData(ubyte Data)
{
  SSC_TBL  = Data;   //  load transmit buffer register

} //  End of function SSC_vSendData


//****************************************************************************
// @Function      ubyte SSC_vGetData(void) 
//
//----------------------------------------------------------------------------
// @Description   This function returns the contents of the receive buffer. 
//                When the receive interrupt request flag is set this implies 
//                that data is available for reading in the receive buffer. 
//
//----------------------------------------------------------------------------
// @Returnvalue   Received data
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (GetData,1)

// USER CODE END

ubyte SSC_vGetData(void)
{
  return(SSC_RBL);     // return receive buffer register

} //  End of function SSC_vGetData


//****************************************************************************
// @Function      void SSC_vIsr(void) 
//
//----------------------------------------------------------------------------
// @Description   This interrupt service routine is called when the contents 
//                of the  Transmission start - Indicates that the transmit 
//                buffer can be reloaded with new data.Transmission ends - 
//                The configured number of bits have been transmitted and 
//                shifted to the receive buffer.error interrupt - Receive 
//                Error, Phase Error, Baud Rate ErrorTransmit Error Please 
//                note that you have to add application specific code to this 
//                function.
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

// USER CODE BEGIN (Isr,1)

// USER CODE END

void SSC_vIsr(void) interrupt SSCINT
{
  SFR_PAGE(_su0, SST2);          // switch to page 0

  if (IRCON1 & 0x01)  //  if error
  {
      IRCON1 &= ~(ubyte)0x01;

      SFR_PAGE(_su0, RST2);      // restore the old SCU page

    // USER CODE BEGIN (Isr,2)

    // USER CODE END
  }

  SFR_PAGE(_su0, SST2);          // switch to page 0

  if (IRCON1 & 0x02)  //  if Transmit Interrupt Request
  {
      IRCON1 &= ~(ubyte)0x02;

      SFR_PAGE(_su0, RST2);      // restore the old SCU page

    // USER CODE BEGIN (Isr,3)

    // USER CODE END
  }

  SFR_PAGE(_su0, SST2);          // switch to page 0

  if (IRCON1 & 0x04)  //  if Receive Interrupt Request
  {
      IRCON1 &= ~(ubyte)0x04;

      SFR_PAGE(_su0, RST2);      // restore the old SCU page

    // USER CODE BEGIN (Isr,4)

    // USER CODE END
  }

} //  End of function SSC_vIsr



// USER CODE BEGIN (SSC_General,10)

// USER CODE END

