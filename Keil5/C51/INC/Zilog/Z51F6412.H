/*-----------------------------------------------------------------------------
  Z51F6412.H

Header file for Zilog Z51F6412x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __Z51F6412_H__
#define __Z51F6412_H__

/* Byte Registers */
/* SFRs all pages */
sfr SP          = 0x81;            /* Stackpointer                           */
sfr DPL         = 0x82;            /* Data pointer low byte                  */
sfr DPH         = 0x83;            /* Data pointer high byte                 */
sfr DPL1        = 0x84;            /* Data pointer low byte 1                */
sfr DPH1        = 0x85;            /* Data pointer high byte 1               */
sfr EO          = 0xA2;            /* Extended operation register            */
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

sfr P0IO        = 0x89;            /* P0 direction register                  */
sfr P1IO        = 0x91;            /* P1 direction register                  */
sfr P2IO        = 0x99;            /* P2 direction register                  */
sfr P3IO        = 0xA1;            /* P3 direction register                  */
sfr P4IO        = 0xB1;            /* P4 direction register                  */
sfr P5IO        = 0xB9;            /* P5 direction register                  */
sfr P6IO        = 0xC1;            /* P6 direction register                  */
sfr P7IO        = 0xC9;            /* P7 direction register                  */
sfr P8IO        = 0xD1;            /* P8 direction register                  */

/* USART 0 */
sfr UCTRL01     = 0xE2;            /* USART control 1 register 0             */
sfr UCTRL02     = 0xE3;            /* USART control 2 register 0             */
sfr UCTRL03     = 0xE4;            /* USART control 3 register 0             */
sfr USTAT0      = 0xE5;            /* USART status register 0                */
sfr UBAUD0      = 0xE6;            /* USART baud rate generation register 0  */
sfr UDATA0      = 0xE7;            /* USART data register 0                  */

/* USART 1 */
sfr UCTRL11     = 0xFA;            /* USART control 1 register 1             */
sfr UCTRL12     = 0xFB;            /* USART control 1 register 2             */
sfr UCTRL13     = 0xFC;            /* USART control 1 register 3             */
sfr USTAT1      = 0xFD;            /* USART status register 1                */
sfr UBAUD1      = 0xFE;            /* USART baud rate generation register 1  */
sfr UDATA1      = 0xFF;            /* USART data register 1                  */

/* SYSTEM CONFIG  */
sfr BODR        = 0x86;            /* BOD control register                   */
sfr PCON        = 0x87;            /* Power control register                 */
sfr SCCR        = 0x8A;            /* System and clock control register      */
sfr BCCR        = 0x8B;            /* BIT clock control register             */
sfr BITR        = 0x8C;            /* Basic interval timer register          */

/* WDT  */
sfr WDTR        = 0x8E;            /* Watch dog timer register               */
sfr WDTCR       = 0x8E;            /* Watch dog timer conter register        */
sfr WDTMR       = 0x8D;            /* Watch dog timer mode register          */

/* WT */
sfr WTR         = 0x9E;            /* Watch timer register                   */
sfr WTCR        = 0x9E;            /* Watch timer mode register              */
sfr WTMR        = 0x9D;            /* Watch timer counter register           */

/* BUZZER */
sfr BUZDR       = 0x8F;            /* Buzzer data register                   */
sfr BUZCR       = 0x9F;            /* Buzzer control register                */

/* INTERRUPT CONTROL */
sfr IE          = 0xA8;            /* Interrupt enable register              */
sfr IE1         = 0xA9;            /* Interrupt enable register 1            */
sfr IE2         = 0xAA;            /* Interrupt enable register 2            */
sfr IE3         = 0xAB;            /* Interrupt enable register 3            */
sfr IE4         = 0xAC;            /* Interrupt enable register 4            */
sfr IE5         = 0xAD;            /* Interrupt enable register 5            */
sfr IP          = 0xB8;            /* Interrupt priority register            */
sfr IP1         = 0xF8;            /* Interrupt priority register 1          */
sfr EIENAB      = 0xA3;            /* External interrupt enable register     */
sfr EIFLAG      = 0xA4;            /* External interrupt flag register       */
sfr EIEDGE      = 0xA5;            /* External interrupt edge register       */
sfr EIPOLA      = 0xA6;            /* External interrupt polarity register   */
sfr EIBOTH      = 0xA7;            /* External interrupt both edge enable reg*/


