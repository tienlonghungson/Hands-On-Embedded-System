//****************************************************************************
// @Filename      MAIN.C
//----------------------------------------------------------------------------
// @Controller    Infineon XC8xx (TLE9832)
// @Compiler      Keil
// @Description   This program tests the general functionality of the TLE9832.
//                
//                program flow:
//                  SBC ACTIVE mode	--> CLKOUT at P0.4 (always)
//				    Mon1 activated 	--> switch LS1 and LS2
//				    Mon2 activated 	--> switch Hall SUPPLY
//				    Mon3 activated 	--> switch HS1 and HS2
//				    Mon4 activated 	--> switch LS1 and LS2 and HS1 and HS2 and Hall SUPPLY
//
//				  Note:
//					This SW has been written for the TLE9832_EVB.
//					For usage with other boards:
//						MON 1 + 2 need a Pull Up
//						MON 3 + 4 need a Pull Down
//						Connect an LED to HS1
//----------------------------------------------------------------------------
// @Date          01.12.2010	V6	frequency switching moved from start_xc.a51 to main.c
// 		          12.07.2010	V5	1st version for B-Step
//								V4	last version for A-Step
//****************************************************************************

#include "MAIN.H"


volatile unsigned int WD_Counter;
volatile unsigned int Mon_Counter;

void Main_Init(void);
void Main_Monitoring (void);
unsigned int Calc_WD_Trigger(unsigned int);


//****************************************************************************
// @Function      void Main_Init(void) 
//----------------------------------------------------------------------------
// @Description   This function initializes the microcontroller. It is 
//                assumed that the SFRs are in their reset state.
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void Main_Init(void)
{
  IO_Init();								// Initialization of module 'GPIO'
  T01_Init();					    		// Initialization of module 'Timer 0/1'
  EA = 1;  									// global interrupt enable
} //  End of function Main_Init


//****************************************************************************
// @Function      void main(void) 
//----------------------------------------------------------------------------
// @Description   This is the main function.
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void main(void)
{
	data unsigned int WD_Trig_Time;

  	//Select the Memory Bank 0
	MEX1 = 0x00;							// current = next bank = 0
	MEX2 = 0x00;   							// interrupt = constant bank = 0
	MEX3 = 0x0A;	 						// XRAM in bank 2

	// switch chip frequency to 40 MHz
#ifdef _40MHZ	 		
	SFR_PAGE(_su2, noSST);         						// switch to page2
	PLL_CON |= 0x08;									// Set VCOBYP = 1  Bypass VCO
	PLL_CON &= 0xFB;									// Set OSCDISC = 0 By default it is 
														// set to 1 upon Power-On RESET

   	PASSWD = 0x98;     									// open access to write protected bits
                                             			// -- switch NDIV--
    PLL_CON &= 0x0F;     								// Clear previous NDIV value
    PLL_CON |= 0x60;										// modify NDIV	(N = 16)
                                             			// --switch K2DIV--
    CMCON &= 0xCF;     									// clear K2DIV (K2 = 0)
                                             			// --restart detection of lock--
    PLL_CON |= 0x02;     								// set RESLD bit
    PASSWD = 0xAB;    									// enable password protection again

	while(!(PLL_CON & 0x01)){		  					// Wait until PLL lock
	}
 
	PLL_CON &=0xF7;										// Set VCOBYP = 0
#endif

  	Main_Init();

  	SFR_PAGE(_su6, noSST);         			// switch to page6
	COCON = 0xFF;							// CLKOUT = Fsys / 80
  	SFR_PAGE(_su0, noSST);         			// switch to page0

	XSFR(LS1_CTRL) = 0x01;					// enable LS1
	XSFR(LS2_CTRL) = 0x01;					// enable LS2

	XSFR(MON1_CTRL_STS) = 0x27;				// configuration of the MON pins
	XSFR(MON2_CTRL_STS) = 0x27;
	XSFR(MON3_CTRL_STS) = 0x27;
	XSFR(MON4_CTRL_STS) = 0x27;
	XSFR(MON5_CTRL_STS) = 0x00;

	XSFR(WDT1_TRIG) = WD_TRIG;				// WD trigger
	WD_Counter = 0;							// reset WD counter
	WD_Trig_Time = Calc_WD_Trigger(WD_TRIG);// calculation of the WD trigger time
 
  	while(1)
  	{
  		ET0 = 0;				 			// Disable Timer 0 interrupt
 		if (WD_Counter>WD_Trig_Time)	    // WatchDog trigger sent 
 		{						
			XSFR(WDT1_TRIG) = WD_TRIG;		// WD trigger
        	WD_Counter=0;					// reset WD counter
			Mon_Counter++;
			IO_TogglePin(P1_0);			   	// toggle P1.0 at each WD trigger
		}
  		ET0 = 1;				 			// Enable Timer 0 interrupt

		Main_Monitoring();
  	}
} //  End of function main


