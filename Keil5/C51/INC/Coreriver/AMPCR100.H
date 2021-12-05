/*-----------------------------------------------------------------------------
AMPCR100.H

Header file for CoreRiver AmpCore100 device.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __AMPCR100_H__
#define __AMPCR100_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr ALTSEL2     = 0x84;          /* Alternative Pin Selection 2              */
sfr ALTSEL      = 0x85;          /* Alternative Pin Selection                */
sfr CKSEL       = 0x86;          /* Clock Selection                          */
sfr PCON        = 0x87;          /* Power Control                            */

sfr TCON        = 0x88;          /* Timer/Counter Control                    */
sfr TMOD        = 0x89;          /* Timer/Counter Mode                       */
sfr TL0         = 0x8A;          /* Timer/Counter 0 Low                      */
sfr TL1         = 0x8B;          /* Timer/Counter 1 Low                      */
sfr TH0         = 0x8C;          /* Timer/Counter 0 High                     */
sfr TH1         = 0x8D;          /* Timer/Counter 1 High                     */
sfr CKCON       = 0x8E;          /* Clock Control                            */
sfr RINGCON     = 0x8F;          /* RING Control Register                    */

sfr P1          = 0x90;          /* Port 1 Latch                             */
sfr EXIF        = 0x91;          /* External Interrupt Flag                  */
sfr PWM0CON     = 0x92;          /* PWM0 Control                             */
sfr PWM0CNT     = 0x93;          /* PWM0 Count                               */
sfr PWM0D0      = 0x94;          /* PWM0D0 Duty Data                         */
sfr PWM0D1      = 0x95;          /* PWM0D1 Duty Data                         */
sfr PWM0D2      = 0x96;          /* PWM0D2 Duty Data                         */
sfr PWM0D3      = 0x97;          /* PWM0D3 Duty Data                         */

sfr SCON        = 0x98;          /* Serial Control                           */
sfr SBUF        = 0x99;          /* Serial Buffer                            */

sfr PWM0OEN     = 0x9B;          /* PWM0 Output Enable                       */
sfr PWM0D4      = 0x9C;          /* PWM0D4 Duty Data                         */
sfr PWM0D5      = 0x9D;          /* PWM0D5 Duty Data                         */
sfr PWM0D6      = 0x9E;          /* PWM0D6 Duty Data                         */
sfr PWM0D7      = 0x9F;          /* PWM0D7 Duty Data                         */

sfr P2          = 0xA0;          /* Port 2 Latch                             */
sfr EIE         = 0xA1;          /* External interrupt enable register       */
sfr PWM1CON     = 0xA2;          /* PWM1 Control                             */
sfr PWM1CNT     = 0xA3;          /* PWM1 Count                               */
sfr PWM1D0      = 0xA4;          /* PWM1D0 Duty Data                         */
sfr PWM1D1      = 0xA5;          /* PWM1D1 Duty Data                         */
sfr PWM1D2      = 0xA6;          /* PWM1D2 Duty Data                         */
sfr PWM1D3      = 0xA7;          /* PWM1D3 Duty Data                         */

sfr IE          = 0xA8;          /* Interrupt Enable                         */
sfr SADDR       = 0xA9;          /* UART0, Slave address register            */
sfr PWM1OEN     = 0xAB;          /* PWM1 Output Enable                       */
sfr PWM1D4      = 0xAC;          /* PWM1D4 Duty Data                         */
sfr PWM1D5      = 0xAD;          /* PWM1D5 Duty Data                         */
sfr PWM1D6      = 0xAE;          /* PWM1D6 Duty Data                         */
sfr PWM1D7      = 0xAF;          /* PWM1D7 Duty Data                         */

sfr P3          = 0xB0;          /* Port 3 Latch                             */
sfr EIP         = 0xB1;          /* Extended Interrupt Priority              */
sfr P4          = 0xB2;          /* Prot 4 Latch                             */
sfr SPICON      = 0xB4;          /* SPI Control                              */
sfr SPICK       = 0xB5;          /* SPI SCLK Scaling                         */
sfr SPIDR       = 0xB6;          /* SPI Data                                 */
sfr IPH         = 0xB7;          /* Interrupt priority register              */

sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr SADEN       = 0xB9;          /* Slave address mask enable register       */
sfr ITSEL       = 0xBA;          /* Interrupt polarity selection register    */

sfr SPIST       = 0xC0;          /* SPI Status                               */
sfr PMR         = 0xC4;          /* Power Management Control                 */
sfr STATUS      = 0xC5;          /* Status register                          */
sfr OSCICN      = 0xC6;          /* Internal ring oscillator control         */
sfr OSCICN2     = 0xC7;          /* Internal ring oscillator2 control        */

sfr T2CON       = 0xC8;          /* Timer/Counter 2 Control                  */
sfr T2MOD       = 0xC9;          /* Timer/Counter 2 Mode                     */
sfr RCAP2L      = 0xCA;          /* Timer/Counter 2 Reload Low               */
sfr RCAP2H      = 0xCB;          /* Timer/Counter 2 Reload High              */
sfr TL2         = 0xCC;          /* Timer/Counter 2 Low                      */
sfr TH2         = 0xCD;          /* Timer/Counter 2 High                     */
sfr ADCENB0     = 0xCE;          /* ADC Channel enable bar0                  */
sfr ADCENB1     = 0xCF;          /* ADC Channel enable bar1                  */

sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr P0SEL       = 0xD1;          /* Port0 Pull-Up control register           */
sfr P1SEL       = 0xD2;          /* Port1 Pull-Up control register           */
sfr P2SEL       = 0xD3;          /* Port2 Pull-Up control register           */
sfr P3SEL       = 0xD4;          /* Port3 Pull-Up control register           */
sfr P4SEL       = 0xD5;          /* Port4 Pull-Up control register           */
sfr ADCENB2     = 0xD6;          /* ADC Channel enable bar2                  */
sfr ADCENB3     = 0xD7;          /* ADC Channel enable bar3                  */

sfr WDCON       = 0xD8;          /* Watchdog Timer & Power Status            */
sfr P0TYP       = 0xD9;          /* Port0 Type Control                       */
sfr P1TYP       = 0xDA;          /* Port1 Type Control                       */
sfr P2TYP       = 0xDB;          /* Port2 Type Control                       */
sfr P3TYP       = 0xDC;          /* Port3 Type Control                       */
sfr P4TYP       = 0xDD;          /* Port4 Type Control                       */
sfr ADCON       = 0xDE;          /* ADC control and result low               */
sfr ADCSEL      = 0xDF;          /* ADC Channel Low and MUX selection        */

sfr ACC         = 0xE0;          /* Accumulator                              */
sfr P0DIR       = 0xE1;          /* Port0 Input/Output Control               */
sfr P1DIR       = 0xE2;          /* Port1 Input/Output Control               */
sfr P2DIR       = 0xE3;          /* Port2 Input/Output Control               */
sfr P3DIR       = 0xE4;          /* Port3 Input/Output Control               */
sfr P4DIR       = 0xE5;          /* Port4 Input/Output Control               */
sfr ADCR        = 0xE6;          /* ADC result high                          */

sfr I2CST       = 0xE8;          /* I2C Status                               */
sfr I2CCON      = 0xE9;          /* I2C Control                              */
sfr I2CCFG      = 0xEA;          /* I2C Configuration                        */
sfr I2CSLA      = 0xEB;          /* I2C Slave Address                        */
sfr I2CDAT      = 0xEC;          /* I2C Data                                 */
sfr I2CSCL      = 0xED;          /* I2C Clock Scalin                         */

sfr B           = 0xF0;          /* B Register                               */
sfr EECNTLD     = 0xF1;          /* EEPROM Program/Erase Count Load          */
sfr ECNTL       = 0xF2;          /* EEPROMProgram/Erase Count Low            */
sfr ECNTM       = 0xF3;          /* EEPROM Program/Erase Count Middle        */
sfr ECON        = 0xF6;          /* EEPROM Control                           */
sfr EAEN        = 0xF7;          /* EEPROM Access Enable                     */