/* TIMER 0 */
sfr T0CR        = 0xB2;            /* Timer 0 mode control register          */
sfr T0          = 0xB3;            /* Timer 0 register                       */
sfr T0DR        = 0xB3;            /* Timer 0 data register                  */
sfr CDR0        = 0xB3;            /* Capture 0 data register                */

/* TIMER 1 */
sfr T1CR        = 0xB4;            /* Timer 1 mode control register          */
sfr T1DR        = 0xB5;            /* Timer 1 data register                  */
sfr T1PPR       = 0xB5;            /* Timer 1 PWM Period Register            */
sfr T1          = 0xB6;            /* Timer 1 register                       */
sfr T1PDR       = 0xB6;            /* Timer 1 PWM duty register              */
sfr CDR1        = 0xB6;            /* Capture 1 Data Register                */
sfr T1PWHR      = 0xB7;            /* Timer 1 PWM high register              */

/* TIMER 2 */
sfr T2CR        = 0xBA;            /* Timer 2 mode control register          */
sfr T2CR1       = 0xBB;            /* Timer 2 mode control register 1        */
sfr T2L         = 0xBC;            /* Timer 2 low register                   */
sfr PWM2LDR     = 0xBC;            /* PWM 2 duty low register                */
sfr CDR2L       = 0xBC;            /* Timer 2 capture data low register      */
sfr T2H         = 0xBD;            /* Timer 2 high register                  */
sfr PWM2HDR     = 0xBD;            /* PWM 2 Duty High Register               */
sfr CDR2H       = 0xBD;            /* Timer 2 Capture Data High Register     */
sfr T2DRL       = 0xBE;            /* Timer 2 Data Register Low              */
sfr PWM2LPR     = 0xBE;            /* PWM 2 Period Low Register              */
sfr T2DRH       = 0xBF;            /* Timer 2 Data Register High             */
sfr PWM2HPR     = 0xBF;            /* PWM 2 Period High Data Register         */

/* TIMER 3 */
sfr T3CR        = 0xC2;            /* Timer 3 mode control register          */
sfr T3CR1       = 0xC3;            /* Timer 3 mode control register 1        */
sfr T3L         = 0xC4;            /* Timer 3 low register                   */
sfr PWM3LDR     = 0xC4;            /* PWM 3 duty low register                */
sfr CDR3L       = 0xC4;            /* Timer 3 capture data low register      */
sfr T3H         = 0xC5;            /* Timer 3 high register                  */
sfr PWM3HDR     = 0xC5;            /* PWM 3 duty high register               */
sfr CDR3H       = 0xC5;            /* Timer 3 capture data high register     */
sfr T3DRL       = 0xC6;            /* Timer 3 data register low              */
sfr PWM3LPR     = 0xC6;            /* PWM 3 period low register              */
sfr T3DRH       = 0xC7;            /* Timer 3 data register high             */
sfr PWM3HPR     = 0xC7;            /* PWM 3 period high data register        */

/* TIMER 4 */
sfr T4CR        = 0xCA;            /* Timer 4 mode control register          */
sfr T4CR1       = 0xCB;            /* Timer 4 mode control register 1        */
sfr T4L         = 0xCC;            /* Timer 4 low register                   */
sfr PWM4LDR     = 0xCC;            /* PWM 4 duty low register                */
sfr CDR4L       = 0xCC;            /* Timer 4 duty low register              */
sfr T4H         = 0xCD;            /* Timer 4 capture data low register      */
sfr PWM4HDR     = 0xCD;            /* PWM 4 duty low register                */
sfr CDR4H       = 0xCD;            /* Timer 4 Capture Data Low Register      */
sfr T4DRL       = 0xCE;            /* Timer 4 low data register              */
sfr PWM4LPR     = 0xCE;            /* PWM 4 period low register              */
sfr T4DRH       = 0xCF;            /* Timer 4 high data register             */
sfr PWM4HPR     = 0xCF;            /* PWM 4 period high register             */

/* SPI */
sfr SPICR0      = 0xD2;            /* SPI 0 control register                 */
sfr SPIDR0      = 0xD3;            /* SPI 0 data register                    */
sfr SPISR0      = 0xD4;            /* SPI 0 status register                  */
sfr SPICR1      = 0x92;            /* SPI 1 control register                 */
sfr SPIDR1      = 0x93;            /* SPI 1 data register                    */
sfr SPISR1      = 0xF1;            /* SPI 1 status register                  */

