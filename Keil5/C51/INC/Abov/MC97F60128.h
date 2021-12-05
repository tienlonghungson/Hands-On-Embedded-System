//======================================================
//		file name: MC97F60128.h
//		device   : MC97F60128/68128/66128
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC97F60128_H_
#define _MC97F60128_H_

//------------------------------------------------------
sfr			P0			= 0x80;			// R/W, P0 Data Register
	sbit	P07			= P0^7;
	sbit	P06			= P0^6;
	sbit	P05			= P0^5;
	sbit	P04			= P0^4;
	sbit	P03			= P0^3;
	sbit	P02			= P0^2;
	sbit	P01			= P0^1;
	sbit	P00			= P0^0;
sfr			P0IO		= 0xB2;			// R/W, P0 Direction Register
sfr			P0PU		= 0xEA;			// R/W, P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0xCC;			// R/W, P0 Debounce Enable Register
#ifdef MAIN
unsigned char xdata P0OD _at_ 0x4010;	// R/W, P0 Open-drain Selection Register
unsigned char xdata P0FSR _at_ 0x401D;	// R/W, P0 Function Selection register
#else
extern unsigned char xdata P0OD;
extern unsigned char xdata P0FSR;
#endif
//------------------------------------------------------
sfr			P1			= 0x88;			// R/W, P1 Data register
	sbit	P17			= P1^7;
	sbit	P16			= P1^6;
	sbit	P15			= P1^5;
	sbit	P14			= P1^4;
	sbit	P13			= P1^3;
	sbit	P12			= P1^2;
	sbit	P11			= P1^1;
	sbit	P10			= P1^0;
sfr			P1IO		= 0xB3;			// R/W, P1 Direction register
sfr			P1PU		= 0xEB;			// R/W, P1 Pull-up Resistor Selection register
sfr			P1DB		= 0xCD;			// R/W, P1 Debounce Enable register
#ifdef MAIN
unsigned char xdata P1OD _at_ 0x4011;	// R/W, P1 Open-drain Selection register
unsigned char xdata P1FSRH _at_ 0x401F;	// R/W, P1 Function Selection High register
unsigned char xdata P1FSRL _at_ 0x401E;	// R/W, P1 Function Selection Low Register
#else
extern unsigned char xdata P1OD;
extern unsigned char xdata P1FSRH;
extern unsigned char xdata P1FSRL;
#endif

//------------------------------------------------------
sfr			P2			= 0x90;			// R/W, P2 Data Register
	sbit	P27			= P2^7;
	sbit	P26			= P2^6;
	sbit	P25			= P2^5;
	sbit	P24			= P2^4;
	sbit	P23			= P2^3;
	sbit	P22			= P2^2;
	sbit	P21			= P2^1;
	sbit	P20			= P2^0;
sfr			P2IO		= 0xB4;			// R/W, P2 Direction Register
sfr			P2PU		= 0xEC;			// R/W, P2 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P2OD _at_ 0x4012;	// R/W, P2 Open-drain Selection Register
unsigned char xdata P2FSRH _at_ 0x4021;	// R/W, P2 Function Selection High Register
unsigned char xdata P2FSRL _at_ 0x4020;	// R/W, P2 Function Selection Low register
#else
extern unsigned char xdata P2OD;
extern unsigned char xdata P2FSRH;
extern unsigned char xdata P2FSRL;
#endif
//------------------------------------------------------
sfr			P3			= 0x98;			// R/W, P3 Data register
	sbit	P37			= P3^7;
	sbit	P36			= P3^6;
	sbit	P35			= P3^5;
	sbit	P34			= P3^4;
	sbit	P33			= P3^3;
	sbit	P32			= P3^2;
	sbit	P31			= P3^1;
	sbit	P30			= P3^0;
sfr			P3IO		= 0xB5;			// R/W, P3 Direction register
sfr			P3PU		= 0xED;			// R/W, P3 Pull-up Resistor Selection register
#ifdef MAIN
unsigned char xdata P3OD _at_ 0x4013;	// R/W, P3 Open-drain Selection register
unsigned char xdata P3FSRH _at_ 0x4023;	// R/W, P3 Function Selection High register
unsigned char xdata P3FSRL _at_ 0x4022;	// R/W, P3 Function Selection Low register
#else
extern unsigned char xdata P3OD;
extern unsigned char xdata P3FSRH;
extern unsigned char xdata P3FSRL;
#endif
//------------------------------------------------------
sfr			P4			= 0xA0;			// R/W, P4 Data register
	sbit	P47			= P4^7;
	sbit	P46			= P4^6;
	sbit	P45			= P4^5;
	sbit	P44			= P4^4;
	sbit	P43			= P4^3;
	sbit	P42			= P4^2;
	sbit	P41			= P4^1;
	sbit	P40			= P4^0;
