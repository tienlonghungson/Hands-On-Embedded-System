/*--------------------------------------------------------------------------
VSC7380.H
Registers definition for Vitesse VSC7380

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */
sfr   GPIO_IN    = 0x80;
sfr   SP         = 0x81;
sfr   DPL0       = 0x82;
sfr   DPH0       = 0x83;
sfr   DPL1       = 0x84;
sfr   DPH1       = 0x85;
sfr   DPS        = 0x86;
sfr   PCON       = 0x87;
sfr   TCON       = 0x88;
sfr   TMOD       = 0x89;
sfr   TL0        = 0x8A;
sfr   TL1        = 0x8B;
sfr   TH0        = 0x8C;
sfr   TH1        = 0x8D;
sfr   CKCON      = 0x8E;
sfr   SPC_FNC    = 0x8F;
sfr   GPIO_OUT   = 0x90;
sfr   SCON       = 0x98;
sfr   SBUF       = 0x99;
sfr   GPIO_OE    = 0xA0;
sfr   GPIO_STAT  = 0xA1;
sfr   WDDA       = 0xA2;
sfr   WDCON      = 0xA3;
sfr   IE         = 0xA8;
sfr   PAGE       = 0xB0;
sfr   IP         = 0xB8;
sfr   T2CON      = 0xC8;
sfr   RCAP2L     = 0xCA;
sfr   RCAP2H     = 0xCB;
sfr   TL2        = 0xCC;
sfr   TH2        = 0xCD;
sfr   PSW        = 0xD0;
sfr   ACC        = 0xE0;
sfr   B          = 0xF0;
sfr   RA_DONE    = 0xF8;
sfr   RA_BLK     = 0xF9;
sfr   RA_AD_RD   = 0xFA;
sfr   RA_AD_WR   = 0xFB;
sfr   RA_DA0     = 0xFC;
sfr   RA_DA1     = 0xFD;
sfr   RA_DA2     = 0xFE;
sfr   RA_DA3     = 0xFF;

/* Bit Addresses */

/* GPIO_IN */
sbit   GI0       = GPIO_IN^0;
sbit   GI1       = GPIO_IN^1;
sbit   GI2       = GPIO_IN^2;
sbit   GI3       = GPIO_IN^3;

/* TCON */
sbit   IT0       = TCON^0;
sbit   IE0       = TCON^1;
sbit   IT1       = TCON^2;
sbit   IE1       = TCON^3;
sbit   TR0       = TCON^4;
sbit   TF0       = TCON^5;
sbit   TR1       = TCON^6;
sbit   TF1       = TCON^7;

/* GPIO_OUT */
sbit   GO0       = GPIO_OUT^0;
sbit   GO1       = GPIO_OUT^1;
sbit   GO2       = GPIO_OUT^2;
sbit   GO3       = GPIO_OUT^3;

/* SCON */
sbit   RI        = SCON^0;
sbit   TI        = SCON^1;
sbit   RB8       = SCON^2;
sbit   TB8       = SCON^3;
sbit   REN       = SCON^4;
sbit   SM3       = SCON^5;
sbit   SM1       = SCON^6;
sbit   SM0       = SCON^7;

/* GPIO_OE */
sbit   GOE0      = GPIO_OE^0;
sbit   GOE1      = GPIO_OE^1;
sbit   GOE2      = GPIO_OE^2;
sbit   GOE3      = GPIO_OE^3;

/* IE */
sbit   EX0       = IE^0;
sbit   ET0       = IE^1;
sbit   EX1       = IE^2;
sbit   ET1       = IE^3;
sbit   ES        = IE^4;
sbit   ET2       = IE^5;
sbit   EA        = IE^7;

/* PAGE */
sbit   OP0       = PAGE^0;
sbit   OP1       = PAGE^1;
sbit   OP2       = PAGE^2;
sbit   OP3       = PAGE^3;
sbit   IFP0      = PAGE^4;
sbit   IFP1      = PAGE^5;
sbit   IFP2      = PAGE^6;
sbit   IFP3      = PAGE^7;

/* IP */
sbit   PX0       = IP^0;
sbit   PT0       = IP^1;
sbit   PX1       = IP^2;
sbit   PT1       = IP^3;
sbit   PS        = IP^4;
sbit   PT2       = IP^5;


/* T2CON */
sbit   TR2       = T2CON^2;
sbit   TCLK      = T2CON^4;
sbit   RCLK      = T2CON^5;
sbit   TF2       = T2CON^7;

/* PSW */
sbit   P         = PSW^0;
sbit   F1        = PSW^1;
sbit   OV        = PSW^2;
sbit   RS0       = PSW^3;
sbit   RS1       = PSW^4;
sbit   F0        = PSW^5;
sbit   AC        = PSW^6;
sbit   CY        = PSW^7;

/* RA_DONE */
sbit   DONE      = RA_DONE^0;
