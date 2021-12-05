//======================================================
//	file name: MC96F7616A.h
//	device   : MC96F7616A(64 pin)
//	version  : Ver1.0  
//	date     : 2012-10-15
//	compiler : Keil-C
//	author   : Ma, Nakwon
//
//	Difference between MC96F7816 and MC96F7616A.
//	 - P00,P01,P02,P04,P05,P06,P31,P32,P5 is removed.
//	 - EINT12,EINT8,EC2,SIO is removed.
//	 - T2O/PWM20,T3O/PWM30 is removed.
//======================================================

#include	<intrins.h>

#ifndef		_MC96F7616A_
#define		_MC96F7616A_

//======================================================
// PORT Control Register
//======================================================
// PORT0
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
sfr			P0OD		= 0xD2;			// P0 Open-drain Selection Register
sfr			P0PU		= 0xDC;			// P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0x94;			// P0 Debounce Enable Register

// PORT1
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
sfr			P1OD		= 0xD3;			// P1 Open-drain Selection Register
sfr			P1PU		= 0xDD;			// P1 Pull-up Resistor Selection Register
sfr			P1DB		= 0x95;			// P1 Debounce Enable Register

// PORT2
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
sfr			P2OD		= 0xD4;			// P2 Open-drain Selection Register
sfr			P2PU		= 0xDE;			// P2 Pull-up Resistor Selection Register

// PORT3
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
sfr			P3OD		= 0xD5;			// P3 Open-drain Selection Register
sfr			P3PU		= 0xDF;			// P3 Pull-up Resistor Selection Register

// PORT4
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
sfr			P4OD		= 0xD6;			// P4 Open-drain Selection Register
sfr			P4PU		= 0xE2;			// P4 Pull-up Resistor Selection Register

// PORT5
sfr			P5			= 0xB0;			// P5 Data Register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;

sfr			P5IO		= 0xD1;			// P5 Direction Register
sfr			P5OD		= 0xD7;			// P5 Open-drain Selection Register
sfr			P5PU		= 0xE3;			// P5 Pull-up Resistor Selection Register

// PORT6
sfr			P6			= 0x91;			// P6 Data Register
sfr			P6IO		= 0xD9;			// P6 Direction Register
sfr			P6OD		= 0xDA;			// P6 Open-drain Selection Register
sfr			P6PU		= 0xE4;			// P6 Pull-up Resistor Selection Register

// PORT7
sfr			P7			= 0x92;			// P7 Data Register
sfr			P7IO		= 0xE1;			// P7 Direction Register
sfr			P7PU		= 0xE5;			// P7 Pull-up Resistor Selection Register

// PORT8
sfr			P8			= 0x93;			// P8 Data Register
sfr			P8IO		= 0xE9;			// P8 Direction Register
sfr			P8PU		= 0xE6;			// P8 Pull-up Resistor Selection Register

// PORT9
sfr			P9			= 0xC0;			// P9 Data Register
	sbit	P90			= 0xC0;
	sbit	P91			= 0xC1;
	sbit	P92			= 0xC2;
	sbit	P93			= 0xC3;
	sbit	P94			= 0xC4;
	sbit	P95			= 0xC5;
	sbit	P96			= 0xC6;
	sbit	P97			= 0xC7;
sfr			P9IO		= 0xF1;			// P6 Direction Register
sfr			P9OD		= 0xDB;			// P6 Open-drain Selection Register
sfr			P9PU		= 0xE7;			// P6 Pull-up Resistor Selection Register

sfr			P03FSR		= 0xEA;			//Port Function Selection Register 0,3
sfr			P1FSR		= 0xEB;			//Port Function Selection Register 1
sfr			P2FSR		= 0xEC;			//Port Function Selection Register 2
sfr			P4FSR		= 0xED;			//Port Function Selection Register 4
sfr			P5FSR		= 0xEE;			//Port Function Selection Register 3
sfr			P6FSR		= 0xEF;			//Port Function Selection Register 6
sfr			P7FSR		= 0xAD;			//Port Function Selection Register 7
sfr			P8FSR		= 0xAE;			//Port Function Selection Register 8
sfr			P9FSR		= 0xAF;			//Port Function Selection Register 9

