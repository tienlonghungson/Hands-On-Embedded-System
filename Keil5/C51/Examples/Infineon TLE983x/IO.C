//****************************************************************************
// @Module        GPIO
// @Filename      IO.C
//----------------------------------------------------------------------------
// @Controller    Infineon XC8xx
// @Compiler      Keil
// @Description:  This file contains functions that use the IO module.
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************

#include "MAIN.H"


//****************************************************************************
// @Function      void IO_Init(void) 
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void IO_Init(void)
{
  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0:
  ///  -----------------------------------------------------------------------

  SFR_PAGE(_pp1, noSST);         	// switch to page 1
  P0_PUDSEL &= 0xF7;         		// pulldown for P0.3, all others pullup
  P0_PUDEN |= 0x08;         		// enable Pull device for P0.3

  SFR_PAGE(_pp0, noSST);         	// switch to page 0
  P0_DIR |= 0x18;         			// P0.3 and P0.4 to output pin  

  SFR_PAGE(_pp2, noSST);         	// switch to page 2
  P0_ALTSEL0 |= 0x10;		     	// select ATL3(CLKOUT_0) for P0.4
  P0_ALTSEL1 |= 0x10;


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1:
  ///  -----------------------------------------------------------------------

  SFR_PAGE(_pp0, noSST);         	// switch to page 0
  P1_DIR = 0x1F;				   // set P1.0 ... P1.4 to output pin. 

//  SFR_PAGE(_pp2, noSST);         	// switch to page 2
//  P1_ALTSEL0 = 0x10;		     	// select ATL1(CLKOUT_1) for P1.4
//  P1_ALTSEL1 = 0x00;

  SFR_PAGE(_pp0, noSST);         	// switch to page 0

} //  End of function IO_vInit


