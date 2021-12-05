//======================================================
//	file name: MC94F1202A.h
//	device   : MC94F1202A (20 pin)
//	version  : Ver1.1  
//	date     : 2017-03-07
//	compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC94F1202A_
#define		_MC94F1202A_

//------------------------------------------------------ 0x80
sfr			P0			= 0x80;
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			RSFR		= 0x86;
sfr			PCON		= 0x87;
//------------------------------------------------------ 0x88
sfr			P1			= 0x88;
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			SCCR		= 0x8A;
sfr			SYSCON_AR	= 0x8D;
sfr			BODR		= 0x8F;
//------------------------------------------------------ 0x90
sfr			IE			= 0x90;
	sbit	EA			= 0x97;
sfr			EIEDGEP		= 0x91;
sfr			PCI			= 0x92;
sfr			ADCM		= 0x95;
sfr			ADCM1		= 0x96;
sfr			ADCRL		= 0x96;
sfr			ADCRH		= 0x97;
//------------------------------------------------------ 0x98
sfr			IE1			= 0x98;
sfr			EIEDGEN		= 0x99;
sfr			IOFFSET		= 0x9A;
sfr			WDTMR		= 0x9D;
sfr			WDTR		= 0x9E;
sfr			WDTCR		= 0x9E;
//------------------------------------------------------ 0xA0
sfr			IRQ0		= 0xA0;
sfr			IP			= 0xA1;
sfr			EO			= 0xA2;
sfr			T2CR		= 0xA4;
sfr			T2			= 0xA6;
sfr			T2DR		= 0xA7;
//------------------------------------------------------ 0xA8
sfr			IRQ1		= 0xA8;
sfr			IP1			= 0xA9;
sfr			ILVL		= 0xAA;
//------------------------------------------------------ 0xB0
sfr			T0CR		= 0xB2;
sfr			T0CR1		= 0xB3;
sfr			PWM0DRL		= 0xB4;
sfr			CDR0L		= 0xB4;
sfr			T0L			= 0xB4;
sfr			PWM0DRH		= 0xB5;
sfr			CDR0H		= 0xB5;
sfr			T0H			= 0xB5;
sfr			PWM0PRL		= 0xB6;
sfr			T0DRL		= 0xB6;
sfr			PWM0PRH		= 0xB7;
sfr			T0DRH		= 0xB7;
//------------------------------------------------------ 0xB8
sfr			T1CR		= 0xBA;
sfr			T1CR1		= 0xBB;
sfr			PWM1DRL		= 0xBC;
sfr			CDR1L		= 0xBC;
sfr			T1L			= 0xBC;
sfr			PWM1DRH		= 0xBD;
sfr			CDR1H		= 0xBD;
sfr			T1H			= 0xBD;
sfr			PWM1PRL		= 0xBE;
sfr			T1DRL		= 0xBE;
sfr			PWM1PRH		= 0xBF;
sfr			T1DRH		= 0xBF;
//------------------------------------------------------ 0xC0
sfr			P0IO		= 0xC1;
sfr			P0PU		= 0xC2;
sfr			P0OD		= 0xC3;
sfr			P0DB		= 0xC4;
sfr			P0FSRL		= 0xC5;
sfr			P0FSRH		= 0xC6;
sfr			DBTSR		= 0xC7;
//------------------------------------------------------ 0xC8
sfr			P1IO		= 0xC9;
sfr			P1PU		= 0xCA;
sfr			P1OD		= 0xCB;
sfr			P1DB		= 0xCC;
sfr			P1FSRL		= 0xCD;
sfr			P1FSRH		= 0xCE;
//------------------------------------------------------ 0xD0
sfr			PSW			= 0xD0;
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;
//------------------------------------------------------ 0xD8
//------------------------------------------------------ 0xE0
sfr			ACC			= 0xE0;
//------------------------------------------------------ 0xE8
//------------------------------------------------------ 0xF0
sfr			B			= 0xF0;
sfr			FEMR		= 0xF1;
sfr			FECR		= 0xF2;
sfr			FESR		= 0xF3;
sfr			FETCR		= 0xF4;
sfr			FEARL		= 0xF5;
sfr			FEARM		= 0xF6;
sfr			FEARH		= 0xF7;
//------------------------------------------------------ 0xF8
sfr			CMX			= 0xFF;
#endif													//_MC94F1202A_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
