//***************************************************************************
//* Test RTC.c 
//*	Discription : Test RTC (baud rate set 9600) 
//***************************************************************************
#include <reg98x.h>			// SFR defenitions for LPC98x
 
#define uchar unsigned char
#define uint unsigned int

//-----------------------------------------------
//Global Variable Definitions
//---------------------------------------------
uchar data RTC_Counter_LED, LED_Flash_Speed; 	//RTC count for LED delay
bit data LED_Flag; 
uchar data Uart_Send_Data;

uint data Delay_Count_Low;
uchar data Delay_Count_High;

uchar data Temp,Temp1,Temp2;

uint data RTC_System_Counter;
uchar data Hour, Minute, Second;
bit data Clock_Display_Control;


//-----------------------------------------------
//Constant Definitions
//-----------------------------------------------
#define LED_FLASH_FAST 1  			// define led flash with high fre.
#define LED_FLASH_SLOW 200                	// define led flash with low fre.

//***************************************************************************
//* Functions
//***************************************************************************
void main(void);              		        // main loop
void init(void);              			// part initialization
uchar Clock_Display(uint data Time);		// Display clock by UART
void Display_Half_Second_info(void);	       // Display half second infomation

//***************************************************************************
//* main()
//* Input(s) : none.
//* Returns : none.
//* Description : main loop
//***************************************************************************
void main ()
{ 
  EA = 0;
  init();
  EA = 1;


  for(;;)
  	{ 
	   
	  if(LED_Flag == 0) 	// control LED flash
	  	{ 
		  MOSI = 0;			// P2.2
		}
	  else
	  	{ 
		  MOSI = 1;
		}

	  if( Clock_Display_Control == 1)
	    {
		  Clock_Display ( RTC_System_Counter );		  

		  Clock_Display_Control = 0;
		}

      Temp1 = RTCDATH;
	  Temp2 = RTCDATL;
	  if( (Temp1 == 0x70)&&(Temp2 == 0x7F) )
	  	{
		  Display_Half_Second_info();
		}

	 }

}
//***************************************************************************
//* init()
//* Input(s) : none.
//* Returns : none.
//* Description : initialization of P89LP9C35
//***************************************************************************
void init(void)
{
  RTC_Counter_LED = 0x00;
  LED_Flag = 0;
  LED_Flash_Speed = LED_FLASH_FAST;
  RTC_System_Counter = 0;
  Clock_Display_Control = 0;

  Delay_Count_Low = 0;
  Delay_Count_High = 0;

  Uart_Send_Data = 49;

  Hour = 0;
  Minute = 0;
  Second = 0;

//-----------------------------------------------
//Config P0 I/O  after reset is input only 1/0
//-----------------------------------------------
  P0M1 = 0x00;  		// pp
  P0M2 = 0xFF;

//-------------------------------------------------------------------------------------
//Config P1 I/O   ^5 just input only, ^2,^3 just input only(1/0) / open drain(1/1)
//-------------------------------------------------------------------------------------
  P1M1 = 0x6E;  //^0 QB ^1 INPUT ONLY (UART),^5 Input only (RST),   	0110 1110 
  P1M2 = 0xD5;  //^4^7(Digital led) PP,^2^3 open drain(IIC),other OD  	1101 1100

//-----------------------------------------------
//Config P2 I/O
//-----------------------------------------------
  P2M1 = 0x00;  // All PP
  P2M2 = 0xFF;  

  P0 = 0xFF;
  P1 = 0xFF;
  P2 = 0x00;

//-----------------------------------------------
//Initialize RTC for time counter
//-----------------------------------------------
  WDCON &=0xE0;  //Shut down WDT
  RTCH = 0xE0;   //Set 16bit counter for RTC, 1s, 	707F is half
  RTCL = 0xFF;
  RTCCON = 0x63; //RTC Enable,  RTC use internal RC 7.373MHz,
  EWDRT = 1;	 //Enable RTC/WD Interrupt, [ERTC(RTCCON:1),EWDRT, EA, all set, enable RTC interrupt]

//-----------------------------------------------
//Initialize UART
//-----------------------------------------------

  SCON = 0x50;		// UART Mode 1, reception enable
  SSTAT = 0x20;		// seperate Rxd/Txd interrupt, 
  BRGR0 = 0xF0; 	// 9600 Baud at 7.3728M, ISP must also use this baud rate
  BRGR1 = 0x02;		// 7372.8/9.6 = 768 -16 = 752 = 512 + 240(F0)
  BRGCON = 0x03;	// Enable BRG
  ESR = 1;			// Enable Rxd interrupt    

}

//***************************************************************************
//* CLOCK
//* Input(s) : System_Time
//* Returns : none.
//* Description : Calculate time with RTC data
//***************************************************************************
uchar Clock_Display(uint data Time)
{
  uchar Temp;

  Second = Time;

  if( Second == 60 ) 
  	{
	  Minute++;
	  Second = 0;
	  RTC_System_Counter = 0;
	}
  if( Minute == 60 ) 
  	{
	  Hour++;
	  Minute = 0;
	}
  if( Hour == 24 ) 
  	{
	  Second = 0;
	  Minute = 0;
	  Hour = 0;
	}

  Temp = Hour;
  Temp /= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;
  Temp = Hour;
  Temp %= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;

  SBUF = 58; 
  while ( TI == 0 );
  TI = 0;

  Temp = Minute;
  Temp /= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;
  Temp = Minute;
  Temp %= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;

  SBUF = 58; 
  while ( TI == 0 );
  TI = 0;

  Temp = Second;
  Temp /= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;
  Temp = Second;
  Temp %= 10;
  SBUF = Temp + 48; 
  while ( TI == 0 );
  TI = 0;

  SBUF = 10; 
  while ( TI == 0 );
  TI = 0;
  SBUF = 13; 
  while ( TI == 0 );
  TI = 0;

  return (0); 

}

//***************************************************************************
//* Display_Half_Second_info()
//* Input(s) : none.
//* Returns : none.
//* Description : Display Half Second infomation
//***************************************************************************
void Display_Half_Second_info(void)
{
  SBUF = 'H';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'a';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'l';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'f';
  while ( TI == 0 );
  TI = 0;
  SBUF = ' ';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'S';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'e';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'c';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'o';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'n';
  while ( TI == 0 );
  TI = 0;
  SBUF = 'd';
  while ( TI == 0 );
  TI = 0;


  SBUF = 10; 
  while ( TI == 0 );
  TI = 0;
  SBUF = 13; 
  while ( TI == 0 );
  TI = 0;
}

//***************************************************************************
//* RTC_Interrupt
//* Input(s) : none.
//* Returns : none.
//* Description : Interrupt from RTC
//***************************************************************************
void RTC_Interrupt (void) interrupt 10 using 1
{
   RTC_System_Counter++;
   RTC_Counter_LED++;
   
   if ( RTC_Counter_LED == LED_Flash_Speed )
   	 {
	 	LED_Flag = ~LED_Flag;
		RTC_Counter_LED = 0;

	 }

   Clock_Display_Control = 1;

   RTCCON = 0x63;	//Clear RTCCON.7-RTCF 
}


