/*-----------------------------------------------------------------------------
  Z51F3220.H

Header file for Zilog Z51F3220x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __Z51F3220_H__
#define __Z51F3220_H__

/* Byte Registers */
/* SFRs all pages */
sfr SP          = 0x81;            /* Stackpointer                           */
sfr DPL         = 0x82;            /* Data pointer low byte                  */
sfr DPH         = 0x83;            /* Data pointer high byte                 */
sfr DPL1        = 0x84;            /* Data pointer low byte 1                */
sfr DPH1        = 0x85;            /* Data pointer high byte 1               */
sfr PSW         = 0xD0;            /* Program status word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr B           = 0xF0;            /* B register                             */

/* Port register */
sfr P0          = 0x80;            /* Port 0 data register                   */
sfr P1          = 0x88;            /* Port 1 data register                   */
sfr P2          = 0x90;            /* Port 2 data register                   */
sfr P3          = 0x98;            /* Port 3 data register                   */
sfr P4          = 0xA0;            /* Port 4 data register                   */
sfr P5          = 0xB0;            /* Port 4 data register                   */

sfr P0IO        = 0xA1;            /* P0 Direction register                  */
sfr P1IO        = 0xB1;            /* P1 Direction register                  */
sfr P2IO        = 0xB9;            /* P2 Direction register                  */
sfr P3IO        = 0xC1;            /* P3 Direction register                  */
sfr P4IO        = 0xC9;            /* P4 Direction register                  */
sfr P5IO        = 0XD1;            /* P5 Direction register                  */

sfr P0PU        = 0xAC;            /* P0 Pull-Up  register                   */
sfr P1PU        = 0xAD;            /* P1 Pull-Up  register                   */
sfr P2PU        = 0xAE;            /* P2 Pull-Up  register                   */
sfr P3PU        = 0xAF;            /* P3 Pull-Up  register                   */
sfr P4PU        = 0xA3;            /* P4 Pull-Up  register                   */
sfr P5PU        = 0x95;            /* P5 Pull-Up  register                   */

sfr P0OD        = 0x91;            /* P0 Open drain selection register       */
sfr P1OD        = 0x92;            /* P1 Open drain selection register       */
sfr P2OD        = 0x93;            /* P2 Open drain selection register       */
sfr P4OD        = 0x94;            /* P4 Open drain selection register       */

sfr P0FSRL      = 0xD2;            /* P0 Port function selection low reg.    */
sfr P0FSRH      = 0xD3;            /* P0 Port function selection high reg.   */
sfr P1FSRL      = 0xD4;            /* P1 Port function selection low reg.    */
sfr P1FSRH      = 0xD5;            /* P1 Port function selection high reg.   */
sfr P2FSRL      = 0xD6;            /* P2 Port function selection low reg.    */
sfr P2FSRH      = 0xD7;            /* P2 Port function selection high reg.   */
sfr P3FSR       = 0xEE;            /* P3 Port function selection register    */
sfr P4FSR       = 0xEF;            /* P4 Port function selection register    */
sfr P5FSR       = 0xFF;            /* P5 Port function selection register    */

/* SYSTEM CONFIG  */
sfr LVICR       = 0x86;            /* Low voltage indicator register         */
sfr LVRCR       = 0xD8;            /* Low voltage reset register             */
sfr PCON        = 0x87;            /* Power control register                 */
sfr BITCR       = 0x8B;            /* BIT clock control register             */
sfr BITCNT      = 0x8C;            /* Basic interval timer register          */
sfr EO          = 0xA2;            /* Extended operation register            */

/* WDT  */
sfr WDTCR       = 0x8D;            /* Watch dog timer control register       */
sfr WDTCNT      = 0x8E;            /* Watch dog timer counter register       */
sfr WDTDR       = 0x8E;            /* Watch dog timer data register          */

/* WT */
sfr WTCNT       = 0x89;            /* Watch timer counter register           */
sfr WTDR        = 0x89;            /* Watch timer data register              */
sfr WTCR        = 0x96;            /* Watch timer control register           */

/* BUZZER */
sfr BUZDR       = 0x8F;            /* Buzzer data register                   */
sfr BUZCR       = 0x97;            /* Buzzer control register                */

/* LCD Driver */
sfr LCDCRL      = 0x99;            /* LCD driver control low register        */
sfr LCDCRH      = 0x9A;            /* LCD driver control high register       */
sfr LCDCCR      = 0x9B;            /* LCD contrast control register          */

