//======================================================
//		device   : MC97F6108A(20, 16 pin)
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC97F6108A_
#define		_MC97F6108A_

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
unsigned char xdata P0OD _at_ 0x2F01;	// P0 Open-drain Selection Register
unsigned char xdata P0DB _at_ 0x2F02;	// P0 De-bounce Enable Register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif

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
unsigned char xdata P1PU _at_ 0x2F08;	// P1 Pull-up Resistor Selection Register
unsigned char xdata P1OD _at_ 0x2F09;	// P1 Open-drain Selection Register
unsigned char xdata P1DB _at_ 0x2F0A;	// P1 De-bounce Enable Register
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
unsigned char xdata P2PU _at_ 0x2F10;	// P2 Pull-up Resistor Selection Register
unsigned char xdata P2OD _at_ 0x2F11;	// P2 Open-drain Selection Register
unsigned char xdata P2DB _at_ 0x2F12;	// P2 De-bounce Enable Register
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
extern unsigned char xdata P2DB;
#endif

#ifdef MAIN
unsigned char xdata PSR0 _at_ 0x2F48;	// Port De-bounce selection register
unsigned char xdata PSR2 _at_ 0x2F4A;	// Analog I/O port selection register
unsigned char xdata PSR3 _at_ 0x2F4B;	// Analog I/O port selection register
#else
extern unsigned char xdata PSR0;
extern unsigned char xdata PSR2;
extern unsigned char xdata PSR3;
#endif

// Interrupt Control
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IPH			= 0x93;			// Interrupt Priority Register High
sfr			IP1			= 0x9A;			// Interrupt Priority Register 1
sfr			IP1H		= 0x9B;			// Interrupt Priority Register 1 High
sfr			IP2			= 0x9C;			// Interrupt Priority Register 2
sfr			IP2H		= 0x9D;			// Interrupt Priority Register 2 High
sfr			IP3			= 0x9E;			// Interrupt Priority Register 3
sfr			IP3H		= 0x9F;			// Interrupt Priority Register 3 High
sfr			EIENAB		= 0xA3;			// External Interrupt Flag Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;			// External Interrupt Flag Edge Register
sfr			EIPOLA		= 0xA6;			// External Interrupt Flag Polarity Register
sfr			EIBOTH		= 0xA7;			// External Interrupt Flag Both Edge Enable Register
sfr			CIENAB		= 0xB1;			// Comparator Interrupt Flag Enable Register
sfr			CIFLAG		= 0xAC;			// Comparator Interrupt Flag Register
sfr			CIEDGE		= 0xAD;			// Comparator Interrupt Flag Edge Register
sfr			CIPOLA		= 0xAE;			// Comparator Interrupt Flag Polarity Register
sfr			CIBOTH		= 0xAF;			// Comparator Interrupt Flag Both Edge Enable Register
sfr			CFENAB		= 0xD8;			// Comparator Flag Enable Register
sfr			CFFLAG		= 0xC8;			// Comparator Flag Register
sfr			CFEDGE		= 0xC0;			// Comparator Flag Edge Register
sfr			CFPOLA		= 0xB0;			// Comparator Flag Polarity Register
sfr			CFBOTH		= 0xA0;			// Comparator Flag Both Edge Enable Register
sfr			PCI			= 0x94;			// Pin Change Interrupt Enable Register

// System Oscillator
sfr			SCCR		= 0x8A;			// System Clock Control Register

// Basic Interbal Timer Control
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Basic Interval Timer Register

//  Watch Dog Timer Control 
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

