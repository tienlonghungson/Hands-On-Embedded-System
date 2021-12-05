/*------------------------------------------------------------------------------
banking.c

Version: 
November 23, 2004 Version 2.0 - This is the initial release of the banking demo
for the DK3300-ELCD board.

Description:
This is the banking demo for the uPSD33xx.  This demo is composed of four Demo 
Applications (PWM-ADC, I2C-RTC, Banking and Benchmark) and makes use of the 
Encoder located on the DK boards to select the various menus and control the 
demo.  

This demo is an adaption of the banking demo that runs on the original DK3300 
(that has a 2 line x 16 character dot matrix LCD).  The changes are mainly 
related to the device driver for the enhanced LCD (ELCD) and storage of the 
Tamper Event records in the RTC RAM instead of the SPI EEPROM.  Also added to 
the demo is an option to select whether it runs with English or Chinese 
messages.  


Hardware Platform:
DK3300-ELCD


Copyright (c) 2005 STMicroelectronics Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD products (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
------------------------------------------------------------------------------*/
#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "upsd3300_adc.h"
#include "upsd3300_timer.h"
#include "upsd3300_lcd.h"
#include "upsd3300_pca-pwm.h"
#include "upsd3300_i2c.h"
#include "st87.h"
#include "encoder.h"

#include "math.h"
#include "key.h"
#include "intrins.h"

unsigned int benchmark(void);   // external proto type definition for assembly benchmark routine

unsigned char idata  msg_buff[20];
xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR; 
extern xdata unsigned char i2c_xmit_buf[256];
extern xdata unsigned char i2c_rcv_buf[256];
extern Time st87;
unsigned char idata flag = 0;
extern void STname(void);

void init_msgbuff(unsigned char *dataptr, unsigned char *buffptr)
{
   unsigned char i;
   unsigned char code * temp_add;
   unsigned char src_code;
   unsigned char * dest_add;
   
   for (i=0; i<20; i++)
   {
      temp_add =  (unsigned char code*) (dataptr + i);    // get message byte
      src_code =  *  temp_add;
      dest_add = (unsigned char *) (buffptr + i);         // put message byte
      * dest_add = src_code;
   }
}

// Display selected item in main menu based on Menu_Index
void Show_Menu(unsigned char m_Menu_Index)
{
   lcd_clear();
   switch(m_Menu_Index)
   {
   case 0:
      printfLCD(">PWM/ADC  I2CRTC" );
      printfLCD("\n Banking  Bench\n" );
   break;
   case 1:
      printfLCD(" PWM/ADC >I2CRTC" );
      printfLCD("\n Banking  Bench\n" );
   break;
   case 2:
      printfLCD(" PWM/ADC  I2CRTC" );
      printfLCD("\n Banking >Bench\n" );
   break;
   case 3:
      printfLCD(" PWM/ADC  I2CRTC" );
      printfLCD("\n>Banking  Bench\n" );
   break;
   }
}

void Show_Menu2(unsigned char m_Menu_Index)
{
	lcd_clear();
	switch(m_Menu_Index)
	{
	case 0:

		printfLCD(">  ENGLISH" );
		printfLCD("\n    中文" );
		flag = 1;
	
	break;
	case 1:
	
		printfLCD("   ENGLISH" );
		ulayer = 3;
		ucol = 0;
	
	printfLCD(">   中文" );
		flag =0;
	break;
	}
}

