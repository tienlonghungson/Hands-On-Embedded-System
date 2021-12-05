/*-----------------------------------------------------------------------------
  Z51F0811.H

Header file for Zilog Z51F0811x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __Z51F0811_H__
#define __Z51F0811_H__

/* Byte Registers */
/* SFRs all pages */
sfr SP          = 0x81;            /* Stackpointer                           */
sfr DPL         = 0x82;            /* Data pointer low byte                  */
sfr DPH         = 0x83;            /* Data pointer high byte                 */
sfr EO          = 0xA2;            /* Extended operation register            */
sfr PSW         = 0xD0;            /* Program status word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr B           = 0xF0;            /* B register                             */

/* Port register */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr P0IO        = 0x89;            /* P0 direction register                  */
sfr PCI0        = 0xAE;            /* P0 pin change interrupt enable reg.    */
sfr P1          = 0x88;            /* Port 1 Latch                           */
sfr P1IO        = 0x91;            /* P1 direction register                  */
sfr P2          = 0x90;            /* Port 2 Latch                           */
sfr P2IO        = 0x99;            /* P2 direction register                  */
sfr P3          = 0x98;            /* Port 3 Latch                           */
sfr P3IO        = 0xA1;            /* P3 direction register                  */

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

/* TIMER ISR */
sfr TMISR       = 0xAF;	           /* Timer interrupt status register        */

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
sfr T1ADR       = 0xB6;            /* Timer 1 PWM 1A duty register           */
sfr CDR1        = 0xB6;            /* Capture 1 Data Register                */
sfr T1PCR       = 0xB7;            /* Timer 1 PWM control register           */
sfr T1BDR       = 0xBA;            /* Timer 1 PWM 1B duty register           */
sfr T1CDR       = 0xBB;            /* Timer 1 PWM 1C duty register           */
sfr T1PHR       = 0xBC;            /* Timer 1 PWM high register              */
sfr T1PCR2      = 0xBD;            /* Timer 1 PWM control register 2         */
sfr T1PCR3      = 0xBE;            /* Timer 1 PWM control register 3         */
sfr T1DLYA      = 0xBF;            /* PWM1 Non-Overlap delay reg. chn. A/AB  */
sfr T1DLYB      = 0xC2;            /* PWM1 Non-Overlap delay reg. chn. B/BB  */
sfr T1DLYC      = 0xC3;            /* PWM1 Non-Overlap Delay reg. chn. C/CB  */
sfr T1ISR       = 0xC4;            /* Timer 1 interrupt status register      */
sfr T1IMSK      = 0xC5;            /* Timer 1 interrupt mask register        */
sfr PLLCR       = 0x85;            /* Timer1 PLL control register            */

/* TIMER 2 */
sfr T2CR        = 0xC6;            /* Timer 2 mode control register          */
sfr T2          = 0xC7;            /* Timer 2 register                       */
sfr T2DR        = 0xC7;            /* Timer 2 data register                  */
sfr CDR2        = 0xC7;            /* Capture 2 data register                */

/* TIMER 3 */
sfr T3CR        = 0xCA;            /* Timer 3 mode control register          */
sfr T3DR        = 0xCB;            /* Timer 3 data register                  */
sfr T3PPR       = 0xCB;            /* Timer 3 PWM period register            */
sfr T3          = 0xCC;            /* Timer 3 register                       */
sfr T3PDR       = 0xCC;            /* Timer 3 PWM duty register              */
sfr CDR3        = 0xCC;            /* Capture 3 data register                */
sfr T3PWHR      = 0xCD;            /* Timer 3 PWM high register              */

/* TIMER 4 */
sfr T4CR        = 0xCE;            /* Timer 4 mode control register          */
sfr T4L         = 0xCF;            /* Timer 4 low register                   */
sfr T4LDR       = 0xCF;            /* Timer 4 low data register              */
sfr LCDR4       = 0xCF;            /* Low capture 4 data register            */
sfr T4H         = 0xD5;            /* Timer 4 high register                  */
sfr T4HDR       = 0xD5;            /* Timer 4 high data register             */
sfr HCDR4       = 0xD5;            /* High capture 4 data register           */

