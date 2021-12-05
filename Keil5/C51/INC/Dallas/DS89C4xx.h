/*--------------------------------------------------------------------------
DS89C4xx.H
Registers definition for Dallas Semiconductors DS89C420/430/440/450

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */
sfr   P0   	   = 0x80;
sfr   SP   	   = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
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
sfr   CKCON    = 0x8E;
sfr   P1   	   = 0x90;
sfr   EXIF   	 = 0x91;
sfr   CKMOD    = 0x96;
sfr   SCON0    = 0x98;
sfr   SBUF0    = 0x99;
sfr   ACON   	 = 0x9D;
sfr   P2   	   = 0xA0;
sfr   IE   	   = 0xA8;
sfr   SADDR0   = 0xA9;
sfr   SADDR1   = 0xAA;
sfr   P3   	   = 0xB0;
sfr   IP1   	 = 0xB1;
sfr   IP0   	 = 0xB8;
sfr   SADEN0   = 0xB9;
sfr   SADEN1   = 0xBA;
sfr   SCON1    = 0xC0;
sfr   SBUF1    = 0xC1;
sfr   ROMSIZE  = 0xC2;
sfr   PMR   	 = 0xC4;
sfr   STATUS   = 0xC5;
sfr   TA   	   = 0xC7;
sfr   T2CON    = 0xC8;
sfr   T2MOD    = 0xC9;
sfr   RCAP2L   = 0xCA;
sfr   RCAP2H   = 0xCB;
sfr   TL2   	 = 0xCC;
sfr   TH2   	 = 0xCD;
sfr   PSW   	 = 0xD0;
sfr   FCNTL    = 0xD5;
sfr   FDATA    = 0xD6;
sfr   WDCON    = 0xD8;
sfr   ACC   	 = 0xE0;
sfr   EIE   	 = 0xE8;
sfr   B   	   = 0xF0;
sfr   EIP1   	 = 0xF1;
sfr   EIP0   	 = 0xF8;

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
sbit   RI_0   	 = SCON0^0;
sbit   TI_0   	 = SCON0^1;
sbit   RB8_0   	 = SCON0^2;
sbit   TB8_0   	 = SCON0^3;
sbit   REN_0   	 = SCON0^4;
sbit   SM2_0   	 = SCON0^5;
sbit   SM1_0   	 = SCON0^6;
sbit   FE_0   	 = SCON0^7;

/* IE */
sbit   EX0   	 = IE^0;
sbit   ET0   	 = IE^1;
sbit   EX1   	 = IE^2;
sbit   ET1   	 = IE^3;
sbit   ES0   	 = IE^4;
sbit   ET2   	 = IE^5;
sbit   ES1   	 = IE^6;
sbit   EA   	 = IE^7;

/* IP0 */
sbit   PX0   	 = IP0^0;
sbit   PT0   	 = IP0^1;
sbit   PX1   	 = IP0^2;
sbit   PT1   	 = IP0^3;
sbit   PS   	 = IP0^4;

/* SCON1 */
sbit   RI_1   	 = SCON1^0;
sbit   TI_1   	 = SCON1^1;
sbit   RB8_1   	 = SCON1^2;
sbit   TB8_1   	 = SCON1^3;
sbit   REN_1   	 = SCON1^4;
sbit   SM2_1   	 = SCON1^5;
sbit   SM1_1   	 = SCON1^6;
sbit   FE_1   	 = SCON1^7;

/* T2CON */
sbit   CP   	 = T2CON^0;

sbit   TR2   	 = T2CON^2;
sbit   EXEN2   = T2CON^3;
sbit   TCLK    = T2CON^4;
sbit   RCLK    = T2CON^5;
sbit   EXF2    = T2CON^6;
sbit   TF2   	 = T2CON^7;

/* PSW */
sbit   P   	   = PSW^0;
sbit   F1   	 = PSW^1;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;

/* WDCON */
sbit   RWT   	 = WDCON^0;
sbit   EWT   	 = WDCON^1;
sbit   WTRF    = WDCON^2;
sbit   WDIF    = WDCON^3;
sbit   PFI   	 = WDCON^4;
sbit   EPFI    = WDCON^5;
sbit   POR   	 = WDCON^6;
sbit   SMOD_1  = WDCON^7;

/* EIE */
sbit   EX2   	 = EIE^0;
sbit   EX3   	 = EIE^1;
sbit   EX4   	 = EIE^2;
sbit   EX5   	 = EIE^3;
sbit   EWDI    = EIE^4;

/* EIP0 */
sbit   LPX2   	 = EIP0^0;
sbit   LPX3   	 = EIP0^1;
sbit   LPX4   	 = EIP0^2;
sbit   LPX5   	 = EIP0^3;
sbit   LPXWDI    = EIP0^4;
