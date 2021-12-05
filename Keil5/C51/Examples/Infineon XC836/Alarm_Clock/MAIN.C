//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.C
// @Project       alarm_clock.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC836MT-2F
//
// @Compiler      Keil
//
// @Codegenerator 0.03
//
// @Description   This file contains the Project initialization function.
//
//----------------------------------------------------------------------------
// @Date          5/13/2010 11:09:46
//
//****************************************************************************

// USER CODE BEGIN (MAIN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (MAIN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (MAIN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (MAIN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (MAIN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,6)
extern ubyte submode_led;
// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,7)
/* look-up table for logic to output to 7-segment LED display */
unsigned char idata LED_Display[15] = {
	0x3F, //display 0
	0x06, //display 1
	0x5B, //display 2
	0x4F, //display 3
	0x66, //display 4
	0x6D, //display 5
	0x7D, //display 6
	0x07, //display 7
	0x7F, //display 8
	0x6F, //display 9
	0x39, //display C
	0x5E, //display d
	0x77, //display A
	0x79, //display E
	0x00};//display blank
/* look-up table for converting PADRESULT to numerical value  */
/* or LED_Display element number                              */
unsigned char idata Padresult_LED_Display[17] = {
	0x00, //nil
	0x01, //1
	0x03, //3
	0x02, //2
	0x07, //7
	0x04, //4
	0x05, //5
	0x00, //nil
	0x09, //9
	0x0E, //element number for displaying blank in LED_Display[12]
	0x06, //6
	0x0D, //element number for displaying E in LED_Display[12]
	0x08, //8
	0x00, //nil
	0x00, //nil
	0x00, //nil
	0x00};//0
/* look-up table for the no. of days in any calendar month */
unsigned char idata Days_LookUpTable[14] = {
	0,  //nil
	31, //Jan
	28, //Feb(normal)
	31, //Mar
	30, //Apr
	31, //May
	30, //Jun
	31, //Jul
	31, //Aug
	30, //Sep
	31, //Oct
	30, //Nov
	31, //Dec
	29};//Feb(leap)
ubyte operation = 0x00;		  // 0: Display Mode, 1: Setup Mode (process user input), 2: Save user input
ubyte pad_pressed = 0x00;	  // to save PADRESULT from FINDTOUCHEDPAD in ROMLib
ubyte led_turn = 0;			  // to cycle between the 4 LEDs
ubyte submode_status = 0x0A;  // 0x0A: Clock, 0x0B: Date, 0x0C: Alarm
char alarm_flag = 0;  		  // to indicate whether to trigger alarm or not
char alarm_once = 0;          // to indicate whether alarm has been triggered once for the day
char first_cycle = 1;         // to keep track of the led turn cycle
ubyte input_data[4] = {0x00, 0x00, 0x00, 0x00}; // to handle user input and display
stRTC_REGx current_time;	  // to store the time captured by the RTCCRx registers
char second_display = 0;	  // to display second time
// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************


// USER CODE BEGIN (MAIN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (MAIN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void MAIN_vInit(void)
//
//----------------------------------------------------------------------------
// @Description   This function initializes the microcontroller. It is
//                assumed that the SFRs are in their reset state.
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

// USER CODE BEGIN (MAIN_Init,1)

// USER CODE END

