//======================================================
//	
//	MC97F2664 Special Function Register assignment
//	Version 1.2
//					2015-10-01.Thu
//	
//======================================================

#include	<intrins.h>

#ifndef		_MC97F2664_
#define		_MC97F2664_

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
sfr			WTCR		= 0x8F;

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

sfr			XSP			= 0x91;
sfr			IP0L		= 0x92;
sfr			IP0H		= 0x93;
sfr			TINTCR		= 0x95;
sfr			TIFLAG0		= 0x96;
sfr			TIFLAG1		= 0x97;

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

sfr			P0IO		= 0x99;
sfr			IP1L		= 0x9A;
sfr			IP1H		= 0x9B;
sfr			IP2L		= 0x9C;
sfr			IP2H		= 0x9D;
sfr			IP3L		= 0x9E;
sfr			IP3H		= 0x9F;

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

sfr			P1IO		= 0xA1;
sfr			EO			= 0xA2;
sfr			EIFLAG0		= 0xA3;
sfr			EIFLAG1		= 0xA4;
sfr			EIFLAG2		= 0xA5;
sfr16		EIPOL0		= 0xA6;
sfr			EIPOL0L		= 0xA6;
sfr			EIPOL0H		= 0xA7;

//------------------------------------------------- 0xA8
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
sfr16		EIPOL1		= 0xAC;
sfr			EIPOL1L		= 0xAC;
sfr			EIPOL1H		= 0xAD;
sfr16		EIPOL2		= 0xAE;
sfr			EIPOL2L		= 0xAE;
sfr			EIPOL2H		= 0xAF;

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

sfr			P2IO		= 0xB1;
sfr			T0CR		= 0xB2;
sfr			T0CNT		= 0xB3;
sfr			T0DR		= 0xB4;
sfr			T0CDR		= 0xB4;
sfr			T1CR		= 0xB5;
sfr			T1CNT		= 0xB6;
sfr			T1DR		= 0xB7;
sfr			T1CDR		= 0xB7;

//------------------------------------------------- 0xB8
sfr			P6			= 0xB8;
	sbit	P67			= 0xBF;
	sbit	P66			= 0xBE;
	sbit	P65			= 0xBD;
	sbit	P64			= 0xBC;
	sbit	P63			= 0xBB;
	sbit	P62			= 0xBA;
	sbit	P61			= 0xB9;
	sbit	P60			= 0xB8;

sfr			P3IO		= 0xB9;
sfr			T2CR		= 0xBA;
sfr			T2CNT		= 0xBB;
sfr			T2DR		= 0xBC;
sfr			T2CDR		= 0xBC;
sfr			T3CR		= 0xBD;
sfr			T3CNT		= 0xBE;
sfr			T3DR		= 0xBF;
sfr			T3CDR		= 0xBF;

//------------------------------------------------- 0xC0
sfr			P7			= 0xC0;
	sbit	P74			= 0xC4;
	sbit	P73			= 0xC3;
	sbit	P72			= 0xC2;
	sbit	P71			= 0xC1;
	sbit	P70			= 0xC0;

sfr			P4IO		= 0xC1;
sfr			SPI2CR		= 0xC2;
sfr			SPI2DR		= 0xC3;
sfr			SPI2SR		= 0xC4;
sfr			SPI3CR		= 0xC5;
sfr			SPI3DR		= 0xC6;
sfr			SPI3SR		= 0xC7;

//------------------------------------------------- 0xC8
sfr			OSCCR		= 0xC8;
	sbit	IRCE		= 0xCA;
	sbit	XCLKE		= 0xC9;
	sbit	SCLKE		= 0xC8;

sfr			P5IO		= 0xC9;
sfr			T4CRL		= 0xCA;
sfr			T4CRH		= 0xCB;
sfr16		T4ADR		= 0xCC;
sfr			T4ADRL		= 0xCC;
sfr			T4ADRH		= 0xCD;
sfr			T4BDRL		= 0xCE;
sfr			T4BDRH		= 0xCF;

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

sfr			P6IO		= 0xD1;
sfr			T5CRL		= 0xD2;
sfr			T5CRH		= 0xD3;
sfr16		T5ADR		= 0xD4;
sfr			T5ADRL		= 0xD4;
sfr			T5ADRH		= 0xD5;
sfr			T5BDRL		= 0xD6;
sfr			T5BDRH		= 0xD7;

//------------------------------------------------- 0xD8
sfr			LVRCR		= 0xD8;
	sbit	LVRST		= 0xDF;
	sbit	LVREN		= 0xD8;

sfr			P7IO		= 0xD9;
sfr			T6CRL		= 0xDA;
sfr			T6CRH		= 0xDB;
sfr			T6ADRL		= 0xDC;
sfr			T6ADRH		= 0xDD;
sfr			T6BDRL		= 0xDE;
sfr			T6BDRH		= 0xDF;

//------------------------------------------------- 0xE0
sfr			ACC			= 0xE0;
sfr			P1DB		= 0xE1;
sfr			T7CRL		= 0xE2;
sfr			T7CRH		= 0xE3;
sfr			T7ADRL		= 0xE4;
sfr			T7ADRH		= 0xE5;
sfr			T7BDRL		= 0xE6;
sfr			T7BDRH		= 0xE7;

