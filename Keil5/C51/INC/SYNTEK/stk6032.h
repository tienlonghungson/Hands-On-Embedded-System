/*--------------------------------------------------------------------------
STK6032.H
Registers definition for Syntek Semiconductors STK6032

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */
/* Byte Addresses */
sfr   P0		 = 0x80;
sfr   SP		 = 0x81;
sfr   DPL0   	 = 0x82;
sfr   DPH0   	 = 0x83;
sfr   DPL1   	 = 0x84;
sfr   DPH1   	 = 0x85;
sfr   DPS   	 = 0x86;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   CKCON 	 = 0x8E;
sfr   P1 		 = 0x90;
sfr   SCON0 	 = 0x98;
sfr   SBUF0 	 = 0x99;
sfr   P2		 = 0xA0;
sfr   IE		 = 0xA8;
sfr   P3		 = 0xB0;
sfr   IP		 = 0xB8;
sfr   CHIPCON	 = 0xBF;
sfr   P4		 = 0xC0;
sfr   T2CON		 = 0xC8;
sfr   RCAP2L	 = 0xCA;
sfr   RCCAP2H	 = 0xCB;
sfr   TL2		 = 0xCC;
sfr   TH2		 = 0xCD;
sfr   PSW		 = 0xD0;
sfr   P1_OPT	 = 0xD1;
sfr   PWM0D		 = 0xD2;
sfr   PWM1D		 = 0xD3;
sfr   PWM2D		 = 0xD4;
sfr   PWM3D		 = 0xD5;
sfr   PWM4D		 = 0xD6;
sfr   P4_OPT	 = 0xD9;
sfr   ADCSE		 = 0xDA;
sfr   ADCVAL	 = 0xDB;
sfr   P0_OPT	 = 0xDD;
sfr   P2_OPT	 = 0xDE;
sfr   ACC		 = 0xE0;
sfr   WDT		 = 0xE1;
sfr   ISPSLV	 = 0xE2;
sfr   ISPEN		 = 0xE3;
sfr   B			 = 0xF0;
/* Bit Addresses */

/* P0 */

/* TCON */
sbit   IT0		 = TCON^0;
sbit   IE0		 = TCON^1;
sbit   IT1		 = TCON^2;
sbit   IE1		 = TCON^3;
sbit   TR0		 = TCON^4;
sbit   TF0		 = TCON^5;
sbit   TR1		 = TCON^6;
sbit   TF1		 = TCON^7;

/* P1 */

/* SCON0 */
sbit   RI0		 = SCON0^0;
sbit   TI0		 = SCON0^1;
sbit   RB8		 = SCON0^2;
sbit   TB8		 = SCON0^3;
sbit   REN0		 = SCON0^4;
sbit   SM2		 = SCON0^5;
sbit   SM1		 = SCON0^6;
sbit   SM0		 = SCON0^7;

/* P2 */

/* IE */
sbit   EX0		 = IE^0;
sbit   ET0		 = IE^1;
sbit   EX1		 = IE^2;
sbit   ET1		 = IE^3;
sbit   ES0		 = IE^4;
sbit   ET2		 = IE^5;
sbit   EA		 = IE^7;

/* P3 */

/* IP */
sbit   PX0		 = IP^0;
sbit   PT0		 = IP^1;
sbit   PX1		 = IP^2;
sbit   PT1		 = IP^3;
sbit   PS0		 = IP^4;
sbit   PT2		 = IP^5;

/* P4 */

/* T2CON */
sbit   CP		 = T2CON^0;
sbit   C		 = T2CON^1;
sbit   TR2		 = T2CON^2;
sbit   EXEN2	 = T2CON^3;
sbit   TCLK		 = T2CON^4;
sbit   RCLK		 = T2CON^5;
sbit   EXF2		 = T2CON^6;
sbit   TF2		 = T2CON^7;

/* PSW */
sbit   P		 = PSW^0;
sbit   F1		 = PSW^1;
sbit   OV		 = PSW^2;
sbit   RS0		 = PSW^3;
sbit   RS1		 = PSW^4;
sbit   F0		 = PSW^5;
sbit   AC		 = PSW^6;
sbit   CY		 = PSW^7;

