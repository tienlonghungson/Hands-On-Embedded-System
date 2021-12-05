//======================================================
//		device   : MC97FG316 (32, 28, 20pin)
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC97FG316_
#define		_MC97FG316_

//======================================================
// PORT Control Register
//======================================================
// PORT0
sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00 		= 0x80;
	sbit	P01	  		= 0x81;
	sbit	P02	  		= 0x82;
	sbit	P03 		= 0x83;
	sbit	P04	  		= 0x84;
	sbit	P05	  		= 0x85;
	sbit	P06	  		= 0x86;
	sbit	P07	  		= 0x87;
sfr			P0IO		= 0x89;			// P0 Direction Register
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2F00;	// P0 Pull-up Resistor Selection Register
unsigned char xdata P0OD _at_ 0x2F04;	// P0 Open-drain Selection Register
unsigned char xdata P0DB _at_ 0x2F08;	// P0 Debounce Enable Register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif
sfr			PCI0		= 0xAE;			// P0 Pin Change Interrupt Enable register

// PORT1
sfr			P1			= 0x88;			// P1 Data register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;
sfr			P1IO		= 0x91;			// P1 Direction register
#ifdef MAIN
unsigned char xdata P1PU _at_ 0x2F01;	// P1 Pull-up Resistor Selection register
unsigned char xdata P1OD _at_ 0x2F05;	// P1 Open-drain Selection register
unsigned char xdata P1DB _at_ 0x2F09;	// P1 Debounce Enable Register
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P1DB;
#endif

// PORT2
sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
sfr			P2IO		= 0x99;			// P2 Direction Register
#ifdef MAIN
unsigned char xdata P2PU _at_ 0x2F02;	// P2 Pull-up Resistor Selection Register
unsigned char xdata P2OD _at_ 0x2F06;	// P2 Open-drain Selection Register
unsigned char xdata P2DB _at_ 0x2F0A;	// P2 Debounce Enable register
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
extern unsigned char xdata P2DB;
#endif

// PORT3
sfr			P3			= 0x98;			// P3 Data register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;
sfr			P3IO		= 0xA1;			// P3 Direction register
#ifdef MAIN
unsigned char xdata P3PU _at_ 0x2F03;	// P3 Pull-up Resistor Selection register
unsigned char xdata P3OD _at_ 0x2F07;	// P3 Open-drain Selection register
unsigned char xdata P3DB _at_ 0x2F0B;	// P3 Debounce Enable Register
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
extern unsigned char xdata P3DB;
#endif

#ifdef MAIN
unsigned char xdata PSR0 _at_ 0x2F10;	// Port Selection Register 0
unsigned char xdata PSR1 _at_ 0x2F11;	// P1,P2,P3 Port Selection Register
unsigned char xdata PSR2 _at_ 0x2F12;	// Special Port Selection Register
#else
extern unsigned char xdata PSR0;
extern unsigned char xdata PSR1;
extern unsigned char xdata PSR2;
#endif

//======================================================
// Interrupt
//======================================================
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0x92;			// Interrupt Priority Register
sfr			IPH			= 0x93;			// Interrupt Priority Register High
sfr			IP1			= 0x9A;			// Interrupt Priority Register 1
sfr			IP1H		= 0x9B;			// Interrupt Priority Register 1 High
sfr			IP2			= 0x9C;			// Interrupt Priority Register 2
sfr			IP2H		= 0x9D;			// Interrupt Priority Register 2 High
sfr			IP3			= 0x9E;			// Interrupt Priority Register 3
sfr			IP3H		= 0x9F;			// Interrupt Priority Register 3 High
sfr			EIENAB		= 0xA3;			// External Interrupt Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;			// External Interrupt Polarity Register
sfr			EIBOTH		= 0xA7;			// External Interrupt Both Edge Enable Register

//======================================================
// Clock
//======================================================
sfr			SCCR		= 0x8A;			// System and Clock Control Register