void Tamper_check()
{
	unsigned char Tamper_sum,Tamper_No;
	signed char Menu_Index;
	unsigned char temp,temp_Dir = 0;

	if((ST87_tamper_check())==1)
	{
        lcd_clear();
		if(flag)
		{
        	printfLCD("New Tamper event" );
    		printfLCD("\n--record saved--" );
		}
		else
	 	{
			printfLCD("新触发事件" );
    		printfLCD("\n--已记录--" );
	 	}
		ST87_tamper_save();
		delay_1sec();
		delay_1sec();

        lcd_clear();
		if(flag)
		{
       		printfLCD("Turn Enc. to see" );
        	printfLCD("\nTamper Records" );
		}
		else
		 {
			printfLCD("转动编码器查看" );
        	printfLCD("\n触发记录" );
	 	}
		delay_1sec();
		delay_1sec();
		delay_1sec();
			
		i2c_xmit_buf[0] = 0x20;		// Setup ST87 start address
		Turbo_i2c_MX (0xD0,1);		// send 1 bytes for st87: addr 0xD0, @ 0x00
	 	Turbo_i2c_MR (0xD0,2);	    // Read address 0x0F for check TB1 and TB2 bits   
		Tamper_sum=i2c_rcv_buf[0];
		Tamper_No=i2c_rcv_buf[1];

		if(Tamper_sum>Tamper_No)temp=Tamper_sum;
		else temp=Tamper_No;
		Menu_Index=0;
		ST87_tamper_Show(Menu_Index);
	
		temp_Dir = 0; 
		while(temp_Dir!=3) 
		{
			temp_Dir=Polling_Encoder();
			if(temp_Dir==2)	
			{
				Menu_Index++;
				if(Menu_Index>=temp)Menu_Index=0;
				ST87_tamper_Show(Menu_Index);
			}
			else if(temp_Dir==1)
			{
				Menu_Index--;
				if(Menu_Index<0)Menu_Index=temp-1;
				ST87_tamper_Show(Menu_Index);
			}
				
			PSD_reg.DIRECTION_B|=0x80;
			PSD_reg.DATAOUT_B|=0x80;
			PSD_reg.DIRECTION_B&=0x7F;	// IN direction
		}
        lcd_clear();
	}
}


// Main Program

