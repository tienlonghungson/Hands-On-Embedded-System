//======================================================
//		file name: A96R739.h
//		device   : A96R739
//		version  : Ver1.2
//		date     : 2017-12-11.Mon
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_A96R739_
#define		_A96R739_

//------------------------------------------------- 0x80
sfr			P0			= 0x80;							// R/W	00H	P0 Data Register
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
sfr			LVICR		= 0x86;
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

sfr			WTDR		= 0x89;
sfr			WTCNT		= 0x89;
sfr			SCCR		= 0x8A;
sfr			BITCR		= 0x8B;
sfr			BITCNT		= 0x8C;
sfr			WDTCR		= 0x8D;
sfr			WDTDR		= 0x8E;
sfr			WDTCNT		= 0x8E;
sfr			BUZDR		= 0x8F;

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

sfr			IRCTCR		= 0x91;
sfr			P7			= 0x92;
sfr			IRCTRM		= 0x93;
sfr			P36DB		= 0x94;
sfr			P4DB		= 0x95;
sfr			WTCR		= 0x96;
sfr			BUZCR		= 0x97;

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

sfr			LCDCRL		= 0x99;
sfr			LCDCRH		= 0x9A;
sfr			LCDCCR		= 0x9B;
sfr			ADCCRL		= 0x9C;
sfr			ADCCRH		= 0x9D;
sfr			ADCDRL		= 0x9E;
sfr			ADCDRH		= 0x9F;

//------------------------------------------------- 0xA0
sfr			P4			= 0xA0;
	sbit	P47			= 0xA7;
	sbit	P46			= 0xA6;
	sbit	P45			= 0xA5;
	sbit	P44			= 0xA4;
	sbit	P43			= 0xA3;
	sbit	P42			= 0xA2;
	sbit	P41			= 0xA1;
	sbit	P40			= 0xA0;

sfr			P0IO		= 0xA1;
sfr			EO			= 0xA2;
sfr			EIFLAG0		= 0xA3;
sfr			EIPOL0		= 0xA4;
sfr			EIFLAG1		= 0xA5;
sfr			EIPOL1L		= 0xA6;
sfr			EIPOL1H		= 0xA7;

//------------------------------------------------- 0xA8
sfr			IE			= 0xA8;
sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			IE3			= 0xAB;
sfr			P7FSR		= 0xAC;
sfr			ITDRL		= 0xAD;
sfr			ITDRH		= 0xAE;
sfr			FCDIN		= 0xAF;

//------------------------------------------------- 0xB0
sfr			P5			= 0xB0;
	sbit	P57			= 0xB7;
	sbit	P56			= 0xB6;
	sbit	P55			= 0xB5;
	sbit	P54			= 0xB4;
	sbit	P53			= 0xB3;
	sbit	P52			= 0xB2;
	sbit	P51			= 0xB1;
	sbit	P50			= 0xB0;

sfr			P1IO		= 0xB1;
sfr			T0CR		= 0xB2;
sfr			T0CNT		= 0xB3;
sfr			T0DR		= 0xB4;
sfr			T0CDR		= 0xB4;
sfr			ITCRL		= 0xB5;
sfr			ITCRH		= 0xB6;
sfr			XTFLSR		= 0xB7;

//------------------------------------------------- 0xB8
sfr			IP			= 0xB8;
sfr			P2IO		= 0xB9;
sfr			T1CR		= 0xBA;
sfr			T1CNT		= 0xBB;
sfr			T1DRL		= 0xBC;
sfr			T1DRH		= 0xBD;
sfr			CARCR		= 0xBE;
sfr			LIFSR		= 0xBF;

//------------------------------------------------- 0xC0
sfr			P6			= 0xC0;
	sbit	P67			= 0xC7;
	sbit	P66			= 0xC6;
	sbit	P65			= 0xC5;
	sbit	P64			= 0xC4;
	sbit	P63			= 0xC3;
	sbit	P62			= 0xC2;
	sbit	P61			= 0xC1;
	sbit	P60			= 0xC0;

sfr			P3IO		= 0xC1;
sfr			T2CRL		= 0xC2;
sfr			T2CRH		= 0xC3;
sfr			T2ADRL		= 0xC4;
sfr			T2ADRH		= 0xC5;
sfr			T2BDRL		= 0xC6;
sfr			T2BDRH		= 0xC7;

//------------------------------------------------- 0xC8
sfr			OSCCR		= 0xC8;
sfr			P4IO		= 0xC9;
sfr			T3CRL		= 0xCA;
sfr			T3CRH		= 0xCB;
sfr			T3ADRL		= 0xCC;
sfr			T3ADRH		= 0xCD;
sfr			T3BDRL		= 0xCE;
sfr			T3BDRH		= 0xCF;

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

sfr			P5IO		= 0xD1;
sfr			P0OD		= 0xD2;
sfr			P1OD		= 0xD3;
sfr			P2OD		= 0xD4;
sfr			P3OD		= 0xD5;
sfr			P4OD		= 0xD6;
sfr			P5OD		= 0xD7;

//------------------------------------------------- 0xD8
sfr			LVRCR		= 0xD8;
sfr			P6IO		= 0xD9;
sfr			P6OD		= 0xDA;
sfr			P7OD		= 0xDB;
sfr			P0PU		= 0xDC;
sfr			P1PU		= 0xDD;
sfr			P2PU		= 0xDE;
sfr			P3PU		= 0xDF;

//------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			P7IO		= 0xE1;
sfr			P4PU		= 0xE2;
sfr			P5PU		= 0xE3;
sfr			P6PU		= 0xE4;
sfr			P7PU		= 0xE5;
sfr			P3FSRH		= 0xE6;
sfr			P3FSRL		= 0xE7;

//------------------------------------------------- 0xE8
sfr			RSTFR		= 0xE8;
sfr			P0FSR		= 0xE9;
sfr			P1FSR		= 0xEA;
sfr			P2FSR		= 0xEB;
sfr			P6FSR		= 0xEC;
sfr			P4FSRH		= 0xED;
sfr			P4FSRL		= 0xEE;
sfr			P5FSR		= 0xEF;

//------------------------------------------------- 0xF0
sfr			B			= 0xF0;
sfr			IRCIDR		= 0xF1;
sfr			UARTCR1		= 0xF2;
sfr			UARTCR2		= 0xF3;
sfr			UARTCR3		= 0xF4;
sfr			UARTST		= 0xF5;
sfr			UARTBD		= 0xF6;
sfr			UARTDR		= 0xF7;

//------------------------------------------------- 0xF8
sfr			IP1			= 0xF8;
;sfr		reserved	= 0xF9;
sfr			FSADRH		= 0xFA;
sfr			FSADRM		= 0xFB;
sfr			FSADRL		= 0xFC;
sfr			FIDR		= 0xFD;
sfr			FMCR		= 0xFE;
;sfr		reserved	= 0xFF;

//------------------------------------------------- XDATA
#ifdef MAIN
unsigned char xdata CNFMRR0 _at_ 0x1070;
unsigned char xdata CNFMRR1 _at_ 0x1071;
unsigned char xdata CNFMRR2 _at_ 0x1072;
unsigned char xdata CNFMRR3 _at_ 0x1073;

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
extern unsigned char xdata CNFMRR0;
extern unsigned char xdata CNFMRR1;
extern unsigned char xdata CNFMRR2;
extern unsigned char xdata CNFMRR3;

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

#endif													//_A96R739_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