//======================================================
// Basic interval timer
//======================================================
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Basic Interval Timer Register

//======================================================
// Watch-dog timer
//======================================================
sfr			WDTIDR		= 0x8E;			// Watch Dog Timer Identification Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control Register
#ifdef MAIN
unsigned char xdata WDTC _at_ 0x2F14;	// Watch Dog Timer Clear Register
unsigned char xdata WDTSR _at_ 0x2F15;	// atch Dog Timer Status Register
unsigned char xdata WDTCNTH _at_ 0x2F16;	// Watch Dog Timer Count H Register
unsigned char xdata WDTCNTL _at_ 0x2F17;	// Watch Dog Timer Count L Register
#else
extern unsigned char xdata WDTC;
extern unsigned char xdata WDTSR;
extern unsigned char xdata WDTCNTH;
extern unsigned char xdata WDTCNTL;
#endif

//======================================================
// Watch timer
//======================================================
sfr			WTMR		= 0x95;			// Watch Timer Mode Register
sfr			WTR			= 0x96;			// Watch Timer Register
sfr			WTCR		= 0x96;			// Watch Timer Counter Register

//======================================================
// Timer/PWM
//======================================================
// Timer0
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// Timer 0 Register
sfr			T0DR		= 0xB3;			// Timer 0 Data Register
sfr			CDR0		= 0xB3;			// Capture 0 Data register

// Timer1
sfr			T1CR		= 0xB4;			// Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// Timer 1 Data Register
sfr			T1PPRH		= 0xB6;			// Timer 1 PWM Period Register High
sfr			T1PPRL		= 0xB5;			// Timer 1 PWM Period Register Low
sfr			T1			= 0xB0;			// Timer 1 Register
sfr			T1ADRH		= 0xB1;			// Timer 1 PWM 1A Duty Register High
sfr			T1ADRL		= 0xB0;			// Timer 1 PWM 1A Duty Register
sfr			CDR1		= 0xB0;			// Capture 1 Data Register
sfr			T1PCR		= 0xB7;			// Timer 1 PWM Control Register
sfr			T1BDRH		= 0xBA;			// Timer 1 PWM 1B Duty Register High
sfr			T1BDRL		= 0xB9;			// Timer 1 PWM 1B Duty Register Low
sfr			T1CDRH		= 0xBC;			// Timer 1 PWM 1C Duty Register High
sfr			T1CDRL		= 0xBB;			// Timer 1 PWM 1C Duty Register Low
sfr			T1PCR2		= 0xBD;			// Timer 1 PWM Control Register 2
sfr			T1PCR3		= 0xBE;			// Timer 1 PWM Control Register 3
sfr			T1DLYA		= 0xBF;			// PWM1 Non-Overlap Delay Register ch. A/AB
sfr			T1DLYB		= 0xC2;			// PWM1 Non-Overlap Delay Register ch. B/BB
sfr			T1DLYC		= 0xC3;			// PWM1 Non-Overlap Delay Register ch. C/CB
sfr			T1ISR		= 0xC4;			// Timer 1 Interrupt Status Register
sfr			T1IMSK		= 0xC5;			// Timer 1 Interrupt Mask Register
sfr			PLLCR		= 0x94;			// Timer1 PLL Control Register

// Timer2
sfr			T2CR		= 0xC6;			// Timer 2 Mode Control Register
sfr			T2			= 0xC7;			// Timer 2 Register
sfr			T2DR		= 0xC7;			// Timer 2 Data Register
sfr			CDR2		= 0xC7;			// Capture 2 Data Register

// Timer3
sfr			T3CR		= 0xCA;			// Timer 3 Mode Control Register
sfr			T3DR		= 0xCB;			// Timer 3 Data Register
sfr			T3PPR		= 0xCB;			// Timer 3 PWM Period Register
sfr			T3			= 0xCC;			// Timer 3 Register
sfr			T3PDR		= 0xCC;			// Timer 3 PWM Duty Register
sfr			CDR3		= 0xCC;			// Capture 3 Data Register
sfr			T3PWHR		= 0xCD;			// Timer 3 PWM High Register

