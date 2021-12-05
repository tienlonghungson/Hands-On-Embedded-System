/*-----------------------------------------------------------------------------
  AT89LP214.H

Header file for Atmel AT89LP214 based devices.
Copyright 2010 (c) Keil(TM) Tools by ARM(R)
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __AT89LP214_H__
#define __AT89LP214_H__

/* Byte Registers */
sfr P1          = 0x90;            /* Port 1                                 */
sfr P1M0        = 0xC2;            /*                                        */
sfr P1M1        = 0xC3;            /*                                        */
sfr P3          = 0xB0;            /* Port 3                                 */
sfr P3M0        = 0xC6;            /*                                        */
sfr P3M1        = 0xC7;            /*                                        */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr B           = 0xF0;            /* B Register                             */
sfr SP          = 0x81;            /*                                        */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr AUXR1       = 0xA2;            /*                                        */
sfr TCON        = 0x88;            /*                                        */
sfr TMOD        = 0x89;            /*                                        */
sfr TL0         = 0x8A;            /*                                        */
sfr TL1         = 0x8B;            /*                                        */
sfr TH0         = 0x8C;            /*                                        */
sfr TH1         = 0x8D;            /*                                        */
sfr TCONB       = 0x91;            /*                                        */
sfr RL0         = 0x92;            /*                                        */
sfr RL1         = 0x93;            /*                                        */
sfr RH0         = 0x94;            /*                                        */
sfr RH1         = 0x95;            /*                                        */
sfr WDTRST      = 0xA6;            /*                                        */
sfr WDTCON      = 0xA7;            /*                                        */
sfr SCON        = 0x98;            /*                                        */
sfr SBUF        = 0x99;            /*                                        */
sfr SADEN       = 0xB9;            /*                                        */
sfr SADDR       = 0xA9;            /*                                        */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr IPH         = 0xB7;            /*                                        */
sfr PCON        = 0x87;            /*                                        */
sfr CLKREG      = 0x8F;            /*                                        */
sfr GPMOD       = 0x9A;            /*                                        */
sfr GPLS        = 0x9B;            /*                                        */
sfr GPIEN       = 0x9C;            /*                                        */
sfr GPIF        = 0x9D;            /*                                        */
sfr SPSR        = 0xE8;            /*                                        */
sfr SPCR        = 0xE9;            /*                                        */
sfr SPDR        = 0xEA;            /*                                        */
sfr ACSR        = 0x97;            /*                                        */


/* Bit Definitions */
/* TCON 0x88 */
sbit P1_7     = P1^7;              /*                                        */
sbit P1_6     = P1^6;              /*                                        */
sbit P1_5     = P1^5;              /*                                        */
sbit P1_4     = P1^4;              /*                                        */
sbit P1_3     = P1^3;              /*                                        */
sbit P1_2     = P1^2;              /*                                        */
sbit P1_1     = P1^1;              /*                                        */
sbit P1_0     = P1^0;              /*                                        */
sbit SCK      = P1^7;              /*                                        */
sbit MISO     = P1^6;              /*                                        */
sbit MOSI     = P1^5;              /*                                        */
sbit SSB      = P1^4;              /*                                        */

/* P3 0xB0 */
sbit P3_7     = P3^7;              /*                                        */
sbit P3_6     = P3^6;              /*                                        */
sbit P3_5     = P3^5;              /*                                        */
sbit P3_4     = P3^4;              /*                                        */
sbit P3_3     = P3^3;              /*                                        */
sbit P3_2     = P3^2;              /*                                        */
sbit P3_1     = P3^1;              /*                                        */
sbit P3_0     = P3^0;              /*                                        */
sbit T1       = P3^5;              /*                                        */
sbit T0       = P3^4;              /*                                        */
sbit INT1     = P3^3;              /*                                        */
sbit INT0     = P3^2;              /*                                        */
sbit TXD      = P3^1;              /*                                        */
sbit RXD      = P3^0;              /*                                        */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit UD       = PSW^1;             /*                                        */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* TCON  0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* SCON 0x98 */
sbit SM0      = SCON^7;            /*                                        */
sbit FE       = SCON^7;            /*                                        */
sbit SM1      = SCON^6;            /*                                        */
sbit SM2      = SCON^5;            /*                                        */
sbit REN      = SCON^4;            /*                                        */
sbit TB8      = SCON^3;            /*                                        */
sbit RB8      = SCON^2;            /*                                        */
sbit TI       = SCON^1;            /*                                        */
sbit RI       = SCON^0;            /*                                        */

/*  IE 0xA8 */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit EC       = IE^6;              /*                                        */
sbit EGP      = IE^5;              /*                                        */
sbit ES       = IE^4;              /*                                        */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/*  IP 0xB8 */
                                   /* Bit7 UNUSED                            */
                                   /* Bit6 UNUSED                            */
sbit PGP      = IP^5;              /*                                        */
sbit PS       = IP^4;              /*                                        */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

/* SPSR 0xE8 */
sbit SPIF     = SPSR^7;            /*                                        */
sbit WCOL     = SPSR^6;            /*                                        */
sbit LDEN     = SPSR^5;            /*                                        */
sbit SSIG     = SPSR^2;            /*                                        */
sbit DISSO    = SPSR^1;            /*                                        */
sbit ENH      = SPSR^0;            /*                                        */


#endif                                /* #define __AT89LP214_H__             */