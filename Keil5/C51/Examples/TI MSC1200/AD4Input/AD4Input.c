			 /*------------------------------------------------------------------------------
AD4Input.C:  MSC 1210 A/D Conversion for 4 input signals (-2.5V ... +2.5V)
             Inputs pairs  AIN0-AIN1  AIN2-AIN3  AIN4-AIN5  AIN6-AIN7
Copyright 2005 Keil Software, Inc.
------------------------------------------------------------------------------*/

#include <REG1200.H>
#include <stdio.h>
#include "ISD51.H"

#ifndef XTAL                        // if no XTAL defined use:
  #define XTAL  22118400            // XTAL frequency 11.0592 MHz
#endif

void sfr_wr(char d);

//sbit ADC_CS = P1^0;
sbit RedLed = P3^4; 
sbit YelLed = P3^5;
#define ON  0;
#define OFF 1;

// defines for A/D Converter setup
#define A_CLK          (((XTAL+500000)/1000000)-1) // about 1MHz Analog Clock
#define ANA_CLK        (XTAL/(A_CLK+1))            // precise Analog Clock
#define DECIMATION_VAL (ANA_CLK/64/10)             // 10 Hz Decimation
#define CONV_FREQ      (ANA_CLK/64/DECIMATION)     // Conversion Frequency

// defines for conversion to Volts
#define fV    (0xFFFFFF00UL/5)      // Factor for Volts caluculation
#define fmV   ((fV << 2) / 1000)    // Factor for mVolts
#define fuV   ((fmV << 10) / 1000)  // Factor for uVolts

// Helper structure to read in ADC values
union  {
  unsigned char  c[4];              // bytes
  unsigned long  l;                 // unsigned long
} res;


void main(void)  {
  unsigned char k, chan, V;
  unsigned int  mV, uV;

  CKCON = 0x10;                          // 0 MOVX cycle stretch
  TCON  = 0;

// Setup Serial Interface
  PCON  = 0x80;
  SCON  = 0x52;		        
  TMOD  = 0x20;               
  TH1   = 0xEE;                
  TR1   = 1;                  
  TI    = 1;                  

  //RedLed = ON;

  P3DDRL = 0xC0;                     // set port pins of UART to input/strong drive output
  P3DDRH = 0x00;                     // set port pins of UART to input/strong drive output


#ifdef ISD51
// The following settings are important for ISD51 (enable flash programming, disable watchdog)
  USEC   = ((XTAL+500000)/1000000)-1; // USEC timer factor
  MSEC   = (XTAL/1000)-1;             // (MSECH+MSCL) MS Timer counting at 1.0ms

  HMSEC  = 100-1;                     // Hundred MS Timer to 100.0ms
  SECINT = (10-1) | 0x80;             // SECINT= 10 * HMS Timer Rate = 1 sec
                                      // '0x80' will set the MSB for write immediate
  MSINT  = (10-1) | 0x80;             // MSINT = 10ms for Tone period time base

  FTCON  = 0xA5;                      // setup flash programming times
#endif

  PDCON  = 0x14;                      // ON -> ADC-Vref, SPI Systimers. OFF -> PWM, Watchdog
  EA = 1;                             // Enable global interrupt flag
  EAI = 1;


#ifdef ISD51
  ISDwait();                          // wait until ISD51 connects
#else
  TI = 1;                             // enable serial output
#endif

  printf("\nMSC1200 Analog/Dignal Converter Test\n\n");

  //YelLed = ON;

                      // Repeat Conversions Forever
    printf("\nInput -2.5V to +2.5V on AINx channel pairs\n\n");
    printf("Chan.  Dec.  Rate   Hex Value   Voltage\n");


  while (1)  {

    for (chan=0; chan<4; chan++) {  // Channels Loop
      ADMUX = 0x01 + (chan*0x22);   // AINP = AIN0/2/4/6, AINN = AIN1/3/5/7

// Read Input Volatage
      for (k=0; k<4; k++) {         // ignore 3 conversions for filter to settle after calibration
	    YelLed = ON;
        while (!(AIPOL & 0x20));      // Wait for data ready
		YelLed = OFF;
        res.c[0] = ADRESH;
        res.c[1] = ADRESM;
        res.c[2] = ADRESL;
        res.c[3] = 0;
      }

      printf ("%2bd-%bd %6d %3dHz   ", (unsigned char) (chan*2),
                                       (unsigned char) ((chan*2)+1),
	                                   (int) DECIMATION, (int) CONV_FREQ);
      printf ("0x%06lX    ", (res.l >> 8));

// Print Sign
	  printf ("%c", (res.c[0] & 0x80) ? '-' : '+');
	  if (res.c[0] & 0x80)  {
        res.l = -res.l;             // make positiv
	  }
	  
// Convert Result to Volts 
      V = res.l / fV;               // Volts part
      res.l %= fV;
      res.l <<= 2;

      mV = res.l / fmV;             // Millivolts part
      res.l %= fmV;
      res.l <<= 10;
      
      uV = res.l / fuV;             // Microvolts part
      printf ("%bd.%03d%03d\n", V, mV, uV);
    }
  }
}