sfr			P4IO		= 0xB1;			// R/W, P4 Direction register
sfr			P4PU		= 0xEE;			// R/W, P4 Pull-up Resistor Selection register
sfr			P46DB		= 0xCE;			// R/W, P4/P6 Debounce Enable register
#ifdef MAIN
unsigned char xdata P4OD _at_ 0x4014;	// R/W, P4 Open-drain Selection register
unsigned char xdata P4FSRH _at_ 0x4025;	// R/W, P4 Function Selection High register
unsigned char xdata P4FSRL _at_ 0x4024;	// R/W, P4 Function Selection Low register
#else
extern unsigned char xdata P4OD;
extern unsigned char xdata P4FSRH;
extern unsigned char xdata P4FSRL;
#endif
//------------------------------------------------------
sfr			P5			= 0xB0;			// R/W, P5 Data Register
	sbit	P57			= P5^7;
	sbit	P56			= P5^6;
	sbit	P55			= P5^5;
	sbit	P54			= P5^4;
	sbit	P53			= P5^3;
	sbit	P52			= P5^2;
	sbit	P51			= P5^1;
	sbit	P50			= P5^0;
sfr			P5IO		= 0xB9;			// R/W, P5 Direction Register
sfr			P5PU		= 0xEF;			// R/W, P5 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P5OD _at_ 0x4015;	// R/W, P5 Open-drain Selection Register
unsigned char xdata P5FSRH _at_ 0x4027;	// R/W, P5 Function Selection High Register
unsigned char xdata P5FSRL _at_ 0x4026;	// R/W, P5 Function Selection Low Register
#else
extern unsigned char xdata P5OD;
extern unsigned char xdata P5FSRH;
extern unsigned char xdata P5FSRL;
#endif
//------------------------------------------------------
sfr			P6			= 0xB8;			// R/W, P6 Data register
	sbit	P67			= P6^7;
	sbit	P66			= P6^6;
	sbit	P65			= P6^5;
	sbit	P64			= P6^4;
	sbit	P63			= P6^3;
	sbit	P62			= P6^2;
	sbit	P61			= P6^1;
	sbit	P60			= P6^0;
sfr			P6IO		= 0xC1;			// R/W, P6 Direction register
sfr			P6PU		= 0xA6;			// R/W, P6 Pull-up Resistor Selection register
#ifdef MAIN
unsigned char xdata P6OD _at_ 0x4016;	// R/W, P6 Open-drain Selection register
unsigned char xdata P6FSRH _at_ 0x4029;	// R/W, P6 Function Selection High register
unsigned char xdata P6FSRL _at_ 0x4028;	// R/W, P6 Function Selection Low Register
#else
extern unsigned char xdata P6OD;
extern unsigned char xdata P6FSRH;
extern unsigned char xdata P6FSRL;
#endif
//------------------------------------------------------
sfr			P7			= 0xC0;			// R/W, P7 Data Register
	sbit	P77			= P7^7;
	sbit	P76			= P7^6;
	sbit	P75			= P7^5;
	sbit	P74			= P7^4;
	sbit	P73			= P7^3;
	sbit	P72			= P7^2;
	sbit	P71			= P7^1;
	sbit	P70			= P7^0;