/* ADC */
sfr ADCCRL      = 0x9C;            /* A/D converter result low register      */
sfr ADCCRH      = 0x9D;            /* A/D converter result high register     */
sfr ADCDRL      = 0x9E;            /* A/D converter data low register        */
sfr ADCDRH      = 0x9F;            /* A/D converter data high register       */

/* INTERRUPT CONTROL */
sfr IE          = 0xA8;            /* Interrupt enable register              */
sfr IE1         = 0xA9;            /* Interrupt enable register 1            */
sfr IE2         = 0xAA;            /* Interrupt enable register 2            */
sfr IE3         = 0xAB;            /* Interrupt enable register 3            */
sfr IP          = 0xB8;            /* Interrupt priority register            */
sfr IP1         = 0xF8;            /* Interrupt priority register 1          */
sfr EIFLAG0     = 0xC0;            /* External interrupt 0 flag register     */
sfr EIPOL0L     = 0xA4;            /* External interrupt polarity 0 low reg. */
sfr EIPOL0H     = 0xA5;            /* External interrupt polarity 0 high reg.*/
sfr EIFLAG1     = 0xA6;            /* External interrupt 1 flag register     */
sfr EIPOL1      = 0xA7;            /* External interrupt polarity 1 low reg. */

/* SPI */
sfr SPICR       = 0xB5;            /* SPI control register                   */
sfr SPIDR       = 0xB6;            /* SPI data register                      */
sfr SPISR       = 0xB7;            /* SPI status register                    */

/* Timer 0 */
sfr T0CR        = 0xB2;            /* Timer 0 control register               */
sfr T0CNT       = 0xB3;            /* Timer 0 counter register               */
sfr T0DR        = 0xB4;            /* Timer 0 data register                  */
sfr T0CDR       = 0xB4;            /* Timer 0 capture data register          */

/* Timer 1 */
sfr T1CRL       = 0xBA;            /* Timer 1 control low register           */
sfr T1CRH       = 0xBB;            /* Timer 1 control high register          */
sfr T1ADRL      = 0xBC;            /* Timer 1 A data low register            */
sfr T1ADRH      = 0xBD;            /* Timer 1 A data high register           */
sfr T1BDRL      = 0xBE;            /* Timer 1 B data low register            */
sfr T1BDRH      = 0xBF;            /* Timer 1 B data high register           */

/* Timer 2 */
sfr T2CRL       = 0xC2;            /* Timer 2 control low register           */
sfr T2CRH       = 0xC3;            /* Timer 2 control high register          */
sfr T2ADRL      = 0xC4;            /* Timer 2 A data low register            */
sfr T2ADRH      = 0xC5;            /* Timer 2 A data high register           */
sfr T2BDRL      = 0xC6;            /* Timer 2 B data low register            */
sfr T2BDRH      = 0xC7;            /* Timer 2 B data high register           */

/* UART 0 SPI I2C Control */
sfr USI0CR1     = 0xD9;            /* USI0 control register 1                */
sfr USI0CR2     = 0xDA;            /* USI0 control register 2                */
sfr USI0CR3     = 0xDB;            /* USI0 control register 3                */
sfr USI0CR4     = 0xDC;            /* USI0 control register 4                */
sfr USI0SAR     = 0xDD;            /* USI0 slave address register            */

/* UART 0 SPI I2C Status */
sfr USI0ST1     = 0xE1;            /* USI0 status register 1                 */
sfr USI0ST2     = 0xE2;            /* USI0 status register 2                 */
sfr USI0BD      = 0xE3;            /* USI0 baud rate generation register     */
sfr USI0SHDR    = 0xE4;            /* USI0 SDA hold time register            */
sfr USI0DR      = 0xE5;            /* USI0 data register                     */
sfr USI0SCLR    = 0xE6;            /* USI0 SCL low period register           */
sfr USI0SCHR    = 0xE7;            /* USI0 SCL high period register          */

/* UART 1 SPI I2C Control */
sfr USI1CR1     = 0xE9;            /* USI1 control register 1                */
sfr USI1CR2     = 0xEA;            /* USI1 control register 2                */
sfr USI1CR3     = 0xEB;            /* USI1 control register 3                */
sfr USI1CR4     = 0xEC;            /* USI1 control register 4                */
sfr USI1SAR     = 0xED;            /* USI1 slave address register            */

