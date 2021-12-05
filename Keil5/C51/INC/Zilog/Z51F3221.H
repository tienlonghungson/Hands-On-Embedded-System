/*-----------------------------------------------------------------------------
  Z51F3221.H

Header file for Zilog Z51F3221x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __Z51F3221_H__
#define __Z51F3221_H__

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
sfr P5          = 0xB0;            /* Port 5 data register                   */
sfr P6          = 0xC0;            /* Port 6 data register                   */
sfr P7          = 0xC8;            /* Port 7 data register                   */
sfr P8          = 0xD8;            /* Port 8 data register                   */

sfr P0IO        = 0x89;            /* P0 Direction register                  */
sfr P1IO        = 0x91;            /* P1 Direction register                  */
sfr P2IO        = 0x99;            /* P2 Direction register                  */
sfr P3IO        = 0xA1;            /* P3 Direction register                  */
sfr P4IO        = 0xB1;            /* P4 Direction register                  */
sfr P5IO        = 0xB9;            /* P5 Direction register                  */
sfr P6IO        = 0xC1;            /* P6 Direction register                  */
sfr P7IO        = 0xC9;            /* P7 Direction register                  */
sfr P8IO        = 0xD1;            /* P8 Direction register                  */

sfr P0PU        = 0xD4;            /* P0 Pull-Up  register                   */
sfr P1PU        = 0xD5;            /* P1 Pull-Up  register                   */
sfr P2PU        = 0xD6;            /* P2 Pull-Up  register                   */
sfr P3PU        = 0xD7;            /* P3 Pull-Up  register                   */
sfr P4PU        = 0xDA;            /* P4 Pull-Up  register                   */
sfr P5PU        = 0xDB;            /* P5 Pull-Up  register                   */
sfr P6PU        = 0xDC;            /* P6 Pull-Up  register                   */
sfr P7PU        = 0xDD;            /* P7 Pull-Up  register                   */
sfr P8PU        = 0xDE;            /* P8 Pull-Up  register                   */

sfr P0OD        = 0x92;            /* P0 Open drain selection register       */
sfr P1OD        = 0x93;            /* P1 Open drain selection register       */
sfr P2OD        = 0x94;            /* P2 Open drain selection register       */
sfr P3OD        = 0x95;            /* P3 Open drain selection register       */
sfr P4OD        = 0x96;            /* P4 Open drain selection register       */
sfr P5OD        = 0xA7;            /* P5 Open drain selection register       */
sfr P6OD        = 0xBB;            /* P6 Open drain selection register       */
sfr P7OD        = 0xCF;            /* P7 Open drain selection register       */
sfr P8OD        = 0xD2;            /* P8 Open drain selection register       */

sfr P0FSR       = 0xED;            /* P0 Port function selection register    */
sfr P1FSR       = 0xEE;            /* P1 Port function selection register    */
sfr P2FSR       = 0xEF;            /* P2 Port function selection register    */
sfr P3FSR       = 0xF1;            /* P3 Port function selection register    */
sfr P4FSR       = 0xF2;            /* P4 Port function selection register    */
sfr P5FSR       = 0xF3;            /* P5 Port function selection register    */
sfr P6FSR       = 0xF4;            /* P6 Port function selection register    */
sfr P7FSR       = 0xF5;            /* P7 Port function selection register    */
sfr P8FSR       = 0xF6;            /* P8 Port function selection register    */

sfr P9CDR       = 0xE8;            /* P9 Control and data register           */
sfr P0DB        = 0xE9;            /* P0 debounce register                   */
sfr P1DB        = 0xEA;            /* P1 debounce register                   */

/* SYSTEM CONFIG  */
sfr LVICR       = 0xE1;            /* Low voltage indicator register         */
sfr LVRCR       = 0xF8;            /* Low voltage reset register             */
sfr PCON        = 0x87;            /* Power control register                 */
sfr SCCR        = 0x8A;            /* System and clock control register      */
sfr BITCR       = 0x8B;            /* BIT clock control register             */
sfr BITCNT      = 0x8C;            /* Basic interval timer register          */
sfr EO          = 0xA2;            /* Extended operation register            */

/* WDT  */
sfr WDTCR       = 0x8D;            /* Watch dog timer control register       */
sfr WDTCNT      = 0x8E;            /* Watch dog timer counter register       */
sfr WDTDR       = 0x8E;            /* Watch dog timer data register          */

