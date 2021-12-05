/*-----------------------------------------------------------------------------
REG51T620.H

Header file for Silabs C8051T620/1/2/3 and C8051T320/1/2/3/6/7.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __REG51T620_H__
#define __REG51T620_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr P0MAT       = 0x84;          /* Port 0 Match Configuration               */
sfr EMI0CF      = 0x85;          /* External Memory Interface Configuration  */
sfr OSCLCN      = 0x86;          /* Internal Low-Frequency Oscillator Control*/
sfr PCON        = 0x87;          /* Power Control                            */
sfr TCON        = 0x88;          /* Timer/Counter Control                    */
sfr TMOD        = 0x89;          /* Timer/Counter Mode                       */
sfr TL0         = 0x8A;          /* Timer/Counter 0 Low                      */
sfr TL1         = 0x8B;          /* Timer/Counter 1 Low                      */
sfr TH0         = 0x8C;          /* Timer/Counter 0 High                     */
sfr TH1         = 0x8D;          /* Timer/Counter 1 High                     */
sfr CKCON       = 0x8E;          /* Clock Control                            */
sfr PSCTL       = 0x8F;          /* Program Store R/W Control                */
sfr P1          = 0x90;          /* Port 1 Latch                             */
sfr TMR3CN      = 0x91;          /* Timer/Counter 3 Control                  */
sfr TMR3RLL     = 0x92;          /* Timer/Counter 3 Reload Low               */
sfr TMR3RLH     = 0x93;          /* Timer/Counter 3 Reload High              */
sfr TMR3L       = 0x94;          /* Timer/Counter 3 Low                      */
sfr TMR3H       = 0x95;          /* Timer/Counter 3 High                     */
sfr USB0ADR     = 0x96;          /* USB0 Indirect Address Register           */
sfr USB0DAT     = 0x97;          /* USB0 Data Register                       */
sfr SCON0       = 0x98;          /* UART0 Control                            */
sfr SBUF0       = 0x99;          /* UART0 Data Buffer                        */
sfr CPT1CN      = 0x9A;          /* Comparator 1 Control                     */
sfr CPT0CN      = 0x9B;          /* Comparator 0 Control                     */
sfr CPT1MD      = 0x9C;          /* Comparator 1 Mode                        */
sfr CPT0MD      = 0x9D;          /* Comparator 0 Mode                        */
sfr CPT1MX      = 0x9E;          /* Comparator 1 Mux                         */
sfr CPT0MX      = 0x9F;          /* Comparator 0 Mux                         */
sfr P2          = 0xA0;          /* Port 2 Latch                             */
sfr SPI0CFG     = 0xA1;          /* SPI0 Configuration                       */
sfr SPI0CKR     = 0xA2;          /* SPI0 Clock rate control                  */
sfr SPI0DAT     = 0xA3;          /* SPI0 Data Buffer                         */
sfr P0MDOUT     = 0xA4;          /* Port 0 Output Mode                       */
sfr P1MDOUT     = 0xA5;          /* Port 1 Output Mode                       */
sfr P2MDOUT     = 0xA6;          /* Port 2 Output Mode                       */
sfr P3MDOUT     = 0xA7;          /* Port 3 Output Mode                       */
sfr IE          = 0xA8;          /* Interrupt Enable                         */
sfr CLKSEL      = 0xA9;          /* Clock Select                             */
sfr EMI0CN      = 0xAA;          /* EMIF control                             */
sfr SBCON1      = 0xAC;          /* UART1 Baud Rate Generator Control        */
sfr P0MASK      = 0xAE;          /* Port 0 Mask Configuration                */
sfr PFE0CN      = 0xAF;          /* Prefetch Engine Control                  */
sfr P3          = 0xB0;          /* Port 3 Latch                             */
sfr OSCXCN      = 0xB1;          /* External Oscillator Control              */
sfr OSCICN      = 0xB2;          /* Internal Oscillator Control              */
sfr OSCICL      = 0xB3;          /* Internal Oscillator Calibration          */
sfr SBRLL1      = 0xB4;          /* UART1 Baud Rate Generator Low            */
sfr SBRLH1      = 0xB5;          /* UART1 Baud Rate Generator High           */
sfr P1MAT       = 0xB6;          /* Port 1 Match Configuration               */
sfr MEMKEY      = 0xB7;          /* EPROM Memory Lock and Key                */
sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr CLKMUL      = 0xB9;          /* Clock Multiplier                         */
sfr P1MASK      = 0xBB;          /* Port 1Mask Configuration                 */
sfr AMX0P       = 0xBB;          /* AMUX0 Positive Channel Select            */
sfr ADC0CF      = 0xBC;          /* ADC0 Configuration                       */
sfr ADC0L       = 0xBD;          /* ADC0 Low                                 */
sfr ADC0H       = 0xBE;          /* ADC0 High                                */
sfr SMB0CN      = 0xC0;          /* SMBus0 Control                           */
sfr SMB0CF      = 0xC1;          /* SMBus0 Configuration                     */
sfr SMB0DAT     = 0xC2;          /* SMBus0 Data                              */
sfr ADC0GTL     = 0xC3;          /* ADC0 Greater-Than Compare Low            */
sfr ADC0GTH     = 0xC4;          /* ADC0 Greater-Than Compare High           */
sfr ADC0LTL     = 0xC5;          /* ADC0 Less-Than Compare Word Low          */
sfr ADC0LTH     = 0xC6;          /* ADC0 Less-Than Compare Word High         */
sfr SMB0ADR     = 0xC7;          /* SMBus0 Address                           */
sfr TMR2CN      = 0xC8;          /* Timer/Counter 2 Control                  */
sfr REG01CN     = 0xC9;          /* Regulator Control                        */
sfr TMR2RLL     = 0xCA;          /* Timer/Counter 2 Reload Low               */
sfr TMR2RLH     = 0xCB;          /* Timer/Counter 2 Reload High              */
sfr TMR2L       = 0xCC;          /* Timer/Counter 2 Low                      */
sfr TMR2H       = 0xCD;          /* Timer/Counter 2 High                     */
sfr SMB0ADM     = 0xCF;          /* SMBus0 Address Mask                      */
sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr REF0CN      = 0xD1;          /* Voltage Reference Control                */
sfr SCON1       = 0xD2;          /* UART1 Control                            */
sfr SBUF1       = 0xD3;          /* UART1 Data Buffer                        */
sfr P0SKIP      = 0xD4;          /* Port 0 Skip                              */
sfr P1SKIP      = 0xD5;          /* Port 1 Skip                              */
sfr P2SKIP      = 0xD6;          /* Port 2 Skip                              */
sfr USB0XCN     = 0xD7;          /* USB0 Transceiver Control                 */
sfr PCA0CN      = 0xD8;          /* PCA0 Control                             */
sfr PCA0MD      = 0xD9;          /* PCA0 Mode                                */
sfr PCA0CPM0    = 0xDA;          /* PCA Module 0 Mode Register               */
sfr PCA0CPM1    = 0xDB;          /* PCA Module 1 Mode Register               */
sfr PCA0CPM2    = 0xDC;          /* PCA Module 2 Mode Register               */
sfr PCA0CPM3    = 0xDD;          /* PCA Module 3 Mode Register               */
sfr PCA0CPM4    = 0xDE;          /* PCA Module 4 Mode Register               */
sfr ACC         = 0xE0;          /* Accumulator                              */
sfr XBR0        = 0xE1;          /* Port I/O Crossbar Control 0              */
sfr XBR1        = 0xE2;          /* Port I/O Crossbar Control 1              */
sfr XBR2        = 0xE3;          /* Port I/O Crossbar Control 2              */
sfr IT01CF      = 0xE4;          /* INT0/INT1 Configuration                  */
sfr SMOD1       = 0xE5;          /* UART1 Mode                               */
sfr EIE1        = 0xE6;          /* Extended Interrupt Enable 2              */
sfr EIE2        = 0xE7;          /* Extended Interrupt Enable 2              */
sfr ADC0CN      = 0xE8;          /* ADC0 Control                             */
sfr PCA0CPL1    = 0xE9;          /* PCA0 Capture 2 Low                       */
sfr PCA0CPH1    = 0xEA;          /* PCA0 Capture 2 High                      */
sfr PCA0CPL2    = 0xEB;          /* PCA0 Capture 3 Low                       */
sfr PCA0CPH2    = 0xEC;          /* PCA0 Capture 3 High                      */
sfr PCA0CPL3    = 0xED;          /* PCA0 Capture 4 Low                       */
sfr PCA0CPH3    = 0xEE;          /* PCA0 Capture 4 High                      */
sfr RSTSRC      = 0xEF;          /* Reset Source Configuration/Status        */
sfr B           = 0xF0;          /* B Register                               */
sfr P0MDIN      = 0xF1;          /* Port 0 Input Mode                        */
sfr P1MDIN      = 0xF2;          /* Port 1 Input Mode                        */
sfr P2MDIN      = 0xF3;          /* Port 2 Input Mode                        */
sfr PCA0PWM     = 0xF4;          /* PCA PWM Configuration                    */
sfr IAPCN       = 0xF5;          /* In-Application Programming Control       */
sfr EIP1        = 0xF6;          /* External Interrupt Priority 1            */
sfr EIP2        = 0xF7;          /* External Interrupt Priority 2            */
sfr SPI0CN      = 0xF8;          /* SPI0 Control                             */
sfr PCA0L       = 0xF9;          /* PCA0 Counter Low                         */
sfr PCA0H       = 0xFA;          /* PCA0 Counter High                        */
sfr PCA0CPL0    = 0xFB;          /* PCA0 Capture 0 Low                       */
sfr PCA0CPH0    = 0xFC;          /* PCA0 Capture 0 High                      */
sfr PCA0CPL4    = 0xFD;          /* PCA0 Capture 4 Low                       */
sfr PCA0CPH4    = 0xFE;          /* PCA0 Capture 4 High                      */
sfr VDM0CN      = 0xFF;          /* VDD Monitor Control                      */

