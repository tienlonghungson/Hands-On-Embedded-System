//****************************************************************************
// @Module        Shared Interrupt Routines
// @Filename      SHARED_INT.C
// @Project       alarm_clock.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC836MT-2F
//
// @Compiler      Keil
//
// @Codegenerator 0.03
//
// @Description   This file contains the Shared interrupt routines.
//
//----------------------------------------------------------------------------
// @Date          5/13/2010 11:09:46
//
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "SHARED_INT.H"

// USER CODE BEGIN (SHARED_INT_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,6)
extern ubyte operation;
extern ubyte pad_pressed;
extern ubyte led_turn;
extern ubyte submode_status;
extern ubyte input_data[4];
extern char first_cycle;
extern char alarm_flag;
extern char second_display;
extern ubyte second_time;
// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,7)
ubyte submode_led = 0x01;
// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************


// USER CODE BEGIN (SHARED_INT_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (SHARED_INT_General,9)

// USER CODE END


//****************************************************************************
// @Function      void SHINT_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This function initializes the shared interrupts.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_Init,1)

// USER CODE END

void SHINT_vInit(void)
{
  // USER CODE BEGIN (SHINT_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Shared  Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - RTC Interrupt is Selected
  ///  - LED/TS Time Frame Interrupt is Selected
  ///  - LED/TS Time Slice Interrupt is Selected


  IEN1         |=  0xA8;         // load interrupt enable register 1


  // USER CODE BEGIN (SHINT_Init,3)

  // USER CODE END


} //  End of function SHINT_vInit


//****************************************************************************
// @Function      void SHINT_viXINTR9Isr(void)
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node
//                XINTR9. XINTR9 ISR Node is shared by External Interrupts
//                3,4 5,6 and RTC . Depending on the selected module
//                interrupt it is called.
//                EXT3- It is called for the External interrupts 3,4,5 and 6.
//                RTC -  It is called after compare match or every second.
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
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_XINTR9Isr,1)

// USER CODE END

void SHINT_viXINTR9Isr(void) interrupt XINTR9INT
{

  // USER CODE BEGIN (SHINT_XINTR9Isr ,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  RTC Interrupt handling section
  ///  -----------------------------------------------------------------------

  if (RTC_RTCON & 0x80)
  {
    //   Second Timing interrupt has occured

    RTC_RTCON &= ~(ubyte)0x80; //   clear SFRTC

    // USER CODE BEGIN (RTC_SecIsr, 1)
	if (alarm_flag == 0)
	{
		if ((LDLINE_VALUE[5] & 0x0A) == 0x0A)
		{
			LDLINE_VALUE[5] &= 0x55;		  //turn off middle LEDs
		}
		else
		{
			LDLINE_VALUE[5] |= 0x0A;		  //turn on middle LEDs
		}
	}
	if (operation >= 5)
	{
		led_turn++;					  		  //using led_turn temporarily as 2-sec counter
		if(led_turn >= 0x02)		   		  //to display 'C', 'd', 'A', 'done' or 'Eror'
			{                         		  //for 2 secs
				operation = 0;
				led_turn = 0x00;
			}

	}
	if (operation == 2) //the following code is to achieve the blinking cursor or number effect on the LED displays
						//during the Setup mode
	{
		if (first_cycle && ((pad_pressed != 0x0B) && (pad_pressed != 0x09))) //first led cycle & not Error input
		{
			LDLINE_VALUE[led_turn + 1] ^= 0x08; //blinking cursor on LED display
		}
		else
		{
			if ((pad_pressed == 0x0B) || (pad_pressed == 0x09)) //Error input ('E' displayed)
			{
				if (LDLINE_VALUE[led_turn] == 0x79) //'E' on display
				{
					LDLINE_VALUE[led_turn] = 0x00;	//clear display
					pad_pressed = 0x09;				//set Padresult_LED_Display[] pointer to display blank
				}
				else
				{
					LDLINE_VALUE[led_turn] = 0x79;	//display 'E'
					pad_pressed = 0x0B;				//set Padresult_LED_Display[] pointer to display E
				}
			}
			else
			{
				if (led_turn == 4)					//user has entered the 4th digit
				{
					if (LDLINE_VALUE[1] == input_data[0])
					{
						LDLINE_VALUE[1] = 0x00;		//clear 1st LED
					}
					else
					{
						LDLINE_VALUE[1] = input_data[0];	//display user's first input on 1st LED
					}
				}
				else
				{
					if (LDLINE_VALUE[led_turn + 1] == input_data[led_turn])
					{
						LDLINE_VALUE[led_turn + 1] = 0x00; //clear next LED
					}
					else
					{
						LDLINE_VALUE[led_turn + 1] = input_data[led_turn]; //display user's input on next LED
					}
				}
			}
		}
	}
    // USER CODE END
  }


  // USER CODE BEGIN (SHINT_XINTR9Isr,3)

  // USER CODE END



} //  End of function SHINT_viXINTR9Isr


//****************************************************************************
// @Function      void SHINT_viXINTR11Isr(void)
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node
//                XINTR11. XINTR11 ISR Node is shared by CCU6 Node Pointer 1
//                and LED/TS . Depending on the selected module interrupt it
//                is called.
//                CCU6 - If the content of the corresponding compare timer
//                (configurable) equals the content of the capture/compare
//                register or if a capture event occurs at the associated
//                port pin, the interrupt request flag is set and an
//                interrupt is triggered (only if enabled).
//                LED/TS - It is called after every time frame.
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
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_XINTR11Isr, 1)
ubyte long_pad_pressed = 0x00;
// USER CODE END

