/*-----------------------------------------------------------------------------
  REG51F540.H

Header file for Silabs C8051F540 device.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG51F540_H__
#define __REG51F540_H__


/* SFRPage 0x00 and SFRPage 0x0F Registers */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr SFR0CN      = 0x84;            /* SFR Page Control                       */
sfr SFRNEXT     = 0x85;            /* SFR stack next page                    */
sfr SFRLAST     = 0x86;            /* SFR stack last page                    */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr TMOD        = 0x89;            /* Timer/Counter Mode                     */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low                    */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low                    */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High                   */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High                   */
sfr CKCON       = 0x8E;            /* Clock Control                          */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr CLKSEL      = 0x8F;            /* System clock select                    */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr TMR3CN      = 0x91;            /* Timer/Counter 3 Control                */
sfr TMR3RLL     = 0x92;            /* Timer/Counter 3 Reload Low             */
sfr TMR3RLH     = 0x93;            /* Timer/Counter 3 Reload High            */
sfr TMR3L       = 0x94;            /* Timer/Counter 3 Low                    */
sfr TMR3H       = 0x95;            /* Timer/Counter 3 High                   */
sfr CLKMUL      = 0x97;            /* Clock Multiplier                       */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr SBUF0       = 0x99;            /* UART0 Data Buffer                      */
sfr CPT0CN      = 0x9A;            /* Comparator 0 Control                   */
sfr CPT0MD      = 0x9B;            /* Comparator 0 Mode                      */
sfr CPT0MX      = 0x9C;            /* Comparator 0 Mux                       */
sfr CPT1CN      = 0x9D;            /* Comparator 1 Control                   */
sfr CPT1MD      = 0x9E;            /* Comparator 0 Mode                      */
sfr OSCIFIN     = 0x9E;            /* Internal Oscillator Fine Control       */
sfr CPT1MX      = 0x9F;            /* Comparator 1 Mux                       */
sfr OSCXCN      = 0x9F;            /* External Oscillator Control            */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SPI0CFG     = 0xA1;            /* SPI0 Configuration                     */
sfr OSCICN      = 0xA1;            /* Internal Oscillator Control            */
sfr SPI0CKR     = 0xA2;            /* SPI0 Clock rate control                */
sfr OSCICRS     = 0xA2;            /* Internal Oscillator Coarse Control     */
sfr SPI0DAT     = 0xA3;            /* SPI0 Data Buffer                       */
sfr P0MDOUT     = 0xA4;            /* Port 0 Output Mode                     */
sfr P1MDOUT     = 0xA5;            /* Port 1 Output Mode                     */
sfr P2MDOUT     = 0xA6;            /* Port 2 Output Mode                     */
sfr SFRPAGE     = 0xA7;            /* SFR Page Select                        */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr SMOD0       = 0xA9;            /* Serial Port 0 Control                  */
sfr EMI0CN      = 0xAA;            /* EMIF Control                           */
sfr SBCON0      = 0xAB;            /* UART0 Baud Rate Generator Control      */
sfr SBRLL0      = 0xAC;            /* UART0 Baud Rate Generator Low          */
sfr SBRLH0      = 0xAD;            /* UART0 Baud Rate Generator High         */
sfr P3MAT       = 0xAE;            /* Port 3 Match                           */
sfr P3MDOUT     = 0xAE;            /* Port 3 Mode                            */
sfr P3MASK      = 0xAF;            /* Port 3 Mask                            */
sfr P3          = 0xB0;            /* Port 3 Latch                           */
sfr P2MAT       = 0xB1;            /* Port 2 Match                           */
sfr P2MASK      = 0xB2;            /* Port 2 Mask                            */
sfr FLSCL       = 0xB6;            /* Flash Scale                            */
sfr FLKEY       = 0xB7;            /* Flash access limit                     */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr SMB0ADR     = 0xB9;            /* SMBus0 Slave address                   */
sfr ADC0TK      = 0xBA;            /* ADC0 Tracking Mode Select              */
sfr SMB0ADM     = 0xBA;            /* SMBus0 Address Mask                    */
sfr ADC0MX      = 0xBB;            /* AMUX0 Channel select                   */
sfr ADC0CF      = 0xBC;            /* AMUX0 Channel configuration            */
sfr ADC0L       = 0xBD;            /* ADC0 Data Low                          */
sfr ADC0H       = 0xBE;            /* ADC0 Data High                         */
sfr SMB0CN      = 0xC0;            /* SMBus0 Control                         */
sfr SMB0CF      = 0xC1;            /* SMBus0 Configuration                   */
sfr SMB0DAT     = 0xC2;            /* SMBus0 Data                            */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr XBR2        = 0xC7;            /* Port I/O Crossbar Control 2            */
sfr TMR2CN      = 0xC8;            /* Timer/Counter 2 Control                */
sfr REG0CN      = 0xC9;            /* Regulator Control                      */
sfr LIN0CF      = 0xC9;            /* LIN 0 Configuration                    */
sfr TMR2RLL     = 0xCA;            /* Timer/Counter 2 Reload Low             */
sfr TMR2RLH     = 0xCB;            /* Timer/Counter 2 Reload High            */
sfr TMR2L       = 0xCC;            /* Timer/Counter 2 Low                    */
sfr TMR2H       = 0xCD;            /* Timer/Counter 2 High                   */
sfr PCA0CPL5    = 0xCE;            /* PCA0 Capture 5 Low                     */
sfr PCA1CPL5    = 0xCE;            /* PCA1 Capture 5 Low                     */
sfr PCA0CPH5    = 0xCF;            /* PCA0 Capture 5 High                    */
sfr PCA1CPH5    = 0xCF;            /* PCA1 Capture 5 High                    */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr REF0CN      = 0xD1;            /* Voltage Reference Control              */
sfr LIN0DAT     = 0xD2;            /* LIN0 Data                              */
sfr LIN0ADR     = 0xD3;            /* LIN0 Address                           */
sfr P0SKIP      = 0xD4;            /* Port 0 Skip                            */
sfr P1SKIP      = 0xD5;            /* Port 1 Skip                            */
sfr P2SKIP      = 0xD6;            /* Port 2 Skip                            */
sfr P3SKIP      = 0xD7;            /* Port 3 Skip                            */
sfr PCA0CN      = 0xD8;            /* PCA0 Control                           */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0PWM     = 0xD9;            /* PCA0 PWM Control                       */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode                     */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode                     */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode                     */
sfr PCA0CPM3    = 0xDD;            /* PCA0 Module 3 Mode                     */
sfr PCA0CPM4    = 0xDE;            /* PCA0 Module 4 Mode                     */
sfr PCA0CPM5    = 0xDF;            /* PCA0 Module 5 Mode                     */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr XBR0        = 0xE1;            /* Port I/O Crossbar Control 0            */
sfr XBR1        = 0xE2;            /* Port I/O Crossbar Control 1            */
sfr CCH0CN      = 0xE3;            /* Cache control                          */
sfr IT01CF      = 0xE4;            /* INT0/INT1 Configuration                */
sfr EIE1        = 0xE6;            /* Extended Interrupt Enable 2            */
sfr EIE2        = 0xE7;            /* Extended Interrupt Enable 2            */
sfr ADC0CN      = 0xE8;            /* ADC0 Control                           */
sfr PCA0CPL1    = 0xE9;            /* PCA0 Capture 2 Low                     */
sfr PCA0CPH1    = 0xEA;            /* PCA0 Capture 2 High                    */
sfr PCA0CPL2    = 0xEB;            /* PCA0 Capture 3 Low                     */
sfr PCA0CPH2    = 0xEC;            /* PCA0 Capture 3 High                    */
sfr PCA0CPL3    = 0xED;            /* PCA0 Capture 4 Low                     */
sfr PCA0CPH3    = 0xEE;            /* PCA0 Capture 4 High                    */
sfr RSTSRC      = 0xEF;            /* Reset Source Configuration/Status      */
sfr B           = 0xF0;            /* B Register                             */
sfr P0MAT       = 0xF1;            /* Port 0 Match                           */
sfr P0MDIN      = 0xF1;            /* Port 0 Input Mode                      */
sfr P0MASK      = 0xF2;            /* Port 0 Mask                            */
sfr P1MDIN      = 0xF2;            /* Port 1 Input Mode                      */
sfr P1MAT       = 0xF3;            /* Port 1 Match                           */
sfr P2MDIN      = 0xF3;            /* Port 2 Input Mode                      */
sfr P1MASK      = 0xF4;            /* Port 1 Mask                            */
sfr P3MDIN      = 0xF4;            /* Port 3 Input Mode                      */
sfr PSBANK      = 0xF5;            /* Program Space Bank Select              */
sfr EIP1        = 0xF6;            /* External Interrupt Priority 1          */
sfr EIP2        = 0xF7;            /* External Interrupt Priority 2          */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low                       */
sfr SN0         = 0xF9;            /* Serial Number 0                        */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High                      */
sfr SN1         = 0xFA;            /* Serial Number 1                        */
sfr PCA0CPL0    = 0xFB;            /* PCA0 Capture 0 Low                     */
sfr SN2         = 0xFB;            /* Serial Number 2                        */
sfr PCA0CPH0    = 0xFC;            /* PCA0 Capture 0 High                    */
sfr SN3         = 0xFC;            /* Serial Number 3                        */
sfr PCA0CPL4    = 0xFD;            /* PCA0 Capture 4 Low                     */
sfr PCA0CPH4    = 0xFE;            /* PCA0 Capture 4 High                    */
sfr VDM0CN      = 0xFF;            /* VDD Monitor Control                    */