/* 16-bit Register Definitions */
sfr16 DP        = 0x82;          /* Data Pointer                             */
sfr16 TMR3RL    = 0x92;          /* Timer 3 Reload                           */
sfr16 TMR3      = 0x94;          /* Timer 3 Counter                          */
sfr16 SBRL1     = 0xB4;          /* UART1 Baud Rate Generator                */
sfr16 ADC0      = 0xBD;          /* ADC0 Data                                */
sfr16 ADC0GT    = 0xC3;          /* ADC0 Greater-Than Compare                */
sfr16 ADC0LT    = 0xC5;          /* ADC0 Less-Than Compare                   */
sfr16 TMR2RL    = 0xCA;          /* Timer 2 Reload                           */
sfr16 TMR2      = 0xCC;          /* Timer 2 Counter                          */
sfr16 PCA0CP1   = 0xE9;          /* PCA0 Module 1 Capture/Compare            */
sfr16 PCA0CP2   = 0xEB;          /* PCA0 Module 2 Capture/Compare            */
sfr16 PCA0CP3   = 0xED;          /* PCA0 Module 3 Capture/Compare            */
sfr16 PCA0      = 0xF9;          /* PCA0 Counter                             */
sfr16 PCA0CP0   = 0xFB;          /* PCA0 Module 0 Capture/Compare            */
sfr16 PCA0CP4   = 0xFD;          /* PCA0 Module 4 Capture/Compare            */

