//======================================================
//		device   : A96R717
//		version  : Ver1.0  
//		date     : 2016-08-03.Wed
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_A96R717_
#define		_A96R717_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;
sfr			P0IO		= 0xA1;			// P0 Direction Register
sfr			P0PU		= 0xDC;			// P0 Pull-up Resistor Selection Register
sfr			P0OD		= 0xD2;			// P0 Open-drain Selection Register
sfr			P0FSR		= 0xE9;			// Port 0 Function Selection Register

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;
sfr			P1IO		= 0xB1;			// P1 Direction Register
sfr			P1PU		= 0xDD;			// P1 Pull-up Resistor Selection Register
sfr			P1OD		= 0xD3;			// P1 Open-drain Selection Register
sfr			P1FSR		= 0xEA;			// Port 1 Function Selection Register

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;
sfr			P2IO		= 0xB9;			// P2 Direction Register
sfr			P2PU		= 0xDE;			// P2 Pull-up Resistor Selection Register
sfr			P2OD		= 0xD4;			// P2 Open-drain Selection Register
sfr			P2FSR		= 0xEB;			// Port 2 Function Selection Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;
sfr			P3IO		= 0xC1;			// P3 Direction Register
sfr			P3PU		= 0xDF;			// P3 Pull-up Resistor Selection Register
sfr			P3OD		= 0xD5;			// P3 Open-drain Selection Register
sfr			P36DB		= 0x94;			// P3/P6 Debounce Enable Register
sfr			P3FSRH		= 0xE6;			// P3 Function Selection High Register
sfr			P3FSRL		= 0xE7;			// P3 Function Selection Low Register

sfr			P4			= 0xA0;			// P4 Data Register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;
sfr			P4IO		= 0xC9;			// P4 Direction Register
sfr			P4PU		= 0xE2;			// P4 Pull-up Resistor Selection Register
sfr			P4OD		= 0xD6;			// P4 Open-drain Selection Register
sfr			P4DB		= 0x95;			// P4 Debounce Enable Register
sfr			P4FSRH		= 0xED;			// P4 Function Selection High Register
sfr			P4FSRL		= 0xEE;			// P4 Function Selection Low Register

// Interrupt
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0xB8;			// Interrupt Priority Register
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIFLAG0		= 0xA3;			// External Interrupt Flag 0 Register
sfr			EIPOL0		= 0xA4;			// External Interrupt Polarity 0 Register
sfr			EIFLAG1		= 0xA5;			// External Interrupt Flag 1 Register
sfr			EIPOL1L		= 0xA6;			// External Interrupt Polarity 1 Low Register
sfr			EIPOL1H		= 0xA7;			// External Interrupt Polarity 1 High Register

// System Oscillator, Reset
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register
sfr			XTFLSR		= 0xB7;			// X-tal Filter Selection Register
sfr			LIFSR		= 0xBF;			// LFIRC Frequency Selection register

// Basic Interval Timer
sfr			BITCR		= 0x8B;			// BIT Clock Control Register
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Register

// Watch Dog Timer
sfr			WDTDR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Mode Register

// Watch Timer
sfr			WTCR		= 0x96;			// Watch Timer Control Register
sfr			WTDR		= 0x89;			// Watch Timer Data Register
sfr			WTCNT		= 0x89;			// Watch Timer Counter Register

// TIMER 0
sfr			T0CR		= 0xB2;			// Timer 0 Control Register
sfr			T0CNT		= 0xB3;			// Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// Timer 0 Capture Data Register

// TIMER 1
sfr			T1CR		= 0xBA;			// Timer 1 Control Register
sfr			CARCR		= 0xBE;			// Carrier control Register
sfr			T1CNT		= 0xBB;			// Timer 1 Counter Register
sfr			T1DRH		= 0xBD;			// Timer 1 Data High Register
sfr			T1DRL		= 0xBC;			// Timer 1 Data Low register

// TIMER 2
sfr			T2CRH		= 0xC3;			// Timer 2 Control High Register
sfr			T2CRL		= 0xC2;			// Timer 2 Control Low Register
sfr			T2ADRH		= 0xC5;			// Timer 2 A Data High Register
sfr			T2ADRL		= 0xC4;			// Timer 2 A Data Low Register
sfr			T2BDRH		= 0xC7;			// Timer 2 B Data High Register
sfr			T2BDRL		= 0xC6;			// Timer 2 B Data Low Register

// TIMER 3
sfr			T3CRH		= 0xCB;			// Timer 3 Control High Register
sfr			T3CRL		= 0xCA;			// Timer 3 Control Low Register
sfr			T3ADRH		= 0xCD;			// Timer 3 A Data High Register
sfr			T3ADRL		= 0xCC;			// Timer 3 A Data Low Register
sfr			T3BDRH		= 0xCF;			// Timer 3 B Data High Register
sfr			T3BDRL		= 0xCE;			// Timer 3 B Data Low Register

// BUZZER
sfr			BUZDR		= 0x8F;			// BUZZER Data Register
sfr			BUZCR		= 0x97;			// BUZZER Control Register

// ADC
sfr			ADCCRH		= 0x9D;			// A/D Converter Control High Register
sfr			ADCCRL		= 0x9C;			// A/D Converter Control Low Register
sfr			ADCDRH		= 0x9F;			// A/D Converter Data High Register
sfr			ADCDRL		= 0x9E;			// A/D Converter Data Low Register

// USART
sfr			UARTCR1		= 0xF2;			// UART Control Register 1
sfr			UARTCR2		= 0xF3;			// UART Control Register 2
sfr			UARTCR3		= 0xF4;			// UART Control Register 3
sfr			UARTST		= 0xF5;			// UART Status Register
sfr			UARTBD		= 0xF6;			// UART Baud Rate Generation Register
sfr			UARTDR		= 0xF7;			// UART Data Register

// LCD COntrol
sfr			LCDCRL		= 0x99;			// LCD Driver Control Low Register
sfr			LCDCRH		= 0x9A;			// LCD Driver Control High Register
sfr			LCDCCR		= 0x9B;			// LCD Contrast Control Register

// Flash Memory Control
sfr			FSADRH		= 0xFA;			// Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// Flash Identification Register
sfr			FMCR		= 0xFE;			// Flash Mode Control Register

// Miscellany
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_A96R717_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
