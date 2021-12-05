/*************************************************************************************************\
*               VERSA MIX SFR Register definitions for the Keil uVision2 C compiler               *
***************************************************************************************************
* Rev Number:        2.1                                                                          *
* Date:              August 2004                                                                  *
*                                                                                                 *
*                                                                                                 *
*                                                                                                 *
*                    Goal Semiconductor Inc                                                       *
\*************************************************************************************************/

#ifndef __VERSA_MIX_Keil_H__
#define __VERSA_MIX_Keil_H__

//                ********************
//                *  SFR Definition  *
//                ********************

// Note that SFR addresses marked as "Reserved" should not be accessed

//      Name          Address              Description

sfr     P0            = 0x80;           // Port 0
sfr     SP            = 0x81;           // Stack Pointer
sfr     DPL0          = 0x82;           // Data pointer 0 LSB
sfr     DPH0          = 0x83;           // Data Pointer 0 MSB
sfr     DPL1          = 0x84;           // Data pointer 1 LSB
sfr     DPH1          = 0x85;           // Data pointer 1 MSB
sfr     DPS           = 0x86;           // Data pointer Select
sfr     PCON          = 0x87;           // Standard 8051
sfr     TCON          = 0x88;           // Timer 0,1 Control
sfr     TMOD          = 0x89;           // Timer 0,1 Control
sfr     TL0           = 0x8A;           // Timer 0 LSB
sfr     TL1           = 0x8B;           // Timer 1 LSB
sfr     TH0           = 0x8C;           // Timer 0 MSB
sfr     TH1           = 0x8D;           // Timer 1 MSB
//                      0x8E               Reserved
//                      0x8F               Reserved
sfr     P1            = 0x90;           // Port 1
sfr     IRCON         = 0x91;           // Interrupt control register

sfr     ANALOGPWREN   = 0x92;           // Analog peripherals enable
sfr     DIGPWREN      = 0x93;           // Difital peripherals enable
sfr     CLKDIVCTRL    = 0x94;           // System Clock Divider Control
sfr     ADCCLKDIV     = 0x95;           // ADC Clock config

sfr     S0RELL        = 0x96;           // LSB of Serial Port 0 Baud rate generator
sfr     S0RELH        = 0x97;           // MSB of Serial Port 0 Baud rate generator
sfr     S0CON         = 0x98;           // Serial Port 0 control register
sfr     S0BUF         = 0x99;           // Serial Port 0 Rx/Tx Buffer
sfr     IEN2          = 0x9A;           // Interrupt Enable register 2

sfr     P0PINCFG      = 0x9B;           // Port 0 direction config register
sfr     P1PINCFG      = 0x9C;           // Port 1 direction config register
sfr     P2PINCFG      = 0x9D;           // Port 2 direction config register
sfr     P3PINCFG      = 0x9E;           // Port 3 direction config register
sfr     PORTIRQEN     = 0x9F;           // Port 0 interrupt on pin changes Control Register

sfr     P2            = 0xA0;           // Port 2

sfr     PORTIRQSTAT   = 0xA1;           // Port 0 interrupt on pin change Interrupt Status register

sfr     ADCCTRL       = 0xA2;           // A/D Control register
sfr     ADCCONVRLOW   = 0xA3;           // A/D Conversion Rate register (LSB)
sfr     ADCCONVRMED   = 0xA4;           // A/D Conversion Rate register (middle Byte)
sfr     ADCCONVRHIGH  = 0xA5;           // A/D Conversion Rate register (MSB)
sfr     ADCD0LO       = 0xA6;           // A/D Data register 0 (LSB)
sfr     ADCD0HI       = 0xA7;           // A/D Data register 0 (MSB)

sfr     IEN0          = 0xA8;           // Interrupt Enable register 1

sfr     ADCD1LO       = 0xA9;           // A/D Data register 1 (LSB)
sfr     ADCD1HI       = 0xAA;           // A/D Data register 1 (MSB)
sfr     ADCD2LO       = 0xAB;           // A/D Data register 2 (LSB)
sfr     ADCD2HI       = 0xAC;           // A/D Data register 2 (MSB)
sfr     ADCD3LO       = 0xAD;           // A/D Data register 3 (LSB)
sfr     ADCD3HI       = 0xAE;           // A/D Data register 3 (MSB)
//                      0xAF               Reserved
sfr     P3            = 0xB0;           // Port 3
//                      0xB1               Reserved
//                      0xB2               Reserved
sfr     BGAPCAL       = 0xB3;           // Band Gap Calibration vector
sfr     PGACAL        = 0xB4;           // PGA Calibration vector
sfr     INMUXCTRL     = 0xB5;           // ADC Input Multiplexer Control
sfr     OUTMUXCTRL    = 0xB6;           // Output Multiplexer Control
sfr     SWITCHCTRL    = 0xB7;           // Switches Control

