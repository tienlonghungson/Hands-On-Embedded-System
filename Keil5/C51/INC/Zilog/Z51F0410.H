/*-----------------------------------------------------------------------------
  Z51F0410.H

Header file for Zilog Z51F0410x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __Z51F0410_H__
#define __Z51F0410_H__

/* Byte Registers */
/* SFRs all pages */
sfr SP          = 0x81;            /* Stackpointer                           */
sfr DPL         = 0x82;            /* Data pointer low byte                  */
sfr DPH         = 0x83;            /* Data pointer high byte                 */
sfr PSW         = 0xD0;            /* Program status word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr B           = 0xF0;            /* B register                             */

/* Port register */
sfr P0          = 0x80;            /* Port 0 latch                           */
sfr P0IO        = 0x98;            /* P0 direction register                  */
sfr P0PD        = 0x88;            /* Port0 PAD data register                */
sfr P0PU        = 0x89;            /* P0 Pull-up resistor selection register */
sfr PSR0        = 0x9F;            /* Port 0 selection register              */
sfr PSR1        = 0xA0;            /* Port 1 selection register              */
sfr P0OD        = 0xA1;            /* Port 0 open drain register             */

sfr PINMCR      = 0x92;            /* Pin Mux control register               */

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

/* ADC */
sfr ADCM        = 0x9A;            /* A/D converter mode register            */
sfr ADCRH       = 0x9B;            /* A/D converter result high register     */
sfr ADCRL       = 0x9C;            /* A/D converter result low register      */

/* WT */
sfr WTR         = 0x9E;            /* Watch timer register                   */
sfr WTCR        = 0x9E;            /* Watch timer mode register              */
sfr WTMR        = 0x9D;            /* Watch timer counter register           */

/* BUZZER */
sfr BUZDR       = 0x8F;            /* Buzzer data register                   */
sfr BUZCR       = 0x96;            /* Buzzer control register                */

/* INTERRUPT CONTROL */
sfr IE          = 0xA8;            /* Interrupt enable register              */
sfr IE1         = 0xA9;            /* Interrupt enable register 1            */
sfr IE2         = 0xAA;            /* Interrupt enable register 2            */
sfr IE3         = 0xAB;            /* Interrupt enable register 3            */
sfr IP          = 0xB8;            /* Interrupt priority register            */
sfr IP1         = 0xF8;            /* Interrupt priority register 1          */
sfr EIFLAG      = 0xAC;            /* External interrupt flag register       */
sfr EIEDGE      = 0xAD;            /* External interrupt edge register       */
sfr EIPOLA      = 0xAE;            /* External interrupt polarity register   */
sfr EIENAB      = 0xAF;            /* External interrupt enable register     */


/* TIMER 0 */
sfr TFLG        = 0x97;            /* Timer 0,1,4 interrupt flag             */
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
sfr T1PWRH      = 0xB7;            /* Timer 1 PWM high register              */

/* Debounce register */
sfr P0DB        = 0xC0;            /* Port 0 Debounce register               */
sfr P0PC        = 0xC1;            /* Port 0 Pin change interrupt            */

/* TIMER 4 */
sfr T4CR        = 0xCE;            /* Timer 4 mode control register          */
sfr T4H         = 0xCD;            /* Timer 4 high register                  */
sfr T4HDR       = 0xCD;            /* Timer 4 high data register             */
sfr T4L         = 0xCF;            /* Timer 4 low register                   */
sfr T4LDR       = 0xCF;            /* Timer 4 low data register              */

/* Security */
sfr FKEY0       = 0xD1;            /* Authetification FAB key 0 register     */
sfr FKEY1       = 0xD2;            /* Authetification FAB key 1 register     */
sfr USEED1      = 0xD3;            /* User lock private key                  */
sfr USEED0      = 0xD4;            /* User lock private key                  */

/* Identification */
sfr SIDA        = 0xD5;            /* SID Access address                     */
sfr SIDD        = 0xD6;            /* Current SID data value                 */

