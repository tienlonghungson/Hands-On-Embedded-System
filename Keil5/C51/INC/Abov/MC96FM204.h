//======================================================
//	file name: MC96FM204.h
//	device   : MC96FM204/214 (20, 16pin)
//	version  : Ver1.0  
//	date     : 2014-02-07
//	compiler : Keil-C
//	author   : ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_MC96FM204_
#define		_MC96FM204_

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
sfr			RSTFR		= 0x86;
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
sfr			BITCR		= 0x8B;
sfr			BITCNT		= 0x8C;
sfr			WDTCR		= 0x8D;
sfr			WDTDR		= 0x8E;
sfr			WDTCNT		= 0x8E;
sfr			BUZDR		= 0x8F;
//----------------------------------------------------- 0x90          
sfr			P2			= 0x90;
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;

sfr			P0IO		= 0x91;
sfr			P0OD		= 0x92;
sfr			P0PU		= 0x93;
sfr			P1IO		= 0x94;
sfr			P1OD		= 0x95;
sfr			P1PU		= 0x96;
sfr			BUZCR		= 0x97;
//----------------------------------------------------- 0x98                                                     
sfr			LVRCR		= 0x98;
	sbit	LVRST		= 0x9F;
	sbit	LVRVS3		= 0x9C;
	sbit	LVRVS2		= 0x9B;
	sbit	LVRVS1		= 0x9A;
	sbit	LVRVS0		= 0x99;
	sbit	LVREN		= 0x98;

sfr			P2IO		= 0x99;
sfr			P2OD		= 0x9A;
sfr			ADCCRH		= 0x9B;
sfr			ADCDR		= 0x9C;
sfr			SHTDR		= 0x9D;
//----------------------------------------------------- 0xA0                                                                   
sfr			EIFLAG		= 0xA0;
	sbit	FLAG12		= 0xA5;
	sbit	FLAG11		= 0xA4;
	sbit	FLAG3		= 0xA3;
	sbit	FLAG2		= 0xA2;
	sbit	FLAG1		= 0xA1;
	sbit	FLAG0		= 0xA0;

sfr			P2PU		= 0xA1;
sfr			EO			= 0xA2;
sfr			EIPOL0		= 0xA4;
sfr			EIPOL1		= 0xA5;
sfr			P0DB		= 0xA6;
sfr			P1DB		= 0xA7;
//----------------------------------------------------- 0xA8
sfr			IE			= 0xA8;
	sbit	EA			= 0xAF;
	sbit	INT5E		= 0xAD;
	sbit	INT4E		= 0xAC;
	sbit	INT3E		= 0xAB;
	sbit	INT2E		= 0xAA;
	sbit	INT1E		= 0xA9;
	sbit	INT0E		= 0xA8;

sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			IE3			= 0xAB;
//----------------------------------------------------- 0xB0
sfr			ADCCRL		= 0xB0;
	sbit	STBY		= 0xB7;
	sbit	ADST		= 0xB6;
	sbit	ADCIFR		= 0xB5;
	sbit	AFLAG		= 0xB4;
	sbit	ADSEL3		= 0xB3;
	sbit	ADSEL2		= 0xB2;
	sbit	ADSEL1		= 0xB1;
	sbit	ADSEL0		= 0xB0;

sfr			T0CR		= 0xB2;
sfr			T0CNT		= 0xB3;
sfr			T0DR		= 0xB4;
sfr			SPICR		= 0xB5;
sfr			SPIDR		= 0xB6;
//----------------------------------------------------- 0xB8
sfr			IP			= 0xB8;
	sbit	IP15		= 0xBD;
	sbit	IP14		= 0xBC;
	sbit	IP13		= 0xBB;
	sbit	IP12		= 0xBA;
	sbit	IP11		= 0xB9;
	sbit	IP10		= 0xB8;

sfr			T1CRL		= 0xBA;
sfr			T1CRH		= 0xBB;
sfr			T1ADRL		= 0xBC;
sfr			T1ADRH		= 0xBD;
sfr			T1BDRL		= 0xBE;
sfr			T1BDRH		= 0xBF;
//----------------------------------------------------- 0xC0
sfr			SPISR		= 0xC0;
	sbit	SPIIFR		= 0xC7;
	sbit	WCOL		= 0xC6;
	sbit	SS_HIGH		= 0xC5;
	sbit	FXCH		= 0xC3;
	sbit	SSENA		= 0xC2;

sfr			T2CRL		= 0xC2;
sfr			T2CRH		= 0xC3;
sfr			T2ADRL		= 0xC4;
sfr			T2ADRH		= 0xC5;
sfr			T2BDRL		= 0xC6;
sfr			T2BDRH		= 0xC7;
//----------------------------------------------------- 0xC8
sfr			OSCCR		= 0xC8;
	sbit	LFIRCE		= 0xCD;
	sbit	IRCS1		= 0xCC;
	sbit	IRCS0		= 0xCB;
	sbit	HFIRCE		= 0xCA;
	sbit	XCLKE		= 0xC9;
//----------------------------------------------------- 0xD0
sfr			PSW			= 0xD0;
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;
//----------------------------------------------------- 0xD8
sfr			AMPCR		= 0xD8;
	sbit	AMP1EN		= 0xDC;
	sbit	AUTOD1		= 0xDB;
	sbit	AMP0EN		= 0xD9;
	sbit	AUTOD0		= 0xD8;
//----------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			LVICR		= 0xE1;
//----------------------------------------------------- 0xE8
sfr			ACCSR		= 0xE8;
	sbit	ACE			= 0xEF;
	sbit	ACINV		= 0xEE;
	sbit	ACO			= 0xED;
	sbit	ACIFR		= 0xEC;
	sbit	ACIES1		= 0xE9;
	sbit	ACIES0		= 0xE8;

sfr			P0FSRL		= 0xEC;
sfr			P0FSRH		= 0xED;
sfr			P1FSR		= 0xEE;
//----------------------------------------------------- 0xF0
sfr			B			= 0xF0;
//----------------------------------------------------- 0xF8
sfr			IP1			= 0xF8;

sfr			FSADRH		= 0xFA;
sfr			FSADRM		= 0xFB;
sfr			FSADRL		= 0xFC;
sfr			FIDR		= 0xFD;
sfr			FMCR		= 0xFE;
//----------------------------------------------------- 0xFF
#endif								//_MC96FM204_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
