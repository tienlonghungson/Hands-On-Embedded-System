
/*--------------------------------------------------------------------------
SHC2220.H
Registers definition for SHHIC SHC2220

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */
sfr   SP         = 0x81;
sfr   DPTL       = 0x82;
sfr   DPTH       = 0x83;
sfr   CLK_SET    = 0x84;
sfr   CLK_EN0    = 0x85;
sfr   CLK_EN1    = 0x86;
sfr   PCON       = 0x87;
sfr   TCON       = 0x88;
sfr   TMOD       = 0x89;
sfr   T0L        = 0x8A;
sfr   T1L        = 0x8B;
sfr   T0H        = 0x8C;
sfr   T1H        = 0x8D;
sfr   RNG0CON    = 0x94;
sfr   RNG1CON    = 0x95;
sfr   RNGDLL     = 0x96;
sfr   RNGDLH     = 0x97;
sfr   RNGDHL     = 0x98;
sfr   RNGDHH     = 0x99;
sfr   FSHCON0    = 0x9F;
sfr   P2         = 0xA0;
sfr   DCNTRL     = 0xA1;
sfr   DDAT       = 0xA2;
sfr   DKEY       = 0xA3;
sfr   DDIV       = 0xA4;
sfr   IR         = 0xA7;
sfr   IE         = 0xA8;
sfr   P3R        = 0xAE;
sfr   P3MOD      = 0xAF;
sfr   P3         = 0xB0;
sfr   MODE0      = 0xB1;
sfr   MSTAT      = 0xB2;
sfr   MDATA      = 0xB3;
sfr   MSEL       = 0xB4;
sfr   GPR0       = 0xB5;
sfr   GPR1       = 0xB6;
sfr   MSYS       = 0xB7;
sfr   IP         = 0xB8;
sfr   MODE1      = 0xB9;
sfr   RSTSTA     = 0xBF;
sfr   XORCTRL    = 0xC4;
sfr   EEXORDATA  = 0xC5;
sfr   ROXORDATA  = 0xC6;
sfr   RAXORDATA  = 0xC7;
sfr   SCR        = 0xC8;
sfr   SDR        = 0xC9;
sfr   SBDRH      = 0xCA;
sfr   SBDRL      = 0xCB;
sfr   SSR        = 0xCC;
sfr   P2R        = 0xCE;
sfr   P2MOD      = 0xCF;
sfr   PSW        = 0xD0;
sfr   ACC        = 0xD8;
sfr   B          = 0xF0;
sfr   IFACESW    = 0xFB;
sfr   TST0CON    = 0xFE;

/* Bit Addresses */

/* TCON */
sbit   IT0     = TCON^0;
sbit   IE0     = TCON^1;
sbit   IT1     = TCON^2;
sbit   IE1     = TCON^3;
sbit   TR0     = TCON^4;
sbit   TF0     = TCON^5;
sbit   TR1     = TCON^6;
sbit   TF1     = TCON^7;

/* IE */
sbit   EX0     = IE^0;
sbit   ET0     = IE^1;
sbit   EX1     = IE^2;
sbit   ET1     = IE^3;
sbit   ES      = IE^4;
sbit   EA      = IE^7;

/* IP */
sbit   PX0     = IP^0;
sbit   PT0     = IP^1;
sbit   PX1     = IP^2;
sbit   PT1     = IP^3;
sbit   PS      = IP^4;

/* PSW */
sbit   P       = PSW^0;
sbit   OV      = PSW^2;
sbit   RS0     = PSW^3;
sbit   RS1     = PSW^4;
sbit   F0      = PSW^5;
sbit   AC      = PSW^6;
sbit   CY      = PSW^7;

