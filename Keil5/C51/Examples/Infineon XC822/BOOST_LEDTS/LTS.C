//****************************************************************************
// @Module        LED and Touch-Sense Controller
// @Filename      LTS.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description:  This file contains functions that use the LEDTS module.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:03
//
//****************************************************************************

// USER CODE BEGIN (LTS_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (LTS_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (LTS_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (LTS_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (LTS_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (LTS_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

idata unsigned char LDLINE_VALUE[3];
idata unsigned char TSCOMPARE[6];
idata unsigned char PADERROR               _at_ 0x2D;
idata unsigned char PADRESULT              _at_ 0x2E;
idata unsigned char PADFLAG                _at_ 0x2F;
idata unsigned char ACCUMULATORCOUNTER     _at_ 0x30;
idata unsigned char SHORTCOUNT             _at_ 0x31;
idata unsigned char SUBTRACTIONM           _at_ 0x32;
idata unsigned char DIVISORN               _at_ 0x33;
xdata unsigned char TOUCH_SENSE_RESULT[19] _at_ 0xF0EC;
xdata unsigned char ubPDC                  _at_ 0xF0FF;
idata unsigned char SUB_PAD[3];

// USER CODE BEGIN (LTS_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (LTS_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (LTS_General,9)

// USER CODE END


//****************************************************************************
// @Function      void LTS_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the LEDTS function
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
// @Date          08.01.2010
//
//****************************************************************************

// USER CODE BEGIN (LTS_Init,1)

// USER CODE END

void LTS_vInit(void)
{
  // USER CODE BEGIN (LTS_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------
  ///  - the LED/TS module clock = 48,00 MHz
  ///  - CR_MISC -Clock & Reset Miscellaneous Register is Configured in
  ///    MAIN_vInit

  //   -----------------------------------------------------------------------
  //   Configuration of Global Control Register 0:
  //   -----------------------------------------------------------------------
  ///  - LEDTS Counter Clock = 1,000 MHz
  ///  - Time Slice duration = 256,000 us
  ///  - Time Frame duration = 768,000 us
  ///  - Both LED and Touch Sense functionalities are enabled

    LTS_GLOBCTL0  =  0xC0;       // load global control register 0

  //   -----------------------------------------------------------------------
  //   Configuration of Global Control Register 1:
  //   -----------------------------------------------------------------------
  ///  - SPCLK (8 MHz) is selected as clock source
  ///  - Time Frame interrupt is enabled
  ///  - Time Slice interrupt is enabled

    LTS_GLOBCTL1  =  0x58;       // load global control register 1

  //   -----------------------------------------------------------------------
  //   Configuration of LED/TS Control Register:
  //   -----------------------------------------------------------------------
  ///  - 2 Column(s) is(are) selected for LED functionality
  ///  - Active level of LED column is low
  ///  - Touch Sense output is extended by 1 FPCLK
  ///  - Hardware control of pad turn enable: 1 touch sense input(s) selected

    LTS_LDTSCTL  =  0x20;        // load LED and touch sense control register

  //   -----------------------------------------------------------------------
  //   Configuration of Touch Sense Control Register:
  //   -----------------------------------------------------------------------
  ///  - PAD turn enable: By Software Control
  ///  - Note: LTS_vEnSWTSPadTurn API can be used to select the active touch
  ///    sense input
  ///  - Internal pull-up is selected
  ///  - Saturation of TS Counter is enabled
  ///  - Auto reset of TS Counter is enabled

    LTS_TSCTL   =  0x68;         // load touch sense control register

  //   -----------------------------------------------------------------------
  //   Configuration of Time Slice Compare Shadow Register:
  //   -----------------------------------------------------------------------
  ///  - Required Duty Cycle = 10000,00%
  ///  - Real Duty Cycle = 0,00%


  //   -----------------------------------------------------------------------
  //   Configuration of LED/TS Used Output Pins:
  //   -----------------------------------------------------------------------
    SFR_PAGE(_pp2, noSST);       // switch to page 2

    P0_ALTSEL0 |=  0x37;         // set the P0_ALTSEL0 bits
    P0_ALTSEL1 &=  ~(ubyte) 0x37; // clear the P0_ALTSEL1 bits
    P0_ALTSEL2 &=  ~(ubyte) 0x07; // clear the P0_ALTSEL2 bits
    P0_ALTSEL2 |=  0x30;         // set the P0_ALTSEL2 bits

    SFR_PAGE(_pp3, noSST);       // switch to page 3

    P0_OD      &=  ~(ubyte) 0x37; // clear the P0_OD bits

    SFR_PAGE(_pp0, noSST);       // switch to page 0

  //   -----------------------------------------------------------------------
  //   Configuration of ROM Library:
  //   -----------------------------------------------------------------------

    LTS_vROMLIB_Init(); // initialize the ROMLIB referred variables

  //   -----------------------------------------------------------------------
  //   Configuration of CLK_PS:
  //   -----------------------------------------------------------------------

    LTS_GLOBCTL0 |=  LTS_PRESCALER; // start the clock

  // USER CODE BEGIN (LTS_Init,3)

    LTS_vInitCalculation();

  // USER CODE END

} //  End of function LTS_vInit


