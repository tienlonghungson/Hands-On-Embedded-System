//======================================================
//	file name	: MC96F7064.h
//	device		: MC96F7064(100/80 LQFP/MQFP)
//	version		: Ver1.2
//	date		: 2015-10-01.Thu
//	author		: ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_MC96F7064_
#define		_MC96F7064_

///======================================================
// PORT Control Register
//======================================================
// PORT0
sfr			P0			= 0x80;			// R/W P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;
sfr			P0IO		= 0xA1;			// R/W P0 Direction Register

// PORT1
sfr			P1			= 0x88;			// R/W P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;
sfr			P1IO		= 0xB1;			// R/W P1 Direction Register

// PORT2
sfr			P2			= 0x90;			// R/W P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;
sfr			P2IO		= 0xB9;			// R/W P2 Direction Register

// PORT3
sfr			P3			= 0x98;			// R/W P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;
sfr			P3IO		= 0xC1;			// R/W P3 Direction Register

// PORT4
sfr			P46DB		= 0xB7;			// R/W P4,P6 Debounce Enable Register	//by nakwon
sfr			P4			= 0xA0;			// R/W P4 Data Register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;
sfr			P4IO		= 0xC9;			// R/W P4 Direction Register

// PORT5
sfr			P5			= 0xB0;			// R/W P5 Data Register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;
sfr			P5IO		= 0xD1;			// R/W P5 Direction Register

// PORT6
sfr			P6			= 0xC0;			// R/W P6 Data Register
	sbit	P60			= 0xC0;
	sbit	P61			= 0xC1;
	sbit	P62			= 0xC2;
	sbit	P63			= 0xC3;
	sbit	P64			= 0xC4;
	sbit	P65			= 0xC5;
	sbit	P66			= 0xC6;
	sbit	P67			= 0xC7;
sfr			P6IO		= 0xD9;			// R/W P6 Direction Register

// PORT7
sfr			P7			= 0x91;			// R/W P7 Data Register
sfr			P7IO		= 0xE1;			// R/W P7 Direction Register

// PORT8
sfr			P8			= 0x92;			// R/W P8 Data Register
sfr			P8IO		= 0xE9;			// R/W P8 Direction Register

// PORT9
sfr			P9			= 0x93;			// R/W P9 Data Register
sfr			P9IO		= 0xF1;			// R/W P9 Direction Register

// PORTA
sfr			PA			= 0x94;			// R/W PA Data Register
sfr			PAIO		= 0x99;			// R/W PA Direction Register

// PORTB
sfr			PB			= 0x95;			// R/W PB Data Register
sfr			PBIO		= 0x9A;			// R/W PB Direction Register

//======================================================
//  M8051 System Register 
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;

sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr16		DPTR0		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		DPTR1		= 0x84;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;

//======================================================
// System Oscillator, Reset Control
//======================================================
sfr			PCON		= 0x87;			// R/W Power Control Register
sfr			LVRCR		= 0xD8;			// R/W Low Voltage Reset Control Register
sfr			LVICR		= 0x86;			// R/W Low Voltage Indicator Control Register
//#define	 LVIF		0x20			// bit5

sfr			RSTFR		= 0xE8;			// R/W Reset Flag Register

sfr			SCCR		= 0x8A;			// R/W System Clock Control Register
sfr			OSCCR		= 0xC8;			// R/W Oscillator Control Register
sfr			PLLCR		= 0x95;			// R/W Phase Locked-Loop Control Register

//======================================================
sfr			BITCR		= 0x8B;
sfr			BITCNT		= 0x8C;
sfr			WDTCR		= 0x8D;
sfr			WDTDR		= 0x8E;
sfr			WDTCNT		= 0x8E;
sfr			BUZDR		= 0x8F;

sfr			WTCR		= 0x96;
sfr			BUZCR		= 0x97;

sfr			ADCCR0		= 0x9B;
sfr			ADCCR1		= 0x9C;
sfr			ADCCR2		= 0x9D;
sfr			ADCDRL		= 0x9E;
sfr			ADCDRH		= 0x9F;

sfr			EIFLAG0		= 0xA3;
sfr			EIFLAG1		= 0xA4;
sfr			EIFLAG2		= 0xA5;
sfr			EIPOL0L		= 0xA6;
sfr			EIPOL0H		= 0xA7;