void MAIN_vInit(void)
{
   volatile bit bClkStat;

  // USER CODE BEGIN (MAIN_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the System Clock:
  ///  -----------------------------------------------------------------------
  ///  - 32.768 KHz OSC pad is not powered down
  ///  - input frequency is 48 MHz

  ///  - Clock mode control is enabled

  ///  - 24 MHz mode is selected

  //   FPCLK for ADC,CCU6 and LED/TS is 48.00 MHz.

  //   calling BootROM routine which switches the clock to 24 MHz

  bClkStat      =  BR_FEATURE_SETTING(0x00, 0x80);

  //   Check the status for correct option selection
  if (bClkStat != 0 ){
      //   Failure in correct option selection
      while(1);
  }

  //   ---------- Modules configuration with PMCON1 reg.----------

  SFR_PAGE(_su1, noSST);         // switch to page 1
  PMCON1        =  0xB7;         // load peripheral management control
                                 // register 1
  SFR_PAGE(_su0, noSST);         // switch to page 0



  ///  *********************************************************************************
  ///  Note : All peripheral related IO configurations are done in the
  ///  respective peripheral modules (alternate functions selection)
  ///  *********************************************************************************

  ///  Initialization of module 'Timer 2'
  T2_vInit();

  ///  Initialization of module 'Real Time Clock (RTC)'
  RTC_vInit();

  ///  Initialization of module 'LED and Touch-Sense Controller'
  LTS_vInit();

  ///  Initialization of  'Shared interrupts'
  SHINT_vInit();

  //   Interrupt Priority

  IP            =  0x00;         // load Interrupt Priority Register
  IPH           =  0x00;         // load Interrupt Priority High Register
  IP1           =  0x20;         // load Interrupt Priority 1 Register
  IPH1          =  0x00;         // load Interrupt Priority 1 High Register


  // USER CODE BEGIN (MAIN_Init,3)

  // USER CODE END



  //   globally enable interrupts
  EA            =  1;

} //  End of function MAIN_vInit


//****************************************************************************
// @Function      void main(void)
//
//----------------------------------------------------------------------------
// @Description   This is the main function.
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

// USER CODE BEGIN (MAIN_Main,1)
ubyte alarm_data[4] = {0x3F, 0x3F, 0x3F, 0x06};	// to hold the alarm time (hr:min) display logic values
ubyte display_data[4] = {0x00, 0x00, 0x00, 0x00};//to hold the data to be displayed on 7-segment LED
ubyte stored_input[4] = {0x00, 0x00, 0x00, 0x00};// to hold the numbers pressed by user
ubyte padresult_convert = 0x00;					// to hold the display logic value of a PADRESULT
ubyte temp_hold1 = 0x00, temp_hold2 = 0x00;		// temporary value holders
uword date_stored = 0x00;						// to hold the date keyed in by user (in days)
ubyte alarm_stored[2] = {0x00, 0x01};			// to hold the alarm time keyed in by user
ubyte display_sec[2] = {0x00, 0x00};			//to hold the second timing to be displayed on 7-segment LED
char check_save = 0;
// USER CODE END

