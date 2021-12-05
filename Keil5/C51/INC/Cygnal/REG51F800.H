/*-----------------------------------------------------------------------------
  REG51F800.H

Header file for Silabs C8051F80x (F800 - F835) based devices.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __REG51F800_H__
#define __REG51F800_H__

/* Byte Registers */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr TMOD        = 0x89;            /* Timer/Counter Mode                     */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low                    */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low                    */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High                   */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High                   */
sfr CKCON       = 0x8E;            /* Clock Control                          */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr CS0THL      = 0x96;            /* CS0 Comparator Threshold Low Byte      */
sfr CS0THH      = 0x97;            /* CS0 Comparator Threshold High Byte     */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr SBUF0       = 0x99;            /* UART0 Data Buffer                      */
sfr CPT0CN      = 0x9B;            /* Comparator0 Control                    */
sfr CS0MX       = 0x9C;            /* CS0 Mux Channel Select                 */
sfr CPT0MD      = 0x9D;            /* Comparator0 Mode Selection             */
sfr CS0CF       = 0x9E;            /* CS0 Configuration                      */
sfr CPT0MX      = 0x9F;            /* Comparator0 Mux Selection              */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SPI0CFG     = 0xA1;            /* SPI0 Configuration                     */
sfr SPI0CKR     = 0xA2;            /* SPI0 Clock Rate Control                */
sfr SPI0DAT     = 0xA3;            /* SPI0 Data                              */
sfr P0MDOUT     = 0xA4;            /* Port 0 Output Mode Configuration       */
sfr P1MDOUT     = 0xA5;            /* Port 1 Output Mode Configuration       */
sfr P2MDOUT     = 0xA6;            /* Port 2 Output Mode Configuration       */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr CLKSEL      = 0xA9;            /* Clock Select                           */
sfr CS0DL       = 0xAB;            /* CS0 Data Low Byte                      */
sfr CS0DH       = 0xAC;            /* CS0 Data High Byte                     */
sfr DERIVID     = 0xAD;            /* Derivitive Identification              */
sfr CS0CN       = 0xB0;            /* CS0 Control                            */
sfr OSCXCN      = 0xB1;            /* External Oscillator Control            */
sfr OSCICN      = 0xB2;            /* Internal H-F Oscillator Control        */
sfr OSCICL      = 0xB3;            /* Internal Oscillator Calibration        */
sfr HWID        = 0xB5;            /* Hardware Identification                */
sfr REVID       = 0xB6;            /* Hardware Revision Identification Byte  */
sfr FLKEY       = 0xB7;            /* Flash Lock And Key                     */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr CS0SS       = 0xB9;            /* CS0 Auto-Scan Start Channel            */
sfr CS0SE       = 0xBA;            /* CS0 Auto-Scan End Channel              */
sfr ADC0MX      = 0xBB;            /* AMUX0 Positive Channel Select          */
sfr ADC0CF      = 0xBC;            /* ADC0 Configuration                     */
sfr ADC0L       = 0xBD;            /* ADC0 Low                               */
sfr ADC0H       = 0xBE;            /* ADC0 High                              */
sfr SMB0CN      = 0xC0;            /* SMBus0 Control                         */
sfr SMB0CF      = 0xC1;            /* SMBus0 Configuration                   */
sfr SMB0DAT     = 0xC2;            /* SMBus0 Data                            */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr TMR2CN      = 0xC8;            /* Timer/Counter 2 Control                */
sfr REG0CN      = 0xC9;            /* Voltage Regulator Control              */
sfr TMR2RLL     = 0xCA;            /* Timer/Counter 2 Reload Low             */
sfr TMR2RLH     = 0xCB;            /* Timer/Counter 2 Reload High            */
sfr TMR2L       = 0xCC;            /* Timer/Counter 2 Low                    */
sfr TMR2H       = 0xCD;            /* Timer/Counter 2 High                   */
sfr CRC0CN      = 0xCE;            /* CRC Control                            */
sfr CRC0FLIP    = 0xCF;            /* CRC Flip                               */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr REF0CN      = 0xD1;            /* Voltage Reference Control              */
sfr CRC0AUTO    = 0xD2;            /* CRC Automatic Control                  */
sfr CRC0CNT     = 0xD3;            /* CRC Automatic Flash Sector Count       */
sfr P0SKIP      = 0xD4;            /* Port 0 Skip                            */
sfr P1SKIP      = 0xD5;            /* Port 1 Skip                            */
sfr SMB0ADM     = 0xD6;            /* SMBus Slave Address Mask               */
sfr SMB0ADR     = 0xD7;            /* SMBus Slave Address                    */
sfr PCA0CN      = 0xD8;            /* PCA0 Control                           */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode Register            */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode Register            */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode Register            */
sfr CRC0IN      = 0xDD;            /* CRC Data Input                         */
sfr CRC0DATA    = 0xDE;            /* CRC Data Output                        */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr XBR0        = 0xE1;            /* Port I/O Crossbar Control 0            */
sfr XBR1        = 0xE2;            /* Port I/O Crossbar Control 1            */
sfr IT01CF      = 0xE4;            /* INT0/INT1 Configuration                */
sfr EIE1        = 0xE6;            /* Extended Interrupt Enable 1            */
sfr EIE2        = 0xE7;            /* Extended Interrupt Enable 2            */
sfr ADC0CN      = 0xE8;            /* ADC0 Control                           */
sfr PCA0CPL1    = 0xE9;            /* PCA0 Capture 1 Low                     */
sfr PCA0CPH1    = 0xEA;            /* PCA0 Capture 1 High                    */
sfr PCA0CPL2    = 0xEB;            /* PCA0 Capture 2 Low                     */
sfr PCA0CPH2    = 0xEC;            /* PCA0 Capture 2 High                    */
sfr P1MAT       = 0xED;            /* Port 1 Match                           */
sfr P1MASK      = 0xEE;            /* Port 1 Mask Register                   */
sfr RSTSRC      = 0xEF;            /* Reset Source Configuration/Status      */
sfr B           = 0xF0;            /* B Register                             */
sfr P0MDIN      = 0xF1;            /* Port 0 Input Mode Configuration        */
sfr P1MDIN      = 0xF2;            /* Port 1 Input Mode Configuration        */
sfr EIP1        = 0xF3;            /* Extended Interrupt Priority 1          */
sfr EIP2        = 0xF4;            /* Extended Interrupt Priority 2          */
sfr PCA0PWM     = 0xF7;            /* PCA PWM Configuration                  */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low                       */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High                      */
sfr PCA0CPL0    = 0xFB;            /* PCA0 Capture 0 Low                     */
sfr PCA0CPH0    = 0xFC;            /* PCA0 Capture 0 High                    */
sfr P0MAT       = 0xFD;            /* Port 0 Match                           */
sfr P0MASK      = 0xFE;            /* Port 0 Mask                            */
sfr VDM0CN      = 0xFF;            /* VDD Monitor Control                    */

