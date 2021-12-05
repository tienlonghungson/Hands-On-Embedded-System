/*-----------------------------------------------------------------------------
  REG51F970.H

Header file for Silabs C8051F97x devices.
Copyright (c) 2014 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG51F970_H__
#define __REG51F970_H__

/* Byte Registers */
/* SFRs all pages */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr PCON        = 0x87;            /* Power Control                          */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SFRPAGE     = 0xA7;            /* SFR Page                               */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr SFRLAST     = 0xB3;            /* SFR Page Last                          */
sfr FLKEY       = 0xB7;            /* Flash Lock And Key                     */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr ADC0PWR     = 0xBB;            /* ADC0 Power Control                     */
sfr ADC0TK      = 0xBC;            /* ADC0 Burst Mode Track Time             */
sfr TMR2CN      = 0xC8;            /* Timer/Counter 2 Control                */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr FLWR        = 0xE5;            /* Flash write only                       */
sfr EIE1        = 0xE6;            /* Extended Interrupt Enable 1            */
sfr EIE2        = 0xE7;            /* Extended Interrupt Enable 2            */
sfr B           = 0xF0;            /* B Register                             */
sfr SFRNEXT     = 0xF3;            /* SFR Page Next                          */


/* SFRs page 0x0 */
sfr CRC0CN      = 0x84;            /* CRC0 Automatic Flash Sector Count      */
sfr CRC0IN      = 0x85;            /* CRC0 Data Input                        */
sfr CRC0DAT     = 0x86;            /* CRC0 Data Output                       */
sfr TCON       =  0x88;            /* Timer 0/1 Control                      */
sfr TMOD        = 0x89;            /* Timer/Counter Mode                     */
sfr TL0         = 0x8A;            /* Timer/Counter 0 Low                    */
sfr TL1         = 0x8B;            /* Timer/Counter 1 Low                    */
sfr TH0         = 0x8C;            /* Timer/Counter 0 High                   */
sfr TH1         = 0x8D;            /* Timer/Counter 1 High                   */
sfr CKCON       = 0x8E;            /* Clock Control                          */
sfr TMR3CN      = 0x91;            /* Timer/Counter 3 Control                */
sfr TMR3RLL     = 0x92;            /* Timer/Counter 3 Reload Low             */
sfr TMR3RLH     = 0x93;            /* Timer/Counter 3 Reload High            */
sfr TMR3L       = 0x94;            /* Timer/Counter 3 Low                    */
sfr TMR3H       = 0x95;            /* Timer/Counter 3 High                   */
sfr CS0PM       = 0x96;            /* Capacitive Sense 0 Pin Monitor         */
sfr ADC0CF      = 0x97;            /* ADC0 Configuration                     */
sfr SBUF0       = 0x99;            /* UART0 Data Buffer                      */
sfr AMUX0P0     = 0x9A;            /* Port 0 Analog Multiplexer Control      */
sfr AMUX0P1     = 0x9B;            /* Port 1 Analog Multiplexer Control      */
sfr AMUX0P2     = 0x9C;            /* Port 2 Analog Multiplexer Control      */
sfr CRC0CNT     = 0x9D;            /* CRC0 Automatic Flash Sector Count      */
sfr CRC0AUTO    = 0x9E;            /* CRC0 Automatic Control                 */
sfr CRC0FLIP    = 0x9F;            /* CRC0 Bit Flip                          */
sfr SPI0CFG     = 0xA1;            /* SPI0 Configuration                     */
sfr SPI0CKR     = 0xA2;            /* SPI0 Clock Rate Control                */
sfr SPI0DAT     = 0xA3;            /* SPI0 Data                              */
sfr AMUX0P3     = 0xA4;            /* Port 3 Analog Multiplexer Control      */
sfr AMUX0P4     = 0xA5;            /* Port 4 Analog Multiplexer Control      */
sfr AMUX0P5     = 0xA6;            /* Port 5 Analog Multiplexer Control      */
sfr CLKSEL      = 0xA9;            /* Clock Select; Also on SFR page 0xF     */
sfr CS0CF       = 0xAA;            /* Capacitive Sense 0 Configuration       */
sfr CS0MX       = 0xAB;            /* Capacitive Sense 0 Mux Channel Select  */
sfr RTC0ADR     = 0xAC;            /* RTC0 Address                           */
sfr RTC0DAT     = 0xAD;            /* RTC0 Data                              */
sfr OSCICL      = 0xAF;            /* High Frequency Oscillator Calibration  */
sfr CS0CN       = 0xB0;            /* Capacitive Sense 0 Control             */
sfr OSCXCN      = 0xB1;            /* External Oscillator Control            */
sfr OSCICN      = 0xB2;            /* Internal Oscillator Control            */
sfr PMU0CF      = 0xB5;            /* Power Management Unit 0 Configuration  */
sfr FLSCL       = 0xB6;            /* Flash Scale                            */
sfr EMI0CN      = 0xB9;            /* External Memory Interface Control      */
sfr ADC0AC      = 0xBA;            /* ADC0 Accumulator Configuration         */
sfr CS0MD1      = 0xBD;            /* Capacitive Sense 0 Mode 1              */
sfr CS0MD2      = 0xBE;            /* Capacitive Sense 0 Mode 2              */
sfr CS0MD3      = 0xBF;            /* Capacitive Sense 0 Mode 3              */
sfr SMB0CN      = 0xC0;            /* SMBus0 Control                         */
sfr SMB0CF      = 0xC1;            /* SMBus0 Configuration                   */
sfr SMB0DAT     = 0xC2;            /* SMBus0 Data                            */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr REG0CN      = 0xC9;            /* Voltage Regulator REG0 Control         */
sfr TMR2RLL     = 0xCA;            /* Timer/Counter 2 Reload Low             */
sfr TMR2RLH     = 0xCB;            /* Timer/Counter 2 Reload High            */
sfr TMR2L       = 0xCC;            /* Timer/Counter 2 Low                    */
sfr TMR2H       = 0xCD;            /* Timer/Counter 2 High                   */
sfr PMU0FL      = 0xCE;            /* Power Management Unit Flag             */
sfr PMU0MD      = 0xCF;            /* Power Management Unit Mode             */
sfr REF0CN      = 0xD1;            /* Voltage Reference Control              */
sfr ADC0L       = 0xD2;            /* ADC0 Data Word Low Byte                */
sfr ADC0H       = 0xD3;            /* ADC0 Data Word High Byte               */
sfr ADC0MX      = 0xD4;            /* ADC0 Multiplexer Selection             */
sfr PCA0CN      = 0xD8;            /* PCA Control                            */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode Register            */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode Register            */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode Register            */
sfr CS0SS       = 0xDD;            /* Capacitive Sense 0 Auto Scan Start Channel    */
sfr CS0SE       = 0xDE;            /* Capacitive Sense 0 Auto Scan End Channel      */
sfr PCA0PWM     = 0xDF;            /* PCA0 PWM Configuration                 */
sfr P3          = 0xE1;            /* Port I/O Crossbar Control 0            */
sfr P4          = 0xE2;            /* Port I/O Crossbar Control 1            */
sfr P5          = 0xE3;            /* Port I/O Crossbar Control 2            */
sfr P6          = 0xE4;            /* INT0/INT1 Configuration                */
sfr ADC0CN      = 0xE8;            /* ADC0 Control                           */
sfr PCA0CPL1    = 0xE9;            /* PCA0 Capture 1 Low                     */
sfr PCA0CPH1    = 0xEA;            /* PCA0 Capture 1 High                    */
sfr PCA0CPL2    = 0xEB;            /* PCA0 Capture 2 Low                     */
sfr PCA0CPH2    = 0xEC;            /* PCA0 Capture 2 High                    */
sfr CS0DL       = 0xED;            /* Capacitive Sense 0 Data Low Byte       */
sfr CS0DH       = 0xEE;            /* Capacitive Sense 0 Data High Byte      */
sfr RSTSRC      = 0xEF;            /* Reset Source                           */
sfr SMB0ADR     = 0xF4;            /* SMBus Slave Address                    */
sfr SMB0ADM     = 0xF5;            /* SMBus Slave Address Mask               */
sfr PCLKEN      = 0xF6;            /* Low Power Peripheral Clock Enable      */
sfr CLKMODE     = 0xF7;            /* Clock Mode                             */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low                       */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High                      */
sfr PCA0CPL0    = 0xFB;            /* PCA0 Capture 0 Low                     */
sfr PCA0CPH0    = 0xFC;            /* PCA0 Capture 0 High                    */
sfr CS0THL      = 0xFD;            /* Capacitive Sense 0 Comparator Threshold Low Byte    */
sfr CS0THH      = 0xFE;            /* Capacitive Sense 0 Comparator Threshold High Byte   */
sfr VDM0CN      = 0xFF;            /* Supply Monitor Control                 */