void main(void)
{
  // USER CODE BEGIN (MAIN_Main,2)

  // USER CODE END

  MAIN_vInit();

  // USER CODE BEGIN (MAIN_Main,3)

  // USER CODE END

  while(1)
  {

  // USER CODE BEGIN (MAIN_Main,4)
  switch (operation)
  {
		case 0: //Display Mode
		    RTC_vReadClkCounter(&current_time);  //read the current time
		    if (alarm_once == 0)	               //alarm has not been triggered in for that particular day
		    {
		  	  if(MAIN_bCheckAlarm(current_time.ubREG2, current_time.ubREG3, alarm_stored))//check for alarm time
		  	  {
				  alarm_flag = 1;
				  LDLINE_VALUE[5] |= 0xFF;	   //trigger buzzer
				  T2_vStartTmr();				   //start timer2
		  		  alarm_once = 1;	               //raise flag to indicate alarm has been triggered once for the day
		  	  }
		    }
		    else
		    {
		  	  if (date_stored != current_time.uwREG4_5){//check if new day has arrived
				  alarm_once = 0;					//reset alarm for new day
				  date_stored++;					//update date
			  }
		    }
		    switch (submode_status)
		    {
		  		case 0x0B:	//date submode
					  MAIN_vConvert_Date_FromHex(current_time.uwREG4_5);//convert date to day & month from RTC_RTCCR4_5
					  LDLINE_VALUE[1] = LED_Display[display_data[0]];
					  LDLINE_VALUE[2] = LED_Display[display_data[1]];
					  LDLINE_VALUE[3] = LED_Display[display_data[2]];
				      LDLINE_VALUE[4] = LED_Display[display_data[3]];
					  break;
				case 0x0C:	//alarm submode
					  LDLINE_VALUE[1] = alarm_data[0];
					  LDLINE_VALUE[2] = alarm_data[1];
					  LDLINE_VALUE[3] = alarm_data[2];
				      LDLINE_VALUE[4] = alarm_data[3];
					  break;
				default: //clock submode
					if (second_display == 1)
					{
					  display_sec[1] = current_time.ubREG1;
					  display_sec[0] = display_sec[1]/10;
					  display_sec[1] = display_sec[1]%10;
					  LDLINE_VALUE[4] = LED_Display[display_sec[1]]; 	// COL0 LDLINE value
					  LDLINE_VALUE[3] = LED_Display[display_sec[0]]; 	// COL1 LDLINE value
					  LDLINE_VALUE[2] = 0x00; 	// clear display
					  LDLINE_VALUE[1] = 0x00;	// clear display
					}
					else
					{
					  display_data[3] = current_time.ubREG2;
					  display_data[2] = display_data[3]/10;
					  display_data[3] = display_data[3]%10;
					  display_data[1] = current_time.ubREG3;
					  display_data[0] = display_data[1]/10;
					  display_data[1] = display_data[1]%10;
					  LDLINE_VALUE[1] = LED_Display[display_data[0]]; 	// COL0 LDLINE value
					  LDLINE_VALUE[2] = LED_Display[display_data[1]]; 	// COL1 LDLINE value
					  LDLINE_VALUE[3] = LED_Display[display_data[2]]; 	// COL2 LDLINE value
					  LDLINE_VALUE[4] = LED_Display[display_data[3]];	// COL3 LDLINE value
					}
					  break;
			}
		    break;
		case 1: //to reset input_data array
			for (led_turn=0; led_turn<4; led_turn++)
			{
				input_data[led_turn] = 0x00;			//reset input_data array
			}
			led_turn = 0;
			LDLINE_VALUE[1] = 0x00;						//clear LED displays
			LDLINE_VALUE[2] = 0x00;
			LDLINE_VALUE[3] = 0x00;
			LDLINE_VALUE[4] = 0x00;
			operation = 2;								//proceed to next operation
  		case 2: //to process user input(setup mode)
			if (pad_pressed != 0x14) //not '*' pressed
			{
				padresult_convert =  Padresult_LED_Display[pad_pressed]; //convert padresult to digit
				stored_input[led_turn - 1] = padresult_convert;	 //store digit in array

				padresult_convert = LED_Display[padresult_convert]; //convert digit to LED display id
				LDLINE_VALUE[led_turn] = padresult_convert; //display digit on LED
				input_data[led_turn - 1] = padresult_convert; //store LED display id in array
				if (led_turn == 4){
					first_cycle = 0; //reset flag to indicate that 4 digits have been pressed by user
				}
			}
			break;
		case 3: //to check if user enters 4 digits
			temp_hold1 = 0x00; //reset temp variable
			for (led_turn=0; led_turn<4; led_turn++)
			{
				if (input_data[led_turn] == 0x00){ //check if user keyed in 4 digits
					temp_hold1++;}
			}
			if (temp_hold1 == 0x00){
				check_save = 1;
				operation = 4;}		//user keyed in 4 digits, proceed to save user input
			else{
				operation = 0;}		//user keyed in less than 4 digits, inputs will not saved
			temp_hold1 = 0x00;		//reset temp variable
			led_turn = 0x00;
			break;
		case 4: //to save input after user finish entering all four values
			  if(check_save == 1)
			  {
			  switch (submode_status)
		  	  {
		  		case 0x0B: //in date submode
					  if (MAIN_cCheck_Valid_Date(stored_input)) //check validity of date entered by user
					  {
						  date_stored = MAIN_uwConvert_Date_ToHex(stored_input); //convert user input for date to days
																				 //to write to RTC_CNT4 & 5
						  temp_hold1 = date_stored & 0xFF;        //prepare reg value for RTC_CNT4
						  temp_hold2 = (date_stored >> 8) & 0xFF; //prepare reg value for RTC_CNT5
						  RTC_RTCON &= ~(ubyte)0x01;   //real time clock operation stopped
						  SFR_PAGE(_su1, noSST);       // switch to page 1 without saving
						  MAIN_vUnlockProtecReg();     // open access to protected register
						  RTC_CNT4 = temp_hold1;	   // change RTC_CNT4 value
						  MAIN_vUnlockProtecReg();     // open access to protected register
						  RTC_CNT5 = temp_hold2;	   // change RTC_CNT5 value
						  MAIN_vlockProtecReg();       // close access to protected register
						  SFR_PAGE(_su0, noSST);       // switch to page 0 without saving
						  RTC_RTCON |= 0x01;		   // real time clock operation resumed
						  operation = 6;
					  }
					  else
					  {
						  operation = 7; //invalid date
					  }
					  break;
				case 0x0C: //in alarm_time submode
					  alarm_data[0] = input_data[0];   //store alarm display value
					  alarm_data[1] = input_data[1];   //store alarm display value
					  alarm_data[2] = input_data[2];   //store alarm display value
					  alarm_data[3] = input_data[3];   //store alarm display value
					  alarm_stored[1] = ((stored_input[2]*10) + stored_input[3]); //convert & store alarm time (min)
	 				  alarm_stored[0] = ((stored_input[0]*10) + stored_input[1]); //convert & store alarm time (hour)
					  operation = 6;
					  alarm_once = 0;	//reset alarm_once flag
					  break;
				default: //in clock submode
					  temp_hold1 = ((stored_input[2]*10) + stored_input[3]); //calculate the value entered for hours
					  temp_hold2 = ((stored_input[0]*10) + stored_input[1]); //calculate the value entered for minutes
					  if (MAIN_cCheck_Valid_Time(temp_hold2, temp_hold1))    //check if user entered a valid time
					  {
						  RTC_RTCON &= ~(ubyte)0x01;   //real time clock operation stopped
						  SFR_PAGE(_su1, noSST);       //switch to page 1 without saving
						  MAIN_vUnlockProtecReg();     //open access to protected register
						  RTC_CNT0 = 0x00;			   //reset milliseconds reg
						  MAIN_vUnlockProtecReg();     // open access to protected register
						  RTC_CNT1 = 0x00;			   //reset seconds reg
						  MAIN_vUnlockProtecReg();     //open access to protected register
						  RTC_CNT2 = temp_hold1;       //load count clock register 2
						  MAIN_vUnlockProtecReg();     //open access to protected register
						  RTC_CNT3 = temp_hold2;       //load count clock register 3
						  MAIN_vlockProtecReg();       //close access to protected register
						  SFR_PAGE(_su0, noSST);       //switch to page 0 without saving
						  RTC_RTCON |= 0x01;		   //real time clock operation resumed
						  operation = 6;
						  alarm_once = 0;			   //reset alarm_once flag
					  }
					  else
					  {
						  operation = 7; 			   //invalid time
					  }
					  break;
			}
			led_turn = 0x00;
			check_save = 0;
			}
			  else{
				  operation = 0;}
			break;
		case 5:	//to display 'C', 'd' or 'A' accordingly when submode is switched
			LDLINE_VALUE[1] = 0x00;							//display nothing
			LDLINE_VALUE[2] = 0x00;							//display nothing
			LDLINE_VALUE[3] = 0x00;							//display nothing
			LDLINE_VALUE[4] = LED_Display[submode_status];	//display letter
			break;
		case 6: //to display 'done'
			LDLINE_VALUE[1] = 0x5E;							//display 'd'
			LDLINE_VALUE[2] = 0x3F;							//display '0'
			LDLINE_VALUE[3] = 0x37;							//display 'n'
			LDLINE_VALUE[4] = 0x79;							//display 'E'
			break;
		case 7: //to display 'Eror'
			LDLINE_VALUE[1] = 0x79;							//display 'E'
			LDLINE_VALUE[2] = 0x33;							//display 'r'
			LDLINE_VALUE[3] = 0x3F;							//display '0'
			LDLINE_VALUE[4] = 0x33;							//display 'r'
			break;
		default:
			operation = 0;
			break;
  }
  // USER CODE END

  }

} //  End of function main


