//======================================================
//		file name: MC96F4548.h
//		device   : MC96F4548
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC96F4548_
#define		_MC96F4548_

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
sfr			BODR		= 0x86;
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

sfr			P1IO		= 0x91;
sfr			ADCSH		= 0x94;

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
sfr			ADCM		= 0x9A;
sfr			ADCM2		= 0x9B;
sfr			ADCR		= 0x9C;
sfr			WTMR		= 0x9D;
sfr			WTR			= 0x9E;
sfr			BUZCR		= 0x9F;

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

sfr			P3IO		= 0xA1;
sfr			EO			= 0xA2;
sfr			EIENAB		= 0xA3;
sfr			EIFLAG		= 0xA4;
sfr			EIEDGE		= 0xA5;
sfr			EIPOLA		= 0xA6;
sfr			EIBOTH		= 0xA7;

//------------------------------------------------- 0xA8
sfr			IE			= 0xA8;
sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			IE3			= 0xAB;
sfr			IE4			= 0xAC;

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

sfr			P4IO		= 0xB1;
sfr			T0CR		= 0xB2;
sfr			T0DR		= 0xB3;
sfr			T1CR		= 0xB4;
sfr			T1DR		= 0xB5;
sfr			T1PWDR		= 0xB6;
sfr			T1PWHR		= 0xB7;

//------------------------------------------------- 0xB8
sfr			IP			= 0xB8;
sfr			P5IO		= 0xB9;
sfr			T2CR		= 0xBA;
sfr			T2CR1		= 0xBB;
sfr			T2L			= 0xBC;
sfr			T2H			= 0xBD;
sfr			T2DRL		= 0xBE;
sfr			T2DRH		= 0xBF;

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

sfr			P6IO		= 0xC1;
sfr			T3CR		= 0xC2;
sfr			T3CR1		= 0xC3;
sfr			T3L			= 0xC4;
sfr			T3H			= 0xC5;
sfr			T3DRL		= 0xC6;
sfr			T3DRH		= 0xC7;

//------------------------------------------------- 0xC8
sfr			P7			= 0xC8;
	sbit	P77			= 0xCF;
	sbit	P76			= 0xCE;
	sbit	P75			= 0xCD;
	sbit	P74			= 0xCC;
	sbit	P73			= 0xCB;
	sbit	P72			= 0xCA;
	sbit	P71			= 0xC9;
	sbit	P70			= 0xC8;

sfr			P7IO		= 0xC9;
sfr			T4CR		= 0xCA;
sfr			T4CR1		= 0xCB;
sfr			T4L			= 0xCC;
sfr			T4H			= 0xCD;
sfr			T4DRL		= 0xCE;
sfr			T4DRH		= 0xCF;

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

sfr			SPICR0		= 0xD2;
sfr			SPIDR0		= 0xD3;
sfr			SPISR0		= 0xD4;
sfr			TMISR		= 0xD5;
sfr			I2CSAR01	= 0xD6;
sfr			I2CSAR00	= 0xD7;

//------------------------------------------------- 0xD8
sfr			PLLCR		= 0xD9;
sfr			I2CMR0		= 0xDA;
sfr			I2CSR0		= 0xDB;
sfr			I2CSCLLR0	= 0xDC;
sfr			I2CSCLHR0	= 0xDD;
sfr			I2CSDAHR0	= 0xDE;
sfr			I2CDR0		= 0xDF;

//------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			UCTRL01		= 0xE2;
sfr			UCTRL02		= 0xE3;
sfr			UCTRL03		= 0xE4;
sfr			USTAT0		= 0xE5;
sfr			UBAUD0		= 0xE6;
sfr			UDATA0		= 0xE7;

//------------------------------------------------- 0xE8
sfr			FEMR		= 0xEA;
sfr			FESR		= 0xEB;
sfr16		FETCR		= 0xEC;
sfr			XADD		= 0xEE;
//sfr			XDATA		= 0xEF;

//------------------------------------------------- 0xF0
sfr			B			= 0xF0;
sfr			FEARH		= 0xF2;
sfr			FEARM		= 0xF3;
sfr			FEARL		= 0xF4;
sfr			FEDR		= 0xF5;
sfr			FECR		= 0xF6;
sfr			XCON		= 0xF7;

//------------------------------------------------- 0xF8
sfr			IP1		= 0xF8;
sfr			EXTLVC		= 0xF9;
sfr			UCTRL11		= 0xFA;
sfr			UCTRL12		= 0xFB;
sfr			UCTRL13		= 0xFC;
sfr			USTAT1		= 0xFD;
sfr			UBAUD1		= 0xFE;
sfr			UDATA1		= 0xFF;

#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2F00;
unsigned char xdata P1PU _at_ 0x2F01;
unsigned char xdata P2PU _at_ 0x2F02;
unsigned char xdata P3PU _at_ 0x2F03;
unsigned char xdata P4PU _at_ 0x2F04;
unsigned char xdata P5PU _at_ 0x2F05;
unsigned char xdata P6PU _at_ 0x2F06;
unsigned char xdata P7PU _at_ 0x2F07;
unsigned char xdata P0OD _at_ 0x2F0C;
unsigned char xdata P1OD _at_ 0x2F0D;
unsigned char xdata P2OD _at_ 0x2F0E;
unsigned char xdata P3OD _at_ 0x2F0F;

