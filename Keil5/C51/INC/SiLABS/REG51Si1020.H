/*-----------------------------------------------------------------------------
  REG51Si1020.H

Header file for Silabs Si102x and Si103x devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG51Si1020_H__
#define __REG51Si1020_H__

/* Byte Registers */
/* SFRs all pages */
sfr P0          = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low                       */
sfr DPH         = 0x83;            /* Data Pointer High                      */
sfr PSBANK      = 0x84;            /* Program Space Bank Select              */
sfr SFRNEXT     = 0x85;            /* SFR Page Stack Next                    */
sfr SFRLAST     = 0x86;            /* SFR Page Stack Last                    */
sfr PCON        = 0x87;            /* Power Control                          */
sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr PSCTL       = 0x8F;            /* Program Store R/W Control              */
sfr P1          = 0x90;            /* Port 1 Latch                           */
sfr SCON0       = 0x98;            /* UART0 Control                          */
sfr P2          = 0xA0;            /* Port 2 Latch                           */
sfr SFRPAGE     = 0xA7;            /* SFR Page                               */
sfr IE          = 0xA8;            /* Interrupt Enable                       */
sfr P3          = 0xB0;            /* Port 3 Latch                           */
sfr FLKEY       = 0xB7;            /* Flash Lock And Key                     */
sfr IP          = 0xB8;            /* Interrupt Priority                     */
sfr SMB0CN      = 0xC0;            /* SMBus0 Control                         */
sfr TMR2CN      = 0xC8;            /* Timer/Counter 2 Control                */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr PCA0CN      = 0xD8;            /* PCA0 Control                           */
sfr ACC         = 0xE0;            /* Accumulator                            */
sfr EIE1        = 0xE6;            /* Extended Interrupt Enable 1            */
sfr EIE2        = 0xE7;            /* Extended Interrupt Enable 2            */
sfr ADC0CN      = 0xE8;            /* ADC0 Control                           */
sfr EIP1        = 0xE6;            /* Extended Interrupt 1 Priority          */
sfr EIP2        = 0xE6;            /* Extended Interrupt 2 Priority          */
sfr B           = 0xF0;            /* B Register                             */
sfr VDM0CN      = 0xFF;            /* VDD Monitor Control                    */