sfr			P7IO		= 0xC9;			// R/W, P7 Direction Register
sfr			P7PU		= 0xA7;			// R/W, P7 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P7OD _at_ 0x4017;	// R/W, P7 Open-drain Selection Register
unsigned char xdata P7FSRH _at_ 0x402B;	// R/W, P7 Function Selection High Register
unsigned char xdata P7FSRL _at_ 0x402A;	// P7 Function Selection Low Register
#else
extern unsigned char xdata P7OD;
extern unsigned char xdata P7FSRH;
extern unsigned char xdata P7FSRL;
#endif
//------------------------------------------------------
sfr			P8			= 0x99;			// R/W, P8 Data register
sfr			P8IO		= 0xD1;			// R/W, P8 Direction register
sfr			P8PU		= 0xAD;			// R/W, P8 Pull-up Resistor Selection register
#ifdef MAIN
unsigned char xdata P8OD _at_ 0x4018;	// R/W, P8 Open-drain Selection register
unsigned char xdata P8FSR _at_ 0x402C;	// R/W, P8 Function Selection Register
#else
extern unsigned char xdata P8OD;
extern unsigned char xdata P8FSR;
#endif
//------------------------------------------------------
sfr			P9			= 0xA1;			// R/W, P9 Data register
sfr			P9IO		= 0xD9;			// R/W, P9 Direction register
sfr			P9PU		= 0xAE;			// R/W, P9 Pull-up Resistor Selection register
sfr			P9DB		= 0xCF;			// R/W, P9 Debounce Enable register
#ifdef MAIN
unsigned char xdata P9OD _at_ 0x4019;	// R/W, P9 Open-drain Selection register
unsigned char xdata P9FSR _at_ 0x402D;	// R/W, P9 Function Selection Register
#else
extern unsigned char xdata P9OD;
extern unsigned char xdata P9FSR;
#endif
//------------------------------------------------------
sfr			PA			= 0xA3;			// R/W, PA Data register
sfr			PAIO		= 0xE1;			// R/W, PA Direction register
sfr			PAPU		= 0xAF;			// R/W, PA Pull-up Resistor Selection register
sfr			PADB		= 0xD7;			// R/W, PA Debounce Enable register
#ifdef MAIN
unsigned char xdata PAOD _at_ 0x401A;	// R/W, PA Open-drain Selection register
unsigned char xdata PAFSR _at_ 0x402E;	// R/W, PA Function Selection Register
#else
extern unsigned char xdata PAOD;
extern unsigned char xdata PAFSR;
#endif
//------------------------------------------------------
sfr			PB			= 0xA4;			// R/W, PB Data register
sfr			PBIO		= 0xE9;			// R/W, PB Direction register
sfr			PBPU		= 0xB6;			// R/W, PB Pull-up Resistor Selection register
#ifdef MAIN
unsigned char xdata PBOD _at_ 0x401B;	// R/W, PB Open-drain Selection register
unsigned char xdata PBFSR _at_ 0x402F;	// R/W, PB Function Selection Register
#else
extern unsigned char xdata PBOD;
extern unsigned char xdata PBFSR;
#endif
//------------------------------------------------------
sfr			PD			= 0xA5;			// R/W, PD Data register
sfr			PDIO		= 0xF1;			// R/W, PD Direction register
sfr			PDPU		= 0xB7;			// R/W, PD Pull-up Resistor Selection register
#ifdef MAIN
unsigned char xdata PDOD _at_ 0x401C;	// R/W, PD Open-drain Selection register
unsigned char xdata PDFSR _at_ 0x4037;	// R/W, PD Function Selection Register
#else
extern unsigned char xdata PDOD;
extern unsigned char xdata PDFSR;
#endif
//------------------------------------------------------
// interrupt
sfr			IE			= 0xA8;			// R/W, Interrupt Enable Register
sfr			IE1			= 0xA9;			// R/W, Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// R/W, Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// R/W, Interrupt Enable Register 3
sfr			IP0L		= 0x92;			// R/W, Interrupt Priority 0 Low Register
sfr			IP0H		= 0x93;			// R/W, Interrupt Priority 0 High Register
sfr			IP1L		= 0x9A;			// R/W, Interrupt Priority 1 Low Register
sfr			IP1H		= 0x9B;			// R/W, Interrupt Priority 1 High Register
sfr			IP2L		= 0x9C;			// R/W, Interrupt Priority 2 Low Register
sfr			IP2H		= 0x9D;			// R/W, Interrupt Priority 2 High Register
sfr			IP3L		= 0x9E;			// R/W, Interrupt Priority 3 Low Register
sfr			IP3H		= 0x9F;			// R/W, Interrupt Priority 3 High Register
sfr			EIFLAG0		= 0xBA;			// R/W, External Interrupt Flag 0 Register
sfr			EIPOL0L		= 0xC2;			// R/W, External Interrupt Polarity 0 Low Register
sfr			EIPOL0H		= 0xC3;			// R/W, External Interrupt Polarity 0 High Register
sfr			EIFLAG1		= 0xBB;			// R/W, External Interrupt Flag 1 Register
sfr			EIPOL1		= 0xBF;			// R/W, External Interrupt Polarity 1 Register
sfr			EIFLAG2		= 0xBC;			// R/W, External Interrupt Flag 2 Register
sfr			EIPOL2L		= 0xC4;			// R/W, External Interrupt Polarity 2 Low Register
sfr			EIPOL2H		= 0xC5;			// R/W, External Interrupt Polarity 2 High Register
sfr			EIFLAG3		= 0xBD;			// R/W, External Interrupt Flag 3 Register
sfr			EIPOL3L		= 0xC6;			// R/W, External Interrupt Polarity 3 Low Register
sfr			EIPOL3H		= 0xC7;			// R/W, External Interrupt Polarity 3 High Register
sfr			EIFLAG4		= 0xBE;			// R/W, External Interrupt Flag 4 Register
sfr			EIPOL4L		= 0xCA;			// R/W, External Interrupt Polarity 4 Low Register
sfr			EIPOL4H		= 0xCB;			// R/W, External Interrupt Polarity 4 High register
//------------------------------------------------------
// Oscillator
sfr			SCCR		= 0x8A;			// R/W, System and Clock Control Register
sfr			OSCCR		= 0xC8;			// R/W, Oscillator Control Register
sfr			PLLCR		= 0xD6;			// R/W, Phase Locked-Loop Control Register
//------------------------------------------------------
// Basic interval timer
sfr			BITCNT		= 0x8C;			// R,   Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// R/W, Basic Interval Timer Control Register
//------------------------------------------------------
// Watch Dog Timer
sfr			WDTCNT		= 0x8E;			// R, Watch Dog Timer Counter Register
sfr			WDTDR		= 0x8E;			// W,     Watch Dog Timer Data Register
sfr			WDTCR		= 0x8D;			// R/W, Watch Dog Timer Control Register
//------------------------------------------------------
// Watch Timer
sfr			WTCNT		= 0x89;			// R,   Watch Timer Counter Register
sfr			WTDR		= 0x89;			// W,   Watch Timer Data Register
sfr			WTCR		= 0x8F;			// R/W, Watch Timer Control Register
//------------------------------------------------------
// Timer 0/1/2
sfr			T0CR		= 0xD2;			// R/W, Timer 0 Control Register
sfr			T0CNT		= 0xD3;			// R,   Timer 0 Counter Register
sfr			T0DR		= 0xD4;			// R/W, Timer 0 Data Register
sfr			T0CDR		= 0xD4;			// R,   Timer 0 Capture Data Register

