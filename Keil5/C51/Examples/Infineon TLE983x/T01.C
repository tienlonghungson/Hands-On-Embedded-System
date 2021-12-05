//****************************************************************************
// @Module        Timer 0/1
// @Filename      T01.C
//----------------------------------------------------------------------------
// @Controller    Infineon XC8xx
// @Compiler      Keil
// @Description:  This file contains functions that use the T01 module.
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************

#include "MAIN.H"

extern unsigned int WD_Counter;


//****************************************************************************
// @Function      void T01_Init(void) 
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the Timer 0/1 
//                function library. It is assumed that the SFRs used by this 
//                library are in their reset state. 
//                
//                The following SFR fields will be initialized for both 
//                timers 0 and 1:
//                T0M            - Timer 0 mode
//                T1M            - Timer 1 mode
//                GATE0/GATE1    - gating control
//                TLx, THx       - timer low/high registers
//                ETx            - interrupt enable
//                TRx            - timer run control (this is the final action)
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void T01_Init(void)
{
  ///  -----------------------------------------------------------------------
  ///  Timer 0
  ///  -----------------------------------------------------------------------
  ///  Mode 1: 16-bit timer (TH0, TL0)
  ///  the timer 0 overflow is 1000 µs

  TMOD = 0x01;				// Timer 0 + Timer 1 Mode 1
  TL0 = 0xDF;				// load Timer 0	 (40 MHz)
  TH0 = 0xB1;
//  TL0 = 0xEB;				// load Timer 0	 (24 MHz)
//  TH0 = 0xCB;

  ET0 = 1;				 	// Enable Timer 0 interrupt
  TR0 = 1;				 	// Start Timer 0
} //  End of function T01_Init


//****************************************************************************
// @Function      void T01_viTmr0(void) 
//----------------------------------------------------------------------------
// @Description   This is the service routine for the timer 0 interrupt. It 
//                is called 
//                - when TH0 overflows if timer 0 is in mode 0 or 1
//                - when TL0 overflows if timer 0 is in mode 2 or 3
//                Please note that you have to add application specific code 
//                to this function.
//----------------------------------------------------------------------------
// @Returnvalue   none
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void T01_viTmr0(void) interrupt T0INT
{
  TL0 = 0xDF;				// load Timer 0	 (40 MHz)
  TH0 = 0xB1;
//  TL0 = 0xEB;				// load Timer 0	 (24 MHz)
//  TH0 = 0xCB;

 	WD_Counter++;
} //  End of function T01_viTmr0