void SHINT_viXINTR11Isr(void) interrupt XINTR11INT
{

  // USER CODE BEGIN (SHINT_XINTR11Isr, 2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  LED/TS Interrupt handling section
  ///  -----------------------------------------------------------------------
  if (TFF)
  {
    //   Time-Frame interrupt has occured

    TFF = 0;

    // ROM library support

    FINDTOUCHEDPAD();       //TS ROMLIB function
    LTS_vSpeedErrorDetection();   //TS Error Detection function

    // USER CODE BEGIN (LTS_TFIsr, 1)
  		if ((PADFLAG==0)&&(PADRESULT>0)) //pad is touched and valid
  		{
			if ((pad_pressed != 0x0B) && (pad_pressed != 0x09)) //previous pad touch is not an error
  			{
				led_turn++;				//next LED
  			}
			if (led_turn == 5)
			{
				led_turn = 1;			//reset led_turn to first LED
			}
			pad_pressed = PADRESULT;	//save PADRESULT
			PADRESULT = 0x00;			//Clear PADRESULT
			if (alarm_flag == 1)		//alarm is ringing
			{
				if (pad_pressed == 0x10)//check for '0' pressed to de-activate alarm
				{
					 T2_vStopTmr();		//stop timer 2
					 TF2 = 0;			//clear T2 interrupt flag
					 LDLINE_VALUE[5] &= 0x00; 		 //turn off buzzer and blinking small LEDs
					 LDLINE_VALUE[5] |= submode_led; //restore status of 4 side LEDs
					 alarm_flag = 0;	// reset alarm flag
				}
			}
			else
			{
				if (pad_pressed == 0x14)//'*' pressed
				{
					if((operation == 0) && ((second_display == 0) || (submode_status != 0x0A))){
						operation = 1; 	//preparations before entering Setup mode
						first_cycle = 1;
						LDLINE_VALUE[5] |= 0x40; //light up the lowest LED at the side
					}
					else{
						if(operation == 2){
						operation = 3;	//go to check user's input
						LDLINE_VALUE[5] &= 0xBF; //turn off the lowest LED at the side
						}
					}
					led_turn = 0;
				}
				if (pad_pressed == 0x18)//'#' pressed to switch submode
				{
					submode_status++;	//next submode
					LDLINE_VALUE[5] &= 0x0A;
					if (submode_status == 0x0D)//invalid submode id
					{
						submode_led = submode_led >> 4; //reset submode_led
						LDLINE_VALUE[5] |= submode_led; //update 4 side LEDs' status
						submode_status = 0x0A;	   		//reset submode cycle
					}
					else
					{
						submode_led = submode_led << 2;	//change submode_led
						LDLINE_VALUE[5] |= submode_led;	//update 4 side LEDs' status
					}
					led_turn = 0;
					operation = 5;	//go on to display 'C','d' or 'A' accordingly
				}
			}
		}
  		else if (PADERROR>0)
  		  		{
					long_pad_pressed = PADERROR;
					PADERROR = 0x00;				//Clear PADERROR
  					if ((operation == 0) && (submode_status == 0x0A) && (long_pad_pressed == 0x10))
  					{
  						second_display ^= 1;
  					}
  					if (operation == 2)
  					{
						if ((pad_pressed != 0x0B) && (pad_pressed != 0x09)) //previous user input not an error
						{
							led_turn++;					//next LED
						}
						if (led_turn == 5)				//invalid led_turn
						{
							led_turn = 1;			    //reset led_turn to first LED
						}
						pad_pressed = 0x0B;				//display 'E' for error
  					}
  				//Clear TS ROMLIB intermediate results/parameters stored in XRAM
  				 LTS_vInitCalculation();
  				}
    // USER CODE END
  }

  // USER CODE BEGIN (SHINT_XINTR11Isr, 3)

  // USER CODE END

} //  End of function SHINT_viXINTR11Isr

//****************************************************************************
// @Function      void SHINT_viXINTR13Isr(void)
//
//----------------------------------------------------------------------------
// @Description   This is the service routine for the shared interrupt node
//                XINTR13. XINTR13 ISR Node is shared by CCU6 Node Pointer 3
//                and LED/TS . Depending on the selected module interrupt it
//                is called.
//                CCU6 - If the content of the corresponding compare timer
//                (configurable) equals the content of the capture/compare
//                register or if a capture event occurs at the associated
//                port pin, the interrupt request flag is set and an
//                interrupt is triggered (only if enabled).
//                LED/TS - It is called after every time slice.
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
// @Date          5/13/2010
//
//****************************************************************************

// USER CODE BEGIN (SHINT_XINTR13Isr, 1)

// USER CODE END

void SHINT_viXINTR13Isr(void) interrupt XINTR13INT
{

  // USER CODE BEGIN (SHINT_XINTR13Isr, 2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  LED/TS Interrupt handling section
  ///  -----------------------------------------------------------------------
  if (TSF)
  {
    //   Time-slice interrupt has occured
    TSF = 0;

    // ROM library support
    SET_LDLINE_CMP(&LDLINE_VALUE[0], &TSCOMPARE[0]); //LEDTS ROMLIB function

    // USER CODE BEGIN (LTS_TSIsr, 1)

    // USER CODE END
  }

  // USER CODE BEGIN (SHINT_XINTR13Isr, 3)

  // USER CODE END

} //  End of function SHINT_viXINTR13Isr

// USER CODE BEGIN (SHARED_INT_General,10)

// USER CODE END