/* 16-bit Register Definitions (might not be supported by all compilers)     */
sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 CS0TH     = 0x96;            /* CS0 Comparator Threshold               */
sfr16 CS0D      = 0xAB;            /* CS0 Data                               */
sfr16 ADC0      = 0xBD;            /* ADC0 Data                              */
sfr16 ADC0GT    = 0xC3;            /* ADC0 Greater-Than Compare              */
sfr16 ADC0LT    = 0xC5;            /* ADC0 Less-Than Compare                 */
sfr16 TMR2RL    = 0xCA;            /* Timer 2 Reload                         */
sfr16 TMR2      = 0xCC;            /* Timer 2 Counter                        */
sfr16 PCA0CP1   = 0xE9;            /* PCA0 Module 1 Capture/Compare          */
sfr16 PCA0CP2   = 0xEB;            /* PCA0 Module 2 Capture/Compare          */
sfr16 PCA0      = 0xF9;            /* PCA0 Counter                           */
sfr16 PCA0CP0   = 0xFB;            /* PCA0 Module 0 Capture/Compare          */


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
sbit S0MODE   = SCON0^7;           /* UART0 Mode                             */
                                   /* Bit6 UNUSED                            */
sbit MCE0     = SCON0^5;           /* UART0 MCE                              */
sbit REN0     = SCON0^4;           /* UART0 RX Enable                        */
sbit TB80     = SCON0^3;           /* UART0 TX Bit 8                         */
sbit RB80     = SCON0^2;           /* UART0 RX Bit 8                         */
sbit TI0      = SCON0^1;           /* UART0 TX Interrupt Flag                */
sbit RI0      = SCON0^0;           /* UART0 RX Interrupt Flag                */

/* IE 0xA8 */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit ESPI0    = IE^6;              /* SPI0 Interrupt Enable                  */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES0      = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* CS0CN 0xC0 */
sbit CS0EN    = CS0CN^7;           /* CS0 Enable                             */
                                   /* Bit6 UNUSED                            */
sbit CS0INT   = CS0CN^5;           /* CS0 Interrupt Flag                     */
sbit CS0BUSY  = CS0CN^4;           /* CS0 Busy                               */
sbit CS0CMPEN = CS0CN^3;           /* CS0 Digital Comparator Enable          */
                                   /* Bit2 UNUSED                            */
                                   /* Bit1 UNUSED                            */
sbit CS0CMPF  = CS0CN^0;           /* CS0 Digital Comparator Interrupt Flag  */

/* IP 0xB8 */
                                   /* Bit7 UNUSED                            */
sbit PSPI0    = IP^6;              /* SPI0 Priority                          */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS0      = IP^4;              /* UART0 Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

/* SMB0CN 0xC0 */
sbit MASTER   = SMB0CN^7;          /* SMBus0 Master/Slave                    */
sbit TXMODE   = SMB0CN^6;          /* SMBus0 Transmit Mode                   */
sbit STA      = SMB0CN^5;          /* SMBus0 Start Flag                      */
sbit STO      = SMB0CN^4;          /* SMBus0 Stop Flag                       */
sbit ACKRQ    = SMB0CN^3;          /* SMBus0 Acknowledge Request             */
sbit ARBLOST  = SMB0CN^2;          /* SMBus0 Arbitration Lost                */
sbit ACK      = SMB0CN^1;          /* SMBus0 Acknowledge Flag                */
sbit SI       = SMB0CN^0;          /* SMBus0 Interrupt Pending Flag          */

