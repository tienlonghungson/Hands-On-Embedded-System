//****************************************************************************
// @Module        Capture / Compare Unit 6 (CCU6)
// @Filename      CC6.C
// @Project       DaveTest.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description   This file contains functions that use the CCU6 module.
//
//----------------------------------------------------------------------------
// @Date          09.02.2005 00:47:37
//
//****************************************************************************

// USER CODE BEGIN (CCU6_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (CCU6_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (CCU6_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (CCU6_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CCU6_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CCU6_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (CCU6_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (CCU6_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (CCU6_General,9)

// USER CODE END


//****************************************************************************
// @Function      void CC6_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the CCU6 function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//
//----------------------------------------------------------------------------
// @Returnvalu   None
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

void CC6_vInit(void)
{
  // USER CODE BEGIN (Init,2)
  SFR_PAGE(_cc3, SST0);          // switch to page 0
//  SFR_PAGE(_su0, SST1);          // because of wrong dave SFR-paging

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 module input signals:
  ///  -----------------------------------------------------------------------
  ///  - signal CC60 is not used
  ///  - signal CC61 is not used
  ///  - signal CC62 is not used
  ///  - signal #CTRAP is not used

  SFR_PAGE(_cc3, SST2);          // switch to page 3

  CCU6_PISEL0L   =  0x00;        // load CCU6 Port Input Select Register 0 Low

  ///  - signal CCPOS0 is not used
  ///  - signal CCPOS1 is not used
  ///  - signal CCPOS2 is not used
  ///  - signal T12HR is not used

  CCU6_PISEL0H   =  0x00;        // load CCU6 Port Input Select Register 0 
                                 // High

  ///  - signal T13HR is not used

  CCU6_PISEL2    =  0x00;        // load CCU6 Port Input Select Register 2

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Timer 12:
  ///  -----------------------------------------------------------------------
  ///  - prescaler factor is 1
  ///  - timer 12 run bit is reset
  ///  - single shot mode is disabled
  ///  - timer 12 works in edge aligned mode
  ///  - interrupt on period match is disabled
  ///  - interrupt on one match is disabled

  SFR_PAGE(_cc1, SST2);          // switch to page 1
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  CCU6_T12PRL    =  0x01;        // load CCU6 T12 period register low

  CCU6_T12PRH    =  0x00;        // load CCU6 T12 period register lhigh

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Timer 13:
  ///  -----------------------------------------------------------------------
  ///  - prescaler factor is 128
  ///  - timer 13 run bit is reset
  ///  - trigger control is disabled
  ///  - single shot mode is disabled
  ///  - interrupt on period match is enabled
  ///  - interrupt on compare match is disabled

  CCU6_T13PRL    =  0xFF;        // load CCU6 T13 period register low
  CCU6_T13PRH    =  0xFF;        // load CCU6 T13 period register high

  CCU6_TCTR0L    =  0x00;        // load CCU6 timer control register 0 low
  CCU6_TCTR0H    =  0x07;        // load CCU6 timer control register 0 high



  SFR_PAGE(_cc2, SST2);          // switch to page 2

  CCU6_TCTR2L    =  0x20;        // load CCU6 timer control register 2 low
  CCU6_TCTR2H    =  0x00;        // load CCU6 timer control register 2 high

  ///  -----------------------------------------------------------------------
  ///  Configuration of Multi Channel Mode:
  ///  -----------------------------------------------------------------------
  ///  - multi channel mode is disabled



  SFR_PAGE(_cc0, SST2);          // switch to page 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Channel 0:
  ///  -----------------------------------------------------------------------
  ///  - channel 0 is disabled

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Channel 1:
  ///  -----------------------------------------------------------------------
  ///  - channel 1 is disabled

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Channel 2:
  ///  -----------------------------------------------------------------------
  ///  - channel 2 is disabled

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 Channel 3:
  ///  -----------------------------------------------------------------------
  ///  - alternate output function COUT63 for the PWM signal generated by T13 
  ///    is enabled
  ///  - the trap functionality of the pin COUT63 is disabled
  ///  - the compare output COUT63 drives passive level while CC63ST is ’0’
  ///  - the passive level of the output COUT63 is '0'
  ///  - T13 output is not inverted


  CCU6_CC63SRL   =  0x9A;        // load CCU6 capture/compare shadow register 
                                 // low for channel 3
  CCU6_CC63SRH   =  0x19;        // load CCU6 capture/compare shadow register 
                                 // high for channel 3



  SFR_PAGE(_cc1, SST2);          // switch to page 1

  CCU6_T12DTCL   =  0x01;        // load CCU6 dead time control register low 
                                 // for timer T12

  CCU6_T12DTCH   =  0x00;        // load CCU6 dead time control register high 
                                 // for timer T12

  SFR_PAGE(_cc2, SST2);          // switch to page 2

  CCU6_T12MSELL  =  0x00;        // load CCU6 T12 campture/compare mode 
                                 // select register low

  CCU6_T12MSELH  =  0x00;        // load CCU6 T12 campture/compare mode 
                                 // select register high

  SFR_PAGE(_cc3, SST2);          // switch to page 3

  CCU6_CMPSTATL  =  0x00;        // load CCU6 compare status register low

  CCU6_CMPSTATH  =  0x00;        // load CCU6 compare status register high

  SFR_PAGE(_cc2, SST2);          // switch to page 2

  CCU6_PSLR      =  0x00;        // load CCU6 passive state level register low

  CCU6_MODCTRL   =  0x00;        // load CCU6 modulation control register low

  CCU6_MODCTRH   =  0x80;        // load CCU6 modulation control register high

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  CCU6_MCMOUTSL  =  0x00;        // load CCU6 multi channel mode output 
                                 // control register low

  CCU6_MCMOUTSH  =  0x00;        // load CCU6 multi channel mode output 
                                 // control register high

  SFR_PAGE(_cc2, SST2);          // switch to page 2

  CCU6_MCMCTR    =  0x00;        // load CCU6 multi channel mode control 
                                 // register 

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  ///  - enable shadow transfer to T12 and T13

  // USER CODE BEGIN (Init,3)
    CCU6_TCTR4L      |=  0x40;   //  enable Timer T12 shadow transfer
    CCU6_TCTR4H      |=  0x42;   //  T13 run & enable Timer T13 shadow transfer
  // USER CODE END



  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 trap control:
  ///  -----------------------------------------------------------------------
  ///  - a trap can only be generated by SW by setting the bit TRPF
  ///  - the trap state is left when a zero-match of T12 (while counting up) 
  ///    is detected (synchronization to T12)
  ///  - bit TRPF is automatically cleared by HW (according to TRPPEN, TRPM0 
  ///    and TRPM1)
  ///  - trap interrupt is disabled

  SFR_PAGE(_cc2, SST2);          // switch to page 2

  CCU6_TRPCTRL   =  0x00;        // load CCU6 trap control register low

  CCU6_TRPCTRH   =  0x00;        // load CCU6 trap control register high

  ///  -----------------------------------------------------------------------
  ///  Configuration of CCU6 interrupt control:
  ///  -----------------------------------------------------------------------
  ///  - for channel 0 interrupts is node I0 selected
  ///  - for channel 1 interrupts is node I0 selected
  ///  - for channel 2 interrupts is node I0 selected
  ///  - for correct hall event interrupt is node I0 selected
  ///  - for error interrupts is node I0 selected
  ///  - for T12 interrupts is node I0 selected
  ///  - for T13 interrupts is node I0 selected


  CCU6_INPL      =  0x00;        // load CCU6 capture/compare interrupt node 
                                 // pointer register low
  CCU6_INPH      =  0x00;        // load CCU6 capture/compare interrupt node 
                                 // pointer register high

  CCU6_IENL      =  0x00;        // load CCU6 capture/compare interrupt 
                                 // enable register low
  CCU6_IENH      =  0x02;        // load CCU6 capture/compare interrupt 
                                 // enable register high


  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CCU6 Channel Port Pins:
  ///  -----------------------------------------------------------------------
  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CCU6 Channels Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - capture/compare interrupt node 0 is enabled
  ///  - capture/compare interrupt node 1 is disabled
  ///  - capture/compare interrupt node 2 is disabled
  ///  - capture/compare interrupt node 3 is disabled

  IEN1          |=  0x10;        // load interrupt enable register 2



//  SFR_PAGE(_su0, RST2);          // restore the old CCU page

  // USER CODE BEGIN (Init,3)
  SFR_PAGE(_cc0, RST0);          // restore the old CCU page
//  SFR_PAGE(_su0, RST1);          // restore the old SCU page because of DAVE bug

  // USER CODE END

} //  End of function CC6_vInit