/* SFRs page 0xF */
sfr P2MASK      = 0x80;            /* Port 2 Mask                            */
sfr P2MAT       = 0x80;            /* Port 2 Match                           */
sfr DMA0MINT    = 0x88;            /* DMA0 Mid-Point Interrupt Flags         */
sfr P0MASK      = 0x8B;            /* Port 0 Mask                            */
sfr P1MASK      = 0x8C;            /* Port 1 Mask                            */
sfr TOFFL       = 0x8D;            /* Temperature Sensor Offset Low          */
sfr TOFFH       = 0x8E;            /* Temperature Sensor Offset High         */
sfr DMA0BUSY    = 0x91;            /* DMA0 Busy                              */
sfr DMA0EN      = 0x92;            /* DMA0 Channel Enable                    */
sfr DMA0SEL     = 0x94;            /* DMA0 Channel Select                    */
sfr XBR0        = 0x95;            /* Port I/O Crossbar 0                    */
sfr XBR1        = 0x96;            /* Port I/O Crossbar 1                    */
sfr P6MDIN      = 0x97;            /* Port 6 Input Mode                      */
sfr P0DRV       = 0x99;            /* Port 0 Drive Strength                  */
sfr P1DRV       = 0x9A;            /* Port 1 Drive Strength                  */
sfr P2DRV       = 0x9B;            /* Port 2 Drive Strength                  */
sfr P3DRV       = 0x9C;            /* Port 3 Drive Strength                  */
sfr P5DRV       = 0x9D;            /* Port 5 Drive Strength                  */
sfr I2C0DOUT    = 0xA4;            /* I2C0 Transmit Data                     */
sfr I2C0DIN     = 0xA5;            /* I2C0 Received Data                     */
sfr SFRPGCN     = 0xA6;            /* SFR Page Control                       */
sfr MAC0AL      = 0xAA;            /* Operand A Low Byte                     */
sfr MAC0AH      = 0xAB;            /* Operand A High Byte                    */
sfr I2C0CN      = 0xAC;            /* I2C0 Control                           */
sfr I2C0SLAD    = 0xAD;            /* I2C0 Slave Address                     */
sfr MAC0BL      = 0xAE;            /* Operand B Low Byte                     */
sfr MAC0BH      = 0xAF;            /* Operand B High Byte                    */
sfr P0SKIP      = 0xB6;            /* Port 0 Skip                            */
sfr P4DRV       = 0xB9;            /* Port 4 Drive Strength                  */
sfr MAC0CF0     = 0xC0;            /* MAC0 Configuration 0                   */
sfr MAC0INTE    = 0xC1;            /* MAC0 Interrupt Enable                  */
sfr P4MDOUT     = 0xC3;            /* Port 4 Output Mode                     */
sfr MAC0CF1     = 0xC4;            /* MAC0 Configuration 1                   */
sfr MAC0CF2     = 0xC5;            /* MAC0 Configuration 2                   */
sfr P1SKIP      = 0xC6;            /* Port 1 Skip                            */
sfr P2SKIP      = 0xC7;            /* Port 2 Skip                            */
sfr DMA0NBAL    = 0xC9;            /* Memory Base Address Low                */
sfr DMA0NBAH    = 0xCA;            /* Memory Base Address High               */
sfr DMA0NAOL    = 0xCB;            /* Memory Address Offset Low              */
sfr DMA0NAOH    = 0xCC;            /* Memory Address Offset High             */
sfr DMA0NSZL    = 0xCD;            /* Memory Transfer Size Low               */
sfr DMA0NSZH    = 0xCE;            /* Memory Transfer Size High              */
sfr MAC0STA     = 0xCF;            /* MAC0 Status                            */
sfr MAC0ACC0    = 0xD2;            /* Accumulator Byte 0                     */
sfr MAC0ACC1    = 0xD3;            /* Accumulator Byte 1                     */
sfr MAC0ACC2    = 0xD4;            /* Accumulator Byte 2                     */
sfr MAC0ACC3    = 0xD5;            /* Accumulator Byte 3                     */
sfr MAC0OVF     = 0xD6;            /* Accumulator Overflow Byte              */
sfr MAC0ITER    = 0xD7;            /* Iteration Counter                      */
sfr DMA0NCF     = 0xD8;            /* DMA0 Channel Configuration             */
sfr P0MDOUT     = 0xD9;            /* Port 0 Output Mode                     */
sfr P1MDOUT     = 0xDC;            /* Port 1 Output Mode                     */
sfr P2MDOUT     = 0xDD;            /* Port 2 Output Mode                     */
sfr IT01CF      = 0xDE;            /* INT0 / INT1 Configuration              */
sfr P3MDOUT     = 0xDF;            /* Port 3 Output Mode                     */
sfr DEVICEID    = 0xE1;            /* Device Identification                  */
sfr REVID       = 0xE2;            /* Revision Identification                */
sfr DMA0INT     = 0xE8;            /* DMA0 Full-Length Interrupt Flags       */
sfr P0MDIN      = 0xEC;            /* Port 0 Input Mode                      */
sfr P1MDIN      = 0xED;            /* Port 1 Input Mode                      */
sfr P2MDIN      = 0xEE;            /* Port 2 Input Mode                      */
sfr P3MDIN      = 0xEF;            /* Port 3 Input Mode                      */
sfr P4MDIN      = 0xF1;            /* Port 4 Input Mode                      */
sfr P5MDIN      = 0xF2;            /* Port 5 Input Mode                      */
sfr P0MAT       = 0xF4;            /* Port 0 Match                           */
sfr P1MAT       = 0xF5;            /* Port 1 Match                           */
sfr EIP1        = 0xF6;            /* Extended Interrupt Priority 1          */
sfr EIP2        = 0xF7;            /* Extended Interrupt Priority 2          */
sfr I2C0STAT    = 0xF8;            /* I2C0 Status                            */
sfr P5MDOUT     = 0xFF;            /* Port 5 Output Mode                     */


