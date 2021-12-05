/*--------------------------------------------------------------------------
  DP8051.H
 Registers definition for DCD DP8051

 Copyright (c) 2003 Keil Elektronik GmbH and Keil Software, Inc.
 All rights reserved.
-------------------------------------------------------------------------- */
#ifndef _DP8051_H_
#define _DP8051_H_

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* Defined configuration peripherals */

/* *********************************************************************** */
/* *********************************************************************** */

/*---------------------------------------------------------------------------
  Defined registers  
---------------------------------------------------------------------------*/

/*  BYTE Register  */
  sfr P0        = 0x80;   /* Port 0                    */
  
  sfr SP        = 0x81;   /* Stack Pointer             */
  sfr DPL       = 0x82;   /* Data Pointer 0 Low byte   */
  sfr DPL0      = 0x82;
  sfr DPH       = 0x83;   /* Data Pointer 0 High byte  */
  sfr DPH0      = 0x83;
  
  sfr PCON      = 0x87;   /* Power Configuration       */

  sfr TCON      = 0x88;   /* Timer 0,1 Configuration   */
  sfr TMOD      = 0x89;   /* Timer 0,1 Mode            */
  sfr TL0       = 0x8A;   /* Timer 0 Low byte counter  */
  sfr TL1       = 0x8B;   /* Timer 1 Low byte counter  */
  sfr TH0       = 0x8C;   /* Timer 0 High byte counter */
  sfr TH1       = 0x8D;   /* Timer 1 High byte counter */

  sfr CKCON     = 0x8E;   /* XDATA Wait States         */
  sfr P1        = 0x90;   /* Port 1                    */
  sfr WTST      = 0x92;   /* Program Wait States       */

  sfr DPP       = 0x93;   /* Data Page Pointer 0       */
  sfr DPX0      = 0x93;
  sfr SCON      = 0x98;   /* Serial 0 Configuration    */
  sfr SCON0     = 0x98;
  sfr SBUF      = 0x99;   /* Serial 0 I/O Buffer       */
  sfr SBUF0     = 0x99;

  sfr P2        = 0xA0;   /* Port 2                    */
  sfr IE        = 0xA8;   /* Interrupt Enable          */
  sfr P3        = 0xB0;   /* Port 3                    */
  sfr IP        = 0xB8;

  sfr PSW       = 0xD0;   /* Program Status Word       */
  sfr ACC       = 0xE0;   /* Accumulator               */
  sfr EIE       = 0xE8;   /* External Interrupt Enable */

  sfr STATUS    = 0xE9;   /* Status register           */
  sfr MXAX      = 0xEA;   /* MOVX @Ri High address     */
  sfr B         = 0xF0;   /* B Working register        */

/*-------------------------------------------------------------------------
  BIT Register  
  -------------------------------------------------------------------------*/

/*  P0  */
  sbit P0_7     = P0^7;
  sbit P0_6     = P0^6;
  sbit P0_5     = P0^5;
  sbit P0_4     = P0^4;
  sbit P0_3     = P0^3;
  sbit P0_2     = P0^2;
  sbit P0_1     = P0^1;
  sbit P0_0     = P0^0;

/*  P1  */
  sbit P1_7     = P1^7;
  sbit P1_6     = P1^6;
  sbit P1_5     = P1^5;
  sbit P1_4     = P1^4;
  sbit P1_3     = P1^3;
  sbit P1_2     = P1^2;
  sbit P1_1     = P1^1;
  sbit P1_0     = P1^0;

/*  P2  */
  sbit P2_7     = P2^7;
  sbit P2_6     = P2^6;
  sbit P2_5     = P2^5;
  sbit P2_4     = P2^4;
  sbit P2_3     = P2^3;
  sbit P2_2     = P2^2;
  sbit P2_1     = P2^1;
  sbit P2_0     = P2^0;

/*  P3  */
  sbit P3_7     = P3^7;
  sbit P3_6     = P3^6;
  sbit P3_5     = P3^5;
  sbit P3_4     = P3^4;
  sbit P3_3     = P3^3;
  sbit P3_2     = P3^2;
  sbit P3_1     = P3^1;
  sbit P3_0     = P3^0;

/*  TCON  */
  sbit IT0      = TCON^0;
  sbit IE0      = TCON^1;
  sbit IT1      = TCON^2;
  sbit IE1      = TCON^3;
  sbit TR0      = TCON^4;
  sbit TF0      = TCON^5;
  sbit TR1      = TCON^6;
  sbit TF1      = TCON^7;

/*  SCON0 */
  sbit RI0      = SCON0^0;
  sbit TI0      = SCON0^1;
  sbit RB08     = SCON0^2;
  sbit TB08     = SCON0^3;
  sbit REN0     = SCON0^4;
  sbit SM02     = SCON0^5;
  sbit SM01     = SCON0^6;
  sbit SM00     = SCON0^7;
  
/*   SCON */
  sbit RI       = SCON0^0;
  sbit TI       = SCON0^1;
  sbit RB8      = SCON0^2;
  sbit TB8      = SCON0^3;
  sbit REN      = SCON0^4;
  sbit SM2      = SCON0^5;
  sbit SM1      = SCON0^6;
  sbit SM0      = SCON0^7;

/*  IE   */
  sbit EX0      = IE^0;
  sbit ET0      = IE^1;
  sbit EX1      = IE^2;
  sbit ET1      = IE^3;
  sbit ES0      = IE^4;
  sbit ES       = IE^4;
  sbit EA       = IE^7;

/*  IP   */ 
  sbit PX0      = IP^0;
  sbit PT0      = IP^1;
  sbit PX1      = IP^2;
  sbit PT1      = IP^3;
  sbit PS0      = IP^4;
  sbit PS       = IP^4;

/*  PSW   */
  sbit P        = PSW^0;
  sbit F1       = PSW^1;
  sbit OV       = PSW^2;
  sbit RS0      = PSW^3;
  sbit RS1      = PSW^4;
  sbit F0       = PSW^5;
  sbit AC       = PSW^6;
  sbit CY       = PSW^7;

/*-------------------------------------------------------------------------
  BIT Values  
  -------------------------------------------------------------------------*/

/* TMOD Bit Values */
  #define T0_M0_   0x01
  #define T0_M1_   0x02
  #define T0_CT_   0x04
  #define T0_GATE_ 0x08
  #define T1_M0_   0x10
  #define T1_M1_   0x20
  #define T1_CT_   0x40
  #define T1_GATE_ 0x80

/* CKCON Bit Values  */
  #define MD_    0x07
  #define T0M_   0x08
  #define T1M_   0x10
  #define T2M_   0x20

#endif /*_DP8051_H_*/
