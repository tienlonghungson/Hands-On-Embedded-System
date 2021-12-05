/*H***************************************************************************
* NAME:             T87C5111.h
*-----------------------------------------------------------------------------
* CREATED_BY:     
* COMPANY:          ATMEL-WM
* CREATION_DATE:    01/03/2001
* $AUTHOR:          $
* $REVISION:        1.0 $
* $DATE:            $
*-----------------------------------------------------------------------------
* PURPOSE:          This file defines the T87C5111 product:
*                   - Register SFRs
*                   - Bit SFRs
*		    Keil format
******************************************************************************/

#ifndef _REGC5112_H_
#define _REGC5112_H_

/*_____ I N C L U D E S ____________________________________________________*/


/*_____ M A C R O S ________________________________________________________*/

/* KEIL compiler */

#define Sfr(x, y)       sfr x = y
#define Sbit(x, y, z)   sbit x = y^z


/* C51 CORE */

Sfr (A       , 0xE0);
Sfr (ACC     , 0xE0);
Sfr (B       , 0xF0);
Sfr (SP      , 0x81);
Sfr (DPL     , 0x82);
Sfr (DPH     , 0x83);

Sfr (PSW     , 0xD0);
;--- PSW bit -----
Sbit (CY     , 0xD0, 7); 
Sbit (AC     , 0xD0, 6);
Sbit (F0     , 0xD0, 5);
Sbit (RS1    , 0xD0, 4);
Sbit (RS0    , 0xD0, 3);
Sbit (OV     , 0xD0, 2);
Sbit (F1     , 0xD0, 1);
Sbit (P      , 0xD0, 0);


/* SYSTEM MANAGEMENT */

Sfr (PCON    , 0x87);
Sfr (AUXR1   , 0xA2);
Sfr (PFILT   , 0x84);
Sfr (CONF    , 0xEF);

/* CLOCK */

Sfr (CKCON0   , 0x8F);
Sfr (CKCON1   , 0xAF);
Sfr (CKSEL    , 0x85);
Sfr (CKRL     , 0x97);
Sfr (OSCCON   , 0x86);

/* INTERRUPT */

Sfr (IEN0    , 0xA8);
Sfr (IPL0    , 0xB8);
Sfr (IPH0    , 0xB7);
Sfr (IEN1    , 0xB1);
Sfr (IPL1    , 0xB2);
Sfr (IPH1    , 0xB3);

;--- IEN0 -----
Sbit (EA     , 0xA8, 7); 
Sbit (EC     , 0xA8, 6);
Sbit (ES     , 0xA8, 4);
Sbit (ET1    , 0xA8, 3);
Sbit (EX1    , 0xA8, 2);
Sbit (ET0    , 0xA8, 1);
Sbit (EX0    , 0xA8, 0);

;--- IPL0 ---
Sbit (PPCL   , 0xB8, 6); 
Sbit (PSL    , 0xB8, 4);
Sbit (PT1L   , 0xB8, 3);
Sbit (PX1L   , 0xB8, 2);
Sbit (PT0L   , 0xB8, 1);
Sbit (PX0L   , 0xB8, 0);

;--- IPH0 ---
Sbit (PPCH   , 0xB8, 6); 
Sbit (PSH    , 0xB8, 4);
Sbit (PT1H   , 0xB8, 3);
Sbit (PX1H   , 0xB8, 2);
Sbit (PT0H   , 0xB8, 1);
Sbit (PX0H   , 0xB8, 0);

/* PORT CONFIGURATION REGISTERS */

Sfr (P1M1    , 0xD4);
Sfr (P1M2    , 0xE2);
Sfr (P3M1    , 0xD5);
Sfr (P3M2    , 0xE4);
Sfr (P4M1    , 0xDE);
Sfr (P4M2    , 0xE5);


/* DATA PORT  REGISTERS*/

Sfr (P0      , 0x80);
Sfr (P1      , 0x90);
Sfr (P2      , 0xA0);
Sfr (P3      , 0xB0);
Sfr (P4      , 0xC0);

;--- P0 bit ----
Sbit (P0_7   , 0x80, 7);
Sbit (P0_6   , 0x80, 6);
Sbit (P0_5   , 0x80, 5);
Sbit (P0_4   , 0x80, 4);
Sbit (P0_3   , 0x80, 3);
Sbit (P0_2   , 0x80, 2);
Sbit (P0_1   , 0x80, 1);
Sbit (P0_0   , 0x80, 0);

;--- P1 bit ----
Sbit (P1_7   , 0x90, 7);
Sbit (P1_6   , 0x90, 6);
Sbit (P1_5   , 0x90, 5);
Sbit (P1_4   , 0x90, 4);
Sbit (P1_3   , 0x90, 3);
Sbit (P1_2   , 0x90, 2);
Sbit (P1_1   , 0x90, 1);
Sbit (P1_0   , 0x90, 0);

;--- P1 bit ----
Sbit (SDA    , 0x90, 7); 
Sbit (SCL    , 0x90, 6);
Sbit (KIN3   , 0x90, 3);
Sbit (KIN2   , 0x90, 2);
Sbit (KIN1   , 0x90, 1);
Sbit (KIN0   , 0x90, 0);