/* SFRs page 0x0 */
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
sfr SBUF0       = 0x99;            /* UART0 Data Buffer                      */
sfr CPT1CN      = 0x9A;            /* Comparator1 Control                    */
sfr CPT0CN      = 0x9B;            /* Comparator0 Control                    */
sfr CPT1MD      = 0x9C;            /* Comparator1 Mode Selection             */
sfr CPT0MD      = 0x9D;            /* Comparator0 Mode Selection             */
sfr CPT1MX      = 0x9E;            /* Comparator1 Mux Selection              */
sfr CPT0MX      = 0x9F;            /* Comparator0 Mux Selection              */
sfr SPI0CFG     = 0xA1;            /* SPI0 Configuration                     */
sfr SPI0CKR     = 0xA2;            /* SPI0 Clock Rate Control                */
sfr SPI0DAT     = 0xA3;            /* SPI0 Data                              */
sfr P0MDOUT     = 0xA4;            /* Port 0 Output Mode Configuration       */
sfr P1MDOUT     = 0xA5;            /* Port 1 Output Mode Configuration       */
sfr P2MDOUT     = 0xA6;            /* Port 2 Output Mode Configuration       */
sfr CLKSEL      = 0xA9;            /* Clock Select; Also on SFR page 0xF     */
sfr EMI0CN      = 0xAA;            /* External Memory Interface Control      */
sfr EMI0CF      = 0xAB;            /* External Memory Interface Configuration*/
sfr RTC0ADR     = 0xAC;            /* RTC0 Address                           */
sfr RTC0DAT     = 0xAD;            /* RTC0 Data                              */
sfr RTC0KEY     = 0xAE;            /* RTC0 Key                               */
sfr EMI0TC      = 0xAF;            /* External Memory Interface Timing Contr.*/
sfr OSCXCN      = 0xB1;            /* External Oscillator Control            */
sfr OSCICN      = 0xB2;            /* Internal Oscillator Control            */
sfr PMU0MD      = 0xB3;            /* Power Management Unit 0 Mode           */
sfr PMU0CF      = 0xB5;            /* Power Management Unit 0 Configuration  */
sfr PMU0FL      = 0xB6;            /* Power Management Unit Flag             */
sfr IREF0CF     = 0xB9;            /* Current Reference IREF0 Configuration  */
sfr ADC0AC      = 0xBA;            /* ADC0 Accumulator Configuration         */
sfr ADC0MX      = 0xBB;            /* ADC0 Input Channel Select              */
sfr ADC0CF      = 0xBC;            /* ADC0 Configuration                     */
sfr ADC0L       = 0xBD;            /* ADC0 Low                               */
sfr ADC0H       = 0xBE;            /* ADC0 High                              */
sfr P1MASK      = 0xBF;            /* Port 1 Mask                            */
sfr SMB0CF      = 0xC1;            /* SMBus0 Configuration                   */
sfr SMB0DAT     = 0xC2;            /* SMBus0 Data                            */
sfr ADC0GTL     = 0xC3;            /* ADC0 Greater-Than Compare Low          */
sfr ADC0GTH     = 0xC4;            /* ADC0 Greater-Than Compare High         */
sfr ADC0LTL     = 0xC5;            /* ADC0 Less-Than Compare Word Low        */
sfr ADC0LTH     = 0xC6;            /* ADC0 Less-Than Compare Word High       */
sfr P0MASK      = 0xC7;            /* Port 0 Mask                            */
sfr REG0CN      = 0xC9;            /* Voltage Regulator REG0 Control         */
sfr TMR2RLL     = 0xCA;            /* Timer/Counter 2 Reload Low             */
sfr TMR2RLH     = 0xCB;            /* Timer/Counter 2 Reload High            */
sfr TMR2L       = 0xCC;            /* Timer/Counter 2 Low                    */
sfr TMR2H       = 0xCD;            /* Timer/Counter 2 High                   */
sfr PCA0CPM5    = 0xCE;            /* PCA0 Module 5 Mode Register            */
sfr P1MAT       = 0xCF;            /* Port 1 Match                           */
sfr REF0CN      = 0xD1;            /* Voltage Reference Control              */
sfr PCA0CPL5    = 0xD2;            /* PCA0 Capture 5 Low                     */
sfr PCA0CPH5    = 0xD3;            /* PCA0 Capture 5 High                    */
sfr P0SKIP      = 0xD4;            /* Port 0 Skip                            */
sfr P1SKIP      = 0xD5;            /* Port 1 Skip                            */
sfr P2SKIP      = 0xD6;            /* Port 2 Skip                            */
sfr P0MAT       = 0xD7;            /* Port 0 Match                           */
sfr PCA0MD      = 0xD9;            /* PCA0 Mode                              */
sfr PCA0CPM0    = 0xDA;            /* PCA0 Module 0 Mode Register            */
sfr PCA0CPM1    = 0xDB;            /* PCA0 Module 1 Mode Register            */
sfr PCA0CPM2    = 0xDC;            /* PCA0 Module 2 Mode Register            */
sfr PCA0CPM3    = 0xDD;            /* PCA0 Module 3 Mode Register            */
sfr PCA0CPM4    = 0xDE;            /* PCA0 Module 4 Mode Register            */
sfr PCA0PWM     = 0xDF;            /* PCA0 PWM Configuration                 */
sfr XBR0        = 0xE1;            /* Port I/O Crossbar Control 0            */
sfr XBR1        = 0xE2;            /* Port I/O Crossbar Control 1            */
sfr XBR2        = 0xE3;            /* Port I/O Crossbar Control 2            */
sfr IT01CF      = 0xE4;            /* INT0/INT1 Configuration                */
sfr FLWR        = 0xE5;            /* Flash write only                       */
sfr PCA0CPL1    = 0xE9;            /* PCA0 Capture 1 Low                     */
sfr PCA0CPH1    = 0xEA;            /* PCA0 Capture 1 High                    */
sfr PCA0CPL2    = 0xEB;            /* PCA0 Capture 2 Low                     */
sfr PCA0CPH2    = 0xEC;            /* PCA0 Capture 2 High                    */
sfr PCA0CPL3    = 0xED;            /* PCA0 Capture 3 Low                     */
sfr PCA0CPH3    = 0xEE;            /* PCA0 Capture 3 High                    */
sfr RSTSRC      = 0xEF;            /* Reset Source Configuration/Status      */
sfr P0MDIN      = 0xF1;            /* Port 0 Input Mode Configuration        */
sfr P1MDIN      = 0xF2;            /* Port 1 Input Mode Configuration        */
sfr P2MDIN      = 0xF3;            /* Port 2 Input Mode Configuration        */
sfr SMB0ADR     = 0xF4;            /* SMBus Slave Address                    */
sfr SMB0ADM     = 0xF5;            /* SMBus Slave Address Mask               */
sfr SPI0CN      = 0xF8;            /* SPI0 Control                           */
sfr PCA0L       = 0xF9;            /* PCA0 Counter Low                       */
sfr PCA0H       = 0xFA;            /* PCA0 Counter High                      */
sfr PCA0CPL0    = 0xFB;            /* PCA0 Capture 0 Low                     */
sfr PCA0CPH0    = 0xFC;            /* PCA0 Capture 0 High                    */
sfr PCA0CPL4    = 0xFD;            /* PCA0 Capture 4 Low                     */
sfr PCA0CPH4    = 0xFE;            /* PCA0 Capture 4 High                    */