//****************************************************************************
// @Function      void CC6_viNodeI0(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the CC6 node I0. 
//                If the content of the corresponding compare timer 
//                (configurable) equals the content of the capture/compare 
//                register or if a capture event occurs at the associated 
//                port pin, the interrupt request flag is set and an 
//                interrupt is triggered (only if enabled).
//                Please note that you have to add application specific code 
//                to this function.
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

// USER CODE BEGIN (NodeI0,1)

// USER CODE END

void CC6_viNodeI0(void) interrupt CCU6_NodeI0_INT
{

  // USER CODE BEGIN (NodeI0,2)
  static unsigned char T13count;
  // USER CODE END

//  SFR_PAGE(_cc3, SST2);          // switch to page 3

//  if(CCU6_ISH & 0x02)   //if ISH_T13PM
  {
    //timer T13 period match detection

    SFR_PAGE(_cc0, SST3);        // switch to page 0

    CCU6_ISRH = 0x02;  //clear flag ISH_T13PM

//    SFR_PAGE(_cc0, RST2);        // restore the old CCU page

    // USER CODE BEGIN (NodeI0,12)

	//if (!T13count++)	
	P3_DATA ^= 0x10;

	//IEN1 &= ~0x10;	// clr node 0 intreg flag
    // USER CODE END

  }


} //  End of function CC6_viNodeI0