sfr			T1CR		= 0xDA;			// R/W, Timer 1 Control Register
sfr			T1CNT		= 0xDB;			// R,   Timer 1 Counter Register
sfr			T1DR		= 0xDC;			// R/W, Timer 1 Data Register
sfr			T1CDR		= 0xDC;			// R,   Timer 1 Capture Data Register


sfr			T2CR		= 0xDD;			// R/W, Timer 2 Control Register
sfr			T2CNT		= 0xDE;			// R,   Timer 2 Counter Register
sfr			T2DR		= 0xDF;			// R/W, Timer 2 Data Register
sfr			T2CDR		= 0xDF;			// R,   Timer 2 Capture Data Register

sfr			TIFLAG		= 0xD5;			// R/W, Timer Interrupt Flag register
#ifdef MAIN
unsigned char xdata TINTCR _at_ 0x4004;	// R/W, Timer Interrupt Control Register
#else
extern unsigned char xdata TINTCR;
#endif

//------------------------------------------------------
// Timer 3/4/5/6
sfr			T3CRH		= 0xE3;			// R/W, Timer 3 Control High Register
sfr			T3CRL		= 0xE2;			// R/W, Timer 3 Control Low Register
sfr			T3ADRH		= 0xE5;			// R/W, Timer 3 A Data High Register
sfr			T3ADRL		= 0xE4;			// R/W, Timer 3 A Data Low Register
sfr			T3BDRH		= 0xE7;			// R/W, Timer 3 B Data High Register
sfr			T3BDRL		= 0xE6;			// R/W, Timer 3 B Data Low Register

#ifdef MAIN
unsigned char xdata T4CRH _at_ 0x4079;	// R/W, Timer 4 Control High Register
unsigned char xdata T4CRL _at_ 0x4078;	// R/W, Timer 4 Control Low Register
unsigned char xdata T4ADRH _at_ 0x407B;	// R/W, Timer 4 A Data High Register
unsigned char xdata T4ADRL _at_ 0x407A;	// R/W, Timer 4 A Data Low Register
unsigned char xdata T4BDRH _at_ 0x407D;	// R/W, Timer 4 B Data High Register
unsigned char xdata T4BDRL _at_ 0x407C;	// R/W, Timer 4 B Data Low Register

unsigned char xdata T5CRH _at_ 0x4081;	// R/W, Timer 5 Control High Register
unsigned char xdata T5CRL _at_ 0x4080;	// R/W, Timer 5 Control Low Register
unsigned char xdata T5ADRH _at_ 0x4083;	// R/W, Timer 5 A Data High Register
unsigned char xdata T5ADRL _at_ 0x4082;	// R/W, Timer 5 A Data Low Register
unsigned char xdata T5BDRH _at_ 0x4085;	// R/W, Timer 5 B Data High Register
unsigned char xdata T5BDRL _at_ 0x4084;	// R/W, Timer 5 B Data Low Register

unsigned char xdata T6CRH _at_ 0x4089;	// R/W, Timer 6 Control High Register
unsigned char xdata T6CRL _at_ 0x4088;	// R/W, Timer 6 Control Low Register
unsigned char xdata T6ADRH _at_ 0x408B;	// R/W, Timer 6 A Data High Register
unsigned char xdata T6ADRL _at_ 0x408A;	// R/W, Timer 6 A Data Low Register
unsigned char xdata T6BDRH _at_ 0x408D;	// R/W, Timer 6 B Data High Register
unsigned char xdata T6BDRL _at_ 0x408C;	// R/W, Timer 6 B Data Low Register

#else
extern unsigned char xdata T4CRH;
extern unsigned char xdata T4CRL;
extern unsigned char xdata T4ADRH;
extern unsigned char xdata T4ADRL;
extern unsigned char xdata T4BDRH;
extern unsigned char xdata T4BDRL;

extern unsigned char xdata T5CRH;
extern unsigned char xdata T5CRL;
extern unsigned char xdata T5ADRH;
extern unsigned char xdata T5ADRL;
extern unsigned char xdata T5BDRH;
extern unsigned char xdata T5BDRL;

extern unsigned char xdata T6CRH;
extern unsigned char xdata T6CRL;
extern unsigned char xdata T6ADRH;
extern unsigned char xdata T6ADRL;
extern unsigned char xdata T6BDRH;
extern unsigned char xdata T6BDRL;
#endif

//------------------------------------------------------
// Timer 7/8
#ifdef MAIN
unsigned char xdata T7CR _at_ 0x4090;	// R/W, Timer 7 Control Register
unsigned char xdata T7CNT _at_ 0x4091;	// R,   Timer 7 Counter Register
unsigned char xdata T7DR _at_ 0x4091;	// W,   Timer 7 Data Register
unsigned char xdata T7CAPR _at_ 0x4091;	// R,   Timer 7 Capture Data Register

