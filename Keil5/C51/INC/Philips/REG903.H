/*--------------------------------------------------------------------------
REG903.H

Header file for Philips 89LPC903
Copyright (c) 1988-2003 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
V1.1
--------------------------------------------------------------------------*/

#ifndef __REG903_H__
#define __REG903_H__

/* Byte Addresses */
sfr   P0   	     = 0x80;
sfr   SP   	     = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
sfr   P0M1   	 = 0x84;
sfr   P0M2   	 = 0x85;
sfr   KBMASK   	 = 0x86;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   TAMOD   	 = 0x8F;
sfr   P1   	     = 0x90;
sfr   P1M1   	 = 0x91;
sfr   P1M2   	 = 0x92;
sfr   KBPATN   	 = 0x93;
sfr   KBCON   	 = 0x94;
sfr   DIVM   	 = 0x95;
sfr   TRIM   	 = 0x96;
sfr   SCON   	 = 0x98;
sfr   AUXR1   	 = 0xA2;
sfr   WDCON   	 = 0xA7;
sfr   IEN0   	 = 0xA8;
sfr   CMP1   	 = 0xAC;
sfr   P3   	     = 0xB0;
sfr   P3M1   	 = 0xB1;
sfr   P3M2   	 = 0xB2;
sfr   PCONA   	 = 0xB5;
sfr   IP0H   	 = 0xB7;
sfr   IP0   	 = 0xB8;
sfr   WDL   	 = 0xC1;
sfr   WFEED1   	 = 0xC2;
sfr   WFEED2   	 = 0xC3;
sfr   PSW   	 = 0xD0;
sfr   RTCCON   	 = 0xD1;
sfr   RTCH   	 = 0xD2;
sfr   RTCL   	 = 0xD3;
sfr   RSTSRC   	 = 0xDF;
sfr   ACC   	 = 0xE0;
sfr   FMCON   	 = 0xE4;
sfr   FMDATA   	 = 0xE5;
sfr   FMADRL   	 = 0xE6;
sfr   FMADRH   	 = 0xE7;
sfr   IEN1   	 = 0xE8;
sfr   B   	     = 0xF0;
sfr   PT0AD   	 = 0xF6;
sfr   IP1H   	 = 0xF7;
sfr   IP1   	 = 0xF8;

/* Bit Addresses */

/* P0 */
sbit   KB2   	 = P0^2;
sbit   KB4   	 = P0^4;
sbit   KB5   	 = P0^5;

/* TCON */
sbit   TR0   	 = TCON^4;
sbit   TF0   	 = TCON^5;
sbit   TR1   	 = TCON^6;
sbit   TF1   	 = TCON^7;

/* P1 */
sbit   TxD   	 = P1^0;
sbit   RxD   	 = P1^1;
sbit   RST   	 = P1^5;

/* SCON */
sbit   RI   	 = SCON^0;
sbit   TI   	 = SCON^1;
sbit   RB8   	 = SCON^2;
sbit   TB8   	 = SCON^3;
sbit   REN   	 = SCON^4;
sbit   SM2   	 = SCON^5;
sbit   SM1   	 = SCON^6;
sbit   SM0   	 = SCON^7;


/* IEN0 */
sbit   ET0   	 = IEN0^1;
sbit   ET1   	 = IEN0^3;
sbit   ES   	 = IEN0^4;
sbit   EBO   	 = IEN0^5;
sbit   EWDRT   	 = IEN0^6;
sbit   EA   	 = IEN0^7;

/* IP0 */
sbit   PT0   	 = IP0^1;
sbit   PT1   	 = IP0^3;
sbit   PS   	 = IP0^4;
sbit   PBO   	 = IP0^5;
sbit   PWDRT   	 = IP0^6;

/* PSW */
sbit   P   	     = PSW^0;
sbit   F1   	 = PSW^1;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;

/* IEN1 */
sbit   EKBI    = IEN1^1;
sbit   EC   	 = IEN1^2;
sbit   EST   	 = IEN1^6;

/* IP1 */
sbit   PKBI    = IP1^1;
sbit   PC_   	 = IP1^2;
sbit   PST   	 = IP1^6;

#endif

