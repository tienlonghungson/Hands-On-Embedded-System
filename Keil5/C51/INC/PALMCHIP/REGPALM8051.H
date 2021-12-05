/*-----------------------------------------------------------------------------
  REGPALM8051.H

Header file for Pamchip PALM8051 8051 based IP core.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REGPALM8051_H__
#define __REGPALM8051_H__

/* Byte Registers */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer low byte                  */
sfr DPH         = 0x83;            /* Data Pointer high byte                 */
sfr DPL1        = 0x84;            /* Data Pointer1 low byte                 */
sfr DPH1        = 0x85;            /* Data Pointer1 high byte                */
sfr PCON        = 0x87;            /* Power Control                          */

sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr TMOD        = 0x89;            /* Timer/Counter Mode                     */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low                    */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low                    */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High                   */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High                   */

sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr DPS         = 0x92;            /* Dual DPTR selection                    */

sfr SCON        = 0x98;            /* UART0 Control                          */
sfr SBUF        = 0x99;            /* UART0 Data Buffer                      */

sfr RMAP        = 0x9F;            /* Banks 0-7 selection register           */

sfr P2          = 0xA0;            /* Port 2 Latch                           */

sfr IE          = 0xA8;            /* Interrupt Enable                       */

sfr P3          = 0xB0;            /* Port 3 Latch                           */

sfr IP          = 0xB8;            /* Interrupt Priority                     */

sfr PSW         = 0xD0;            /* Program Status Word                    */

sfr ACC         = 0xE0;            /* Accumulator                            */

sfr B           = 0xF0;            /* B Register                             */


/* Bit Definitions */
/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Run Control             */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Run Control             */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Configuration         */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Configuration         */

/* SCON 0x98 */
sbit SM0      = SCON^7;            /* Serial Port Mode Bit 0                 */
sbit SM1      = SCON^6;            /* Serial Port Mode Bit 1                 */
sbit SM2      = SCON^5;            /* Serial Port Mode Bit 2                 */
sbit REN      = SCON^4;            /* Receiver Enable                        */
sbit TB8      = SCON^3;            /* Transmission Bit                       */
sbit RB8      = SCON^2;            /* Reception Bit                          */
sbit TI       = SCON^1;            /* Transmitter Interrupt                  */
sbit RI       = SCON^0;            /* Receiver Interrupt                     */

/* IE 0xA8 */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
                                   /* Reserved                               */
                                   /* Bit5 UNUSED                            */
sbit ES       = IE^4;              /* Serial Port Interrupt Enable           */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 */
                                   /* Reserved                               */
                                   /* Bit6 UNUSED                            */
                                   /* Bit5 UNUSED                            */
sbit PS       = IP^4;              /* Serial Port Interrupt Priority         */
sbit PT1      = IP^3;              /* Timer 1 Interrupt Priority             */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Interrupt Priority             */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* General Purpose Flag 0                 */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit UV       = PSW^1;             /* User Definable Flag                    */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */


/* Bank Selection Values */
#define BANK0        0x00          /* Select Bank 0, default  rmap[2:0] 000  */
#define BANK1        0x01          /* Select Bank 1,          rmap[2:0] 001  */
#define BANK2        0x02          /* Select Bank 2,          rmap[2:0] 010  */
#define BANK3        0x03          /* Select Bank 3,          rmap[2:0] 011  */
#define BANK4        0x04          /* Select Bank 4,          rmap[2:0] 100  */
#define BANK5        0x05          /* Select Bank 5,          rmap[2:0] 101  */
#define BANK6        0x06          /* Select Bank 6,          rmap[2:0] 110  */
#define BANK7        0x07          /* Select Bank 7,          rmap[2:0] 111  */

#endif                             /* #define __REGPALM8051_H__              */