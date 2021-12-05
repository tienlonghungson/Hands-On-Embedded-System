/*-----------------------------------------------------------------------------
  REG51ATLPRB2.H

Header file for Atmel AT89LP51RB2\RC2\IC2 and AT89LP51RD2\ED2\ID2 devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG51ATLPRB2_H__
#define __REG51ATLPRB2_H__

/* Byte Registers */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr CKSEL       = 0x85;            /* Clock Selection Register               */
sfr OSCCON      = 0x86;            /* Oscillator Contro l Register           */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer/Counter 0 and 1 Control          */
sfr TMOD        = 0x89;            /* Timer/Counter 0 and 1 Modes            */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low Byte               */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low Byte               */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High Byte              */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High Byte              */
sfr AUXR        = 0x8E;            /* Auxiliary Register 0                   */
sfr CKCON0      = 0x8F;            /* Clock Control Register 0               */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr TCONB       = 0x91;            /* Timer/Counter 0 and 1 Mode B           */
sfr BMSEL       = 0x92;            /* Bank memory selection                  */
sfr SSCON       = 0x93;            /* Synchronous Serial Control             */
sfr SSCS        = 0x94;            /* Synchronous Serial Status              */
sfr SSDAT       = 0x95;            /* Synchronous Serial Data                */
sfr SSADR       = 0x96;            /* Synchronous Serial Address             */
sfr CKRL        = 0x97;            /* Clock Reload Register                  */
sfr SCON        = 0x98;            /* Serial Control                         */
sfr SBUF        = 0x99;            /* Serial Data Buffer                     */
sfr BRL         = 0x9A;            /* Baud Rate Reload                       */
sfr BDRCON      = 0x9B;            /* Baud Rate Control                      */
sfr KBLS        = 0x9C;            /* Keyboard Level Selector                */
sfr KBE         = 0x9D;            /* Keyboard Input Enable                  */
sfr KBF         = 0x9E;            /* Keyboard Flag Register                 */
sfr KBMOD       = 0x9F;            /* Keyboard Mode Register                 */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr DPCF        = 0xA1;            /* Datapointer Config Register            */
sfr AUXR1       = 0xA2;            /* Auxiliary Register 1                   */
sfr ACSRA       = 0xA3;            /* Comparator A Control Register          */
sfr DADC        = 0xA4;            /* DAC/ADC Control Register               */
sfr DADI        = 0xA5;            /* DAC/ADC Input Register                 */
sfr WDTRST      = 0xA6;            /* WatchDog Timer Reset                   */
sfr WDTPRG      = 0xA7;            /* WatchDog Timer Program                 */
sfr IEN0        = 0xA8;            /* Interrupt Enable Control 0             */
sfr SADDR       = 0xA9;            /* Slave Address                          */
sfr ACSRB       = 0xAB;            /* Comparator B Control Register          */
sfr DADL        = 0xAC;            /* DAC/ADC Data Low Register              */
sfr DADH        = 0xAD;            /* DAC/ADC Data High Register             */
sfr CLKREG      = 0xAE;            /* Clock Register                         */
sfr CKCON1      = 0xAF;            /* Clock Control Register 1               */
sfr P3          = 0xB0;            /* Port 3 Latch                           */
sfr IEN1        = 0xB1;            /* Interrupt Enable Control 1             */
sfr IPL1        = 0xB2;            /* Interrupt Priority Control Low 1       */
sfr IPH1        = 0xB3;            /* Interrupt Priority Control High 1      */
sfr IPH0        = 0xB7;            /* Interrupt Priority Control High 0      */
sfr IPL0        = 0xB8;            /* Interrupt Priority Control Low 0       */
sfr SADEN       = 0xB9;            /* Slave Address Mask                     */
sfr AREF        = 0xBD;            /* Comparator Reference Register          */
sfr P4M0        = 0xBE;            /* Port 4 Mode 0                          */
sfr P4M1        = 0xBF;            /* Port 4 Mode 1                          */
sfr P4          = 0xC0;            /* Port 4 Latch                           */
sfr SPCON       = 0xC3;            /* SPI Control                            */
sfr SPSTA       = 0xC4;            /* SPI Status                             */
sfr SPDAT       = 0xC5;            /* SPI Data                               */
sfr P3M0        = 0xC6;            /* Port 3 Mode 0                          */
sfr P3M1        = 0xC7;            /* Port 3 Mode 1                          */
sfr T2CON       = 0xC8;            /* Timer/Counter 2 control                */
sfr T2MOD       = 0xC9;            /* Timer/C ounter 2 Mode                  */
sfr RCAP2L      = 0xCA;            /* Timer/Counter 2 Reload/Capture Low B.  */
sfr RCAP2H      = 0xCB;            /* Timer/Counter 2 Reload/Capture High B. */
sfr TL2         = 0xCC;            /* Timer/Counter 2 Low Byte               */
sfr TH2         = 0xCD;            /* Timer/Counter 2 High Byte              */
sfr P2M0        = 0xCE;            /* Port 2 Mode 0                          */
sfr P2M1        = 0xCF;            /* Port 2 Mode 1                          */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr FCON        = 0xD1;            /* Flash Control Register                 */
sfr EECON       = 0xD2;            /* EEPROM Control Register                */
sfr DPLB        = 0xD4;            /* Alternate Data Pointer Low Byte        */
sfr DPHB        = 0xD5;            /* Alternate Data Pointer High Byte       */
sfr P1M0        = 0xD6;            /* Port 1 Mode 0                          */
sfr P1M1        = 0xD7;            /* Port 1 Mode 1                          */
sfr CCON        = 0xD8;            /* PCA Timer/Counter Control              */
sfr CMOD        = 0xD9;            /* PCA Timer/Counter Mode                 */
sfr CCAPM0      = 0xDA;            /* PCA Timer/Counter Mode 0               */
sfr CCAPM1      = 0xDB;            /* PCA Timer/Counter Mode 1               */
sfr CCAPM2      = 0xDC;            /* PCA Timer/Counter Mode 2               */
sfr CCAPM3      = 0xDD;            /* PCA Timer/Counter Mode 3               */
sfr CCAPM4      = 0xDE;            /* PCA Timer/Counter Mode 4               */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr AX          = 0xE1;            /* Extended Accumulator                   */
sfr DSPR        = 0xE2;            /* DSP Control Register                   */
sfr FIRD        = 0xE3;            /* FIFO Depth                             */
sfr MACL        = 0xE4;            /* MAC Low Byte                           */
sfr MACH        = 0xE5;            /* MAC High Byte                          */
sfr P0M0        = 0xE6;            /* Port 0 Mode 0                          */
sfr P0M1        = 0xE7;            /* Port 0 Mode 1                          */
sfr CL          = 0xE9;            /* PCA Timer/Counter Low Byte             */
sfr CCAP0L      = 0xEA;            /* PCA Compare Capture Module 0 L         */
sfr CCAP1L      = 0xEB;            /* PCA Compare Capture Module 1 L         */
sfr CCAP2L      = 0xEC;            /* PCA Compare Capture Module 2 L         */
sfr CCAP3L      = 0xED;            /* PCA Compare Capture Module 3 L         */
sfr CCAP4L      = 0xEE;            /* PCA Compare Capture Module 4 L         */
sfr SPX         = 0xEF;            /* Extended Stack Pointer                 */
sfr B           = 0xF0;            /* B Register                             */
sfr RL0         = 0xF2;            /* Timer/Counter 0 Reload Low             */
sfr RL1         = 0xF3;            /* Timer/Counter 1 Reload Low             */
sfr RH0         = 0xF4;            /* Timer/Counter 0 Reload High            */
sfr RH1         = 0xF5;            /* Timer/Counter 1 Reload High            */
sfr PAGE        = 0xF6;            /* ERAM Page Register                     */
sfr BX          = 0xF7;            /* Extended B Register                    */
sfr CH          = 0xF9;            /* PCA Timer/Counter High Byte            */
sfr CCAP0H      = 0xFA;            /* PCA Compare Capture Module 0 H         */
sfr CCAP1H      = 0xFB;            /* PCA Compare Capture Module 1 H         */
sfr CCAP2H      = 0xFC;            /* PCA Compare Capture Module 2 H         */
sfr CCAP3H      = 0xFD;            /* PCA Compare Capture Module 3 H         */
sfr CCAP4H      = 0xFE;            /* PCA Compare Capture Module 4 H         */

