//======================================================
//	file name: MC97F1316.h
//	device   : MC97F1316 (32 pin)
//	version  : Ver1.0  
//	date     : 2013-07-05
//	compiler : Keil-C
//	author   : optima1
//======================================================

#include	<intrins.h>

#ifndef		_MC97F1316_
#define		_MC97F1316_

//------------------------------------------------- 0x80
sfr			P0			= 0x80;
	sbit	P07			= 0x87;
	sbit	P06			= 0x86;
	sbit	P05			= 0x85;
	sbit	P04			= 0x84;
	sbit	P03			= 0x83;
	sbit	P02			= 0x82;
	sbit	P01			= 0x81;
	sbit	P00			= 0x80;

sfr			SP			= 0x81;
sfr16		DPTR0		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		DPTR1		= 0x84;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			RSFR		= 0x86;
sfr			PCON		= 0x87;

//------------------------------------------------- 0x88
sfr			P1			= 0x88;
	sbit	P17			= 0x8F;
	sbit	P16			= 0x8E;
	sbit	P15			= 0x8D;
	sbit	P14			= 0x8C;
	sbit	P13			= 0x8B;
	sbit	P12			= 0x8A;
	sbit	P11			= 0x89;
	sbit	P10			= 0x88;

sfr			P0IO		= 0x89;
sfr			SCCR		= 0x8A;
sfr			BCCR		= 0x8B;
sfr			BITR		= 0x8C;
sfr			WDTMR		= 0x8D;
sfr			WDTR		= 0x8E;
sfr			WDTCR		= 0x8E;
sfr			BODR		= 0x8F;

//------------------------------------------------- 0x90
sfr			P2			= 0x90;
	sbit	P27			= 0x97;
	sbit	P26			= 0x96;
	sbit	P25			= 0x95;
	sbit	P24			= 0x94;
	sbit	P23			= 0x93;
	sbit	P22			= 0x92;
	sbit	P21			= 0x91;
	sbit	P20			= 0x90;

sfr			P1IO		= 0x91;
sfr			IP0L		= 0x92;
sfr			IP0H		= 0x93;
sfr			ADCM		= 0x95;
sfr			ADCM1		= 0x96;

sfr16		ADCR		= 0x96;
sfr			ADCRL		= 0x96;
sfr			ADCRH		= 0x97;

//------------------------------------------------- 0x98
sfr			P3			= 0x98;
	sbit	P37			= 0x9F;
	sbit	P36			= 0x9E;
	sbit	P35			= 0x9D;
	sbit	P34			= 0x9C;
	sbit	P33			= 0x9B;
	sbit	P32			= 0x9A;
	sbit	P31			= 0x99;
	sbit	P30			= 0x98;

sfr			P2IO		= 0x99;
sfr			IP1L		= 0x9A;
sfr			IP1H		= 0x9B;
sfr			IP2L		= 0x9C;
sfr			IP2H		= 0x9D;
sfr			PCI			= 0x9F;

//------------------------------------------------- 0xA0
sfr			P3IO		= 0xA1;
sfr			EO			= 0xA2;
sfr			EIENAB		= 0xA3;
sfr			EIFLAG		= 0xA4;
sfr			EIEDGE		= 0xA5;
sfr			EIPOLA		= 0xA6;
sfr			EIBOTH		= 0xA7;

//------------------------------------------------- 0xA8
sfr			IE			= 0xA8;
	sbit	EA			= 0xAF;

sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			CRC_CON		= 0xAC;
sfr			CRC_DIN		= 0xAD;
sfr			CRC_H		= 0xAE;
sfr			CRC_L		= 0xAF;

//------------------------------------------------- 0xB0
sfr			P0OD		= 0xB1;
sfr			T0CR		= 0xB2;
sfr			T0CR1		= 0xB3;
sfr16		CDR0		= 0xB4;
sfr16		PWM0DR		= 0xB4;
sfr			T0L			= 0xB4;
sfr			CDR0L		= 0xB4;
sfr			PWM0DRL		= 0xB4;
sfr			T0H			= 0xB5;
sfr			CDR0H		= 0xB5;
sfr			PWM0DRH		= 0xB5;
sfr16		T0DR		= 0xB6;
sfr16		PWM0PR		= 0xB6;
sfr			T0DRL		= 0xB6;
sfr			PWM0PRL		= 0xB6;
sfr			T0DRH		= 0xB7;
sfr			PWM0PRH		= 0xB7;

