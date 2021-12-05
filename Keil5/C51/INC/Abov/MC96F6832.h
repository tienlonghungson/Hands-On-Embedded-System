//======================================================
//	file name	: MC96F6832.h
//	device		: MC96F6832(80 pin)
//	version		: Ver1.0  
//	date		: 2010-01-05
//	author		: Ma, Nakwon
//======================================================

#include	<intrins.h>

#ifndef		_MC96F6832_
#define		_MC96F6832_

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

sfr			P0IO		= 0x89;			// P0 Direction Register
sfr			P0OD		= 0x92;			// P0 Open-drain Selection Register
sfr			P0PU		= 0xD4;			// P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0xE9;			// P0 Debounce Enable Register

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

sfr			P1IO		= 0x91;			// P1 Direction Register
sfr			P1OD		= 0x93;			// P1 Open-drain Selection Register
sfr			P1PU		= 0xD5;			// P1 Pull-up Resistor Selection Register
sfr			P1DB		= 0xEA;			// P1 Debounce Enable Register

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

sfr			P2IO		= 0x99;			// P2 Direction Register
sfr			P2OD		= 0x94;			// P2 Open-drain Selection Register
sfr			P2PU		= 0xD6;			// P2 Pull-up Resistor Selection Register

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

sfr			P3IO		= 0xA1;			// P3 Direction Register
sfr			P3OD		= 0x95;			// P3 Open-drain Selection Register
sfr			P3PU		= 0xD7;			// P3 Pull-up Resistor Selection Register

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

sfr			P4IO		= 0xB1;			// P4 Direction Register
sfr			P4OD		= 0x96;			// P4 Open-drain Selection Register
sfr			P4PU		= 0xDA;			// P4 Pull-up Resistor Selection Register

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

sfr			P5IO		= 0xB9;			// P5 Direction Register
sfr			P5OD		= 0xA7;			// P5 Open-drain Selection Register
sfr			P5PU		= 0xDB;			// P5 Pull-up Resistor Selection Register

// PORT6
sfr			P6			= 0xC0;			// P6 Data Register
	sbit	P60			= 0xC0;
	sbit	P61			= 0xC1;
	sbit	P62			= 0xC2;
	sbit	P63			= 0xC3;
	sbit	P64			= 0xC4;
	sbit	P65			= 0xC5;
	sbit	P66			= 0xC6;
	sbit	P67			= 0xC7;

sfr			P6IO		= 0xC1;			// P6 Direction Register
sfr			P6OD		= 0xBB;			// P6 Open-drain Selection Register
sfr			P6PU		= 0xDC;			// P6 Pull-up Resistor Selection Register

// PORT7
sfr			P7			= 0xC8;			// P7 Data Register
	sbit	P70			= 0xC8;
	sbit	P71			= 0xC9;
	sbit	P72			= 0xCA;
	sbit	P73			= 0xCB;
	sbit	P74			= 0xCC;
	sbit	P75			= 0xCD;
	sbit	P76			= 0xCE;
	sbit	P77			= 0xCF;

sfr			P7IO		= 0xC9;			// P7 Direction Register
sfr			P7OD		= 0xCF;			// P7 Open-drain Selection Register
sfr			P7PU		= 0xDD;			// P7 Pull-up Resistor Selection Register

// PORT8
sfr			P8			= 0xD8;			// P8 Data Register
	sbit	P80			= 0xD8;
	sbit	P81			= 0xD9;
	sbit	P82			= 0xDA;
	sbit	P83			= 0xDB;
	sbit	P84			= 0xDC;
	sbit	P85			= 0xDD;
	sbit	P86			= 0xDE;
	sbit	P87			= 0xDF;

sfr			P8IO		= 0xD1;			// P8 Direction Register
sfr			P8OD		= 0xD2;			// P8 Open-drain Selection Register
sfr			P8PU		= 0xDE;			// P8 Pull-up Resistor Selection Register

// PORT9
sfr			P9CDR		= 0xE8;			// P9 Control and Data Register
	sbit	P9CDR0		= 0xE8;
	sbit	P9CDR1		= 0xE9;
	sbit	P9CDR2		= 0xEA;
	sbit	P9CDR3		= 0xEB;
	sbit	P9CDR4		= 0xEC;
	sbit	P9CDR5		= 0xED;
	sbit	P9CDR6		= 0xEE;
	sbit	P9CDR7		= 0xEF;

sfr			PFSR0		= 0xED;			//Port Function Selection Register 0
sfr			PFSR1		= 0xEE;			//Port Function Selection Register 1
sfr			PFSR2		= 0xEF;			//Port Function Selection Register 2
sfr			PFSR3		= 0xF1;			//Port Function Selection Register 3
sfr			PFSR4		= 0xF2;			//Port Function Selection Register 4
sfr			PFSR5		= 0xF3;			//Port Function Selection Register 3
sfr			PFSR6		= 0xF4;			//Port Function Selection Register 6
sfr			PFSR7		= 0xF5;			//Port Function Selection Register 7
sfr			PFSR8		= 0xF6;			//Port Function Selection Register 8