/* 16-bit Register Definitions */
sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 TMR3RL    = 0x92;            /* Timer 3 Reload                         */
sfr16 TMR3      = 0x94;            /* Timer 3 Capture / Reload               */
sfr16 SBRL0     = 0xAC;            /* UART0 Reload                           */
sfr16 ADC0      = 0xBD;            /* ADC0 data                              */
sfr16 ADC0GT    = 0xC3;            /* ADC0 Greater Than Window               */
sfr16 ADC0LT    = 0xC5;            /* ADC0 Less Than Window                  */
sfr16 TMR2RL    = 0xCA;            /* Timer 2 Reload                         */
sfr16 TMR2      = 0xCC;            /* Timer 2 Capture / Reload               */
sfr16 PCA0CP5   = 0xCE;            /* PCA0 Module 5 Capture                  */
sfr16 PCA0CP1   = 0xE9;            /* PCA0 Module 1 Capture                  */
sfr16 PCA0CP2   = 0xEB;            /* PCA0 Module 2 Capture                  */
sfr16 PCA0CP3   = 0xED;            /* PCA0 Module 3 Capture                  */
sfr16 PCA0      = 0xF9;            /* PCA0 Counter                           */
sfr16 PCA0CP0   = 0xFB;            /* PCA0 Module 0 Capture                  */
sfr16 PCA0CP4   = 0xFD;            /* PCA0 Module 4 Capture                  */


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
sbit OVR0     = SCON0^7;           /* UART0 Mode 0                           */
sbit PERR0    = SCON0^6;           /* UART0 Parity Error Flag                */
sbit THRE0    = SCON0^5;           /* UART0 Transmit Holding Reg. Empty      */
sbit REN0     = SCON0^4;           /* UART0 RX Enable                        */
sbit TBX0     = SCON0^3;           /* UART0 TX Bit 8                         */
sbit RBX0     = SCON0^2;           /* UART0 RX Bit 8                         */
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