unsigned char xdata T8CR _at_ 0x4092;	// R/W, Timer 8 Control Register
unsigned char xdata T8PCR1 _at_ 0x4093;	// R/W, Timer 8 PWM Control Register 1
unsigned char xdata T8PCR2 _at_ 0x4094;	// R/W, Timer 8 PWM Control Register 2
unsigned char xdata T8PCR3 _at_ 0x4095;	// R/W, Timer 8 PWM Control Register 3
unsigned char xdata T8ISR _at_ 0x4096;	// R/W, Timer 8 Interrupt Status Register
unsigned char xdata T8MSK _at_ 0x4097;	// R/W, Timer 8 Interrupt Mask Register
unsigned char xdata T8PPRL _at_ 0x4098;	// R/W, Timer 8 PWM Period Low Register
unsigned char xdata T8PPRH _at_ 0x4099;	// R/W, Timer 8 PWM Period High Register
unsigned char xdata T8ADRL _at_ 0x409A;	// R/W, Timer 8 PWM A Duty Low Register
unsigned char xdata T8ADRH _at_ 0x409B;	// R/W, Timer 8 PWM A Duty High Register
unsigned char xdata T8BDRL _at_ 0x409C;	// R/W, Timer 8 PWM B Duty Low Register
unsigned char xdata T8BDRH _at_ 0x409D;	// R/W, Timer 8 PWM B Duty High Register
unsigned char xdata T8CDRL _at_ 0x409E;	// R/W, Timer 8 PWM C Duty Low Register
unsigned char xdata T8CDRH _at_ 0x409F;	// R/W, Timer 8 PWM C Duty High Register
unsigned char xdata T8DLYA _at_ 0x40A0;	// R/W, Timer 8 PWM A Delay Register
unsigned char xdata T8DLYB _at_ 0x40A1;	// R/W, Timer 8 PWM B Delay Register
unsigned char xdata T8DLYC _at_ 0x40A2;	// R/W, Timer 8 PWM C Delay Register
unsigned char xdata T8DR _at_ 0x40A3;	// R/W, Timer 8 Data Register
unsigned char xdata T8CAPR _at_ 0x40A4;	// R,   Timer 8 Capture Data Register
unsigned char xdata T8CNT _at_ 0x40A5;	// R,   Timer 8 Counter Register

#else
extern unsigned char xdata T7CR;
extern unsigned char xdata T7CNT;
extern unsigned char xdata T7DR;
extern unsigned char xdata T7CAPR;

extern unsigned char xdata T8CR;
extern unsigned char xdata T8PCR1;
extern unsigned char xdata T8PCR2;
extern unsigned char xdata T8PCR3;
extern unsigned char xdata T8ISR;
extern unsigned char xdata T8MSK;
extern unsigned char xdata T8PPRL;
extern unsigned char xdata T8PPRH;
extern unsigned char xdata T8ADRL;
extern unsigned char xdata T8ADRH;
extern unsigned char xdata T8BDRL;
extern unsigned char xdata T8BDRH;
extern unsigned char xdata T8CDRL;
extern unsigned char xdata T8CDRH;
extern unsigned char xdata T8DLYA;
extern unsigned char xdata T8DLYB;
extern unsigned char xdata T8DLYC;
extern unsigned char xdata T8DR;
extern unsigned char xdata T8CAPR;
extern unsigned char xdata T8CNT;
#endif
//------------------------------------------------------
// PWM 10bit
#ifdef MAIN
unsigned char xdata PWMCRH _at_ 0x40A9;		// R/W, PWM Generator Control High Register
unsigned char xdata PWMCRL _at_ 0x40A8;		// R/W, PWM Generator Control Low Register
unsigned char xdata PWMADRH _at_ 0x40AB;	// R/W, PWM Generator A Data High Register
unsigned char xdata PWMADRL _at_ 0x40AA;	// R/W, PWM Generator A Data Low Register
unsigned char xdata PWMBDRH _at_ 0x40AD;	// R/W, PWM Generator B Data High Register
unsigned char xdata PWMBDRL _at_ 0x40AC;	// R/W, PWM Generator B Data Low Register
unsigned char xdata PWMCNTH _at_ 0x40AF;	// R, PWM Generator Counter High Register
unsigned char xdata PWMCNTL _at_ 0x40AE;	// R, PWM Generator Counter Low Register
unsigned char xdata PWMDLYDR _at_ 0x40A6;	// R/W, PWM Generator Delay Data Register
unsigned char xdata NFILDR _at_ 0x40A7;		// R/W, PWM Generator Noise Filter Data Register
unsigned char xdata PGINTCR _at_ 0x4066;	// R/W, PWM Generator Interrupt Control Register
unsigned char xdata PGIFLAG _at_ 0x4067;	// R/W, PWM Generator Interrupt Flag Register

