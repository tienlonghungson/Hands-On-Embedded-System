/*--------------------------------------------------------------------------
C8051F9xx.H

Header file for Silabs C8051F9xx based devices.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-------------------------------------------------------------------------- */


#ifndef __REG51F59xx_H__
#define __REG51F59xx_H__

/* Byte Addresses */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer - Low byte                */
sfr DPH         = 0x83;            /* Data Pointer - High byte               */
sfr SPI1CFG     = 0x84;            /*                                        */
sfr SPI1CKR     = 0x85;            /*                                        */
sfr TOFFL       = 0x85;            /*                                        */
sfr SPI1DAT     = 0x86;            /*                                        */
sfr TOFFH       = 0x86;            /*                                        */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer Control                          */
sfr TMOD        = 0x89;            /* Timer Mode                             */
sfr TL0         = 0x8A;            /* Timer 0 - Low byte                     */
sfr TL1         = 0x8B;            /* Timer 1 - Low byte                     */
sfr TH0         = 0x8C;            /* Timer 0 - High byte                    */
sfr TH1         = 0x8D;            /* Timer 1 - High byte                    */
sfr CKCON       = 0x8E;            /* Clock Control                          */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr TMR3CN      = 0x91;            /*                                        */
sfr CRC0DAT     = 0x91;            /*                                        */
sfr TMR3RLL     = 0x92;            /*                                        */
sfr CRC0CN      = 0x92;            /*                                        */
sfr TMR3RLH     = 0x93;            /*                                        */
sfr CRC0IN      = 0x93;            /*                                        */
sfr TMR3L       = 0x94;            /*                                        */
sfr CRC0FLIP    = 0x94;            /*                                        */
sfr TMR3H       = 0x95;            /*                                        */
sfr DC0CF       = 0x96;            /*                                        */
sfr CRC0AUTO    = 0x96;            /*                                        */
sfr DC0CN       = 0x97;            /*                                        */
sfr CRC0CNT     = 0x97;            /*                                        */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr SBUF0       = 0x99;            /* UART0 Buffer                           */
sfr CPT1CN      = 0x9A;            /*                                        */
sfr CPT0CN      = 0x9B;            /*                                        */
sfr CPT1MD      = 0x9C;            /*                                        */
sfr CPT0MD      = 0x9D;            /*                                        */
sfr CPT1MX      = 0x9E;            /*                                        */
sfr CPT0MX      = 0x9F;            /*                                        */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SPI0CFG     = 0xA1;            /*                                        */
sfr SPI0CKR     = 0xA2;            /*                                        */
sfr SPI0DAT     = 0xA3;            /*                                        */
sfr P0MDOUT     = 0xA4;            /*                                        */
sfr P1MDOUT     = 0xA5;            /*                                        */
sfr P2MDOUT     = 0xA6;            /*                                        */
sfr SFRPAGE     = 0xA7;            /*                                        */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr CLKSEL      = 0xA9;            /* Clock Select                           */
sfr EMI0CN      = 0xAA;            /*                                        */
sfr EMI0CF      = 0xAB;            /*                                        */
sfr RTC0ADR     = 0xAC;            /*                                        */
sfr P0DRV       = 0xAC;            /*                                        */
sfr RTC0DAT     = 0xAD;            /*                                        */
sfr P1DRV       = 0xAD;            /*                                        */
sfr RTC0KEY     = 0xAE;            /*                                        */
sfr P2DRV       = 0xAE;            /*                                        */
sfr EMI0TC      = 0xAF;            /*                                        */
sfr OSCIFIN     = 0xB0;            /* Internal Fine Oscillator Calibration   */
sfr OSCXCN      = 0xB1;            /* External Oscillator Control            */
sfr OSCICN      = 0xB2;            /* Internal Oscillator Control            */
sfr OSCICL      = 0xB3;            /* Internal Oscillator Calibration        */
sfr PMU0CF      = 0xB5;            /*                                        */
sfr FLSCL       = 0xB6;            /*                                        */
sfr FLKEY       = 0xB7;            /* Flash Lock & Key                       */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr IREF0CN     = 0xB9;            /*                                        */
sfr ADC0PWR     = 0xB9;            /*                                        */
sfr ADC0AC      = 0xBA;            /*                                        */
sfr ADC0MX      = 0xBB;            /* ADC0 Mux Channel Selection             */
sfr ADC0CF      = 0xBC;            /* ADC0 CONFIGURATION                     */
sfr ADC0L       = 0xBD;            /* ADC0 LSB Result                        */
sfr ADC0TK      = 0xBD;            /*                                        */
sfr ADC0H       = 0xBE;            /*                                        */
sfr P1MASK      = 0xBF;            /*                                        */
sfr SMB0CN      = 0xC0;            /*                                        */
sfr SMB0CF      = 0xC1;            /*                                        */
sfr SMB0DAT     = 0xC2;            /*                                        */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr P0MASK      = 0xC7;            /* Port 1 Mask                            */
sfr TMR2CN      = 0xC8;            /* Timer 2 Control                        */
sfr REG0CN      = 0xC9;            /* Regulator Control                      */
sfr TMR2RLL     = 0xCA;            /* Timer 2 Reload Low                     */
sfr TMR2RLH     = 0xCB;            /* Timer 2 Reload High                    */
sfr TMR2L       = 0xCC;            /* Timer 2 Low Byte                       */
sfr TMR2H       = 0xCD;            /* Timer 2 High Byte                      */
sfr PCA0CPM5    = 0xCE;            /*                                        */
sfr P1MAT       = 0xCF;            /* Port1 Match                            */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr REF0CN      = 0xD1;            /* Voltage Reference 0 Control            */
sfr PCA0CPL5    = 0xD2;            /*                                        */
sfr PCA0CPH5    = 0xD3;            /*                                        */
sfr P0SKIP      = 0xD4;            /* Port 0 Skip                            */
sfr P1SKIP      = 0xD5;            /* Port 1 Skip                            */
sfr P0MAT       = 0xD7;            /* Port 0 Match                           */
sfr PCA0CN      = 0xD8;            /* PCA0 Control                           */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode                     */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode                     */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode                     */
sfr PCA0CPM3    = 0xDD;            /* PCA0 Module 3 Mode                     */
sfr PCA0CPM4    = 0xDE;            /* PCA0 Module 4 Mode                     */
sfr PCA0PWM     = 0xDF;            /*                                        */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr XBR0        = 0xE1;            /*                                        */
sfr XBR1        = 0xE2;            /*                                        */
sfr XBR2        = 0xE3;            /*                                        */
sfr IT01CF      = 0xE4;            /*                                        */
sfr EIE1        = 0xE6;            /*                                        */
sfr EIE2        = 0xE7;            /*                                        */
sfr ADC0CN      = 0xE8;            /*                                        */
sfr PCA0CPL1    = 0xE9;            /*                                        */
sfr PCA0CPH1    = 0xEA;            /*                                        */
sfr PCA0CPL2    = 0xEB;            /*                                        */
sfr PCA0CPH2    = 0xEC;            /*                                        */
sfr PCA0CPL3    = 0xED;            /*                                        */
sfr PCA0CPH3    = 0xEE;            /*                                        */
sfr RSTSRC      = 0xEF;            /*                                        */
sfr B           = 0xF0;            /* B Register                             */
sfr P0MDIN      = 0xF1;            /* Port 0 Input Mode                      */
sfr P1MDIN      = 0xF2;            /* Port 1 Input Mode                      */
sfr P2MDIN      = 0xF3;            /* Port 2 Input Mode                      */
sfr SMB0ADR     = 0xF4;            /*                                        */
sfr SMB0ADM     = 0xF5;            /*                                        */
sfr EIP1        = 0xF6;            /* Extended Interrupt Priority 1          */
sfr EIP2        = 0xF7;            /* Extended Interrupt Priority 2          */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low Byte                  */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High Byte                 */
sfr PCA0CPL0    = 0xFB;            /* PCA Module 0 Capture/Compare Low Byte  */
sfr PCA0CPH0    = 0xFC;            /* PCA Module 0 Capture/Compare High Byte */
sfr PCA0CPL4    = 0xFD;            /*                                        */
sfr PCA0CPH4    = 0xFE;            /*                                        */
sfr VDM0CN      = 0xFF;            /*                                        */


