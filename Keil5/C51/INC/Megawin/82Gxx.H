/*--------------------------------------------------------
MEGAWIN 82Gxx.H
Header file for Megawin 80C52 microcontrollers 
Release on 01/2007 
--------------------------------------------------------*/

/*  Standard 8051 Byte Registers  */
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
sfr P1    = 0x90;
sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr P2    = 0xA0;
sfr IE    = 0xA8;
sfr P3    = 0xB0;
sfr IP    = 0xB8;
sfr PSW   = 0xD0;
sfr ACC   = 0xE0;
sfr B     = 0xF0;

/*---------------------------------------------------------
New-defined SFRs
----------------------------------------------------------*/

/* MPC82L(E)xx extension */
sfr AUXR    = 0x8E;
sfr STRETCH = 0x8F;       //MPC82G516 Only
sfr P1M0    = 0x91;
sfr P1M1    = 0x92;
sfr P0M0    = 0x93;
sfr P0M1    = 0x94;
sfr P2M0    = 0x95;
sfr P2M1    = 0x96;
sfr EVRCR   = 0x97;       //MPC82G516 Only
sfr S2BUF   = 0x9A;       //MPC82G516 Only
sfr AUXR1   = 0xA2;       //MPC82G516 Only
sfr AUXR2   = 0xA6;       //MPC82G516 Only
sfr TSTWD   = 0xA7;       //MPC82G516 Only
sfr SADDR   = 0xA9;
sfr S2CON   = 0xAA;       //MPC82G516 Only
sfr AUXIE   = 0xAD;       //MPC82G516 Only
sfr AUXIP   = 0xAE;       //MPC82G516 Only
sfr AUXIPH  = 0xAF;       //MPC82G516 Only
sfr P3M0    = 0xB1;
sfr P3M1    = 0xB2;
sfr P4M0    = 0xB3;       //MPC82G516 Only
sfr P4M1    = 0xB4;       //MPC82G516 Only
sfr IPH     = 0xB7;
sfr S2BRT   = 0xBA;       //MPC82G516 Only
sfr XICON   = 0xC0;       //MPC82G516 Only
sfr T2CON   = 0xC8;       //MPC82G516 Only
sfr T2MOD   = 0xC9;       //MPC82G516 Only
sfr RCAP2L  = 0xCA;       //MPC82G516 Only
sfr RCAP2H  = 0xCB;       //MPC82G516 Only
sfr TL2     = 0xCC;       //MPC82G516 Only
sfr TH2     = 0xCD;       //MPC82G516 Only
sfr SVAR    = 0xCE;       //MPC82G516 Only
sfr SBK     = 0xCF;       //MPC82G516 Only
sfr SADEN   = 0xB9;
sfr PCON2   = 0xC7;
sfr KBPATN  = 0xDD;       //MPC82G516 Only
sfr KBCON   = 0xDE;       //MPC82G516 Only
sfr KBMASK  = 0xDF;       //MPC82G516 Only
sfr WDTCR   = 0xE1;
sfr P4      = 0xE8;       //MPC82G516 Only

/* for ADC Function only */

sfr ADCL    = 0xBE;      // ADC Result Low Byte
sfr ADCTL   = 0xC5;      // ADC Control Register
sfr ADCH    = 0xC6;      // ADC Result High Byte

/* for SPI Function only */

sfr SPISTAT = 0x84; 
sfr SPICTL  = 0x85;  
sfr SPIDAT  = 0x86; 

/* for ISP Function only */

sfr IFD     = 0xE2;
sfr IFADRH  = 0xE3;
sfr IFADRL  = 0xE4;
sfr IFMT    = 0xE5;
sfr SCMD    = 0xE6;
sfr ISPCR   = 0xE7;

/* for PCA Function Only */ 

sfr CCON    = 0xD8;
sfr CMOD    = 0xD9;
sfr CCAPM0  = 0xDA;
sfr CCAPM1  = 0xDB;
sfr CCAPM2  = 0xDC;
sfr CCAPM3  = 0xDD;
sfr CCAPM4  = 0xDE;
sfr CCAPM5  = 0xDF;
sfr CL      = 0xE9;
sfr CCAP0L  = 0xEA;
sfr CCAP1L  = 0xEB;
sfr CCAP2L  = 0xEC;
sfr CCAP3L  = 0xED;
sfr CCAP4L  = 0xEE;
sfr CCAP5L  = 0xEF;
sfr PCAPWM0 = 0xF2;
sfr PCAPWM1 = 0xF3;
sfr PCAPWM2 = 0xF4;
sfr PCAPWM3 = 0xF5;
sfr PCAPWM4 = 0xF6;
sfr PCAPWM5 = 0xF7;
sfr CH      = 0xF9;
sfr CCAP0H  = 0xFA;
sfr CCAP1H  = 0xFB;
sfr CCAP2H  = 0xFC;
sfr CCAP3H  = 0xFD;
sfr CCAP4H  = 0xFE;
sfr CCAP5H  = 0xFF;