/* I2C */
sfr I2CMR       = 0xDA;            /* I2C mode control register              */
sfr I2CSR       = 0xDB;            /* I2C status register                    */
sfr I2CSCLLR    = 0xDC;            /* SCL low period register                */
sfr I2CSCLHR    = 0xDD;            /* SCL high period register               */
sfr I2CSDAHR    = 0xDE;            /* SDA hold time register                 */
sfr I2CDR       = 0xDF;            /* I2C data register                      */
sfr I2CSAR      = 0xD7;            /* I2C slave address register             */
sfr I2CSAR1     = 0xD6;            /* I2C slave address register 1           */

/* ADC  */
sfr ADCM        = 0x9A;            /* A/D converter mode register            */
sfr ADCM2       = 0x9B;            /* A/D converter mode 2 register          */
sfr ADCRH       = 0x9B;            /* A/D converter result low register      */
sfr ADCRL       = 0x9C;            /* A/D converter result low register      */

/* Flash and EEPROM Memory REGISTERS */
sfr FEMR        = 0xEA;            /* Flash and EEPROM mode register         */
sfr FECR        = 0xF6;            /* Flash and EEPROM control register      */
sfr FESR        = 0xEB;            /* Flash and EEPROM status register       */
sfr FETCR       = 0xEC;            /* Flash and EEPROM time control register */
sfr FEARL       = 0xF4;            /* Flash and EEPROM address low register  */
sfr FEARM       = 0xF3;            /* Flash and EEPROM address middle reg.   */
sfr FEARH       = 0xF2;            /* Flash and EEPROM address high register */
sfr FEDR        = 0xF5;            /* Flash and EEPROM data register         */

/* Calculator register */
sfr CAL_ADDR    = 0xEE;            /* Calculator address register            */
sfr CAL_DATA    = 0xEF;            /* Calculator data register               */
sfr CAL_CNTR    = 0xF7;            /* Calculator control register            */

/* Other */
sfr TMISR       = 0xD5;            /* Timer interrupt status register        */
sfr PLLCR       = 0xD9;            /* PLL control register                   */

/* Port change interrupt register */
sfr PCI0        = 0xAE;            /* Pin change interrupt enable register 0 */
sfr PCI7        = 0xAF;            /* Pin change interrupt enable register 7 */


/* SFR in XDATA address area */
#define P0PU (*((unsigned char volatile xdata*)0x2F00))         /* P0 Pull-up resistor selection register */
#define P1PU (*((unsigned char volatile xdata*)0x2F01))         /* P1 Pull-up resistor selection register */
#define P2PU (*((unsigned char volatile xdata*)0x2F02))         /* P2 Pull-up resistor selection register */
#define P3PU (*((unsigned char volatile xdata*)0x2F03))         /* P3 Pull-up resistor selection register */
#define P4PU (*((unsigned char volatile xdata*)0x2F04))         /* P4 Pull-up resistor selection register */
#define P5PU (*((unsigned char volatile xdata*)0x2F05))         /* P5 Pull-up resistor selection register */
#define P6PU (*((unsigned char volatile xdata*)0x2F06))         /* P6 Pull-up resistor selection register */
#define P7PU (*((unsigned char volatile xdata*)0x2F07))         /* P7 Pull-up resistor selection register */
#define P8PU (*((unsigned char volatile xdata*)0x2F08))         /* P8 Pull-up resistor selection register */

#define P0PD (*((unsigned char volatile xdata*)0x2F0C))         /* P0 Open-drain selection register       */
#define P1PD (*((unsigned char volatile xdata*)0x2F0D))         /* P1 Open-drain selection register       */
#define P2PD (*((unsigned char volatile xdata*)0x2F0E))         /* P2 Open-drain selection register       */
#define P3PD (*((unsigned char volatile xdata*)0x2F0F))         /* P3 Open-drain selection register       */
#define P4PD (*((unsigned char volatile xdata*)0x2F10))         /* P4 Open-drain selection register       */
#define P5PD (*((unsigned char volatile xdata*)0x2F11))         /* P5 Open-drain selection register       */
#define P6PD (*((unsigned char volatile xdata*)0x2F12))         /* P6 Open-drain selection register       */
#define P7PD (*((unsigned char volatile xdata*)0x2F13))         /* P7 Open-drain selection register       */
#define P8PD (*((unsigned char volatile xdata*)0x2F14))         /* P8 Open-drain selection register       */

