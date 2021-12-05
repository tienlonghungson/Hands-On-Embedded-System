/*--------------------------------------------------------------------------
W79E834.H

Header file for Nuvoton W79E834
--------------------------------------------------------------------------*/

#ifndef __W79E834_H__
#define __W79E834_H__

/*  BYTE Registers  */
sfr P0     = 0x80;
sfr P1     = 0x90;
sfr P2     = 0xA0;
sfr P3     = 0xB0;
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr TCON   = 0x88;
sfr SCON   = 0x98;
sfr IE     = 0xA8;
sfr IP0    = 0xB8;
sfr WDCON  = 0xD8;
sfr IE1    = 0xE8;
sfr IP1    = 0xF8;

sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr PCON   = 0x87;
sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr CKCON  = 0x8E;//**
sfr DIVM   = 0x95;
sfr SBUF   = 0x99;
sfr KBI    = 0xA1;
sfr AUXR1  = 0xA2;
sfr SADDR  = 0xA9;
sfr P0M1   = 0xB1;
sfr P0M2   = 0xB2;
sfr P1M1   = 0xB3;
sfr P1M2   = 0xB4;
sfr P2M1   = 0xB5;
sfr P3M1   = 0x9E;
sfr P3M2   = 0x9F;
sfr P2M2   = 0xB6;
sfr IP0H   = 0xB7;
sfr SADEN  = 0xB9;
sfr TA     = 0xC7;

sfr PWMPH  = 0xD1;
sfr PWM0H  = 0xD2;
sfr PWM1H  = 0xD3;
sfr PWM2H  = 0xD5;
sfr PWM3H  = 0xD6;
sfr PWMCON3= 0xD7;
sfr PWMPL  = 0xD9;
sfr PWM0L  = 0xDA;
sfr PWM1L  = 0xDB;
sfr PWMCON1= 0xDC;
sfr PWM2L  = 0xDD;
sfr PWM3L  = 0xDE;
sfr ADCCON = 0xE1;
sfr ADCH   = 0xE2;
sfr P0ID   = 0xF6;
sfr IP1H   = 0xF7;

sfr T2CON  = 0xC8;
sfr T2MOD  = 0xC9;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;

sfr CAPCON0= 0xA3;
sfr CCL0   = 0xE4;
sfr CCH0   = 0xE5;
sfr CCL1   = 0xE6;
sfr CCH1   = 0xE7;
sfr CCL2   = 0xA6;
sfr CCH2   = 0xA7;

sfr SPCR   = 0xF3;
sfr SPSR   = 0xF4;
sfr SPDR   = 0xF5;
sfr PADIDS = 0xF6;
/*  BIT Registers  */

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

//sbit SDA   = P1^3;
//sbit SCL   = P1^2;

//  SCON0  
sbit SM0   = SCON^7; // alternative SM0_FE_0 
sbit SM1   = SCON^6; // alternative SM1_0 
sbit SM2   = SCON^5; // alternative SM2_0 
sbit REN   = SCON^4; // alternative REN_0 
sbit TB8   = SCON^3; // alternative TB8_0
sbit RB8   = SCON^2; // alternative RB8_0 
sbit TI    = SCON^1; // alternative TI_0  
sbit RI    = SCON^0; // alternative RI_0  

/*  P2  */
sbit P21   = P2^1;
sbit P20   = P2^0;

/*  IE  */
sbit EA    = IE^7;
sbit EADC   = IE^6;
sbit EBO   = IE^5;
sbit ES   = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP0  */
sbit PADC  = IP0^6;
sbit PBO   = IP0^5;
sbit PS    = IP0^4;
sbit PT1   = IP0^3;
sbit PX1   = IP0^2;
sbit PT0   = IP0^1;
sbit PX0   = IP0^0;


/*  PSW */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit FL    = PSW^1;
sbit P     = PSW^0;



/*  WDCON  */
sbit WDRUN  = WDCON^7;
sbit WD1    = WDCON^5;
sbit WD0    = WDCON^4;
sbit WDIF   = WDCON^3;
sbit WTRF   = WDCON^2;
sbit EWRST  = WDCON^1;
sbit WDCLR    = WDCON^0;

/*  IE1  */
sbit EPWM  = IE1^5;
sbit EWDI  = IE1^4;
sbit EC2   = IE1^3;
sbit EC1   = IE1^2;
sbit EKB   = IE1^1;
sbit EI2   = IE1^0;

/*  IP1  */
sbit PPWM  = IP1^5;
sbit PWDI  = IP1^4;
sbit PC2   = IP1^3;
sbit PC1   = IP1^2;
sbit PKB   = IP1^1;
sbit PI2   = IP1^0;

//sbit CF = PWMCON1^5;
#endif
