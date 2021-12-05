//======================================================
//		file name: MC95FT081.h
//		device   : MC95FT081
//		version  : V1.000.00
//		date     : 2015-09-25.Fri
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC95FT081_
#define _MC95FT081_

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

#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2F00;	// P0 Pull-up Resistor Selection Register
unsigned char xdata P0OD _at_ 0x2F0C;	// P0 Open-drain Selection Register
unsigned char xdata P0DB _at_ 0x2F18;	// P0 Debounce Enable Register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif
sfr			PCI0		= 0xAE;			// P0 Pin Change Interrupt Enable Register

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
#ifdef MAIN
unsigned char xdata P1PU _at_ 0x2F01;	// P1 Pull-up Resistor Selection Register
unsigned char xdata P1OD _at_ 0x2F0D;	// P1 Open-drain Selection Register
unsigned char xdata P1DB _at_ 0x2F19;	// P1 Debounce Enable Register
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P1DB;
#endif

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
#ifdef MAIN
unsigned char xdata P2PU _at_ 0x2F02;	// P2 Pull-up Resistor Selection Register
unsigned char xdata P2OD _at_ 0x2F0E;	// P2 Open-drain Selection Register
unsigned char xdata P2DB _at_ 0x2F1A;	// P2 Debounce Enable Register
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
extern unsigned char xdata P2DB;
#endif

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
#ifdef MAIN
unsigned char xdata P3PU _at_ 0x2F03;	// P3 Pull-up Resistor Selection Register
unsigned char xdata P3OD _at_ 0x2F0F;	// P3 Open-drain Selection Register
unsigned char xdata P3DB _at_ 0x2F1B;	// P3 Debounce Enable Register
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
extern unsigned char xdata P3DB;
#endif

#ifdef MAIN
unsigned char xdata PSR0 _at_ 0x2F50;	// P0 Port Touch Channel Selection Register
unsigned char xdata PSR1 _at_ 0x2F51;	// I2C Port Selection Register
#else
extern unsigned char xdata PSR0;
extern unsigned char xdata PSR1;
#endif

// interrupt registers
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IE4			= 0xAC;			// Interrupt Enable Register 4
sfr			IE5			= 0xAD;			// Interrupt Enable Register 5
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

sfr			T2CR		= 0xC2;			// Timer 2 Mode Control Register
sfr			T2CR1		= 0xC3;			// Timer 2 Mode Control Register 1
sfr			T2L			= 0xC4;			// Timer 2 Low register
sfr			PWM2DRL		= 0xC4;			// PWM 2 Duty Register Low
sfr			CDR2L		= 0xC4;			// Timer 2 Capture Data Register Low
sfr			T2H			= 0xC5;			// Timer 2 Register High
sfr			PWM2DRH		= 0xC5;			// PWM 2 Duty Register High
sfr			CDR2H		= 0xC5;			// Timer 2 Capture Data Register High
sfr			T2DRL		= 0xC6;			// Timer 2 Data Register Low
sfr			PWM2PRL		= 0xC6;			// PWM 2 Period Register Low
sfr			T2DRH		= 0xC7;			// Timer 2 Data Register High
sfr			PWM2PRH		= 0xC7;			// PWM 2 Period Register High

sfr			T3CR		= 0xCA;			// Timer 3 Mode Control register
sfr			T3CR1		= 0xCB;			// Timer 3 Mode Control Register 1
sfr			T3L			= 0xCC;			// Timer 3 Register Low
sfr			PWM3DRL		= 0xCC;			// PWM 3 Duty Register Low
sfr			CDR3L		= 0xCC;			// Timer 3 Capture Data Register Low
sfr			T3H			= 0xCD;			// Timer 3 Register High
sfr			PWM3DRH		= 0xCD;			// PWM 3 Duty Register High
sfr			CDR3H		= 0xCD;			// Timer 3 Capture Data Register High
sfr			T3DRL		= 0xCE;			// Timer 3 Data Register Low
sfr			PWM3PRL		= 0xCE;			// PWM 3 Period Register Low
sfr			T3DRH		= 0xCF;			// Timer 3 Data Register High
sfr			PWM3PRH		= 0xCF;			// PWM 3 Period Register High


// SPI
sfr			SPICR0		= 0xD2;			// SPI Control Register
sfr			SPIDR0		= 0xD3;			// SPI Data Register
sfr			SPISR0		= 0xD4;			// SPI Status Register

// I2C
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// I2C Data Register
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1

// Touch switch
sfr			TSCRH		= 0xE1;			// Touch Switch Control Register High
sfr			TSCRL		= 0xE2;			// Touch Switch Control Register Low
sfr			TSDR		= 0xE3;			// Touch Switch Data Register
sfr			TSSR0		= 0xE4;			// Touch Switch Sensitivity Register 0
sfr			TSSR1		= 0xE5;			// Touch Switch Sensitivity Register 1
sfr			TSSR2		= 0xE6;			// Touch Switch Sensitivity Register 2
sfr			TSSR3		= 0xE7;			// Touch Switch Sensitivity Register 3

// Power control
sfr			PCON		= 0x87;			// Power Control register

// BOD
sfr			BODR		= 0x86;			// BOD Control Register

// Flash control
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FEARL		= 0xF2;			// Flash Address Low Register
sfr			FEARM		= 0xF3;			// Flash Address Middle Register
sfr			FEARH		= 0xF4;			// Flash Address High Register
sfr			FEDR		= 0xF5;			// Flash Data register
sfr			FETR		= 0xF6;

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
#endif	//_MC95FT081_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