/* 16-bit Register definitions */

/* SFR Page 0x0 */
sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 TMR3RL    = 0x92;            /* Timer 3 Reload                         */
sfr16 TMR3      = 0x94;            /* Timer 3 Counter                        */
sfr16 ADC0GT    = 0xC3;            /* ADC0 Greater-Than Compare              */
sfr16 ADC0LT    = 0xC5;            /* ADC0 Less-Than Compare                 */
sfr16 TMR2RL    = 0xCA;            /* Timer 2 Reload                         */
sfr16 TMR2      = 0xCC;            /* Timer 2 Counter                        */
sfr16 ADC0      = 0xD2;            /* ADC0 data                              */
sfr16 PCA0CP1   = 0xE9;            /* PCA0 Module 1 Capture/Compare          */
sfr16 PCA0CP2   = 0xEB;            /* PCA0 Module 2 Capture/Compare          */
sfr16 CS0D      = 0xED;            /* Capacitive Sense 0 data                */
sfr16 PCA0      = 0xF9;            /* PCA0 Counter                           */
sfr16 PCA0CP0   = 0xFB;            /* PCA0 Module 0 Capture/Compare          */
sfr16 CS0TH     = 0xFD;            /* Capacitive Sense 0 Comparator Threshold data */

/* SFR Page 0xF */
sfr16 TOFF       = 0xBD;           /* Temperature offset data                */
sfr16 MAC0A      = 0xAA;           /* MAC0 operand A                         */
sfr16 MAC0B      = 0xAE;           /* MAC0 operand B                         */
sfr16 DMA0NBA    = 0xC9;           /* Memory base address                    */
sfr16 DMA0NAO    = 0xCB;           /* Memory address offset                  */
sfr16 DMA0NSZ    = 0xCD;           /* Memory transfer size                   */