/* SFRs page 0x2 */
sfr LCD0D0      = 0x89;            /* LCD0 Data 0                            */
sfr LCD0D1      = 0x8A;            /* LCD0 Data 1                            */
sfr LCD0D2      = 0x8B;            /* LCD0 Data 2                            */
sfr LCD0D3      = 0x8C;            /* LCD0 Data 3                            */
sfr LCD0D4      = 0x8D;            /* LCD0 Data 4                            */
sfr LCD0D5      = 0x8E;            /* LCD0 Data 5                            */
sfr LCD0D6      = 0x91;            /* LCD0 Data 6                            */
sfr LCD0D7      = 0x92;            /* LCD0 Data 7                            */
sfr LCD0D8      = 0x93;            /* LCD0 Data 8                            */
sfr LCD0D9      = 0x94;            /* LCD0 Data 9                            */
sfr LCD0DA      = 0x95;            /* LCD0 Data A                            */
sfr LCD0DB      = 0x96;            /* LCD0 Data B                            */
sfr LCD0DC      = 0x97;            /* LCD0 Data C                            */
sfr LCD0DD      = 0x99;            /* LCD0 Data D                            */
sfr LCD0DE      = 0x9A;            /* LCD0 Data E                            */
sfr LCD0DF      = 0x9B;            /* LCD0 Data F                            */
sfr LCD0CNTRST  = 0x9C;            /* LCD Contrast                           */
sfr LCD0CN      = 0x9D;            /* LCD Control                            */
sfr LCD0BLINK   = 0x9E;            /* LCD0 Blink Mask                        */
sfr LCD0TOGR    = 0x9F;            /* LCD0 Toggle Rate                       */
sfr SPI1CFG     = 0xA1;            /* SPI1 Configuration                     */
sfr SPI1CKR     = 0xA2;            /* SPI1 Clock Rate Control                */
sfr SPI1DAT     = 0xA3;            /* SPI0 Data                              */
sfr LCD0PWR     = 0xA4;            /* LCD0 Power                             */
sfr LCD0CF      = 0xA5;            /* LCD0 Configuration                     */
sfr LCD0VBMCN   = 0xA6;            /* LCD0 VBAT Monitor Control              */
sfr LCD0CLKDIVL = 0xA9;            /* LCD0 Clock Divider Low                 */
sfr LCD0CLKDIVH = 0xAA;            /* LCD0 Clock Divider High                */
sfr LCD0MSCN    = 0xAB;            /* LCD0 Master Control                    */
sfr LCD0MSCF    = 0xAC;            /* LCD0 Master Configuration              */
sfr LCD0CHPCF   = 0xAD;            /* LCD0 Charge Pump Configuration         */
sfr LCD0CHPMD   = 0xAE;            /* LCD0 Charge Pump Mode                  */
sfr LCD0VBMCF   = 0xAF;            /* LCD0 VBAT Monitor Configuration        */
sfr DC0CN       = 0xB1;            /* DC0 Control                            */
sfr DC0CF       = 0xB2;            /* DC0 Configuration                      */
sfr DC0MD       = 0xB3;            /* DC0 Mode                               */
sfr LCD0CHPCN   = 0xB5;            /* LCD0 Charge Pump Control               */
sfr LCD0BUFMD   = 0xB6;            /* LCD0 Buffer Mode                       */
sfr CRC1IN      = 0xB9;            /* CRC1 In                                */
sfr CRC1OUTL    = 0xBA;            /* CRC1 Out Low                           */
sfr CRC1OUTH    = 0xBB;            /* CRC1 Out High                          */
sfr CRC1POLL    = 0xBC;            /* CRC1 Polynomial Low                    */
sfr CRC1POLH    = 0xBD;            /* CRC1 Polynomial High                   */
sfr CRC1CN      = 0xBE;            /* CRC1 Control                           */
sfr PC0STAT     = 0xC1;            /* PC0 Status                             */
sfr ENC0L       = 0xC2;            /* ENC0 Data Low Byte                     */
sfr ENC0M       = 0xC3;            /* ENC0 Data Middle Byte                  */
sfr ENC0H       = 0xC4;            /* ENC0 Data High Byte                    */
sfr ENC0CN      = 0xC5;            /* ENC0 Control                           */
sfr VREGINSDL   = 0xC6;            /* Voltage Regulator Low                  */
sfr VREGINSDH   = 0xC7;            /* Voltage Regulator High                 */
sfr DMA0NCF     = 0xC9;            /* DMA Channel Configuration              */
sfr DMA0NBAL    = 0xCA;            /* DMA Memory Base Address Low            */
sfr DMA0NBAH    = 0xCB;            /* DMA Memory Base Address High           */
sfr DMA0NAOL    = 0xCC;            /* DMA Memory Address Offset Low          */
sfr DMA0NAOH    = 0xCD;            /* DMA Memory Address Offset High         */
sfr DMA0NSZL    = 0xCE;            /* DMA Transfer Size Low Byte             */
sfr DMA0NSZH    = 0xCF;            /* DMA Transfer Size High Byte            */
sfr DMA0SEL     = 0xD1;            /* DMA0 Channel Select for Configuration  */
sfr DMA0EN      = 0xD2;            /* DMA0 Channel Enable                    */
sfr DMA0INT     = 0xD3;            /* DMA0 Full-Length Interrupt             */
sfr DMA0MINT    = 0xD4;            /* DMA0 Mid-Length Interrupt              */
sfr DMA0BUSY    = 0xD5;            /* DMA0 Busy                              */
sfr DMA0NMD     = 0xD6;            /* DMA Channel Mode                       */
sfr PC0PCF      = 0xD7;            /* PC0 Mode Pull-Up Configuration         */
sfr PC0MD       = 0xD9;            /* PC0 Mode Configuration                 */
sfr PC0CTR0L    = 0xDA;            /* PC0 Counter 0 Low                      */
sfr PC0CTR0M    = 0xDB;            /* PC0 Counter 0 Middle                   */
sfr PC0CTR0H    = 0xDC;            /* PC0 Counter 0 High                     */
sfr PC0CTR1L    = 0xDD;            /* PC0 Counter 1 Low                      */
sfr PC0CTR1M    = 0xDE;            /* PC0 Counter 1 Middle                   */
sfr PC0CTR1H    = 0xDF;            /* PC0 Counter 1 High                     */
sfr PC0CMP0L    = 0xE1;            /* PC0 Comparator 0 Low                   */
sfr PC0CMP0M    = 0xE2;            /* PC0 Comparator 0 Middle                */
sfr PC0CMP0H    = 0xE3;            /* PC0 Comparator 0 High                  */
sfr PC0TH       = 0xE4;            /* PC0 Threshold                          */
sfr AES0BCFG    = 0xE9;            /* AES0 Block Configuration               */
sfr AES0DCFG    = 0xEA;            /* AES0 Data Configuration                */
sfr AES0BIN     = 0xEB;            /* AES0 Block Input                       */
sfr AES0XIN     = 0xEC;            /* AES0 XOR Input                         */
sfr AES0KIN     = 0xED;            /* AES0 Key Input                         */
sfr PC0CMP1L    = 0xF1;            /* PC0 Comparator 1 Low                   */
sfr PC0CMP1M    = 0xF2;            /* PC0 Comparator 1 Middle                */
sfr PC0CMP1H    = 0xF3;            /* PC0 Comparator 1 High                  */
sfr PC0HIST     = 0xF4;            /* PC0 History                            */
sfr AES0YOUT    = 0xF5;            /* AES Y Output                           */
sfr SPI1CN      = 0xF8;            /* SPI 1 Control                          */
sfr PC0DCL      = 0xFA;            /* PC0 Debounce Configuration Low         */
sfr PC0DCH      = 0xFB;            /* PC0 Debounce Configuration High        */
sfr PC0INT0     = 0xFC;            /* PC0 Interrupt 0                        */
sfr PC0INT1     = 0xFD;            /* PC0 Interrupt 1                        */
sfr DC0RDY      = 0xFE;            /* DC-DC Converter Ready Indicator        */

