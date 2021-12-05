/*--------------------------------------------------------------------------
REG9251.H

--------------------------------------------------------------------------*/

#ifndef __REG9251_H__
#define __REG9251_H__

/* Include memory mapped SFRs */ 
/* Real Time Clock*/  
#define RTCDATL (*((unsigned char volatile xdata*)0xFFBE)) 
#define RTCDATH (*((unsigned char volatile xdata*)0xFFBF)) 

/* Brownout Detect*/ 
#define BODCFG (*((unsigned char volatile xdata*)0xFFC8)) 

/* Temp Sensor */                                     
#define TPSCON (*((unsigned char volatile xdata*)0xFFCA))

/* CPU CLOCK */
#define CLKCON (*((unsigned char volatile xdata*)0xFFDE))

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

sfr ADCON0 = 0x8E;	//A/D control register 0
sfr ADCON1 = 0x97;	//A/D control register 1
sfr ADMODA = 0xC0;	//A/D mode register A
sfr ADMODB = 0xA1;	//A/D mode register B
sfr ADINS  = 0xA3;	//A/D input select
sfr AD0DAT0= 0xC5;	//A/D_0 data register 0
sfr AD0DAT1= 0xC6;	//A/D_0 data register 1
sfr AD0DAT2= 0xC7;	//A/D_0 data register 2
sfr AD0DAT3= 0xF4;	//A/D_0 data register 3
sfr AD1DAT0= 0xD5;	//A/D_1 data register 0
sfr AD1DAT1= 0xD6;	//A/D_1 data register 1
sfr AD1DAT2= 0xD7;	//A/D_1 data register 2
sfr AD1DAT3= 0xF5;	//A/D_1 data register 3
sfr AD0BH  = 0xBB;	//A/D_0 boundary high register
sfr AD0BL  = 0xA6;	//A/D_0 boundary low register
sfr AD1BH  = 0xC4;	//A/D_0 boundary high register
sfr AD1BL  = 0xBC;	//A/D_0 boundary low register
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
sfr PT0AD  = 0xF6;	//Port 0 digital input disable
sfr RSTSRC = 0xDF;	//Reset source
sfr RTCCON = 0xD1;	//RTC control
sfr RTCH   = 0xD2;		//RTC register high
sfr RTCL   = 0xD3;		//RTC register low
sfr SSTAT  = 0xBA;	//Serial port extended status 
sfr TAMOD  = 0x8F;	//Timer 0 and 1 auxiliary mode
sfr TRIM   = 0x96;		//Interal oscillator trim
sfr WDCON  = 0xA7;	//Watchdog control
sfr WDL    = 0xC1;		//Watchdog load
sfr WFEED1 = 0xC2;	//Watchdog feed 1
sfr WFEED2 = 0xC3;	//Watchdog feed 2
sfr IP0H   = 0xB7;

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
//sbit ESPI = IEN1^3;
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
//sbit PSPI = IP1^3;
sbit PC_  = IP1^2;
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
sbit KB5 = P0^5;
sbit KB4 = P0^4;
sbit KB3 = P0^3;
sbit KB2 = P0^2;
sbit KB1 = P0^1;
sbit KB0 = P0^0; // alternatively "CMP2"
//sbit CMP2 = P0^0;

/*  P1  */
//sbit OCC     = P1^7;
//sbit OCB     = P1^6;
sbit RST     = P1^5;
sbit INT1    = P1^4;
sbit INT0    = P1^3; // alternatively "SDA"
sbit SDA     = P1^3;
sbit T0      = P1^2; // alternatively "SCL"
sbit SCL     = P1^2;
sbit RxD     = P1^1;
sbit TxD     = P1^0;


/*  P3  */
sbit XTAL1= P3^1;
sbit XTAL2= P3^0;


/* ADMODA */
sbit BNDI1  = ADMODA^7;
sbit BURST1 = ADMODA^6;
sbit SCC1   = ADMODA^5;
sbit SCAN1  = ADMODA^4;
sbit BNDI0  = ADMODA^3;
sbit BURST0 = ADMODA^2;
sbit SCC0   = ADMODA^1;
sbit SCAN0  = ADMODA^0;

#endif
