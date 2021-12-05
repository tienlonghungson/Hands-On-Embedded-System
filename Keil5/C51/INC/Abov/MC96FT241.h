//======================================================
//		file name: MC96FT241.h
//		device   : MC96FT241, MC96FT161
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FT241_
#define _MC96FT241_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x89;			// P0 Direction Register
sfr			P0PU		= 0x95;			// P0 Pull-up Resistor Selection Register
sfr			P0OD		= 0x96;			// P0 Open-drain Selection Register
sfr			P0DB		= 0x97;			// P0 Debounce Enable Register

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			P1IO		= 0x91;			// P1 Direction Register
sfr			P1PU		= 0x92;			// P1 Pull-up Resistor Selection Register
sfr			P1OD		= 0x93;			// P1 Open-drain Selection Register
sfr			P1DB		= 0x94;			// P1 Debounce Enable Register

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0x99;			// P2 Direction Register
sfr			P2PU		= 0x9A;			// P2 Pull-up Resistor Selection Register
sfr			P2OD		= 0x9B;			// P2 Open-drain Selection Register
sfr			P2DB		= 0x9C;			// P2 Debounce Enable Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			P3IO		= 0xA1;			// P3 Direction Register
sfr			P3PU		= 0x9D;			// P3 Pull-up Resistor Selection Register
sfr			P3OD		= 0x9E;			// P3 Open-drain Selection Register
sfr			P3DB		= 0x9F;			// P3 Debounce Enable Register

sfr			PSR0		= 0xAD;			// P0 Port Select Register
sfr			PSR1		= 0xAE;			// I2C, USART Port Change Selection Register
sfr			PSR2		= 0xAF;			// P2 Port Select Register

// interrupt registers
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IP			= 0xB8;			// Interrupt Priority Register
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIENAB		= 0xA3;			// External Interrupt Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;			// External Interrupt Polarity Register
sfr			EIBOTH		= 0xA7;			// External Interrupt Both Edge Enable register

// SYSCON
sfr			SCCR		= 0x8A;			// System and Clock Control Register

// Basic interval timer
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Basic Interval Timer Register

// Watchdog timer
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode register

// Timer
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0CR1		= 0xB3;			// Timer 0 Mode Control Register 1
sfr			T0L			= 0xB4;			// Timer 0 Low register
sfr			PWM0DRL		= 0xB4;			// PWM 0 Duty Register Low
sfr			CDR0L		= 0xB4;			// Timer 0 Capture Data Register Low
sfr			T0H			= 0xB5;			// Timer 0 Register High
sfr			PWM0DRH		= 0xB5;			// PWM 0 Duty Register High
sfr			CDR0H		= 0xB5;			// Timer 0 Capture Data Register High
sfr			T0DRL		= 0xB6;			// Timer 0 Data Register Low
sfr			PWM0PRL		= 0xB6;			// PWM 0 Period Register Low
sfr			T0DRH		= 0xB7;			// Timer 0 Data Register High
sfr			PWM0PRH		= 0xB7;			// PWM 0 Period Register High
sfr			T1CR		= 0xBA;			// Timer 1 Mode Control register
sfr			T1CR1		= 0xBB;			// Timer 1 Mode Control Register 1
sfr			T1L			= 0xBC;			// Timer 1 Register Low
sfr			PWM1DRL		= 0xBC;			// PWM 1 Duty Register Low
sfr			CDR1L		= 0xBC;			// Timer 1 Capture Data Register Low
sfr			T1H			= 0xBD;			// Timer 1 Register High
sfr			PWM1DRH		= 0xBD;			// PWM 1 Duty Register High
sfr			CDR1H		= 0xBD;			// Timer 1 Capture Data Register High
sfr			T1DRL		= 0xBE;			// Timer 1 Data Register Low
sfr			PWM1PRL		= 0xBE;			// PWM 1 Period Register Low
sfr			T1DRH		= 0xBF;			// Timer 1 Data Register High
sfr			PWM1PRH		= 0xBF;			// PWM 1 Period Register High