sfr			IE			= 0xA8;
sbit		EA			= 0xAF;

sfr			IE1			= 0xA9;
sfr			IE2			= 0xAA;
sfr			IE3			= 0xAB;

sfr			SHTDR		= 0xAC;
sfr			EIPOL1		= 0xAD;
sfr			EIPOL2L		= 0xAE;
sfr			EIPOL2H		= 0xAF;

// TIMER 0 Control
sfr			T0CR		= 0xB2;
sfr			T0CNT		= 0xB3;
sfr			T0DR		= 0xB4;
sfr			T0CDR		= 0xB4;

// TIMER 1 Control
sfr			T1CR		= 0xB5;
sfr			T1CNT		= 0xB6;
sfr			T1DR		= 0xB7;
sfr			T1CDR		= 0xB7;

// TIMER 2 Control
sfr			T2CRL		= 0xBA;
sfr			T2CRH		= 0xBB;
sfr			T2ADRL		= 0xBC;
sfr			T2ADRH		= 0xBD;
sfr			T2BDRL		= 0xBE;
sfr			T2BDRH		= 0xBF;

// TIMER 3 Control
sfr			T3CRL		= 0xC2;
sfr			T3CRH		= 0xC3;
sfr			T3ADRL		= 0xC4;
sfr			T3ADRH		= 0xC5;
sfr			T3BDRL		= 0xC6;
sfr			T3BDRH		= 0xC7;

// TIMER 4 Control
sfr			T4CRL		= 0xCA;
sfr			T4CRH		= 0xCB;
sfr			T4ADRL		= 0xCC;
sfr			T4ADRH		= 0xCD;
sfr			T4BDRL		= 0xCE;
sfr			T4BDRH		= 0xCF;

// TIMER 5 Control
sfr			T5CRL		= 0xD2;
sfr			T5CRH		= 0xD3;
sfr			T5ADRL		= 0xD4;
sfr			T5ADRH		= 0xD5;
sfr			T5BDRL		= 0xD6;
sfr			T5BDRH		= 0xD7;

//======================================================
sfr			FLLCRL		= 0xDA;
sfr			FLLCRH		= 0xDB;

sfr			DAC0CRL		= 0xDC;
sfr			DAC0CRH		= 0xDD;
sfr			DAC0DRL		= 0xDE;
sfr			DAC0DRH		= 0xDF;

sfr			FLLFBR		= 0xE2;
sfr			AREFCR		= 0xE3;

sfr			DAC1CRL		= 0xE4;
sfr			DAC1CRH		= 0xE5;
sfr			DAC1DRL		= 0xE6;
sfr			DAC1DRH		= 0xE7;

// LCD Contol
sfr			LCDCRL		= 0xF2;
sfr			LCDCRH		= 0xF3;
sfr			LCDCCR		= 0xF4;

// SPI2 Control
sfr			SPI2CR		= 0xED;
sfr			SPI2DR		= 0xEE;
sfr			SPI2SR		= 0xEF;

// UART2 Control
sfr			UARTCR1		= 0xF2;
sfr			UARTCR2		= 0xF3;
sfr			UARTCR3		= 0xF4;
sfr			UART2ST		= 0xF5;
sfr			UART2BD		= 0xF6;
sfr			UART2DR		= 0xF7;

//======================================================
sfr			IP			= 0xB8;
sfr			IP1			= 0xF8;

// Flash Memory Control
sfr			FSADRH		= 0xFA;			// R/W Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// R/W Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// R/W Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// R/W Flash Identification Register
sfr			FMCR		= 0xFE;			// R/W Flash Mode Control Register

//======================================================
// Extended SFR
//======================================================
#ifdef MAIN
unsigned char xdata P0OD _at_ 0x1000;	// R/W P0 Open-drain Select Register
unsigned char xdata P1OD _at_ 0x1001;	// R/W P1 Open-drain Select Register
unsigned char xdata P2OD _at_ 0x1002;	// R/W P2 Open-drain Select Register
unsigned char xdata P3OD _at_ 0x1003;	// R/W P3 Open-drain Select Register
unsigned char xdata P4OD _at_ 0x1004;	// R/W P4 Open-drain Select Register
unsigned char xdata P5OD _at_ 0x1005;	// R/W P5 Open-drain Select Register
unsigned char xdata P6OD _at_ 0x1006;	// R/W P6 Open-drain Select Register
unsigned char xdata P7OD _at_ 0x1007;	// R/W P7 Open-drain Select Register
unsigned char xdata P8OD _at_ 0x1008;	// R/W P8 Open-drain Select Register
unsigned char xdata P9OD _at_ 0x1009;	// R/W P9 Open-drain Select Register
unsigned char xdata PAOD _at_ 0x100A;	// R/W PA Open-drain Select Register
unsigned char xdata PBOD _at_ 0x100B;	// R/W PB Open-drain Select Register