#else
extern unsigned char xdata PWMCRH;
extern unsigned char xdata PWMCRL;
extern unsigned char xdata PWMADRH;
extern unsigned char xdata PWMADRL;
extern unsigned char xdata PWMBDRH;
extern unsigned char xdata PWMBDRL;
extern unsigned char xdata PWMCNTH;
extern unsigned char xdata PWMCNTL;
extern unsigned char xdata PWMDLYDR;
extern unsigned char xdata NFILDR;
extern unsigned char xdata PGINTCR;
extern unsigned char xdata PGIFLAG;
#endif
//------------------------------------------------------
// Buzzer
sfr			BUZDR		= 0xF3;			// R/W, Buzzer Data Register
sfr			BUZCR		= 0xF2;			// R/W, Buzzer Control Register
//------------------------------------------------------
// SPI 2
#ifdef MAIN
unsigned char xdata SPI2CRH _at_ 0x408F;	// R/W, SPI2 Control High Register
unsigned char xdata SPI2CRL _at_ 0x408E;	// R/W, SPI2 Control Low Register
unsigned char xdata SPI2DR _at_ 0x407F;		// R/W, SPI2 Data Register
unsigned char xdata SPI2SRH _at_ 0x4087;	// R/W, SPI2 Status High Register
unsigned char xdata SPI2SRL _at_ 0x4086;	// R/W, SPI2 Status Low register
#else
extern unsigned char xdata SPI2CRH;
extern unsigned char xdata SPI2CRL;
extern unsigned char xdata SPI2DR;
extern unsigned char xdata SPI2SRH;
extern unsigned char xdata SPI2SRL;
#endif
//------------------------------------------------------
// SPI 3
#ifdef MAIN
unsigned char xdata SPI3CR _at_ 0x400D;	// R/W, SPI3 Control Register
unsigned char xdata SPI3DR _at_ 0x400E;	// R/W, SPI3 Data Register
unsigned char xdata SPI3SR _at_ 0x400F;	// R/W, SPI3 Status Register
#else
extern unsigned char xdata SPI3CR;
extern unsigned char xdata SPI3DR;
extern unsigned char xdata SPI3SR;
#endif
//------------------------------------------------------
// UART 2/3/4
#ifdef MAIN
unsigned char xdata UART2CR1 _at_ 0x4060;	// R/W, UART2 Control Register 1
unsigned char xdata UART2CR2 _at_ 0x4061;	// R/W, UART2 Control Register 2
unsigned char xdata UART2CR3 _at_ 0x4062;	// R/W, UART2 Control Register 3
unsigned char xdata UART2ST _at_ 0x4063;	// R/W, UART2 Status Register
unsigned char xdata UART2BD _at_ 0x4064;	// R/W, UART2 Baud Rate Generation Register
unsigned char xdata UART2DR _at_ 0x4065;	// R/W, UART2 Data Register

unsigned char xdata UART3CR1 _at_ 0x4068;	// R/W, UART3 Control Register 1
unsigned char xdata UART3CR2 _at_ 0x4069;	// R/W, UART3 Control Register 2
unsigned char xdata UART3CR3 _at_ 0x406A;	// R/W, UART3 Control Register 3
unsigned char xdata UART3ST _at_ 0x406B;	// R/W, UART3 Status Register
unsigned char xdata UART3BD _at_ 0x406C;	// R/W, UART3 Baud Rate Generation Register
unsigned char xdata UART3DR _at_ 0x406D;	// R/W, UART3 Data Register

unsigned char xdata UART4CR1 _at_ 0x4070;	// R/W, UART4 Control Register 1
unsigned char xdata UART4CR2 _at_ 0x4071;	// R/W, UART4 Control Register 2
unsigned char xdata UART4CR3 _at_ 0x4072;	// R/W, UART4 Control Register 3
unsigned char xdata UART4ST _at_ 0x4073;	// R/W, UART4 Status Register
unsigned char xdata UART4BD _at_ 0x4074;	// R/W, UART4 Baud Rate Generation Register
unsigned char xdata UART4DR _at_ 0x4075;	// R/W, UART4 Data Register

#else
extern unsigned char xdata UART2CR1;
extern unsigned char xdata UART2CR2;
extern unsigned char xdata UART2CR3;
extern unsigned char xdata UART2ST;
extern unsigned char xdata UART2BD;
extern unsigned char xdata UART2DR;

extern unsigned char xdata UART3CR1;
extern unsigned char xdata UART3CR2;
extern unsigned char xdata UART3CR3;
extern unsigned char xdata UART3ST;
extern unsigned char xdata UART3BD;
extern unsigned char xdata UART3DR;

extern unsigned char xdata UART4CR1;
extern unsigned char xdata UART4CR2;
extern unsigned char xdata UART4CR3;
extern unsigned char xdata UART4ST;
extern unsigned char xdata UART4BD;
extern unsigned char xdata UART4DR;
#endif
//------------------------------------------------------
// USI 0/1 (UART + SPI + I2C)
#ifdef MAIN
unsigned char xdata USI0CR1 _at_ 0x4030;	// R/W, USI0 Control Register 1
unsigned char xdata USI0CR2 _at_ 0x4031;	// R/W, USI0 Control Register 2
unsigned char xdata USI0CR3 _at_ 0x4032;	// R/W, USI0 Control Register 3
unsigned char xdata USI0CR4 _at_ 0x4033;	// R/W, USI0 Control Register 4
unsigned char xdata USI0ST1 _at_ 0x4038;	// R/W, USI0 Status Register 1
unsigned char xdata USI0ST2 _at_ 0x4039;	// R, USI0 Status Register 2
unsigned char xdata USI0BD _at_ 0x403A;		// R/W, USI0 Baud Rate Generation Register
unsigned char xdata USI0SDHR _at_ 0x403B;	// R/W, USI0 SDA Hold Time Register
unsigned char xdata USI0DR _at_ 0x403C;		// R/W, USI0 Data Register
unsigned char xdata USI0SCLR _at_ 0x403D;	// R/W, USI0 SCL Low Period Register
unsigned char xdata USI0SCHR _at_ 0x403E;	// R/W, USI0 SCL High Period Register
unsigned char xdata USI0SAR _at_ 0x403F;	// R/W, USI0 Slave Address Register

