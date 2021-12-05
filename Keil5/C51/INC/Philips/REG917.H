/*--------------------------------------------------------------------------
REG917.H

Header file for Philips 89LPC917
Copyright (c) 1988-2003 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
V1.0
--------------------------------------------------------------------------*/

#ifndef __REG917_H__
#define __REG917_H__

/*  BYTE Registers  */
sfr P0     = 0x80;
sfr P0M1   = 0x84;
sfr P0M2   = 0x85;

sfr P1     = 0x90;
sfr P1M1   = 0x91;
sfr P1M2   = 0x92;

//------------------
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
//------------------
sfr ADCON1 = 0x97;
sfr ADINS  = 0xA3;
sfr ADMODA = 0xC0;
sfr ADMODB = 0xA1;
sfr AD1BH  = 0xC4;
sfr AD1BL  = 0xBC;
sfr AD1DAT0= 0xD5;
sfr AD1DAT1= 0xD6;
sfr AD1DAT2= 0xD7;
sfr AD1DAT3= 0xF5;
 
sfr AUXR1  = 0xA2;
sfr BRGR0  = 0xBE;
sfr BRGR1  = 0xBF;
sfr BRGCON = 0xBD;
sfr CMP1   = 0xAC;
sfr CMP2   = 0xAD;
sfr DIVM   = 0x95;

sfr FMADRH = 0xE7;
sfr FMADRL = 0xE6;
sfr FMCON  = 0xE4;
sfr FMDATA = 0xE5;

sfr I2ADR  = 0xDB;
sfr I2CON  = 0xD8;
sfr I2DAT  = 0xDA;
sfr I2SCLH = 0xDD;
sfr I2SCLL = 0xDC;
sfr I2STAT = 0xD9;

sfr IEN0   = 0xA8;
sfr IEN1   = 0xE8;

sfr IP0    = 0xB8;
sfr IP0H   = 0xB7;
sfr IP1    = 0xF8;
sfr IP1H   = 0xF7;

sfr KBCON  = 0x94;
sfr KBMASK = 0x86;
sfr KBPATN = 0x93;

sfr PCON   = 0x87;
sfr PCONA  = 0xB5;

sfr PT0AD  = 0xF6;
sfr RSTSRC = 0xDF;

sfr RTCCON = 0xD1;
sfr RTCH   = 0xD2;
sfr RTCL   = 0xD3;

sfr SADDR  = 0xA9;
sfr SADEN  = 0xB9;
sfr SBUF   = 0x99;
sfr SCON   = 0x98;
sfr SSTAT  = 0xBA;

sfr TAMOD  = 0x8F;
sfr TCON   = 0x88;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr TMOD   = 0x89;
sfr TRIM   = 0x96;

sfr WDCON  = 0xA7;
sfr WDL    = 0xC1;
sfr WFEED1 = 0xC2;
sfr WFEED2 = 0xC3;

/*  BIT Registers  */
/*  PSW   */
sbit CY   = PSW^7;
sbit AC   = PSW^6;
sbit F0   = PSW^5;
sbit RS1  = PSW^4;
sbit RS0  = PSW^3;
sbit OV   = PSW^2;
sbit F1   = PSW^1;
sbit P    = PSW^0;

/*  TCON  */
sbit TF1    = TCON^7;
sbit TR1    = TCON^6;
sbit TF0    = TCON^5;
sbit TR0    = TCON^4;
sbit IE1    = TCON^3;
sbit IT1    = TCON^2;
sbit IE0    = TCON^1;
sbit IT0    = TCON^0;

/* ADMODA */
sbit BNDI1  = ADMODA^7;
sbit BURST1 = ADMODA^6;
sbit SCC1   = ADMODA^5;
sbit SCAN1  = ADMODA^4;
sbit BNDI0  = ADMODA^3;
sbit BURST0 = ADMODA^2;
sbit SCC0   = ADMODA^1;
sbit SCAN0  = ADMODA^0;

/*  IEN0   */
sbit EA     = IEN0^7;
sbit EWDRT  = IEN0^6;
sbit EBO    = IEN0^5;
sbit ES     = IEN0^4;
sbit ESR    = IEN0^4;
sbit ET1    = IEN0^3;
sbit EX1    = IEN0^2;
sbit ET0    = IEN0^1;
sbit EX0    = IEN0^0;

/*  IEN1   */
sbit EAD    = IEN1^7;
sbit EST    = IEN1^6;
sbit EC     = IEN1^2;
sbit EKBI   = IEN1^1;
sbit EI2C   = IEN1^0;

/*  IP0   */ 
sbit PWDRT  = IP0^6;
sbit PB0    = IP0^5;
sbit PS     = IP0^4;
sbit PSR    = IP0^4;
sbit PT1    = IP0^3;
sbit PX1    = IP0^2;
sbit PT0    = IP0^1;
sbit PX0    = IP0^0;

/*  P0  */
sbit KB7     = P0^7;
sbit T1      = P0^7;
sbit CLKOUT  = P0^7;
sbit KB5     = P0^5;
sbit CMPREF  = P0^5;
sbit KB4     = P0^4;
sbit CIN1A   = P0^4;
sbit KB3     = P0^3;
sbit CIN1B   = P0^3;
sbit KB2     = P0^2;
sbit CIN2A   = P0^2;
sbit KB1     = P0^1;
sbit CIN2B   = P0^1;
sbit KB0     = P0^0;
sbit CMP2    = P0^0;

/*  P1  */
sbit RST     = P1^5;
sbit INT0    = P1^3;
sbit SDA     = P1^3;
sbit T0      = P1^2;
sbit SCL     = P1^2;
sbit RxD     = P1^1;
sbit TxD     = P1^0;

/*  SCON  */
sbit SM0     = SCON^7; 
sbit FE      = SCON^7;
sbit SM1     = SCON^6;
sbit SM2     = SCON^5;
sbit REN     = SCON^4;
sbit TB8     = SCON^3;
sbit RB8     = SCON^2;
sbit TI      = SCON^1;
sbit RI      = SCON^0;
#endif

