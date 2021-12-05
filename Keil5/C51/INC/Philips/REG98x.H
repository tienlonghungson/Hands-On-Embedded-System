/*--------------------------------------------------------------------------
REG98X.H

--------------------------------------------------------------------------*/

#ifndef __REG98X_H__
#define __REG98X_H__

/* Include memory mapped SFRs */ 
/* Real Time Clock*/  
#define RTCDATL (*((unsigned char volatile xdata*)0xFFBE)) 
#define RTCDATH (*((unsigned char volatile xdata*)0xFFBF)) 

/* Brownout Detect*/ 
#define BODCFG (*((unsigned char volatile xdata*)0xFFC8)) 

/* Comparator Reference */                                     
#define CMPREF (*((unsigned char volatile xdata*)0xFFCB))

/* CPU CLOCK */
#define CLKCON (*((unsigned char volatile xdata*)0xFFDE))

/* ADC */
#define AD0DAT0L (*((unsigned char volatile xdata*)0xFFFF))
#define AD0DAT0R (*((unsigned char volatile xdata*)0xFFFE))
#define AD0DAT1L (*((unsigned char volatile xdata*)0xFFFD))
#define AD0DAT1R (*((unsigned char volatile xdata*)0xFFFC))
#define AD0DAT2L (*((unsigned char volatile xdata*)0xFFFB))
#define AD0DAT2R (*((unsigned char volatile xdata*)0xFFFA))
#define AD0DAT3L (*((unsigned char volatile xdata*)0xFFF9))
#define AD0DAT3R (*((unsigned char volatile xdata*)0xFFF8))
#define AD0DAT4L (*((unsigned char volatile xdata*)0xFFF7))
#define AD0DAT4R (*((unsigned char volatile xdata*)0xFFF6))
#define AD0DAT5L (*((unsigned char volatile xdata*)0xFFF5))
#define AD0DAT5R (*((unsigned char volatile xdata*)0xFFF4))
#define AD0DAT6L (*((unsigned char volatile xdata*)0xFFF3))
#define AD0DAT6R (*((unsigned char volatile xdata*)0xFFF2))
#define AD0DAT7L (*((unsigned char volatile xdata*)0xFFF1))
#define AD0DAT7R (*((unsigned char volatile xdata*)0xFFF0))
#define ADC0HBND (*((unsigned char volatile xdata*)0xFFEF))
#define ADC0LBND (*((unsigned char volatile xdata*)0xFFEE))
#define BNDSTA0  (*((unsigned char volatile xdata*)0xFFED))



/*  BYTE Registers  */
sfr P0   = 0x80;	//Port0
sfr P1   = 0x90;	//Port1
sfr P2   = 0xA0;	//Port2
sfr P3   = 0xB0;	//Port3
sfr PSW  = 0xD0;	//Program status word
sfr ACC  = 0xE0;	//Accumulate
sfr B    = 0xF0;	//B register
sfr SP   = 0x81;	//Stack pointer
sfr DPL  = 0x82;	//Data pointer low
sfr DPH  = 0x83;	//Data pointer high
sfr PCON = 0x87;	//Power control register
sfr TCON = 0x88;	//Timer 0 and 1 control
sfr TMOD = 0x89;	//Timer 0 and 1 mode
sfr TL0  = 0x8A;	//Timer 0 low
sfr TL1  = 0x8B;	//Timer 1 low
sfr TH0  = 0x8C;	//Timer 0 high
sfr TH1  = 0x8D;	//Timer 1 high
sfr IEN0 = 0xA8;	//Interrupt enable 0
sfr IP0  = 0xB8;	//Interrupt priority 0
sfr SCON = 0x98;	//Serial port control
sfr SBUF = 0x99;	//Serial port data buffer register