/* SPI */
sfr SPICR       = 0xD2;            /* SPI control register                   */
sfr SPIDR       = 0xD3;            /* SPI data register                      */
sfr SPISR       = 0xD4;            /* SPI status register                    */

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
sfr ADCRH       = 0x9B;            /* A/D converter result high register     */
sfr ADCRL       = 0x9C;            /* A/D converter result low register      */

/* Comparator */
sfr ACCSR       = 0xF9;            /* Analog Comparator Control & Status reg.*/  

/* Flash and EEPROM Memory REGISTERS */
sfr FEMR        = 0xEA;            /* Flash and EEPROM mode register         */
sfr FECR        = 0xEB;            /* Flash and EEPROM control register      */
sfr FESR        = 0xEC;            /* Flash and EEPROM status register       */
sfr FETCR       = 0xED;            /* Flash and EEPROM time control register */
sfr FEARL       = 0xF2;            /* Flash and EEPROM address low register  */
sfr FEARM       = 0xF3;            /* Flash and EEPROM address middle reg.   */
sfr FEARH       = 0xF4;            /* Flash and EEPROM address high register */
sfr FEDR        = 0xF5;            /* Flash and EEPROM data register         */
sfr FETR        = 0xF6;            /* */


/* SFR in XDATA address area */
#define FUSE_PKG (*((unsigned char volatile xdata*)0x2F59))     /*  */
#define FUSE_CAL2 (*((unsigned char volatile xdata*)0x2F5A))    /* BGR and BOD Calibration data           */
#define FUSE_CAL1 (*((unsigned char volatile xdata*)0x2F5B))    /* INTOSC Calibration data                */
#define FUSE_CAL0 (*((unsigned char volatile xdata*)0x2F5C))    /* VDC Trimming for INTOSC                */
#define FUSE_CONF (*((unsigned char volatile xdata*)0x2F5D))    /* Fuse configuration                     */
#define TEST_REGB (*((unsigned char volatile xdata*)0x2F5E))    /* Function test register B               */
#define TEST_REGA (*((unsigned char volatile xdata*)0x2F5F))    /* Function test register A               */

#define PSR0 (*((unsigned char volatile xdata*)0x2F50))         /* Port selection register 0              */
#define PSR1 (*((unsigned char volatile xdata*)0x2F51))         /* Port selection register 1,2,3          */

#define P0DB (*((unsigned char volatile xdata*)0x2F18))         /* P0 Debounce enable register            */
#define P1DB (*((unsigned char volatile xdata*)0x2F19))         /* P1 Debounce enable register            */
#define P2DB (*((unsigned char volatile xdata*)0x2F1A))         /* P2 Debounce enable register            */
#define P3DB (*((unsigned char volatile xdata*)0x2F1B))         /* P3 Debounce enable register            */

#define P0OD (*((unsigned char volatile xdata*)0x2F0C))         /* P0 Open-drain selection register       */
#define P1OD (*((unsigned char volatile xdata*)0x2F0D))         /* P1 Open-drain selection register       */
#define P2OD (*((unsigned char volatile xdata*)0x2F0E))         /* P2 Open-drain selection register       */
#define P3OD (*((unsigned char volatile xdata*)0x2F0F))         /* P3 Open-drain selection register       */

#define P0PU (*((unsigned char volatile xdata*)0x2F00))         /* P0 Pull-up resistor selection register */
#define P1PU (*((unsigned char volatile xdata*)0x2F01))         /* P1 Pull-up resistor selection register */
#define P2PU (*((unsigned char volatile xdata*)0x2F02))         /* P2 Pull-up resistor selection register */
#define P3PU (*((unsigned char volatile xdata*)0x2F03))         /* P3 Pull-up resistor selection register */


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