unsigned char xdata P4OD _at_ 0x2F10;
unsigned char xdata P5OD _at_ 0x2F11;
unsigned char xdata P6OD _at_ 0x2F12;
unsigned char xdata P7OD _at_ 0x2F13;

unsigned char xdata P0DB _at_ 0x2F18;
unsigned char xdata P1DB _at_ 0x2F19;
unsigned char xdata P2DB _at_ 0x2F1A;
unsigned char xdata P3DB _at_ 0x2F1B;
unsigned char xdata P4DB _at_ 0x2F1C;
unsigned char xdata P5DB _at_ 0x2F1D;
unsigned char xdata P6DB _at_ 0x2F1E;
unsigned char xdata P7DB _at_ 0x2F1F;

unsigned char xdata IRC_PRES0 _at_ 0x2F48;
unsigned char xdata IRC_PRES1 _at_ 0x2F49;
unsigned char xdata IRC_FRMP0 _at_ 0x2F4A;
unsigned char xdata IRC_FRM1 _at_ 0x2F4B;
unsigned char xdata IRC_CONF _at_ 0x2F4C;
unsigned char xdata IRC_CTRL _at_ 0x2F4D;
unsigned char xdata IRC_EDGE0 _at_ 0x2F4E;
unsigned char xdata IRC_EDGE1 _at_ 0x2F4F;
unsigned char xdata PSR2 _at_ 0x2F50;

unsigned char xdata FUSE_PKG _at_ 0x2F59;
unsigned char xdata FUSE_CAL2 _at_ 0x2F5A;
unsigned char xdata FUSE_CAL1 _at_ 0x2F5B;
unsigned char xdata FUSE_CAL0 _at_ 0x2F5C;
unsigned char xdata FUSE_CONF _at_ 0x2F5D;
unsigned char xdata TEST_B _at_ 0x2F5E;
unsigned char xdata TEST_A _at_ 0x2F5F;

unsigned char xdata CEC_PRES0 _at_ 0x2F60;
unsigned char xdata CEC_PRES1 _at_ 0x2F61;
unsigned char xdata CEC_CONF0 _at_ 0x2F62;
unsigned char xdata CEC_CONF1 _at_ 0x2F63;
unsigned char xdata CEC_GCTRL _at_ 0x2F64;
unsigned char xdata CEC_ICTRL _at_ 0x2F65;
unsigned char xdata CEC_FCTRL _at_ 0x2F66;
unsigned char xdata CEC_ISTAT _at_ 0x2F67;
unsigned char xdata CEC_FSTAT _at_ 0x2F68;
unsigned char xdata CEC_ICLR _at_ 0x2F69;
unsigned char xdata CEC_FCLR _at_ 0x2F6A;
unsigned char xdata CEC_TXH _at_ 0x2F6B;
unsigned char xdata CEC_TXD_1 _at_ 0x2F6C;
unsigned char xdata CEC_TXD_2 _at_ 0x2F6D;
unsigned char xdata CEC_TXD_3 _at_ 0x2F6E;
unsigned char xdata CEC_TXD_4 _at_ 0x2F6F;

unsigned char xdata CEC_TXD_5 _at_ 0x2F70;
unsigned char xdata CEC_TXD_6 _at_ 0x2F71;
unsigned char xdata CEC_TXD_7 _at_ 0x2F72;
unsigned char xdata CEC_TXD_8 _at_ 0x2F73;
unsigned char xdata CEC_TXD_9 _at_ 0x2F74;
unsigned char xdata CEC_TXD_10 _at_ 0x2F75;
unsigned char xdata CEC_TXD_11 _at_ 0x2F76;
unsigned char xdata CEC_TXD_12 _at_ 0x2F77;
unsigned char xdata CEC_TXD_13 _at_ 0x2F78;
unsigned char xdata CEC_TXD_14 _at_ 0x2F79;
unsigned char xdata CEC_TXD_15 _at_ 0x2F7A;
unsigned char xdata CEC_TXD_16 _at_ 0x2F7B;
unsigned char xdata CEC_TXD_17 _at_ 0x2F7C;
unsigned char xdata CEC_TXD_18 _at_ 0x2F7D;
unsigned char xdata CEC_TXD_19 _at_ 0x2F7E;
unsigned char xdata CEC_RXH _at_ 0x2F7F;

unsigned char xdata CEC_RXD_1 _at_ 0x2F80;
unsigned char xdata CEC_RXD_2 _at_ 0x2F81;
unsigned char xdata CEC_RXD_3 _at_ 0x2F82;
unsigned char xdata CEC_RXD_4 _at_ 0x2F83;
unsigned char xdata CEC_RXD_5 _at_ 0x2F84;
unsigned char xdata CEC_RXD_6 _at_ 0x2F85;
unsigned char xdata CEC_RXD_7 _at_ 0x2F86;
unsigned char xdata CEC_RXD_8 _at_ 0x2F87;
unsigned char xdata CEC_RXD_9 _at_ 0x2F88;
unsigned char xdata CEC_RXD_10 _at_ 0x2F89;
unsigned char xdata CEC_RXD_11 _at_ 0x2F8A;
unsigned char xdata CEC_RXD_12 _at_ 0x2F8B;
unsigned char xdata CEC_RXD_13 _at_ 0x2F8C;
unsigned char xdata CEC_RXD_14 _at_ 0x2F8D;
unsigned char xdata CEC_RXD_15 _at_ 0x2F8E;
unsigned char xdata CEC_RXD_16 _at_ 0x2F8F;