// USER CODE BEGIN (MAIN_General,10)

/* this function checks if the time entered by the user is valid. */
/* it returns a 1 for a valid date, and a 0 for an invalid date.  */
/* the program will then decide to save the entered date depending*/
/* on the returned value.                                         */
char MAIN_cCheck_Valid_Time(uword hours, uword minutes)
{
	if ((hours > 23) || (minutes > 59))
	{
		return 0;   //invalid date
	}
	else
		return 1;	//valid date
}

/* this function compares the current time with the set alarm time and */
/* triggers the alarm accordingly if there is a match.                 */
char MAIN_bCheckAlarm(ubyte minute_now, ubyte hour_now, ubyte alarm_time[])
{
	if ((alarm_time[0] == hour_now) && (alarm_time[1] == minute_now))
	{
		return 1;	//alarm time now
	}
	else
		return 0;	//not alarm time
}

/* this function checks if the date entered by the user is valid. */
/* it returns a 1 for a valid date, and a 0 for an invalid date.  */
/* the program will then decide to save the entered date depending*/
/* on the returned value.                                         */
char MAIN_cCheck_Valid_Date(ubyte date_entered[])
{
	ubyte month = 0x00;
	ubyte day = 0x00;

	month = ((date_entered[2]*10) + date_entered[3]);
	if ((month == 0) || (month > 12))
	{
		return 0;	//invalid month
	}
	day = ((date_entered[0]*10) + date_entered[1]);
	if ((RTC_RTCON1 == 1) && (month == 2))
	{
		month = 13;	//set month array id to Leap Year Feb
	}
	if ((day == 0) || (day > Days_LookUpTable[month]))
	{
		return 0;	//invalid day no.
	}
	else
	{
		return 1;	//valid date
	}
}

