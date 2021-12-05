/*--------------------------------------------------------------------------
REG901.H

Header file for Philips 89LPC901
Copyright (c) 1988-2003 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
V1.0
--------------------------------------------------------------------------*/

#ifndef __REG901_H__
#define __REG901_H__

/*  BYTE Registers  */
sfr P0     = 0x80;
sfr P0M1   = 0x84;
sfr P0M2   = 0x85;

sfr P1     = 0x90;
sfr P1M1   = 0x91;
sfr P1M2   = 0x92;

sfr P3     = 0xB0;
sfr P3M1   = 0xB1;
sfr P3M2   = 0xB2;
//------------------
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
//------------------
sfr AUXR1  = 0xA2;
sfr CMP1   = 0xAC;
sfr DIVM   = 0x95;

sfr FMADRH = 0xE7;
sfr FMADRL = 0xE6;
sfr FMCON  = 0xE4;
sfr FMDATA = 0xE5;

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
sfr PCONB  = 0xB6;

sfr PT0AD  = 0xF6;
sfr RSTSRC = 0xDF;

sfr RTCCON = 0xD1;
sfr RTCH   = 0xD2;
sfr RTCL   = 0xD3;

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

/*  IEN0   */
sbit EA     = IEN0^7;
sbit EWDRT  = IEN0^6;
sbit EBO    = IEN0^5;
sbit ET1    = IEN0^3;
sbit ET0    = IEN0^1;

/*  IEN1   */
sbit EC     = IEN1^2;
sbit EKBI   = IEN1^1;

/*  IP0   */ 
sbit PWDRT  = IP0^6;
sbit PB0    = IP0^5;
sbit PT1    = IP0^3;
sbit PT0    = IP0^1;

/*  P0  */
sbit KB5    = P0^5;
sbit CMPREF = P0^5;
sbit KB4    = P0^4;
sbit CIN1A  = P0^4;

/*  P1  */
sbit RST     = P1^5;
sbit T0      = P1^2; 

/*  P3  */
sbit XTAL1= P3^1;
sbit XTAL2= P3^0;

#endif

