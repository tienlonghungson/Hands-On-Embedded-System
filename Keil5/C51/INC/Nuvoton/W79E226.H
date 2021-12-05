/*--------------------------------------------------------------------------
W79E226.H

Header file for Nuvoton W79E226
--------------------------------------------------------------------------*/

#ifndef __W79E226_H__
#define __W79E226_H__

/*  BYTE Registers  */
sfr P0     = 0x80;
sfr P1     = 0x90;
sfr P2     = 0xA0;
sfr P3     = 0xB0;
sfr SCON1  = 0xC0;
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr TCON   = 0x88;
sfr SCON   = 0x98;
sfr IE     = 0xA8;
sfr IP     = 0xB8;
sfr T2CON  = 0xC8;
sfr WDCON  = 0xD8;
sfr EIE    = 0xE8;
sfr EIP    = 0xF8;

sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr TL3    = 0x84;
sfr TH3    = 0x85;
//sfr DPS    = 0x86;
sfr PCON   = 0x87;

sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr CKCON  = 0x8E;
sfr CKCON1 = 0x8F;

sfr EXIF   = 0x91;
sfr P4CONA = 0x92;
sfr P4CONB = 0x93;
sfr P40AL  = 0x94;
sfr P40AH  = 0x95;
sfr P41AL  = 0x96;
sfr P41AH  = 0x97;

sfr SBUF   = 0x99;
sfr P42AL  = 0x9A;
sfr P42AH  = 0x9B;
sfr P43AL  = 0x9C;
sfr P43AH  = 0x9D;
sfr NVMCON = 0x9E;
sfr CHPCON = 0x9F;

sfr XRANAH = 0xA1;
sfr P4CSIN = 0xA2;
sfr CAPCON0= 0xA3;
sfr CAPCON1= 0xA4;
sfr P4     = 0xA5;
sfr CCL2_MAXCNTL = 0xA6;
sfr CCH2_MAXCNTH = 0xA7;

sfr SADDR  = 0xA9;
sfr SADDR1 = 0xAA;
sfr SFRAL  = 0xAC;
sfr SFRAH  = 0xAD;
sfr SFDFD  = 0xAE;
sfr SFRCN  = 0xAF;


sfr SADEN  = 0xB9;
sfr SADEN1 = 0xBA;
sfr POVM   = 0xBB;
sfr POVD   = 0xBC;
sfr PIO    = 0xBD;
sfr PWMEN  = 0xBE;
sfr PWM4H  = 0xBF;

sfr SBUF1  = 0xC1;
sfr T3MOD  = 0xC2;
sfr T3CON  = 0xC3;
sfr PMR    = 0xC4;
sfr FSPLT  = 0xC5;
sfr ADCPS  = 0xC6;
sfr TA     = 0xC7;

sfr T2MOD  = 0xC9;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;
sfr PWMCON2= 0xCE;
sfr PWM4L  = 0xCF;

sfr PWMPH  = 0xD1;
sfr PWM0H  = 0xD2;
sfr NVMDAT = 0xD3;
sfr QEICON = 0xD4;
sfr PWM2H  = 0xD5;
sfr PWM6H  = 0xD6;
sfr WDCON2 = 0xD7;

sfr PWMPL  = 0xD9;
sfr PWM0L  = 0xDA;
sfr NVMADDRL= 0xDB;
sfr PWMCON1= 0xDC;
sfr PWM2L  = 0xDD;
sfr PWM6L  = 0xDE;
sfr PWMCON3= 0xDF;

sfr ADCCON = 0xE1;
sfr ADCH   = 0xE2;
sfr ADCL   = 0xE3;
sfr PDTC1  = 0xE5;
sfr PDTC0  = 0xE6;
sfr PWMCON4= 0xE7;

sfr I2CON  = 0xE9;
sfr I2ADDR = 0xEA;
sfr NVMADDRH= 0xEB;
sfr I2DAT  = 0xEC;
sfr I2STATUS= 0xED;
sfr I2CLK  = 0xEE;
sfr I2TIMER= 0xEF;