/* this function converts the date stored in the RTC_CNT4_5 reg to its month & day for display purposes.   */
/* the result is obtained from iteratively comparing the no. of days stored in RTC_CNT4_5(day_cntr) with   */
/* the no. of days(check_days)in a month(beginning with Jan), and subtracting off check_days from day_cntr */
/* at the end of each iteration, until day_cntr falls within check_days.                                   */
void MAIN_vConvert_Date_FromHex(uword hex_date)
{
	uword day_cntr = 0;			 //keep track of the day
	ubyte month_cntr = 0x01;	 //keep track of the month
	ubyte check_days = 0x00;

	day_cntr = hex_date + 1;	 //sets up day_cntr
	check_days = Days_LookUpTable[month_cntr]; //fetch no. of days in January
	while (day_cntr > check_days)
	{
		month_cntr++;
		day_cntr -= check_days;  //calculate the difference between day_cntr & check_days
		if ((month_cntr == 2) && (RTC_RTCON1 == 0x01))
		{
			check_days = 29;	 //leap year February
		}
		else
		{
			check_days = Days_LookUpTable[month_cntr];	//update check_days with next month's no. of days
		}
	}

	display_data[2] = month_cntr/10;	   //update date display value holder
	display_data[3] = month_cntr%10;	   //update date display value holder
	display_data[0] = day_cntr/10;		   //update date display value holder
	display_data[1] = day_cntr%10;		   //update date display value holder

	return;

}

/* this function converts the date input by user into hexadecimal form. */
/* the total no of days is calculated by first identifying the month,   */
/* then adding the date in the month with the accumulated no of days    */
/* in the previous months.                                              */
uword MAIN_uwConvert_Date_ToHex(ubyte date_array[])
{
	ubyte month = 0x00;
	uword total_days = 0x00;

	month = ((date_array[2]*10) + date_array[3]);		//calculate month
	total_days = ((date_array[0]*10) + date_array[1]);	//calculate day
	if ((RTC_RTCON1 == 0x01) && (month > 2)){
		total_days++;	//to factor in leap year
	}
	while (month > 0)
	{
		total_days += Days_LookUpTable[month - 1];	//add no. of days in months leading up to the current month
		month--;
	}
	return (total_days - 1); //return result
}

// USER CODE END