sfr     IP0           = 0xB8;           // Interrupt Priority register 0
sfr     IP1           = 0xB9;           // Interrupt Priority register 1

sfr     DIGPOT1       = 0xBA;           // Digital Potentiometer 1 Control
sfr     DIGPOT2       = 0xBB;           // Digital Potentiometer 1 Control
sfr     ISRCCAL1      = 0xBC;           // Current Source Calibration Vector 1
sfr     ISRCCAL2      = 0xBD;           // Current Source Calibration Vector 2

sfr     S1RELL        = 0xBE;           // LSB of Serial Port 1 Baud rate generator
sfr     S1RELH        = 0xBF;           // MSB of Serial Port 1 Baud rate generator
sfr     S1CON         = 0xC0;           // Serial Port 1 control register
sfr     S1BUF         = 0xC1;           // Serial Port 1 Rx/Tx Buffer
sfr     CCL1          = 0xC2;           // LSB Compare Capture Register 1
sfr     CCH1          = 0xC3;           // MSB Compare Capture Register 1
sfr     CCL2          = 0xC4;           // LSB Compare Capture Register 2
sfr     CCH2          = 0xC5;           // MSB Compare Capture Register 2
sfr     CCL3          = 0xC6;           // LSB Compare Capture Register 3
sfr     CCH3          = 0xC7;           // MSB Compare Capture Register 3
sfr     T2CON         = 0xC8;           // Timer 2 Control Register
sfr     CCEN          = 0xC9;           // Compare Capture Enable Register
sfr     CRCL          = 0xCA;           // LSB Compare Reload Capture Register
sfr     CRCH          = 0xCB;           // MSB Compare Reload Capture Register
sfr     TL2           = 0xCC;           // LSB of Timer 2
sfr     TH2           = 0xCD;           // MSB of Timer 2
//                      0xCE               Reserved
sfr     MPAGE         = 0xCF;           // Memory PAGE Control Register
sfr     PSW           = 0xD0;           // Program Status Word register
//                      0xD1               Reserved
//                      0xD2               Reserved
//                      0xD3               Reserved
//                      0xD4               Reserved
//                      0xD5               Reserved
//                      0xD6               Reserved
//                      0xD7               Reserved
sfr     WDCON         = 0xD8;           // Watchdog Timer Control Register
sfr     WDTREL        = 0xD9;           // Watchdog Reload Register


sfr     I2CCONFIG     = 0xDA;           // I2C configuration register
sfr     I2CCLKCTRL    = 0xDB;           // I2C clock control register
sfr     I2CCHIPID     = 0xDC;           // I2C chip ID
sfr     I2CIRQSTAT    = 0xDD;           // I2C interrupt status register
sfr     I2CRXTX       = 0xDE;           // I2C RX/TX Buffer

//                      0xDF               Reserved
sfr     ACC           = 0xE0;           // Accumulator



sfr     SPIRX3TX0     = 0xE1;           // SPI RX/TX Buffer
sfr     SPIRX2TX1     = 0xE2;           // SPI RX/TX Buffer
sfr     SPIRX1TX2     = 0xE3;           // SPI RX/TX Buffer
sfr     SPIRX0TX3     = 0xE4;           // SPI RX/TX Buffer
sfr     SPICTRL       = 0xE5;           // SPI Control Register
sfr     SPICONFIG     = 0xE6;           // SPI Config Register
sfr     SPISIZE       = 0xE7;           // SPI Size Control Register

sfr     IEN1          = 0xE8;           // Interrupt Enable register 1
sfr     SPIIRQSTAT    = 0xE9;           // SPI Interrupt Status Register
//                      0xEA               Reserved

