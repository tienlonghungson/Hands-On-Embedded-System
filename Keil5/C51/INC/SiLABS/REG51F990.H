/*-----------------------------------------------------------------------------
  REG51F990.H

Header file for Silabs C8051F99x and C8051F98x devices.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __REG51F990_H__
#define __REG51F990_H__

/* Byte Registers */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr CRC0CN      = 0x84;            /* CRC0 Control                           */
sfr CRC0IN      = 0x85;            /* CRC0 Input                             */
sfr CRC0DAT     = 0x86;            /* CRC0 Data                              */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr TMOD        = 0x89;            /* Timer/Counter Mode                     */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low                    */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low                    */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High                   */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High                   */
sfr TOFFL       = 0x8D;            /* Temperature Offset Low                 */
sfr CKCON       = 0x8E;            /* Clock Control                          */
sfr TOFFH       = 0x8E;            /* Temperature Offset High                */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr TMR3CN      = 0x91;            /* Timer/Counter 3 Control                */
sfr TMR3RLL     = 0x92;            /* Timer/Counter 3 Reload Low             */
sfr TMR3RLH     = 0x93;            /* Timer/Counter 3 Reload High            */
sfr TMR3L       = 0x94;            /* Timer/Counter 3 Low                    */
sfr TMR3H       = 0x95;            /* Timer/Counter 3 High                   */
sfr ADC0MX      = 0x96;            /* AMUX0 Channel Select                   */
sfr ADC0CF      = 0x97;            /* ADC0 Configuration                     */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr P0DRV       = 0x99;            /* Port 0 Drive Strength                  */
sfr SBUF0       = 0x99;            /* UART0 Data Buffer                      */
sfr CRC0CNT     = 0x9A;            /* CRC0 Automatic Flash Sector Count      */
sfr CPT0CN      = 0x9B;            /* Comparator0 Control                    */
sfr P1DRV       = 0x9B;            /* Port 1 Drive Strength                  */
sfr CRC0FLIP    = 0x9C;            /* CRC0 Flip                              */
sfr CPT0MD      = 0x9D;            /* Comparator0 Mode Selection             */
sfr P2DRV       = 0x9D;            /* Port 2 Drive Strength                  */
sfr CRC0AUTO    = 0x9E;            /* CRC0 Automatic Control                 */
sfr CPT0MX      = 0x9F;            /* Comparator0 Mux Selection              */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SPI0CFG     = 0xA1;            /* SPI0 Configuration                     */
sfr SPI0CKR     = 0xA2;            /* SPI0 Clock Rate Control                */
sfr SPI0DAT     = 0xA3;            /* SPI0 Data                              */
sfr P0MDOUT     = 0xA4;            /* Port 0 Output Mode Configuration       */
sfr P1MDOUT     = 0xA5;            /* Port 1 Output Mode Configuration       */
sfr P2MDOUT     = 0xA6;            /* Port 2 Output Mode Configuration       */
sfr SFRPAGE     = 0xA7;            /* SFR Page                               */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr CLKSEL      = 0xA9;            /* Clock Select                           */
sfr CS0CF       = 0xAA;            /* CS0 Configuration                      */
sfr CS0MX       = 0xAB;            /* CS0 Mux Channel Select                 */
sfr RTC0ADR     = 0xAC;            /* RTC0 Address                           */
sfr RTC0DAT     = 0xAD;            /* RTC0 Data                              */
sfr RTC0KEY     = 0xAE;            /* RTC0 Key                               */
sfr CS0MD1      = 0xAF;            /* CS0 Mode 1                             */
sfr CS0CN       = 0xB0;            /* CS0 Control                            */
sfr OSCXCN      = 0xB1;            /* External Oscillator Control            */
sfr OSCICN      = 0xB2;            /* Internal Oscillator Control            */
sfr OSCICL      = 0xB3;            /* Internal Oscillator Calibration        */
sfr PMU0CF      = 0xB5;            /* PMU0 Configuration                     */
sfr PMU0MD      = 0xB5;            /* PMU0 Mode                              */
sfr FLSCL       = 0xB6;            /* Flash Scale Register                   */
sfr FLKEY       = 0xB7;            /* Flash Lock And Key                     */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr IREF0CF     = 0xB9;            /* Current Reference IREF0 Configuration  */
sfr ADC0AC      = 0xBA;            /* ADC0 Accumulator Configuration         */
sfr ADC0PWR     = 0xBB;            /* ADC0 Burst Mode Power-Up Time          */
sfr ADC0TK      = 0xBC;            /* ADC0 Tracking Control                  */
sfr ADC0L       = 0xBD;            /* ADC0 Low                               */
sfr ADC0H       = 0xBE;            /* ADC0 High                              */
sfr P1MASK      = 0xBF;            /* Port 1 Mask                            */
sfr SMB0CN      = 0xC0;            /* SMBus0 Control                         */
sfr SMB0CF      = 0xC1;            /* SMBus0 Configuration                   */
sfr SMB0DAT     = 0xC2;            /* SMBus0 Data                            */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr P0MASK      = 0xC7;            /* Port 0 Mask                            */
sfr TMR2CN      = 0xC8;            /* Timer/Counter 2 Control                */
sfr REG0CN      = 0xC9;            /* Voltage Regulator REG0 Control         */
sfr TMR2RLL     = 0xCA;            /* Timer/Counter 2 Reload Low             */
sfr TMR2RLH     = 0xCB;            /* Timer/Counter 2 Reload High            */
sfr TMR2L       = 0xCC;            /* Timer/Counter 2 Low                    */
sfr TMR2H       = 0xCD;            /* Timer/Counter 2 High                   */
sfr PMU0FL      = 0xCE;            /* PMU0 Flag Register                     */
sfr P1MAT       = 0xCF;            /* Port 1 Match                           */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr REF0CN      = 0xD1;            /* Voltage Reference Control              */
sfr CS0SCAN0    = 0xD2;            /* CS0 Scan Channel Enable 0              */
sfr CS0SCAN1    = 0xD3;            /* CS0 Scan Channel Enable 1              */
sfr P0SKIP      = 0xD4;            /* Port 0 Skip                            */
sfr P1SKIP      = 0xD5;            /* Port 1 Skip                            */
sfr IREF0CN     = 0xD6;            /* Current Reference IREF0 Control        */
sfr P0MAT       = 0xD7;            /* Port 0 Match                           */
sfr PCA0CN      = 0xD8;            /* PCA0 Control                           */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode Register            */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode Register            */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode Register            */
sfr CS0SS       = 0xDD;            /* CS0 Auto-Scan Start Channel            */
sfr CS0SE       = 0xDE;            /* CS0 Auto-Scan End Channel              */
sfr CS0PM       = 0xDE;            /* CS0 Power Management                   */
sfr PCA0PWM     = 0xDF;            /* PCA0 PWM Configuration                 */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr XBR0        = 0xE1;            /* Port I/O Crossbar Control 0            */
sfr DEVICEID    = 0xE3;            /* Device ID                              */
sfr XBR1        = 0xE2;            /* Port I/O Crossbar Control 1            */
sfr REVID       = 0xE2;            /* Revision ID                            */
sfr XBR2        = 0xE3;            /* Port I/O Crossbar Control 2            */
sfr IT01CF      = 0xE4;            /* INT0/INT1 Configuration                */
sfr FLWR        = 0xE5;            /* Flash Write Only Register              */
sfr EIE1        = 0xE6;            /* Extended Interrupt Enable 1            */
sfr EIE2        = 0xE7;            /* Extended Interrupt Enable 2            */
sfr ADC0CN      = 0xE8;            /* ADC0 Control                           */
sfr PCA0CPL1    = 0xE9;            /* PCA0 Capture 1 Low                     */
sfr PCA0CPH1    = 0xEA;            /* PCA0 Capture 1 High                    */
sfr PCA0CPL2    = 0xEB;            /* PCA0 Capture 2 Low                     */
sfr PCA0CPH2    = 0xEC;            /* PCA0 Capture 2 High                    */
sfr CS0DL       = 0xED;            /* CS0 Data Low Byte                      */
sfr CS0DH       = 0xEE;            /* CS0 Data High Byte                     */
sfr RSTSRC      = 0xEF;            /* Reset Source Configuration/Status      */
sfr B           = 0xF0;            /* B Register                             */
sfr P0MDIN      = 0xF1;            /* Port 0 Input Mode Configuration        */
sfr P1MDIN      = 0xF2;            /* Port 1 Input Mode Configuration        */
sfr CS0MD2      = 0xF3;            /* CS0 Mode 2                             */
sfr CS0MD3      = 0xF3;            /* CS0 Mode 3                             */
sfr SMB0ADR     = 0xF4;            /* SMBus Slave Address                    */
sfr SMB0ADM     = 0xF5;            /* SMBus Slave Address Mask               */
sfr EIP1        = 0xF6;            /* Extended Interrupt Priority 1          */
sfr EIP2        = 0xF7;            /* Extended Interrupt Priority 2          */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low                       */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High                      */
sfr PCA0CPL0    = 0xFB;            /* PCA0 Capture 0 Low                     */
sfr PCA0CPH0    = 0xFC;            /* PCA0 Capture 0 High                    */
sfr CS0THL      = 0xFD;            /* CS0 Comparator Threshold Low Byte      */
sfr CS0THH      = 0xFE;            /* CS0 Comparator Threshold High Byte     */
sfr VDM0CN      = 0xFF;            /* VDD Monitor Control                    */

