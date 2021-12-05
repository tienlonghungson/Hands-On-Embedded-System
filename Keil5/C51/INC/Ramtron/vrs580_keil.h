/***************************************************************************\
*         VRS580 SFR Definitions for the Keil uVision2 C51 Compiler         *
*****************************************************************************
* Rev Number:        1.0                                                    *
* Date:              September 2004                                         *
*                                                                           *
*                    Goal Semiconductor Inc                                 *
\***************************************************************************/

#ifndef __VRS580_Keil_H__
#define __VRS580_Keil_H__

// Registers that do not appear on this list should not be accessed

    // NAME     ADDRESS       DESCRIPTION

sfr    P0       = 0x80;    // Port 0
sfr    SP       = 0x81;    // Stack Pointer
sfr    DPL      = 0x82;    // Data pointer LSB
sfr    DPH      = 0x83;    // Data pointer MSB

sfr    RCON     = 0x85;    // Internal RAM control
sfr    DBANK    = 0x86;    // Data Bank control
sfr    PCON     = 0x87;    // Power Control
sfr    TCON     = 0x88;    // Timer 0 and 1 control
sfr    TMOD     = 0x89;    // Timer Mode control
sfr    TL0      = 0x8A;    // Timer 0 LSB
sfr    TL1      = 0x8B;    // Timer 1 LSB
sfr    TH0      = 0x8C;    // Timer 0 MSB
sfr    TH1      = 0x8D;    // Timer 1 LSB

sfr    P1       = 0x90;    // Port 1

sfr    WDTLOCK  = 0x97;    // Watchdog Timer Lock
sfr    SCON     = 0x98;    // Serial Port Control
sfr    SBUF     = 0x99;    // Serial Port Rx/Tx Buffer

sfr    PWMEN    = 0x9B;    // Pulse Width Modulation Enable

sfr    WDTCON   = 0x9F;    // Watchdog Timer Control
sfr    P2       = 0xA0;    // Port 2

sfr    PWMCON   = 0xA3;    // Pulse Width Modulation Control
sfr    PWMD0    = 0xA4;    // Pulse Width Modulation Data Register 0
sfr    PWMD1    = 0xA5;    // Pulse Width Modulation Data Register 1
sfr    PWMD2    = 0xA6;    // Pulse Width Modulation Data Register 2
sfr    PWMD3    = 0xA7;    // Pulse Width Modulation Data Register 3
sfr    IE       = 0xA8;    // Interrupt Enable

sfr    PWMD4    = 0xAC;    // Pulse Width Modulation Data Register 4

sfr    P3       = 0xB0;    // Port 3

sfr    IP       = 0xB8;    // Interrupt Priority

sfr    SYSCON   = 0xBF;    // System Control

sfr    T2CON    = 0xC8;    // Timer 2 Control

sfr    RCAP2L   = 0xCA;    // Timer 2 UART Baudrate generator LSB
sfr    RCAP2H   = 0xCB;    // Timer 2 UART Baudrate generator MSB
sfr    TL2      = 0xCC;    // Timer 2 LSB
sfr    TH2      = 0xCD;    // Timer 2 MSB
sfr    PSW      = 0xD0;    // Program Status Word

sfr    P4       = 0xD8;    // Port 4

sfr    ACC      = 0xE0;    // Accumulator

sfr    B        = 0xF0;    // B

    // Bit addressable register definitions

    // P0     SFR 0x80

sbit   P0_7     = 0x87;    // Port 0 bit 7
sbit   P0_6     = 0x86;    // Port 0 bit 6
sbit   P0_5     = 0x85;    // Port 0 bit 5
sbit   P0_4     = 0x84;    // Port 0 bit 4
sbit   P0_3     = 0x83;    // Port 0 bit 3
sbit   P0_2     = 0x82;    // Port 0 bit 2
sbit   P0_1     = 0x81;    // Port 0 bit 1
sbit   P0_0     = 0x80;    // Port 0 bit 0

    // TCON   SFR 0x88

sbit   TF1      = 0x8F;    // Timer 1 Overflow Flag
sbit   TR1      = 0x8E;    // Timer 1 Run control
sbit   TF0      = 0x8D;    // Timer 0 Overflow Flag
sbit   TR0      = 0x8C;    // Timer 0 Run control
sbit   IE1      = 0x8B;    // External Interrupt 1 Edge flag
sbit   IT1      = 0x8A;    // External Interrupt 1 Type control
sbit   IE0      = 0x89;    // External Interrupt 0 Edge flag
sbit   IT0      = 0x88;    // External Interrupt 0 Type control

    // P1     SFR 0x90

sbit   P1_7     = 0x97;    // Port 1 bit 7
sbit   P1_6     = 0x96;    // Port 1 bit 6
sbit   P1_5     = 0x95;    // Port 1 bit 5
sbit   P1_4     = 0x94;    // Port 1 bit 4
sbit   P1_3     = 0x93;    // Port 1 bit 3
sbit   P1_2     = 0x92;    // Port 1 bit 1
sbit   P1_1     = 0x91;    // Port 1 bit 1
sbit   P1_0     = 0x90;    // Port 1 bit 0

    // SCON   SFR 0x98

