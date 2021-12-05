//======================================================
//	file name: MC96FM408.h
//	device   : MC96FM408/308 (44, 32pin)
//	version  : Ver1.0  
//	date     : 2015-10-15
//	compiler : Keil-C
//	author   : ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_MC96FM408_
#define		_MC96FM408_

//------------------------------------------------------ 0x80
sfr			P0			= 0x80;		// RW : P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			SP			= 0x81;		// RW : Stack Pointer
sfr			DPL			= 0x82;		// RW : Data Pointer Register Low
sfr			DPH			= 0x83;		// RW : Data Pointer Register High
sfr			DPL1		= 0x84;		// RW : Data Pointer Register Low 1
sfr			DPH1		= 0x85;		// RW : Data Pointer Register High 1
sfr			LVICR		= 0x86;		// RW : Low Voltage Indicator Control Register
sfr			PCON		= 0x87;		// RW : Power Control Register
//------------------------------------------------------ 0x88
sfr			P1			= 0x88;		// RW : P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			WTDR		= 0x89;		// W  : Watch Timer Data Register
sfr			WTCNT		= 0x89;		// R  : Watch Timer Counter Register
sfr			SCCR		= 0x8A;		// RW : System and Clock Control Register
sfr			BITCR		= 0x8B;		// RW : BIT Control Register
sfr			BITCNT		= 0x8C;		// R  : Basic Interval Timer Counter Register
sfr			WDTCR		= 0x8D;		// RW : Watch Dog Timer Control Register
sfr			WDTDR		= 0x8E;		// W  : Watch Dog Timer Data Register
sfr			WDTCNT		= 0x8E;		// R  : Watch Dog Timer Counter Register
//----------------------------------------------------- 0x90          
sfr			P2			= 0x90;		// RW : P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P1OD		= 0x91;		// RW : P1 Open-drain Selection Register
sfr			P2OD		= 0x92;		// RW : P2 Open-drain Selection Register
sfr			P3OD		= 0x93;		// RW : P3 Open-drain Selection Register
sfr			P4OD		= 0x94;		// RW : P4 Open-drain Selection Register

sfr			WTCR		= 0x96;		// RW : Watch Timer Control Register
//----------------------------------------------------- 0x98                                                     
sfr			P3			= 0x98;		// RW : P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			LCDCCR		= 0x99;		// RW : LCD Driver Contrast Control Register
sfr			LCDCRL		= 0x9A;		// RW : LCD Driver Control Low Register
sfr			LCDCRH		= 0x9B;		// RW : LCD Driver Control High Register
//----------------------------------------------------- 0xA0                                                                   
sfr			P4			= 0xA0;		// RW : P4 Data Register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;

sfr			P0IO		= 0xA1;		// RW : P0 Direction Register
sfr			EO			= 0xA2;		// RW : Extended Operation Register

sfr			EIPOL0L		= 0xA4;		// RW : External Interrupt Polarity 0 Low Register
sfr			EIPOL0H		= 0xA5;		// RW : External Interrupt Polarity 0 High Register
sfr			EIFLAG1		= 0xA6;		// RW : External Interrupt Flag Register 1
sfr			EIPOL1		= 0xA7;		// RW : External Interrupt Polarity Register 1
//----------------------------------------------------- 0xA8
sfr			IE			= 0xA8;		// RW : Interrupt Enable Register
sfr			IE1			= 0xA9;		// RW : Interrupt Enable Register 1
sfr			IE2			= 0xAA;		// RW : Interrupt Enable Register 2
sfr			IE3			= 0xAB;		// RW : Interrupt Enable Register 3
//----------------------------------------------------- 0xB0
sfr			P5			= 0xB0;		// RW : P5 Data Register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;

sfr			P1IO		= 0xB1;		// RW : P1 Direction Register
sfr			P1DB		= 0xB2;		// RW : P1 Debounce Enable Register
sfr			P4DB		= 0xB3;		// RW : P4 Debounce Enable Register

sfr			SPICR		= 0xB5;		// RW : SPI Control Register
sfr			SPIDR		= 0xB6;		// RW : SPI Data Register
sfr			SPISR		= 0xB7;		// RW : SPI Status Register
//----------------------------------------------------- 0xB8
sfr			IP			= 0xB8;		// RW : Interrupt Priority Register
sfr			P2IO		= 0xB9;		// RW : P2 Direction Register
sfr			T0CRL		= 0xBA;		// RW : Timer 0 Control Low Register
sfr			T0CRH		= 0xBB;		// RW : Timer 0 Control High Register
sfr			T0ADRL		= 0xBC;		// RW : Timer 0 A Data Low Register
sfr			T0ADRH		= 0xBD;		// RW : Timer 0 A Data High Register
sfr			T0BDRL		= 0xBE;		// RW : Timer 0 B Data Low Register
sfr			T0BDRH		= 0xBF;		// RW : Timer 0 B Data High Register
//----------------------------------------------------- 0xC0
sfr			EIFLAG0		= 0xC0;		// RW : External Interrupt Flag Register 0
sfr			P3IO		= 0xC1;		// RW : P3 Direction Register
sfr			T1CRL		= 0xC2;		// RW : Timer 1 Control Low Register
sfr			T1CRH		= 0xC3;		// RW : Timer 1 Control High Register
sfr			T1ADRL		= 0xC4;		// RW : Timer 1 A Data Low Register
sfr			T1ADRH		= 0xC5;		// RW : Timer 1 A Data High Register
sfr			T1BDRL		= 0xC6;		// RW : Timer 1 B Data Low Register
sfr			T1BDRH		= 0xC7;		// RW : Timer 1 B Data High Register