/*  16-bit Register Definitions might not be supported by all compilers)*/

sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 TOFF      = 0x8D;            /* Temperature Sensor Offset              */
sfr16 TMR3RL    = 0x92;            /* Timer 3 Reload                         */
sfr16 TMR3      = 0x94;            /* Timer 3 Counter                        */
sfr16 ADC0      = 0xBD;            /* ADC0 Data                              */
sfr16 ADC0GT    = 0xC3;            /* ADC0 Greater-Than Compare              */
sfr16 ADC0LT    = 0xC5;            /* ADC0 Less-Than Compare                 */
sfr16 TMR2RL    = 0xCA;            /* Timer 2 Reload                         */
sfr16 TMR2      = 0xCC;            /* Timer 2 Counter                        */
sfr16 PCA0CP1   = 0xE9;            /* PCA0 Module 1 Capture/Compare          */
sfr16 PCA0CP2   = 0xEB;            /* PCA0 Module 2 Capture/Compare          */
sfr16 CS0D      = 0xED;            /* CS0 Threshold                          */
sfr16 PCA0      = 0xF9;            /* PCA0 Counter                           */
sfr16 PCA0CP0   = 0xFB;            /* PCA0 Module 0 Capture/Compare          */
sfr16 CS0TH     = 0xFD;            /* CS0 Threshold                          */


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

