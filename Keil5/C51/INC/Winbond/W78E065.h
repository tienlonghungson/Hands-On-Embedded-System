/*--------------------------------------------------------------------------
W78E065.H
Registers definition for Nuvoton W78E065

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */
sfr   P0   	 = 0x80;
sfr   SP   	 = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
sfr   P40AL   	 = 0x84;
sfr   P40AH   	 = 0x85;
sfr   POR   	 = 0x86;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   AUXR   	 = 0x8E;
sfr   WDTC   	 = 0x8F;
sfr   P1   	 = 0x90;
sfr   P41AL   	 = 0x94;
sfr   P41AH   	 = 0x95;
sfr   SCON   	 = 0x98;
sfr   SBUF   	 = 0x99;
sfr   P2   	 = 0xA0;
sfr   XRAMAH   	 = 0xA1;
sfr   IE   	 = 0xA8;
sfr   P42AL   	 = 0xAC;
sfr   P42AH   	 = 0xAD;
sfr   P4CSIN     = 0xAF;
sfr   P3   	 = 0xB0;
sfr   P43AL   	 = 0xB4;
sfr   P43AH   	 = 0xB5;
sfr   IP   	 = 0xB8;
sfr   CHPCON   	 = 0xBF;
sfr   XICON   	 = 0xC0;
sfr   P4CONA   	 = 0xC2;
sfr   P4CONB   	 = 0xC3;
sfr   SFRAL   	 = 0xC4;
sfr   SFRAH   	 = 0xC5;
sfr   SFRFD   	 = 0xC6;
sfr   SFRCN   	 = 0xC7;
sfr   T2CON   	 = 0xC8;
sfr   T2MOD   	 = 0xC9;
sfr   RCAP2L   	 = 0xCA;
sfr   RCAP2H   	 = 0xCB;
sfr   TL2   	 = 0xCC;
sfr   TH2   	 = 0xCD;
sfr   PWMCON2  	 = 0xCE;
sfr   PWM4   	 = 0xCF;
sfr   PSW   	 = 0xD0;
sfr   P4   	 = 0xD8;
sfr   PWMP   	 = 0xD9;
sfr   PWM0   	 = 0xDA;
sfr   PWM1   	 = 0xDB;
sfr   PWMCON1  	 = 0xDC;
sfr   PWM2   	 = 0xDD;
sfr   PWM3   	 = 0xDE;
sfr   ACC   	 = 0xE0;
sfr   B   	 = 0xF0;
sfr   CHPENR   	 = 0xF6;


/* Bit Addresses */

/* TCON */
sbit   IT0   	 = TCON^0;
sbit   IE0   	 = TCON^1;
sbit   IT1   	 = TCON^2;
sbit   TR0   	 = TCON^4;
sbit   TF0   	 = TCON^5;
sbit   TR1   	 = TCON^6;
sbit   TF1   	 = TCON^7;

/* P1 */
sbit   T2   	 = P1^0;
sbit   T2EX   	 = P1^1;

/* SCON */
sbit   RI   	 = SCON^0;
sbit   TI   	 = SCON^1;
sbit   RB8   	 = SCON^2;
sbit   TB8   	 = SCON^3;
sbit   REN   	 = SCON^4;
sbit   SM3   	 = SCON^5;
sbit   SM1   	 = SCON^6;
sbit   SM0   	 = SCON^7;

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

/* XICON */
sbit   PX3   	 = XICON^0;
sbit   EX3   	 = XICON^1;
sbit   IE3   	 = XICON^2;
sbit   IT3   	 = XICON^3;
sbit   PX2   	 = XICON^4;
sbit   EX2   	 = XICON^5;
sbit   IE2   	 = XICON^6;
sbit   IT2   	 = XICON^7;

/* T2CON */
sbit   CP_RL2  	 = T2CON^0;
sbit   C_T2   	 = T2CON^1;
sbit   TR2   	 = T2CON^2;
sbit   EXEN2   	 = T2CON^3;
sbit   TCLK   	 = T2CON^4;
sbit   RCLK   	 = T2CON^5;
sbit   EXF2   	 = T2CON^6;
sbit   TF2   	 = T2CON^7;

/* PSW */
sbit   P   	 = PSW^0;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;