// USART
sfr			UCTRL01		= 0xCA;			// USART0 Control 1 Register
sfr			UCTRL02		= 0xCB;			// USART0 Control 2 Register
sfr			UCTRL03		= 0xCC;			// USART0 Control 3 Register
sfr			USTAT0		= 0xCD;			// USART0 Status Register
sfr			UBAUD0		= 0xCE;			// USART0 Baud Rate Generation Register
sfr			UDATA0		= 0xCF;			// USART0 Data Register
sfr			UCTRL11		= 0xFA;			// USART1 Control 1 Register
sfr			UCTRL12		= 0xFB;			// USART1 Control 2 Register
sfr			UCTRL13		= 0xFC;			// USART1 Control 3 Register
sfr			USTAT1		= 0xFD;			// USART1 Status Register
sfr			UBAUD1		= 0xFE;			// USART1 Baud Rate Generation Register
sfr			UDATA1		= 0xFF;			// USART1 Data Register

// I2C
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// I2C Data Register
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1

// AD converter
sfr			ADCM		= 0xD1;			// A/D Converter Mode Register
sfr			ADCRL		= 0xD3;			// A/D Converter Result Low Register
sfr			ADCRH		= 0xD4;			// A/D Converter Result High register
sfr			ADCM2		= 0xD4;			// A/D Converter Mode 2 Register

// Touch switch
sfr			TSCR		= 0xE2;			// Touch Sensing Interrupt Flag Register
sfr			TSTR		= 0xE3;			// Touch Sensing Test register
sfr			TSSR0		= 0xE4;			// Touch Switch Select register
sfr			TSSR1		= 0xE5;			// Touch Switch Select register
sfr			TSSR2		= 0xE6;			// Touch Switch Select Register

