/*--------------------------------------------------------------------------
 * reg9e5.h
 *
 * Keil C51 header file for the Nordic VLSI nRF9E5 433-968MHz RF transceiver
 * with embedded 8051 compatible microcontroller.
 *
 * $Revision: 2 $
 *
 *------------------------------------------------------------------------*/
#ifndef __REG9E5_H__
#define __REG9E5_H__

/*  BYTE Registers  */

sfr P0          = 0x80;
sfr SP          = 0x81;
sfr DPL         = 0x82;
sfr DPH         = 0x83;
sfr DPL1        = 0x84;
sfr DPH1        = 0x85;
sfr DPS         = 0x86;
sfr PCON        = 0x87;
sfr TCON        = 0x88;
sfr TMOD        = 0x89;
sfr TL0         = 0x8A;
sfr TL1         = 0x8B;
sfr TH0         = 0x8C;
sfr TH1         = 0x8D;
sfr CKCON       = 0x8E;
sfr P1          = 0x90;
sfr EXIF        = 0x91;
sfr MPAGE       = 0x92;
sfr SCON        = 0x98;
sfr SBUF        = 0x99;
sfr IE          = 0xA8;
sfr IP          = 0xB8;
sfr T2CON       = 0xC8;
sfr RCAP2L      = 0xCA;
sfr RCAP2H      = 0xCB;
sfr TL2         = 0xCC;
sfr TH2         = 0xCD;
sfr PSW         = 0xD0;
sfr EICON       = 0xD8;
sfr ACC         = 0xE0;
sfr B           = 0xF0;
sfr EIE         = 0xE8;
sfr EIP         = 0xF8;

sfr P0_DRV      = 0x93;
sfr P0_DIR      = 0x94;
sfr P0_ALT      = 0x95;
sfr P1_DIR      = 0x96;
sfr P1_ALT      = 0x97;
sfr P2          = 0xA0;
sfr PWMCON      = 0xA9;
sfr PWMDUTY     = 0xAA;
sfr REGX_MSB    = 0xAB;
sfr REGX_LSB    = 0xAC;
sfr REGX_CTRL   = 0xAD;
sfr RSTREAS     = 0xB1;
sfr SPI_DATA    = 0xB2;
sfr SPI_CTRL    = 0xB3;
sfr SPICLK      = 0xB4;
sfr TICK_DV     = 0xB5;
sfr CK_CTRL     = 0xB6;
sfr CKLFCON     = 0xBF;

/*  BIT Registers  */

/*  PSW */
sbit CY         = PSW^7;
sbit AC         = PSW^6;
sbit F0         = PSW^5;
sbit RS1        = PSW^4;
sbit RS0        = PSW^3;
sbit OV         = PSW^2;
sbit F1         = PSW^1;
sbit P          = PSW^0;

/*  TCON  */
sbit TF1        = TCON^7;
sbit TR1        = TCON^6;
sbit TF0        = TCON^5;
sbit TR0        = TCON^4;
sbit IE1        = TCON^3;
sbit IT1        = TCON^2;
sbit IE0        = TCON^1;
sbit IT0        = TCON^0;

/*  IE  */
sbit EA         = IE^7;
sbit ET2        = IE^5;
sbit ES         = IE^4;
sbit ET1        = IE^3;
sbit EX1        = IE^2;
sbit ET0        = IE^1;
sbit EX0        = IE^0;

/*  IP  */
sbit PT2        = IP^5;
sbit PS         = IP^4;
sbit PT1        = IP^3;
sbit PX1        = IP^2;
sbit PT0        = IP^1;
sbit PX0        = IP^0;


/*  P0  */
sbit T1         = P0^6;
sbit T0         = P0^5;
sbit INT1       = P0^4;
sbit INT0       = P0^3;

/*  P1  */
sbit T2         = P1^0;
sbit EECSN      = P1^3;

/*  SCON  */
sbit SM0        = SCON^7;
sbit SM1        = SCON^6;
sbit SM2        = SCON^5;
sbit REN        = SCON^4;
sbit TB8        = SCON^3;
sbit RB8        = SCON^2;
sbit TI         = SCON^1;
sbit RI         = SCON^0;

/*  T2CON  */
sbit TF2        = T2CON^7;
sbit EXF2       = T2CON^6;
sbit RCLK       = T2CON^5;
sbit TCLK       = T2CON^4;
sbit EXEN2      = T2CON^3;
sbit TR2        = T2CON^2;
sbit C_T2       = T2CON^1;
sbit CP_RL2     = T2CON^0;

/*  EICON  */
sbit SMOD1      = EICON^7;
sbit WDTI       = EICON^3;

/*  EIE  */
sbit EWDI       = EIE^4;
sbit EX5        = EIE^3;
sbit EX4        = EIE^2;
sbit EX3        = EIE^1;
sbit EX2        = EIE^0;

/*  EIP  */
sbit PWDI       = EIP^4;
sbit PX5        = EIP^3;
sbit PX4        = EIP^2;
sbit PX3        = EIP^1;
sbit PX2        = EIP^0;

/* RADIO Port (P2) */

sbit SPI_SCK    = P2^0;
sbit SPI_MOSI   = P2^1;
sbit RACSN      = P2^3;
sbit TXEN       = P2^4;
sbit TRX_CE     = P2^5;

sbit SPI_MISO   = P2^2;
sbit EOC        = P2^4;
sbit DR         = P2^5;
sbit CD         = P2^6;
sbit AM         = P2^7;

sbit P00        = P0^0;
sbit P01        = P0^1;
sbit P02        = P0^2;
sbit P03        = P0^3;
sbit P04        = P0^4;
sbit P05        = P0^5;
sbit P06        = P0^6;
sbit P07        = P0^7;

// SPI Commands

#define WRC     0x00 //W_RF_CONFIG
#define RRC     0x10 //R_RF_CONFIG
#define WTP     0x20 //W_TX_PAYLOAD
#define RTP     0x21 //R_TX_PAYLOAD
#define WTA     0x22 //W_TX_ADDRESS
#define RTA     0x23 //R_TX_ADDRESS
#define RRP     0x24 //R_RX_PAYLOAD
#define RAD     0x40 //R_ADC_DATA 
#define WAC     0x44 //W_ADC_CONFIG
#define RAC     0x46 //R_ADC_CONFIG
#define WTU     0x50 //W_TEST_UNLOCK (use with data A5)
#define WTR     0x52 //W_TEST_REGISTER
#define RTR     0x53 //R_TEST_REGISTER
#define CC      0x80 //CHANNEL_CONFIG
#define SAV     0xC0 //START_ADC_CONV
#define NOP     0xFF //NO_OP

#endif
