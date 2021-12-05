/*--------------------------------------------------------------------------
N79E844_843A.H

Header file for Nuvoton N79E844_843A
--------------------------------------------------------------------------*/

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
sfr CAPCON0     = 0x92;
sfr CAPCON1     = 0x93;
sfr CAPCON2     = 0x94;
sfr DIVM        = 0x95;
sfr P3M1        = 0x96;
sfr P3M2        = 0x97;
sfr SCON        = 0x98;
sfr SBUF        = 0x99;
sfr CHPCON      = 0x9F;
sfr AUXR1       = 0xA2;
sfr PMCR        = 0xA3;
sfr ISPTRG      = 0xA4;
sfr ISPAL       = 0xA6;
sfr ISPAH       = 0xA7;
sfr IE          = 0xA8;
sfr SADDR       = 0xA9;
sfr WDCON1      = 0xAB;
sfr ISPFD       = 0xAE;
sfr ISPCN       = 0xAF;
sfr P3          = 0xB0;
sfr P0M1        = 0xB1;
sfr P0M2        = 0xB2;
sfr P1M1        = 0xB3;
sfr P1M2        = 0xB4;
sfr IPH         = 0xB7;
sfr IP          = 0xB8;
sfr SADEN       = 0xB9;
sfr I2DAT       = 0xBC;
sfr I2STAT      = 0xBD;
sfr I2CLK       = 0xBE;
sfr I2TOC       = 0xBF;
sfr I2CON       = 0xC0;
sfr I2ADDR      = 0xC1;
sfr TA          = 0xC7;
sfr T2CON       = 0xC8;
sfr T2MOD       = 0xC9;
sfr RCOMP2L     = 0xCA;
sfr RCOMP2H     = 0xCB;
sfr TL2         = 0xCC;
sfr TH2         = 0xCD;
sfr PSW         = 0xD0;
sfr PWMPH       = 0xD1;
sfr PWM0H       = 0xD2;
sfr PWM1H       = 0xD3;
sfr PWM2H       = 0xD5;
sfr PWM3H       = 0xD6;
sfr PWMCON2     = 0xD7;
sfr WDCON0      = 0xD8;
sfr PWMPL       = 0xD9;
sfr PWM0L       = 0xDA;
sfr PWM1L       = 0xDB;
sfr PWMCON0     = 0xDC;
sfr PWM2L       = 0xDD;
sfr PWM3L       = 0xDE;
sfr PWMCON1     = 0xDF;
sfr ACC         = 0xE0;
sfr ADCCON1     = 0xE1;
sfr ADCH        = 0xE2;
sfr C0L         = 0xE4;
sfr C0H         = 0xE5;
sfr C1L         = 0xE6;
sfr C1H         = 0xE7;
sfr EIE         = 0xE8;
sfr KBI         = 0xE9;
sfr KBIF        = 0xEA;
sfr KBLS0       = 0xEB;
sfr KBLS1       = 0xEC;
sfr C2L         = 0xED;
sfr C2H         = 0xEE;
sfr B           = 0xF0;
sfr SPCR        = 0xF3;
sfr SPSR        = 0xF4;
sfr SPDR        = 0xF5;
sfr PADIDS      = 0xF6;
sfr EIPH        = 0xF7;
sfr ADCCON0     = 0xF8;
sfr EIP         = 0xF8;

/*  BIT Registers  */
/*  P0  */
sbit P07  	= P0^7;
sbit P06  	= P0^6;
sbit P05 	= P0^5;
sbit P04 	= P0^4;
sbit P03	= P0^3;
sbit P02	= P0^2;
sbit P01	= P0^1;
sbit P00	= P0^0;

/*  TCON  */
sbit TF1   	= TCON^7;
sbit TR1   	= TCON^6;
sbit TF0   	= TCON^5;
sbit TR0   	= TCON^4;
sbit IE1   	= TCON^3;
sbit IT1   	= TCON^2;
sbit IE0   	= TCON^1;
sbit IT0   	= TCON^0;

/*  P1  */
sbit P17  	= P1^7;
sbit P16  	= P1^6;
sbit P15 	= P1^5;
sbit P14 	= P1^4;
sbit P13	= P1^3;
sbit P12	= P1^2;
sbit P11	= P1^1;
sbit P10	= P1^0;

/*  SCON   */
sbit SM0   	= SCON^7;
sbit FE    	= SCON^7;  
sbit SM1   	= SCON^6; 
sbit SM2   	= SCON^5; 
sbit REN   	= SCON^4; 
sbit TB8   	= SCON^3; 
sbit RB8   	= SCON^2; 
sbit TI    	= SCON^1; 
sbit RI    	= SCON^0; 

/*  IE  */
sbit EA    	= IE^7;
sbit EADC  	= IE^6;
sbit EBO   	= IE^5;
sbit ES    	= IE^4;
sbit ET1   	= IE^3;
sbit EX1   	= IE^2;
sbit ET0   	= IE^1;
sbit EX0   	= IE^0;

/*  P3  */
sbit P31	= P3^1;
sbit P30	= P3^0;

/*  IP  */     
sbit PADC       = IP^6;
sbit PBO        = IP^5;
sbit PS         = IP^4;
sbit PT1        = IP^3;
sbit PX1        = IP^2;
sbit PT0        = IP^1;
sbit PX0        = IP^0;

/*  I2CON  */
sbit ENSI       = I2CON^6;
sbit STA        = I2CON^5;
sbit STO        = I2CON^4;
sbit SI         = I2CON^3;
sbit AA         = I2CON^2;

/*  T2CON  */
sbit TF2        = T2CON^7;
sbit TR2        = T2CON^2;
sbit CMP        = T2CON^0;

/*  PSW */
sbit CY         = PSW^7;
sbit AC         = PSW^6;
sbit F0         = PSW^5;
sbit RS1        = PSW^4;
sbit RS0        = PSW^3;
sbit OV         = PSW^2;
sbit F1         = PSW^1;
sbit P          = PSW^0;

/*  WDCON0  */
sbit WDTEN      = WDCON0^7;
sbit WDCLR      = WDCON0^6;
sbit WDTF       = WDCON0^5;
sbit WIDPD      = WDCON0^4;
sbit WDTRF      = WDCON0^3;
sbit WPS2       = WDCON0^2;
sbit WPS1       = WDCON0^1;
sbit WPS0       = WDCON0^0;

/*  EIE  */
sbit ET2        = EIE^7;
sbit ESPI       = EIE^6;
sbit EPWM       = EIE^5;
sbit EWDI       = EIE^4;
sbit ECPTF      = EIE^2;
sbit EKB        = EIE^1;
sbit EI2        = EIE^0;

/*  ADCCON  */
sbit ADC1       = ADCCON0^7;
sbit ADC0       = ADCCON0^6;
sbit ADCEX      = ADCCON0^5;
sbit ADCI       = ADCCON0^4;
sbit ADCS       = ADCCON0^3;
sbit AADR2      = ADCCON0^2;
sbit AADR1      = ADCCON0^1;
sbit AADR0      = ADCCON0^0;