;--- P2 bit ----
Sbit (P2_7   , 0xA0, 7);
Sbit (P2_6   , 0xA0, 6);
Sbit (P2_5   , 0xA0, 5);
Sbit (P2_4   , 0xA0, 4);
Sbit (P2_3   , 0xA0, 3);
Sbit (P2_2   , 0xA0, 2);
Sbit (P2_1   , 0xA0, 1);
Sbit (P2_0   , 0xA0, 0);

;--- P3 bit ----
Sbit (P3_7   , 0xB0, 7);
Sbit (P3_6   , 0xB0, 6);
Sbit (P3_5   , 0xB0, 5);
Sbit (P3_4   , 0xB0, 4);
Sbit (P3_3   , 0xB0, 3);
Sbit (P3_2   , 0xB0, 2);
Sbit (P3_1   , 0xB0, 1);
Sbit (P3_0   , 0xB0, 0);

;--- P3 bit -----
Sbit (RD     , 0xB0, 7); 
Sbit (WR     , 0xB0, 6);
Sbit (T1     , 0xB0, 5);
Sbit (T0     , 0xB0, 4);
Sbit (INT1   , 0xB0, 3);
Sbit (INT0   , 0xB0, 2);
Sbit (TXD    , 0xB0, 1);
Sbit (RXD    , 0xB0, 0);

;--- P4 bit ----
Sbit (P4_7   , 0xC0, 7); 
Sbit (P4_6   , 0xC0, 6);
Sbit (P4_5   , 0xC0, 5);
Sbit (P4_4   , 0xC0, 4);
Sbit (P4_3   , 0xC0, 3);
Sbit (P4_2   , 0xC0, 2);
Sbit (P4_1   , 0xC0, 1);
Sbit (P4_0   , 0xC0, 0);

;--- P4 bit ----
Sbit (SS_    , 0xC0, 2); 
Sbit (SCK    , 0xC0, 6);
Sbit (MOSI   , 0xC0, 5);
Sbit (MISO   , 0xC0, 4);


/* TIMERS */

Sfr (TCON    , 0x88);
Sfr (TMOD    , 0x89);
Sfr (TL0     , 0x8A);
Sfr (TL1     , 0x8B);
Sfr (TH0     , 0x8C);
Sfr (TH1     , 0x8D);

;--- TCON bit ----
Sbit (TF1    , 0x88, 7);
Sbit (TR1    , 0x88, 6);
Sbit (TF0    , 0x88, 5);
Sbit (TR0    , 0x88, 4);
Sbit (IE1    , 0x88, 3);
Sbit (IT1    , 0x88, 2);
Sbit (IE0    , 0x88, 1);
Sbit (IT0    , 0x88, 0);


/* WATCHDOG */

Sfr (WDTRST  , 0xA6);
Sfr (WDTPRG  , 0xA7);


/* UART */

Sfr (SCON    , 0x98);
Sfr (SBUF    , 0x99);
Sfr (SADDR   , 0xA9);
Sfr (SADEN   , 0xB9);
Sfr (BRL     , 0x9A);
Sfr (BDRCON  , 0x9B);

;---- SCON bit ----
Sbit (SM0    , 0x98, 7); 
Sbit (FE     , 0x98, 7);
Sbit (SM1    , 0x98, 6);
Sbit (SM2    , 0x98, 5);
Sbit (REN    , 0x98, 4);
Sbit (TB8    , 0x98, 3);
Sbit (RB8    , 0x98, 2);
Sbit (TI     , 0x98, 1);
Sbit (RI     , 0x98, 0);


/* SPI CONTROLLER */

Sfr (SPCON   , 0xC3);
Sfr (SPSTA   , 0xC4);
Sfr (SPDAT   , 0xC5);

/* ADC CONVERTER */

Sfr (ADCF    , 0xF6);
Sfr (ADDL    , 0xF4);
Sfr (ADDH    , 0xF5);
Sfr (ADCON   , 0xF3);
Sfr (ADCLK   , 0xF2);

/* PCA */
Sfr (CL      , 0xE9);
Sfr (CH      , 0xF9);
Sfr (CCON    , 0xD8);
Sfr (CMOD    , 0xD9);

Sfr (CCAPM4  , 0xDE);
Sfr (CCAPM3  , 0xDD);
Sfr (CCAPM2  , 0xDC);
Sfr (CCAPM1  , 0xDB);
Sfr (CCAPM0  , 0xDA);

Sfr (CCAP4L  , 0xEE);
Sfr (CCAP3L  , 0xED);
Sfr (CCAP2L  , 0xEC);
Sfr (CCAP1L  , 0xEB);
Sfr (CCAP0L  , 0xEA);

Sfr (CCAP4H  , 0xFE);
Sfr (CCAP3H  , 0xFD);
Sfr (CCAP2H  , 0xFC);
Sfr (CCAP1H  , 0xFB);
Sfr (CCAP0H  , 0xFA);

#endif        /* _REG5112_H_ */