unsigned char xdata USI1CR1 _at_ 0x4040;	// R/W, USI1 Control Register 1
unsigned char xdata USI1CR2 _at_ 0x4041;	// R/W, USI1 Control Register 2
unsigned char xdata USI1CR3 _at_ 0x4042;	// R/W, USI1 Control Register 3
unsigned char xdata USI1CR4 _at_ 0x4043;	// R/W, USI1 Control Register 4
unsigned char xdata USI1ST1 _at_ 0x4048;	// R/W, USI1 Status Register 1
unsigned char xdata USI1ST2 _at_ 0x4049;	// R, USI1 Status Register 2
unsigned char xdata USI1BD _at_ 0x404A;		// R/W, USI1 Baud Rate Generation Register
unsigned char xdata USI1SDHR _at_ 0x404B;	// R/W, USI1 SDA Hold Time Register
unsigned char xdata USI1DR _at_ 0x404C;		// R/W, USI1 Data Register
unsigned char xdata USI1SCLR _at_ 0x404D;	// R/W, USI1 SCL Low Period Register
unsigned char xdata USI1SCHR _at_ 0x404E;	// R/W, USI1 SCL High Period Register
unsigned char xdata USI1SAR _at_ 0x404F;	// R/W, USI1 Slave Address Register

#else
extern unsigned char xdata USI0CR1;
extern unsigned char xdata USI0CR2;
extern unsigned char xdata USI0CR3;
extern unsigned char xdata USI0CR4;
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
#endif
//------------------------------------------------------
// ADC 12bit
#ifdef MAIN
unsigned char xdata ADCCRH _at_ 0x4003;	// R/W, A/D Converter Control High Register
unsigned char xdata ADCCRL _at_ 0x4002;	// R/W, A/D Converter Control Low Register
unsigned char xdata ADCDRH _at_ 0x4001;	// R, A/D Converter Data High Register
unsigned char xdata ADCDRL _at_ 0x4000;	// R, A/D Converter Data Low Register
#else
extern unsigned char xdata ADCCRH;
extern unsigned char xdata ADCCRL;
extern unsigned char xdata ADCDRH;
extern unsigned char xdata ADCDRL;
#endif
//------------------------------------------------------
// DAC 12bit
#ifdef MAIN
unsigned char xdata DACCR _at_ 0x40C0;	// R/W, D/A Converter Control Register
unsigned char xdata PGSR _at_ 0x40C1;	// R/W, Programmable Gain Selection Register
unsigned char xdata DACDRH _at_ 0x40C3;	// R/W, D/A Converter Data High Register
unsigned char xdata DACDRL _at_ 0x40C2;	// R/W, D/A Converter Data Low Register
unsigned char xdata DACBRH _at_ 0x40C5;	// R, D/A Converter Buffer High Register
unsigned char xdata DACBRL _at_ 0x40C4;	// R, D/A Converter Buffer Low Register
unsigned char xdata DAOFSCR _at_ 0x40C8;	// R/W, D/A Converter Offset Control Register
unsigned char xdata DACIFCR _at_ 0x40C9;	// R/W, D/AC Interface Control Register
unsigned char xdata DACIFCMD _at_ 0x40CA;	// R/W, D/AC Interface Command Register
#else
extern unsigned char xdata DACCR;
extern unsigned char xdata PGSR;
extern unsigned char xdata DACDRH;
extern unsigned char xdata DACDRL;
extern unsigned char xdata DACBRH;
extern unsigned char xdata DACBRL;
extern unsigned char xdata DAOFSCR;
extern unsigned char xdata DACIFCR;
extern unsigned char xdata DACIFCMD;
#endif
//------------------------------------------------------
// LCD driver
#ifdef MAIN
unsigned char xdata LCDBCR _at_ 0x400C;	// R/W, LCD Automatic Bias Control Register
unsigned char xdata LCDCRH _at_ 0x400B;	// R/W, LCD Driver Control High Register
unsigned char xdata LCDCRL _at_ 0x400A;	// R/W, LCD Driver Control Low Register
unsigned char xdata LCDCCR _at_ 0x4009;	// R/W, LCD Driver Contrast Control Register
#else
extern unsigned char xdata LCDBCR;
extern unsigned char xdata LCDCRH;
extern unsigned char xdata LCDCRL;
extern unsigned char xdata LCDCCR;
#endif
//------------------------------------------------------
// The Fine ADPCM Decoder
#ifdef MAIN
unsigned char xdata DECCR _at_ 0x40B0;	// R/W, FADPCM Decoder Control Register
unsigned char xdata DFIFOR _at_ 0x40B1;	// R/W, FADPCM Decoder FIFO Register
unsigned char xdata DECDR _at_ 0x40B2;	// R/W, FADPCM Decoder Sampling Frequency Data Register
unsigned char xdata DBDLR _at_ 0x40B3;	// R/W, FADPCM Decoder Bundle Register
unsigned char xdata DODRL _at_ 0x40B4;	// R, FADPCM Decoder Result Output Low Register
unsigned char xdata DODRH _at_ 0x40B5;	// R, FADPCM Decoder Result Output High Register
unsigned char xdata FAFLAG _at_ 0x40B6;	// R/W, FADPCM Interrupt Flag Register
unsigned char xdata VPCR _at_ 0x40C6;	// R/W, Voice Prompt Control Register
unsigned char xdata SFDDNO _at_ 0x40C7;	// R/W, Serial Flash Dummy and Data Number
unsigned char xdata SFCMD _at_ 0x40B7;	// R/W, Serial Flash Command Register
unsigned char xdata VPADDR1 _at_ 0x40B8;	// R/W, Voice Prompt Address Register 1
unsigned char xdata VPADDR2 _at_ 0x40B9;	// R/W, Voice Prompt Address Register 2
unsigned char xdata VPADDR3 _at_ 0x40BA;	// R/W, Voice Prompt Address Register 3
unsigned char xdata VPSIZE1 _at_ 0x40BB;	// R/W, Voice Prompt Size Register 1
unsigned char xdata VPSIZE2 _at_ 0x40BC;	// R/W, Voice Prompt Size Register 2
unsigned char xdata VPSIZE3 _at_ 0x40BD;	// R/W, Voice Prompt Size Register 3
unsigned char xdata VPINF1 _at_ 0x40BE;	// R/W, Voice Prompt Inform Register 1
unsigned char xdata VPINF2 _at_ 0x40BF;	// R/W, Voice Prompt Inform Register 2
#else
extern unsigned char xdata DECCR;
extern unsigned char xdata DFIFOR;
extern unsigned char xdata DECDR;
extern unsigned char xdata DBDLR;
extern unsigned char xdata DODRL;
extern unsigned char xdata DODRH;
extern unsigned char xdata FAFLAG;
extern unsigned char xdata VPCR;
extern unsigned char xdata SFDDNO;
extern unsigned char xdata SFCMD;
extern unsigned char xdata VPADDR1;
extern unsigned char xdata VPADDR2;
extern unsigned char xdata VPADDR3;
extern unsigned char xdata VPSIZE1;
extern unsigned char xdata VPSIZE2;
extern unsigned char xdata VPSIZE3;
extern unsigned char xdata VPINF1;
extern unsigned char xdata VPINF2;
#endif
//------------------------------------------------------
// Power Down Operation
sfr			PCON		= 0x87;			// R/W, Power Control register
//------------------------------------------------------
// Brown Out Detector Processor
sfr			LVICR		= 0x86;			// R/W, Low Voltage Indicator Control Register
sfr			RSTFR		= 0xE8;			// R/W, Reset Flag Register
sfr			LVRCR		= 0xD8;			// R/W, Low Voltage Reset Control Register
//------------------------------------------------------
// Flash control
sfr			FSADRH		= 0xFA;			// R/W, Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// R/W, Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// R/W, Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// R/W, Flash Identification Register
sfr			FMCR		= 0xFE;			// R/W, Flash Mode Control Register

