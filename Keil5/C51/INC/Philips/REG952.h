/*--------------------------------------------------------------------------
REG952.H

Header file for Philips 89LPC952/954
Copyright (c) 1988-2007 Keil Elektronik GmbH and Keil Software, Inc.
Version 1.1 S1CON SFR address changed
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __REG952_H__
#define __REG952_H__

/* Include memory mapped SFRs */
/* Analog Digital Converter 0*/
#define ADC0HBND (*((unsigned char volatile xdata*)0xFFEF))
#define ADC0LBND (*((unsigned char volatile xdata*)0xFFEE))
#define AD0DAT0R (*((unsigned char volatile xdata*)0xFFFE))
#define AD0DAT0L (*((unsigned char volatile xdata*)0xFFFF))
#define AD0DAT1R (*((unsigned char volatile xdata*)0xFFFC))
#define AD0DAT1L (*((unsigned char volatile xdata*)0xFFFD))
#define AD0DAT2R (*((unsigned char volatile xdata*)0xFFFA))
#define AD0DAT2L (*((unsigned char volatile xdata*)0xFFFB))
#define AD0DAT3R (*((unsigned char volatile xdata*)0xFFF8))
#define AD0DAT3L (*((unsigned char volatile xdata*)0xFFF9))
#define AD0DAT4R (*((unsigned char volatile xdata*)0xFFF6))
#define AD0DAT4L (*((unsigned char volatile xdata*)0xFFF7))
#define AD0DAT5R (*((unsigned char volatile xdata*)0xFFF4))
#define AD0DAT5L (*((unsigned char volatile xdata*)0xFFF5))
#define AD0DAT6R (*((unsigned char volatile xdata*)0xFFF2))
#define AD0DAT6L (*((unsigned char volatile xdata*)0xFFF3))
#define AD0DAT7R (*((unsigned char volatile xdata*)0xFFF0))
#define AD0DAT7L (*((unsigned char volatile xdata*)0xFFF1))
#define BNDSTA0  (*((unsigned char volatile xdata*)0xFFED))
#define BRGCON_1 (*((unsigned char volatile xdata*)0xFFB3))
#define BRG0_1   (*((unsigned char volatile xdata*)0xFFB4))
#define BRG1_1   (*((unsigned char volatile xdata*)0xFFB5))

/* Port 4/5 Configuration */
#define P4M1     (*((unsigned char volatile xdata*)0xFFB8))
#define P4M2     (*((unsigned char volatile xdata*)0xFFB9))
#define P5M1     (*((unsigned char volatile xdata*)0xFFBA))
#define P5M2     (*((unsigned char volatile xdata*)0xFFBB))

/* Serial 1 Configuration */
#define S1ADDR   (*((unsigned char volatile xdata*)0xFFB2))
#define S1ADEN   (*((unsigned char volatile xdata*)0xFFB1))
#define S1BUF    (*((unsigned char volatile xdata*)0xFFB0))

/*  BYTE Registers  */
sfr P0   = 0x80;
sfr P1   = 0x90;
sfr P2   = 0xA0;
sfr P3   = 0xB0;
sfr P4   = 0xB3;
sfr P5   = 0xB4;
sfr PSW  = 0xD0;
sfr ACC  = 0xE0;
sfr B    = 0xF0;
sfr SP   = 0x81;
sfr DPL  = 0x82;
sfr DPH  = 0x83;
sfr PCON = 0x87;
sfr TCON = 0x88;
sfr TMOD = 0x89;
sfr TL0  = 0x8A;
sfr TL1  = 0x8B;
sfr TH0  = 0x8C;
sfr TH1  = 0x8D;
sfr IEN0 = 0xA8;
sfr IP0  = 0xB8;
sfr S0CON = 0x98;
sfr S0BUF = 0x99;

sfr AD0CON = 0x97;
sfr AD0INS = 0xA3;
sfr ADMODA = 0xC0;
sfr ADMODB = 0xA1;

sfr AUXR1  = 0xA2;
sfr S0ADDR = 0xA9;
sfr S0ADEN = 0xB9;
sfr BRGR0_0  = 0xBE;
sfr BRGR1_0  = 0xBF;
sfr BRGCON_0 = 0xBD;
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
sfr IEN1   = 0xE8;
sfr IEN2   = 0xD5;
sfr IP1    = 0xF8;
sfr IP1H   = 0xF7;
sfr IP2    = 0xD6;
sfr IP2H   = 0xD7;
sfr KBCON  = 0x94;
sfr KBMASK = 0x86;
sfr KBPATN = 0x93;

sfr P0M1   = 0x84;
sfr P0M2   = 0x85;
sfr P1M1   = 0x91;
sfr P1M2   = 0x92;
sfr P2M1   = 0xA4;
sfr P2M2   = 0xA5;
sfr P3M1   = 0xB1;
sfr P3M2   = 0xB2;
sfr PCONA  = 0xB5;
sfr PT0AD  = 0xF6;
sfr RSTSRC = 0xDF;
sfr RTCCON = 0xD1;
sfr RTCH   = 0xD2;
sfr RTCL   = 0xD3;
sfr S0STAT = 0xBA;
sfr SPCTL  = 0xE2;
sfr SPSTAT = 0xE1;
sfr SPDAT  = 0xE3;
sfr S1CON  = 0xB6;
sfr S1STAT = 0xD4;
sfr TAMOD  = 0x8F;