#define P0DB (*((unsigned char volatile xdata*)0x2F18))         /* P0 Debounce enable register            */
#define P1DB (*((unsigned char volatile xdata*)0x2F19))         /* P1 Debounce enable register            */
#define P2DB (*((unsigned char volatile xdata*)0x2F1A))         /* P2 Debounce enable register            */
#define P3DB (*((unsigned char volatile xdata*)0x2F1B))         /* P3 Debounce enable register            */
#define P4DB (*((unsigned char volatile xdata*)0x2F1C))         /* P4 Debounce enable register            */
#define P5DB (*((unsigned char volatile xdata*)0x2F1D))         /* P5 Debounce enable register            */
#define P6DB (*((unsigned char volatile xdata*)0x2F1E))         /* P6 Debounce enable register            */
#define P7DB (*((unsigned char volatile xdata*)0x2F1F))         /* P7 Debounce enable register            */
#define P8DB (*((unsigned char volatile xdata*)0x2F20))         /* P8 Debounce enable register            */

#define UCTRL21 (*((unsigned char volatile xdata*)0x2F28))      /* USART 2 control register 1             */
#define UCTRL22 (*((unsigned char volatile xdata*)0x2F29))      /* USART 2 control register 2             */
#define UCTRL23 (*((unsigned char volatile xdata*)0x2F2A))      /* USART 2 control register 3             */

#define USTAT2 (*((unsigned char volatile xdata*)0x2F2B))       /* USART 2 status register                */
#define UBAUD2 (*((unsigned char volatile xdata*)0x2F2C))       /* USART 2 baud generation register       */
#define UDATA2 (*((unsigned char volatile xdata*)0x2F2D))       /* USART 2 data register                  */

#define UCTRL31 (*((unsigned char volatile xdata*)0x2F30))      /* USART 3 control register 1             */
#define UCTRL32 (*((unsigned char volatile xdata*)0x2F31))      /* USART 3 control register 2             */
#define UCTRL33 (*((unsigned char volatile xdata*)0x2F32))      /* USART 3 control register 3             */

#define USTAT3 (*((unsigned char volatile xdata*)0x2F2B))       /* USART 3 status register                */
#define UBAUD3 (*((unsigned char volatile xdata*)0x2F2C))       /* USART 3 baud generation register       */
#define UDATA3 (*((unsigned char volatile xdata*)0x2F2D))       /* USART 3 data register                  */

#define T5CR  (*((unsigned char volatile xdata*)0x2F38))        /* Timer 5 Mode control register          */
#define T5CR1 (*((unsigned char volatile xdata*)0x2F39))        /* Timer 5 Mode control register 1        */
#define T5L   (*((unsigned char volatile xdata*)0x2F3A))        /* Timer 5 low register                   */
#define T5H   (*((unsigned char volatile xdata*)0x2F3B))        /* Timer 5 high register                  */
#define T5DRL (*((unsigned char volatile xdata*)0x2F3C))        /* Timer 5 data register low              */
#define T5DRH (*((unsigned char volatile xdata*)0x2F3D))        /* Timer 5 data register high             */

#define PSR0  (*((unsigned char volatile xdata*)0x2F50))        /* Port selection register 0              */
#define PSR1  (*((unsigned char volatile xdata*)0x2F51))        /* Port selection register 1              */

#define FUSE_PKG  (*((unsigned char volatile xdata*)0x2F59))    /*                                        */
#define FUSE_CAL2 (*((unsigned char volatile xdata*)0x2F5A))    /* BGR and BOD Calibration data           */
#define FUSE_CAL1 (*((unsigned char volatile xdata*)0x2F5B))    /* INTOSC Calibration data                */
#define FUSE_CLA0 (*((unsigned char volatile xdata*)0x2F5C))    /* VDC Trimming for INTOSC                */
#define FUSE_CONF (*((unsigned char volatile xdata*)0x2F5D))    /* Fuse configuration                     */
#define TEST_B    (*((unsigned char volatile xdata*)0x2F5E))    /* Function test register B               */
#define TEST_A    (*((unsigned char volatile xdata*)0x2F5F))    /* Function test register A               */


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

/* IE 0xA8 Interrupt enable register */
sbit EA       = IE^7;              /* Enable all interrupts                  */
                                   /* Not available                          */
sbit INT5E    = IE^5;              /* Pin change interrupt 1, port 7         */
sbit INT4E    = IE^4;              /* Pin change interrupt 0, port 0         */
sbit INT3E    = IE^3;              /* External interrupt 3                   */
sbit INT2E    = IE^2;              /* External interrupt 2                   */
sbit INT1E    = IE^1;              /* External interrupt 1                   */
sbit INT0E    = IE^0;              /* External interrupt 0                   */