/* TMR2CN 0xC8 */
sbit TF2H     = TMR2CN^7;          /* Timer 2 High Byte Overflow Flag        */
sbit TF2L     = TMR2CN^6;          /* Timer 2 Low Byte Overflow Flag         */
sbit TF2LEN   = TMR2CN^5;          /* Timer 2 Low Byte Interrupt Enable      */
sbit TF2CEN   = TMR2CN^4;          /* Timer 2 Lfo Capture Enable             */
sbit T2SPLIT  = TMR2CN^3;          /* Timer 2 Split Mode Enable              */
sbit TR2      = TMR2CN^2;          /* Timer 2 On/Off Control                 */
                                   /* Bit6 UNUSED                            */
sbit T2XCLK   = TMR2CN^0;          /* Timer 2 External Clock Select          */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* PCA0CN 0xD8 */
sbit CF       = PCA0CN^7;          /* PCA0 Counter Overflow Flag             */
sbit CR       = PCA0CN^6;          /* PCA0 Counter Run Control Bit           */
                                   /* Bit5 UNUSED                            */
                                   /* Bit4 UNUSED                            */
                                   /* Bit3 UNUSED                            */
sbit CCF2     = PCA0CN^2;          /* PCA0 Module 2 Interrupt Flag           */
sbit CCF1     = PCA0CN^1;          /* PCA0 Module 1 Interrupt Flag           */
sbit CCF0     = PCA0CN^0;          /* PCA0 Module 0 Interrupt Flag           */

/* ADC0CN 0xE8 */
sbit AD0EN    = ADC0CN^7;          /* ADC0 Enable                            */
sbit AD0TM    = ADC0CN^6;          /* ADC0 Track Mode                        */
sbit AD0INT   = ADC0CN^5;          /* ADC0 EOC Interrupt Flag                */
sbit AD0BUSY  = ADC0CN^4;          /* ADC0 Busy Flag                         */
sbit AD0WINT  = ADC0CN^3;          /* ADC0 Window Interrupt Flag             */
sbit AD0CM2   = ADC0CN^2;          /* ADC0 Convert Start Mode Bit 2          */
sbit AD0CM1   = ADC0CN^1;          /* ADC0 Convert Start Mode Bit 1          */
sbit AD0CM0   = ADC0CN^0;          /* ADC0 Convert Start Mode Bit 0          */

/* SPI0CN 0xF8 */
sbit SPIF     = SPI0CN^7;          /* SPI0 Interrupt Flag                    */
sbit WCOL     = SPI0CN^6;          /* SPI0 Write Collision Flag              */
sbit MODF     = SPI0CN^5;          /* SPI0 Mode Fault Flag                   */
sbit RXOVRN   = SPI0CN^4;          /* SPI0 RX Overrun Flag                   */
sbit NSSMD1   = SPI0CN^3;          /* SPI0 Slave Select Mode 1               */
sbit NSSMD0   = SPI0CN^2;          /* SPI0 Slave Select Mode 0               */
sbit TXBMT    = SPI0CN^1;          /* SPI0 TX Buffer Empty Flag              */
sbit SPIEN    = SPI0CN^0;          /* SPI0 SPI0 Enable                       */


/* Interrupt Priorities */
#define INTERRUPT_INT0             0  /* External Interrupt 0                */
#define INTERRUPT_TIMER0           1  /* Timer0 Overflow                     */
#define INTERRUPT_INT1             2  /* External Interrupt 1                */
#define INTERRUPT_TIMER1           3  /* Timer1 Overflow                     */
#define INTERRUPT_UART0            4  /* Serial Port 0                       */
#define INTERRUPT_TIMER2           5  /* Timer2 Overflow                     */
#define INTERRUPT_SPI0             6  /* Serial Peripheral Interface 0       */
#define INTERRUPT_SMBUS0           7  /* SMBus0 Interface                    */
#define INTERRUPT_PORT_MATCH       8  /* Port Match Event                    */
#define INTERRUPT_ADC0_WINDOW      9  /* ADC0 Window Comparison              */
#define INTERRUPT_ADC0_EOC         10 /* ADC0 End Of Conversion              */
#define INTERRUPT_PCA0             11 /* PCA0 Peripheral                     */
#define INTERRUPT_COMPARATOR0      12 /* Comparator0                         */
                                      /* Interrupt 13 is RESERVED            */
                                      /* Interrupt 14 is RESERVED            */
#define INTERRUPT_CS0_EOC          15 /* CS0 End of Conversion               */
#define INTERRUPT_CS0_GRT          16 /* CS0 Comparator Greater Than         */


#endif                                 /* #define __REG51F800_H__            */