/* IP 0xB8 */
                                   /* Bit 7 unused                           */
sbit PSPI0    = IP^6;              /* SPI0 Interrupt Priority                */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS0      = IP^4;              /* UART0 Priority                         */
sbit PS       = IP^4;              /* UART0 Priority                         */
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
sbit T2RCLK   = TMR2CN^1;          /* Timer 2 Xclk/Rclk Select               */
sbit T2XCLK   = TMR2CN^0;          /* Timer 2 Clk/8 Clock Source             */

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
sbit CCF5     = PCA0CN^5;          /* PCA0 Module 5 Interrupt Flag           */
sbit CCF4     = PCA0CN^4;          /* PCA0 Module 4 Interrupt Flag           */
sbit CCF3     = PCA0CN^3;          /* PCA0 Module 3 Interrupt Flag           */
sbit CCF2     = PCA0CN^2;          /* PCA0 Module 2 Interrupt Flag           */
sbit CCF1     = PCA0CN^1;          /* PCA0 Module 1 Interrupt Flag           */
sbit CCF0     = PCA0CN^0;          /* PCA0 Module 0 Interrupt Flag           */

/* ADC0CN 0xE8 */
sbit AD0EN    = ADC0CN^7;          /* ADC0 Enable                            */
sbit BURSTEN  = ADC0CN^6;          /* ADC0 Burst Enable                      */
sbit AD0INT   = ADC0CN^5;          /* ADC0 EOC Interrupt Flag                */
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