//****************************************************************************
// @Function      void LTS_vROMLIB_Init(void)
//
//----------------------------------------------------------------------------
// @Description   This function initializes the ROM Library referred
//                variables based on user configuration.
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

// USER CODE BEGIN (LTS_vROMLIB_Init,1)

// USER CODE END

void LTS_vROMLIB_Init(void)
{
    LTS_LDTSCTL         |=  0x04; // set NR_PADT
    LDLINE_VALUE[0]     =  0xFF; // COLA LDLINE value
    LDLINE_VALUE[1]     =  0x00; // COL0 LDLINE value
    LDLINE_VALUE[2]     =  0x00; // COL1 LDLINE value
    ACCUMULATORCOUNTER  =  0x04; // number of samples for accumulation
    DIVISORN            =  0x02; // low-pass filter gain
    SHORTCOUNT          =  0xFE; // valid pad count
    SUBTRACTIONM        =  (unsigned char)&SUB_PAD; // customized option for
                                                    // trip point
    SUB_PAD[0]          =  0x60; // TSIN0 offset value
    SUB_PAD[1]          =  0x60; // TSIN1 offset value
    SUB_PAD[2]          =  0x60; // TSIN2 offset value
    TSCOMPARE[0]        =  0xFF; // customized option for oscillation
    TSCOMPARE[1]        =  0xFF; // COL0 COMP value
    TSCOMPARE[2]        =  0xFF; // COL1 COMP value
    TSCOMPARE[3]        =  0x00; // TSIN0 compare value
    TSCOMPARE[4]        =  0x00; // TSIN1 compare value
    TSCOMPARE[5]        =  0xE6; // TSIN2 compare value

} //  End of function LTS_vROMLIB_Init


//****************************************************************************
// @Function      void LTS_vInitCalculation(void)
//
//----------------------------------------------------------------------------
// @Description   This Function clear all flags for TS and the XRAM contents
//                for storing the average values of each padtx, so all
//                calculation will start afresh
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

// USER CODE BEGIN (LTS_vInitCalculation,1)

// USER CODE END

void LTS_vInitCalculation(void)
{
  ubyte xdata *uw_ptr;
  ubyte counter;
  PADERROR = 0x00; // Clear the PadError Status
  PADRESULT = 0x00; // Clear the PadResult Status
  PADFLAG = 0x00; // Clear the PadFlag Status
  counter = (LTS_LDTSCTL&0x0E)+ 6; // no. of xaddress to clear
  uw_ptr = (unsigned char xdata *)0xF0FF; // XRAM end address
  while (counter) // clear the XRAM content
  {
    *uw_ptr = 0x00;
    uw_ptr--;
    counter--;
  }
} //  End of function LTS_vInitCalculation


// USER CODE BEGIN (LTS_General,10)

// USER CODE END