// Timer4
sfr			T4CR		= 0xCE;			// Timer 4 Mode Control Register
sfr			T4L			= 0xCF;			// Timer 4 Low Register
sfr			T4LDR		= 0xCF;			// Timer 4 Low Data Register
sfr			LCDR4		= 0xCF;			// Low Capture 4 Data Register
sfr			T4H			= 0xD5;			// Timer 4 High Register
sfr			T4HDR		= 0xD5;			// Timer 4 High Data Register
sfr			HCDR4		= 0xD5;			// High Capture 4 Data Register

//======================================================
// Buzzer
//======================================================
sfr			BUZDR		= 0x8F;			// Buzzer Data Register
sfr			BUZCR		= 0x97;			// Buzzer Control Register

//======================================================
// USART
//======================================================
// USART0
sfr			UCTRL01		= 0xE2;			// USART Control 1 Register 0
sfr			UCTRL02		= 0xE3;			// USART Control 2 Register 0
sfr			UCTRL03		= 0xE4;			// USART Control 3 Register 0
sfr			USTAT0		= 0xE5;			// USART Status Register 0
sfr			UBAUD0		= 0xE6;			// USART Baud Rate Generation Register 0
sfr			UDATA0		= 0xE7;			// USART Data Register 0

// USART1
sfr			UCTRL11		= 0xFA;			// USART Control 1 Register 1
sfr			UCTRL12		= 0xFB;			// USART Control 2 Register 1
sfr			UCTRL13		= 0xFC;			// USART Control 3 Register 1
sfr			USTAT1		= 0xFD;			// USART Status Register 1
sfr			UBAUD1		= 0xFE;			// USART Baud Rate Generation Register 1
sfr			UDATA1		= 0xFF;			// USART Data Register 1

//======================================================
// SPI
//======================================================
sfr			SPICR		= 0xD2;			// SPI Control Register
sfr			SPIDR		= 0xD3;			// SPI Data Register
sfr			SPISR		= 0xD4;			// SPI Status Register

//======================================================
// I2C
//======================================================
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// I2C Data Register
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1

//======================================================
// ADC
//======================================================
sfr			ADCM		= 0xC0;			// A/D Converter Mode Register
sfr			ADCRL		= 0xC8;			// A/D Converter Result High Register
sfr			ADCRH		= 0xC9;			// A/D Converter Result Low Register
sfr			ADCM2		= 0xC1;			// A/D Converter Mode 2 Register

//======================================================
// Analog Comparator
//======================================================
sfr			ACCSR		= 0xF9;			// Analog Comparator Control & Status Register

//======================================================
// Power down operation
//======================================================
sfr			PCON		= 0x87;			// Power control register

//======================================================
// Brown out detector
//======================================================
sfr			BODR		= 0x86;			// BOD Control Register

//======================================================
// Flash and EEPROM Memory Register
//======================================================
sfr			FEMR		= 0xEA;			// Flash and EEPROM Mode Register
sfr			FECR		= 0xEB;			// Flash and EEPROM Control Register
sfr			FESR		= 0xEC;			// Flash and EEPROM Status Register
sfr			FETCR		= 0xED;			// Flash and EEPROM Time Control Register
sfr			FEARL		= 0xF2;			// Flash and EEPROM Address Low Register
sfr			FEARM		= 0xF3;			// Flash and EEPROM Address Middle Register
sfr			FEARH		= 0xF4;			// Flash and EEPROM Address High Register
sfr			FEDR		= 0xF5;			// Flash and EEPROM Data Register

//======================================================
// Basic Register
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;
sfr			XBANK		= 0xA0;

#endif	//_MC97FG316_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