/* Bit Definitions */

/* SFRs all pages */
/* P0 0x80  SFR: all pages Port 0 latches 0-7*/
sbit B07      = P0^7;              /* Port0 Bit 7 Latch                      */
sbit B06      = P0^6;              /* Port0 Bit 6 Latch                      */
sbit B05      = P0^5;              /* Port0 Bit 5 Latch                      */
sbit B04      = P0^4;              /* Port0 Bit 4 Latch                      */
sbit B03      = P0^3;              /* Port0 Bit 3 Latch                      */
sbit B02      = P0^2;              /* Port0 Bit 2 Latch                      */
sbit B01      = P0^1;              /* Port0 Bit 1 Latch                      */
sbit B00      = P0^0;              /* Port0 Bit 0 Latch                      */

/* P1 0x90  SFR: all pages Port 1 latches 0-7*/
sbit B17      = P1^7;              /* Port1 Bit 7 Latch                      */
sbit B16      = P1^6;              /* Port1 Bit 6 Latch                      */
sbit B15      = P1^5;              /* Port1 Bit 5 Latch                      */
sbit B14      = P1^4;              /* Port1 Bit 4 Latch                      */
sbit B13      = P1^3;              /* Port1 Bit 3 Latch                      */
sbit B12      = P1^2;              /* Port1 Bit 2 Latch                      */
sbit B11      = P1^1;              /* Port1 Bit 1 Latch                      */
sbit B10      = P1^0;              /* Port1 Bit 0 Latch                      */