/* Bit Definitions */
/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* SCON0 0x98 */
sbit S0MODE   = SCON0^7;           /* Serial Port 0 Operation Mode           */
                                   /* Bit 6 unused                           */
sbit MCE0     = SCON0^5;           /* Multiprocessor Communication Enable    */
sbit REN0     = SCON0^4;           /* UART0 RX Enable                        */
sbit TB80     = SCON0^3;           /* Ninth Transmission Bit                 */
sbit RB80     = SCON0^2;           /* Ninth Receive Bit                      */
sbit TI0      = SCON0^1;           /* Transmit Interrupt Flag                */
sbit RI0      = SCON0^0;           /* Receive Interrupt Flag                 */

/* IE 0xA8 */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit ESPI0    = IE^6;              /* SPI0 Interrupt Enable                  */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES0      = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 */
                                   /* Bit 7 unused                           */
sbit PSPI0    = IP^6;              /* SPI0 Interrupt Priority                */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS0      = IP^4;              /* UART0 Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

/* SMB0CN 0xC0 */
sbit MASTER   = SMB0CN^7;          /* SMBus0 Master/Slave Indicator          */
sbit TXMODE   = SMB0CN^6;          /* SMBus0 Transmit Mode Indicator         */
sbit STA      = SMB0CN^5;          /* SMBus0 Start Flag                      */
sbit STO      = SMB0CN^4;          /* SMBus0 Stop Flag                       */
sbit ACKRQ    = SMB0CN^3;          /* SMBus0 Acknowledge Request             */
sbit ARBLOST  = SMB0CN^2;          /* SMBus0 Arbitration Lost Indicator      */
sbit ACK      = SMB0CN^1;          /* SMBus0 Acknowledge                     */
sbit SI       = SMB0CN^0;          /* SMBus0 Interrupt Flag                  */