//======================================================
// System Oscillator, Reset Control
//======================================================
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xD9;			// Oscillator Control Register
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// BIT Clock Control Register
sfr			RSTFR		= 0x86;			// Reset Flag Register
sfr			PCON		= 0x87;			// Power Control Register
sfr			LVRCR		= 0xF7;			// Low Voltage Reset Control Register
sfr			LVICR		= 0xE1;			// Low Voltage Indicator Control Register

//======================================================
//  Watch Dog Timer Control 
//======================================================
sfr			WDTDR		= 0x8E;			// Watch Dog Timer Data Register
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control Register

//======================================================
//  Watch Timer Control
//======================================================
sfr			WTDR		= 0x9F;			// Watch Timer Data Register
sfr			WTCNT		= 0x9F;			// Watch Timer Counter Register
sfr			WTCR		= 0x9E;			// Watch Timer Control Register

//======================================================
// Interrupt Control
//======================================================
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIENAB0		= 0xAC;			// External Interrupt Enable Register 0
sfr			EIFLAG0		= 0xAD;			// External Interrupt Flag Register 0
sfr			EIEDGE0		= 0xAE;			// Interrupt Edge Register 0
sfr			EIPOL0		= 0xAF;			// External Interrupt Polarity Register 0
sfr			EIENAB1		= 0xA3;			// External Interrupt Enable Register 1
sfr			EIFLAG1		= 0xA4;			// External Interrupt Flag Register 1
sfr			EIEDGE1		= 0xA5;			// Interrupt Edge Register 1
sfr			EIPOL1		= 0xA6;			// External Interrupt Polarity Register 1

//======================================================
// Timer
//======================================================
// TIMER 0 Control
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0CNT		= 0xB3;			// Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// Timer 0 Capture Data Register

// TIMER 1 Control
sfr			T1CR		= 0xCA;			// Timer 1 Control Register
sfr			T1CNT		= 0xCB;			// Timer 1 Counter Register
sfr			T1DRL		= 0xCC;			// Timer 1 Data Low Register
sfr			T1DRH		= 0xCD;			// Timer 1 Data High Register
sfr			CARCR		= 0xCE;			// Carrier Control Register

// TIMER 2 Control
sfr			T2CR		= 0xBA;			// Timer 2 Control Register
sfr			T2CNTL		= 0xBC;			// Timer 2 Counter Low Register
sfr			T2CNTH		= 0xBD;			// Timer 2 Counter High Register
sfr			T2DRL		= 0xBE;			// Timer 2 Data Low Register
sfr			T2DRH		= 0xBF;			// Timer 2 Data High Register

// TIMER 3 Control
sfr			T3CR		= 0xC2;			// Timer 3 Control Register
sfr			TIFR		= 0xC3;			// Timer Interrupt Flag Register
sfr			T3CNTL		= 0xC4;			// Timer 3 Counter Low Register
sfr			T3CNTH		= 0xC5;			// Timer 3 Counter High Register
sfr			T3DRL		= 0xC6;			// Timer 3 Data Low Register
sfr			T3DRH		= 0xC7;			// Timer 3 Data High Register
sfr			T3CDRL		= 0xC6;			// Timer 3 Capture Data Low Register
sfr			T3CDRH		= 0xC7;			// Timer 3 Capture Data High Register

//======================================================
// BUZZER Control
//======================================================
sfr			BUZCR		= 0x97;			// BUZZER Control Register
sfr			BUZDR		= 0x8F;			// BUZZER Data Register

//======================================================
// SPI(SIO) Control
//======================================================
sfr			SIOCR		= 0xB5;			// SIO Control Register
sfr			SIODR		= 0xB6;			// SIO Data Register
sfr			SIOPS		= 0xB7;			// SIO Pre-scaler Register

//======================================================
// ADC Contol
//======================================================
sfr			ADCCRL		= 0x9A;			// A/D Converter Control Low Register
sfr			ADCCRH		= 0x9D;			// A/D Converter Control High Register
sfr			ADCDRL		= 0x9B;			// A/D Converter Data Low Register
sfr			ADCDRH		= 0x9C;			// A/D Converter Data High Register

//======================================================
// UART Control
//======================================================
sfr			UARTCR1		= 0xE2;			// UART Control Register 1
sfr			UARTCR2		= 0xE3;			// UART Control Register 2
sfr			UARTCR3		= 0xE4;			// UART Control Register 3
sfr			UARTST		= 0xE5;			// UART Status Register
sfr			UARTBD		= 0xE6;			// UART BaudRate Register
sfr			UARTDR		= 0xE7;			// UART Data Register

//======================================================
// LCD Control
//======================================================
sfr			LCDCRL		= 0xEB;			// LCD Driver Control Low Register
sfr			LCDCRH		= 0xEC;			// LCD Driver Control High Register

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

#endif	//_MC96F6832_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
