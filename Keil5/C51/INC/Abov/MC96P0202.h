//======================================================
//		device   : MC96P0202(16 pin)
//		version  : Ver1.0  
//		date     : 2015-02-04
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC96P0202_
#define		_MC96P0202_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x91;			// P0 Direction Register
sfr			P0PU		= 0x92;			// P0 Pull-up Resistor Selection Register
sfr			P0PD		= 0x93;			// P0 Pull-down Resistor Selection Register
sfr			P0OD		= 0x94;			// P0 Open-drain Selection Register
sfr			P01DB		= 0x95;			// P0/P1 Debounce Register
sfr			P0FSR		= 0x96;			// P0 Function Selection Register

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

// Interrupt
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIFLAG		= 0xB0;			// External Interrupt Flag Register
sfr			EIPOL		= 0xB1;			// External Interrupt Polarity Register

// System Oscillator, Reset
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register

// Basic Interval TImer
sfr			BITCR		= 0x8B;			// Basic Interval Timer Control Register
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register

// Watch Dog Timer
sfr			WDTDR		= 0x8E;			// Watch Dog Register
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control register

// TIMER 0
sfr			T0CR		= 0x90;			// Timer 0 Control Register
sfr			T0CNT		= 0xB3;			// Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// Timer 0 Data register

// TIMER 1
sfr			T1CR		= 0x98;			// Timer 1 Control Register
sfr			CARCR		= 0xBE;			// Carrier control Register
sfr			T1CNT		= 0xBB;			// Timer 1 Counter Register
sfr			T1DRH		= 0xBD;			// Timer 1 Data High Register
sfr			T1DRL		= 0xBC;			// Timer 1 Data Low register

// 8bit PWM generator
sfr			PWMCR		= 0xA0;			// PWM Generator Control Register
sfr			PWMFGR		= 0xC0;			// PWM Generator Flag Register
sfr			PWNCNT		= 0xC3;			// PWM Generator Counter Register
sfr			PWM0DR		= 0xC4;			// PWM Generator Data Register 0
sfr			PWM1DR		= 0xC5;			// PWM Generator Data Register 1

// Power down operation
sfr			PCON		= 0x87;			// Power Control Register
sfr			RSTFR		= 0xE8;			// Reset Flag Register
sfr			LVRCR		= 0xD8;			// Low Voltage Reset Control Register

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

#endif	//_MC96P0202_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