/* WT */
sfr WTCNT       = 0x9F;            /* Watch timer counter register           */
sfr WTDR        = 0x9F;            /* Watch timer data register              */
sfr WTCR        = 0x9E;            /* Watch timer control register           */

/* BUZZER */
sfr BUZDR       = 0x8F;            /* Buzzer data register                   */
sfr BUZCR       = 0x97;            /* Buzzer control register                */

/* LCD Driver */
sfr LCDCRL      = 0xEB;            /* LCD driver control low register        */
sfr LCDCRH      = 0xEC;            /* LCD driver control high register       */

/* ADC */
sfr ADCCRL      = 0x9A;            /* A/D converter result low register      */
sfr ADCCRH      = 0x9D;            /* A/D converter result high register     */
sfr ADCDRL      = 0x9B;            /* A/D converter data low register        */
sfr ADCDRH      = 0x9C;            /* A/D converter data high register       */

/* INTERRUPT CONTROL */
sfr IE          = 0xA8;            /* Interrupt enable register              */
sfr IE1         = 0xA9;            /* Interrupt enable register 1            */
sfr IE2         = 0xAA;            /* Interrupt enable register 2            */
sfr IE3         = 0xAB;            /* Interrupt enable register 3            */
sfr IP          = 0xB8;            /* Interrupt priority register            */
sfr IP1         = 0xF8;            /* Interrupt priority register 1          */
sfr EIFLAG0     = 0xAD;            /* External interrupt 0 flag register     */
sfr EIFLAG1     = 0xA4;            /* External interrupt 1 flag register     */
sfr EIPOL0      = 0xA7;            /* External interrupt polarity 0 low reg. */
sfr EIPOL1      = 0xA6;            /* External interrupt polarity 1 low reg. */
sfr EIENAB0     = 0xAC;            /* External interrupt 0 enable register   */
sfr EIENAB1     = 0xA3;            /* External interrupt 1 enable register   */
sfr EIEDGE0     = 0xAE;            /* External interrupt 0 edge register     */
sfr EIEDGE1     = 0xA5;            /* External interrupt 1 edge register     */

/* SIO */
sfr SIOCR       = 0xB5;            /* SIO control register                   */
sfr SIODR       = 0xB6;            /* SIO data register                      */
sfr SIOPS       = 0xB7;            /* SIO prescaler register                 */

/* Timer 0 */
sfr T0CR        = 0xB2;            /* Timer 0 control register               */
sfr T0CNT       = 0xB3;            /* Timer 0 counter register               */
sfr T0DR        = 0xB4;            /* Timer 0 data register                  */
sfr T0CDR       = 0xB4;            /* Timer 0 capture data register          */

/* Timer 1 */
sfr T1CR        = 0xCA;            /* Timer 1 control register               */
sfr T1CNT       = 0xCB;            /* Timer 1 counter register               */
sfr T1DRL       = 0xCC;            /* Timer 1 data low register              */
sfr T1DRH       = 0xCD;            /* Timer 1 data high register             */

/* Timer 2 */
sfr T2CR        = 0xBA;            /* Timer 2 control register               */
sfr T2CNTL      = 0xBC;            /* Timer 2 counter low register           */
sfr T2CNTH      = 0xBD;            /* Timer 2 counter high register          */
sfr T2DRL       = 0xBE;            /* Timer 2 data low register              */
sfr T2DRH       = 0xBF;            /* Timer 2 data high register             */

/* Timer 3 */
sfr T3CR        = 0xC2;            /* Timer 3 control register               */
sfr T3CNTL      = 0xC4;            /* Timer 3 counter low register           */
sfr T3CNTH      = 0xC5;            /* Timer 3 counter high register          */
sfr T3DRL       = 0xC6;            /* Timer 3 data low register              */
sfr T3CDRL      = 0xC6;            /* Timer 3 capture data low register      */
sfr T3DRH       = 0xC7;            /* Timer 3 data high register             */
sfr T3CDRH      = 0xC7;            /* Timer 3 capture data high register     */

/* UART Control */
sfr UARTCR1     = 0xEA;            /* UART control register 1                */
sfr UARTCR2     = 0xEB;            /* UART control register 2                */
sfr UARTCR3     = 0xEC;            /* UART control register 3                */