/* SCON0 0x98  SFR: all pages UART0 Serial Port Control */
sbit S0MODE   = SCON0^7;           /* UART0 Mode                             */
                                   /* Bit6 UNUSED                            */
sbit MCE      = SCON0^5;           /* UART0 Multi-Processor Communication    */
sbit REN      = SCON0^4;           /* UART0 RX Enable                        */
sbit TB8      = SCON0^3;           /* UART0 TX Bit 8                         */
sbit RB8      = SCON0^2;           /* UART0 RX Bit 8                         */
sbit TI       = SCON0^1;           /* UART0 TX Interrupt Flag                */
sbit RI       = SCON0^0;           /* UART0 RX Interrupt Flag                */

/* P2 0xA0  SFR: all pages Port 1 latches 0-7*/
sbit B27      = P2^7;              /* Port2 Bit 7 Latch                      */
sbit B26      = P2^6;              /* Port2 Bit 6 Latch                      */
sbit B25      = P2^5;              /* Port2 Bit 5 Latch                      */
sbit B24      = P2^4;              /* Port2 Bit 4 Latch                      */
sbit B23      = P2^3;              /* Port2 Bit 3 Latch                      */
sbit B22      = P2^2;              /* Port2 Bit 2 Latch                      */
sbit B21      = P2^1;              /* Port2 Bit 1 Latch                      */
sbit B20      = P2^0;              /* Port2 Bit 0 Latch                      */

/* IE 0xA8 SFR: all pages Interrupt Enable */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit ESPI0    = IE^6;              /* SPI0 Interrupt Enable                  */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES0      = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */


/* IP 0xB8 SFR: all pages Interrupt Priority */
                                   /* Bit7 UNUSED                            */
sbit PSPI0    = IP^6;              /* SPI0 Priority                          */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS0      = IP^4;              /* UART0 Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

/* TMR2CN 0xC8 SFR: all pages Timer 2 Control */
sbit TF2H     = TMR2CN^7;          /* Timer 2 High Byte Overflow Flag        */
sbit TF2L     = TMR2CN^6;          /* Timer 2 Low Byte Overflow Flag         */
sbit TF2LEN   = TMR2CN^5;          /* Timer 2 Low Byte Interrupt Enable      */
sbit TF2CEN   = TMR2CN^4;          /* Timer 2 Lfo Capture Enable             */
sbit T2SPLIT  = TMR2CN^3;          /* Timer 2 Split Mode Enable              */
sbit TR2      = TMR2CN^2;          /* Timer 2 On/Off Control (run control)   */
sbit T2XCLK1  = TMR2CN^1;          /* Timer 2 External Clock Select. bit 1   */
sbit T2XCLK0  = TMR2CN^0;          /* Timer 2 External Clock Select. bit 0   */

/* PSW 0xD0 SFR: all pages Program Status Word */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */


/* SFR page 0x0 */

/* TCON 0x88  SFR page: 0x0 Timer 0/1 Control */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* CS0CN 0xB0 SFR page: 0x0 Capacitive Sense 0 Control */
sbit CSEN     = CS0CN^7;           /* CS0 Enable                             */
sbit CSEOS    = CS0CN^6;           /* CS0 End of Scan Interrupt Flag         */
sbit CSINT    = CS0CN^5;           /* CS0 Interrupt Flag                     */
sbit CSBUSY   = CS0CN^4;           /* CS0 Busy                               */
sbit CSCMPEN  = CS0CN^3;           /* CS0 Digital Comparator Enable          */
                                   /* Bit2 UNUSED                            */