//------------------------------------------------- 0xE8
sfr			RSTFR		= 0xE8;
	sbit	PORF		= 0xEF;
	sbit	EXTRF		= 0xEE;
	sbit	WDTRF		= 0xED;
	sbit	OCDRF		= 0xEC;
	sbit	LVRF		= 0xEB;

sfr			P2DB		= 0xE9;
sfr			T8CRL		= 0xEA;
sfr			T8CRH		= 0xEB;
sfr16		T8ADR		= 0xEC;
sfr			T8ADRL		= 0xEC;
sfr			T8ADRH		= 0xED;
sfr			T8BDRL		= 0xEE;
sfr			T8BDRH		= 0xEF;

//------------------------------------------------- 0xF0
sfr			B			= 0xF0;
sfr			P35DB		= 0xF1;
sfr			BUZCR		= 0xF2;
sfr			BUZDR		= 0xF3;
sfr			SPWRL		= 0xF4;
sfr			SPWRH		= 0xF5;
sfr			XSPCR		= 0xF6;
sfr			SINTCR		= 0xF7;

//------------------------------------------------- 0xF8
sfr			XBANK		= 0xF8;
//sfr		X			= 0xF9;
sfr			FSADRH		= 0xFA;
sfr			FSADRM		= 0xFB;
sfr			FSADRL		= 0xFC;
sfr			FIDR		= 0xFD;
sfr			FMCR		= 0xFE;
sfr			MODINR		= 0xFF;

#ifdef MAIN
unsigned char xdata	P0OD _at_ 0x1000;
unsigned char xdata	P1OD _at_ 0x1001;
unsigned char xdata	P2OD _at_ 0x1002;
unsigned char xdata	P3OD _at_ 0x1003;
unsigned char xdata	P4OD _at_ 0x1004;
unsigned char xdata	P5OD _at_ 0x1005;
unsigned char xdata	P6OD _at_ 0x1006;
unsigned char xdata	P7OD _at_ 0x1007;
unsigned char xdata	P0PU _at_ 0x1008;
unsigned char xdata	P1PU _at_ 0x1009;
unsigned char xdata	P2PU _at_ 0x100A;
unsigned char xdata	P3PU _at_ 0x100B;
unsigned char xdata	P4PU _at_ 0x100C;
unsigned char xdata	P5PU _at_ 0x100D;
unsigned char xdata	P6PU _at_ 0x100E;
unsigned char xdata	P7PU _at_ 0x100F;
unsigned char xdata	P0FSR _at_ 0x1010;
unsigned char xdata	P1FSR _at_ 0x1011;
unsigned char xdata	P2FSR _at_ 0x1012;
unsigned char xdata	P3FSR _at_ 0x1013;
unsigned char xdata	P4FSR _at_ 0x1014;
unsigned char xdata	P5FSR _at_ 0x1015;
unsigned char xdata	P6FSR _at_ 0x1016;
unsigned char xdata	P7FSR _at_ 0x1017;
unsigned char xdata	USI0CR1 _at_ 0x1018;
unsigned char xdata	USI0CR2 _at_ 0x1019;
unsigned char xdata	USI0CR3 _at_ 0x101A;
unsigned char xdata	USI0CR4 _at_ 0x101B;

unsigned char xdata	USI0ST1 _at_ 0x1020;
unsigned char xdata	USI0ST2 _at_ 0x1021;
unsigned char xdata	USI0BD _at_ 0x1022;
unsigned char xdata	USI0SDHR _at_ 0x1023;
unsigned char xdata	USI0DR _at_ 0x1024;
unsigned char xdata	USI0SCLR _at_ 0x1025;
unsigned char xdata	USI0SCHR _at_ 0x1026;
unsigned char xdata	USI0SAR _at_ 0x1027;
unsigned char xdata	USI1CR1 _at_ 0x1028;
unsigned char xdata	USI1CR2 _at_ 0x1029;
unsigned char xdata	USI1CR3 _at_ 0x102A;
unsigned char xdata	USI1CR4 _at_ 0x102B;

unsigned char xdata	USI1ST1 _at_ 0x1030;
unsigned char xdata	USI1ST2 _at_ 0x1031;
unsigned char xdata	USI1BD _at_ 0x1032;
unsigned char xdata	USI1SDHR _at_ 0x1033;
unsigned char xdata	USI1DR _at_ 0x1034;
unsigned char xdata	USI1SCLR _at_ 0x1035;
unsigned char xdata	USI1SCHR _at_ 0x1036;
unsigned char xdata	USI1SAR _at_ 0x1037;
unsigned char xdata	UART2CR1 _at_ 0x1038;
unsigned char xdata	UART2CR2 _at_ 0x1039;
unsigned char xdata	UART2CR3 _at_ 0x103A;
unsigned char xdata	UART2ST _at_ 0x103B;
unsigned char xdata	UART2BD _at_ 0x103C;
unsigned char xdata	UART2DR _at_ 0x103D;

