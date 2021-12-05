/*-----------------------------------------------------------------------------
  REG51V664.H

Header file for NXP P89V660, P89V662, and P89V664 devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG51V664_H__
#define __REG51V664_H__

/*  BYTE Registers  */
sfr P0          = 0x80;            /* Port 0                                 */
sfr SP          = 0x81;            /* Stack pointer                          */
sfr DPL         = 0x82;            /* Data Pointer low                       */
sfr DPH         = 0x83;            /* Data Pointer high                      */
sfr SPI         = 0x86;            /* SPI data register                      */
sfr PCON        = 0x87;            /* Power Control Register                 */
sfr TCON        = 0x88;            /* Timer Control Register                 */
sfr TMOD        = 0x89;            /* Timer 0 and 1 mode                     */
sfr TL0         = 0x8A;            /* Timer 0 low                            */
sfr TL1         = 0x8B;            /* Timer 1 low                            */
sfr TH0         = 0x8C;            /* Timer 0 high                           */
sfr TH1         = 0x8D;            /* Timer 1 high                           */
sfr AUXR        = 0x8E;            /* Auxilia ry function register           */

sfr P1          = 0x90;            /* Port 1                                 */
sfr IP1         = 0x91;            /* Interrupt Priority 1                   */
sfr IP1H        = 0x92;            /* Interrupt Priority 1 high              */
sfr S0CON       = 0x98;            /* Serial Port Control                    */
sfr S0BUF       = 0x99;            /* Serial Port Data Buffer Register       */

sfr P2          = 0xA0;            /* Port 2                                 */
sfr P4          = 0xA1;            /* Port 4                                 */
sfr AUXR1       = 0xA2;            /* Auxiliary function register 1          */
sfr WDTRST      = 0xA6;            /* WatchDog Timer Reset                   */
sfr IEN0        = 0xA8;            /* Interrupt Enable 0                     */
sfr SADDR       = 0xA9;            /* Serial Port Address Register           */
sfr SPSR        = 0xAA;            /* SPI Configuration register             */

sfr P3          = 0xB0;            /* Port 3                                 */
sfr IPH         = 0xB7;            /* Interrupt Priority 0 high              */
sfr IP          = 0xB8;            /* Interrupt Priority 0                   */
sfr SADEN       = 0xB9;            /* Serial Port Address Enable             */

sfr CCON        = 0xC0;            /* PCA Counter Control                    */
sfr CMOD        = 0xC1;            /* PCA Counter mode                       */
sfr CCAPM0      = 0xC2;            /* Module 0 mode                          */
sfr CCAPM1      = 0xC3;            /* Module 1 mode                          */
sfr CCAPM2      = 0xC4;            /* Module 2 mode                          */
sfr CCAPM3      = 0xC5;            /* Module 3 mode                          */
sfr CCAPM4      = 0xC6;            /* Module 4 mode                          */
sfr T2CON       = 0xC8;            /* Timer2 Control Register                */
sfr T2MOD       = 0xC9;            /* Timer2 mode Control                    */
sfr RCAP2L      = 0xCA;            /* Timer2 Capture low                     */
sfr RCAP2H      = 0xCB;            /* Timer2 Capture high                    */
sfr TL2         = 0xCC;            /* Timer 2 low                            */
sfr TH2         = 0xCD;            /* Timer 2 high                           */

sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr SPCR        = 0xD5;            /* SPI Control Register                   */
sfr S1CON       = 0xD8;            /* I2C-bus control register               */
sfr S1STA       = 0xD9;            /* I2C-bus status register                */
sfr S1DAT       = 0xDA;            /* I2C-bus data register                  */
sfr S1ADR       = 0xDB;            /* I2C-bus slave address register         */

sfr ACC         = 0xE0;            /* Accumulator                            */
sfr S2STA       = 0xE1;            /* I2C Status register                    */
sfr S2DAT       = 0xE2;            /* I2C data register                      */
sfr S2ADR       = 0xE3;            /* I2C slave address register             */
sfr IEN1        = 0xE8;            /* Interrupt Enable 1                     */
sfr CL          = 0xE9;            /* PCA Counter low                        */
sfr CCAP0L      = 0xEA;            /* Module 0 Capture low                   */
sfr CCAP1L      = 0xEB;            /* Module 1 Capture low                   */
sfr CCAP2L      = 0xEC;            /* Module 2 Capture low                   */
sfr CCAP3L      = 0xED;            /* Module 3 Capture low                   */
sfr CCAP4L      = 0xEE;            /* Module 4 Capture low                   */

