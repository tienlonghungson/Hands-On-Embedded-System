/*------------------------------------------------------------------------------
DK3200_1_demo.c

Simple Demo code for uPSD, see application note AN1560.
PWM channel PWM0 outputs pulse train that is integrated by RC circuit on DK3200 board
to produce a DC voltage which is read by ADC channel ADC0. The PW duty cycle varies to 
produce a slow DC voltage swing between 0 and 5VDC. The ADC conversion value is 
displayed in HEX format on the LCD, showing values between 0x00 and 0xFF as the voltage 
swings. Jumpers must be installed on DK3200 JP1 pins 23 to 24, and on pins 15 to 16, 
which wraps PWM0 output into ADC0 input.

This program also demonstrates using a 4-bit auto-reloading down-counter in the PLD 
of the uPSD. The 8032 can set the initial down-count value by writing to 4 macrocells. 
The down-counter is clocked by the 8032 ALE signal. When the count reaches zero terminal
count, uPSD pin PB4 is pulsed. The 8032 may change the initial counter load value at any 
time, which chages the divisor of ALE signal as it appears on pin PB4.

This project was built with Keil C51, version 7.20, and uses the ISD51 serial 
debugger on the first UART of uPSD.

06/2002 Ver 0.1 - Initial Version
06/2002 Ver 0.2 - Headerfile fixes
06/2002 Ver 0.3 - PWM fixes
08/2002 Ver 0.4 - Misc Fixes
09/2004 Ver 0.5 - Updated some comments

Copyright (c) 2004 STMicroelectronics

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

#pragma optimize(8,size)
#pragma SYMBOLS
#pragma NOAREGS

        

#include "upsd3200_hardware.h"      // environment hardware specific defines
#include "upsd3200.h"               // special function register declarations for UPSD
#include "upsd3200_lcd.h"           // prototype declarations and defines for uPSD IP drivers
#include "upsd3200_timer.h"
#include "upsd3200_pwm.h"
#include "upsd3200_adc.h"

// Enable one for UART1 for debug
#include "ISD51_U1.h"       // Header for ISD51 debugger using uPSD UART1 



xdata PSD_REGS PSD8xx_reg _at_ PSD_REG_ADDR;  // Define PSD registers at address "csiop" space

unsigned char idata  msg_buff[20];

unsigned char idata adc_value;
unsigned char idata i;

// Note: Enable the following compiler directive to verify serial communication using UART1 
//      (first UART). UART1 must be setup, baud rate, etc before calling this - no ISR is needed.
//      Use some type of Hyperterminal, etc to view results.
//      This will just echo back the character received forever.
//      The connector for this UART on the DK3200 is labeled P1 (UART0).

#if 0
void TestSerial (void)  {
  char c = 'U';

  SCON |= 0x02;  // set TI in scon

  while (1)  {
      if (SCON & 0x01) {    // If RI in SCON
        c = SBUF;           // Get the char
        SCON &= 0x0FE;      // Clear RI in SCON
      }


    SCON &= 0xFD;       // Clear TI in SCON
    SBUF = c;           // Xmit the Char
    while ((SCON & 0x02) == 0); // Wait Loop till finished xmit of last char
  }
}
#endif



// Routine to copy string in Code space to idata space
void init_msgbuff(unsigned char *dataptr, unsigned char *buffptr)
{
    unsigned char i;
    unsigned char code * temp_add;
    unsigned char src_code;
    unsigned char * dest_add;

    for (i=0; i<20; i++)
        {
        temp_add =  (unsigned char *) (dataptr + i);     // get message byte
        src_code =  *  temp_add;
        dest_add = (unsigned char *) (buffptr + i);   // put message byte
        * dest_add = src_code;
        }   
}


//  MAIN Demo Program - PWM ADC Demo
//  WDKEY must be disabled - already done by "startu32.a51"

void main (void)  {

unsigned int timer2_baud;

// ISD51 makes use of UART1 or UART2 based on header file & object file used

    T2CON   = 0x34;     // Use Timer 2 as baudrate generator 
                        // This sets UART1 to use timer2 baud rate
    PCON  |= 0x0C;      // Set UART2 to user timer2 baud rate

    // With FREQ_OSC = 36000 for 36 MHz, the baud rate is set for 19200.
    timer2_baud = (65536L - ( (FREQ_OSC * 125L) / (4L * 19200L)));
    RCAP2L = (timer2_baud & 0x00FF);
    RCAP2H = (timer2_baud >> 8);

    SCON   = 0x50;      // enable first serial UART & receiver 
    SCON2  = 0x50;      // enable 2nd uart
    EA = 1;             // Enable global interrupt flag       

// TestSerial ();       // Uncomment this function to verify serial communication
                        // Also see the function TestSerial() and change the #if
                        //  as appropriate.

    uPSD_PWM_Disable();

    PSD8xx_reg.VM |= 0x80;      // enable peripheral I/O mode for LCD display

    timer0_init();              // initialize timer0 interrupt 

    uPSD_ADC_Init(0);           // init ADC channel 0

    uPSD_PWM_Init_8bit(0, 6000, 0x8f);  // init PWM - Channel 0 on, Freq 6Mhz into PWM

    lcd_init();                 // initialize LCD. 8 bits, 2 lines, 5x7 font,
                                // no blink, cursor off, clear 

    printfLCD("DK3200 for uPSD\n");     //display on LCD
    delay_2sec();

    printfLCD("PWM to ADC DEMO\n");     //display on LCD
    delay_1sec();

    init_msgbuff("\nADC Channel0=XX \n", &msg_buff);  // Load msg_buff with Message

    PSD8xx_reg.OMCMASK_AB = 0xF0;  // Mask off upper nibble of Output MacroCell register.
                                   // This allows writing a byte to OMC register to load 
                                   // 4-bit initial count to down-counter in PLD without
                                   // disturbing the upper 4-bits of OMC register

    PSD8xx_reg.OMC_AB = 0x08;   // Load initial count of eight into down-counter in PLD.
                                // This 4-bit counter will pulse pin PB4 each time 8 counts of
                                // 8032 ALE pulses occur per logic equations. See App Note AN1560.

    i = 0;
    while (TRUE)    // Main demo loop
     {
           ISDcheck();      // initialize uVision2 ISD51 Debugger and continue program run

           uPSD_PWM_Channel_8bit(0,i);     // PWMCON = 0x8F, PWM0, and duty varies  
//           uPSD_PWM_Variable_8bit(0xf0,0x10); // (Input: PWM_Period, PWM_PulseWidth)
           adc_value = uPSD_ADC_Read(0);    // Read ADC Value chanel 0

           msg_buff[14] = htoa_hi(adc_value);  // Convert to ascii hex to display
           msg_buff[15] = htoa_lo(adc_value);

           printfLCD(msg_buff);             //display adc channel and adc value on LCD
           delay_1sec();
           i += 0x10;

      }


}  // End main