//------------------------------------------------------
sfr			ACC			= 0xE0;			// Accumulator Register
sfr			B			= 0xF0;			// B Register
sfr			SP			= 0x81;			// Stack Pointer
sfr			XSP			= 0x91;			// Extended Stack Pointer
sfr			XSPCR		= 0xF6;			// Extended Stack Pointer Control Register

sfr			DPL			= 0x82;			// Data Pointer Reg. Low
sfr			DPH			= 0x83;			// Data Pointer Reg. High
sfr			DPL1		= 0x84;			// Data Pointer Reg. Low 1
sfr			DPH1		= 0x85;			// Data Pointer Reg. High 1
sfr			PSW			= 0xD0;			// Program Status Word Register

sfr			EO			= 0xA2;			// Extended Operation Register
sfr			SPWRL		= 0xF4;			// Stack Pointer Watch Register Low Byte
sfr			SPWRH		= 0xF5;			// Stack Pointer Watch Register High Byte
sfr			MODINR		= 0xFF;			// Mode Entry Register

sfr			SINTCR		= 0xF7;			// System Interrupt Control Register
sfr			XBANK		= 0xF8;			// XRAM Bank Pointer

sfr			MEX1		= 0x94;			// Memory Extension Register 1
sfr			MEX2		= 0x95;			// Memory Extension Register 2
sfr			MEX3		= 0x96;			// Memory Extension Register 3
sfr			MEXSP		= 0x97;			// Memory Extension Stack Pointer

#endif		//_MC97F60128_H_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