sfr B           = 0xF0;            /* B register                             */
sfr S2CON       = 0xF8;            /* I2C control register                   */
sfr CH          = 0xF9;            /* PCA Counter high                       */
sfr CCAP0H      = 0xFA;            /* Module 0 Capture high                  */
sfr CCAP1H      = 0xFB;            /* Module 1 Capture high                  */
sfr CCAP2H      = 0xFC;            /* Module 2 Capture high                  */
sfr CCAP3H      = 0xFD;            /* Module 3 Capture high                  */
sfr CCAP4H      = 0xFE;            /* Module 4 Capture high                  */


/*  BIT Registers  */
/* Port 0 0x80 */
sbit  AD7     = P0^7;
sbit  AD6     = P0^6;
sbit  AD5     = P0^5;
sbit  AD4     = P0^4;
sbit  AD3     = P0^3;
sbit  AD2     = P0^2;
sbit  AD1     = P0^1;
sbit  AD0     = P0^0;

/* TCON 0x88 */
sbit  TF1     = TCON^7;
sbit  TR1     = TCON^6;
sbit  TF0     = TCON^5;
sbit  TR0     = TCON^4;
sbit  IE1     = TCON^3;
sbit  IT1     = TCON^2;
sbit  IE0     = TCON^1;
sbit  IT0     = TCON^0;

/* Port 1  0x90 */
sbit  SDA     = P1^7;
sbit  SCL     = P1^6;
sbit  CEX2    = P1^5;
sbit  CEX1    = P1^4;
sbit  CEX0    = P1^3;
sbit  ECI     = P1^2;
sbit  T2EX    = P1^1;
sbit  T2      = P1^0;

/* SCON 0x98 */
sbit  SM0     = S0CON^7;
sbit  FE      = S0CON^7;
sbit  SM1     = S0CON^6;
sbit  SM2     = S0CON^5;
sbit  REN     = S0CON^4;
sbit  TB8     = S0CON^3;
sbit  RB8     = S0CON^2;
sbit  TI      = S0CON^1;
sbit  RI      = S0CON^0;

/* Port 2 0xA0 */
sbit  AD15    = P2^7;
sbit  AD14    = P2^6;
sbit  AD13    = P2^5;
sbit  AD12    = P2^4;
sbit  AD11    = P2^3;
sbit  AD10    = P2^2;
sbit  AD9     = P2^1;
sbit  AD8     = P2^0;

/* PSW Program Status Word 0xD0 */
sbit  CY      = PSW^7;
sbit  AC      = PSW^6;
sbit  F0      = PSW^5;
sbit  RS1     = PSW^4;
sbit  RS0     = PSW^3;
sbit  OV      = PSW^2;
sbit  UD      = PSW^1;
sbit  P       = PSW^0;

/* S1CON I2C-bus control register 0xD8 */
sbit  CR2     = S1CON^7;
sbit  ENS1    = S1CON^6;
sbit  STA     = S1CON^5;
sbit  STO     = S1CON^4;
sbit  SI      = S1CON^3;
sbit  AA      = S1CON^2;
sbit  CR1     = S1CON^1;
sbit  CR0     = S1CON^0;

/* Interrupt enable register 0xD8 */
sbit  EA      = IEN0^7;
sbit  EC      = IEN0^6;
sbit  ES1     = IEN0^5;
sbit  ES0     = IEN0^4;
sbit  ET1     = IEN0^3;
sbit  EX1     = IEN0^2;
sbit  ET0     = IEN0^1;
sbit  EX0     = IEN0^0;

/* Interrupt enable register 0xE8 */
sbit  ES3     = IEN1^2;
sbit  ES2     = IEN1^1;
sbit  ET2     = IEN1^0;

/* Port 3 0xB0 */
sbit  RD      = P3^7;
sbit  WR      = P3^6;
sbit  T1      = P3^5;
sbit  T0      = P3^4;
sbit  INT1    = P3^3;
sbit  INT0    = P3^2;
sbit  TXD     = P3^1;
sbit  RXD     = P3^0;

/* Timer2 Control Register 0xC8 */
sbit  TF2     = T2CON^7;
sbit  EXF2    = T2CON^6;
sbit  RCLK    = T2CON^5;
sbit  TCLK    = T2CON^4;
sbit  EXEN2   = T2CON^3;
sbit  TR2     = T2CON^2;
sbit  CT2     = T2CON^1;
sbit  CP      = T2CON^0;


#endif                                /* #define __REG51V664_H__             */

