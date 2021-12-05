/*--------------------------------------------------------------------------
W79E8213.H

Header file for Nuvoton W79E8213
--------------------------------------------------------------------------*/

#ifndef __W79E8213_H__
#define __W79E8213_H__

/*  BYTE Registers  */
sfr P0       = 0x80;
sfr P1       = 0x90;
sfr P2       = 0xA0;
sfr PSW      = 0xD0;
sfr ACC      = 0xE0;
sfr B        = 0xF0;

sfr SP       = 0x81;
sfr DPL      = 0x82;
sfr DPH      = 0x83;
sfr P40AL    = 0x84;
sfr P40AH    = 0x85;
sfr POR      = 0x86;
sfr PCON     = 0x87;

sfr TCON     = 0x88;
sfr TMOD     = 0x89;
sfr TL0      = 0x8A;
sfr TL1      = 0x8B;
sfr TH0      = 0x8C;
sfr TH1      = 0x8D;
sfr CKCON    = 0x8E;

sfr SCON     = 0x98;

sfr AUXR1    = 0xA2;
sfr EDIC     = 0xA3;

sfr IE       = 0xA8;

sfr P0M1     = 0xB1;
sfr P0M2     = 0xB2;
sfr P1M1     = 0xB3;
sfr P1M2     = 0xB4;
sfr P2M1     = 0xB5;
sfr P2M2     = 0xB6;
sfr IP0H     = 0xB7;
sfr IP0      = 0xB8;


/* Nuvoton extension */
sfr NVMADDRL = 0xC6;
sfr TA       = 0xC7;
sfr NVMCON   = 0xCE;
sfr NVMDATA  = 0xCF;

sfr PWMPH    = 0xD1;
sfr PWM0H    = 0xD2;
sfr PWM1H    = 0xD3;
sfr PWM2H    = 0xD5;
sfr PWM3H    = 0xD6;
sfr PWMCON3  = 0xD7;

sfr WDCON    = 0xD8;
sfr PWMPL    = 0xD9;
sfr PWM0L    = 0xDA;
sfr PWM1L    = 0xDB;
sfr PWMCON1  = 0xDC;
sfr PWM2L    = 0xDD;
sfr PWM3L    = 0xDE;
sfr PWMCON3  = 0xDF;

sfr ADCCON   = 0xE1;
sfr ADCH     = 0xE2;
sfr ADCCON1  = 0xE3;
sfr EIE      = 0xE8;

sfr PADIDS   = 0xF6;
sfr IP1H     = 0xF7;
sfr IP1      = 0xF8;
sfr BUZCON   = 0xF9;



/*  BIT Registers  */
/*  PSW  */
sbit CY     = PSW^7;
sbit AC     = PSW^6;
sbit F0     = PSW^5;
sbit RS1    = PSW^4;
sbit RS0    = PSW^3;
sbit OV     = PSW^2;
sbit F1     = PSW^1;
sbit P      = PSW^0; //8052 only

/*  TCON  */
sbit TF1    = TCON^7;
sbit TR1    = TCON^6;
sbit TF0    = TCON^5;
sbit TR0    = TCON^4;
sbit IE1    = TCON^3;
sbit IT1    = TCON^2;
sbit IE0    = TCON^1;
sbit IT0    = TCON^0;

/*  IE  */
sbit EA     = IE^7;
sbit EADC   = IE^6;
sbit EBO    = IE^5;
sbit ET1    = IE^3;
sbit EX1    = IE^2;
sbit ET0    = IE^1;
sbit EX0    = IE^0;

/*  IP0  */
sbit PADC   = IP^6;
sbit PBO    = IP^5;
sbit PT1    = IP^3;
sbit PX1    = IP^2;
sbit PT0    = IP^1;
sbit PX0    = IP^0;

/*  IP1  */
sbit PED    = IP1^7;
sbit PPPWM  = IP1^6;
sbit PBKH   = IP1^5;
sbit PWDIH  = IP1^4;

/* EIE */
sbit EED    = EIE^7;
sbit EPWMUF = EIE^6;
sbit EPWM   = EIE^5;
sbit EWDI   = EIE^4;


/*  SCON  */
sbit RI    = SCON^0;
sbit TI    = SCON^1;
sbit RB8   = SCON^2;
sbit TB8   = SCON^3;
sbit REN   = SCON^4;
sbit SM2   = SCON^5;
sbit SM1   = SCON^6;
sbit SM0   = SCON^7;

/*  P0  */
sbit P07   = P0^7;
sbit P06   = P0^6;
sbit P05   = P0^5;
sbit P04   = P0^4;
sbit P03   = P0^3;
sbit P02   = P0^2;
sbit P01   = P0^1;
sbit P00   = P0^0;
/* P0 alternative functionset 1*/
sbit AD7   = P0^7;
sbit AD3   = P0^6;
sbit AD2   = P0^5;
sbit AD1   = P0^4;
sbit AD0   = P0^3;
sbit AD4   = P0^2;
sbit AD5   = P0^1;
sbit AD6   = P0^0;
/* P0 alternative functionset 2*/
sbit T1    = P0^7;
sbit BRAKE = P0^2;
sbit PWM0  = P0^1;
sbit PWM3  = P0^0;

/*  P1  */
sbit P17   = P1^7;
sbit P16   = P1^6;
sbit P15   = P1^5;
sbit P14   = P1^4;
sbit P13   = P1^3;
sbit P12   = P1^2;
sbit P11   = P1^1;
sbit P10   = P1^0;
/* P1 alternative functionset 1*/
sbit PWM2  = P1^7;
sbit PWM1  = P1^6;
sbit RST   = P1^5;
sbit INT1  = P1^4;
sbit INT0  = P1^3;
sbit ED0   = P1^2;
sbit ED0   = P1^0;

/* P1 alternative functionset 2*/
sbit STADC = P1^4;
sbit T0    = P1^2;
sbit ED1   = P1^1;
sbit BUZ   = P1^0;

/*  P2  */
sbit P23    = P2^3;
sbit P22    = P2^2;
sbit P21    = P2^1;
sbit P20    = P2^0;
/* P2 alternative functionset 1*/
sbit XTAL1  = P2^1;
sbit XTAL2  = P2^0;
/* P2 alternative functionset 2*/
sbit CLKOUT = P2^0;


/*  WDCON  */
sbit WDRUN  = WDCON^7;
sbit WD1    = WDCON^5;
sbit WD0    = WDCON^4;
sbit WDIF   = WDCON^3;
sbit WTRF   = WDCON^2;
sbit EWRST  = WDCON^1;
sbit WDCLR  = WDCON^0;





#endif