/* Bit Definitions */
/* TCON 0x88 Timer/Counter Control */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* SCON 0x98 Serial Control */
sbit SM0      = SCON^7;            /* Serial Port Mode Selection             */
sbit SM1      = SCON^6;            /* Serial Port Mode Selection             */
sbit SM2      = SCON^5;            /* Enable Automatic Address Recognition   */
sbit REN      = SCON^4;            /* Serial Reception Enable                */
sbit TB8      = SCON^3;            /* Ninth Data Bit Transmission            */
sbit RB8      = SCON^2;            /* Ninth Data Bit Reception               */
sbit TI       = SCON^1;            /* Transmission Interrupt Flag            */
sbit RI       = SCON^0;            /* Reception Interrupt Flag               */

/* IE 0xA8 Interrupt Enable */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit EADC     = IE^6;              /* ADC Interrupt Enable                   */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES       = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 Interrupt Priority */
                                   /* Bit 7 unused                           */
sbit PADC     = IP^6;              /* ADC interrupt priority                 */
sbit PT2      = IP^5;              /* Timer 2 interrupt priority             */
sbit PS       = IP^4;              /* UART0 interrupt priority               */
sbit PT1      = IP^3;              /* Timer 1 interrupt priority             */
sbit PX1      = IP^2;              /* External interrupt 1 priority          */
sbit PT0      = IP^1;              /* Timer 0 interrupt priority             */
sbit PX0      = IP^0;              /* External interrupt 0 priority          */

/* SPIST 0xC0 SPI Status Register */
                                   /* Bit 7 unused                           */
                                   /* Bit 6 unused                           */
                                   /* Bit 5 unused                           */
                                   /* Bit 4 unused                           */
sbit TXBV     = SPIST^3;           /* TX buffer of SPIDR                     */
sbit SPIF     = SPIST^2;           /* SPI Interrupt Flag                     */
sbit SPICOL   = SPIST^1;           /* SPI Write Collision Flag               */
sbit SPIOF    = SPIST^0;           /* SPI Read Overflow Flag                 */


/* T2CON 0xC8 Timer/Counter 2 Control */
sbit TF2      = T2CON^7;           /* Timer 2 Overflow Flag                  */
sbit EXF2     = T2CON^6;           /* Timer 2 External Flag                  */
sbit RCLK     = T2CON^5;           /* Receive Clock Flag                     */
sbit TCLK     = T2CON^4;           /* Transmit Clock Flag                    */
sbit EXEN2    = T2CON^3;           /* Timer 2 External Enable Flag           */
sbit TR2      = T2CON^2;           /* Timer2 Run Enable                      */
sbit C_T2     = T2CON^1;           /* Timer or Counter selection             */
sbit CP_RL2   = T2CON^0;           /* Capture/Reload Flag                    */

/* PSW 0xD0 Program Status Word */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* WDCON 0xD8 Watchdog Timer & Power Status */
sbit WDMOD    = WDCON^7;           /* WDT mode selection flag                */
sbit POR      = WDCON^6;           /* Power-On reset flag                    */
sbit EPFI     = WDCON^5;           /* Enable power-fail interrupt flag       */
sbit PFI      = WDCON^4;           /* Power-fail interrupt flag              */
sbit WDIF     = WDCON^3;           /* Watchdog Timer interrupt flag          */
sbit WTRF     = WDCON^2;           /* Watchdog Timer reset flag flag         */
sbit EWT      = WDCON^1;           /* Watchdog Timer reset enable flag       */
sbit RWT      = WDCON^0;           /* Restart Watchdog timer flag            */

/* I2CST 0xE8 I2C Status Register */
sbit I2CIF    = I2CST^7;           /* I2C Master Interrupt Flag              */
sbit I2COF    = I2CST^6;           /* I2C Overflow Flag                      */
sbit I2CACK   = I2CST^5;           /* I2C Acknowledge flag                   */
sbit I2CCRW   = I2CST^4;           /* I2C Read/Write flag                    */
sbit I2CDA    = I2CST^3;           /* Data / Address flag                    */
sbit I2CP     = I2CST^2;           /* Stop flag                              */
sbit I2CS     = I2CST^1;           /* Start flag                             */
sbit I2CBF    = I2CST^0;           /* Busy flag                              */


#endif                           /* __AMPCR100_H__                           */