/* SFRs page 0xF */
sfr SFRPGCN     = 0x8E;            /* SFR Page Control                       */
sfr CRC0DAT     = 0x91;            /* CRC0 Data Output                       */
sfr CRC0CN      = 0x92;            /* CRC0 Control                           */
sfr CRC0IN      = 0x93;            /* CRC0 Data Input                        */
sfr CRC0FLIP    = 0x94;            /* CRC0 Bit Flip                          */
sfr CRC0AUTO    = 0x96;            /* CRC0 Automatic Control                 */
sfr CRC0CNT     = 0x97;            /* CRC0 Automatic Flash Sector Count      */
sfr LCD0BUFCN   = 0x9C;            /* LCD0 Buffer Control                    */
sfr P3DRV       = 0xA1;            /* Port 3 Drive Strength                  */
sfr P4DRV       = 0xA2;            /* Port 4 Drive Strength                  */
sfr P5DRV       = 0xA3;            /* Port 5 Drive Strength                  */
sfr P0DRV       = 0xA4;            /* Port 0 Drive Strength                  */
sfr P1DRV       = 0xA5;            /* Port 1 Drive Strength                  */
sfr P2DRV       = 0xA6;            /* Port 2 Drive Strength                  */
sfr P6DRV       = 0xAA;            /* Port 6 Drive Strength                  */
sfr P7DRV       = 0xAB;            /* Port 7 Drive Strength                  */
sfr LCD0BUFCF   = 0xAC;            /* LCD0 Buffer configuration              */
sfr P3MDOUT     = 0xB1;            /* Port 3 Output Mode                     */
sfr OSCIFL      = 0xB2;            /* Internal Oscillator Flash              */
sfr OSCICL      = 0xB3;            /* Internal Oscillator Calibration        */
sfr FLSCL       = 0xB6;            /* Flash Scale Register                   */
sfr IREF0CN     = 0xB9;            /* Current Reference IREF0 Configuration  */
sfr ADC0PWR     = 0xBA;            /* ADC0 Burst Mode Power-Up Time          */
sfr ADC0TK      = 0xBB;            /* ADC0 Tracking Control                  */
sfr TOFFL       = 0xBD;            /* Temperature Offset Low                 */
sfr TOFFH       = 0xBF;            /* Temperature Offset High                */
sfr P4          = 0xD9;            /* Port 4 Latch                           */
sfr P5          = 0xDA;            /* Port 5 Latch                           */
sfr P6          = 0xDB;            /* Port 6 Latch                           */
sfr P7          = 0xDC;            /* Port 7 Latch                           */
sfr DEVICEID    = 0xE8;            /* Device Identification                  */
sfr REVID       = 0xE9;            /* Revision Identification                */
sfr P3MDIN      = 0xF1;            /* Port 3 Input Mode Configuration        */
sfr P4MDIN      = 0xF2;            /* Port 4 Input Mode Configuration        */
sfr P5MDIN      = 0xF3;            /* Port 5 Input Mode Configuration        */
sfr P6MDIN      = 0xF4;            /* Port 6 Input Mode Configuration        */
sfr PCLKACT     = 0xF5;            /* Peripheral Clock Enable Active Mode    */
sfr P4MDOUT     = 0xF9;            /* P4 Output Mode                         */
sfr P5MDOUT     = 0xFA;            /* P5 Output Mode                         */
sfr P6MDOUT     = 0xFB;            /* P6 Output Mode                         */
sfr P7MDOUT     = 0xFC;            /* P7 Output Mode                         */
sfr CLKMODE     = 0xFD;            /* Clock Mode                             */
sfr PCLKEN      = 0xFE;            /* Peripheral Clock Enables (LP Idle)     */