//------------------------------------------------- 0xB8
sfr			P1OD		= 0xB9;
sfr			T1CR		= 0xBA;
sfr			T1CR1		= 0xBB;
sfr16		CDR1		= 0xBC;
sfr16		PWM1DR		= 0xBC;
sfr			T1L			= 0xBC;
sfr			CDR1L		= 0xBC;
sfr			PWM1DRL		= 0xBC;
sfr			T1H			= 0xBD;
sfr			CDR1H		= 0xBD;
sfr			PWM1DRH		= 0xBD;
sfr16		T1DR		= 0xBE;
sfr16		PWM1PR		= 0xBE;
sfr			T1DRL		= 0xBE;
sfr			PWM1PRL		= 0xBE;
sfr			T1DRH		= 0xBF;
sfr			PWM1PRH		= 0xBF;

//------------------------------------------------- 0xC0
sfr			P2OD		= 0xC1;
sfr			T2CR		= 0xC2;
sfr			T2CR1		= 0xC3;
sfr16		CDR2		= 0xC4;
sfr16		PWM2DR		= 0xC4;
sfr			T2L			= 0xC4;
sfr			CDR2L		= 0xC4;
sfr			PWM2DRL		= 0xC4;
sfr			T2H			= 0xC5;
sfr			CDR2H		= 0xC5;
sfr			PWM2DRH		= 0xC5;
sfr16		T2DR		= 0xC6;
sfr16		PWM2PR		= 0xC6;
sfr			T2DRL		= 0xC6;
sfr			PWM2PRL		= 0xC6;
sfr			T2DRH		= 0xC7;
sfr			PWM2PRH		= 0xC7;

//------------------------------------------------- 0xC8
sfr			P3OD		= 0xC9;
sfr			T3CR		= 0xCA;
sfr			T3CR1		= 0xCB;
sfr16		CDR3		= 0xCC;
sfr16		PWM3DR		= 0xCC;
sfr			T3L			= 0xCC;
sfr			CDR3L		= 0xCC;
sfr			PWM3DRL		= 0xCC;
sfr			T3H			= 0xCD;
sfr			CDR3H		= 0xCD;
sfr			PWM3DRH		= 0xCD;
sfr16		T3DR		= 0xCE;
sfr16		PWM3PR		= 0xCE;
sfr			T3DRL		= 0xCE;
sfr			PWM3PRL		= 0xCE;
sfr			T3DRH		= 0xCF;
sfr			PWM3PRH		= 0xCF;

//------------------------------------------------- 0xD0
sfr			PSW			= 0xD0;
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;

sfr			P0PU		= 0xD1;
sfr			SPICR		= 0xD2;
sfr			SPIDR		= 0xD3;
sfr16		SPISR		= 0xD4;
sfr			TMISR		= 0xD5;
sfr			TEST_REGB	= 0xD6;
sfr			TEST_REGA	= 0xD7;

//------------------------------------------------- 0xD8
sfr			P1PU		= 0xD9;
sfr			PSR0		= 0xDA;
sfr			PSR1		= 0xDB;
sfr			PSR2		= 0xDC;
sfr			PSR3		= 0xDD;
sfr			FUSE_CFG1	= 0xDE;
sfr			FUSE_CFG0	= 0xDF;

//------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			P2PU		= 0xE1;
sfr			P0DB		= 0xE2;
sfr			P1DB		= 0xE3;
sfr			P2DB		= 0xE4;
sfr			P3DB		= 0xE5;
sfr			FUSE_CFG3	= 0xE6;
sfr			FUSE_CFG2	= 0xE7;

//------------------------------------------------- 0xE8
sfr			P3PU		= 0xE9;
sfr			FEMR		= 0xEA;
sfr			FECR		= 0xEB;
sfr			FESR		= 0xEC;
sfr			FETCR		= 0xED;
sfr			FUSE_CFG5	= 0xEE;
sfr			FUSE_CFG4	= 0xEF;

//------------------------------------------------- 0xF0
sfr			B			= 0xF0;
sfr			FUSE_CFG6	= 0xF1;
sfr			FEARL		= 0xF2;
sfr			FEARM		= 0xF3;
sfr			FEARH		= 0xF4;
sfr			FEDR		= 0xF5;
sfr			FETR		= 0xF6;

//------------------------------------------------- 0xF8
sfr			FUSE_CFG7	= 0xF9;
sfr			UCTRL1		= 0xFA;
sfr			UCTRL2		= 0xFB;
sfr			UCTRL3		= 0xFC;
sfr			USTAT		= 0xFD;
sfr			UBAUD		= 0xFE;
sfr			UDATA		= 0xFF;

// configure test
sfr			CFG0		= 0xDF;
sfr			CFG1		= 0xDE;
sfr			CFG2		= 0xE7;

#endif													//_MC97F1316_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