/* I2C */
sfr I2CAR       = 0xD7;            /* I2C slave address register             */
sfr I2CMR       = 0xDA;            /* I2C mode control register              */
sfr I2CSR       = 0xDB;            /* I2C status register                    */
sfr I2CSCLLR    = 0xDC;            /* SCL low period register                */
sfr I2CSCLHR    = 0xDD;            /* SCL high period register               */
sfr I2CSDAHR    = 0xDE;            /* SDA hold time register                 */
sfr I2CDR       = 0xDF;            /* I2C data register                      */

/* USART    */
sfr UCTRL1      = 0xE2;            /* USART control register 1               */
sfr UCTRL2      = 0xE3;            /* USART control register 2               */
sfr UCTRL3      = 0xE4;            /* USART control register 3               */
sfr USTAT       = 0xE5;            /* USART status register                  */
sfr UBAUD       = 0xE6;            /* USART baud rate generation register    */
sfr UDATA       = 0xE7;            /* USART data register                    */

/* Comparator */
sfr ACCSR       = 0xE9;            /* Analog Comparator Control & Status reg.*/  

/* Flash and EEPROM Memory REGISTERS */
sfr FEMR        = 0xEA;            /* Flash and EEPROM mode register         */
sfr FECR        = 0xEB;            /* Flash and EEPROM control register      */
sfr FESR        = 0xEC;            /* Flash and EEPROM status register       */
sfr FETCR       = 0xED;            /* Flash and EEPROM time control register */

sfr AUTH_UKEY0  = 0xEE;            /* Authentification key LSB               */
sfr AUTH_UKEY1  = 0xEF;            /* Authentification key MSB               */

sfr FEARL       = 0xF2;            /* Flash and EEPROM address low register  */
sfr FEARM       = 0xF3;            /* Flash and EEPROM address middle reg.   */
sfr FEARH       = 0xF4;            /* Flash and EEPROM address high register */
sfr FEDR        = 0xF5;            /* Flash and EEPROM data register         */

sfr FUSE_CAL3   = 0xF7;            /* VDC trimming for RCOSC 128KHz          */
sfr FUSE_CAL2   = 0xFA;            /* BGR and BOD calibration data           */
sfr FUSE_CAL1   = 0xFB;            /* INTOSC calibration data                */
sfr FUSE_CAL0   = 0xFC;            /* VDC trimming for INTOSC 8MHz           */

sfr FUSE_CONF1  = 0xFD;            /* Configuration option 0                 */
sfr FUSE_CONF2  = 0xF9;            /* Configuration option 1                 */

sfr TEST_B      = 0xFE;            /* Function test register B               */
sfr TEST_A      = 0xFF;            /* Function test register A               */


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

/* P0PD 0x88 */
sbit P0PD7    = P0PD^7;            /* PAD data register Bit 7                */
sbit P0PD6    = P0PD^6;            /* PAD data register Bit 6                */
sbit P0PD5    = P0PD^5;            /* PAD data register Bit 5                */
sbit P0PD4    = P0PD^4;            /* PAD data register Bit 4                */
sbit P0PD3    = P0PD^3;            /* PAD data register Bit 3                */
sbit P0PD2    = P0PD^2;            /* PAD data register Bit 2                */
sbit P0PD1    = P0PD^1;            /* PAD data register Bit 1                */
sbit P0PD0    = P0PD^0;            /* PAD data register Bit 0                */

/* P0IO 0x98 */
sbit P0IO7    = P0IO^7;            /* Port 0 direction  Bit 7                */
sbit P0IO6    = P0IO^6;            /* Port 0 direction  Bit 6                */
sbit P0IO5    = P0IO^5;            /* Port 0 direction  Bit 5                */
sbit P0IO4    = P0IO^4;            /* Port 0 direction  Bit 4                */
sbit P0IO3    = P0IO^3;            /* Port 0 direction  Bit 3                */
sbit P0IO2    = P0IO^2;            /* Port 0 direction  Bit 2                */
sbit P0IO1    = P0IO^1;            /* Port 0 direction  Bit 1                */
sbit P0IO0    = P0IO^0;            /* Port 0 direction  Bit 0                */