sbit   SM0      = 0x9F;    // Serial Select Mode 0
sbit   SM1      = 0x9E;    // Serial Select Mode 1
sbit   SM2      = 0x9D;    // Serial Select Mode 2
sbit   REN      = 0x9C;    // Serial Reception Enable
sbit   TB8      = 0x9B;    // Serial Transmit Bit 8 (9th bit)
sbit   RB8      = 0x9A;    // Serial Receive Bit 8 (9th bit)
sbit   TI       = 0x99;    // Serial Transmission Interrupt flag
sbit   RI       = 0x98;    // Serial Reception Interrupt flag

    // P2     SFR 0xA0

sbit   P2_7     = 0xA7;    // Port 2 bit 7
sbit   P2_6     = 0xA6;    // Port 2 bit 6
sbit   P2_5     = 0xA5;    // Port 2 bit 5
sbit   P2_4     = 0xA4;    // Port 2 bit 4
sbit   P2_3     = 0xA3;    // Port 2 bit 3
sbit   P2_2     = 0xA2;    // Port 2 bit 2
sbit   P2_1     = 0xA1;    // Port 2 bit 1
sbit   P2_0     = 0xA0;    // Port 2 bit 0

    // IE     SFR 0xA8

sbit   EA       = 0xAF;    // Enable Interrupts

sbit   ET2      = 0xAD;    // Timer 2 Interrupt Enable
sbit   ES       = 0xAC;    // Serial Port Interrupt Enable
sbit   ET1      = 0xAB;    // Timer 1 Interrupt Enable
sbit   EX1      = 0xAA;    // External Interrupt 1 Enable
sbit   ET0      = 0xA9;    // Timer 0 Interrupt Enable
sbit   EX0      = 0xA8;    // External Interrupt 0 Enable

    // P3     SFR 0xB0

sbit   P3_7     = 0xB7;    // Port 3 bit 7
sbit   P3_6     = 0xB6;    // Port 3 bit 6
sbit   P3_5     = 0xB5;    // Port 3 bit 5
sbit   P3_4     = 0xB4;    // Port 3 bit 4
sbit   P3_3     = 0xB3;    // Port 3 bit 3
sbit   P3_2     = 0xB2;    // Port 3 bit 2
sbit   P3_1     = 0xB1;    // Port 3 bit 1
sbit   P3_0     = 0xB0;    // Port 3 bit 0

    // IP     SFR 0xB8

sbit   PT2      = 0xBD;    // Gives Timer 2 Interrupt Higher Priority
sbit   PS       = 0xBC;    // Gives Serial Port Interrupt Higher Priority
sbit   PT1      = 0xBB;    // Gives Timer 1 Interrupt Higher Priority
sbit   PX1      = 0xBA;    // Gives INT1 Interrupt Higher Priority
sbit   PT0      = 0xB9;    // Gives Timer 0 Interrupt Higher Priority
sbit   PX0      = 0xB8;    // Gives INT0 Interrupt Higher Priority

    // T2CON  SFR 0xC8

sbit   TF2      = 0xCF;    // Timer 2 Overflow
sbit   EXF2     = 0xCE;    // Timer 2 External Flag
sbit   RCLK     = 0xCD;    // Serial Port Receive Clock
sbit   TCLK     = 0xCC;    // Serial Port Transmit Clock
sbit   EXEN2    = 0xCB;    // Timer 2 External Mode Enable
sbit   TR2      = 0xCA;    // Timer 2 Start/Stop
sbit   C_T2     = 0xC9;    // Timer 2 Counter/Timer select
sbit   CP_RL2   = 0xC8;    // Timer 2 Capture/Reload select

    // PSW    SFR 0xD0

sbit   CY       = 0xD7;    // Carry flag
sbit   AC       = 0xD6;    // Auxilliary Carry flag
sbit   F0       = 0xD5;    // User Flag 0
sbit   RS1      = 0xD4;    // Register R0-R7 Select 1
sbit   RS0      = 0xD3;    // Register R0-R7 Select 0
sbit   OV       = 0xD2;    // Overflow flag

sbit   P        = 0xD0;    // Parity flag

    // P4     SFR 0xD8

sbit   P4_3     = 0xDB;    // Port 4 bit 3
sbit   P4_2     = 0xDA;    // Port 4 bit 2
sbit   P4_1     = 0xD9;    // Port 4 bit 1
sbit   P4_0     = 0xD8;    // Port 4 bit 0

    // ACC    SFR 0xE0

sbit   ACC_7    = 0xE7;    // Accumulator bit 7
sbit   ACC_6    = 0xE6;    // Accumulator bit 6
sbit   ACC_5    = 0xE5;    // Accumulator bit 5
sbit   ACC_4    = 0xE4;    // Accumulator bit 4
sbit   ACC_3    = 0xE3;    // Accumulator bit 3
sbit   ACC_2    = 0xE2;    // Accumulator bit 2
sbit   ACC_1    = 0xE1;    // Accumulator bit 1
sbit   ACC_0    = 0xE0;    // Accumulator bit 0

    // B      SFR 0xF0

sbit   B_7      = 0xF7;    // B register bit 7
sbit   B_6      = 0xF6;    // B register bit 6
sbit   B_5      = 0xF5;    // B register bit 5
sbit   B_4      = 0xF4;    // B register bit 4
sbit   B_3      = 0xF3;    // B register bit 3
sbit   B_2      = 0xF2;    // B register bit 2
sbit   B_1      = 0xF1;    // B register bit 1
sbit   B_0      = 0xF0;    // B register bit 0

#endif