//****************************************************************************
// @Function      void Main_Monitoring (void) 
//----------------------------------------------------------------------------
// @Description   This function monitors the MON inputs.
//
//				  Mon1 activated --> switch LS1 and LS2
//				  Mon2 activated --> switch Hall SUPPLY
//				  Mon3 activated --> switch HS1 and HS2
//				  Mon4 activated --> switch LS1 and LS2 and HS1 and HS2 and Hall SUPPLY
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    None
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
void Main_Monitoring (void)
{
	unsigned char mon;

	mon = ((XSFR(MON1_CTRL_STS)>>3)&0x10)|((XSFR(MON2_CTRL_STS)>>2)&0x20)|
		  ((XSFR(MON3_CTRL_STS)>>1)&0x40)|(XSFR(MON4_CTRL_STS)&0x80);
	switch(mon)
	{
		case (0x20):  	// Mon1 activated --> switch LS1 and LS2 
               		switch (Mon_Counter)
	           		{
	              		case 0x0001:
								XSFR(LS1_CTRL) = 0x01;			// LS1_OFF
								XSFR(LS2_CTRL) = 0x05;			// LS2_ON
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x0060:	           
								XSFR(LS1_CTRL) = 0x05;	 		// LS1_ON
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x00C0:
	                           	Mon_Counter = 0;
				               	break;
	             		default: 
	                           	break;
               		}
			   		break;
               
		case (0x10):  	// Mon2 activated --> switch Hall SUPPLY
               		switch (Mon_Counter)
	           		{
	              		case 0x0001:
								XSFR(LS1_CTRL) = 0x01;	 		// LS1_OFF
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x01;	// HALL_SUPPLY_ON
                               	break;
	              		case 0x0060:	           
								XSFR(LS1_CTRL) = 0x01;	 		// LS1_OFF
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x00C0:
	                           	Mon_Counter = 0;
				               	break;
	              		default: 
	                           	break;
               		}
			   		break;

		case (0x70):  	// Mon3 activated --> switch HS1 and HS2
               		switch (Mon_Counter)
	           		{
	              		case 0x0001:
								XSFR(LS1_CTRL) = 0x01;	 		// LS1_OFF
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x05;	 		// HS1_ON
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x0060:	           
								XSFR(LS1_CTRL) = 0x01;	 		// LS1_OFF
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x05;	 		// HS2_ON
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x00C0:
	                           	Mon_Counter = 0;
				               	break;
	              		default: 
	                           	break;
               		}
			   		break;

		case (0xB0):  	// Mon4 activated --> switch LS1 and LS2 and HS1 and HS2 and HALL SUPPLY
               		switch (Mon_Counter)
	           		{
	              		case 0x0001:
								XSFR(LS1_CTRL) = 0x01;	 		// LS1_OFF
								XSFR(LS2_CTRL) = 0x05;	 		// LS2_ON
								XSFR(HS1_CTRL) = 0x05;	 		// HS1_ON
								XSFR(HS2_CTRL) = 0x00;	 		// HS2_OFF
								XSFR(HALL_SUPPLY_CTRL) = 0x01;	// HALL_SUPPLY_ON
                               	break;
	              		case 0x0060:	           
								XSFR(LS1_CTRL) = 0x05;	 		// LS1_ON
								XSFR(LS2_CTRL) = 0x01;	 		// LS2_OFF
								XSFR(HS1_CTRL) = 0x00;	 		// HS1_OFF
								XSFR(HS2_CTRL) = 0x05;	 		// HS2_ON
								XSFR(HALL_SUPPLY_CTRL) = 0x00;	// HALL_SUPPLY_OFF
                               	break;
	              		case 0x00C0:
	                           	Mon_Counter = 0;
				               	break;
	              		default: 
	                           	break;
               		}
			   		break;

  	default:	   	// switch off LS1 and LS2 and HS1 and HS2 and HALL SUPPLY
				XSFR(LS1_CTRL) = 0x01;	 						// LS1_OFF
				XSFR(LS2_CTRL) = 0x01;	 						// LS2_OFF
				XSFR(HS1_CTRL) = 0x00;	 						// HS1_OFF
				XSFR(HS2_CTRL) = 0x00;	 						// HS2_OFF
				XSFR(HALL_SUPPLY_CTRL) = 0x00;					// HALL_SUPPLY_OFF
               	Mon_Counter = 0;
               	break;
 }
} //  End of function Main_Monitoring

//****************************************************************************
// @Function      unsigned int Calc_WD_Trigger(unsigned int wd_time)
//----------------------------------------------------------------------------
// @Description   This function returns the trigger time 
//----------------------------------------------------------------------------
// @Returnvalue   Data			optimal trigger time (70%) normalized for timer0 = 1ms
//----------------------------------------------------------------------------
// @Parameters    wd_time		watchdog time
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
unsigned int Calc_WD_Trigger(unsigned int wd_time)
{
	unsigned int Data;

	Data = wd_time*112/10; 					// WD trigger time (70% of WD time) normalized 
	return (Data);							// for timer0 = 1ms [(wd_time*16)*7/10]
}