sfr TRIM   = 0x96;
sfr WDCON  = 0xA7;
sfr WDL    = 0xC1;
sfr WFEED1 = 0xC2;
sfr WFEED2 = 0xC3;
sfr IP0H   = 0xB7;

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
sbit TF1  = TCON^7;
sbit TR1  = TCON^6;
sbit TF0  = TCON^5;
sbit TR0  = TCON^4;
sbit IE1  = TCON^3;
sbit IT1  = TCON^2;
sbit IE0  = TCON^1;
sbit IT0  = TCON^0;

/*  IEN0   */
sbit EA   = IEN0^7;
sbit EWDRT = IEN0^6;
sbit EBO   = IEN0^5;
sbit ES   = IEN0^4; // alternatively "ESR"
sbit ESR  = IEN0^4;
sbit ET1  = IEN0^3;
sbit EX1  = IEN0^2;
sbit ET0  = IEN0^1;
sbit EX0  = IEN0^0;

/*  IEN1   */
sbit EAD  = IEN1^7; // alternatively "EIEE" 
sbit EIEE = IEN1^7;
sbit EST  = IEN1^6;
sbit ECCU = IEN1^4;
sbit ESPI = IEN1^3;
sbit EC   = IEN1^2;
sbit EKBI = IEN1^1;
sbit EI2C = IEN1^0;

/*  IP0   */ 
sbit PWDRT = IP0^6;
sbit PB0   = IP0^5;
sbit PS    = IP0^4; // alternatively "PSR"
sbit PSR   = IP0^4;
sbit PT1   = IP0^3;
sbit PX1   = IP0^2;
sbit PT0   = IP0^1;
sbit PX0   = IP0^0;

/*  IP1   */
sbit PAD  = IP1^7; // alternatively "PIEE" 
sbit PIEE = IP1^7;
sbit PST  = IP1^6;
sbit PCCU = IP1^4;
sbit PSPI = IP1^3;
sbit PC   = IP1^2;
sbit PKBI = IP1^1;
sbit PI2C = IP1^0;

/*  S0CON  */
sbit SM0_0  = S0CON^7; // alternatively "FE"
sbit FE_0   = S0CON^7;
sbit SM1_0  = S0CON^6;
sbit SM2_0  = S0CON^5;
sbit REN_0  = S0CON^4;
sbit TB8_0  = S0CON^3;
sbit RB8_0  = S0CON^2;
sbit TI_0   = S0CON^1;
sbit RI_0   = S0CON^0;

/*  S1CON  */
#define SM0_1_MSK  0x80  // alternatively "FE"
#define FE_1_MSK   0x80
#define SM1_1_MSK  0x40
#define SM2_1_MSK  0x20
#define REN_1_MSK  0x10
#define TB8_1_MSK  0x08
#define RB8_1_MSK  0x04
#define TI_1_MSK   0x02
#define RI_1_MSK   0x01


/*  I2CON  */
sbit I2EN  = I2CON^6;
sbit STA   = I2CON^5;
sbit STO   = I2CON^4;
sbit SI    = I2CON^3;
sbit AA    = I2CON^2;
sbit CRSEL = I2CON^0;

/*  P0  */
sbit KB7 = P0^7; // alternatively "T1"
sbit T1 = P0^7;
sbit KB6 = P0^6; // alternatively "CMP1"
//sbit CMP1 = P0^6;
sbit KB5 = P0^5;
sbit KB4 = P0^4;
sbit KB3 = P0^3;
sbit KB2 = P0^2;
sbit KB1 = P0^1;
sbit KB0 = P0^0; // alternatively "CMP2"
//sbit CMP2 = P0^0;

/*  P1  */
sbit OCC     = P1^7;
sbit OCB     = P1^6;
sbit RST     = P1^5;
sbit INT1    = P1^4;
sbit INT0    = P1^3; // alternatively "SDA"
sbit SDA     = P1^3;
sbit T0      = P1^2; // alternatively "SCL"
sbit SCL     = P1^2;
sbit RxD     = P1^1;
sbit TxD     = P1^0;

/*  P2  */
sbit ICA     = P2^7;
sbit OCA     = P2^6;
sbit SPICLK  = P2^5;
sbit SS      = P2^4;
sbit MISO    = P2^3;
sbit MOSI    = P2^2;
sbit OCD     = P2^1;
sbit ICB     = P2^0;

/*  P3  */
sbit XTAL1= P3^1;
sbit XTAL2= P3^0;

/* ADMODA */
sbit BNDI0  = ADMODA^7;
sbit BURST0 = ADMODA^6;
sbit SCC0   = ADMODA^5;
sbit SCAN0  = ADMODA^4;


#endif