/* UART 1 SPI I2C Status */
sfr USI1ST1     = 0xF1;            /* USI1 status register 1                 */
sfr USI1ST2     = 0xF2;            /* USI1 status register 2                 */
sfr USI1BD      = 0xF3;            /* USI1 baud rate generation register     */
sfr USI1SHDR    = 0xF4;            /* USI1 SDA hold register                 */
sfr USI1DR      = 0xF5;            /* USI1 data register                     */
sfr USI1SCLR    = 0xF6;            /* USI1 SCL low period register           */
sfr USI1SCHR    = 0xF7;            /* USI1 SCL high period register          */

/* Flash */
sfr FSADRH      = 0xFA;            /* Flash sector address high register     */
sfr FSADRM      = 0xFB;            /* Flash sector address middle register   */
sfr FSADRL      = 0xFC;            /* Flash sector address low register      */
sfr FIDR        = 0xFD;            /* Flash identification register          */
sfr FMCR        = 0xFE;            /* Flash mode control register            */

/* Debounce */
sfr P0DB        = 0xDE;            /* P0 Debounce enable register            */
sfr P15DB       = 0xDF;            /* P1 and P5 Debounce enable register     */

/* Reset */
sfr RSTFR       = 0xE8;            /* Reset flag register                    */

/* Clock Generator */
sfr SCCR        = 0x8A;            /* System and clock control register      */
sfr OSCCR       = 0xC8;            /* Oscillator Control Register            */

/* SFR in XDATA address area */
/* Timer 3 */
#define T3CR      (*((unsigned char volatile xdata*)0x1000))    /* Timer 3 control register               */
#define T3CNT     (*((unsigned char volatile xdata*)0x1001))    /* Timer 3 counter register               */
#define T3DR      (*((unsigned char volatile xdata*)0x1001))    /* Timer 3 data register                  */
#define T3CAPR    (*((unsigned char volatile xdata*)0x1001))    /* Timer 3 capture data register          */

/* Timer 4 */
#define T4CR      (*((unsigned char volatile xdata*)0x1002))    /* Timer 4 control register               */
#define T4PCR1    (*((unsigned char volatile xdata*)0x1003))    /* Timer 4 PWM control register 1         */
#define T4PCR2    (*((unsigned char volatile xdata*)0x1004))    /* Timer 4 PWM control register 2         */
#define T4PCR3    (*((unsigned char volatile xdata*)0x1005))    /* Timer 4 PWM control register 3         */
#define T4ISR     (*((unsigned char volatile xdata*)0x1006))    /* Timer 4 interrupt status register      */
#define T4MSK     (*((unsigned char volatile xdata*)0x1007))    /* Timer 4 interrupt mask register        */
#define T4PPRL    (*((unsigned char volatile xdata*)0x1008))    /* Timer 4 PWM period low register        */
#define T4PPRH    (*((unsigned char volatile xdata*)0x1009))    /* Timer 4 PWM period high register       */
#define T4ADRL    (*((unsigned char volatile xdata*)0x100A))    /* Timer 4 PWM A duty low register        */
#define T4ADRH    (*((unsigned char volatile xdata*)0x100B))    /* Timer 4 PWM A duty high register       */
#define T4BDRL    (*((unsigned char volatile xdata*)0x100C))    /* Timer 4 PWM B duty low register        */
#define T4BDRH    (*((unsigned char volatile xdata*)0x100D))    /* Timer 4 PWM B duty high register       */
#define T4CDRL    (*((unsigned char volatile xdata*)0x100E))    /* Timer 4 PWM C duty low register        */
#define T4CDRH    (*((unsigned char volatile xdata*)0x100F))    /* Timer 4 PWM C duty high register       */
#define T4DLYA    (*((unsigned char volatile xdata*)0x1010))    /* Timer 4 PWM A delay register           */
#define T4DLYB    (*((unsigned char volatile xdata*)0x1011))    /* Timer 4 PWM B delay register           */
#define T4DLYC    (*((unsigned char volatile xdata*)0x1012))    /* Timer 4 PWM C delay register           */
#define T4DR      (*((unsigned char volatile xdata*)0x1013))    /* Timer 4 data register                  */
#define T4CAPR    (*((unsigned char volatile xdata*)0x1014))    /* Timer 4 capture data register          */
#define T4CNT     (*((unsigned char volatile xdata*)0x1015))    /* Timer 4 counter register               */