main()
{  
   unsigned char temp_Dir =0;
   unsigned char event, k, ADC_channel;
   signed char Menu_Index;
   unsigned int ADC_result;
   unsigned char tmp;
   unsigned int end_time, delta_time, mips, instr, ns_T0, T0_clks, instructions; 

   PSD_reg.VM |= 0x80;                       //Enable peripheral I/O
   timer0_init(); 
   ADC_Init(7);
   lcd_init();  
   lcd_clear();    
   printfLCD("DK3300-ELCD Demo");      
   printfLCD("\nV2.0 Turbo uPSD");
   delay_1sec();
   delay_1sec();
   delay_1sec();
   lcd_clear();               
   printfLCD("Turn Encoder R/L");                     
   printfLCD("\nPress to Select");
   delay_1sec();
   delay_1sec();
   delay_1sec();
   
//------------------------------------------------------------------------------
Menu_Index=0;
	PSD_reg.OMC_AB&=0xF8;
	PSD_reg.OMC_AB|=0x04;
	Show_Menu2 (Menu_Index);
temp_Dir = 0;
	while(temp_Dir!=3)
	{
		temp_Dir=Polling_Encoder();
		if(temp_Dir==2)
		{
				Menu_Index++;
				if(Menu_Index==2)Menu_Index=0;
				Show_Menu2 (Menu_Index);
		}
		else if(temp_Dir==1)
		{
				Menu_Index--;
				if(Menu_Index==-1)Menu_Index=1;
				Show_Menu2 (Menu_Index);
		}
		
		PSD_reg.DIRECTION_B|=0x80;
		PSD_reg.DATAOUT_B|=0x80;
		PSD_reg.DIRECTION_B&=0x7F;	// IN direction
		
	}
//----------------------------------------------------------------------------------------

RESTART:
	//-----Waiting user select a demo to run-----------------------------------------
	//	use OMC_AB[0,1] as a 2-bit counter to identify running of Encoder
	//	use OMC_AB[2] as a running direction indication of Encoder
	//-------------------------------------------------------------------------------
	Menu_Index=0;
	PSD_reg.OMC_AB&=0xF8;
	PSD_reg.OMC_AB|=0x04;
	Show_Menu (Menu_Index);

	temp_Dir = 0;
	while(temp_Dir!=3)
	{
		temp_Dir=Polling_Encoder();
		if(temp_Dir==2)
		{
				Menu_Index++;
				if(Menu_Index==4)Menu_Index=0;
				Show_Menu (Menu_Index);
		}
		else if(temp_Dir==1)
		{
				Menu_Index--;
				if(Menu_Index==-1)Menu_Index=3;
				Show_Menu (Menu_Index);
		}
		
		PSD_reg.DIRECTION_B|=0x80;
		PSD_reg.DATAOUT_B|=0x80;
		PSD_reg.DIRECTION_B&=0x7F;	// IN direction
		
	}
	
   temp_Dir = 0;
      
   // At this point we have a selected menu item
   // Run the demo code user selected----------------------------------------
   
   switch(Menu_Index)
   {
   case 0: 
   //============================ Demo0: PWM ADC ====================================

   PSD_reg.CONTROL_B&=0xF1;      // MCU IO/Address OUT: mode 
   PSD_reg.DRIVE_B&=0xF1;     // OpenDrain & SlewRate control
   PSD_reg.DIRECTION_B|=0x07;
   PSD_reg.DATAOUT_B&=0xF1;

   lcd_clear();
   if(flag)
  	{
   		printfLCD("PWM/ADC Demo" );
   		ADC_channel=7;
   		init_msgbuff(" ADC=XXX \n", &msg_buff);   // Load msg_buff with Message
	 }
	 else
	 {
		printfLCD("PWM/ADC 演示" );
   		ADC_channel=7;
   		init_msgbuff(" ADC=XXX \n", &msg_buff);   // Load msg_buff with Message
	 }
   ACON |= 0x20;                             // Enable ADC
   k=0;
   while(1){
         if (k == 0) k = 0xff;     // Fix over flow of 0H -> 0FFh
         if (k == 0xf) k = 0;      // Fix over flow from 0FFh -> 0Fh
          PWM_Mode1_Init(0, k);
         delay_1sec();             // wait for voltage to settle
		if(flag)
		{
         	printfLCD("\nPWM=%x",k);  //display adc channel and adc value on LCD
		}
		else
		{
			printfLCD("\nPWM=%x",k);  //display adc channel and adc value on LCD
		}

         ADC_Init(ADC_channel);                 // Init & read ADC channel
         ADC_result = ADC_Read(ADC_channel);
         msg_buff[5] = htoa_lo(ADC_result>>8);  // Convert to ascii hex to display
         msg_buff[6] = htoa_hi(ADC_result);
         msg_buff[7] = htoa_lo(ADC_result);
         printfLCD(msg_buff);             //display adc channel and adc value on LCD
         k = k + 0x10;
   }
   break;
   
   case 1:
   //============================ Demo1: I2C RTC =====================================

      //---------------------- Check RTC tamper function -----------------------------------------
      Turbo_i2c_init();
      ST87_tamper_init();

      //---------------------- Waiting user set time -----------------------------------------
      lcd_clear(); 
      if(flag)
	  {
     	 printfLCD("Use Encoder to" );
      	printfLCD("\nset Date & Time" );
	  }
	  else
	 {
		 printfLCD("转动编码器" );
      	printfLCD("\n设置日期和时间" );
	 }
      delay_1sec();
      delay_1sec();
      Turbo_i2c_init();
      ST87_read();
      st87.second=i2c_rcv_buf[1];
      st87.minute=i2c_rcv_buf[2];
      st87.hour=i2c_rcv_buf[3];
      st87.day=i2c_rcv_buf[5];
      st87.month=i2c_rcv_buf[6];
      st87.year=i2c_rcv_buf[7];

// Set the RTC time...
      
      for (k=0; k<6; k++)              // Six items to adjust DMY & HMS
      {
        Show_time(k);  // Show inital time from RTC and have user adjust
        event = Polling_Encoder();  // get first encoder event
        while (event != 3) {
          Adjust_time(k, event);    // Adjust value and display
          Show_time(k);
          event = Polling_Encoder();  // get next event
        }
      }
      
//----------------------------Save time into ST87-------------------------------------
         i2c_xmit_buf[2]=st87.second;
         i2c_xmit_buf[3]=st87.minute;
         i2c_xmit_buf[4]=st87.hour;
         i2c_xmit_buf[6]=st87.day;
         i2c_xmit_buf[7]=st87.month;
         i2c_xmit_buf[8]=st87.year;
         ST87_write();
         ST87_config();

// -------- Start Display of RTC and Tamper Check ------

      lcd_clear();
      while (TRUE){
         ST87_read();                                   // Read & Display ST87 time

         ulayer = 0;
         ucol = 0;
		 if(flag)
		 {
			 printfLCD("I2C RTC Demo"); 
        	 printfLCD("\nTime: %x",i2c_rcv_buf[3]);
         	printfLCD(":%x",i2c_rcv_buf[2]);
         	printfLCD(":%x\n",i2c_rcv_buf[1]);
		 }
		 else
	 	{
			 printfLCD("I2C RTC 演示"); 
        	 printfLCD("\nTime: %x",i2c_rcv_buf[3]);
         	printfLCD(":%x",i2c_rcv_buf[2]);
         	printfLCD(":%x\n",i2c_rcv_buf[1]);
	 	}
         
         Tamper_check();                     // Check to see if tamper
         
         if(Key_check()==3)                  // Check for tamper clear records
         {
            ST87_tamper_clear();
            lcd_clear();
			if(flag)
			{
           		 printfLCD("Tamper records "); 
            	printfLCD("\nare Cleared!"); 
			}
			else
	 		{
				 printfLCD("触发记录 "); 
            	printfLCD("\n已删!"); 
			 }
            delay_1sec();
            delay_1sec();
            lcd_clear();
         }
      }
   break;

   case 2:
   //============================ Demo2: 8032 Benchmark =================================================
      lcd_init();
	  	if(flag)
		{
      		printfLCD("Simple 8032\n");
      		printfLCD("Mips Benchmark\n");
		}
		else
	 	{
			printfLCD("Simple 8032\n");
      		printfLCD("指令基准\n");
	 	}
      delay_1sec();
      delay_1sec();

      BUSCON = 0xC1;  // set new value to experiment (0x01 - no PFQ/BC or 0xC1 - With PFQ/BC, etc)

      TR0 = 0;  // Stop Timer0
      EA = 0;   // Disable Interrupts - must be done to keep Timer 0 from being reloaded by ISR

      TH0 = 0;  // Set beg_time to 0 on timer0
      TL0 = 0;


    // Keep loop length arround 25K instructions to have large range of mips values
    // this is due to timer0 overflowing more than once when too many instructions executed.

      TR0 = 1;          // Start timer 0

      instructions = benchmark(); // run the benchmark and return # instructions executed

      TR0 = 0;          // Stop timer 0 to read the elapsed time
      end_time = TH0;
      end_time = (end_time<<8) + (unsigned int)TL0;  // Get timer0 value in integer form

      ns_T0 = FREQ_OSC / 1000;  // Get Freq in Mhz
      ns_T0 = 1000 / ns_T0;     // now have ns per OSC clock
      ns_T0 = 12 * ns_T0;    // now have ns per timer 0 count (12 clocks)
      T0_clks = instructions / ns_T0;   // get number of T0 clocks for entire bechmark 


      if (TF0)   // Did Timer0 overflow - then adjust caluclation to add in overflow bit
        {
          delta_time = 0x8000 + (end_time>>1);  // let delta_time = half the number clocks 
          instr = delta_time / T0_clks;  // instr = number ns per instr 
          mips = 10000 / (instr<<1);    // double divisor since total time was cut in half
        }  
      else // no timer0 overflow
        {
          delta_time = end_time;  // delta_time = total number T0 clocks
          instr = delta_time / T0_clks;  // instr = number ns per instr
          mips = 10000 / instr;     // equal number of mips in 10's units and frac in 1's
        }     

      TR0 = 1;
      EA = 1;          // enable ints and timer 0 to run as normal again

      lcd_clear();
      
     // Display Results...

      tmp = BUSCON;  // Store buscon value in char
	  	if(flag)
		{
      		printfLCD("With BUSCON=%x \n", tmp);
      		printfLCD("8032 Mips=");
      		tmp = mips / 10;  // most significant digit of mips
      		printfLCD("%d.", tmp);
      		tmp = (mips-((int)tmp*10));  // get next digit of mips
      		printfLCD("%d ", tmp);
		}
		else
	 	{
			printfLCD("With BUSCON=%x \n", tmp);
      		printfLCD("8032 Mips=");
      		tmp = mips / 10;  // most significant digit of mips
      		printfLCD("%d.", tmp);
      		tmp = (mips-((int)tmp*10));  // get next digit of mips
      		printfLCD("%d ", tmp);
	 	}

      while (1);  // wait for reset

   break;

   case 3:
   //============================ Demo3: Banking ================================================
      {
      void fct_PAGE0();
      void fct_PAGE1();
      void fct_PAGE2();
      void fct_PAGE3();
      void fct_PAGE4();

      lcd_init(); 
		if(flag)
		{
     		printfLCD("Bank switching: ");
     		printfLCD("\nCOMMON BANK...");
		}
		else
	 	{
			printfLCD("存储区组合切换: ");
     		printfLCD("\n公共组...");
	 	}
      fct_PAGE0();
      fct_PAGE1();
      fct_PAGE2();
      fct_PAGE3();
      delay_1sec();
      delay_1sec();
      lcd_clear();
	  	if(flag)
		{
     		 printfLCD("Bank switching: ");
      		printfLCD("\nDEMO is done!   ");
		}
		else
		{
			 printfLCD("存储区组合切换: ");
      		printfLCD("\n演示完毕!   ");
	 	}
      delay_1sec();
      delay_1sec();
      }
   break;
   }
goto RESTART;  //More demonstration
}






