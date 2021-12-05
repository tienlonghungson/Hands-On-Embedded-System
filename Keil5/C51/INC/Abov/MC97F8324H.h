//======================================================
//		device   : MC97F8324H(32 pin)
//		version  : Ver1.0  
//		date     : 2015-04-14
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC97F8324H_
#define		_MC97F8324H_

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
sfr			P0OD		= 0xB1;			// P0 Open-drain Selection Register
sfr			P0PU		= 0xC9;			// P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0xD2;			// P0 Debounce Enable Register

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
sfr			P1OD		= 0xB9;			// P1 Open-drain Selection Register
sfr			P1DB		= 0xD3;			// P1 Debounce Enable Register

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
sfr			P2OD		= 0xC1;			// P2 Open-drain Selection Register
sfr			P2PU		= 0xC8;			// P2 Pull-up Resistor Selection Register
sfr			P2DB		= 0xD4;			// P2 Debounce Enable Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			P3IO		= 0xDA;			// P3 Direction Register
sfr			P3DB		= 0xDC;			// P3 Debounce Enable Register

sfr			P4			= 0xA0;			// P4 Data Register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;

sfr			P4IO		= 0xE2;			// P4 Direction Register
sfr			P4OD		= 0xE5;			// P4 Open-drain Selection Register
sfr			P4PU		= 0xE3;			// P4 Pull-up Resistor Selection Register
sfr			P4DB		= 0xE4;			// P4 Debounce Enable Register

sfr			PSR0		= 0xD9;			// Port Debounce Selection Register
sfr			PSR1		= 0xE9;			// Current Source Control Register
sfr			PSR2		= 0xA1;			// Digital Input Port Selection Register
sfr			PSR3		= 0xE1;			// Digital Input Port Selection register

// Interrupt
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IP			= 0x92;			// Interrupt Priority Register
sfr			IPH			= 0x93;			// Interrupt Priority Register High
sfr			IP1			= 0x9A;			// Interrupt Priority Register 1
sfr			IP1H		= 0x9B;			// Interrupt Priority Register 1 High
sfr			IP2			= 0x9C;			// Interrupt Priority Register 2
sfr			IP2H		= 0x9D;			// Interrupt Priority Register 2 High
sfr			EIENAB		= 0xA3;			// External Interrupt Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;			// External Interrupt Polarity Register
sfr			EIBOTH		= 0xA7;			// External Interrupt Both Edge Enable Register
sfr			PCI			= 0x9F;			// Pin Change Interrupt Enable Register

// System Oscillator, Reset
sfr			SCCR		= 0x8A;			// System Clock Control Register

// Basic Interval TImer
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Basic Interval Timer Register

//  Watch Dog Timer
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

// TIMER 0
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

// TIMER 1
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

// TIMER 2
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

// USART
sfr			UCTRL1		= 0xFA;			// USART Control 1 Register
sfr			UCTRL2		= 0xFB;			// USART Control 2 Register
sfr			UCTRL3		= 0xFC;			// USART Control 3 Register
sfr			USTAT		= 0xFD;			// USART Status Register
sfr			UBAUD		= 0xFE;			// USART Baud Rate Generation Register
sfr			UDATA		= 0xFF;			// USART Data Register

// ADC
sfr			ADCM		= 0x94;			// A/D Converter Mode Register
sfr			ADCM1		= 0x95;			// A/D Converter Mode 1 Register
sfr			ADCRL		= 0x96;			// A/D Converter Result Low Register
sfr			ADCRH		= 0x97;			// A/D Converter Result High Register

// Protection
sfr			PTTCTRL		= 0xCB;			// Protection Control
sfr			ZNPT_MODE	= 0xB8;			// Non-Zero Protection Mode
sfr			MCSTATUS	= 0xAB;			// MCF8014 Status Register
sfr			ZNPTCTRL	= 0xB0;			// No Zero Protection Control
sfr			ZNPT_DLY	= 0xC0;			// Non-Zero Protection Delay Control Register
sfr			ZNPT_LMT	= 0x9E;			// Non-Zero Protection Limit Control Register
sfr			PTTRST		= 0xCC;			// Protection Reset Register
sfr			WPTT_LMT	= 0xCD;			// Watch Dog Count Protection Time Limit

// Flick
sfr			FLICK_CTRL	= 0xDDH;		// FLICK Control Register
sfr			FLICKCNTHI	= 0xCAH;		// FLICK Count High Register
sfr			FLICKCNTLO	= 0xD5H;		// FLICK Count Low Register

// BUZZER
sfr			BUZCR		= 0xCF;			// BUZZER Control Register
sfr			BUZDR		= 0xCE;			// BUZZER Data Register

// Power down operation
sfr			PCON		= 0x87;			// Power Control Register

// Brown Out Detector
sfr			RSFR		= 0x86			// Reset Source Flag Register
sfr			BODR		= 0x8F			// BOD Control register

// Flash Memory Control
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FEARL		= 0xF2;			// Flash Address Low Register
sfr			FEARM		= 0xF3;			// Flash Address Middle Register
sfr			FEARH		= 0xF4;			// Flash Address High Register
sfr			FEDR		= 0xF5;			// Flash Data Register

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

#endif	//_MC97F8324H_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
