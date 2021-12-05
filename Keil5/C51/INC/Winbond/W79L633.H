/*--------------------------------------------------------------------------
W79L633.H

Header file for Nuvoton W79L633
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.

--------------------------------------------------------------------------*/
#ifndef __W79L633_H__
#define __W79L633_H__

/*  BYTE Registers  */
sfr P0     = 0x80;
sfr P1     = 0x90;
sfr P2     = 0xA0;
sfr P3     = 0xB0;
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr PCON   = 0x87;
sfr TCON   = 0x88;
sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr IE     = 0xA8;
sfr IP     = 0xB8;
sfr SCON   = 0x98;
sfr SBUF   = 0x99;
sfr SCON0  = 0x98;
sfr SBUF0  = 0x99;

/*  W79L633 Extensions  */
sfr CKCON  = 0x8E;
sfr P4CONA = 0x92;
sfr P4CONB = 0x93;
sfr P40AL  = 0x94;
sfr P40AH  = 0x95;
sfr P41AL  = 0x96;
sfr P41AH  = 0x97;
sfr P42AL  = 0x9A;
sfr P42AH  = 0x9B;
sfr P43AL  = 0x9C;
sfr P43AH  = 0x9D;
sfr CHPCON = 0x9F;
sfr P4CSIN = 0xA2;
sfr P4     = 0xA5;
sfr SADDR  = 0xA9;
sfr ROMCON = 0xAB;
sfr SFRAL  = 0xAC;
sfr SFRAH  = 0xAD;
sfr SFRFD  = 0xAE;
sfr SFRCN  = 0xAF;
sfr SADEN  = 0xB9;
sfr PMR    = 0xC4;
sfr STATUS = 0xC5;
sfr TA     = 0xC7;
sfr T2CON  = 0xC8;
sfr T2MOD  = 0xC9;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;
sfr WDCON  = 0xD8;
sfr WDCON2 = 0xD7;
sfr EIE    = 0xE8;
sfr EIP    = 0xF8;
sfr PCL    = 0xF1;
sfr PCH    = 0xF2;
sfr I2CON2 	    = 0xF9;
sfr I2ADDR20 	= 0xFA;
sfr I2ADDR21 	= 0xFB;
sfr I2DAT2 	    = 0xFC;
sfr I2STATUS2 	= 0xFD;
sfr I2CLK2 	    = 0xFE;
sfr I2TIMER2 	= 0xFF;
sfr I2CON 	    = 0xE9;
sfr I2ADDR10 	= 0xEA;
sfr I2ADDR11 	= 0xEB;
sfr I2DAT 	    = 0xEC;
sfr I2STATUS 	= 0xED;
sfr I2CLK 	    = 0xEE;
sfr I2TIMER 	= 0xEF;
sfr PWMP 	    = 0xD9;
sfr PWM0 	    = 0xDA;
sfr PWM1 	    = 0xDB;
sfr PWMCON1 	= 0xDC;
sfr PWM2 	    = 0xDD;
sfr PWM3 	    = 0xDE;
sfr PWM4 	    = 0xCF;
sfr PWMCON2 	= 0xCE;
sfr ADCPS 	    = 0xC6;
sfr STATUS 	    = 0xC5;
sfr PWM5 	    = 0xC3;
sfr ADCH        = 0xC2;
sfr ADCL 	    = 0xC1;
sfr ADCCON 	    = 0xC0;
sfr ADCON 	    = 0xC0;
sfr P7	 	    = 0xB3;
sfr P6	 	    = 0xB2;
sfr P5	 	    = 0xB1;
sfr XRAMAH 	    = 0xA1;

/*  BIT Registers  */
/*  PSW */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit FL    = PSW^1;
sbit P     = PSW^0;

/*  TCON  */
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

/*  IE  */
sbit EA    = IE^7;
sbit ES1   = IE^6;
sbit ET2   = IE^5;
sbit ES0   = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PT2   = IP^5;
sbit PS0   = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  P1  */
sbit TXD1  = P1^3;
sbit RXD1  = P1^2;
sbit T2EX  = P1^1;
sbit T2    = P1^0;

/*  P3  */
sbit RD    = P3^7;
sbit WR    = P3^6;
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD0  = P3^1;
sbit RXD0  = P3^0;

/*  SCON0  */
sbit SM0   = SCON0^7; /* alternative SM0_FE_0 */
sbit SM1   = SCON0^6; /* alternative SM1_0 */
sbit SM2   = SCON0^5; /* alternative SM2_0 */
sbit REN   = SCON0^4; /* alternative REN_0 */
sbit TB8   = SCON0^3; /* alternative TB8_0 */
sbit RB8   = SCON0^2; /* alternative RB8_0 */
sbit TI    = SCON0^1; /* alternative TI_0  */
sbit RI    = SCON0^0; /* alternative RI_0  */

/*  T2CON  */
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit TR2    = T2CON^2;
sbit C_T2   = T2CON^1;
sbit CP_RL2 = T2CON^0;

/*  WDCON  */
sbit SMOD_1 = WDCON^7;
sbit POR    = WDCON^6;
sbit WDIF   = WDCON^3;
sbit WTRF   = WDCON^2;
sbit EWT    = WDCON^1;
sbit RWT    = WDCON^0;

/*  EIE  */
sbit EWDI   = EIE^4;
sbit EI2C2  = EIE^1;
sbit EI2C1  = EIE^0;

/*  EIP  */
sbit PWDI   = EIP^4;
sbit PI2C2  = EIP^1;
sbit PI2C1  = EIP^0;