/* IP 0xB8 Interrupt priority register */
sbit IP07     = IP^7;              /* Interrupt Priority Bit 7               */
sbit IP06     = IP^6;              /* Interrupt Priority Bit 6               */
sbit IP05     = IP^5;              /* Interrupt Priority Bit 5               */
sbit IP04     = IP^4;              /* Interrupt Priority Bit 4               */
sbit IP03     = IP^3;              /* Interrupt Priority Bit 3               */
sbit IP02     = IP^2;              /* Interrupt Priority Bit 2               */
sbit IP01     = IP^1;              /* Interrupt Priority Bit 1               */
sbit IP00     = IP^0;              /* Interrupt Priority Bit 0               */

/* IP1 0xF8 Interrupt priority register 1 */
sbit IP15     = IP1^7;             /* Interrupt Priority Bit 15              */
sbit IP14     = IP1^6;             /* Interrupt Priority Bit 14              */
sbit IP13     = IP1^5;             /* Interrupt Priority Bit 13              */
sbit IP12     = IP1^4;             /* Interrupt Priority Bit 12              */
sbit IP11     = IP1^3;             /* Interrupt Priority Bit 11              */
sbit IP10     = IP1^2;             /* Interrupt Priority Bit 10              */
sbit IP09     = IP1^1;             /* Interrupt Priority Bit 9               */
sbit IP08     = IP1^0;             /* Interrupt Priority Bit 8               */

/* PSW 0xD0 Program status word */
sbit CY       = PSW^7;             /* Carry flag                             */
sbit AC       = PSW^6;             /* Auxiliary carry flag                   */
sbit F0       = PSW^5;             /* General purpose user-definable flag    */
sbit RS1      = PSW^4;             /* Register bank select bit 1             */
sbit RS0      = PSW^3;             /* Register bank select bit 0             */
sbit OV       = PSW^2;             /* Overflow flag                          */
sbit F1       = PSW^1;             /* User-Definable flag                    */
sbit P        = PSW^0;             /* Parity flag                            */

/* Interrupt number definitions */
#define HWRST_VECT           0      /* Hardware reset                        */
#define EXT0_VECT            1      /* External interrupt 0                  */
#define EXT1_VECT            2      /* External interrupt 1                  */
#define EXT2_VECT            3      /* External interrupt 2                  */
#define EXT3_VECT            4      /* External interrupt 3                  */
#define PIN_CHG0_VECT        5      /* Pin change interrupt (P0)             */
#define PIN_CHG7_VECT        6      /* Pin change interrupt (P7)             */
#define USART0_RX_VECT       7      /* USART0 Rx interrupt                   */
#define USART0_TX_VECT       8      /* USART0 Tx interrupt                   */
#define SPI0_VECT            9      /* SPI 0 interrupt                       */
#define I2C_VECT            10      /* I2C interrupt                         */
#define USART1_RX_VECT      11      /* USART1 Rx interrupt                   */
#define USART1_TX_VECT      12      /* USART1 Tx interrupt                   */
#define T0_VECT             13      /* Timer 0 interrupt                     */
#define T1_VECT             14      /* Timer 1 interrupt                     */
#define T2_VECT             15      /* Timer 2 interrupt                     */
#define T3_VECT             16      /* Timer 3 interrupt                     */
#define T4_VECT             17      /* Timer 4 interrupt                     */
#define T5_VECT             18      /* Timer 5 interrupt                     */
#define ADC_VECT            19      /* ADC interrupt                         */
#define EEPROM_VECT         20      /* EEPROM interrupt                      */
#define WT_VECT             21      /* Watch timer interrupt                 */
#define WDT_VECT            22      /* Watchdog timer interrupt              */
#define BIT_VECT            23      /* Basic interval timer interrupt        */
#define SPI1_VECT           24      /* SPI 1 interrupt                       */
#define USART2_RX_VECT      25      /* Interrupt source 25 is reserved       */
#define USART2_TX_VECT      26      /* Interrupt source 26 is reserved       */
#define USART3_RX_VECT      27      /* Interrupt source 27 is reserved       */
#define USART3_TX_VECT      28      /* Interrupt source 28 is reserved       */
#define EXT4_VECT           29      /* External interrupt 4                  */
#define EXT5_VECT           30      /* External interrupt 5                  */
#define EXT6_VECT           31      /* External interrupt 6                  */
#define EXT7_VECT           32      /* External interrupt 7                  */

#endif                                /*         __Z51F6412_H__              */