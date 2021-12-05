/*--------------------------------------------------------------------------
W79E532.H
Registers definition for Winbond W79E532

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */
/* Byte Addresses */
sfr   P0   	 = 0x80;
sfr   SP   	 = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   CKCON   	 = 0x8E;
sfr   P1   	 = 0x90;
sfr   P4CONA   	 = 0x92;
sfr   P4CONB   	 = 0x93;
sfr   P40AL   	 = 0x94;
sfr   P40AH   	 = 0x95;
sfr   P41AL   	 = 0x96;
sfr   P41AH   	 = 0x97;
sfr   SCON0   	 = 0x98;
sfr   SBUF   	 = 0x99;
sfr   P42AL   	 = 0x9A;
sfr   P42AH   	 = 0x9B;
sfr   P43AL   	 = 0x9C;
sfr   P43AH   	 = 0x9D;
sfr   CHPCON   	 = 0x9F;
sfr   P2   	 = 0xA0;
sfr   XRAMAH   	 = 0xA1;
sfr   P4CSIN   	 = 0xA2;
sfr   P4   	 = 0xA5;
sfr   IE   	 = 0xA8;
sfr   SADDR   	 = 0xA9;
sfr   REOMCON  	 = 0xAB;
sfr   SFRAL   	 = 0xAC;
sfr   SFRAH   	 = 0xAD;
sfr   SFDFD   	 = 0xAE;
sfr   SFRCN   	 = 0xAF;
sfr   P3   	 = 0xB0;
sfr   IP   	 = 0xB8;
sfr   SADEN   	 = 0xB9;
sfr   PWM5   	 = 0xC3;
sfr   PMR   	 = 0xC4;
sfr   STATUS   	 = 0xC5;
sfr   TA   	 = 0xC7;
sfr   T2CON   	 = 0xC8;
sfr   T2MOD   	 = 0xC9;
sfr   RCAP2L   	 = 0xCA;
sfr   RCAP2H   	 = 0xCB;
sfr   TL2   	 = 0xCC;
sfr   TH2   	 = 0xCD;
sfr   PWMCON2  	 = 0xCE;
sfr   PWM4   	 = 0xCF;
sfr   PSW   	 = 0xD0;
sfr   WDCON   	 = 0xD8;
sfr   PWMP   	 = 0xD9;
sfr   PWM0   	 = 0xDA;
sfr   PWM1   	 = 0xDB;
sfr   PWMCON1  	 = 0xDC;
sfr   PWM2   	 = 0xDD;
sfr   PWM3   	 = 0xDE;
sfr   ACC   	 = 0xE0;
sfr   EIE   	 = 0xE8;
sfr   B   	 = 0xF0;
sfr   EIP   	 = 0xF8;

/* Bit Addresses */

/* TCON */
sbit   IT0   	 = TCON^0;
sbit   IE0   	 = TCON^1;
sbit   IT1   	 = TCON^2;
sbit   IE1   	 = TCON^3;
sbit   TR0   	 = TCON^4;
sbit   TF0   	 = TCON^5;
sbit   TR1   	 = TCON^6;
sbit   TF1   	 = TCON^7;

/* SCON0 */
sbit   RI   	 = SCON0^0;
sbit   TI   	 = SCON0^1;
sbit   RB8   	 = SCON0^2;
sbit   TB8   	 = SCON0^3;
sbit   REN   	 = SCON0^4;
sbit   SM3   	 = SCON0^5;
sbit   SM1   	 = SCON0^6;
sbit   SM0   	 = SCON0^7;


/* IE */
sbit   EX0   	 = IE^0;
sbit   ET0   	 = IE^1;
sbit   EX1   	 = IE^2;
sbit   ET1   	 = IE^3;
sbit   ES   	 = IE^4;
sbit   EA   	 = IE^7;


/* IP */
sbit   PX0   	 = IP^0;
sbit   PT0   	 = IP^1;
sbit   PX1   	 = IP^2;
sbit   PT1   	 = IP^3;
sbit   PS   	 = IP^4;

/* T2CON */

/* PSW */
sbit   P   	 = PSW^0;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;

/* WDCON */
sbit   RWT   	 = WDCON^0;
sbit   EWT   	 = WDCON^1;
sbit   WTRF   	 = WDCON^2;
sbit   WDIF   	 = WDCON^3;
sbit   POR   	 = WDCON^6;

/* ACC */

/* EIE */
sbit   EWDI   	 = EIE^4;

/* B */

/* EIP */
sbit   PWDI   	 = EIP^4;


