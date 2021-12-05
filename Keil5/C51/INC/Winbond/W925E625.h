/*--------------------------------------------------------------------------
W925E625.H
Registers definition for Winbond W925E625

Copyright (c) 2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */

sfr   P0   	 = 0x80;
sfr   SP   	 = 0x81;
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
sfr   CKCON1   	 = 0x8E;
sfr   CKCON2   	 = 0x8F;
sfr   P1   	 = 0x90;
sfr   EXIF   	 = 0x91;
sfr   P1SR   	 = 0x93;
sfr   P0IO   	 = 0x94;
sfr   P1IO   	 = 0x95;
sfr   P2IO   	 = 0x96;
sfr   P3IO   	 = 0x97;
sfr   P1EF   	 = 0x9B;
sfr   P1H   	 = 0x9D;
sfr   P2H   	 = 0x9E;
sfr   P3H   	 = 0x9F;
sfr   P2   	 = 0xA0;
sfr   HB   	 = 0xA1;
sfr   P4H   	 = 0xA2;
sfr   P4   	 = 0xA5;
sfr   IE   	 = 0xA8;
sfr   P4IO   	 = 0xAD;
sfr   P3   	 = 0xB0;
sfr   CIDR   	 = 0xB1;
sfr   CIDFG   	 = 0xB2;
sfr   CIDPCR   	 = 0xB3;
sfr   FSKDR   	 = 0xB4;
sfr   DTMFDR   	 = 0xB5;
sfr   DTMFPT   	 = 0xB6;
sfr   DTMFAT   	 = 0xB7;
sfr   IP   	 = 0xB8;
sfr   DTMFG   	 = 0xBA;
sfr   COMPR   	 = 0xBB;
sfr   IRC1   	 = 0xBC;
sfr   IRC2   	 = 0xBD;
sfr   CASPT   	 = 0xBE;
sfr   CASAT   	 = 0xBF;
sfr   SCON1   	 = 0xC0;
sfr   SBUF1   	 = 0xC1;
sfr   REGVC   	 = 0xC2;
sfr   PMR   	 = 0xC4;
sfr   STATUS   	 = 0xC5;
sfr   FSKTC   	 = 0xC6;
sfr   FSKTB   	 = 0xC7;
sfr   DIVC   	 = 0xC8;
sfr   PSW   	 = 0xD0;
sfr   WDCON   	 = 0xD8;
sfr   ACC   	 = 0xE0;
sfr   EIE   	 = 0xE8;
sfr   B   	 = 0xF0;
sfr   EIP   	 = 0xF8;
sfr   CIDGD   	 = 0xF9;
sfr   CIDGA   	 = 0xFA;

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

/* SCON1 */
sbit   SIO   	 = SCON1^0;
sbit   CLKIO   	 = SCON1^1;
sbit   SEDG   	 = SCON1^2;
sbit   SFQ   	 = SCON1^3;
sbit   REN1   	 = SCON1^4;
sbit   REGON   	 = SCON1^5;
sbit   SF1   	 = SCON1^7;

/* DIVC */
sbit   DIVA   	 = DIVC^0;

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
sbit   EX2   	 = EIE^0;
sbit   EX3   	 = EIE^1;
sbit   ECID   	 = EIE^2;
sbit   EDIV   	 = EIE^3;
sbit   ECOMP   	 = EIE^4;
sbit   EWDI   	 = EIE^5;

/* B */

/* EIP */
sbit   PWDI   	 = EIP^4;


