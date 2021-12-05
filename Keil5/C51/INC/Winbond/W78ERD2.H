/*--------------------------------------------------------------------------
W78ERD2.H

Header file for Nuvoton W78ERD2
--------------------------------------------------------------------------*/

#ifndef _W78ERD2_H
#define _W78ERD2_H
/*  BYTE Registers  */
sfr P0    = 0x80;
sfr P1    = 0x90;
sfr P2    = 0xA0;
sfr P3    = 0xB0;
sfr PSW   = 0xD0;
sfr ACC   = 0xE0;
sfr B     = 0xF0;

sfr SP    = 0x81;
sfr DPL   = 0x82;
sfr DPH   = 0x83;
sfr P40AL   = 0x84;
sfr P40AH   = 0x85;
sfr POR   = 0x86;
sfr PCON  = 0x87;

sfr TCON  = 0x88;
sfr TMOD  = 0x89;
sfr TL0   = 0x8A;
sfr TL1   = 0x8B;
sfr TH0   = 0x8C;
sfr TH1   = 0x8D;
sfr AUXR   = 0x8E;
sfr WDTC   = 0x8F;


sfr P41AL   = 0x94;
sfr P41AH   = 0x95;

sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr P2EAL   = 0x9E;
sfr P2EAH   = 0x9F;

sfr XRAMAH   = 0xA1;
sfr AUXR1   = 0xA2;
sfr WDTRST   = 0xA6;

sfr IE    = 0xA8;
sfr SADDR   = 0xA9;
sfr P42AL   = 0xAC;
sfr P42AH   = 0xAD;
sfr P4CSIN   = 0xAE;

sfr P43AL   = 0xB4;
sfr P43AH   = 0xB5;
sfr IPH   = 0xB7;

sfr IP    = 0xB8;
sfr SADEN   = 0xB9;
sfr CHPCON   = 0xBF;

/*  8052 Extensions  */
sfr T2CON  = 0xC8;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;
sfr PWMCON2    = 0xCE;
sfr PWM4    = 0xCF;

/* Nuvoton extension */
sfr P4     = 0xD8;
sfr PWMP     = 0xD9;
sfr PWM0     = 0xDA;
sfr PWM1     = 0xDB;
sfr PWMCON1     = 0xDC;
sfr PWM2     = 0xDD;
sfr PWM3     = 0xDE;


sfr XICON  = 0xC0;
sfr XICONH  = 0xC1;
sfr P4CONA   = 0xC2;
sfr P4CONB   = 0xC3;
sfr SFRAL   = 0xC4;
sfr SFRAH   = 0xC5;
sfr SFRFD   = 0xC6;
sfr SFRCN   = 0xC7;

sfr CCON  = 0xD8;
sfr CMOD  = 0xD9;
sfr CCAPM0  = 0xDA;
sfr CCAPM1  = 0xDB;
sfr CCAPM2  = 0xDC;
sfr CCAPM3  = 0xDD;
sfr CCAPM4  = 0xDE;
sfr CKCON  = 0xDF;

sfr CL  = 0xE9;
sfr CCAP0L  = 0xEA;
sfr CCAP1L  = 0xEB;
sfr CCAP2L  = 0xEC;
sfr CCAP3L  = 0xED;
sfr CCAP4L  = 0xEF;

sfr CHPENR  = 0xF6;

sfr CH   = 0xF9;
sfr CCAP0H  = 0xFA;
sfr CCAP1H  = 0xFB;
sfr CCAP2H  = 0xFC;
sfr CCAP3H  = 0xFD;
sfr CCAP4H  = 0xFE;

/*  BIT Registers  */
/*  PSW  */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0; //8052 only

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
sbit ET2   = IE^5; //8052 only
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PT2   = IP^5;
sbit PS    = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  P3  */
sbit RD    = P3^7;
sbit WR    = P3^6;
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*  SCON  */
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

/*  P1  */
sbit T2EX  = P1^1; // 8052 only
sbit T2    = P1^0; // 8052 only
sbit P10  = P1^0;
sbit P11  = P1^1; 
sbit P12  = P1^2; 
sbit P13  = P1^3; 
sbit P14  = P1^4; 
sbit P15  = P1^5; 
sbit P16  = P1^6; 
sbit P17  = P1^7; 

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


/* XICON */
sbit PX3    = XICON^7;
sbit EX3    = XICON^6;
sbit IE3    = XICON^5;
sbit IT3    = XICON^4;
sbit PX2    = XICON^3;
sbit EX2    = XICON^2;
sbit IE2    = XICON^1;
sbit IT2    = XICON^0;

/* P4 */
sbit INT2   = P4^3;
sbit INT3   = P4^2;

#endif