sfr     MACCTRL       = 0xEB;           // MAC control Register 1
sfr     MACC0         = 0xEC;           // MAC Unit C operant Byte0 (LSB)
sfr     MACC1         = 0xED;           // MAC Unit C Operand Byte1
sfr     MACC2         = 0xEE;           // MAC Unit C Operand Byte2
sfr     MACC3         = 0xEF;           // MAC Unit C Operand Byte3 (MSB)


sfr     B             = 0xF0;           // B register

sfr     MACCTRL2      = 0xF1;           // MAC Unit control Register 2
sfr     MACA0         = 0xF2;           // LSB MAC Unit A Operand
sfr     MACA1         = 0xF3;           // MSB MAC Unit A Operand
sfr     MACRES0       = 0xF4;           // MAC Unit Result Byte0 (LSB)
sfr     MACRES1       = 0xF5;           // MAC Unit Result Byte1
sfr     MACRES2       = 0xF6;           // MAC Unit Result Byte2
sfr     MACRES3       = 0xF7;           // MAC Unit Result Byte3 (MSB)

sfr     USERFLAGS     = 0xF8;           // User Flags

sfr     MACB0         = 0xF9;           // LSB MAC Unit A Operand
sfr     MACB1         = 0xFA;           // MSB MAC Unit A Operand
sfr     MACSHIFTCTRL  = 0xFB;           // MAC Unit Barrel Shifter Control Register
sfr     MACPREV0      = 0xFC;           // MAC Unit Previous result register Byte0 (LSB)
sfr     MACPREV1      = 0xFD;           // MAC Unit Previous result register Byte1
sfr     MACPREV2      = 0xFE;           // MAC Unit Previous result register Byte2
sfr     MACPREV3      = 0xFF;           // MAC Unit Previous result register Byte3 (MSB)


//*******************************************
//*  BIT Definition of bit addressable SFRs *
//*******************************************

//             Address      Name            Description

//  TCON Register (SFR 88h)
sbit    TF1           = TCON ^ 7;        // Timer 1 Overflow flag bit
sbit    TR1           = TCON ^ 6;        // Timer 1 Run control bit
sbit    TF0           = TCON ^ 5;        // Timer 0 Overflow flag bit
sbit    TR0           = TCON ^ 4;        // Timer 0 Run control bit
sbit    IE1           = TCON ^ 3;        // Interrupt 1 Edge Flag bit
sbit    IT1           = TCON ^ 2;        // Interrupt 1 Type Control bit
sbit    IE0           = TCON ^ 1;        // Interrupt 0 Edge Flag bit
sbit    IT0           = TCON ^ 0;        // Interrupt 0 Type Control bit

//  S0CON  Register (SFR 98h)
sbit    S0M0          = S0CON ^ 7;       // Serial Port 0 Mode Select bit 0
sbit    S0M1          = S0CON ^ 6;       // Serial Port 0 Mode Select bit 1
sbit    MCPE0         = S0CON ^ 5;       // Serial Port 0 Multi processor Communication Enable
sbit    R0EN          = S0CON ^ 4;       // Serial Port 0 Receive Enable
sbit    T0B8          = S0CON ^ 3;       // Serial Port 0 9 Transmit bit (if enabled)
sbit    R0B8          = S0CON ^ 2;       // Serial Port 0 9 Received bit (if enabled)
sbit    T0I           = S0CON ^ 1;       // Serial Port 0 Transmit Interrupt Flag
sbit    R0I           = S0CON ^ 0;       // Serial Port 0 Receive Interrupt Flag

//  IEN0  Register (SFR A8h)
sbit     EA           = IEN0 ^ 7;        // Interrupt Enable bit
sbit     WDT          = IEN0 ^ 6;        // Watchdog timer Refresh bit
sbit     T2IE         = IEN0 ^ 5;        // Timer 2 Interrupt enable bit
sbit     S0IE         = IEN0 ^ 4;        // Serial Port 0 Interrupt enable bit
sbit     T1IE         = IEN0 ^ 3;        // Timer 1 Interrupt enable bit
sbit     INT1IE       = IEN0 ^ 2;        // External Interrupt 0 enable bit
sbit     T0IE         = IEN0 ^ 1;        // Timer 0 Interrupt enable bit
sbit     INT0IE       = IEN0 ^ 0;        // External Interrupt 0 enable bit

