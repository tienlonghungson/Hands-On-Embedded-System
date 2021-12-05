//======================================================
//	file name: MC97F6208.h
//	device   : MC97F6208 (24/20/16 pin)
//	version  : Ver1.000.00
//	date     : 2015-11-09
//	compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC97F6208_
#define		_MC97F6208_

//------------------------------------------------------
// default
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;

sfr			PSW			= 0xD0;
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;
sfr			EO			= 0xA2;

//------------------------------------------------------
// GPIO port
sfr			P0			= 0x80;		// R/W 00H P0 Data Register
sfr			P0IO		= 0x89;		// R/W 00H P0 Direction Register
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2F00;	// R/W 00H P0 Pull-up Resistor Selection Register
unsigned char xdata P0OD _at_ 0x2F01;	// R/W 00H P0 Open-drain Selection Register
unsigned char xdata P0DB _at_ 0x2F02;	// R/W 00H P0 De-bounce Enable Register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif

sfr			P1			= 0x88;		// R/W 00H P1 Data Register
sfr			P1IO		= 0x91;		// R/W 00H P1 Direction Register
#ifdef MAIN
unsigned char xdata P1PU _at_ 0x2F08;	// R/W 00H P1 Pull-up Resistor Selection Register
unsigned char xdata P1OD _at_ 0x2F09;	// R/W 00H P1 Open-drain Selection Register
unsigned char xdata P1DB _at_ 0x2F0A;	// R/W 00H P1 De-bounce Enable Register
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P1DB;
#endif

sfr			P3			= 0x98;		// R/W 00H P3 Data Register
sfr			P3IO		= 0xA1;		// R/W 00H P3 Direction Register
#ifdef MAIN
unsigned char xdata P3PU _at_ 0x2F18;	// R/W 02H P3 Pull-up Resistor Selection Register
unsigned char xdata P3OD _at_ 0x2F19;	// R/W 00H P3 Open-drain Selection Register
unsigned char xdata P3DB _at_ 0x2F1A;	// R/W 00H P3 De-bounce Enable Register
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
extern unsigned char xdata P3DB;
#endif

#ifdef MAIN
unsigned char xdata PSR0 _at_ 0x2F48;	// R/W 00H Port De-bounce selection register
unsigned char xdata PSR2 _at_ 0x2F4A;	// R/W 00H Analog I/O port selection register
unsigned char xdata PSR3 _at_ 0x2F4B;	// R/W 00H Analog I/O port selection register
#else
extern unsigned char xdata PSR0;
extern unsigned char xdata PSR2;
extern unsigned char xdata PSR3;
#endif

//------------------------------------------------------
// interrupt
sfr			IE			= 0xA8;		// R/W 00H Interrupt Enable Register
sfr			IE1			= 0xA9;		// R/W 00H Interrupt Enable Register 1
sfr			IE2			= 0xAA;		// R/W 00H Interrupt Enable Register 2
sfr			IE3			= 0xAB;		// R/W 00H Interrupt Enable Register 3
sfr			IP			= 0x92;		// R/W 00H Interrupt Priority Register
sfr			IPH			= 0x93;		// R/W 00H Interrupt Priority Register High
sfr			IP1			= 0x9A;		// R/W 00H Interrupt Priority Register 1
sfr			IP1H		= 0x9B;		// R/W 00H Interrupt Priority Register 1 High
sfr			IP2			= 0x9C;		// R/W 00H Interrupt Priority Register 2
sfr			IP2H		= 0x9D;		// R/W 00H Interrupt Priority Register 2 High
sfr			IP3			= 0x9E;		// R/W 00H Interrupt Priority Register 3
sfr			IP3H		= 0x9F;		// R/W 00H Interrupt Priority Register 3 High
sfr			EIENAB		= 0xA3;		// R/W 00H External Interrupt Enable Register
sfr			EIFLAG		= 0xA4;		// R/W 00H External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;		// R/W 00H External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;		// R/W 00H External Interrupt Polarity Register
sfr			EIBOTH		= 0xA7;		// R/W 00H External Interrupt Both Edge Enable Register
sfr			CIENAB		= 0xB1;		// R/W 00H Comparator Interrupt Enable Register
sfr			CIFLAG		= 0xAC;		// R/W 00H Comparator Interrupt Flag Register
sfr			CIEDGE		= 0xAD;		// R/W 00H Comparator Interrupt Edge Register
sfr			CIPOLA		= 0xAE;		// R/W 00H Comparator Interrupt Polarity Register
sfr			CIBOTH		= 0xAF;		// R/W 00H Comparator Interrupt Both Edge Enable Register
sfr			PCI			= 0x94;		// R/W 00H Pin Change Interrupt Enable register