unsigned char xdata	UART3CR1 _at_ 0x1040;
unsigned char xdata	UART3CR2 _at_ 0x1041;
unsigned char xdata	UART3CR3 _at_ 0x1042;
unsigned char xdata	UART3ST _at_ 0x1043;
unsigned char xdata	UART3BD _at_ 0x1044;
unsigned char xdata	UART3DR _at_ 0x1045;
unsigned char xdata	UART4CR1 _at_ 0x1048;
unsigned char xdata	UART4CR2 _at_ 0x1049;
unsigned char xdata	UART4CR3 _at_ 0x104A;
unsigned char xdata	UART4ST _at_ 0x104B;
unsigned char xdata	UART4BD _at_ 0x104C;
unsigned char xdata	UART4DR _at_ 0x104D;

unsigned char xdata	ADCCRL _at_ 0x1050;
unsigned char xdata	ADCCRH _at_ 0x1051;
unsigned char xdata	ADCDRL _at_ 0x1052;
unsigned char xdata	ADCDRH _at_ 0x1053;
unsigned char xdata	T9CRL _at_ 0x1058;
unsigned char xdata	T9CRH _at_ 0x1059;
unsigned char xdata	T9ADRL _at_ 0x105A;
unsigned char xdata	T9ADRH _at_ 0x105B;
unsigned char xdata	T9BDRL _at_ 0x105C;
unsigned char xdata	T9BDRH _at_ 0x105D;

#else
extern unsigned char xdata	P0OD;
extern unsigned char xdata	P1OD;
extern unsigned char xdata	P2OD;
extern unsigned char xdata	P3OD;
extern unsigned char xdata	P4OD;
extern unsigned char xdata	P5OD;
extern unsigned char xdata	P6OD;
extern unsigned char xdata	P7OD;
extern unsigned char xdata	P0PU;
extern unsigned char xdata	P1PU;
extern unsigned char xdata	P2PU;
extern unsigned char xdata	P3PU;
extern unsigned char xdata	P4PU;
extern unsigned char xdata	P5PU;
extern unsigned char xdata	P6PU;
extern unsigned char xdata	P7PU;
extern unsigned char xdata	P0FSR;
extern unsigned char xdata	P1FSR;
extern unsigned char xdata	P2FSR;
extern unsigned char xdata	P3FSR;
extern unsigned char xdata	P4FSR;
extern unsigned char xdata	P5FSR;
extern unsigned char xdata	P6FSR;
extern unsigned char xdata	P7FSR;
extern unsigned char xdata	USI0CR1;
extern unsigned char xdata	USI0CR2;
extern unsigned char xdata	USI0CR3;
extern unsigned char xdata	USI0CR4;

extern unsigned char xdata	USI0ST1;
extern unsigned char xdata	USI0ST2;
extern unsigned char xdata	USI0BD;
extern unsigned char xdata	USI0SDHR;
extern unsigned char xdata	USI0DR;
extern unsigned char xdata	USI0SCLR;
extern unsigned char xdata	USI0SCHR;
extern unsigned char xdata	USI0SAR;
extern unsigned char xdata	USI1CR1;
extern unsigned char xdata	USI1CR2;
extern unsigned char xdata	USI1CR3;
extern unsigned char xdata	USI1CR4;

extern unsigned char xdata	USI1ST1;
extern unsigned char xdata	USI1ST2;
extern unsigned char xdata	USI1BD;
extern unsigned char xdata	USI1SDHR;
extern unsigned char xdata	USI1DR;
extern unsigned char xdata	USI1SCLR;
extern unsigned char xdata	USI1SCHR;
extern unsigned char xdata	USI1SAR;
extern unsigned char xdata	UART2CR1;
extern unsigned char xdata	UART2CR2;
extern unsigned char xdata	UART2CR3;
extern unsigned char xdata	UART2ST;
extern unsigned char xdata	UART2BD;
extern unsigned char xdata	UART2DR;

extern unsigned char xdata	UART3CR1;
extern unsigned char xdata	UART3CR2;
extern unsigned char xdata	UART3CR3;
extern unsigned char xdata	UART3ST;
extern unsigned char xdata	UART3BD;
extern unsigned char xdata	UART3DR;
extern unsigned char xdata	UART4CR1;
extern unsigned char xdata	UART4CR2;
extern unsigned char xdata	UART4CR3;
extern unsigned char xdata	UART4ST;
extern unsigned char xdata	UART4BD;
extern unsigned char xdata	UART4DR;

extern unsigned char xdata	ADCCRL;
extern unsigned char xdata	ADCCRH;
extern unsigned char xdata	ADCDRL;
extern unsigned char xdata	ADCDRH;
extern unsigned char xdata	T9CRL;
extern unsigned char xdata	T9CRH;
extern unsigned char xdata	T9ADRL;
extern unsigned char xdata	T9ADRH;
extern unsigned char xdata	T9BDRL;
extern unsigned char xdata	T9BDRH;
#endif

#endif													//_MC97F2664_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