/* Bit Definitions */
/* P0 0x80 */
sbit P07      = P0^7;              /* Port 0 Bit 7                           */
sbit P06      = P0^6;              /* Port 0 Bit 6                           */
sbit P05      = P0^5;              /* Port 0 Bit 5                           */
sbit P04      = P0^4;              /* Port 0 Bit 4                           */
sbit P03      = P0^3;              /* Port 0 Bit 3                           */
sbit P02      = P0^2;              /* Port 0 Bit 2                           */
sbit P01      = P0^1;              /* Port 0 Bit 1                           */
sbit P00      = P0^0;              /* Port 0 Bit 0                           */

/* P1 0x88 */
sbit P17      = P1^7;              /* Port 1 Bit 7                           */
sbit P16      = P1^6;              /* Port 1 Bit 6                           */
sbit P15      = P1^5;              /* Port 1 Bit 5                           */
sbit P14      = P1^4;              /* Port 1 Bit 4                           */
sbit P13      = P1^3;              /* Port 1 Bit 3                           */
sbit P12      = P1^2;              /* Port 1 Bit 2                           */
sbit P11      = P1^1;              /* Port 1 Bit 1                           */
sbit P10      = P1^0;              /* Port 1 Bit 0                           */

/* P2 0x90 */
sbit P27      = P2^7;              /* Port 2 Bit 7                           */
sbit P26      = P2^6;              /* Port 2 Bit 6                           */
sbit P25      = P2^5;              /* Port 2 Bit 5                           */
sbit P24      = P2^4;              /* Port 2 Bit 4                           */
sbit P23      = P2^3;              /* Port 2 Bit 3                           */
sbit P22      = P2^2;              /* Port 2 Bit 2                           */
sbit P21      = P2^1;              /* Port 2 Bit 1                           */
sbit P20      = P2^0;              /* Port 2 Bit 0                           */

/* P3 0x98 */
sbit P37      = P3^7;              /* Port 3 Bit 7                           */
sbit P36      = P3^6;              /* Port 3 Bit 6                           */
sbit P35      = P3^5;              /* Port 3 Bit 5                           */
sbit P34      = P3^4;              /* Port 3 Bit 4                           */
sbit P33      = P3^3;              /* Port 3 Bit 3                           */
sbit P32      = P3^2;              /* Port 3 Bit 2                           */
sbit P31      = P3^1;              /* Port 3 Bit 1                           */
sbit P30      = P3^0;              /* Port 3 Bit 0                           */

/* P4 0xA0 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
                                   /* Bit 5 not available                    */
                                   /* Bit 4 not available                    */
sbit P43      = P4^3;              /* Port 4 Bit 3                           */
sbit P42      = P4^2;              /* Port 4 Bit 2                           */
sbit P41      = P4^1;              /* Port 4 Bit 1                           */
sbit P40      = P4^0;              /* Port 4 Bit 0                           */

/* P5 0xB0 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
                                   /* Bit 5 not available                    */
                                   /* Bit 4 not available                    */
sbit P53      = P4^3;              /* Port 5 Bit 3                           */
sbit P52      = P4^2;              /* Port 5 Bit 2                           */
sbit P51      = P4^1;              /* Port 5 Bit 1                           */
sbit P50      = P4^0;              /* Port 5 Bit 0                           */

/* IE Interrupt enable 0xA8 */
sbit EA       = IE^7;              /* Enable all interrupts                  */
                                   /* Bit 6 not available                    */
sbit INT5E    = IE^5;              /* Enable or disable external INT 0~7     */
sbit INT4E    = IE^4;              /* Enable or Disable USI1 Tx Interrupt    */
sbit INT3E    = IE^3;              /* Enable or Disable USI1 Rx Interrupt    */
sbit INT2E    = IE^2;              /* Enable or Disable USI1 I2C Interrupt   */
sbit INT1E    = IE^1;              /* Enable or disable external INT 11      */
sbit INT0E    = IE^0;              /* Enable or disable external INT 10      */

/* IP Interrupt priority register 0xB8 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IP05     = IP^5;              /* Interrupt group priority bit 5         */
sbit IP04     = IP^4;              /* Interrupt group priority bit 4         */
sbit IP03     = IP^3;              /* Interrupt group priority bit 3         */
sbit IP02     = IP^2;              /* Interrupt group priority bit 2         */
sbit IP01     = IP^1;              /* Interrupt group priority bit 1         */
sbit IP00     = IP^0;              /* Interrupt group priority bit 0         */