/* P1 0x90 */
sbit P17      = P1^7;              /* Port 1 Bit 7                           */
sbit P16      = P1^6;              /* Port 1 Bit 6                           */
sbit P15      = P1^5;              /* Port 1 Bit 5                           */
sbit P14      = P1^4;              /* Port 1 Bit 4                           */
sbit P13      = P1^3;              /* Port 1 Bit 3                           */
sbit P12      = P1^2;              /* Port 1 Bit 2                           */
sbit P11      = P1^1;              /* Port 1 Bit 1                           */
sbit P10      = P1^0;              /* Port 1 Bit 0                           */

/* P2 0xA0 */
sbit P27      = P2^7;              /* Port 2 Bit 7                           */
sbit P26      = P2^6;              /* Port 2 Bit 6                           */
sbit P25      = P2^5;              /* Port 2 Bit 5                           */
sbit P24      = P2^4;              /* Port 2 Bit 4                           */
sbit P23      = P2^3;              /* Port 2 Bit 3                           */
sbit P22      = P2^2;              /* Port 2 Bit 2                           */
sbit P21      = P2^1;              /* Port 2 Bit 1                           */
sbit P20      = P2^0;              /* Port 2 Bit 0                           */

/* P3 0xB0 */
sbit P37      = P3^7;              /* Port 3 Bit 7                           */
sbit P36      = P3^6;              /* Port 3 Bit 6                           */
sbit P35      = P3^5;              /* Port 3 Bit 5                           */
sbit P34      = P3^4;              /* Port 3 Bit 4                           */
sbit P33      = P3^3;              /* Port 3 Bit 3                           */
sbit P32      = P3^2;              /* Port 3 Bit 2                           */
sbit P31      = P3^1;              /* Port 3 Bit 1                           */
sbit P30      = P3^0;              /* Port 3 Bit 0                           */

/* IE 0xA8 Interrupt enable register */
sbit EA       = IE^7;              /* Enable all interrupts                  */
                                   /* Not available                          */
sbit INT5E    = IE^5;              /* Reserved                               */
sbit INT4E    = IE^4;              /* Pin change interrupt 0                 */
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
#define EXT0_VECT            0      /* External interrupt 0                  */
#define EXT1_VECT            1      /* External interrupt 1                  */
#define EXT2_VECT            2      /* External interrupt 2                  */
#define EXT3_VECT            3      /* External interrupt 3                  */
#define PIN_CHG0_VECT        4      /* Pin change interrupt (P0)             */
                                    /* Interrupt source 5 is reserved        */
#define USART0_RX_VECT       6      /* USART0 Rx interrupt                   */
#define USART0_TX_VECT       7      /* USART0 Tx interrupt                   */
#define SPI0_VECT            8      /* SPI interrupt                         */
#define I2C_VECT             9      /* I2C interrupt                         */
#define USART1_RX_VECT      10      /* USART1 Rx interrupt                   */
#define USART1_TX_VECT      11      /* USART1 Tx interrupt                   */
#define T0_VECT             12      /* Timer 0 interrupt                     */
#define T1_VECT             13      /* Timer 1 interrupt                     */
#define T2_VECT             14      /* Timer 2 interrupt                     */
#define T3_VECT             15      /* Timer 3 interrupt                     */
#define T4_VECT             16      /* Timer 4 interrupt                     */
#define EEPROM_VECT         17      /* EEPROM interrupt                      */
#define ADC_VECT            18      /* ADC interrupt                         */
#define COMPAR_VECT         19      /* Analog comparator interrupt           */
#define WT_VECT             20      /* Watch timer interrupt                 */
#define WDT_VECT            21      /* Watchdog timer interrupt              */
#define BIT_VECT            22      /* Basic interval timer interrupt        */
                                    /* Interrupt source 23 is reserved       */
                                    /* Interrupt source 24 is reserved       */
                                    /* Interrupt source 25 is reserved       */
                                    /* Interrupt source 26 is reserved       */
                                    /* Interrupt source 27 is reserved       */
#define EXT4_VECT           28      /* External interrupt 4                  */
#define EXT5_VECT           29      /* External interrupt 5                  */
#define EXT6_VECT           30      /* External interrupt 6                  */
#define EXT7_VECT           31      /* External interrupt 7                  */


#endif                                /*         __Z51F0811_H__              */