/*  BIT Registers  */

/* Port 0 (80H) */

sbit P0_7   = P0^7;
sbit P0_6   = P0^6;
sbit P0_5   = P0^5;
sbit P0_4   = P0^4;
sbit P0_3   = P0^3;
sbit P0_2   = P0^2;
sbit P0_1   = P0^1;
sbit P0_0   = P0^0;

/*  TCON (88H) */

sbit TF1    = TCON^7;
sbit TR1    = TCON^6;
sbit TF0    = TCON^5;
sbit TR0    = TCON^4;
sbit IE1    = TCON^3;
sbit IT1    = TCON^2;
sbit IE0    = TCON^1;
sbit IT0    = TCON^0;

/*  Port 1 (90H) */

sbit SPICLK = P1^7;
sbit AIN7   = P1^7;
sbit MISO   = P1^6;
sbit AIN6   = P1^6;
sbit MOSI   = P1^5;
sbit AIN5   = P1^5;
sbit SS     = P1^4;
sbit AIN4   = P1^4;
sbit CEX1   = P1^3;
sbit AIN3   = P1^3;
sbit CEX0   = P1^2;
sbit AIN2   = P1^2;
sbit ECI    = P1^1;
sbit AIN1   = P1^1;
sbit T2     = P1^0;
sbit AIN0   = P1^0;

sbit P1_7   = P1^7;
sbit P1_6   = P1^6;
sbit P1_5   = P1^5;
sbit P1_4   = P1^4;
sbit P1_3   = P1^3;
sbit P1_2   = P1^2;
sbit P1_1   = P1^1;
sbit P1_0   = P1^0;


/*  SCON (98H) */

sbit SM0    = SCON^7;
sbit FE     = SCON^7;
sbit SM1    = SCON^6;
sbit SM2    = SCON^5;
sbit REN    = SCON^4;
sbit TB8    = SCON^3;
sbit RB8    = SCON^2;
sbit TI     = SCON^1;
sbit RI     = SCON^0;

/*  Port 2 (A0H) */

sbit KBI7   = P2^7;
sbit KBI6   = P2^6;
sbit KBI5   = P2^5;
sbit KBI4   = P2^4;
sbit KBI3   = P2^3;
sbit KBI2   = P2^2;
sbit KBI1   = P2^1;
sbit KBI0   = P2^0;

sbit P2_7   = P2^7;
sbit P2_6   = P2^6;
sbit P2_5   = P2^5;
sbit P2_4   = P2^4;
sbit P2_3   = P2^3;
sbit P2_2   = P2^2;
sbit P2_1   = P2^1;
sbit P2_0   = P2^0;

/*  IE (A8H) */

sbit EA    = IE^7;
sbit ET2   = IE^5;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  P3 (B0) */

sbit S2CK0 = P3^5;
sbit T1    = P3^5;
sbit TOCK0 = P3^4;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

sbit P3_7   = P3^7;
sbit P3_6   = P3^6;
sbit P3_5   = P3^5;
sbit P3_4   = P3^4;
sbit P3_3   = P3^3;
sbit P3_2   = P3^2;
sbit P3_1   = P3^1;
sbit P3_0   = P3^0;

/*  IP (B8H) */

sbit PT2   = IP^5;
sbit PS    = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  PSW (D0H)*/  

sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0; //8052 only

/*  CCON (D8H) */  

sbit CF    = CCON^7;
sbit CR    = CCON^6;
sbit CCF5  = CCON^5;
sbit CCF4  = CCON^4;
sbit CCF3  = CCON^3;
sbit CCF2  = CCON^2;
sbit CCF1  = CCON^1;
sbit CCF0  = CCON^0;


/* Port 4 (E8H) */

sbit P4_7   = P4^7;
sbit P4_6   = P4^6;
sbit P4_5   = P4^5;
sbit P4_4   = P4^4;
sbit P4_3   = P4^3;
sbit P4_2   = P4^2;
sbit P4_1   = P4^1;
sbit P4_0   = P4^0;
