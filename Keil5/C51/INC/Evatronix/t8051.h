/*--------------------------------------------------------------------------
T8051.H

Header file for EVATRONIX T8051 microcontroller.
--------------------------------------------------------------------------*/

#ifndef __T8051_H__
#define __T8051_H__

/*  BYTE Register  */
sfr P0       = 0x80;
sfr P2       = 0xA0;
sfr PSW      = 0xD0;
sfr ACC      = 0xE0;
sfr B        = 0xF0;

sfr SP       = 0x81;
sfr DPL      = 0x82;
sfr DPH      = 0x83;
sfr PCON     = 0x87;
sfr TCON     = 0x88;
sfr TMOD     = 0x89;
sfr TL0      = 0x8A;
sfr TH0      = 0x8C;
sfr IEN2     = 0x9A;
sfr S1CON    = 0x9B;
sfr S1BUF    = 0x9C;
sfr S1RELL   = 0x9D;
sfr IEN0     = 0xA8;
sfr IP0      = 0xA9;
sfr IEN1     = 0xB8;
sfr IP1      = 0xB9;
sfr S1RELH   = 0xBB;
sfr IRCON    = 0xC0;
sfr T2CON    = 0xC8;

/*  BIT Register    */
/*  PSW   */   
sbit CY   = 0xD7;
sbit AC   = 0xD6;
sbit F0   = 0xD5;
sbit RS1  = 0xD4;
sbit RS0  = 0xD3;
sbit OV   = 0xD2;
sbit P    = 0xD0;

/*  TCON  */
sbit TF1  = 0x8F;
sbit TR1  = 0x8E;
sbit TF0  = 0x8D;
sbit TR0  = 0x8C;
sbit IE1  = 0x8B;
sbit IT1  = 0x8A;
sbit IE0  = 0x89;
sbit IT0  = 0x88;

/* T2CON */
sbit I3FR = 0xCE;
sbit I2FR = 0xCD;

/*  IEN0  */
sbit EAL  = 0xAF;
sbit ET1  = 0xAB;
sbit EX1  = 0xAA;
sbit ET0  = 0xA9;
sbit EX0  = 0xA8;

/* IEN1  */
sbit EX6   = 0xBD;
sbit EX5   = 0xBC;
sbit EX4   = 0xBB;
sbit EX3   = 0xBA;
sbit EX2   = 0xB9;
sbit EX7   = 0xB8;

/* IRCON */
sbit IEX6 = 0xC5;
sbit IEX5 = 0xC4;
sbit IEX4 = 0xC3;
sbit IEX3 = 0xC2;
sbit IEX2 = 0xC1;
sbit IEX7 = 0xC0;

#endif