//  IP0  Register (SFR B8h)
sbit     OWDS         = IP0 ^ 7;         // Watchdog control bit
sbit     WDTS         = IP0 ^ 6;         // Wadtchdog control bit
sbit     IP0B5        = IP0 ^ 5;         // Interrupt priority configuration bit
sbit     IP0B4        = IP0 ^ 4;         // Interrupt priority configuration bit
sbit     IP0B3        = IP0 ^ 3;         // Interrupt priority configuration bit
sbit     IP0B2        = IP0 ^ 2;         // Interrupt priority configuration bit
sbit     IP0B1        = IP0 ^ 1;         // Interrupt priority configuration bit
sbit     IP0B0        = IP0 ^ 0;         // Interrupt priority configuration bit

// S1CON  Register (SFR C0h)
sbit     S1M          = S1CON ^ 7;       // Serial Port 1 Mode Select bit

sbit     MPCE1        = S1CON ^ 5;       // Serial Port 1 Multi processor Communication Enable
sbit     R1EN         = S1CON ^ 4;       // Serial Port 1 Receive Enable
sbit     T1B8         = S1CON ^ 3;       // Serial Port 1 9 Transmit bit (if enabled)
sbit     R1B8         = S1CON ^ 2;       // Serial Port 1 9 Received bit (if enabled)
sbit     T1I          = S1CON ^ 1;       // Serial Port 1 Transmit Interrupt Flag
sbit     R1I          = S1CON ^ 0;       // Serial Port 1 Receive Interrupt Flag

// T2CON  Register (SFR C8h)
sbit     T2PS         = T2CON ^ 7;       // Timer 2 Prescaler Select bit
sbit     T2PSM        = T2CON ^ 6;       // Timer 2 Prescaler Mode bit
sbit     T2S          = T2CON ^ 5;       // Timer 2 Size select bit
sbit     T2R1         = T2CON ^ 4;       // Timer 2 reload mode Select bit 1
sbit     T2R0         = T2CON ^ 3;       // Timer 2 reload mode Select bit 0
sbit     T2CM         = T2CON ^ 2;       // Timer 2 Compare mode select bit
sbit     T2I1         = T2CON ^ 1;       // Timer 2 Input select bit 1
sbit     T2I0         = T2CON ^ 0;       // Timer 2 Input select bit 0

// PSW  Register (SFR D0h)
sbit     CY           = PSW ^ 7;         // Carry flag bit
sbit     AC           = PSW ^ 6;         // Auxiliary Carry flag bit
sbit     F0           = PSW ^ 5;         // General Purpose User bit
sbit     RS1          = PSW ^ 4;         // Register Bank select bit
sbit     RS0          = PSW ^ 3;         // Register Bank select bit
sbit     OV           = PSW ^ 2;         // Overflow flag bit

sbit     P            = PSW ^ 0;         // Parity flag bit

// WDCON Register (SFR D8h)
sbit     WDTCON       = WDCON ^ 7;       // Watchdog Timer control bit

// IEN1  Register (SFR E8h)
sbit     T2EXIE       = IEN1 ^ 7;        // T2EX interrupt Enable bit
sbit     SWDT         = IEN1 ^ 6;        // Watchdog Start/Refresh flag bit
sbit     ADCPCIE      = IEN1 ^ 5;        // A/D and Port Change Interrupt Enable bit
sbit     MACOVIE      = IEN1 ^ 4;        // MAC Overflow32 Interrupt Enable bit
sbit     I2CIE        = IEN1 ^ 3;        // I2C Interrupts Enable bit
sbit     SPIOVIE      = IEN1 ^ 2;        // SPI RX Overflow Interrupt Enable bit
sbit     SPITEIE      = IEN1 ^ 1;        // SPI TX Empty Interrupt Enable bit

// USERFLAGS Register (SFR F8h)
sbit     UF7          = USERFLAGS ^ 7;   // User Flags bit 7
sbit     UF6          = USERFLAGS ^ 6;   // User Flags bit 6
sbit     UF5          = USERFLAGS ^ 5;   // User Flags bit 5
sbit     UF4          = USERFLAGS ^ 4;   // User Flags bit 4
sbit     UF3          = USERFLAGS ^ 3;   // User Flags bit 3
sbit     UF2          = USERFLAGS ^ 2;   // User Flags bit 2
sbit     UF1          = USERFLAGS ^ 1;   // User Flags bit 1
sbit     UF0          = USERFLAGS ^ 0;   // User Flags bit 0

#endif
/*************************************************************************************************/