unsigned char xdata CEC_RXD_17 _at_ 0x2F90;
unsigned char xdata CEC_RXD_18 _at_ 0x2F91;
unsigned char xdata CEC_RXD_19 _at_ 0x2F92;

#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P1PU;
extern unsigned char xdata P2PU;
extern unsigned char xdata P3PU;
extern unsigned char xdata P4PU;
extern unsigned char xdata P5PU;
extern unsigned char xdata P6PU;
extern unsigned char xdata P7PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P1OD;
extern unsigned char xdata P2OD;
extern unsigned char xdata P3OD;

extern unsigned char xdata P4OD;
extern unsigned char xdata P5OD;
extern unsigned char xdata P6OD;
extern unsigned char xdata P7OD;

extern unsigned char xdata P0DB;
extern unsigned char xdata P1DB;
extern unsigned char xdata P2DB;
extern unsigned char xdata P3DB;
extern unsigned char xdata P4DB;
extern unsigned char xdata P5DB;
extern unsigned char xdata P6DB;
extern unsigned char xdata P7DB;

extern unsigned char xdata IRC_PRES0;
extern unsigned char xdata IRC_PRES1;
extern unsigned char xdata IRC_FRMP0;
extern unsigned char xdata IRC_FRM1;
extern unsigned char xdata IRC_CONF;
extern unsigned char xdata IRC_CTRL;
extern unsigned char xdata IRC_EDGE0;
extern unsigned char xdata IRC_EDGE1;
extern unsigned char xdata PSR2;

extern unsigned char xdata FUSE_PKG;
extern unsigned char xdata FUSE_CAL2;
extern unsigned char xdata FUSE_CAL1;
extern unsigned char xdata FUSE_CAL0;
extern unsigned char xdata FUSE_CONF;
extern unsigned char xdata TEST_B;
extern unsigned char xdata TEST_A;

extern unsigned char xdata CEC_PRES0;
extern unsigned char xdata CEC_PRES1;
extern unsigned char xdata CEC_CONF0;
extern unsigned char xdata CEC_CONF1;
extern unsigned char xdata CEC_GCTRL;
extern unsigned char xdata CEC_ICTRL;
extern unsigned char xdata CEC_FCTRL;
extern unsigned char xdata CEC_ISTAT;
extern unsigned char xdata CEC_FSTAT;
extern unsigned char xdata CEC_ICLR;
extern unsigned char xdata CEC_FCLR;
extern unsigned char xdata CEC_TXH;
extern unsigned char xdata CEC_TXD_1;
extern unsigned char xdata CEC_TXD_2;
extern unsigned char xdata CEC_TXD_3;
extern unsigned char xdata CEC_TXD_4;

extern unsigned char xdata CEC_TXD_5;
extern unsigned char xdata CEC_TXD_6;
extern unsigned char xdata CEC_TXD_7;
extern unsigned char xdata CEC_TXD_8;
extern unsigned char xdata CEC_TXD_9;
extern unsigned char xdata CEC_TXD_10;
extern unsigned char xdata CEC_TXD_11;
extern unsigned char xdata CEC_TXD_12;
extern unsigned char xdata CEC_TXD_13;
extern unsigned char xdata CEC_TXD_14;
extern unsigned char xdata CEC_TXD_15;
extern unsigned char xdata CEC_TXD_16;
extern unsigned char xdata CEC_TXD_17;
extern unsigned char xdata CEC_TXD_18;
extern unsigned char xdata CEC_TXD_19;
extern unsigned char xdata CEC_RXH;

extern unsigned char xdata CEC_RXD_1;
extern unsigned char xdata CEC_RXD_2;
extern unsigned char xdata CEC_RXD_3;
extern unsigned char xdata CEC_RXD_4;
extern unsigned char xdata CEC_RXD_5;
extern unsigned char xdata CEC_RXD_6;
extern unsigned char xdata CEC_RXD_7;
extern unsigned char xdata CEC_RXD_8;
extern unsigned char xdata CEC_RXD_9;
extern unsigned char xdata CEC_RXD_10;
extern unsigned char xdata CEC_RXD_11;
extern unsigned char xdata CEC_RXD_12;
extern unsigned char xdata CEC_RXD_13;
extern unsigned char xdata CEC_RXD_14;
extern unsigned char xdata CEC_RXD_15;
extern unsigned char xdata CEC_RXD_16;

extern unsigned char xdata CEC_RXD_17;
extern unsigned char xdata CEC_RXD_18;
extern unsigned char xdata CEC_RXD_19;
#endif

#endif													//_MC96F4548_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
