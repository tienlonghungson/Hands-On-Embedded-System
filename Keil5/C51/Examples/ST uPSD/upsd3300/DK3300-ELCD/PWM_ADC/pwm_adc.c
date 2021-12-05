/*------------------------------------------------------------------------------
pwm_adc.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments.

Description:
This code demonstrates use of the PWM and ADC function blocks within the 
uPSD3300 device.  A pulse width modulated signal output from the PWM circuit is
tied to an RC circuit resulting in a DC voltage that is proportional to the 
pulse width.  This DC voltage is input to an ADC channel and is read after each 
time the pulse width out of the PWM is changed.  The PWM setting and the ADC
value read is displayed on the LCD.


Copyright (c) 2005 STMicroelectronics Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD product (device).

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


unsigned char idata  msg_buff[20];              // Buffer for LCD message
xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR;       // Access PSD regs at CSIOP addr

// Copy character string in code space to data space
void init_msgbuff(unsigned char *dataptr, unsigned char *buffptr)
{
    unsigned char i;
    unsigned char code * temp_addr;
    unsigned char * dest_addr;

    temp_addr =  (unsigned char code *) (dataptr);    // get text message addr from code space
    dest_addr = (unsigned char *) (buffptr);          // get data space buffer address

    for (i=0; i<20; i++)
    {
        * dest_addr++ =  * temp_addr++;  // copy the byte from code space to data space
    }
}



main()
{
    unsigned char k, ADC_channel;
    unsigned int ADC_result;

    //-----Enable peripheral I/O function-------------
    PSD_reg.VM |= 0x80;           //Enable peripheral I/O for DK3300 board

    //-----Initialize Timer 0-------------
    timer0_init(); 

    //-----Show demo information on LCD-------------
    lcd_init();

    PSD_reg.OMCMASK_AB = 0xF0;    // Mask off upper nibble of Output MacroCell register.
                                  // This allows writing a byte to OMC register to load 
                                  // 4-bit initial count to down-counter in PLD without
                                  // disturbing the upper 4-bits of OMC register

    PSD_reg.OMC_AB = 0x08;        // Load initial count of eight into down-counter in PLD.
                                  // This 4-bit counter will pulse pin PB4 each time 8 counts of
                                  // 8032 ALE pulses occur per logic equations. 
    printfLCD("PWM to ADC DEMO");//PWM to ADC DEMO
    delay_1sec();
    init_msgbuff("\nPWM=XX ADC=XXX\n", &msg_buff);  // Load msg_buff with text message

    k=0xf;                        // Init k to initial value
    ADC_channel=7;                // Select ADC channel 7


    ADC_Init(ADC_channel);        // Init ADC channel  

    delay_10ms();                 // Wait for ADC Auto Calibration
    delay_10ms();


// Main loop to output PWM value and read/display ADC value

    while(1)
    {
        if (k == 0) k = 0xff;   // Fix overflow to 0 -> 0xFF
        if (k == 0xf) k = 0;    // Fix overflow to 0xF -> 0

        PWM_Mode1_Init(0, k);   //Set to PWM channel 0 output with k pulse width

        delay_1sec();           // wait for voltage to settle and user to read display

        ADC_result = ADC_Read(ADC_channel);

        msg_buff[5] = htoa_hi(k);                 // Display PWM pulse width value
        msg_buff[6] = htoa_lo(k);

        msg_buff[12] = htoa_lo(ADC_result>>8);    // Convert to ASCII hex to display
        msg_buff[13] = htoa_hi(ADC_result);
        msg_buff[14] = htoa_lo(ADC_result);

        printfLCD(msg_buff);                      //Display ADC channel and value on LCD
        k = k + 0x10;
    }
}