/* 16-bit Register definitions */
sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 IP1       = 0xB2;            /* Interrupt 1 priority control           */
sfr16 IP2       = 0xB7;            /* Interrupt 2 priority control           */
sfr16 RCAP2     = 0xCA;            /* Timer/Counter 2 Reload/Capture         */
sfr16 T2        = 0xCC;            /* Timer 2                                */
sfr16 DPB       = 0xD4;            /* Alternate datapointer                  */
sfr16 MAC       = 0xE4;            /* MAC Register                           */

/* Bit Definitions */
/* P0 0x80 */
sbit P0_7     = P0^7;              /* Port 0 Bit 7                           */
sbit P0_6     = P0^6;              /* Port 0 Bit 6                           */
sbit P0_5     = P0^5;              /* Port 0 Bit 5                           */
sbit P0_4     = P0^4;              /* Port 0 Bit 4                           */
sbit P0_3     = P0^3;              /* Port 0 Bit 3                           */
sbit P0_2     = P0^2;              /* Port 0 Bit 2                           */
sbit P0_1     = P0^1;              /* Port 0 Bit 1                           */
sbit P0_0     = P0^0;              /* Port 0 Bit 0                           */

/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* P1 0x90 */
sbit P1_7     = P1^7;              /* Port 1 Bit 7                           */
sbit P1_6     = P1^6;              /* Port 1 Bit 6                           */
sbit P1_5     = P1^5;              /* Port 1 Bit 5                           */
sbit P1_4     = P1^4;              /* Port 1 Bit 4                           */
sbit P1_3     = P1^3;              /* Port 1 Bit 3                           */
sbit P1_2     = P1^2;              /* Port 1 Bit 2                           */
sbit P1_1     = P1^1;              /* Port 1 Bit 1                           */
sbit P1_0     = P1^0;              /* Port 1 Bit 0                           */