#ifdef MAIN
unsigned char xdata RAW0H _at_ 0x2F00;	// CS0 RAW High Byte Register
unsigned char xdata RAW0L _at_ 0x2F01;	// CS0 RAW Low Byte Register
unsigned char xdata RAW8H _at_ 0x2F02;	// CS8 RAW High Byte Register
unsigned char xdata RAW8L _at_ 0x2F03;	// CS8 RAW Low Byte Register
unsigned char xdata RAW16H _at_ 0x2F04;	// CS16 RAW High Byte Register
unsigned char xdata RAW16L _at_ 0x2F05;	// CS16 RAW Low Byte Register
unsigned char xdata RAW1H _at_ 0x2F06;	// CS1 RAW High Byte Register
unsigned char xdata RAW1L _at_ 0x2F07;	// CS1 RAW Low Byte Register
unsigned char xdata RAW9H _at_ 0x2F08;	// CS9 RAW High Byte Register
unsigned char xdata RAW9L _at_ 0x2F09;	// CS9 RAW Low Byte Register
unsigned char xdata RAW17H _at_ 0x2F0A;	// CS17 RAW High Byte Register
unsigned char xdata RAW17L _at_ 0x2F0B;	// CS17 RAW Low Byte Register
unsigned char xdata RAW2H _at_ 0x2F0C;	// CS2 RAW High Byte Register
unsigned char xdata RAW2L _at_ 0x2F0D;	// CS2 RAW Low Byte Register
unsigned char xdata RAW10H _at_ 0x2F0E;	// CS10 RAW High Byte Register
unsigned char xdata RAW10L _at_ 0x2F0F;	// CS10 RAW Low Byte Register
unsigned char xdata RAW18H _at_ 0x2F10;	// CS18 RAW High Byte Register
unsigned char xdata RAW18L _at_ 0x2F11;	// CS18 RAW Low Byte Register
unsigned char xdata RAW3H _at_ 0x2F12;	// CS3 RAW High Byte Register
unsigned char xdata RAW3L _at_ 0x2F13;	// CS3 RAW Low Byte Register
unsigned char xdata RAW11H _at_ 0x2F14;	// CS11 RAW High Byte Register
unsigned char xdata RAW11L _at_ 0x2F15;	// CS11 RAW Low Byte Register
unsigned char xdata RAW19H _at_ 0x2F16;	// CS19 RAW High Byte Register
unsigned char xdata RAW19L _at_ 0x2F17;	// CS19 RAW Low Byte Register
unsigned char xdata RAW4H _at_ 0x2F18;	// CS4 RAW High Byte Register
unsigned char xdata RAW4L _at_ 0x2F19;	// CS4 RAW Low Byte Register
unsigned char xdata RAW12H _at_ 0x2F1A;	// CS12 RAW High Byte Register
unsigned char xdata RAW12L _at_ 0x2F1B;	// CS12 RAW Low Byte Register
unsigned char xdata RAW20H _at_ 0x2F1C;	// CS20 RAW High Byte Register
unsigned char xdata RAW20L _at_ 0x2F1D;	// CS20 RAW Low Byte Register
unsigned char xdata RAW5H _at_ 0x2F1E;	// CS5 RAW High Byte Register
unsigned char xdata RAW5L _at_ 0x2F1F;	// CS5 RAW Low Byte Register
unsigned char xdata RAW13H _at_ 0x2F20;	// CS13 RAW High Byte Register
unsigned char xdata RAW13L _at_ 0x2F21;	// CS13 RAW Low Byte Register
unsigned char xdata RAW21H _at_ 0x2F22;	// CS21 RAW High Byte Register
unsigned char xdata RAW21L _at_ 0x2F23;	// CS21 RAW Low Byte Register
unsigned char xdata RAW6H _at_ 0x2F24;	// CS6 RAW High Byte Register
unsigned char xdata RAW6L _at_ 0x2F25;	// CS6 RAW Low Byte Register
unsigned char xdata RAW14H _at_ 0x2F26;	// CS14 RAW High Byte Register
unsigned char xdata RAW14L _at_ 0x2F27;	// CS14 RAW Low Byte Register
unsigned char xdata RAW22H _at_ 0x2F28;	// CS22 RAW High Byte Register
unsigned char xdata RAW22L _at_ 0x2F29;	// CS22 RAW Low Byte Register
unsigned char xdata RAW7H _at_ 0x2F2A;	// CS7 RAW High Byte Register
unsigned char xdata RAW7L _at_ 0x2F2B;	// CS7 RAW Low Byte Register
unsigned char xdata RAW15H _at_ 0x2F2C;	// CS15 RAW High Byte Register
unsigned char xdata RAW15L _at_ 0x2F2D;	// CS15 RAW Low Byte Register
unsigned char xdata RAW23H _at_ 0x2F2E;	// CS23 RAW High Byte Register
unsigned char xdata RAW23L _at_ 0x2F2F;	// CS23 RAW Low Byte Register

unsigned char xdata TCR _at_ 0x2F30;	// Touch Control Register
unsigned char xdata TXNUM _at_ 0x2F30;	// TX Line Selection Register
unsigned char xdata SRM _at_ 0x2F31;	// SRM Control Register
unsigned char xdata EBTH _at_ 0x2F31;	// EBTH Control Register
unsigned char xdata GAP _at_ 0x2F32;	// GM-AMP Control Register
unsigned char xdata AP _at_ 0x2F32;		// CDS/RX Block Control Register
unsigned char xdata DAP _at_ 0x2F33;	// DAP Control Register
unsigned char xdata HSAP _at_ 0x2F33;	// HSP Control Register
unsigned char xdata DRVCTL _at_ 0x2F34;	// Driver AMP Control Register
unsigned char xdata VINTCTL _at_ 0x2F34;	// VINT Control Register
unsigned char xdata FHC0 _at_ 0x2F35;	// Frequency Hopping0/1 Control Register
unsigned char xdata FHC1 _at_ 0x2F35;	// Frequency Hopping0/1 Control Register
unsigned char xdata FHC2 _at_ 0x2F36;	// Frequency Hopping2/3 Control Register
unsigned char xdata FHC3 _at_ 0x2F36;	// Frequency Hopping2/3 Control Register
unsigned char xdata TRIMHS _at_ 0x2F37;	// Oscillator Trimming Control Register