//----------------------------------------------------- 0xC8
sfr			OSCCR		= 0xC8;		// RW : Oscillator Control Register
sfr			P4IO		= 0xC9;		// RW : P4 Direction Register
sfr			T2CRL		= 0xCA;		// RW : Timer 2 Control Low Register
sfr			T2CRH		= 0xCB;		// RW : Timer 2 Control High Register
sfr			T2ADRL		= 0xCC;		// RW : Timer 2 A Data Low Register
sfr			T2ADRH		= 0xCD;		// RW : Timer 2 A Data High Register
sfr			T2BDRL		= 0xCE;		// RW : Timer 2 B Data Low Register
sfr			T2BDRH		= 0xCF;		// RW : Timer 2 B Data High Register
//----------------------------------------------------- 0xD0
sfr			PSW			= 0xD0;		// RW : Program Status Word Register
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;

sfr			P5IO		= 0xD1;		// RW : P5 Direction Register
sfr			P0PU		= 0xD2;		// RW : P0 Pull-up Resistor Selection Register
sfr			P1PU		= 0xD3;		// RW : P1 Pull-up Resistor Selection Register
sfr			P2PU		= 0xD4;		// RW : P2 Pull-up Resistor Selection Register
sfr			P3PU		= 0xD5;		// RW : P3 Pull-up Resistor Selection Register
sfr			P4PU		= 0xD6;		// RW : P4 Pull-up Resistor Selection Register
sfr			P5PU		= 0xD7;		// RW : P5 Pull-up Resistor Selection Register
//----------------------------------------------------- 0xD8
sfr			LVRCR		= 0xD8;		// RW : Low Voltage Reset Control Register
sfr			P0FSR		= 0xD9;		// RW : P0 Function Selection Register
sfr			P1FSRL		= 0xDA;		// RW : P1 Function Selection Low Register
sfr			P1FSRH		= 0xDB;		// RW : P1 Function Selection High Register
sfr			P2FSR		= 0xDC;		// RW : P2 Function Selection Register
sfr			P3FSR		= 0xDD;		// RW : P3 Function Selection Register
sfr			P4FSR		= 0xDE;		// RW : P4 Function Selection Register
sfr			P5FSR		= 0xDF;		// RW : P5 Function Selection Register
//----------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;		// RW : Accumulator A Register

sfr			UARTCR1		= 0xE2;		// RW : UART Control Register 1
sfr			UARTCR2		= 0xE3;		// RW : UART Control Register 2
sfr			UARTCR3		= 0xE4;		// RW : UART Control Register 3
sfr			UARTST		= 0xE5;		// RW : UART Status Register
sfr			UARTBD		= 0xE6;		// RW : UART Baud Rate Generation Register
sfr			UARTDR		= 0xE7;		// RW : UART Data Register
//----------------------------------------------------- 0xE8
sfr			RSTFR		= 0xE8;		// RW : Reset Flag Register

sfr			PGACR		= 0xEA;		// RW : Programmable Gain Amplifier Control Register
sfr			REGCR		= 0xEB;		// RW : Regulator Control Register
sfr			CHOPS0		= 0xEC;		// RW : Chopper Clock Prescaler Register 0
sfr			CHOPS1		= 0xED;		// RW : Chopper Clock Prescaler Register 1
//----------------------------------------------------- 0xF0
sfr			B			= 0xF0;		// RW : B Register
sfr			ADCPS		= 0xF1;		// RW : A/D Converter Prescaler Register
sfr			ADCCRL		= 0xF2;		// RW : A/D Converter Control Low Register
sfr			ADCCRH		= 0xF3;		// RW : A/D Converter Control High Register
sfr			ADCDR0		= 0xF4;		// R  : A/D Converter Data Register 0
sfr			ADCDR1		= 0xF5;		// R  : A/D Converter Data Register 1
sfr			ADCDR2		= 0xF6;		// R  : A/D Converter Data Register 2
sfr			ADCDR3		= 0xF7;		// R  : A/D Converter Data Register 3
//----------------------------------------------------- 0xF8
sfr			IP1			= 0xF8;		// RW : Interrupt Priority Register 1

sfr			FSADRH		= 0xFA;		// RW : Flash Sector Address High Register
sfr			FSADRM		= 0xFB;		// RW : Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;		// RW : Flash Sector Address Low Register
sfr			FIDR		= 0xFD;		// RW : Flash Identification Register
sfr			FMCR		= 0xFE;		// RW : Flash Mode Control Register
//------------------------------------------------------ 0xF8
#endif								//_MC96FM408_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