/* 16-bit Register definitions */
/* SFR Page 0x0 */
sfr16 DP        = 0x82;            /* Data Pointer                           */
sfr16 TMR3RL    = 0x92;            /* Timer 3 Reload                         */
sfr16 TMR3      = 0x94;            /* Timer 3 Counter                        */
sfr16 ADC0      = 0xBD;            /* ADC0 Data                              */
sfr16 ADC0GT    = 0xC3;            /* ADC0 Greater-Than Compare              */
sfr16 ADC0LT    = 0xC5;            /* ADC0 Less-Than Compare                 */
sfr16 TMR2RL    = 0xCA;            /* Timer 2 Reload                         */
sfr16 TMR2      = 0xCC;            /* Timer 2 Counter                        */
sfr16 PCA0CP5   = 0xD2;            /* PCA0 Module 5 Capture/Compare          */
sfr16 PCA0CP1   = 0xE9;            /* PCA0 Module 1 Capture/Compare          */
sfr16 PCA0CP2   = 0xEB;            /* PCA0 Module 2 Capture/Compare          */
sfr16 PCA0CP3   = 0xED;            /* PCA0 Module 3 Capture/Compare          */
sfr16 PCA0      = 0xF8;            /* PCA0 Counter                           */
sfr16 PCA0CP0   = 0xFB;            /* PCA0 Module 0 Capture/Compare          */
sfr16 PCA0CP4   = 0xFD;            /* PCA0 Module 4 Capture/Compare          */

/* SFR Page 0x2 */
sfr16 LCD0CLKDIV = 0xA9;           /* LCD Refresh Rate Prescaler             */
sfr16 CRC1OUT    = 0xBA;           /* CRC1 Output                            */
sfr16 CRC1POL    = 0xBC;           /* CRC1 Polynomial                        */
sfr16 VREGINSD   = 0xC6;           /* Voltage Regulator                      */
sfr16 DMA0NBA    = 0xCA;           /* DMA0 Memory base address               */
sfr16 DMA0NAO    = 0xCC;           /* DMA0 Memory base address offset        */
sfr16 DMA0NSZ    = 0xCE;           /* DMA0 Transfer size                     */
sfr16 PC0DC      = 0xF9;           /* PC0 Debounce Configuration             */

/* SFR Page 0xF */
sfr16 TOFF       = 0xBD;           /* Temperature offset                     */


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
sbit MCE0     = SCON0^5;           /* UART0 Multi-Processor Communication    */
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

/* SPI0CN 0xF8, SFR-Page 0x0 */
sbit SPIF0    = SPI0CN^7;          /* SPI0 Interrupt Flag                    */
sbit WCOL0    = SPI0CN^6;          /* SPI0 Write Collision Flag              */
sbit MODF0    = SPI0CN^5;          /* SPI0 Mode Fault Flag                   */
sbit RXOVRN0  = SPI0CN^4;          /* SPI0 RX Overrun Flag                   */
sbit NSS0MD1  = SPI0CN^3;          /* SPI0 Slave Select Mode 1               */
sbit NSS0MD0  = SPI0CN^2;          /* SPI0 Slave Select Mode 0               */
sbit TXBMT0   = SPI0CN^1;          /* SPI0 TX Buffer Empty Flag              */
sbit SPI0EN   = SPI0CN^0;          /* SPI0 Enable                            */

/* SPI1CN 0xF8, SFR-Page 0x2 */
sbit SPIF1    = SPI1CN^7;          /* SPI1 Interrupt Flag                    */
sbit WCOL1    = SPI1CN^6;          /* SPI1 Write Collision Flag              */
sbit MODF1    = SPI1CN^5;          /* SPI1 Mode Fault Flag                   */
sbit RXOVRN1  = SPI1CN^4;          /* SPI1 RX Overrun Flag                   */
sbit NSS1MD1  = SPI1CN^3;          /* SPI1 Slave Select Mode 1               */
sbit NSS1MD0  = SPI1CN^2;          /* SPI1 Slave Select Mode 0               */
sbit TXBMT1   = SPI1CN^1;          /* SPI1 TX Buffer Empty Flag              */
sbit SPI1EN   = SPI1CN^0;          /* SPI1 Enable                            */