//****************************************************************************
// @Function      void CC6_vStartTmr(ubyte TimerNr) 
//
//----------------------------------------------------------------------------
// @Description   This Function starts the selected CC6 timer. The timer 
//                continues counting from where it stopped. 
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be started
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (StartTmr,1)

// USER CODE END

void CC6_vStartTmr(ubyte TimerNr)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( TimerNr == 12)            //  if Timer_12
    CCU6_TCTR4L      |=  0x02;        //  Start Timer T12

  if ( TimerNr == 13)            //  if Timer_13
    CCU6_TCTR4H      |=  0x02;        //  Start Timer T13

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vStartTmr


//****************************************************************************
// @Function      void CC6_vStopTmr(ubyte TimerNr) 
//
//----------------------------------------------------------------------------
// @Description   This Function stops the selected CC6 timer. The content of 
//                the timer register remains unchanged. 
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be stopped
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (StopTmr,1)

// USER CODE END

void CC6_vStopTmr(ubyte TimerNr)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( TimerNr == 12)            //  if Timer_12
    CCU6_TCTR4L      |=  0x01;        //  Timer T12 Run Set

  if ( TimerNr == 13)            //  if Timer_13
    CCU6_TCTR4H      |=  0x01;        //  Timer T13 Run Set

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vStopTmr


//****************************************************************************
// @Function      void CC6_vResetTmr(ubyte TimerNr) 
//
//----------------------------------------------------------------------------
// @Description   This function sets the selected CC6 timer counter register 
//                to zero. Timer is not stopped.
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be cleared
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (ResetTmr,1)

// USER CODE END

void CC6_vResetTmr(ubyte TimerNr)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( TimerNr == 12)            //  if Timer_12
    CCU6_TCTR4L      |=  0x04;        //  Timer T12 Run Set

  if ( TimerNr == 13)            //  if Timer_13
    CCU6_TCTR4H      |=  0x04;        //  Timer T13 Run Set

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vResetTmr


//****************************************************************************
// @Function      void CC6_vSetTmrPeriod(ubyte TimerNr, uword Value) 
//
//----------------------------------------------------------------------------
// @Description   This function loads the period register of the selected CC6 
//                timer.
//                
//                Note: Call the function CC6_vEnableShadowTransfer() to 
//                enable the shadow transfer.
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be used
// @Parameters    Value: 
//                16-bit Value with which the CC6 timer reload register is to 
//                be loaded
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (SetTmrPeriod,1)