unsigned char xdata RXT0 _at_ 0x2F38;	// CS0 Tuning Reference Register
unsigned char xdata RXT8 _at_ 0x2F39;	// CS8 Tuning Reference Register
unsigned char xdata RXT16 _at_ 0x2F3A;	// CS16 Tuning Reference Register
unsigned char xdata RXT1 _at_ 0x2F3B;	// CS1 Tuning Reference Register
unsigned char xdata RXT9 _at_ 0x2F3C;	// CS9 Tuning Reference Register
unsigned char xdata RXT17 _at_ 0x2F3D;	// CS17 Tuning Reference Register
unsigned char xdata RXT2 _at_ 0x2F3E;	// CS2 Tuning Reference Register
unsigned char xdata RXT10 _at_ 0x2F3F;	// CS10 Tuning Reference Register
unsigned char xdata RXT18 _at_ 0x2F40;	// CS18 Tuning Reference Register
unsigned char xdata RXT3 _at_ 0x2F41;	// CS3 Tuning Reference Register
unsigned char xdata RXT11 _at_ 0x2F42;	// CS11 Tuning Reference Register
unsigned char xdata RXT19 _at_ 0x2F43;	// CS19 Tuning Reference Register
unsigned char xdata RXT4 _at_ 0x2F44;	// CS4 Tuning Reference Register
unsigned char xdata RXT12 _at_ 0x2F45;	// CS12 Tuning Reference Register
unsigned char xdata RXT20 _at_ 0x2F46;	// CS20 Tuning Reference Register
unsigned char xdata RXT5 _at_ 0x2F47;	// CS5 Tuning Reference Register
unsigned char xdata RXT13 _at_ 0x2F48;	// CS13 Tuning Reference Register
unsigned char xdata RXT21 _at_ 0x2F49;	// CS21 Tuning Reference Register
unsigned char xdata RXT6 _at_ 0x2F4A;	// CS6 Tuning Reference Register
unsigned char xdata RXT14 _at_ 0x2F4B;	// CS14 Tuning Reference Register
unsigned char xdata RXT22 _at_ 0x2F4C;	// CS22 Tuning Reference Register
unsigned char xdata RXT7 _at_ 0x2F4D;	// CS7 Tuning Reference Register
unsigned char xdata RXT15 _at_ 0x2F4E;	// CS15 Tuning Reference Register
unsigned char xdata RXT23 _at_ 0x2F4F;	// CS23 Tuning Reference Register

unsigned char xdata TSIG _at_ 0x2F51;	// TX Signal Control Register
unsigned char xdata TPP _at_ 0x2F51;	// PP Signal Control Register
unsigned char xdata SCV _at_ 0x2F52;	// Hopping Control Register
unsigned char xdata ACMU _at_ 0x2F52;	// Accumulated Average Control Register
unsigned char xdata NAVG _at_ 0x2F52;	// Arithemetic Average Control Register
unsigned char xdata CAVG _at_ 0x2F53;	// Average Control Register
unsigned char xdata TOFF _at_ 0x2F54;	// TX Line Control Register
unsigned char xdata SUM _at_ 0x2F55;	// Moving Average Selection Register
unsigned char xdata DIVSEL _at_ 0x2F55;	// Division Control Register
unsigned char xdata TMEM _at_ 0x2F56;	// Touch Memory Control Register
unsigned char xdata TPGEN _at_ 0x2F56;	// Touch Data Generation Control register