/* IP1 Interrupt priority register 0xF8 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IP15     = IP1^5;             /* Interrupt priority bit 15              */
sbit IP14     = IP1^4;             /* Interrupt priority bit 14              */
sbit IP13     = IP1^3;             /* Interrupt priority bit 13              */
sbit IP12     = IP1^2;             /* Interrupt priority bit 12              */
sbit IP11     = IP1^1;             /* Interrupt priority bit 11              */
sbit IP10     = IP1^0;             /* Interrupt priority bit 10              */



/* External interrupt flag register 0xC0 */
sbit FLAG7    = EIFLAG0^7;         /* External interrupt flag bit 7          */
sbit FLAG6    = EIFLAG0^6;         /* External interrupt flag bit 6          */
sbit FLAG5    = EIFLAG0^5;         /* External interrupt flag bit 5          */
sbit FLAG4    = EIFLAG0^4;         /* External interrupt flag bit 4          */
sbit FLAG3    = EIFLAG0^3;         /* External interrupt flag bit 3          */
sbit FLAG2    = EIFLAG0^2;         /* External interrupt flag bit 2          */
sbit FLAG1    = EIFLAG0^1;         /* External interrupt flag bit 1          */
sbit FLAG0    = EIFLAG0^0;         /* External interrupt flag bit 0          */

/* Oscillator Control Register 0xC8 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IRCS2    = OSCCR^5;           /* Internal RC OSC post-divider selection */
sbit IRCS1    = OSCCR^4;           /* Internal RC OSC post-divider selection */
sbit IRCS0    = OSCCR^3;           /* Internal RC OSC post-divider selection */
sbit IRCE     = OSCCR^2;           /* Enable\disable internal RC-OSC         */
sbit XCLKE    = OSCCR^1;           /* Enable\disable external X-TAL          */
sbit SCLKE    = OSCCR^0;           /* Enable\disable external SX-TAL         */

/* Oscillator Control Register 0xE8 */
sbit PORF     = RSTFR^7;           /* Power-On reset flag bit.               */
sbit EXTRF    = RSTFR^6;           /* External reset (RESETB) flag bit.      */
sbit WDTRF    = RSTFR^5;           /* Watch dog reset flag bit.              */
sbit OCDRF    = RSTFR^4;           /* On-Chip debug reset flag               */
sbit LVRF     = RSTFR^3;           /* Low voltage reset flag                 */
                                   /* Bit 2 not available                    */
                                   /* Bit 1 not available                    */
                                   /* Bit 0 not available                    */

/* Interrupt number definitions */
#define EXT10_VECT           0     /* External Interrupt 10                  */
#define EXT11_VECT           1     /* External Interrupt 11                  */
#define USI1_I2C_VECT        2     /* USI1 I2C Interrupt                     */
#define USI1_RX_VECT         3     /* USI1 Rx Interrupt                      */
#define USI1_TX_VECT         4     /* USI1 Tx Interrupt                      */
#define EXT_0_7_VECT         5     /* External Interrupt 0 - 7               */
#define EXT8_VECT            6     /* External Interrupt 8                   */
#define USI0_I2C_VECT        8     /* USI0 I2C Interrupt                     */
#define USI0_RX_VECT         9     /* USI0 Rx Interrupt                      */
#define USI0_TX_VECT         10    /* USI0 Tx Interrupt                      */
#define EXT12_VECT           11    /* External Interrupt 12                  */
#define T0_OV_VECT           12    /* Timer 0 Overflow Interrupt             */
#define T0_MATCH_VECT        13    /* Timer 0 Match Interrupt                */
#define T1_MATCH_VECT        14    /* Timer 1 Match Interrupt                */
#define T2_MATCH_VECT        15    /* Timer 2 Match Interrupt                */
#define T3_MATCH_VECT        16    /* Timer 3 Match Interrupt                */
#define T4_VECT              17    /* Timer 4 Interrupt                      */
#define ADC_VECT             18    /* ADC Interrupt                          */
#define SPI2_VECT            19    /* SPI 2 Interrupt                        */
#define WT_VECT              20    /* Watch Timer Interrupt                  */
#define WDT_VECT             21    /* Watchdog Timer Interrupt               */
#define BIT_VECT             22    /* Basic Interval Timer Interrupt         */

#endif                                /*         __Z51F3220_H__              */