sfr AD0CON  = 0x97;	//A/D control register 0
sfr AD0MODA = 0xC0;	//A/D mode register A
sfr AD0MODB = 0xA1;	//A/D mode register B
sfr AD0INS  = 0xA3;	//A/D input select
sfr AUXR1  = 0xA2;	//Auxiliary function register
sfr SADDR  = 0xA9;	//Serial port address register
sfr SADEN  = 0xB9;	//Serial port enalble
sfr BRGR0  = 0xBE;	//Baud rate generator 0 rate low
sfr BRGR1  = 0xBF;	//Baud rate generator 0 rate high
sfr BRGCON = 0xBD;	//Baud rate generator 0 control
sfr CMP1   = 0xAC;		//Comparator 1 control register
sfr CMP2   = 0xAD;		//Comparator 2 control register
sfr DIVM   = 0x95;		//CPU clock devided-by-M control
sfr FMADRH = 0xE7;	//Program flash address high
sfr FMADRL = 0xE6;	//Program flash address low
sfr FMCON  = 0xE4;	//Program flash control
sfr FMDATA = 0xE5;	//Program flash data
sfr I2ADR  = 0xDB;	//I2C_bus slave address
sfr I2CON  = 0xD8;	//I2C_bus control
sfr I2DAT  = 0xDA;	//I2C_bus data
sfr I2SCLH = 0xDD;	//Serial clock generator,SCL duty cycle register high
sfr I2SCLL = 0xDC;	//Serial clock generator,SCL duty cycle register low
sfr I2STAT = 0xD9;	//I2C_bus status
sfr IEN1   = 0xE8;		//Interrupt enable 1
sfr IP1    = 0xF8;		//Interrupt priority 1
sfr IP1H   = 0xF7;		//Interrupt priority 1 high
sfr KBCON  = 0x94;	//Keyboard control
sfr KBMASK = 0x86;	//Ketboard interrupt mask
sfr KBPATN = 0x93;	//Keyboard pattern
sfr P0M1   = 0x84;		//Port 0 output mode 1
sfr P0M2   = 0x85;		//Port 0 output mode 2
sfr P1M1   = 0x91;		//Port 1 output mode 1
sfr P1M2   = 0x92;		//Port 1 output mode 2
sfr P2M1   = 0xA4;		//Port 2 output mode 1
sfr P2M2   = 0xA5;		//Port 2 output mode 2
sfr P3M1   = 0xB1;		//Port 3 output mode 1
sfr P3M2   = 0xB2;		//Port 3 output mode 2
sfr PCONA  = 0xB5;	//Power control register A
sfr PINCON = 0xCF;      //pin remap control register
sfr PMUCON = 0xFA;      //power management unit control register
sfr PT0AD  = 0xF6;	//Port 0 digital input disable
sfr RSTSRC = 0xDF;	//Reset source
sfr RTCCON = 0xD1;	//RTC control
sfr RTCH   = 0xD2;		//RTC register high
sfr RTCL   = 0xD3;		//RTC register low
sfr SSTAT  = 0xBA;	//Serial port extended status 
sfr SPCTL  = 0xE2;      // SPI control register   
sfr SPSTAT = 0xE1;      // SPI status register   
sfr SPDAT  = 0xE3;      // SPI data register
sfr TAMOD  = 0x8F;	//Timer 0 and 1 auxiliary mode
sfr TRIM   = 0x96;		//Interal oscillator trim
sfr WDCON  = 0xA7;	//Watchdog control
sfr WDL    = 0xC1;		//Watchdog load
sfr WFEED1 = 0xC2;	//Watchdog feed 1
sfr WFEED2 = 0xC3;	//Watchdog feed 2
sfr IP0H   = 0xB7;

//timer 2,3,4 SFR
sfr T2CON  =  0xFF;
sfr T3CON  =  0xEF;
sfr T4CON  =  0xCD;
sfr TINTF  =  0xCE;
sfr PWMD2H =  0xAE;
sfr PWMD2L =  0xAF;
sfr PWMD3H =  0xE9;
sfr PWMD3L =  0xEA;
sfr PWMD4H =  0xAA;
sfr PWMD4L =  0xAB;
sfr RCAP2H =  0xFC;
sfr RCAP2L =  0xFB;
sfr RCAP3H =  0xEC;
sfr RCAP3L =  0xEB;
sfr RCAP4H =  0xCA;
sfr RCAP4L =  0xC9;
sfr TH2    =  0xFE;
sfr TL2    =  0xFD;
sfr TH3    =  0xEE;
sfr TL3    =  0xED;
sfr TH4    =  0xCC;
sfr TL4    =  0xCB;

/*  BIT Registers  */
/*  PSW   */
sbit CY   = PSW^7;
sbit AC   = PSW^6;
sbit F0   = PSW^5;
sbit RS1  = PSW^4;
sbit RS0  = PSW^3;
sbit OV   = PSW^2;
sbit F1   = PSW^1;
sbit P    = PSW^0;