// USER CODE END

void CC6_vSetTmrPeriod(ubyte TimerNr, uword Value)
{

  SFR_PAGE(_cc1, SST2);          // switch to page 1

  if ( TimerNr == 12)          //  if Timer_12
  {
    CCU6_T12PRL      = (ubyte) (0x00FF & Value);   //  Timer T12 Reload Value
    CCU6_T12PRH      = (ubyte) (Value >> 8);       //  Timer T12 Reload Value
  }

  if ( TimerNr == 13)          //  if Timer_13
  {
    CCU6_T13PRL       = (ubyte) (0x00FF & Value);   //  Timer T13 Reload Value
    CCU6_T13PRH       = (ubyte) (Value >> 8);       //  Timer T13 Reload Value
  }

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vSetTmrPeriod


//****************************************************************************
// @Function      void CC6_vSetDeadTimePeriod(ubyte ubValue) 
//
//----------------------------------------------------------------------------
// @Description   This function loads the counter of the dead time register.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubValue: 
//                Counter value (ubValue = 0x01 .. 0x3F)
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (SetDeadTimePeriod,1)

// USER CODE END

void CC6_vSetDeadTimePeriod(ubyte ubValue)
{

  SFR_PAGE(_cc1, SST2);          // switch to page 1

  CCU6_T12DTCL        = (ubValue);     //  Dead-Time Control Register Value

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vSetDeadTimePeriod


//****************************************************************************
// @Function      void CC6_vEnableShadowTransfer(ubyte TimerNr) 
//
//----------------------------------------------------------------------------
// @Description   This function enables the transfer from the shadow 
//                registers to the actual CC6 registers.
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be used
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (EnableShadowTransfer,1)

// USER CODE END

void CC6_vEnableShadowTransfer(ubyte TimerNr)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( TimerNr == 12)            //  if Timer_12
    CCU6_TCTR4L      |=  0x40;   //  enable Timer T12 shadow transfer

  if ( TimerNr == 13)            //  if Timer_13
    CCU6_TCTR4H      |=  0x40;   //  enable Timer T13 shadow transfer

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vEnableShadowTransfer


//****************************************************************************
// @Function      void CC6_vLoadChannelShadowRegister(ubyte ChName, uword 
//                Value) 
//
//----------------------------------------------------------------------------
// @Description   This function loads the selected CC6 channel shadow 
//                register with the parameter Value. 
//                
//                The following definitions are available for RegName: 
//                CC6_CHANNEL_0 .. CC6_CHANNEL_3 (see @Defines in header file)
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ChName: 
//                Name of the CC6 channel to be loaded
// @Parameters    Value: 
//                16-bit Value with which the CC6 shadow register is to be 
//                loaded
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (LoadChannelShadowRegister,1)

// USER CODE END

void CC6_vLoadChannelShadowRegister(ubyte ChName, uword Value)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( ChName == 0)          //  if Channel_0
  {
    CCU6_CC60SRH    = (ubyte) (Value >> 8);        //  Load Channel Shadow Register CC60

    CCU6_CC60SRL    = (ubyte) (Value & 0x00FF);    //  Load Channel Shadow Register CC60
  }

  if ( ChName == 1)          //  if Channel_1
  {
    CCU6_CC61SRH    = (ubyte) (Value >> 8);        //  Load Channel Shadow Register CC61

    CCU6_CC61SRL    = (ubyte) (Value & 0x00FF);    //  Load Channel Shadow Register CC61
  }

  if ( ChName == 2)          //  if Channel_2
  {
    CCU6_CC62SRH    = (ubyte) (Value >> 8);        //  Load Channel Shadow Register CC62

    CCU6_CC62SRL    = (ubyte) (Value & 0x00FF);    //  Load Channel Shadow Register CC62
  }

  if ( ChName == 3)          //  if Channel_3
  {
    CCU6_CC63SRH    = (ubyte) (Value >> 8);        //  Load Channel Shadow Register CC63

    CCU6_CC63SRL    = (ubyte) (Value & 0x00FF);    //  Load Channel Shadow Register CC63
  }

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vLoadChannelShadowRegister


//****************************************************************************
// @Function      void CC6_vSetStatusBit(ubyte ChName) 
//
//----------------------------------------------------------------------------
// @Description   This function sets the capture / compare modifikation 
//                status bit of the selected CC6 channel. 
//                The following definitions are available for ChName: 
//                CC6_CHANNEL_0 .. CC6_CHANNEL_3 (see @Defines in header file)
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ChName: 
//                Name of the CC6 channel to be used
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (SetStatusBit,1)

// USER CODE END

void CC6_vSetStatusBit(ubyte ChName)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( ChName == 0)              //  if Channel_0
    CCU6_CMPMODIFL   |= 0x01;         //  Set Compare State Modification

  if ( ChName == 1)              //  if Channel_1
    CCU6_CMPMODIFL   |= 0x02;         //  Set Compare State Modification

  if ( ChName == 2)              //  if Channel_2
    CCU6_CMPMODIFL   |= 0x04;         //  Set Compare State Modification

  if ( ChName == 3)              //  if Channel_3
    CCU6_CMPMODIFL   |= 0x40;         //  Set Compare State Modification

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vSetStatusBit


//****************************************************************************
// @Function      void CC6_vResetStatusBit(ubyte ChName) 
//
//----------------------------------------------------------------------------
// @Description   This function resets the capture / compare modifikation 
//                status bit of the selected CC6 channel. 
//                The following definitions are available for ChName: 
//                CC6_CHANNEL_0 .. CC6_CHANNEL_3 (see @Defines in header file)
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ChName: 
//                Name of the CC6 channel to be used
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (ResetStatusBit,1)

// USER CODE END

void CC6_vResetStatusBit(ubyte ChName)
{

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( ChName == 0)              //  if Channel_0
    CCU6_CMPMODIFH   |= 0x01;         //  Reset Compare State Modification

  if ( ChName == 1)              //  if Channel_1
    CCU6_CMPMODIFH   |= 0x02;         //  Reset Compare State Modification

  if ( ChName == 2)              //  if Channel_2
    CCU6_CMPMODIFH   |= 0x04;         //  Reset Compare State Modification

  if ( ChName == 3)              //  if Channel_3
    CCU6_CMPMODIFH   |= 0x40;         //  Reset Compare State Modification

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_vResetStatusBit


//****************************************************************************
// @Function      void CC6_uwSetTmrCounter(ubyte TimerNr, uword Value) 
//
//----------------------------------------------------------------------------
// @Description   This function loads the selected CC6 timer counter register 
//                with the parameter Value . It is possible to use this 
//                function only if the selected timer is stopped.
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be used
// @Parameters    Value: 
//                16-bit value with which the CC6 counter register is to be 
//                loaded
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (SetTmrCounter,1)

// USER CODE END

void CC6_uwSetTmrCounter(ubyte TimerNr, uword Value)
{

  SFR_PAGE(_cc3, SST2);          // switch to page 3

  if ( TimerNr == 12)          //  if Timer_12
  {
    CCU6_T12L      = (ubyte) (0x00FF & Value);   //  Timer T12 Counter Register Low
    CCU6_T12H      = (ubyte) (Value >> 8);       //  Timer T12 Counter Register High
  }

  if ( TimerNr == 13)          //  if Timer_13
  {
    CCU6_T13L      = (ubyte) (0x00FF & Value);   //  Timer T13 Counter Register Low
    CCU6_T13H      = (ubyte) (Value >> 8);       //  Timer T13 Counter Register High
  }

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

} //  End of function CC6_uwSetTmrCounter


//****************************************************************************
// @Function      uword CC6_uwGetChannelShadowRegister(ubyte ChName) 
//
//----------------------------------------------------------------------------
// @Description   This function returns the content of the CC6 
//                capture/compare shadow register of the selected channel.
//                
//                The following definitions are available for RegName: 
//                CC6_CHANNEL_0 .. CC6_CHANNEL_3 (see @Defines in header file)
//
//----------------------------------------------------------------------------
// @Returnvalue   Current 16-bit value of the CC6 shadow register
//
//----------------------------------------------------------------------------
// @Parameters    ChName: 
//                Name of the CC6 channel to be readed
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (GetChannelShadowRegister,1)

// USER CODE END

uword CC6_uwGetChannelShadowRegister(ubyte ChName)
{

  uword Value = 0;

  SFR_PAGE(_cc0, SST2);          // switch to page 0

  if ( ChName == 0)                               //  if Channel_0
    Value = (uword)((CCU6_CC60SRH << 8) + CCU6_CC60SRL);    //  Compare Shadow Register

  if ( ChName == 1)                               //  if Channel_1
    Value = (uword)((CCU6_CC61SRH << 8) + CCU6_CC61SRL);    //  Compare Shadow Register

  if ( ChName == 2)                               //  if Channel_2
    Value = (uword)((CCU6_CC62SRH << 8) + CCU6_CC62SRL);    //  Compare Shadow Register

  if ( ChName == 3)                               //  if Channel_3
    Value = (uword)((CCU6_CC63SRH << 8) + CCU6_CC63SRL);    //  Compare Shadow Register

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

  return (Value);

} //  End of function CC6_uwGetChannelShadowRegister


//****************************************************************************
// @Function      uword CC6_uwGetTmrCounter(ubyte TimerNr) 
//
//----------------------------------------------------------------------------
// @Description   This function returns the contents of the selected CC6 
//                timer counter register.
//                
//                The following definitions for TimerNr are available: 
//                CC6_TIMER_12
//                CC6_TIMER_13
//
//----------------------------------------------------------------------------
// @Returnvalue   16-bit counter value
//
//----------------------------------------------------------------------------
// @Parameters    TimerNr: 
//                Name of the CC6 timer to be used
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (GetTmrCounter,1)

// USER CODE END

uword CC6_uwGetTmrCounter(ubyte TimerNr)
{

  uword Value = 0;

  SFR_PAGE(_cc3, SST2);          // switch to page 3

  if ( TimerNr == 12)                            //  if Timer_12
    Value      = (uword) ((CCU6_T12H << 8) + CCU6_T12L);   //  Timer T12 Reload Value

  if ( TimerNr == 13)                            //  if Timer_13
    Value      = (uword) ((CCU6_T13H << 8) + CCU6_T13L);   //  Timer T12 Reload Value

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

  return (Value);

} //  End of function CC6_uwGetTmrCounter


//****************************************************************************
// @Function      uword CC6_uwGetChannelRegister(ubyte ChName) 
//
//----------------------------------------------------------------------------
// @Description   This function returns the content of the CC6 
//                capture/compare register of the selected channel.
//                
//                The following definitions are available for RegName: 
//                CC6_CHANNEL_0 .. CC6_CHANNEL_3 (see @Defines in header file)
//
//----------------------------------------------------------------------------
// @Returnvalue   Current 16-bit value of the CC6 register
//
//----------------------------------------------------------------------------
// @Parameters    ChName: 
//                Name of the CC6 channel to be readed
//
//----------------------------------------------------------------------------
// @Date          09.02.2005
//
//****************************************************************************

// USER CODE BEGIN (GetChannelRegister,1)

// USER CODE END

uword CC6_uwGetChannelRegister(ubyte ChName)
{

  uword Value = 0;

  SFR_PAGE(_cc1, SST2);          // switch to page 1

  if ( ChName == 0)                             //  if Channel_0
    Value = (uword)((CCU6_CC60RH << 8) + CCU6_CC60RL);    //  Capture/Compare Register for Channel CC60

  if ( ChName == 1)                             //  if Channel_1
    Value = (uword)((CCU6_CC61RH << 8) + CCU6_CC61RL);    //  Capture/Compare Register for Channel CC61

  if ( ChName == 2)                             //  if Channel_2
    Value = (uword)((CCU6_CC62RH << 8) + CCU6_CC62RL);    //  Capture/Compare Register for Channel CC62

  if ( ChName == 3)                             //  if Channel_3
    Value = (uword)((CCU6_CC63RH << 8) + CCU6_CC63RL);    //  Capture/Compare Register for Channel CC63

  SFR_PAGE(_cc0, RST2);          // restore the old CCU page

  return (Value);

} //  End of function CC6_uwGetChannelRegister


// USER CODE BEGIN (CCU6_General,10)

// USER CODE END