/* Bit Definitions */
/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* External Interrupt 1 Edge Flag         */
sbit IT1      = TCON^2;            /* External Interrupt 1 Type              */
sbit IE0      = TCON^1;            /* External Interrupt 0 Edge Flag         */
sbit IT0      = TCON^0;            /* External Interrupt 0 Type              */

/* SCON0 */
sbit RI       = SCON0^0;           /*                                        */
sbit TI       = SCON0^1;           /*                                        */
sbit RB8      = SCON0^2;           /*                                        */
sbit TB8      = SCON0^3;           /*                                        */
sbit REN      = SCON0^4;           /*                                        */
sbit SM3      = SCON0^5;           /*                                        */
sbit SM1      = SCON0^6;           /*                                        */
sbit SM0      = SCON0^7;           /*                                        */

/* IE */
sbit EX0      = IE^0;              /*                                        */
sbit ET0      = IE^1;              /*                                        */
sbit EX1      = IE^2;              /*                                        */
sbit ET1      = IE^3;              /*                                        */
sbit ES       = IE^4;              /*                                        */
sbit EA       = IE^7;              /*                                        */

/* IP */
sbit PX0      = IP^0;              /*                                        */
sbit PT0      = IP^1;              /*                                        */
sbit PX1      = IP^2;              /*                                        */
sbit PT1      = IP^3;              /*                                        */
sbit PS       = IP^4;              /*                                        */

/* PSW */
sbit P        = PSW^0;             /*                                        */
sbit OV       = PSW^2;             /*                                        */
sbit RS0      = PSW^3;             /*                                        */
sbit RS1      = PSW^4;             /*                                        */
sbit F0       = PSW^5;             /*                                        */
sbit AC       = PSW^6;             /*                                        */
sbit CY       = PSW^7;             /*                                        */


#endif                                 /* #define __REG51F9xx_H__            */