//======================================================
// System Oscillator, Reset Control
//======================================================
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// BIT Clock Control Register
sfr			RSTFR		= 0xE8;			// Reset Flag Register
sfr			PCON		= 0x87;			// Power Control Register
sfr			LVRCR		= 0xD8;			// Low Voltage Reset Control Register
sfr			LVICR		= 0x86;			// Low Voltage Indicator Control Register

//======================================================
//  Watch Dog Timer Control 
//======================================================
sfr			WDTDR		= 0x8E;			// Watch Dog Timer Data Register
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control Register

//======================================================
//  Watch Timer Control
//======================================================
sfr			WTDR		= 0x89;			// Watch Timer Data Register
sfr			WTCNT		= 0x89;			// Watch Timer Counter Register
sfr			WTCR		= 0x96;			// Watch Timer Control Register

//======================================================
// Interrupt Control
//======================================================
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIFLAG0		= 0xA3;			// External Interrupt Flag Register 0
sfr			EIPOL0		= 0xA4;			// External Interrupt Polarity Register 0
sfr			EIFLAG1		= 0xA5;			// External Interrupt Flag Register 1
sfr			EIPOL1L		= 0xA6;
sfr			EIPOL1H		= 0xA7;

//======================================================
// Timer
//======================================================
// TIMER 0 Control
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0CNT		= 0xB3;			// Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// Timer 0 Capture Data Register

// TIMER 1 Control
sfr			T1CR		= 0xBA;			// Timer 1 Control Register
sfr			T1CNT		= 0xBB;			// Timer 1 Counter Register
sfr			T1DRL		= 0xBC;			// Timer 1 Data Low Register
sfr			T1DRH		= 0xBD;			// Timer 1 Data High Register
sfr			CARCR		= 0xBE;			// Carrier Control Register

// TIMER 2 Control
sfr			T2CRL		= 0xC2;
sfr			T2CRH		= 0xC3;
sfr			T2ADRL		= 0xC4;
sfr			T2ADRH		= 0xC5;
sfr			T2BDRL		= 0xC6;
sfr			T2BDRH		= 0xC7;

// TIMER 3 Control
sfr			T3CRL		= 0xCA;
sfr			T3CRH		= 0xCB;
sfr			T3ADRL		= 0xCC;
sfr			T3ADRH		= 0xCD;
sfr			T3BDRL		= 0xCE;
sfr			T3BDRH		= 0xCF;

//======================================================
// BUZZER Control
//======================================================
sfr			BUZCR		= 0x97;			// BUZZER Control Register
sfr			BUZDR		= 0x8F;			// BUZZER Data Register

//======================================================
// SPI(SIO) Control
//======================================================
//sfr		SIOCR		= 0xB5;			// SIO Control Register
//sfr		SIODR		= 0xB6;			// SIO Data Register
//sfr		SIOPS		= 0xB7;			// SIO Pre-scaler Register

//======================================================
// ADC Contol
//======================================================
sfr			ADCCRL		= 0x9C;			// A/D Converter Control Low Register
sfr			ADCCRH		= 0x9D;			// A/D Converter Control High Register
sfr			ADCDRL		= 0x9E;			// A/D Converter Data Low Register
sfr			ADCDRH		= 0x9F;			// A/D Converter Data High Register

//======================================================
// UART Control
//======================================================
sfr			UARTCR1		= 0xF2;			// UART Control Register 1
sfr			UARTCR2		= 0xF3;			// UART Control Register 2
sfr			UARTCR3		= 0xF4;			// UART Control Register 3
sfr			UARTST		= 0xF5;			// UART Status Register
sfr			UARTBD		= 0xF6;			// UART BaudRate Register
sfr			UARTDR		= 0xF7;			// UART Data Register

//======================================================
// LCD COntrol
//======================================================
sfr			LCDCRL		= 0x99;			// LCD Driver Control Low Register
sfr			LCDCRH		= 0x9A;			// LCD Driver Control High Register
sfr			LCDCCR		= 0x9B;			// LCD Driver Control High Register

//======================================================
// Flash Memory Control
//======================================================
sfr			FSADRH		= 0xFA;			// Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// Flash Identification Register
sfr			FMCR		= 0xFE;			// Flash Mode Control Register

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

#endif													//_MC96F7616A_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