/* SCON 0x98 */
sbit SM0      = SCON^7;            /* Serial Port Mode Bit 0                 */
sbit SM1      = SCON^6;            /* Serial Port Mode Bit 1                 */
sbit SM2      = SCON^5;            /* Multiprocessor Communication Enable    */
sbit REN      = SCON^4;            /* Serial Reception Enable                */
sbit TB8      = SCON^3;            /* Transmitter Bit 8                      */
sbit RB8      = SCON^2;            /* Receiver Bit 8                         */
sbit TI       = SCON^1;            /* Transmit Interrupt Flag                */
sbit RI       = SCON^0;            /* Receive Interrupt Flag                 */

/* P2 0xA0 */
sbit P2_7     = P2^7;              /* Port 2 Bit 7                           */
sbit P2_6     = P2^6;              /* Port 2 Bit 6                           */
sbit P2_5     = P2^5;              /* Port 2 Bit 5                           */
sbit P2_4     = P2^4;              /* Port 2 Bit 4                           */
sbit P2_3     = P2^3;              /* Port 2 Bit 3                           */
sbit P2_2     = P2^2;              /* Port 2 Bit 2                           */
sbit P2_1     = P2^1;              /* Port 2 Bit 1                           */
sbit P2_0     = P2^0;              /* Port 2 Bit 0                           */