/* LIN0 Indirectly Addressable Registers */
#define  LIN0DT1   0x00            /* LIN0 Data Byte 1                       */
#define  LIN0DT2   0x01            /* LIN0 Data Byte 2                       */
#define  LIN0DT3   0x02            /* LIN0 Data Byte 3                       */
#define  LIN0DT4   0x03            /* LIN0 Data Byte 4                       */
#define  LIN0DT5   0x04            /* LIN0 Data Byte 5                       */
#define  LIN0DT6   0x05            /* LIN0 Data Byte 6                       */
#define  LIN0DT7   0x06            /* LIN0 Data Byte 7                       */
#define  LIN0DT8   0x07            /* LIN0 Data Byte 8                       */
#define  LIN0CTRL  0x08            /* LIN0 Control                           */
#define  LIN0ST    0x09            /* LIN0 Status                            */
#define  LIN0ERR   0x0A            /* LIN0 Error                             */
#define  LIN0SIZE  0x0B            /* LIN0 Message Size                      */
#define  LIN0DIV   0x0C            /* LIN0 Divider                           */
#define  LIN0MUL   0x0D            /* LIN0 Multiplier                        */
#define  LIN0ID    0x0E            /* LIN0 Identifier                        */


/* Interrupt Priorities */
#define INTERRUPT_INT0             0   /* External Interrupt 0               */
#define INTERRUPT_TIMER0           1   /* Timer 0 Overflow                   */
#define INTERRUPT_INT1             2   /* External Interrupt 1               */
#define INTERRUPT_TIMER1           3   /* Timer 1 Overflow                   */
#define INTERRUPT_UART0            4   /* UART0                              */
#define INTERRUPT_TIMER2           5   /* Timer 2 Overflow                   */
#define INTERRUPT_SPI0             6   /* SPI0                               */
#define INTERRUPT_SMBUS0           7   /* SMBus0 Interface                   */
#define INTERRUPT_ADC0_WINDOW      8   /* ADC0 Window Comparison             */
#define INTERRUPT_ADC0_EOC         9   /* ADC0 End Of Conversion             */
#define INTERRUPT_PCA0            10   /* PCA0 Peripheral                    */
#define INTERRUPT_COMPARATOR0     11   /* Comparator 0 Comparison            */
#define INTERRUPT_COMPARATOR1     12   /* Comparator 1 Comparison            */
#define INTERRUPT_TIMER3          13   /* Timer 3 Overflow                   */
#define INTERRUPT_LIN0            14   /* LIN Bus Interrupt                  */
#define INTERRUPT_VREG            15   /* Voltage Regulator                  */
#define INTERRUPT_PORT_MATCH      17   /* Port Match                         */


/* SFR Page Definitions */
#define  CONFIG_PAGE       0x0F        /* System and Port Configuration Page */
#define  ACTIVE_PAGE       0x00        /* Active Use Page                    */

#endif                                 /* #define __REG51F540_H__            */