//------------------------------------------------------
// clock generator
sfr			SCCR		= 0x8A;		// R/W 00H System and Clock Control register

//------------------------------------------------------
// Basic Interval Timer
sfr			BCCR		= 0x8B;		// R/W 05H BIT Clock Control Register
sfr			BITR		= 0x8C;		// R   00H Basic Interval Timer register

//------------------------------------------------------
// Watch-dog Timer
sfr			WDTR		= 0x8E;		// W   FFH Watch Dog Timer Register
sfr			WDTCR		= 0x8E;		// R   00H Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;		// R/W 00H Watch Dog Timer Mode register

//------------------------------------------------------
// Timer/PWM
sfr			T0CR		= 0xB2;		// R/W 00H Timer 0 Mode Control Register
sfr			T0CR1		= 0xB3;		// R/W 00H Timer 0 Mode Control Register 1
sfr			T0L			= 0xB4;		// R   00H Timer 0 Low Register
sfr			PWM0DRL		= 0xB4;		// R/W 00H PWM 0 Duty Register Low
sfr			CDR0L		= 0xB4;		// R   00H Timer 0 Capture Data Register Low
sfr			T0H			= 0xB5;		// R   00H Timer 0 Register High
sfr			PWM0DRH		= 0xB5;		// R/W 00H PWM 0 Duty Register High
sfr			CDR0H		= 0xB5;		// R   00H Timer 0 Capture Data Register High
sfr			T0DRL		= 0xB6;		// W   FFH Timer 0 Data Register Low
sfr			PWM0PRL		= 0xB6;		// W   FFH PWM 0 Period Register Low
sfr			T0DRH		= 0xB7;		// W   FFH Timer 0 Data Register High
sfr			PWM0PRH		= 0xB7;		// W   FFH PWM 0 Period Register High

sfr			T1CR		= 0xBA;		// R/W 00H Timer 1 Mode Control Register
sfr			T1CR1		= 0xBB;		// R/W 00H Timer 1 Mode Control Register 1
sfr			T1L			= 0xBC;		// R   00H Timer 1 Register Low
sfr			PWM1DRL		= 0xBC;		// R/W 00H PWM 1 Duty Register Low
sfr			CDR1L		= 0xBC;		// R   00H Timer 1 Capture Data Register Low
sfr			T1H			= 0xBD;		// R   00H Timer 1 Register High
sfr			PWM1DRH		= 0xBD;		// R/W 00H PWM 1 Duty Register High
sfr			CDR1H		= 0xBD;		// R   00H Timer 1 Capture Data Register High
sfr			T1DRL		= 0xBE;		// W   FFH Timer 1 Data Register Low
sfr			PWM1PRL		= 0xBE;		// W   FFH PWM 1 Period Register Low
sfr			T1DRH		= 0xBF;		// W   FFH Timer 1 Data Register High
sfr			PWM1PRH		= 0xBF;		// W   FFH PWM 1 Period Register High

sfr			T2CR		= 0xC2;		// R/W 00H Timer 2 Mode Control Register
sfr			T2CR1		= 0xC3;		// R/W 00H Timer 2 Mode Control Register 1
sfr			T2L			= 0xC4;		// R   00H Timer 2 Register Low
sfr			PWM2DRL		= 0xC4;		// R/W 00H PWM 2 Duty Register Low
sfr			CDR2L		= 0xC4;		// R   00H Timer 2 Capture Data Register Low
sfr			T2H			= 0xC5;		// R   00H Timer 2 Register High
sfr			PWM2DRH		= 0xC5;		// R/W 00H PWM 2 Duty Register High
sfr			CDR2H		= 0xC5;		// R   00H Timer 2 Capture Data Register High
sfr			T2DRL		= 0xC6;		// W   FFH Timer 2 Data Register Low
sfr			PWM2PRL		= 0xC6;		// W   FFH PWM 2 Period Register Low
sfr			T2DRH		= 0xC7;		// W   FFH Timer 2 Data Register High
sfr			PWM2PRH		= 0xC7;		// W   FFH PWM 2 Period Register High

