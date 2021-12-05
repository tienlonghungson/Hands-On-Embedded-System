//****************************************************************************
// @Module        Timer 2
// @Filename      T2.C
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description:  This file contains functions that use the T2 module.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:02
//
//****************************************************************************

// USER CODE BEGIN (T2_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (T2_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (T2_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (T2_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (T2_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (T2_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (T2_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (T2_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (T2_General,9)

// USER CODE END


//****************************************************************************
// @Function      void T2_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the Timer 2 function
//                library. It is assumed that the SFRs used by this library
//                are in their reset state.
//
//                The following SFRs and SFR fields will be initialized:
//                T2_RC2H/RC2L     - reload/capture timer 2 register
//                T2_T2H/T2L     -  timer 2 register
//                ET2           - timer 2 interrupt enable
//                T2_T2MOD         - timer 2 mode register
//                CP/RL2        - Capture/Reload select
//                EXEN2         - External enable control
//                TR2           - Timer2 run control
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

// USER CODE BEGIN (T2_Init,1)

// USER CODE END

void T2_vInit(void)
{
  // USER CODE BEGIN (T2_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------
  ///  - the T2 module clock = 24,00 MHz

  //   -----------------------------------------------------------------------
  //   Operating Mode
  //   -----------------------------------------------------------------------

  ///  16-bit timer function with automatic reload when timer 2 overflows
  ///  Prescaler enabled - input clock = fPCLK/4
  ///  the timer 2 resolution is 0,167  usec
  ///  the timer 2 overflow is 5000,000  usec
  ///  timer 2 interrupt: enabled
  ///  timer 2 will be started

  //   -----------------------------------------------------------------------
  //   Register Initialization
  //   -----------------------------------------------------------------------

  //   the reset values of T2H and T2L are not changed

  T2_RC2LH      =  0x8AD0;       // load timer 2 reload/capture register low
                                 // & high bytes


  T2_T2MOD      =  0x14;         // load timer 2 mode register
  T2_T2CON1     =  0x02;         // load timer 2  control register 1

  ///  timer 2 interrupt: enabled
  ET2 = 1;                       // Enable interrupt

  // USER CODE BEGIN (T2_Init,3)

  // USER CODE END

  TR2 = 1; //   start timer

} //  End of function T2_vInit



//****************************************************************************
// @Function      void T2_viTmr2(void)
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the Timer 2 interrupt.
//                Depending on the selected operating mode it is called when
//                TF2 is set by an overflow or underflow of the timer 2
//                register or when EXF2 is set by a negative transition on
//                T2EX.
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
// @Date          08.01.2010
//
//****************************************************************************

// USER CODE BEGIN (T2_IsrTmr,1)
unsigned long CC61value = 0x0c5f0000;
unsigned int current_ref = 0x0bff;
unsigned char t2count=0;
int error=0;
// USER CODE END

void T2_viTmr2(void) interrupt T2INT
{
  // USER CODE BEGIN (T2_IsrTmr,2)

	// USER CODE END

  if ((TF2))
  {
    //   a timer 2 overflow has occured
    TF2 = 0;

    // USER CODE BEGIN (T2_IsrTmr,3)
    LDLINE_VALUE[1] = PADFLAG;

    if( !t2count--)
    {
    	t2count = 0x10;
//		LDLINE_VALUE[2] ^= 0x02;

		if(!PADERROR)
		{
			switch( PADRESULT & 0x07 )
			{
			case 3:
				if( current_ref )
				{
					current_ref = 0x0000;
					LDLINE_VALUE[2] &= ~0x01;
				}
				else
				{
					current_ref = 0x0bff;
					LDLINE_VALUE[2] |= 0x01;
				}
				break;
			case 1:
				if( !(current_ref & 0x4000) )
					current_ref = (current_ref<<1)+1;
				break;
			case 2:
				if( current_ref > 0x0200 )
					current_ref = (current_ref>>1);
				break;
			}
		}
		else
		{
			PADERROR = 0;
			current_ref = 0x0001;
		}
		PADRESULT = 0;
    }
    SFR_PAGE(ADC_RESR3H_PAGE, SST1);         // switch to page 2, save SFR page to ST1

    // Voltage Limitation
    if( ADC_RESR1H > 0x7f)
	{
		CC61value+=0x100000;
	}
	else
	{
		// Current Control
//		error = ((unsigned int)ADC_RESR3LH>>1) - ((unsigned int)ADC_RESR0LH>>1);

		error = current_ref - ((unsigned int)ADC_RESR0LH>>1);

//		CC61value -= (error>>11) * (CC61value>>6);  // schnell aber schlecht

		CC61value -= (error>>1) * (CC61value>>16);  //


		SBUF = 0xc6-(CC61value>>20) ;
		// 0% Dutc Cycle limitation
	}

    if( CC61value > 0x0c5f0000 )
   		CC61value = 0x0c5f0000;

    // update compare value and request shadow transfer

	CCU6_CC61SRLH = (CC61value>>16);
	CCU6_TCTR4L = 0x40;

    SFR_PAGE(ADC_RESR3H_PAGE, RST1);         // restore previous SFR page
	    // USER CODE END

  }

  // USER CODE BEGIN (T2_IsrTmr,5)

  // USER CODE END

} //  End of function T2_viTmr2



// USER CODE BEGIN (T2_General,10)

// USER CODE END