#else
extern unsigned char xdata RAW0H;
extern unsigned char xdata RAW0L;
extern unsigned char xdata RAW8H;
extern unsigned char xdata RAW8L;
extern unsigned char xdata RAW16H;
extern unsigned char xdata RAW16L;
extern unsigned char xdata RAW1H;
extern unsigned char xdata RAW1L;
extern unsigned char xdata RAW9H;
extern unsigned char xdata RAW9L;
extern unsigned char xdata RAW17H;
extern unsigned char xdata RAW17L;
extern unsigned char xdata RAW2H;
extern unsigned char xdata RAW2L;
extern unsigned char xdata RAW10H;
extern unsigned char xdata RAW10L;
extern unsigned char xdata RAW18H;
extern unsigned char xdata RAW18L;
extern unsigned char xdata RAW3H;
extern unsigned char xdata RAW3L;
extern unsigned char xdata RAW11H;
extern unsigned char xdata RAW11L;
extern unsigned char xdata RAW19H;
extern unsigned char xdata RAW19L;
extern unsigned char xdata RAW4H;
extern unsigned char xdata RAW4L;
extern unsigned char xdata RAW12H;
extern unsigned char xdata RAW12L;
extern unsigned char xdata RAW20H;
extern unsigned char xdata RAW20L;
extern unsigned char xdata RAW5H;
extern unsigned char xdata RAW5L;
extern unsigned char xdata RAW13H;
extern unsigned char xdata RAW13L;
extern unsigned char xdata RAW21H;
extern unsigned char xdata RAW21L;
extern unsigned char xdata RAW6H;
extern unsigned char xdata RAW6L;
extern unsigned char xdata RAW14H;
extern unsigned char xdata RAW14L;
extern unsigned char xdata RAW22H;
extern unsigned char xdata RAW22L;
extern unsigned char xdata RAW7H;
extern unsigned char xdata RAW7L;
extern unsigned char xdata RAW15H;
extern unsigned char xdata RAW15L;
extern unsigned char xdata RAW23H;
extern unsigned char xdata RAW23L;

extern unsigned char xdata TCR;
extern unsigned char xdata TXNUM;
extern unsigned char xdata SRM;
extern unsigned char xdata EBTH;
extern unsigned char xdata GAP;
extern unsigned char xdata AP;
extern unsigned char xdata DAP;
extern unsigned char xdata HSAP;
extern unsigned char xdata DRVCTL;
extern unsigned char xdata VINTCTL;
extern unsigned char xdata FHC0;
extern unsigned char xdata FHC1;
extern unsigned char xdata FHC2;
extern unsigned char xdata FHC3;
extern unsigned char xdata TRIMHS;

extern unsigned char xdata RXT0;
extern unsigned char xdata RXT8;
extern unsigned char xdata RXT16;
extern unsigned char xdata RXT1;
extern unsigned char xdata RXT9;
extern unsigned char xdata RXT17;
extern unsigned char xdata RXT2;
extern unsigned char xdata RXT10;
extern unsigned char xdata RXT18;
extern unsigned char xdata RXT3;
extern unsigned char xdata RXT11;
extern unsigned char xdata RXT19;
extern unsigned char xdata RXT4;
extern unsigned char xdata RXT12;
extern unsigned char xdata RXT20;
extern unsigned char xdata RXT5;
extern unsigned char xdata RXT13;
extern unsigned char xdata RXT21;
extern unsigned char xdata RXT6;
extern unsigned char xdata RXT14;
extern unsigned char xdata RXT22;
extern unsigned char xdata RXT7;
extern unsigned char xdata RXT15;
extern unsigned char xdata RXT23;

extern unsigned char xdata TSIG;
extern unsigned char xdata TPP;
extern unsigned char xdata SCV;
extern unsigned char xdata ACMU;
extern unsigned char xdata NAVG;
extern unsigned char xdata CAVG;
extern unsigned char xdata TOFF;
extern unsigned char xdata SUM;
extern unsigned char xdata DIVSEL;
extern unsigned char xdata TMEM;
extern unsigned char xdata TPGEN;
#endif

// Power control
sfr			PCON		= 0x87;			// Power Control register

// BOD
sfr			BODR		= 0x86;			// BOD Control Register
sfr			LVDR		= 0x8F;			// LVD Control register

// Flash control
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FEARL		= 0xF2;			// Flash Address Low Register
sfr			FEARM		= 0xF3;			// Flash Address Middle Register
sfr			FEARH		= 0xF4;			// Flash Address High Register
sfr			FEDR		= 0xF5;			// Flash Data register

// Register
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		_DPTR		= 0x82;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr16		_DPTR1		= 0x84;

sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER
#endif	//_MC96FT241_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