sbit CSPME    = CS0CN^1;           /* CS0 Pin Monitor Event                  */
sbit CSCMPF   = CS0CN^0;           /* CS0 Digital Comparator Interrupt Flag  */

/* SMB0CN 0xC0 SFR page: 0x0 SMBus 0 Control */
sbit MASTER   = SMB0CN^7;          /* SMBus0 Master/Slave                    */
sbit TXMODE   = SMB0CN^6;          /* SMBus0 Transmit Mode                   */
sbit STA      = SMB0CN^5;          /* SMBus0 Start Flag                      */
sbit STO      = SMB0CN^4;          /* SMBus0 Stop Flag                       */
sbit ACKRQ    = SMB0CN^3;          /* SMBus0 Acknowledge Request             */
sbit ARBLOST  = SMB0CN^2;          /* SMBus0 Arbitration Lost                */
sbit ACK      = SMB0CN^1;          /* SMBus0 Acknowledge Flag                */
sbit SI       = SMB0CN^0;          /* SMBus0 Interrupt Pending Flag          */

/* PCA0CN 0xD8 SFR page: 0x0 PCA Control*/
sbit CF       = PCA0CN^7;          /* PCA0 Counter Overflow Flag             */
sbit CR       = PCA0CN^6;          /* PCA0 Counter Run Control Bit           */
                                   /* Bit 5 reserved                         */
                                   /* Bit 4 reserved                         */
                                   /* Bit 3 reserved                         */
sbit CCF2     = PCA0CN^2;          /* PCA0 Module 2 Interrupt Flag           */
sbit CCF1     = PCA0CN^1;          /* PCA0 Module 1 Interrupt Flag           */
sbit CCF0     = PCA0CN^0;          /* PCA0 Module 0 Interrupt Flag           */

/* ADC0CN 0xE8 SFR page: 0x0 ADC0 Control */
sbit ADEN     = ADC0CN^7;          /* ADC  Enable                            */
sbit ADBMEN   = ADC0CN^6;          /* ADC0 Burst Enable                      */
sbit ADINT    = ADC0CN^5;          /* ADC0 Conversion Complete Interrupt Flag*/
sbit ADBUSY   = ADC0CN^4;          /* ADC0 Busy Flag                         */
sbit ADWINT   = ADC0CN^3;          /* ADC0 Window Interrupt Flag             */
sbit ADCM2    = ADC0CN^2;          /* ADC0 Convert Start Mode Bit 2          */
sbit ADCM1    = ADC0CN^1;          /* ADC0 Convert Start Mode Bit 1          */
sbit ADCM0    = ADC0CN^0;          /* ADC0 Convert Start Mode Bit 0          */

/* SPI0CN 0xF8, SFR-Page 0x0 SPI0 Control */
sbit SPIF     = SPI0CN^7;          /* SPI0 Interrupt Flag                    */
sbit WCOL     = SPI0CN^6;          /* SPI0 Write Collision Flag              */
sbit MODF     = SPI0CN^5;          /* SPI0 Mode Fault Flag                   */
sbit RXOVRN   = SPI0CN^4;          /* SPI0 RX Overrun Flag                   */
sbit NSSMD1   = SPI0CN^3;          /* SPI0 Slave Select Mode 1               */
sbit NSSMD0   = SPI0CN^2;          /* SPI0 Slave Select Mode 0               */
sbit TXBMT    = SPI0CN^1;          /* SPI0 TX Buffer Empty Flag              */
sbit SPIEN    = SPI0CN^0;          /* SPI0 Enable                            */


/* SFR page 0xF */

/* DMA0MINT 0x88 SFR page: 0xF DMA0 Mid-Point Interrupt Flags */
                                   /* Bit 7 reserved                         */
sbit CH6MI    = DMA0MINT^6;        /* Channel 6 Mid-Point Interrupt Flag     */
sbit CH5MI    = DMA0MINT^5;        /* Channel 5 Mid-Point Interrupt Flag     */
sbit CH4MI    = DMA0MINT^4;        /* Channel 4 Mid-Point Interrupt Flag     */
sbit CH3MI    = DMA0MINT^3;        /* Channel 3 Mid-Point Interrupt Flag     */
sbit CH2MI    = DMA0MINT^2;        /* Channel 2 Mid-Point Interrupt Flag     */
sbit CH1MI    = DMA0MINT^1;        /* Channel 1 Mid-Point Interrupt Flag     */
sbit CH0MI    = DMA0MINT^0;        /* Channel 0 Mid-Point Interrupt Flag     */