unsigned char xdata P034DB _at_ 0x100D;	// R/W debounce Register
unsigned char xdata P1DB _at_ 0x100E;	// R/W debounce Register
unsigned char xdata P5DB _at_ 0x100F;	// R/W debounce Register

unsigned char xdata P0PU _at_ 0x1010;	// R/W P0 pullup Register
unsigned char xdata P1PU _at_ 0x1011;	// R/W P1 pullup Register
unsigned char xdata P2PU _at_ 0x1012;	// R/W P2 pullup Register
unsigned char xdata P3PU _at_ 0x1013;	// R/W P3 pullup Register
unsigned char xdata P4PU _at_ 0x1014;	// R/W P4 pullup Register
unsigned char xdata P5PU _at_ 0x1015;	// R/W P5 pullup Register
unsigned char xdata P6PU _at_ 0x1016;	// R/W P6 pullup Register
unsigned char xdata P7PU _at_ 0x1017;	// R/W P7 pullup Register
unsigned char xdata P8PU _at_ 0x1018;	// R/W P8 pullup Register
unsigned char xdata P9PU _at_ 0x1019;	// R/W P9 pullup Register
unsigned char xdata PAPU _at_ 0x101A;	// R/W PA pullup Register
unsigned char xdata PBPU _at_ 0x101B;	// R/W PB pullup Register

unsigned char xdata P0BFSR _at_ 0x1020;
unsigned char xdata PAFSR _at_ 0x1021;
unsigned char xdata P1FSRL _at_ 0x1022;
unsigned char xdata P1FSRH _at_ 0x1023;
unsigned char xdata P2FSRL _at_ 0x1024;
unsigned char xdata P2FSRH _at_ 0x1025;
unsigned char xdata P3FSRL _at_ 0x1026;
unsigned char xdata P3FSRH _at_ 0x1027;
unsigned char xdata P4FSRL _at_ 0x1028;
unsigned char xdata P4FSRH _at_ 0x1029;
unsigned char xdata P5FSRL _at_ 0x102A;
unsigned char xdata P5FSRH _at_ 0x102B;
unsigned char xdata P6FSR _at_ 0x102C;
unsigned char xdata P7FSR _at_ 0x102D;
unsigned char xdata P8FSR _at_ 0x102E;
unsigned char xdata P9FSR _at_ 0x102F;

//======================================================
unsigned char xdata USI0CR1 _at_ 0x1030;
unsigned char xdata USI0CR2 _at_ 0x1031;
unsigned char xdata USI0CR3 _at_ 0x1032;
unsigned char xdata USI0CR4 _at_ 0x1033;

unsigned char xdata WTDRL _at_ 0x1034;
unsigned char xdata WTDRH _at_ 0x1035;
unsigned char xdata WTCNTL _at_ 0x1036;
unsigned char xdata WTCNTH _at_ 0x1037;

unsigned char xdata USI0ST1 _at_ 0x1038;
unsigned char xdata USI0ST2 _at_ 0x1039;
unsigned char xdata USI0BD _at_ 0x103A;
unsigned char xdata USI0SDHR _at_ 0x103B;
unsigned char xdata USI0DR _at_ 0x103C;
unsigned char xdata USI0SCLR _at_ 0x103D;
unsigned char xdata USI0SCHR _at_ 0x103E;
unsigned char xdata USI0SAR _at_ 0x103F;

unsigned char xdata USI1CR1 _at_ 0x1040;
unsigned char xdata USI1CR2 _at_ 0x1041;
unsigned char xdata USI1CR3 _at_ 0x1042;
unsigned char xdata USI1CR4 _at_ 0x1043;