/*  TCON  */
sbit TF1  = TCON^7;
sbit TR1  = TCON^6;
sbit TF0  = TCON^5;
sbit TR0  = TCON^4;
sbit IE1  = TCON^3;
sbit IT1  = TCON^2;
sbit IE0  = TCON^1;
sbit IT0  = TCON^0;


/*  IEN0   */
sbit EA   = IEN0^7;
sbit EWDRT = IEN0^6;
sbit EBO   = IEN0^5;
sbit ES   = IEN0^4; // alternatively "ESR"
sbit ESR  = IEN0^4;
sbit ET1  = IEN0^3;
sbit EX1  = IEN0^2;
sbit ET0  = IEN0^1;
sbit EX0  = IEN0^0;

/*  IEN1   */
sbit EAD  = IEN1^7; 
sbit EST  = IEN1^6;
sbit EXTIM  = IEN1^4;
sbit ESPI = IEN1^3;
sbit EC   = IEN1^2;
sbit EKBI = IEN1^1;
sbit EI2C = IEN1^0;

/*  IP0   */ 
sbit PWDRT = IP0^6;
sbit PB0   = IP0^5;
sbit PS    = IP0^4; // alternatively "PSR"
sbit PSR   = IP0^4;
sbit PT1   = IP0^3;
sbit PX1   = IP0^2;
sbit PT0   = IP0^1;
sbit PX0   = IP0^0;

/*  IP1   */
sbit PAD  = IP1^7; 
sbit PST  = IP1^6;
sbit PXTIM  = IP1^4;
sbit PSPI = IP1^3;
sbit PC   = IP1^2;
sbit PKBI = IP1^1;
sbit PI2C = IP1^0;

/*  SCON  */
sbit SM0  = SCON^7; // alternatively "FE"
sbit FE   = SCON^7;
sbit SM1  = SCON^6;
sbit SM2  = SCON^5;
sbit REN  = SCON^4;
sbit TB8  = SCON^3;
sbit RB8  = SCON^2;
sbit TI   = SCON^1;
sbit RI   = SCON^0;

/*  I2CON  */
sbit I2EN  = I2CON^6;
sbit STA   = I2CON^5;
sbit STO   = I2CON^4;
sbit SI    = I2CON^3;
sbit AA    = I2CON^2;
sbit CRSEL = I2CON^0;

/*  P0  */
sbit KB7 = P0^7; // alternatively "T1"
sbit T1 = P0^7;
sbit KB6 = P0^6; // alternatively "CMP1"
//sbit CMP1 = P0^6;
sbit KB5 = P0^5;  // alternatively "CMPREF" and "T3"
//sbit CMPREF = P0^5;
sbit T3 = P0^5;
sbit KB4 = P0^4;  // alternatively "CIN1A"
sbit CIN1A = P0^4;
sbit KB3 = P0^3;   // alternatively "CIN1B" and "T2"
sbit CIN1B = P0^3;
sbit T2 = P0^3;
sbit KB2 = P0^2;   // alternatively "CIN2A"
sbit CIN2A = P0^2;
sbit KB1 = P0^1;   // alternatively "CIN2B"
sbit CIN2B = P0^1;
sbit KB0 = P0^0; // alternatively "CMP2"
//sbit CMP2 = P0^0;

/*  P1  */
sbit T3EX    = P1^7;
sbit RST     = P1^5;
sbit INT1    = P1^4;  //alternatively "T4EX"
sbit T4EX    = P1^4;
sbit INT0    = P1^3;  // alternatively "SDA" and "T4"
sbit SDA     = P1^3;
sbit T4      = P1^3;
sbit T0      = P1^2;  // alternatively "SCL"
sbit SCL     = P1^2;
sbit RxD     = P1^1;  // alternatively "T2EX"
sbit T2EX    = P1^1;
sbit TxD     = P1^0;

/*  P2  */
sbit SPICLK  = P2^5;
sbit SS      = P2^4;
sbit MISO    = P2^3;
sbit MOSI    = P2^2;


/*  P3  */
sbit XTAL1= P3^1;
sbit XTAL2= P3^0;


/* AD0MODA */
sbit BNDI0  = AD0MODA^7;
sbit BURST0 = AD0MODA^6;
sbit SCC0   = AD0MODA^5;
sbit SCAN0  = AD0MODA^4;



#endif