// TIMER 0 Control
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0CR1		= 0xB3;			// Timer 0 Mode Control Register 1
sfr			T0L			= 0xB4;			// Timer 0 Low Register
sfr			PWM0DRL		= 0xB4;			// PWM 0 Duty Register Low
sfr			CDR0L		= 0xB4;			// Timer 0 Capture Data Register Low
sfr			T0H			= 0xB5;			// Timer 0 Register High
sfr			PWM0DRH		= 0xB5;			// PWM 0 Duty Register High
sfr			CDR0H		= 0xB5;			// Timer 0 Capture Data Register High
sfr			T0DRL		= 0xB6;			// Timer 0 Data Register Low
sfr			PWM0PRL		= 0xB6;			// PWM 0 Period Register Low
sfr			T0DRH		= 0xB7;			// Timer 0 Data Register High
sfr			PWM0PRH		= 0xB7;			// PWM 0 Period Register High

// TIMER 1 Control
sfr			T1CR		= 0xBA;			// Timer 1 Mode Control Register
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

// TIMER 2 Control
sfr			T2CR		= 0xC2;			// Timer 2 Mode Control Register
sfr			T2CR1		= 0xC3;			// Timer 2 Mode Control Register 1
sfr			T2L			= 0xC4;			// Timer 2 Register Low
sfr			PWM2DRL		= 0xC4;			// PWM 2 Duty Register Low
sfr			CDR2L		= 0xC4;			// Timer 2 Capture Data Register Low
sfr			T2H			= 0xC5;			// Timer 2 Register High
sfr			PWM2DRH		= 0xC5;			// PWM 2 Duty Register High
sfr			CDR2H		= 0xC5;			// Timer 2 Capture Data Register High
sfr			T2DRL		= 0xC6;			// Timer 2 Data Register Low
sfr			PWM2PRL		= 0xC6;			// PWM 2 Period Register Low
sfr			T2DRH		= 0xC7;			// Timer 2 Data Register High
sfr			PWM2PRH		= 0xC7;			// PWM 2 Period Register High

// TIMER 3 Control
sfr			T3CR		= 0xCA;			// Timer 3 Mode Control Register
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

// TIMER interrupt Control
sfr			TMISR		= 0xD5;			// Timer x Interrupt Flag Clear Register

// BUZZER Control
sfr			BUZCR		= 0xEE;			// BUZZER Control Register
sfr			BUZDR		= 0xEF;			// BUZZER Data Register

// USART Control
sfr			UCTCR1		= 0xFA;			// USART Control Register 1
sfr			UCTCR2		= 0xFB;			// USART Control Register 2
sfr			UCTCR3		= 0xFC;			// USART Control Register 3
sfr			USTST		= 0xFD;			// USART Status Register
sfr			UBAUD		= 0xFE;			// USART BaudRate Register
sfr			UDATA		= 0xFF;			// USART Data Register

// I2C Control
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// I2C Data Register
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1

// ADC Contol
sfr			ADCM		= 0x95;			// A/D Converter Mode Register
sfr			ADCRL		= 0x96;			// A/D Converter Result High Register
sfr			ADCRH		= 0x97;			// A/D Converter Result Low Register
sfr			ADCM1		= 0x96;			// A/D Converter Mode 1 Register

// PPG (Programmable Pulse Generator)
sfr			PPGCR		= 0xE2;			// PPG Control Register
sfr			PPGCR1		= 0xE3;			// PPG Control Register 1
sfr			PPGCR2		= 0xE1;			// PPG Control Register 2
sfr			PPGL		= 0xD3;			// PPG Low Register
sfr			PPGCL		= 0xD3;			// PPG Capture Data Register Low
sfr			PPGH		= 0xD4;			// PPG Register High
sfr			PPGCH		= 0xD4;			// PPG Capture Data Register High
sfr			PPGDL		= 0xE4;			// PPG Duty Register Low
sfr			PPGDH		= 0xE5;			// PPG Duty Register High
sfr			PPGPL		= 0xE6;			// PPG Period Register Low
sfr			PPGPH		= 0xE7;			// PPG Period Register High
sfr			PPGPXH		= 0xD9;			// PPG Max Period Register High
sfr			PPGPXL		= 0xD1;			// PPG Max Period Register Low
sfr			ATPCR		= 0xF9;			// Auto Period Mode Control Register
sfr			USTEP		= 0xC1;			// Auto Period Mode Up Step Register
sfr			DSTEP		= 0xC9;			// Auto Period Mode Down Step Register
sfr			ATPLR		= 0xE9;			// Auto Period Mode Period Low Register
sfr			ATPHR		= 0xF1;			// Auto Period Mode Period High Register
sfr			OFFCR		= 0xB9;			// PPG Off Time Control Register

