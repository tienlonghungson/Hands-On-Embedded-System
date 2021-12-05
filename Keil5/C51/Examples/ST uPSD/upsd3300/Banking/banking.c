/*------------------------------------------------------------------------------
banking.c

Version: 
August 2004  Version 2.0  - Updated majority of files and added Benchmark code.

Description:
Banking Demo code for DK3300 boards.  This demo is composed
of four Demo Applications (PWM-ADC, I2C-RTC, Banking and Benchmark)
and makes use of the Encoder located on the DK boards to select
the various menus and control the demo.


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
#include "st85.h"
#include "encoder.h"
#include "upsd3300_spi.h"
#include "math.h"
#include "key.h"
#include "intrins.h"

unsigned int benchmark(void);   // external proto type definition for assembly benchmark routine


unsigned char idata  msg_buff[20];
xdata PSD_REGS PSD8xx_reg _at_ PSD_REG_ADDR; 
extern xdata unsigned char i2c_xmit_buf[256];
extern xdata unsigned char i2c_rcv_buf[256];
extern Time st85;

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

void Tamper_check()
{
   unsigned char Tamper_sum,Tamper_No;
   char Menu_Index, event;
   unsigned char temp;
   
      if((ST87_tamper_check())==1)
      {
         lcd_clear();
         printfLCD("New Tamper event" );
         ST87_tamper_save();
         lcd_clear();
         printfLCD("Turn Encoder for" );
         printfLCD("\nTamper Records" );
         delay_1sec();
         delay_1sec();
         
         Tamper_sum=Turbo_SPI_ReadByte(0x0000);
         Tamper_No=Turbo_SPI_ReadByte(0x0001);
         if (Tamper_sum > Tamper_No) temp=Tamper_sum;
         else temp=Tamper_No;
         Menu_Index=0;
         ST87_tamper_Show(Menu_Index);
         
         event = Polling_Encoder();
         while(event != 3)
         {
            if(event == 2) 
            {
                  Menu_Index++;
                  if (Menu_Index>=temp) Menu_Index=0;
            }
            else
            {
                  Menu_Index--;
                  if ((Menu_Index < 0) | (Menu_Index > 0xF0)) Menu_Index=0;
            }
            ST87_tamper_Show(Menu_Index);
            event = Polling_Encoder();
            
         }
         lcd_clear();
         ST87_tamper_Reset();
         ST87_tamper_init();
      }

}

// Main Program

main()
{  
   unsigned char event, k, ADC_channel;
   char Menu_Index;
   unsigned int ADC_result;
   unsigned char tmp;
   unsigned int end_time, delta_time, mips, instr, ns_T0, T0_clks, instructions; 

   PSD8xx_reg.VM |= 0x80;                       //Enable peripheral I/O
   timer0_init(); 
   ADC_Init(7);
   lcd_init();             
   printfLCD("DK3300 Demo V2.0");      
   printfLCD("\n   Turbo uPSD");
   delay_1sec();
   delay_1sec();
   delay_1sec();
   lcd_clear();               
   printfLCD("Turn Encoder R/L");                     
   printfLCD("\nPress to Select");
   delay_1sec();
   delay_1sec();
   delay_1sec();
   


RESTART:
   //-----Initiate PB[4] as MCU input for encoder (PB[2,3] as logic input)----------
   PSD8xx_reg.CONTROL_B&=0xEF;      // MCU IO/Address OUT: mode 
   PSD8xx_reg.DRIVE_B&=0xEF;     // OpenDrain & SlewRate control
   PSD8xx_reg.DIRECTION_B|=0x10;
   PSD8xx_reg.DATAOUT_B|=0x10;
   PSD8xx_reg.DIRECTION_B&=0xEF; // IN direction
   //-----Waiting user select a demo to run-----------------------------------------
   // use OMC_AB[0,1] as a 2-bit counter to identify running of Encoder
   // use OMC_AB[2] as a running direction indication of Encoder
   //-------------------------------------------------------------------------------
   
   
   Menu_Index=0;
   
   Show_Menu (Menu_Index);    // show init menu
   
   event = Polling_Encoder();  // get first encoder event
   
   while (event != 3) 
   {
     if (event == 1) Menu_Index--;
     if (event == 2) Menu_Index++;
     Menu_Index &= 0x03;
     Show_Menu (Menu_Index);       // show updated menu
     event = Polling_Encoder();  // wait for next encoder event
   }   
      
   // At this point we have a selected menu item
   // Run the demo code user selected----------------------------------------
   
   switch(Menu_Index)
   {
   case 0: 
   //============================ Demo0: PWM ADC ====================================

   PSD8xx_reg.CONTROL_B&=0xF1;      // MCU IO/Address OUT: mode 
   PSD8xx_reg.DRIVE_B&=0xF1;     // OpenDrain & SlewRate control
   PSD8xx_reg.DIRECTION_B|=0x07;
   PSD8xx_reg.DATAOUT_B&=0xF1;

   lcd_clear();
   printfLCD("PWM/ADC Demo" );
   ADC_channel=7;
   init_msgbuff(" ADC=XXX \n", &msg_buff);   // Load msg_buff with Message
   ACON |= 0x20;                       // Enable ADC
   k=0;
   while(1){
         if (k == 0) k = 0xff;  // Fix over flow of 0H -> 0FFh
         if (k == 0xf) k = 0;  // Fix over flow from 0FFh -> 0Fh
          PWM_Mode1_Init(0, k);
         delay_1sec();         // wait for voltage to settle

         printfLCD("\nPWM=%x",k);  //display adc channel and adc value on LCD

         ADC_Init(ADC_channel);          // Init & read ADC channel
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
      lcd_init();
      Turbo_i2c_init();
      ST87_tamper_init();
      Turbo_SPI_Init();
//    ST85_config();


      //---------------------- Waiting user set time -----------------------------------------
      lcd_clear();      
      printfLCD("Use Encoder to" );
      printfLCD("\nset Date & Time" );
      delay_1sec();
      delay_1sec();
      Turbo_i2c_init();
      ST85_read();
      st85.second=i2c_rcv_buf[1];
      st85.minute=i2c_rcv_buf[2];
      st85.hour=i2c_rcv_buf[3];
      st85.day=i2c_rcv_buf[5];
      st85.month=i2c_rcv_buf[6];
      st85.year=i2c_rcv_buf[7];
      

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
      
      
//----------------------------Save time into ST85-------------------------------------
         i2c_xmit_buf[2]=st85.second;
         i2c_xmit_buf[3]=st85.minute;
         i2c_xmit_buf[4]=st85.hour;
         i2c_xmit_buf[6]=st85.day;
         i2c_xmit_buf[7]=st85.month;
         i2c_xmit_buf[8]=st85.year;
         ST85_write();
         ST85_config();

// -------- Start Display of RTC and Tamper Check ------

      lcd_init();                                        // initialize LCD. 8 bits, 2 lines, 5x7 font,

      while (TRUE){
         ST85_read();                                   // Read & Display ST85 time
         printfLCD("I2C RTC Demo"); 
         printfLCD("\nTime: %x",i2c_rcv_buf[3]);
         printfLCD(":%x",i2c_rcv_buf[2]);
         printfLCD(":%x\n",i2c_rcv_buf[1]);
         
         Tamper_check();                     // Check to see if tamper
         
         if(Key_check()==3)                  // Check for tamper clear records
         {
            ST87_tamper_clear();
            lcd_clear();
            printfLCD("Tamper records "); 
            printfLCD("\nare Cleared!"); 
            delay_1sec();
            delay_1sec();
            lcd_clear();
         }
      }
   break;

   case 2:
   //============================ Demo2: 8032 Benchmark =================================================
      lcd_init();
      printfLCD("Simple 8032\n");
      printfLCD("Mips Benchmark\n");
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
      printfLCD("With BUSCON=%x \n", tmp);
      printfLCD("8032 Mips=");
      tmp = mips / 10;  // most significant digit of mips
      printfLCD("%d.", tmp);
      tmp = (mips-((int)tmp*10));  // get next digit of mips
      printfLCD("%d ", tmp);

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
      printfLCD("Bank switching: ");
      printfLCD("\nCOMMON BANK...");
      fct_PAGE0();
      fct_PAGE1();
      fct_PAGE2();
      fct_PAGE3();
      delay_1sec();
      delay_1sec();
      lcd_clear();
      printfLCD("Bank switching: ");
      printfLCD("\nDEMO is done!   ");
      delay_1sec();
      delay_1sec();
      }
   break;
   }
goto RESTART;  //More demonstration
}