sfr SPCR   = 0xF3;
sfr SPSR   = 0xF4;
sfr SPDR   = 0xF5;
sfr I2CSADEN= 0xF6;
sfr EIPH   = 0xF7;

sfr EIE1   = 0xF9;
sfr EIP1   = 0xFa;
sfr CCL0_PCNTL= 0xFb;
sfr CCH0_PCNTH= 0xFc;
sfr CCL1_PLSCNTL= 0xFd;
sfr CCH1_PLSCNTH= 0xFe;
sfr INTCTRL= 0xFf;



/*  P0  */
sbit P07   = P0^7;
sbit P06   = P0^6;
sbit P05   = P0^5;
sbit P04   = P0^4;
sbit P03   = P0^3;
sbit P02   = P0^2;
sbit P01   = P0^1;
sbit P00   = P0^0;


/*  TCON  */
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit I1E   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

/*  P1  */
sbit P17   = P1^7;
sbit P16   = P1^6;
sbit P15   = P1^5;
sbit P14   = P1^4;
sbit P13   = P1^3;
sbit P12   = P1^2;
sbit P11   = P1^1;
sbit P10   = P1^0;


/*  P2  */
sbit P27   = P2^7;
sbit P26   = P2^6;
sbit P25   = P2^5;
sbit P24   = P2^4;
sbit P23   = P2^3;
sbit P22   = P2^2;
sbit P21   = P2^1;
sbit P20   = P2^0;


/*  P3  */
sbit P37   = P3^7;
sbit P36   = P3^6;
sbit P35   = P3^5;
sbit P34   = P3^4;
sbit P33   = P3^3;
sbit P32   = P3^2;
sbit P31   = P3^1;
sbit P30   = P3^0;


//  SCON  
sbit SM0   = SCON^7; 
sbit SM1   = SCON^6; 
sbit SM2   = SCON^5;  
sbit REN   = SCON^4;  
sbit TB8   = SCON^3; 
sbit RB8   = SCON^2;  
sbit TI    = SCON^1; 
sbit RI    = SCON^0; 

/*  SCON1  */
sbit SM0_1		 = SCON1^7; 
sbit FE_1		= SCON1^7;
sbit SM1_1      = SCON1^6; 
sbit SM2_1      = SCON1^5;  
sbit REN_1      = SCON1^4;  
sbit TB8_1      = SCON1^3; 
sbit RB8_1      = SCON1^2;  
sbit TI_1       = SCON1^1; 
sbit RI_1       = SCON1^0;

/*  IE  */
sbit EA    = IE^7;
sbit EADC  = IE^6;
sbit ET2   = IE^5;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PADCH  = IP^6;
sbit PT2H   = IP^5;
sbit PSH    = IP^4;
sbit PT1H  = IP^3;
sbit PX1H   = IP^2;
sbit PT0H   = IP^1;
sbit PX0H  = IP^0;


/*  PSW */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit F1    = PSW^1;
sbit P     = PSW^0;


/*  WDCON  */
sbit POR    = WDCON^6;
sbit WDIF   = WDCON^3;
sbit WTRF   = WDCON^2;
sbit EWT    = WDCON^1;
sbit RWT    = WDCON^0;

/*  EIE  */
sbit ES1   = EIE^7;
sbit EX5   = EIE^6;
sbit EX4   = EIE^5;
sbit EWDI  = EIE^4;
sbit EX3   = EIE^3;
sbit EX2   = EIE^2;
sbit EI2C  = EIE^0;

/*  EIP  */
sbit PS1   = EIP^7;
sbit PX5   = EIP^6;
sbit PX4   = EIP^5;
sbit PWDI  = EIP^4;
sbit PX3   = EIP^3;
sbit PX2   = EIP^2;
sbit PI2C  = EIP^0;

/*	T2CON */
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit TR2    = T2CON^2;
sbit C   	= T2CON^1;
sbit T2		= T2CON^2;
sbit CP_RL  = T2CON^0;

#endif
