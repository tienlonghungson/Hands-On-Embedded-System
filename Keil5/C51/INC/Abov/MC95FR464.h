//======================================================
//		file name: MC95FR464.h
//		device   : MC96FC464/364
//		version  : Ver1.0  
//		date     : 2014-07-18
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FC464_
#define _MC96FC464_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x98;			// P0 Direction Register
sfr			P0PU		= 0x89;			// P0 pullup
sfr			P0BPC		= 0xC0;			// P0 pullup control
sfr			P0PC		= 0xC1;			// P0 Pin Change Interrupt

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;


sfr			P1IO		= 0xA0;			// P1 Direction Register
sfr			P1PU		= 0xA0;			// P1 pullup
sfr			P1OD		= 0xA0;			// P1 open drain
sfr			P1BPC		= 0xA0;			// P1 pullup control

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0xB0;			// P2 Direction Register
sfr			P2PU		= 0x99;			// P2 pullup
sfr			P2OD		= 0xB9;			// P2 open drain
sfr			P2BPC		= 0xD8;			// P2 pullup control

sfr			P3			= 0x9F;			// P3 Data Register
sfr			P3IO		= 0x9B;			// P3 Direction Register
sfr			P3PU		= 0x9C;			// P3 pullup
sfr			P3OD		= 0x9D;			// P3 open drain
sfr			P3BPC		= 0x9A;			// P3 pullup control

sfr			P4			= 0xA3;			// P4 Data Register
sfr			P4IO		= 0xA4;			// P4 Direction Register
sfr			P4PU		= 0xA5;			// P4 pullup
sfr			P4OD		= 0xA6;			// P4 open drain
sfr			P4BPC		= 0xA7;			// P4 pullup control

sfr			P5			= 0xDA;			// P5 Data Register
sfr			P5IO		= 0xDB;			// P5 Direction Register
sfr			P5PU		= 0xDC;			// P5 pullup
sfr			P5OD		= 0xDD;			// P5 open drain
sfr			P5BPC		= 0xDE;			// P5 pullup control

// interrupt registers
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register
sfr			IE2			= 0xAA;			// Interrupt Enable Register
sfr			IE3			= 0xAB;			// Interrupt Enable Register 

sfr			IP0			= 0xB8;			// Interrupt Priority Register 
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1

sfr			EIFLAG		= 0xAC;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xAD;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xAE;			// External Interrupt Polarity Register
sfr			EIENAB		= 0xAF;			// External Interrupt Enable Register

// SYSCON
sfr			SCCR		= 0x8A;			// System Clock Control Register

// Basic interval timer
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Clock Control Register

// Watchdog timer
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// 
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

// Timer
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// Timer 0 register
sfr			T0DR		= 0xB3;			// Timer 0 Data register
sfr			CDR0		= 0xB3;			// Capture 0 Data register

sfr			T1CR		= 0xB4;			// Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// Timer 1 Data Register
sfr			PWM1PR		= 0xB5;			// Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// Timer 1 Register
sfr			PWM1DR		= 0xB6;			// Timer 1 PWM Duty Register
sfr			CDR1		= 0xB6;			// Capture 1 Data Register
sfr			PWM1HR		= 0xB7;			// Timer 1 PWM High Register

sfr			T2CR		= 0xC6;			// Timer 2 Mode Control Register
sfr			T2H			= 0xC7;			// Timer 2 Counter High
sfr			T2DRH		= 0xC7;			// Timer 2 Data Register High
sfr			CDR2H		= 0xC7;			// Timer 2 Capture Data Register High
sfr			T2L			= 0xCF;			// Timer 2 Counter Low
sfr			T2DRL		= 0xCF;			// Timer 2 Data Register Low
sfr			CDR2L		= 0xCF;			// Timer 2 Capture Data Register Low

sfr			T3CR2		= 0xC9;			// Timer 3 Mode Control Register 2
sfr			T3CR		= 0xCA;			// Timer 3 Mode Control Register
sfr			T3L			= 0xCB;			// Timer 3 Counter Low
sfr			PWM3DRL		= 0xCB;			// PWM 3 Duty Register Low
sfr			CDR3L		= 0xCB;			// Timer 3 Capture Data Register Low
sfr			T3H			= 0xCC;			// Timer 3 Counter High
sfr			PWM3DRH		= 0xCC;			// PWM 3 Duty Register High
sfr			CDR3H		= 0xCC;			// Timer 3 Capture Data Register High
sfr			T3DRL		= 0xCD;			// Timer 3 Data Register Low
sfr			PWM3PRL		= 0xCD;			// PWM 3 Period Register Low
sfr			T3DRH		= 0xCE;			// Timer 3 Data Register High
sfr			PWM3PRH		= 0xCE;			// PWM 3 Period Data Register High

// Carrier generator
sfr			RMR			= 0xE8;			// Remocon Mode Register
sfr			CFRH		= 0xBB;			// Carrier Frequency Register High
sfr			CFRL		= 0xBC;			// Carrier Frequency Register Low
sfr			CRC			= 0xBD;			// Remocon Carrier Counter
sfr			RODR		= 0xBE;			// Remocon Output Data Register
sfr			ROB			= 0xBF;			// Remocon Output Buffer
sfr			RDRH		= 0xC2;			// Remocon Data Register High
sfr			RDRL		= 0xC3;			// Remocon Data Register Low

// Key scan
sfr			SMRR0		= 0xD2;			// Standby Mode Release Register 0
sfr			SMRR1		= 0xD3;			// Standby Mode Release Register 1
sfr			SRLC0		= 0xD6;			// Standby Release Level Control Register 0
sfr			SRLC1		= 0xD7;			// Standby Release Level Control Register 1

// USART
sfr			UCTRL1		= 0xE2;			// USART Control Register 1
sfr			UCTRL2		= 0xE3;			// USART Control Register 2
sfr			UCTRL3		= 0xE4;			// USART Control Register 3
sfr			USTAT		= 0xE5;			// USART Status Register
sfr			UBAUD		= 0xE6;			// USART BaudRate Register
sfr			UDATA		= 0xE7;			// USART Data Register

// Power control
sfr			PCON		= 0x87;			// Stop and Sleep Mode Control Register

// BOD
sfr			BODR		= 0x86;			// BOD Control Register
sfr			BODSR		= 0x8F;			// BOD Status Register

// Flash control
sfr			DISTR		= 0xD9;			// Discharge Time Control Register
sfr			FEMR		= 0xEA;			// FLASH and EEPROM Mode Register
sfr			FECR		= 0xEB;			// FLASH and EEPROM Control Register
sfr			FESR		= 0xEC;			// FLASH and EEPROM Status Register
sfr			FETCR		= 0xED;			// FLASH and EEPROM Time Control Register
sfr			DEARL		= 0xEE;			// Data EEPROM Address Low Register
sfr			DEARM		= 0xEF;			// Data EEPROM Address Middle Register
sfr			FEARL		= 0xF2;			// FLASH and EEPROM Address Low Register
sfr			FEARM		= 0xF3;			// FLASH and EEPROM Address Middle Register
sfr			FEDR		= 0xF5;			// FLASH and EEPROM Data Register
sfr			FETR		= 0xF6;			// FLASH and EEPROM Test Register

// Register
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;

sfr16		_DPTR		= 0x82;
sfr16		_DPTR1		= 0x84;

sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER
#endif	//_MC96FC464_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
