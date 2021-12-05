/*-----------------------------------------------------------------------------
  AT89LP52.H

Header file for Atmel AT89LP52 based devices.
Copyright 2010 (c) Keil(TM) Tools by ARM(R)
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __AT89LP52_H__
#define __AT89LP52_H__

/* Byte Registers */
sfr P0          = 0x80;            /* Port 0                                 */
sfr P1          = 0x90;            /* Port 1                                 */
sfr P2          = 0xA0;            /* Port 2                                 */
sfr P3          = 0xB0;            /* Port 3                                 */
sfr P4          = 0xC0;            /* Port 4                                 */
sfr PMOD        = 0xC1;            /*                                        */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr B           = 0xF0;            /* B Register                             */
sfr SP          = 0x81;            /*                                        */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr DP0L        = 0x82;            /*                                        */
sfr DP0H        = 0x83;            /*                                        */
sfr DP1L        = 0x84;            /*                                        */
sfr DP1H        = 0x85;            /*                                        */
sfr AUXR        = 0x8E;            /*                                        */
sfr AUXR1       = 0xA2;            /*                                        */
sfr DPCF        = 0xA2;            /*                                        */
sfr TCON        = 0x88;            /*                                        */
sfr TMOD        = 0x89;            /*                                        */
sfr T2CON       = 0xC8;            /*                                        */
sfr T2MOD       = 0xC9;            /*                                        */
sfr TL0         = 0x8A;            /*                                        */
sfr TL1         = 0x8B;            /*                                        */
sfr TL2         = 0xCC;            /*                                        */
sfr TH0         = 0x8C;            /*                                        */
sfr TH1         = 0x8D;            /*                                        */
sfr TH2         = 0xCD;            /*                                        */
sfr TCONB       = 0x91;            /*                                        */
sfr RCAP2L      = 0xCA;            /*                                        */
sfr RCAP2H      = 0xCB;            /*                                        */
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
sfr MEMCON      = 0x96;            /*                                        */


/* Bit Definitions */
/*P0 0x80 */
sbit P0_7     = P0^7;              /*                                        */
sbit P0_6     = P0^6;              /*                                        */
sbit P0_5     = P0^5;              /*                                        */
sbit P0_4     = P0^4;              /*                                        */
sbit P0_3     = P0^3;              /*                                        */
sbit P0_2     = P0^2;              /*                                        */
sbit P0_1     = P0^1;              /*                                        */
sbit P0_0     = P0^0;              /*                                        */

/*P1 0x90 */
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
                                   /*                                        */
                                   /*                                        */
                                   /*                                        */
sbit T2EX     = P1^1;              /*                                        */
sbit T2       = P1^0;              /*                                        */

/*P2 0xA0 */
sbit P2_7     = P2^7;              /*                                        */
sbit P2_6     = P2^6;              /*                                        */
sbit P2_5     = P2^5;              /*                                        */
sbit P2_4     = P2^4;              /*                                        */
sbit P2_3     = P2^3;              /*                                        */
sbit P2_2     = P2^2;              /*                                        */
sbit P2_1     = P2^1;              /*                                        */
sbit P2_0     = P2^0;              /*                                        */

/*P3 0xB0 */
sbit P3_7     = P3^7;              /*                                        */
sbit P3_6     = P3^6;              /*                                        */
sbit P3_5     = P3^5;              /*                                        */
sbit P3_4     = P3^4;              /*                                        */
sbit P3_3     = P3^3;              /*                                        */
sbit P3_2     = P3^2;              /*                                        */
sbit P3_1     = P3^1;              /*                                        */
sbit P3_0     = P3^0;              /*                                        */
sbit RD       = P3^7;              /*                                        */
sbit WR       = P3^6;              /*                                        */
sbit T1       = P3^5;              /*                                        */
sbit T0       = P3^4;              /*                                        */
sbit INT1     = P3^3;              /*                                        */
sbit INT0     = P3^2;              /*                                        */
sbit TXD      = P3^1;              /*                                        */
sbit RXD      = P3^0;              /*                                        */

/* P4 0xC0 */
sbit P4_7     = P4^7;              /*                                        */
sbit P4_6     = P4^6;              /*                                        */
sbit P4_5     = P4^5;              /*                                        */
sbit P4_4     = P4^4;              /*                                        */
                                   /*                                        */
sbit XTAL2    = P4^7;              /*                                        */
sbit XTAL1    = P4^6;              /*                                        */
sbit PSEN     = P4^5;              /*                                        */
sbit ALE      = P4^4;              /*                                        */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit UD       = PSW^1;             /*                                        */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* T2CON */
sbit TF2      = T2CON^7;           /*                                        */
sbit EXF2     = T2CON^6;           /*                                        */
sbit RCLK     = T2CON^5;           /*                                        */
sbit TCLK     = T2CON^4;           /*                                        */
sbit EXEN2    = T2CON^3;           /*                                        */
sbit TR2      = T2CON^2;           /*                                        */
sbit C_T2     = T2CON^1;           /*                                        */
sbit CP_RL2   = T2CON^0;           /*                                        */

/* SCON */
sbit SM0      = SCON^7;            /*                                        */
sbit FE       = SCON^7;            /*                                        */
sbit SM1      = SCON^6;            /*                                        */
sbit SM2      = SCON^5;            /*                                        */
sbit REN      = SCON^4;            /*                                        */
sbit TB8      = SCON^3;            /*                                        */
sbit RB8      = SCON^2;            /*                                        */
sbit TI       = SCON^1;            /*                                        */
sbit RI       = SCON^0;            /*                                        */

/* IE 0xA8 */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
                                   /* Bit6 UNUSED                            */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES       = IE^4;              /* UART  Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 */
                                   /* Bit7 UNUSED                            */
                                   /* Bit6 UNUSED                            */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS       = IP^4;              /* UART  Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */


#endif                                /* #define __AT89LP52_H__              */