/* UART Status */
sfr UARTST      = 0xE5;            /* UART status register                   */
sfr UARTBD      = 0xE6;            /* UART baud rate generation register     */
sfr UARTDR      = 0xE7;            /* UART data register                     */

/* Reset */
sfr RSTFR       = 0x86;            /* Reset flag register                    */

/* Flash */
sfr FSADRH      = 0xFA;            /* Flash sector address high register     */
sfr FSADRM      = 0xFB;            /* Flash sector address middle register   */
sfr FSADRL      = 0xFC;            /* Flash sector address low register      */
sfr FIDR        = 0xFD;            /* Flash identification register          */
sfr FMCR        = 0xFE;            /* Flash mode control register            */

/* Other */
sfr TIFR        = 0xC3;            /* Timer interrupt flag register          */
sfr CARCR       = 0xCE;            /* Carrier control register               */
sfr OSCCR       = 0xD9;            /* Oscillator control register            */


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
                                   /* Bit 7 not available                    */
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
                                   /* Bit 7 not available                    */
sbit P36      = P3^6;              /* Port 3 Bit 6                           */
sbit P35      = P3^5;              /* Port 3 Bit 5                           */
sbit P34      = P3^4;              /* Port 3 Bit 4                           */
sbit P33      = P3^3;              /* Port 3 Bit 3                           */
sbit P32      = P3^2;              /* Port 3 Bit 2                           */
sbit P31      = P3^1;              /* Port 3 Bit 1                           */
sbit P30      = P3^0;              /* Port 3 Bit 0                           */

/* P4 0xA0 */
sbit P47      = P4^7;              /* Port 4 Bit 7                           */
sbit P46      = P4^6;              /* Port 4 Bit 6                           */
sbit P45      = P4^5;              /* Port 4 Bit 5                           */
sbit P44      = P4^4;              /* Port 4 Bit 4                           */
sbit P43      = P4^3;              /* Port 4 Bit 3                           */
sbit P42      = P4^2;              /* Port 4 Bit 2                           */
sbit P41      = P4^1;              /* Port 4 Bit 1                           */
sbit P40      = P4^0;              /* Port 4 Bit 0                           */

/* P5 0xB0 */
sbit P57      = P5^7;              /* Port 5 Bit 7                           */
sbit P56      = P5^6;              /* Port 5 Bit 6                           */
sbit P55      = P5^5;              /* Port 5 Bit 5                           */
sbit P54      = P5^4;              /* Port 5 Bit 4                           */
sbit P53      = P5^3;              /* Port 5 Bit 3                           */
sbit P52      = P5^2;              /* Port 5 Bit 2                           */
sbit P51      = P5^1;              /* Port 5 Bit 1                           */
sbit P50      = P5^0;              /* Port 5 Bit 0                           */

/* P6 0xC0 */
sbit P67      = P6^7;              /* Port 6 Bit 7                           */
sbit P66      = P6^6;              /* Port 6 Bit 6                           */
sbit P65      = P6^5;              /* Port 6 Bit 5                           */
sbit P64      = P6^4;              /* Port 6 Bit 4                           */
sbit P63      = P6^3;              /* Port 6 Bit 3                           */
sbit P62      = P6^2;              /* Port 6 Bit 2                           */
sbit P61      = P6^1;              /* Port 6 Bit 1                           */
sbit P60      = P6^0;              /* Port 6 Bit 0                           */

/* P7 0xC8 */
sbit P77      = P7^7;              /* Port 7 Bit 7                           */
sbit P76      = P7^6;              /* Port 7 Bit 6                           */
sbit P75      = P7^5;              /* Port 7 Bit 5                           */
sbit P74      = P7^4;              /* Port 7 Bit 4                           */
sbit P73      = P7^3;              /* Port 7 Bit 3                           */
sbit P72      = P7^2;              /* Port 7 Bit 2                           */
sbit P71      = P7^1;              /* Port 7 Bit 1                           */
sbit P70      = P7^0;              /* Port 7 Bit 0                           */

