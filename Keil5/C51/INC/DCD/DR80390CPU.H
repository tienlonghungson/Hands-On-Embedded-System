/*--------------------------------------------------------------------------
  DR80390CPU.H
 Registers definition for DCD DR80390CPU

 Copyright (c) 2003 Keil Elektronik GmbH and Keil Software, Inc.
 All rights reserved.
-------------------------------------------------------------------------- */
#ifndef _DR80390CPU_H_
#define _DR80390CPU_H_

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* Defined configuration peripherals */

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

  sfr TCON      = 0x88;   /* INT 0,1 Configuration     */

  sfr CKCON     = 0x8E;   /* XDATA Wait States         */
  sfr WTST      = 0x92;   /* Program Wait States       */

  sfr DPP       = 0x93;   /* Data Page Pointer 0       */
  sfr DPX0      = 0x93;

  sfr ACON      = 0x9D;   /* Address Control FLAT/LARGE*/
  
  sfr IE        = 0xA8;   /* Interrupt Enable          */
  sfr IP        = 0xB8;

  sfr PSW       = 0xD0;   /* Program Status Word       */
  sfr ACC       = 0xE0;   /* Accumulator               */
  sfr EIE       = 0xE8;   /* External Interrupt Enable */

  sfr STATUS    = 0xE9;   /* Status register           */
  sfr MXAX      = 0xEA;   /* MOVX @Ri High address     */
  sfr B         = 0xF0;   /* B Working register        */
  sfr EIP       = 0xF8;   /* Enable Interrupt Priority */

/*-------------------------------------------------------------------------
  BIT Register  
  -------------------------------------------------------------------------*/

/*  TCON  */
  sbit IT0      = TCON^0;
  sbit IE0      = TCON^1;
  sbit IT1      = TCON^2;
  sbit IE1      = TCON^3;

/*  IE   */
  sbit EX0      = IE^0;
  sbit EX1      = IE^2;
  sbit EA       = IE^7;

/*  IP   */ 
  sbit PX0      = IP^0;
  sbit PX1      = IP^2;

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

/* CKCON Bit Values  */
  #define MD_    0x07

#endif /*_DR80390CPU_H_*/