unsigned char xdata USI1ST1 _at_ 0x1048;
unsigned char xdata USI1ST2 _at_ 0x1049;
unsigned char xdata USI1BD _at_ 0x104A;
unsigned char xdata USI1SDHR _at_ 0x104B;
unsigned char xdata USI1DR _at_ 0x104C;
unsigned char xdata USI1SCLR _at_ 0x104D;
unsigned char xdata USI1SCHR _at_ 0x104E;
unsigned char xdata USI1SAR _at_ 0x104F;

//======================================================
unsigned char xdata OP0CRL _at_ 0x1050;
unsigned char xdata OP0CRH _at_ 0x1051;
unsigned char xdata OP1CRL _at_ 0x1052;
unsigned char xdata OP1CRH _at_ 0x1053;
unsigned char xdata OP2CRL _at_ 0x1054;
unsigned char xdata OP2CRH _at_ 0x1055;

#else
extern unsigned char xdata P0OD;
extern unsigned char xdata P1OD;
extern unsigned char xdata P2OD;
extern unsigned char xdata P3OD;
extern unsigned char xdata P4OD;
extern unsigned char xdata P5OD;
extern unsigned char xdata P6OD;
extern unsigned char xdata P7OD;
extern unsigned char xdata P8OD;
extern unsigned char xdata P9OD;
extern unsigned char xdata PAOD;
extern unsigned char xdata PBOD;

extern unsigned char xdata P034DB;
extern unsigned char xdata P1DB;
extern unsigned char xdata P5DB;

extern unsigned char xdata P0PU;
extern unsigned char xdata P1PU;
extern unsigned char xdata P2PU;
extern unsigned char xdata P3PU;
extern unsigned char xdata P4PU;
extern unsigned char xdata P5PU;
extern unsigned char xdata P6PU;
extern unsigned char xdata P7PU;
extern unsigned char xdata P8PU;
extern unsigned char xdata P9PU;
extern unsigned char xdata PAPU;
extern unsigned char xdata PBPU;

extern unsigned char xdata P0BFSR;
extern unsigned char xdata PAFSR;
extern unsigned char xdata P1FSRL;
extern unsigned char xdata P1FSRH;
extern unsigned char xdata P2FSRL;
extern unsigned char xdata P2FSRH;
extern unsigned char xdata P3FSRL;
extern unsigned char xdata P3FSRH;
extern unsigned char xdata P4FSRL;
extern unsigned char xdata P4FSRH;
extern unsigned char xdata P5FSRL;
extern unsigned char xdata P5FSRH;
extern unsigned char xdata P6FSR;
extern unsigned char xdata P7FSR;
extern unsigned char xdata P8FSR;
extern unsigned char xdata P9FSR;

extern unsigned char xdata USI0CR1;
extern unsigned char xdata USI0CR2;
extern unsigned char xdata USI0CR3;
extern unsigned char xdata USI0CR4;

extern unsigned char xdata WTDRL;
extern unsigned char xdata WTDRH;
extern unsigned char xdata WTCNTL;
extern unsigned char xdata WTCNTH;

extern unsigned char xdata USI0ST1;
extern unsigned char xdata USI0ST2;
extern unsigned char xdata USI0BD;
extern unsigned char xdata USI0SDHR;
extern unsigned char xdata USI0DR;
extern unsigned char xdata USI0SCLR;
extern unsigned char xdata USI0SCHR;
extern unsigned char xdata USI0SAR;

extern unsigned char xdata USI1CR1;
extern unsigned char xdata USI1CR2;
extern unsigned char xdata USI1CR3;
extern unsigned char xdata USI1CR4;

extern unsigned char xdata USI1ST1;
extern unsigned char xdata USI1ST2;
extern unsigned char xdata USI1BD;
extern unsigned char xdata USI1SDHR;
extern unsigned char xdata USI1DR;
extern unsigned char xdata USI1SCLR;
extern unsigned char xdata USI1SCHR;
extern unsigned char xdata USI1SAR;


extern unsigned char xdata OP0CRL;
extern unsigned char xdata OP0CRH;
extern unsigned char xdata OP1CRL;
extern unsigned char xdata OP1CRH;
extern unsigned char xdata OP2CRL;
extern unsigned char xdata OP2CRH;
#endif

#endif	//_MC96F7064_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