/* IEN0 0xA8 */
sbit EA       = IEN0^7;            /* Global Interrupt Enable                */
sbit EC       = IEN0^6;            /* PCA Interrpt Enable                    */
sbit ET2      = IEN0^5;            /* Timer 2 Interrupt Enable               */
sbit ES       = IEN0^4;            /* Serial Port Interrupt Enable           */
sbit ET1      = IEN0^3;            /* Timer 1 Interrupt Enable               */
sbit EX1      = IEN0^2;            /* External Interrupt 1 Enable            */
sbit ET0      = IEN0^1;            /* Timer 0 Interrupt Enable               */
sbit EX0      = IEN0^0;            /* External Interrupt 0 Enable            */

/* P3 0xB0 */
sbit P3_7     = P3^7;              /* Port 3 Bit 7                           */
sbit P3_6     = P3^6;              /* Port 3 Bit 6                           */
sbit P3_5     = P3^5;              /* Port 3 Bit 5                           */
sbit P3_4     = P3^4;              /* Port 3 Bit 4                           */
sbit P3_3     = P3^3;              /* Port 3 Bit 3                           */
sbit P3_2     = P3^2;              /* Port 3 Bit 2                           */
sbit P3_1     = P3^1;              /* Port 3 Bit 1                           */
sbit P3_0     = P3^0;              /* Port 3 Bit 0                           */

/* IPL0 0xB8 */
sbit IP0DIS   = IPL0^7;            /* Interrupt Level 0 Disable              */
sbit PPCL     = IPL0^6;            /* PCA Interrupt Priority Low             */
sbit PT2L     = IPL0^5;            /* Timer 2 Interrupt Priority Low         */
sbit PSL      = IPL0^4;            /* Serial Port Interrupt Priority Low     */
sbit PT1L     = IPL0^3;            /* Timer 1 Interrupt Priority Low         */
sbit PX1L     = IPL0^2;            /* External Interrupt 1 Priority Low      */
sbit PT0L     = IPL0^1;            /* Timer 0 Interrupt Priority Low         */
sbit PX0L     = IPL0^0;            /* External Interrupt 0 Priority  Low     */

/* P4 0xB0 */
sbit P4_7     = P4^7;              /* Port 4 Bit 7                           */
sbit P4_6     = P4^6;              /* Port 4 Bit 6                           */
sbit P4_5     = P4^5;              /* Port 4 Bit 5                           */
sbit P4_4     = P4^4;              /* Port 4 Bit 4                           */
sbit P4_3     = P4^3;              /* Port 4 Bit 3                           */
sbit P4_2     = P4^2;              /* Port 4 Bit 2                           */
sbit P4_1     = P4^1;              /* Port 4 Bit 1                           */
sbit P4_0     = P4^0;              /* Port 4 Bit 0                           */

/* T2CON 0xC8 */
sbit TF2      = T2CON^7;           /* Timer 2 Overflow Flag                  */
sbit EXF2     = T2CON^6;           /* Timer 2 External Flag                  */
sbit RCLK     = T2CON^5;           /* Receive Clock Enable                   */
sbit TCLK     = T2CON^4;           /* Transmit Clock Enable                  */
sbit EXEN2    = T2CON^3;           /* Timer 2 Split Mode Enable              */
sbit TR2      = T2CON^2;           /* Timer 2 Run Control                    */
sbit C        = T2CON^1;           /* Timer/Counter select 2                 */
sbit CP       = T2CON^0;           /* Capture/Reload Select                  */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* CCON 0xD8 */
sbit CF       = CCON^7;            /* PCA  Counter Overflow Flag             */
sbit CR       = CCON^6;            /* PCA  Counter Run Control Bit           */
                                   /* Not used                               */
sbit CCF4     = CCON^4;            /* PCA  Module 4 Interrupt Flag           */
sbit CCF3     = CCON^3;            /* PCA  Module 3 Interrupt Flag           */
sbit CCF2     = CCON^2;            /* PCA  Module 2 Interrupt Flag           */
sbit CCF1     = CCON^1;            /* PCA  Module 1 Interrupt Flag           */
sbit CCF0     = CCON^0;            /* PCA  Module 0 Interrupt Flag           */


#endif                                /* #define __REG51ATLPRB2_H__          */