/* P0DB 0x98 */
sbit P07DB    = P0DB^7;            /* Port 0 debounce enable Bit 7           */
sbit P06DB    = P0DB^6;            /* Port 0 debounce enable Bit 6           */
sbit P05DB    = P0DB^5;            /* Port 0 debounce enable Bit 5           */
sbit P04DB    = P0DB^4;            /* Port 0 debounce enable Bit 4           */
sbit P03DB    = P0DB^3;            /* Port 0 debounce enable Bit 3           */
sbit P02DB    = P0DB^2;            /* Port 0 debounce enable Bit 2           */
sbit P01DB    = P0DB^1;            /* Port 0 debounce enable Bit 1           */
sbit P00DB    = P0DB^0;            /* Port 0 debounce enable Bit 0           */

/* PSR1 0xA0 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
                                   /* Bit 5 not available                    */
                                   /* Bit 4 not available                    */
                                   /* Bit 3 not available                    */
                                   /* Bit 2 not available                    */
                                   /* Bit 1 not available                    */
sbit ACO_EN   = PSR1^0;            /* Analog comparator enable               */

/* IE 0xA8 Interrupt enable register */
sbit EA       = IE^7;              /* Enable all interrupts                  */
                                   /* Bit 6 not available                    */
sbit INT5E    = IE^5;              /* Pin change interrupt                   */
                                   /* Bit 4 not available                    */
                                   /* Bit 3 not available                    */
sbit INT2E    = IE^2;              /* External interrupt 2                   */
sbit INT1E    = IE^1;              /* External interrupt 1                   */
                                   /* Bit 0 not available                    */

/* IP 0xB8 Interrupt priority register */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
sbit IP05     = IP^5;              /* Interrupt Priority Bit 5               */
sbit IP04     = IP^4;              /* Interrupt Priority Bit 4               */
sbit IP03     = IP^3;              /* Interrupt Priority Bit 3               */
sbit IP02     = IP^2;              /* Interrupt Priority Bit 2               */
sbit IP01     = IP^1;              /* Interrupt Priority Bit 1               */
sbit IP00     = IP^0;              /* Interrupt Priority Bit 0               */

/* IP1 0xF8 Interrupt priority register 1 */
                                   /* Bit 7 not available                    */
                                   /* Bit 6 not available                    */
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
                                    /* Interrupt source 0 is reserved        */
#define EXT1_VECT            0      /* External interrupt 1                  */
#define EXT2_VECT            1      /* External interrupt 2                  */
                                    /* Interrupt source 3 is reserved        */
                                    /* Interrupt source 4 is reserved        */
#define PIN_CHG0_VECT        5      /* Pin change interrupt (P0)             */
                                    /* Interrupt source 6 is reserved        */
                                    /* Interrupt source 7 is reserved        */
                                    /* Interrupt source 8 is reserved        */
#define USART1_RX_VECT       9      /* USART1 Rx interrupt                   */
#define USART1_TX_VECT      10      /* USART1 Tx interrupt                   */
                                    /* Interrupt source 11 is reserved       */
#define I2C_VECT            12      /* I2C  interrupt                        */
#define T0_VECT             13      /* Timer 0 interrupt                     */
#define T1_VECT             14      /* Timer 1 interrupt                     */
                                    /* Interrupt source 15 is reserved       */
                                    /* Interrupt source 16 is reserved       */
#define T4_VECT             17      /* Timer 4 interrupt                     */
#define ADC_VECT            18      /* ADC interrupt                         */
#define COMPAR_VECT         19      /* Analog comparator interrupt           */
#define WT_VECT             20      /* Watch timer interrupt                 */
#define WDT_VECT            21      /* Watchdog timer interrupt              */
#define BIT_VECT            22      /* Basic interval timer interrupt        */
#define EEPROM_VECT         23      /* Interrupt source 23 is reserved       */


#endif                                /*         __Z51F0410_H__              */