/* CS0CN 0xB0 */
sbit CS0EN    = CS0CN^7;           /* CS0 Enable                             */
sbit CS0EOS   = CS0CN^6;           /* CS0 End Of Scan Interrupt Flag         */
sbit CS0INT   = CS0CN^5;           /* CS0 End Of Conversion Interrupt Flag   */
sbit CS0BUSY  = CS0CN^4;           /* CS0 Busy Bit                           */
sbit CS0CMPEN = CS0CN^3;           /* CS0 Digital Comparator Enable          */
sbit CS0BBB   = CS0CN^2;           /* CS0 BBB                                */
sbit CS0AAA   = CS0CN^1;           /* CS0 AAA                                */
sbit CS0CMPF  = CS0CN^0;           /* CS0 Enable                             */

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
sbit T2RCLK   = TMR2CN^1;          /* Timer 2 Capture Mode                   */
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
sbit AD0WINT  = ADC0CN^3;          /* ADC0 Window Interrupt Flag             */
sbit AD0CM2   = ADC0CN^2;          /* ADC0 Convert Start Mode Bit 2          */
sbit AD0CM1   = ADC0CN^1;          /* ADC0 Convert Start Mode Bit 1          */
sbit AD0CM0   = ADC0CN^0;          /* ADC0 Convert Start Mode Bit 0          */

/* SPI0CN 0xF8 */
sbit SPIF0    = SPI0CN^7;          /* SPI0 Interrupt Flag                    */
sbit WCOL0    = SPI0CN^6;          /* SPI0 Write Collision Flag              */
sbit MODF0    = SPI0CN^5;          /* SPI0 Mode Fault Flag                   */
sbit RXOVRN0  = SPI0CN^4;          /* SPI0 RX Overrun Flag                   */
sbit NSS0MD1  = SPI0CN^3;          /* SPI0 Slave Select Mode 1               */
sbit NSS0MD0  = SPI0CN^2;          /* SPI0 Slave Select Mode 0               */
sbit TXBMT0   = SPI0CN^1;          /* SPI0 TX Buffer Empty Flag              */
sbit SPI0EN   = SPI0CN^0;          /* SPI0 Enable                            */


/* Interrupt Priorities */
#define INTERRUPT_INT0             0  /* External Interrupt 0                */
#define INTERRUPT_TIMER0           1  /* Timer0 Overflow                     */
#define INTERRUPT_INT1             2  /* External Interrupt 1                */
#define INTERRUPT_TIMER1           3  /* Timer1 Overflow                     */
#define INTERRUPT_UART0            4  /* Serial Port 0                       */
#define INTERRUPT_TIMER2           5  /* Timer2 Overflow                     */
#define INTERRUPT_SPI0             6  /* Serial Peripheral Interface 0       */
#define INTERRUPT_SMBUS0           7  /* SMBus0 Interface                    */
#define INTERRUPT_RTC0ALARM        8  /* RTC0 (SmaRTClock) Alarm             */
#define INTERRUPT_ADC0_WINDOW      9  /* ADC0 Window Comparison              */
#define INTERRUPT_ADC0_EOC         10 /* ADC0 End Of Conversion              */
#define INTERRUPT_PCA0             11 /* PCA0 Peripheral                     */
#define INTERRUPT_COMPARATOR0      12 /* Comparator0                         */
#define INTERRUPT_COMPARATOR1      13 /* Comparator1                         */
#define INTERRUPT_TIMER3           14 /* Timer3 Overflow                     */
#define INTERRUPT_VDDMON           15 /* VDD Monitor Early Warning           */
#define INTERRUPT_PORT_MATCH       16 /* Port Match                          */
#define INTERRUPT_RTC0_OSC_FAIL    17 /* RTC0 (smaRTClock) Osc. Fail         */
#define INTERRUPT_SPI1             18 /* Serial Peripheral Interface 1       */

/* SFR Page Definitions */
#define CONFIG_PAGE            0x0F   /* SYSTEM AND PORT CONFIGURATION PAGE  */
#define LEGACY_PAGE            0x00   /* LEGACY SFR PAGE                     */
#define CRC0_PAGE              0x0F   /* CRC0                                */
#define TOFF_PAGE              0x0F   /* TEMPERATURE SENSOR OFFSET PAGE      */


#endif                                 /* #define __REG51F990_H__            */