/* P0 0x80 */
sbit P0_7     = P0^7;              /* Port 0 Bit 7                           */
sbit P0_6     = P0^6;              /* Port 0 Bit 6                           */
sbit P0_5     = P0^5;              /* Port 0 Bit 5                           */
sbit P0_4     = P0^4;              /* Port 0 Bit 4                           */
sbit P0_3     = P0^3;              /* Port 0 Bit 3                           */
sbit P0_2     = P0^2;              /* Port 0 Bit 2                           */
sbit P0_1     = P0^1;              /* Port 0 Bit 1                           */
sbit P0_0     = P0^0;              /* Port 0 Bit 0                           */

/* P1 0x90 */
sbit P1_7     = P1^7;              /* Port 1 Bit 7                           */
sbit P1_6     = P1^6;              /* Port 1 Bit 6                           */
sbit P1_5     = P1^5;              /* Port 1 Bit 5                           */
sbit P1_4     = P1^4;              /* Port 1 Bit 4                           */
sbit P1_3     = P1^3;              /* Port 1 Bit 3                           */
sbit P1_2     = P1^2;              /* Port 1 Bit 2                           */
sbit P1_1     = P1^1;              /* Port 1 Bit 1                           */
sbit P1_0     = P1^0;              /* Port 1 Bit 0                           */

/* P2 0xA0 */
sbit P2_7     = P2^7;              /* Port 2 Bit 7                           */
sbit P2_6     = P2^6;              /* Port 2 Bit 6                           */
sbit P2_5     = P2^5;              /* Port 2 Bit 5                           */
sbit P2_4     = P2^4;              /* Port 2 Bit 4                           */
sbit P2_3     = P2^3;              /* Port 2 Bit 3                           */
sbit P2_2     = P2^2;              /* Port 2 Bit 2                           */
sbit P2_1     = P2^1;              /* Port 2 Bit 1                           */
sbit P2_0     = P2^0;              /* Port 2 Bit 0                           */

/* P3 0xB0 */
sbit P3_7     = P3^7;              /* Port 3 Bit 7                           */
sbit P3_6     = P3^6;              /* Port 3 Bit 6                           */
sbit P3_5     = P3^5;              /* Port 3 Bit 5                           */
sbit P3_4     = P3^4;              /* Port 3 Bit 4                           */
sbit P3_3     = P3^3;              /* Port 3 Bit 3                           */
sbit P3_2     = P3^2;              /* Port 3 Bit 2                           */
sbit P3_1     = P3^1;              /* Port 3 Bit 1                           */
sbit P3_0     = P3^0;              /* Port 3 Bit 0                           */

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
#define INTERRUPT_PC0              19 /* Pulse Counter 0                     */
#define INTERRUPT_DMA0             20 /* Direct Memory Access 0              */
#define INTERRUPT_ENC0             21 /* Encoder/Decoder 0                   */
#define INTERRUPT_AES0             22 /* Advanced Encryption Standard 0      */

/* SFR Page Definitions */
#define LEGACY_PAGE       0x00        /* LEGACY SFR PAGE                     */
#define DPPE_PAGE         0x02        /* DPPE SFR PAGE                       */
#define DMA0_PAGE         0x02        /* DMA0 SFR PAGE                       */
#define AES0_PAGE         0x02        /* AES0 SFR PAGE                       */
#define ENC0_PAGE         0x02        /* ENC0 SFR PAGE                       */
#define CRC1_PAGE         0x02        /* CRC1 SFR PAGE                       */
#define SPI1_PAGE         0x02        /* SPI1 SFR PAGE                       */
#define LCD0_PAGE         0x02        /* LCD0 SFR PAGE                       */
#define CONFIG_PAGE       0x0F        /* SYSTEM AND PORT CONFIGURATION PAGE  */
#define CRC0_PAGE         0x0F        /* CRC0                                */
#define TOFF_PAGE         0x0F        /* TEMPERATURE SENSOR OFFSET PAGE      */