/* TMR2CN 0xC8 */
sbit TF2H     = TMR2CN^7;          /* Timer 2 High-Byte Overflow Flag        */
sbit TF2L     = TMR2CN^6;          /* Timer 2 Low-Byte  Overflow Flag        */
sbit TF2LEN   = TMR2CN^5;          /* Timer 2 Low-Byte Flag Enable           */
sbit TF2CEN   = TMR2CN^4;          /* Timer 2 Capture Enable                 */
sbit T2SPLIT  = TMR2CN^3;          /* Timer 2 Split-Mode Enable              */
sbit TR2      = TMR2CN^2;          /* Timer2 Run Enable                      */
                                   /* Bit 1 unused                           */
sbit T2XCLK   = TMR2CN^0;          /* Timer 2 Clk/8 Clock Source             */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit PARITY   = PSW^0;             /* Accumulator Parity Flag                */

/* PCA0CN 0xD8 */
sbit CF       = PCA0CN^7;          /* PCA0 Counter Overflow Flag             */
sbit CR       = PCA0CN^6;          /* PCA0 Counter Run Control Bit           */
                                   /* Bit 5 unused                           */
sbit CCF4     = PCA0CN^4;          /* PCA0 Module 4 Interrupt Flag           */
sbit CCF3     = PCA0CN^3;          /* PCA0 Module 3 Interrupt Flag           */
sbit CCF2     = PCA0CN^2;          /* PCA0 Module 2 Interrupt Flag           */
sbit CCF1     = PCA0CN^1;          /* PCA0 Module 1 Interrupt Flag           */
sbit CCF0     = PCA0CN^0;          /* PCA0 Module 0 Interrupt Flag           */

/* ADC0CN 0xE8 */
sbit AD0EN    = ADC0CN^7;          /* ADC0 Enable                            */
sbit AD0TM    = ADC0CN^6;          /* ADC0 Track Mode Bit                    */
sbit AD0INT   = ADC0CN^5;          /* ADC0 Conversion Complete Interrupt Flag*/
sbit AD0BUSY  = ADC0CN^4;          /* ADC0 Busy Flag                         */
sbit AD0WINT  = ADC0CN^3;          /* ADC0 Window Compare Interrupt Flag     */
sbit AD0LJST  = ADC0CN^2;          /* ADC0 Left Justified                    */
sbit AD0CM1   = ADC0CN^1;          /* ADC0 Start Of Conversion Mode Bit 1    */
sbit AD0CM0   = ADC0CN^0;          /* ADC0 Start Of Conversion Mode Bit 0    */

/* SPI0CN 0xF8 */
sbit SPIF     = SPI0CN^7;          /* SPI0 Interrupt Flag                    */
sbit WCOL     = SPI0CN^6;          /* SPI0 Write Collision Flag              */
sbit MODF     = SPI0CN^5;          /* SPI0 Mode Fault Flag                   */
sbit RXOVRN   = SPI0CN^4;          /* SPI0 RX Overrun Flag                   */
sbit NSSMD1   = SPI0CN^3;          /* SPI0 Slave Select Mode 1               */
sbit NSSMD0   = SPI0CN^2;          /* SPI0 Slave Select Mode 0               */
sbit TXBMT    = SPI0CN^1;          /* SPI0 TX Buffer Empty Flag              */
sbit SPIEN    = SPI0CN^0;          /* SPI0 Enable                            */


#endif                                 /* #define __REG51T620_H__            */