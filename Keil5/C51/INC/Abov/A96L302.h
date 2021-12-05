//======================================================
//	file name: A96L302.h
//	device   : A96L302 (16pin)
//	version  : Ver1.0  
//	date     : 2018-08-06
//	compiler : Keil-C
//	author   : ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_A96L302_
#define		_A96L302_

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
sfr			IRCTCR		= 0x8F;
//----------------------------------------------------- 0x90          
sfr			P0IO		= 0x91;
sfr			P0OD		= 0x92;
sfr			P0PU		= 0x93;
sfr			P0FSRL		= 0x94;
sfr			P0FSRH		= 0x95;
sfr			P01DB		= 0x96;
sfr			IRCTRM		= 0x97;
//----------------------------------------------------- 0x98                                                     
sfr			P1IO		= 0x99;
sfr			P1OD		= 0x9A;
sfr			P1PU		= 0x9B;
sfr			P1FSR		= 0x9C;
sfr			IRCIDR		= 0x9F;
//----------------------------------------------------- 0xA0                                                                   
sfr			EIFLAG		= 0xA0;
sfr			EO			= 0xA2;
sfr			EIPOL0		= 0xA4;
sfr			EIPOL1		= 0xA5;
//----------------------------------------------------- 0xA8
sfr			IE			= 0xA8;
sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			IE3			= 0xAB;
//----------------------------------------------------- 0xB0
sfr			T0CRL		= 0xB2;
sfr			T0CRH		= 0xB3;
sfr			T0ADRL		= 0xB4;
sfr			T0ADRH		= 0xB5;
sfr			T0BDRL		= 0xB6;
sfr			T0BDRH		= 0xB7;
//----------------------------------------------------- 0xB8
sfr			IP			= 0xB8;
sfr			T1CRL		= 0xBA;
sfr			T1CRH		= 0xBB;
sfr			T1ADRL		= 0xBC;
sfr			T1ADRH		= 0xBD;
sfr			T1BDRL		= 0xBE;
sfr			T1BDRH		= 0xBF;
//----------------------------------------------------- 0xC0
sfr			LISTATR		= 0xC1;
sfr			LICRL		= 0xC2;
sfr			LICRH		= 0xC3;
sfr			LICAPL		= 0xC4;
sfr			LICAPH		= 0xC5;
sfr			TDLYRL		= 0xC6;
sfr			TDLYRH		= 0xC7;
//----------------------------------------------------- 0xC8
sfr			OSCCR		= 0xC8;
sfr			ADCCRL		= 0xCA;
sfr			ADCCRH		= 0xCB;
sfr			ADCDRL		= 0xCC;
sfr			ADCDRH		= 0xCD;
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

sfr			LITXDR		= 0xD1;
sfr			TTXARL		= 0xD2;
sfr			TTXARH		= 0xD3;
sfr			TTXBRL		= 0xD4;
sfr			TTXBRH		= 0xD5;
sfr			FCDIN		= 0xD7;
//----------------------------------------------------- 0xD8
sfr			LVRCR		= 0xD8;
sfr			TXBLEN		= 0xD9;
sfr			TTXCRL		= 0xDA;
sfr			TTXCRH		= 0xDB;
sfr			TTXDRL		= 0xDC;
sfr			TTXDRH		= 0xDD;
sfr			TTXRRL		= 0xDE;
sfr			TTXRRH		= 0xDF;
//----------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			LIRXDR		= 0xE1;
sfr			TRXARL		= 0xE2;
sfr			TRXARH		= 0xE3;
sfr			TRXBRL		= 0xE4;
sfr			TRXBRH		= 0xE5;
sfr			TRXCRL		= 0xE6;
sfr			TRXCRH		= 0xE7;
//----------------------------------------------------- 0xE8
sfr			RSTFR		= 0xE8;
sfr			RXBLEN		= 0xE9;
sfr			TMINRL		= 0xEA;
sfr			TMINRH		= 0xEB;
sfr			TMAXRL		= 0xEC;
sfr			TMAXRH		= 0xED;
sfr			TENDRL		= 0xEE;
sfr			TENDRH		= 0xEF;
//----------------------------------------------------- 0xF0
sfr			B			= 0xF0;
sfr			EESADRL		= 0xF2;
sfr			EESADRH		= 0xF3;
sfr			EEIDR		= 0xF4;
sfr			EEMCR		= 0xF5;
//----------------------------------------------------- 0xF8
sfr			IP1			= 0xF8;

sfr			FSADRH		= 0xFA;
sfr			FSADRM		= 0xFB;
sfr			FSADRL		= 0xFC;
sfr			FIDR		= 0xFD;
sfr			FMCR		= 0xFE;
//----------------------------------------------------- 0xFF
#ifdef MAIN
unsigned char xdata FCSARH _at_ 0x5050;
unsigned char xdata FCEARH _at_ 0x5051;
unsigned char xdata FCSARM _at_ 0x5052;
unsigned char xdata FCEARM _at_ 0x5053;
unsigned char xdata FCSARL _at_ 0x5054;
unsigned char xdata FCEARL _at_ 0x5055;
unsigned char xdata FCCR _at_ 0x5056;
unsigned char xdata FCDRH _at_ 0x5057;
unsigned char xdata FCDRL _at_ 0x5058;
#else
extern unsigned char xdata FCSARH;
extern unsigned char xdata FCEARH;
extern unsigned char xdata FCSARM;
extern unsigned char xdata FCEARM;
extern unsigned char xdata FCSARL;
extern unsigned char xdata FCEARL;
extern unsigned char xdata FCCR;
extern unsigned char xdata FCDRH;
extern unsigned char xdata FCDRL;
#endif
//----------------------------------------------------- XSFR
#endif								//_A96L302_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
