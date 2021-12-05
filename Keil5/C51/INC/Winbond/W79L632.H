/*--------------------------------------------------------------------------
W79L632.H

Header file for Nuvoton W79L632
--------------------------------------------------------------------------*/
	
#ifndef __W79L632_H__
#define __W79L632_H__
/*  BYTE Registers  */
sfr P0    = 0x80;
sfr SP    = 0x81;
sfr DPL   = 0x82;
sfr DPH   = 0x83;
sfr PCON  = 0x87;

sfr TCON  = 0x88;
sfr TMOD  = 0x89;
sfr TL0   = 0x8A;
sfr TL1   = 0x8B;
sfr TH0   = 0x8C;
sfr TH1   = 0x8D;
sfr CKCON   = 0x8E;

sfr P1    = 0x90;
sfr P4CONA   = 0x92;
sfr P4CONB   = 0x93;
sfr P40AL   = 0x94;
sfr P40AH   = 0x95;
sfr P41AL   = 0x96;
sfr P41AH   = 0x97;

sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr P42AL   = 0x9A;
sfr P42AH   = 0x9B;
sfr P43AL   = 0x9C;
sfr P43AH   = 0x9D;
sfr CHPCON   = 0x9F;

sfr P2    = 0xA0;
sfr P4CSIN   = 0xA2;
sfr P4   = 0xA5;

sfr IE    = 0xA8;
sfr SADDR    = 0xA9;

sfr ROMCON    = 0xAB;
sfr SFRAL    = 0xAC;
sfr SFRAH    = 0xAD;
sfr SFDFD    = 0xAE;
sfr SFRCN    = 0xAF;

sfr P3    = 0xB0;

sfr IP    = 0xB8;
sfr SADEN    = 0xB9;

sfr PMR   = 0xC4;
sfr STATUS   = 0xC5;
sfr TA   = 0xC7;

sfr T2CON   = 0xC8;
sfr T2MOD   = 0xC9;
sfr RCAP2L   = 0xCA;
sfr RCAP2H   = 0xCB;
sfr TL2   = 0xCC;
sfr TH2   = 0xCD;

sfr PSW   = 0xD0;

sfr WDCON   = 0xD8;

sfr ACC   = 0xE0;

sfr EIE   = 0xE8;

sfr B     = 0xF0;
sfr EIP   = 0xF8;



/*  BIT Registers  */
/*  PSW  */
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
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PS1   = IP^6;
sbit PT2   = IP^5;
sbit PS0   = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  SCON  */
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;


/*  P0  */
sbit P00  = P0^0;
sbit P01  = P0^1; 
sbit P02  = P0^2; 
sbit P03  = P0^3; 
sbit P04  = P0^4; 
sbit P05  = P0^5; 
sbit P06  = P0^6; 
sbit P07  = P0^7; 
/*  P2  */
sbit P20  = P2^0;
sbit P21  = P2^1; 
sbit P22  = P2^2; 
sbit P23  = P2^3; 
sbit P24  = P2^4; 
sbit P25  = P2^5; 
sbit P26  = P2^6; 
sbit P27  = P2^7; 

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
sbit EPFI   = WDCON^5;
sbit PFI    = WDCON^4;
sbit WDIF   = WDCON^3;
sbit WTRF   = WDCON^2;
sbit EWT    = WDCON^1;
sbit RWT    = WDCON^0;

/*  EIE  */
sbit EWDI  = EIE^4;
sbit EX5   = EIE^3;
sbit EX4   = EIE^2;
sbit EX3   = EIE^1;
sbit EX2   = EIE^0;

/*  EIP  */
sbit PWDI  = EIP^4;
sbit PX5   = EIP^3;
sbit PX4   = EIP^2;
sbit PX3   = EIP^1;
sbit PX2   = EIP^0;





#endif