sfr			T3CR		= 0xCA;		// R/W 00H Timer 3 Mode Control Register
sfr			T3CR1		= 0xCB;		// R/W 00H Timer 3 Mode Control Register 1
sfr			T3L			= 0xCC;		// R   00H Timer 3 Register Low
sfr			PWM3DRL		= 0xCC;		// R/W 00H PWM 3 Duty Register Low
sfr			CDR3L		= 0xCC;		// R   00H Timer 3 Capture Data Register Low
sfr			T3H			= 0xCD;		// R   00H Timer 3 Register High
sfr			PWM3DRH		= 0xCD;		// R/W 00H PWM 3 Duty Register High
sfr			CDR3H		= 0xCD;		// R   00H Timer 3 Capture Data Register High
sfr			T3DRL		= 0xCE;		// W   FFH Timer 3 Data Register Low
sfr			PWM3PRL		= 0xCE;		// W   FFH PWM 3 Period Register Low
sfr			T3DRH		= 0xCF;		// W   FFH Timer 3 Data Register High
sfr			PWM3PRH		= 0xCF;		// W   FFH PWM 3 Period Register High

//------------------------------------------------------
// Buzzer
sfr			BUZCR		= 0xEE;		// R/W 00H BUZZER Control Register
sfr			BUZDR		= 0xEF;		// R/W FFH BUZZER Data register

//------------------------------------------------------
// USART
sfr			UCTRL1		= 0xFA;		// R/W 00H USART Control 1 Register
sfr			UCTRL2		= 0xFB;		// R/W 00H USART Control 2 Register
sfr			UCTRL3		= 0xFC;		// R/W 00H USART Control 3 Register
sfr			USTAT		= 0xFD;		// R   80H USART Status Register
sfr			UBAUD		= 0xFE;		// R/W FFH USART Baud Rate Generation Register
sfr			UDATA		= 0xFF;		// R/W FFH USART Data register

//------------------------------------------------------
// I2C
sfr			I2CMR		= 0xDA;		// R/W 00H I2C Mode Control Register
sfr			I2CSR		= 0xDB;		// R   00H I2C Status Register
sfr			I2CSCLLR	= 0xDC;		// R/W 3FH SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;		// R/W 3FH SCL High Period Register
sfr			I2CSDAHR	= 0xDE;		// R/W 01H SDA Hold Time Register
sfr			I2CDR		= 0xDF;		// R/W FFH I2C Data Register
sfr			I2CSAR		= 0xD7;		// R/W 00H I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;		// R/W 00H I2C Slave Address Register 1

//------------------------------------------------------
// 12bit ADC
sfr			ADCM		= 0x95;		// R/W 8FH A/D Converter Mode Register
sfr			ADCRL		= 0x96;		// R   xxH A/D Converter Result High Register
sfr			ADCRH		= 0x97;		// R   xxH A/D Converter Result Low Register
sfr			ADCM1		= 0x96;		// R/W (STBY=1) 01H A/D Converter Mode 1 Register
									// W   (STBY=0) 01H A/D Converter Mode 1 register

//------------------------------------------------------
// PPG (Programmable Pulse Generator)
sfr			PPGCR		= 0xE2;		// R/W 00H PPG Control Register
sfr			PPGCR1		= 0xE3;		// R/W 00H PPG Control Register 1
sfr			PPGCR2		= 0xE1;		// R/W 00H PPG Control Register 2
sfr			PPGL		= 0xD3;		// R   00H PPG Counter Register Low
sfr			PPGCL		= 0xD3;		// R   00H PPG Capture Data Register Low
sfr			PPGH		= 0xD4;		// R   00H PPG Counter Register High
sfr			PPGCH		= 0xD4;		// R   00H PPG Capture Data Register High
sfr			PPGPWMDL	= 0xE4;		// R/W 00H PPG Duty Register Low
sfr			PPGPWMDH	= 0xE5;		// R/W 00H PPG Duty Register High
sfr			PPGPWMPL	= 0xE6;		// R/W FFH PPG Period Register Low
sfr			PPGPWMPH	= 0xE7;		// R/W FFH PPG Period Register High
sfr			PPGPMXH		= 0xD9;		// R/W FFH PPG Max Period Register High
sfr			PPGPMXL		= 0xD1;		// R/W FFH PPG Max Period Register Low
sfr			ATPCR		= 0xF9;		// R/W 00H Auto Period Mode Control Register
sfr			USTEP		= 0xC1;		// R/W 00H Auto Period Mode Up Step Register
sfr			DSTEP		= 0xC9;		// R/W 00H Auto Period Mode Down Step Register
sfr			ATPLR		= 0xE9;		// R   FFH Auto Period Mode Period Low Register
sfr			ATPHR		= 0xF1;		// R   FFH Auto Period Mode Period High Register
sfr			OFFCR		= 0xB9;		// R/W 00H PPG Off Time Control Register

