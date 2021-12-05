/*--------------------------------------------------------------------------
W79E8213.H

Header file for Nuvoton W79E8213
--------------------------------------------------------------------------*/

#ifndef __W79E8213_H__
#define __W79E8213_H__

/*  BYTE Registers  */
sfr P0          = 0x80;
sfr SP          = 0x81;
sfr DPL         = 0x82;
sfr DPH         = 0x83;
sfr PCON        = 0x87;
sfr TCON        = 0x88;
sfr TMOD        = 0x89;
sfr TL0         = 0x8A;
sfr TL1         = 0x8B;
sfr TH0         = 0x8C;
sfr TH1         = 0x8D;
sfr CKCON       = 0x8E;
sfr P1          = 0x90;
sfr P2          = 0xA0;
sfr AUXR1       = 0xA2;
sfr EDIC        = 0xA3;
sfr IE          = 0xA8;
sfr P0M1        = 0xB1;
sfr P0M2        = 0xB2;
sfr P1M1        = 0xB3;
sfr P1M2        = 0xB4;
sfr P2M1        = 0xB5;
sfr P2M2        = 0xB6;
sfr IP0H        = 0xB7;
sfr IP0         = 0xB8;
sfr NVMADDR     = 0xC6;
sfr TA          = 0xC7;
sfr NVMCOM      = 0xCE;
sfr NVMDATA     = 0xCF;
sfr PSW         = 0xD0;
sfr PWMPH       = 0xD1;
sfr PWM0H       = 0xD2;
sfr PWM1H       = 0xD3;
sfr PWM2H       = 0xD5;
sfr PWM3H       = 0xD6;
sfr PWMCON3     = 0xD7;
sfr WDCON       = 0xD8;
sfr PWMPL       = 0xD9;
sfr PWM0L       = 0xDA;
sfr PWM1L       = 0xDB;
sfr PWMCON1     = 0xDC;
sfr PWM2L       = 0xDD;
sfr PWM3L       = 0xDE;
sfr PWMCON2     = 0xDF;
sfr ACC         = 0xE0;
sfr ADCCON      = 0xE1;
sfr ADCH        = 0xE2;
sfr ADCCON1     = 0xE3;
sfr EIE         = 0xE8;
sfr B           = 0xF0;
sfr PADIDS      = 0xF6;
sfr IP1H        = 0xF7;
sfr IP1         = 0xF8;
sfr BUZCON      = 0xF9;


/*  BIT Registers  */
/*  P0  */
sbit P00        = P0^0; 
sbit P01        = P0^1; 
sbit P02        = P0^2; 
sbit P03        = P0^3; 
sbit P04        = P0^4; 
sbit P05        = P0^5; 
sbit P06        = P0^6; 
sbit P07        = P01^7; 
                
/*  TCON  */
sbit TF1        = TCON^7;
sbit TR1        = TCON^6;
sbit TF0        = TCON^5;
sbit TR0        = TCON^4;
sbit IE1        = TCON^3;
sbit IT1        = TCON^2;
sbit IE0        = TCON^1;
sbit IT0        = TCON^0;

/*  P1  */
sbit P10        = P1^0; 
sbit P11        = P1^1; 
sbit P12        = P1^2; 
sbit P13        = P1^3; 
sbit P14        = P1^4; 
sbit P15        = P1^5; 
sbit P16        = P1^6; 
sbit P17        = P1^7; 
                
/*  P2  */      
sbit P20        = P2^0; 
sbit P21        = P2^1; 
                
/*  IE  */      
sbit EA         = IE^7;
sbit EADC       = IE^6;
sbit EBO        = IE^5;
sbit ET1        = IE^3;
sbit EX1        = IE^2;
sbit ET0        = IE^1;
sbit EX0        = IE^0;

/*  IP0  */
sbit PADC       = IP0^6;
sbit PBO        = IP0^5;
sbit PT1        = IP0^3;
sbit PX1        = IP0^2;
sbit PT0        = IP0^1;
sbit PX0        = IP0^0;

/*  PSW */
sbit CY         = PSW^7;
sbit AC         = PSW^6;
sbit F0         = PSW^5;
sbit RS1        = PSW^4;
sbit RS0        = PSW^3;
sbit OV         = PSW^2;
sbit F1         = PSW^1;
sbit P          = PSW^0;

/*  WDCON  */
sbit WDRUN      = WDCON^7;
sbit WD1        = WDCON^5;
sbit WD0        = WDCON^4;
sbit WDIF       = WDCON^3;
sbit WTRF       = WDCON^2;
sbit EWRST      = WDCON^1;
sbit WDCLR      = WDCON^0;

/*  EIE  */
sbit EED        = EIE^7;
sbit EPWMUF     = EIE^6;
sbit EPWM       = EIE^5;
sbit EWDI       = EIE^4;

/*  IP1  */
sbit PED        = IP1^7;
sbit PPWMUF     = IP1^6;
sbit PPWM       = IP1^5;
sbit PWDI       = IP1^4;

#endif