/* P8 0xD8 */
sbit P87      = P8^7;              /* Port 8 Bit 7                           */
sbit P86      = P8^6;              /* Port 8 Bit 6                           */
sbit P85      = P8^5;              /* Port 8 Bit 5                           */
sbit P84      = P8^4;              /* Port 8 Bit 4                           */
sbit P83      = P8^3;              /* Port 8 Bit 3                           */
sbit P82      = P8^2;              /* Port 8 Bit 2                           */
sbit P81      = P8^1;              /* Port 8 Bit 1                           */
sbit P80      = P8^0;              /* Port 8 Bit 0                           */

/* IE Interrupt enable 0xA8 */
sbit EA       = IE^7;              /* Enable all interrupts                  */
                                   /* Bit 6 not available                    */
sbit INT5E    = IE^5;              /* Enable or disable external INT 0~7     */
                                   /* Bit 4 not available                    */
                                   /* Bit 3 not available                    */
sbit INT2E    = IE^2;              /* Enable or Disable USI1 I2C Interrupt   */
sbit INT1E    = IE^1;              /* Enable or disable external INT 11      */
                                   /* Bit 0 not available                    */

/* IP Interrupt priority register 0xB8 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IP05     = IP^5;              /* Interrupt group priority bit 5         */
sbit IP04     = IP^4;              /* Interrupt group priority bit 4         */
sbit IP03     = IP^3;              /* Interrupt group priority bit 3         */
sbit IP02     = IP^2;              /* Interrupt group priority bit 2         */
sbit IP01     = IP^1;              /* Interrupt group priority bit 1         */
sbit IP00     = IP^0;              /* Interrupt group priority bit 0         */

/* P9CDR P9 Control data register 0xE8 */
sbit PFSR90   = P9CDR^7;           /* EINT10 position select                 */
                                   /* Bit 6 not available                    */
                                   /* Bit 5 not available                    */
                                   /* Bit 4 not available                    */								   
sbit P92OD    = P9CDR^3;           /* Configure open-drain of P9 port        */
sbit P92PU    = P9CDR^2;           /* Configure pull-up resistor of P9 port  */
sbit P92IO    = P9CDR^1;           /* P9 data I/O direction                  */
sbit P92      = P9CDR^0;           /* I/O data                               */
								   
/* IP1 Interrupt priority register 0xF8 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IP15     = IP1^5;             /* Interrupt priority bit 15              */
sbit IP14     = IP1^4;             /* Interrupt priority bit 14              */
sbit IP13     = IP1^3;             /* Interrupt priority bit 13              */
sbit IP12     = IP1^2;             /* Interrupt priority bit 12              */
sbit IP11     = IP1^1;             /* Interrupt priority bit 11              */
sbit IP10     = IP1^0;             /* Interrupt priority bit 10              */

/* Interrupt number definitions */
#define HWRST_VECT           0     /* Hardware reset                         */
                                   /* Interrupt source 1 is reserved         */
#define EXT10_VECT           2     /* External Interrupt 10                  */
#define EXT13_VECT           3     /* External Interrupt 13                  */
                                   /* Interrupt source 4 is reserved         */
                                   /* Interrupt source 5 is reserved         */
#define EXT07_VECT           6     /* External Interrupt 0-7                 */
                                   /* Interrupt source 7 is reserved         */
                                   /* Interrupt source 8 is reserved         */
                                   /* Interrupt source 9 is reserved         */
#define UART_RX_VECT         10    /* UART Rx Interrupt                      */
#define UART_TX_VECT         11    /* UART Tx Interrupt                      */
#define SIO_VECT             12    /* SIO Interrupt                          */
#define T0_OVER_VECT         13    /* T0 Overflow Interrupt                  */
#define T0_MATCH_VECT        14    /* T0 Match Interrupt                     */
#define T1_MATCH_VECT        15    /* T1 Match Interrupt                     */
#define T2_MATCH_VECT        16    /* T2 Match Interrupt                     */
#define T3_MATCH_VECT        17    /* T3 Match Interrupt                     */
#define T3_OVER_VECT         18    /* T3 Overflow Interrupt                  */
#define ADC_VECT             19    /* ADC Interrupt                          */
                                   /* Interrupt source 20 is reserved        */
#define WT_VECT              21    /* Watch Timer Interrupt                  */
#define WDT_VECT             22    /* Watchdog Timer Interrupt               */
#define BIT_VECT             23    /* Basic Interval Timer Interrupt         */
                                   /* Interrupt source 24 is reserved        */

#endif                                /*         __Z51F3221_H__              */