#ifdef MAIN
unsigned char xdata ATPMAXLR _at_ 0x2F04;	// R/W 00H Auto Period Mode Max Period Low Register
unsigned char xdata ATPMAXHR _at_ 0x2F05;	// R/W 00H Auto Period Mode Max Period High Register
unsigned char xdata ATPMINLR _at_ 0x2F06;	// R/W 00H Auto Period Mode Min Period Low Register
unsigned char xdata ATPMINHR _at_ 0x2F07;	// R/W 00H Auto Period Mode Min Period High Register
unsigned char xdata OFFMAXLR _at_ 0x2F0C;	// R/W FFH PPG Off Time Max Period Low Register
unsigned char xdata OFFMAXHR _at_ 0x2F0D;	// R/W FFH PPG Off Time Max Period High Register
unsigned char xdata OFFMINLR _at_ 0x2F0E;	// R/W FFH PPG Off Time Min Period Low Register
unsigned char xdata OFFMINHR _at_ 0x2F0F;	// R/W FFH PPG Off Time Min Period High register
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

//------------------------------------------------------
// Analog Comparator & OP-AMP
sfr			CFENAB		= 0xD8;		// R/W 00H Comparator Flag Enable Register
sfr			CFFLAG		= 0xC8;		// R/W 00H Comparator Flag Register
sfr			CFEDGE		= 0xC0;		// R/W 00H Comparator Flag Edge Register
sfr			CFPOLA		= 0xB0;		// R/W 00H Comparator Flag Priority Register
sfr			CFBOTH		= 0xA0;		// R/W 00H Comparator Flag Both Edge Enable register

#ifdef MAIN
unsigned char xdata CA_REG0 _at_ 0x2F30;	// R/W 00H Comparator Amp Register 0
unsigned char xdata CA_REG1 _at_ 0x2F31;	// R/W 00H Comparator Amp Register 1
unsigned char xdata CA_REG2 _at_ 0x2F32;	// R/W 00H Comparator Amp Register 2
unsigned char xdata CA_REG3 _at_ 0x2F33;	// R/W 00H Comparator Amp Register 3
unsigned char xdata CA_REG4 _at_ 0x2F34;	// R/W 00H Comparator Amp Register 4
unsigned char xdata CA_REG5 _at_ 0x2F35;	// R/W 00H Comparator Amp Register 5
unsigned char xdata CA_REG6 _at_ 0x2F36;	// R/W 00H Comparator Amp Register 6
unsigned char xdata CA_REG7 _at_ 0x2F37;	// R/W 00H Comparator Amp Register 7
unsigned char xdata CA_REGA _at_ 0x2F3A;	// R/W 00H Comparator Amp Register A
unsigned char xdata CA_REGB _at_ 0x2F3B;	// R/W 00H Comparator Amp Register B
unsigned char xdata CA_REGC _at_ 0x2F3C;	// R/W 00H Comparator Amp Register C
#else
extern unsigned char xdata CA_REG0;
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

//------------------------------------------------------
// Power Down Operation
sfr			PCON		= 0x87;		// R/W 00H Power Control Register

//------------------------------------------------------
// Reset
sfr			RSFR		= 0x86;		// R/W 84H Reset Source Flag register
sfr			BODR		= 0x8F;		// R/W 00H BOD Control register

//------------------------------------------------------
// Flash
sfr			FEMR		= 0xEA;		// R/W 00H Flash Mode Register
sfr			FECR		= 0xEB;		// R/W 03H Flash Control Register
sfr			FESR		= 0xEC;		// R/W 80H Flash Status Register
sfr			FETCR		= 0xED;		// R/W 00H Flash Time Control Register
sfr			FEARL		= 0xF2;		// R/W 00H Flash Address Low Register
sfr			FEARM		= 0xF3;		// R/W 00H Flash Address Middle Register
sfr			FEARH		= 0xF4;		// R/W 00H Flash Address High Register
sfr			FEDR		= 0xF5;		// R/W 00H Flash Data register

#endif								//_MC97F6208_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