#ifdef MAIN
unsigned char xdata ATPMAXLR _at_ 0x2F04;	// auto Period Mode Max Period High Register
unsigned char xdata ATPMAXHR _at_ 0x2F05;	// auto Period Mode Max Period Low Register
unsigned char xdata ATPMINLR _at_ 0x2F06;	// auto Period Mode Min Period High Register
unsigned char xdata ATPMINHR _at_ 0x2F07;	// auto Period Mode Min Period Low Register
unsigned char xdata OFFMAXLR _at_ 0x2F0C;	// PPG Max Off-Time Low Register
unsigned char xdata OFFMAXHR _at_ 0x2F0D;	// PPG Max Off-Time High Register
unsigned char xdata OFFMINLR _at_ 0x2F0E;	// PPG Min Off-Time Low Register
unsigned char xdata OFFMINHR _at_ 0x2F0F;	// PPG Min Off Time High Register
#else
extern unsigned char xdata ATPMAXLR;
extern unsigned char xdata ATPMAXHR;
extern unsigned char xdata ATPMINLR;
extern unsigned char xdata ATPMINHR;
extern unsigned char xdata OFFMAXLR;
extern unsigned char xdata OFFMAXHR;
extern unsigned char xdata OFFMINLR;
extern unsigned char xdata OFFMINHR;
#endif

// Analog Comparawtor & OP-AMP
#ifdef MAIN
unsigned char xdata CA_REG1 _at_ 0x2F31;	// Comparator Amp Register 1
unsigned char xdata CA_REG2 _at_ 0x2F32;	// Comparator Amp Register 2
unsigned char xdata CA_REG3 _at_ 0x2F33;	// Comparator Amp Register 3
unsigned char xdata CA_REG4 _at_ 0x2F34;	// Comparator Amp Register 4
unsigned char xdata CA_REG5 _at_ 0x2F35;	// Comparator Amp Register 5
unsigned char xdata CA_REG6 _at_ 0x2F36;	// Comparator Amp Register 6
unsigned char xdata CA_REG7 _at_ 0x2F37;	// Comparator Amp Register 7
unsigned char xdata CA_REGA _at_ 0x2F3A;	// Comparator Amp Register A
unsigned char xdata CA_REGB _at_ 0x2F3B;	// Comparator Amp Register B
unsigned char xdata CA_REGC _at_ 0x2F3C;	// Comparator Amp Register C
#else
extern unsigned char xdata CA_REG1;
extern unsigned char xdata CA_REG2;
extern unsigned char xdata CA_REG3;
extern unsigned char xdata CA_REG4;
extern unsigned char xdata CA_REG5;
extern unsigned char xdata CA_REG6;
extern unsigned char xdata CA_REG7;
extern unsigned char xdata CA_REGA;
extern unsigned char xdata CA_REGB;
extern unsigned char xdata CA_REGC;
#endif

// Power down operation
sfr			PCON		= 0x87;			// Power Control Register

// BOD (Brown Out Detector)
sfr			RSFR		= 0x86;			// Reset Source Flag register
sfr			BODR		= 0x8F;			// BOD Control register

// Flash Memory Control
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FEARL		= 0xF2;			// Flash Address Low Register
sfr			FEARM		= 0xF3;			// Flash Address Middle Register
sfr			FEARH		= 0xF4;			// Flash Address High Register
sfr			FEDR		= 0xF5;			// Flash Data Register

// General Registers
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr16		DPTR		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		DPTR1		= 0x84;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_MC97F6108A_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