/* Si1020 EZRadioPRO Internal Register */
#define  EZRADIOPRO_DEVICE_TYPE                                0x00
#define  EZRADIOPRO_DEVICE_VERSION                             0x01
#define  EZRADIOPRO_DEVICE_STATUS                              0x02
#define  EZRADIOPRO_INTERRUPT_STATUS_1                         0x03
#define  EZRADIOPRO_INTERRUPT_STATUS_2                         0x04
#define  EZRADIOPRO_INTERRUPT_ENABLE_1                         0x05
#define  EZRADIOPRO_INTERRUPT_ENABLE_2                         0x06
#define  EZRADIOPRO_OPERATING_AND_FUNCTION_CONTROL_1           0x07
#define  EZRADIOPRO_OPERATING_AND_FUNCTION_CONTROL_2           0x08
#define  EZRADIOPRO_CRYSTAL_OSCILLATOR_LOAD_CAPACITANCE        0x09
#define  EZRADIOPRO_MICROCONTROLLER_OUTPUT_CLOCK               0x0A
#define  EZRADIOPRO_GPIO0_CONFIGURATION                        0x0B
#define  EZRADIOPRO_GPIO1_CONFIGURATION                        0x0C
#define  EZRADIOPRO_GPIO2_CONFIGURATION                        0x0D
#define  EZRADIOPRO_IO_PORT_CONFIGURATION                      0x0E
#define  EZRADIOPRO_ADC_CONFIGURATION                          0x0F
#define  EZRADIOPRO_ADC_SENSOR_AMPLIFIER_OFFSET                0x10
#define  EZRADIOPRO_ADC_VALUE                                  0x11
#define  EZRADIOPRO_TEMPERATURE_SENSOR_CONTROL                 0x12
#define  EZRADIOPRO_TEMPERATURE_VALUE_OFFSET                   0x13
#define  EZRADIOPRO_WAKE_UP_TIMER_PERIOD_1                     0x14
#define  EZRADIOPRO_WAKE_UP_TIMER_PERIOD_2                     0x15
#define  EZRADIOPRO_WAKE_UP_TIMER_PERIOD_3                     0x16
#define  EZRADIOPRO_WAKE_UP_TIMER_VALUE_1                      0x17
#define  EZRADIOPRO_WAKE_UP_TIMER_VALUE_2                      0x18
#define  EZRADIOPRO_LOW_DUTY_CYCLE_MODE_DURATION               0x19
#define  EZRADIOPRO_LOW_BATTERY_DETECTOR_THRESHOLD             0x1A
#define  EZRADIOPRO_BATTERY_VOLTAGE_LEVEL                      0x1B
#define  EZRADIOPRO_IF_FILTER_BANDWIDTH                        0x1C
#define  EZRADIOPRO_AFC_LOOP_GEARSHIFT_OVERRIDE                0x1D
#define  EZRADIOPRO_AFC_TIMING_CONTROL                         0x1E
#define  EZRADIOPRO_CLOCK_RECOVERY_GEARSHIFT_OVERRIDE          0x1F
#define  EZRADIOPRO_CLOCK_RECOVERY_OVERSAMPLING_RATIO          0x20
#define  EZRADIOPRO_CLOCK_RECOVERY_OFFSET_2                    0x21
#define  EZRADIOPRO_CLOCK_RECOVERY_OFFSET_1                    0x22
#define  EZRADIOPRO_CLOCK_RECOVERY_OFFSET_0                    0x23
#define  EZRADIOPRO_CLOCK_RECOVERY_TIMING_LOOP_GAIN_1          0x24
#define  EZRADIOPRO_CLOCK_RECOVERY_TIMING_LOOP_GAIN_0          0x25
#define  EZRADIOPRO_RECEIVED_SIGNAL_STRENGTH_INDICATOR         0x26
#define  EZRADIOPRO_RSSI_THRESHOLD                             0x27
#define  EZRADIOPRO_ANTENNA_DIVERSITY_REGISTER_1               0x28
#define  EZRADIOPRO_ANTENNA_DIVERSITY_REGISTER_2               0x29
#define  EZRADIOPRO_AFC_LIMITER                                0x2A
#define  EZRADIOPRO_AFC_CORRECTION                             0x2B
#define  EZRADIOPRO_OOK_COUNTER_VALUE_1                        0x2C
#define  EZRADIOPRO_OOK_COUNTER_VALUE_2                        0x2D
#define  EZRADIOPRO_SLICER_PEAK_HOLD                           0x2E
/* Reserved 0x2F */
#define  EZRADIOPRO_DATA_ACCESS_CONTROL                        0x30
#define  EZRADIOPRO_EZMAC_STATUS                               0x31
#define  EZRADIOPRO_HEADER_CONTROL_1                           0x32
#define  EZRADIOPRO_HEADER_CONTROL_2                           0x33
#define  EZRADIOPRO_PREAMBLE_LENGTH                            0x34
#define  EZRADIOPRO_PREAMBLE_DETECTION_CONTROL                 0x35
#define  EZRADIOPRO_SYNC_WORD_3                                0x36
#define  EZRADIOPRO_SYNC_WORD_2                                0x37
#define  EZRADIOPRO_SYNC_WORD_1                                0x38
#define  EZRADIOPRO_SYNC_WORD_0                                0x39
#define  EZRADIOPRO_TRANSMIT_HEADER_3                          0x3A
#define  EZRADIOPRO_TRANSMIT_HEADER_2                          0x3B
#define  EZRADIOPRO_TRANSMIT_HEADER_1                          0x3C
#define  EZRADIOPRO_TRANSMIT_HEADER_0                          0x3D
#define  EZRADIOPRO_TRANSMIT_PACKET_LENGTH                     0x3E
#define  EZRADIOPRO_CHECK_HEADER_3                             0x3F
#define  EZRADIOPRO_CHECK_HEADER_2                             0x40
#define  EZRADIOPRO_CHECK_HEADER_1                             0x41
#define  EZRADIOPRO_CHECK_HEADER_0                             0x42
#define  EZRADIOPRO_HEADER_ENABLE_3                            0x43
#define  EZRADIOPRO_HEADER_ENABLE_2                            0x44
#define  EZRADIOPRO_HEADER_ENABLE_1                            0x45
#define  EZRADIOPRO_HEADER_ENABLE_0                            0x46
#define  EZRADIOPRO_RECEIVED_HEADER_3                          0x47
#define  EZRADIOPRO_RECEIVED_HEADER_2                          0x48
#define  EZRADIOPRO_RECEIVED_HEADER_1                          0x49
#define  EZRADIOPRO_RECEIVED_HEADER_0                          0x4A
#define  EZRADIOPRO_RECEIVED_PACKET_LENGTH                     0x4B
/* Reserved 0x4C- 0x4E */
#define  EZRADIOPRO_ADC8_CONTROL                               0x4F
#define  EZRADIOPRO_ANALOG_TEST_BUS                            0x50
#define  EZRADIOPRO_DIGITAL_TEST_BUS                           0x51
#define  EZRADIOPRO_TX_RAMP_CONTROL                            0x52
#define  EZRADIOPRO_PLL_TUNE_TIME                              0x53
#define  EZRADIOPRO_INVALID_PREAMBLE_THRESHOLD_AND_PA_MISC     0x54
#define  EZRADIOPRO_CALIBRATION_CONTROL                        0x55
#define  EZRADIOPRO_MODEM_TEST                                 0x56
#define  EZRADIOPRO_CHARGEPUMP_TEST                            0x57
#define  EZRADIOPRO_CHARGEPUMP_CURRENT_TRIMMING_OVERRIDE       0x58
#define  EZRADIOPRO_DIVIDER_CURRENT_TRIMMING                   0x59
#define  EZRADIOPRO_VCO_CURRENT_TRIMMING                       0x5A
#define  EZRADIOPRO_VCO_CALIBRATION_OVERRIDE                   0x5B
#define  EZRADIOPRO_SYNTHESIZER_TEST                           0x5C
#define  EZRADIOPRO_BLOCK_ENABLE_OVERRIDE_1                    0x5D
#define  EZRADIOPRO_BLOCK_ENABLE_OVERRIDE_2                    0x5E
#define  EZRADIOPRO_BLOCK_ENABLE_OVERRIDE_3                    0x5F
#define  EZRADIOPRO_CHANNEL_FILTER_COEFFICIENT_ADDRESS         0x60
#define  EZRADIOPRO_CHANNEL_FILTER_COEFFICIENT_VALUE           0x61
#define  EZRADIOPRO_CRYSTAL_OSCILLATOR_CONTROL_TEST            0x62
#define  EZRADIOPRO_RC_OSCILLATOR_COARSE_CALIBRATION_OVERRIDE  0x63
#define  EZRADIOPRO_RC_OSCILLATOR_FINE_CALIBRATION_OVERRIDE    0x64
#define  EZRADIOPRO_LDO_CONTROL_OVERRIDE                       0x65
#define  EZRADIOPRO_LDO_LEVEL_SETTING                          0x66
#define  EZRADIOPRO_DELTASIGMA_ADC_TUNING_1                    0x67
#define  EZRADIOPRO_DELTASIGMA_ADC_TUNING_2                    0x68
#define  EZRADIOPRO_AGC_OVERRIDE_1                             0x69
#define  EZRADIOPRO_AGC_OVERRIDE_2                             0x6A
#define  EZRADIOPRO_GFSK_FIR_FILTER_COEFFICIENT_ADDRESS        0x6B
#define  EZRADIOPRO_GFSK_FIR_FILTER_COEFFICIENT_VALUE          0x6C
#define  EZRADIOPRO_TX_POWER                                   0x6D
#define  EZRADIOPRO_TX_DATA_RATE_1                             0x6E
#define  EZRADIOPRO_TX_DATA_RATE_0                             0x6F
#define  EZRADIOPRO_MODULATION_MODE_CONTROL_1                  0x70
#define  EZRADIOPRO_MODULATION_MODE_CONTROL_2                  0x71
#define  EZRADIOPRO_FREQUENCY_DEVIATION                        0x72
#define  EZRADIOPRO_FREQUENCY_OFFSET_1                         0x73
#define  EZRADIOPRO_FREQUENCY_OFFSET_2                         0x74
#define  EZRADIOPRO_FREQUENCY_BAND_SELECT                      0x75
#define  EZRADIOPRO_NOMINAL_CARRIER_FREQUENCY_1                0x76
#define  EZRADIOPRO_NOMINAL_CARRIER_FREQUENCY_0                0x77
#define  EZRADIOPRO_MISCELLANEOUS_SETTINGS                     0x78
#define  EZRADIOPRO_FREQUENCY_HOPPING_CHANNEL_SELECT           0x79
#define  EZRADIOPRO_FREQUENCY_HOPPING_STEP_SIZE                0x7A
#define  EZRADIOPRO_TURN_AROUND_AND_15_4_LENGTH_COMPLIANCE     0x7B
#define  EZRADIOPRO_TX_FIFO_CONTROL_1                          0x7C
#define  EZRADIOPRO_TX_FIFO_CONTROL_2                          0x7D
#define  EZRADIOPRO_RX_FIFO_CONTROL                            0x7E
#define  EZRADIOPRO_FIFO_ACCESS                                0x7F


#endif                                /* #define __REG51Si1020_H__           */