/* MAC0CF0 0xC0 SFR page: 0xF MAC0 Configuration 0  */
sbit SHIFTEN    = MAC0CF0^7;       /* Accumulator Shift Control              */
sbit SHIFTDIR   = MAC0CF0^6;       /* Accumulator Shift Direction            */
sbit CLRACC     = MAC0CF0^5;       /* Clear Accumulator                      */
sbit FRACMD     = MAC0CF0^4;       /* Fractional Mode                        */
sbit ACCMD      = MAC0CF0^3;       /* Accumulate Mode                        */
sbit ACCNEGATE  = MAC0CF0^2;       /* Negate Accumulator Input               */
sbit BNEGATE    = MAC0CF0^1;       /* Negate MAC0 B input                    */
sbit ANEGATE    = MAC0CF0^0;       /* Negate MAC0 A input                    */

/* DMA0NCF 0xD8 SFR page: 0xF DMA0 Channel Configuration */
sbit IEN      = DMA0NCF^7;         /* Full-Length Interrupt Enable           */
sbit MIEN     = DMA0NCF^6;         /* Mid-Point Interrupt Enable             */
sbit STALL    = DMA0NCF^5;         /* Channel Stall                          */
sbit ENDIAN   = DMA0NCF^4;         /* Data Transfer Endianness               */
                                   /* Bit 3 reserved                         */
sbit PERIPH2  = DMA0NCF^2;         /* Peripheral Transfer Select bit  2      */
sbit PERIPH1  = DMA0NCF^1;         /* Peripheral Transfer Select bit  1      */
sbit PERIPH0  = DMA0NCF^0;         /* Peripheral Transfer Select bit  0      */

/* DMA0INT 0xE8 SFR page: 0xF DMA0 Full-Length Interrupt Flags */
                                   /* Bit 7 reserved                         */
sbit CH6I     = DMA0INT^6;         /* Channel 6 Full-Length Interrupt Flag   */
sbit CH5I     = DMA0INT^5;         /* Channel 5 Full-Length Interrupt Flag   */
sbit CH4I     = DMA0INT^4;         /* Channel 4 Full-Length Interrupt Flag   */
sbit CH3I     = DMA0INT^3;         /* Channel 3 Full-Length Interrupt Flag   */
sbit CH2I     = DMA0INT^2;         /* Channel 2 Full-Length Interrupt Flag   */
sbit CH1I     = DMA0INT^1;         /* Channel 1 Full-Length Interrupt Flag   */
sbit CH0I     = DMA0INT^0;         /* Channel 0 Full-Length Interrupt Flag   */

/* I2C0STAT 0xF8, SFR-Page 0xF I2C0 Status */
sbit HSMODE   = I2C0STAT^7;        /* High Speed Mode                        */
sbit ACTIVE   = I2C0STAT^6;        /* Bus Active                             */
sbit I2C0INT  = I2C0STAT^5;        /* I2C Interrupt                          */
sbit NACK     = I2C0STAT^4;        /* NACK                                   */
sbit START    = I2C0STAT^3;        /* Start                                  */
sbit STOP     = I2C0STAT^2;        /* Stop                                   */
sbit WR       = I2C0STAT^1;        /* I2C Write                              */
sbit RD       = I2C0STAT^0;        /* I2C Read                               */


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
#define INTERRUPT_DMA0_MIDPOINT    12 /* Comparator0                         */
#define INTERRUPT_DMA0_ENDPOINT    13 /* Comparator1                         */
#define INTERRUPT_TIMER3           14 /* Timer3 Overflow                     */
/* ------------------------------- 15 -------------------------------------- */
#define INTERRUPT_PORT_MATCH       16 /* Port Match                          */
#define INTERRUPT_RTC0_OSC_FAIL    17 /* RTC0 (smaRTClock) Osc. Fail         */
#define INTERRUPT_MAC0             18 /* MAC0                                */
#define INTERRUPT_CS0_CONVERSION   19 /* CS0 Conversion complete             */
#define INTERRUPT_CS0_DIG_COMP     20 /* CS0 digital comparator              */
#define INTERRUPT_CS0_EOS          21 /* CS0 End of scan 0                   */
#define INTERRUPT_I2C_SLV0         22 /* I2C slave 0                         */


#endif                                /* #define __REG51F970_H__             */