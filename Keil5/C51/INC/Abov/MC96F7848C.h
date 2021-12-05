//======================================================
//	file name	: MC96F7848C.h
//	device		: MC96F7848C(80/64)
//	version		: Ver1.1
//	date		: 2015-10-01.Thu
//======================================================

#include	<intrins.h>

#ifndef		_MC96F7848C_
#define		_MC96F7848C_

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
sfr			P0PU		= 0xDC;			// R/W P0 Pull-up Resistor Selection Register
sfr			P0OD		= 0xD2;			// R/W P0 Open-drain Selection Register
sfr			P0FSR		= 0xEA;			// R/W P0 Function Selection Register

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
sfr			P1PU		= 0xDD;			// R/W P1 Pull-up Resistor Selection Register
sfr			P1OD		= 0xD3;			// R/W P1 Open-drain Selection Register
sfr			P1DB		= 0x95;			// R/W P1 Debounce Enable Register
sfr			P1FSR		= 0xEB;			// R/W P1 Function Selection Register

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
sfr			P2PU		= 0xDE;			// R/W P2 Pull-up Resistor Selection Register
sfr			P2OD		= 0xD4;			// R/W P2 Open-drain Selection Register
sfr			P2FSRH		= 0xED;			// R/W P2 Function Selection High Register
sfr			P2FSRL		= 0xEC;			// R/W P2 Function Selection Low Register

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
sfr			P3PU		= 0xDF;			// R/W P3 Pull-up Resistor Selection Register
sfr			P3OD		= 0xD5;			// R/W P3 Open-drain Selection Register
sfr			P39DB		= 0x94;			// R/W P3/P9 Debounce Enable Register
sfr			P3FSR		= 0xFF;			// R/W P3 Function Selection Register

// PORT4
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
sfr			P4PU		= 0xE2;			// R/W P4 Pull-up Resistor Selection Register
sfr			P4OD		= 0xD6;			// R/W P4 Open-drain Selection Register
sfr			P4FSR		= 0xBF;			// R/W P4 Function Selection Register

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
sfr			P5PU		= 0xE3;			// R/W P5 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P5OD _at_ 0x1030;	// R/W P5 Open-drain Selection Register
#else
extern unsigned char xdata P5OD;
#endif
sfr			P5FSR		= 0xEE;			// R/W P5 Function Selection Register

// PORT6
sfr			P6			= 0x91;			// R/W P6 Data Register
sfr			P6IO		= 0xD9;			// R/W P6 Direction Register
sfr			P6PU		= 0xE4;			// R/W P6 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P6OD _at_ 0x1031;	// R/W P6 Open-drain Selection Register
#else
extern unsigned char xdata P6OD;
#endif
sfr			P6FSR		= 0xEF;			// R/W P4 Function Selection Register

// PORT7
sfr			P7			= 0x92;			// R/W P7 Data Register
sfr			P7IO		= 0xE1;			// R/W P7 Direction Register
sfr			P7PU		= 0xE5;			// R/W P7 Pull-up Resistor Selection Register
sfr			P7FSR		= 0xAD;			// R/W P7 Function Selection Register

// PORT8
sfr			P8			= 0x93;			// R/W P8 Data Register
sfr			P8IO		= 0xE9;			// R/W P8 Direction Register	//by nakwon
sfr			P8PU		= 0xE6;			// R/W P8 Pull-up Resistor Selection Register	//by nakwon
sfr			P8FSR		= 0xAE;			// R/W P8 Function Selection Register

// PORT9
sfr			P9			= 0xC0;			// R/W P9 Data Register
sfr			P9IO		= 0xF1;			// R/W P9 Direction Register
sfr			P9PU		= 0xE7;			// R/W P9 Pull-up Resistor Selection Register
#ifdef MAIN
unsigned char xdata P9OD _at_ 0x1032;	// R/W P9 Open-drain Selection Register
#else
extern unsigned char xdata P9OD;
#endif
sfr			P9FSR		= 0xAF;			// R/W P9 Function Selection Register

//======================================================
// Interrupt Control
//======================================================
sfr			IE			= 0xA8;			// R/W Interrupt Enable Register 0
sbit		EA			= 0xAF;			// R/W global interrupt enable

sfr			IE1			= 0xA9;			// R/W Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// R/W Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// R/W Interrupt Enable Register 3
sfr			IP			= 0xB8;			// R/W Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// R/W Interrupt Priority Register 1
sfr			EIFLAG0		= 0xA3;			// R/W External Interrupt Flag Register 0
sfr			EIPOL0L		= 0xA4;			// R/W External Interrupt Polarity Register 0 Low
sfr			EIPOL0H		= 0xA5;			// R/W External Interrupt Polarity Register 0 High
sfr			EIFLAG1		= 0xAC;			// R/W External Interrupt Flag Register 1
sfr			EIPOL1L		= 0xA6;			// R/W R/W External Interrupt Polarity Register 1 Low
sfr			EIPOL1H		= 0xA7;			// R/W External Interrupt Polarity Register 1 High

//======================================================
// System Oscillator
//======================================================
sfr			SCCR		= 0x8A;			// R/W System Clock Control Register
sfr			OSCCR		= 0xC8;			// R/W Oscillator Control Register
sfr			FLLCR		= 0xDB;			// R/W Frequency Locked-Loop Control Register
#ifdef MAIN
unsigned char xdata XTFLSR _at_ 0x1038;	// R/W XTAL Filter Selection Register
#else
extern unsigned char xdata XTFLSR;
#endif

//======================================================
// Basic interval Timer
//======================================================
sfr			BITCR		= 0x8B;			// R/W BIT Clock Control Register
sfr			BITCNT		= 0x8C;			// R   Basic Interval Timer Counter Register

//======================================================
// Watch Dog Timer
//======================================================
sfr			WDTIDR		= 0x8E;			// R/W Watch Dog Timer Identification Register
sfr			WDTCR		= 0x8D;			// R/W Watch Dog Timer Control Register
#ifdef MAIN
unsigned char xdata WDTC _at_ 0x505E;	// R/W Watch Dog Timer Clear Register
unsigned char xdata WDTSR _at_ 0x505F;	// R/W Watch Dog Timer Status Register
unsigned char xdata WDTCNTH _at_ 0x405E;	// R   Watch Dog Timer Counter High Register
unsigned char xdata WDTCNTL _at_ 0x405F;	// R   Watch Dog Timer Counter Low register
#else
extern unsigned char xdata WDTC;
extern unsigned char xdata WDTSR;
extern unsigned char xdata WDTCNTH;
extern unsigned char xdata WDTCNTL;
#endif

//======================================================
// Watch Timer
//======================================================
sfr			WTCNT		= 0x89;			// R   Watch Timer Counter Register
sfr			WTDR		= 0x89;			// W   Watch Timer Data Register
sfr			WTCR		= 0x96;			// R/W Watch Timer Control Register

//======================================================
// Timer
//======================================================
// TIMER 0
sfr			T0CR		= 0xB2;			// R/W Timer 0 Control Register
sfr			T0CNT		= 0xB3;			// R   Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// R/W Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// R   Timer 0 Capture Data Register
sfr			T0INTR		= 0xDA;			// R/W Timer 0 Interrupt Control/Flag Register

// TIMER 1
sfr			T1CR		= 0xBA;			// R/W Timer 1 Control Register
sfr			CARCR		= 0xBE;			// R/W Carrier control Register
sfr			T1CNT		= 0xBB;			// R   Timer 1 Counter Register
sfr			T1DRH		= 0xBD;			// R/W Timer 1 Data High Register
sfr			T1DRL		= 0xBC;			// R/W Timer 1 Data Low Register

// TIMER 2
sfr			T2CRH		= 0xC3;			// R/W Timer 2 Control High Register
sfr			T2CRL		= 0xC2;			// R/W Timer 2 Control Low Register
sfr			T2ADRH		= 0xC5;			// R/W Timer 2 A Data High Register
sfr			T2ADRL		= 0xC4;			// R/W Timer 2 A Data Low Register
sfr			T2BDRH		= 0xC7;			// R/W Timer 2 B Data High Register
sfr			T2BDRL		= 0xC6;			// R/W Timer 2 B Data Low Register

// TIMER 3
sfr			T3CRH		= 0xCB;			// R/W Timer 3 Control High Register
sfr			T3CRL		= 0xCA;			// R/W Timer 3 Control Low Register
sfr			T3ADRH		= 0xCD;			// R/W Timer 3 A Data High Register
sfr			T3ADRL		= 0xCC;			// R/W Timer 3 A Data Low Register
sfr			T3BDRH		= 0xCF;			// R/W Timer 3 B Data High Register
sfr			T3BDRL		= 0xCE;			// R/W Timer 3 B Data Low Register

#ifdef MAIN
// TIMER 4
unsigned char xdata T4CRH _at_ 0x1001;	// R/W Timer 4 Control High Register
unsigned char xdata T4CRL _at_ 0x1000;	// R/W Timer 4 Control Low Register
unsigned char xdata T4ADRH _at_ 0x1003;	// R/W Timer 4 A Data High Register
unsigned char xdata T4ADRL _at_ 0x1002;	// R/W Timer 4 A Data Low Register
unsigned char xdata T4BDRH _at_ 0x1005;	// R/W Timer 4 B Data High Register
unsigned char xdata T4BDRL _at_ 0x1004;	// R/W Timer 4 B Data Low Register

// TIMER 5
unsigned char xdata T5CRH _at_ 0x1009;	// R/W Timer 5 Control High Register
unsigned char xdata T5CRL _at_ 0x1009;	// R/W Timer 5 Control Low Register
unsigned char xdata T5ADRH _at_ 0x100B;	// R/W Timer 5 A Data High Register
unsigned char xdata T5ADRL _at_ 0x100A;	// R/W Timer 5 A Data Low Register
unsigned char xdata T5BDRH _at_ 0x100D;	// R/W Timer 5 B Data High Register
unsigned char xdata T5BDRL _at_ 0x100C;	// R/W Timer 5 B Data Low Register

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
#endif

//======================================================
// Buzzer
//======================================================
sfr			BUZDR		= 0x8F;			// R/W BUZZER Data Register
sfr			BUZCR		= 0x97;			// R/W BUZZER Control Register

//======================================================
// SIO
//======================================================
sfr			SIOCR		= 0xB5;			// R/W SIO Control Register
sfr			SIODR		= 0xB6;			// R/W SIO Data Register
sfr			SIOPS		= 0xB7;			// R/W SIO Pre-scaler Register

//======================================================
// 12bit ADC
//======================================================
sfr			ADCCRH		= 0x9D;			// R/W A/D Converter Control High Register
sfr			ADCCRL		= 0x9C;			// R/W A/D Converter Control Low Register
sfr			ADCDRH		= 0x9F;			// R   A/D Converter Data High Register
sfr			ADCDRL		= 0x9E;			// R   A/D Converter Data Low Register

//======================================================
// UART + SPI + I2C
//======================================================
#ifdef MAIN
// USI0
unsigned char xdata USI0CR1 _at_ 0x1010;	// R/W UART0 Control1 Register
unsigned char xdata USI0CR2 _at_ 0x1011;	// R/W UART0 Interrupt Control Register
unsigned char xdata USI0CR3 _at_ 0x1012;	// R/W SPI0 Sync Control Register
unsigned char xdata USI0CR4 _at_ 0x1013;	// R/W I2C0 Control Register
unsigned char xdata USI0ST1 _at_ 0x1018;	// R/W UART0 State Register 0
unsigned char xdata USI0ST2 _at_ 0x1019;	// R/W UART0 State Register 1
unsigned char xdata USI0BD _at_ 0x101A;		// R/W UART0 BAUD Rate Register
unsigned char xdata USI0SDHR _at_ 0x101B;	// R/W I2C0 SDA Hold Time Register
unsigned char xdata USI0DR _at_ 0x101C;		// R/W UART/SPI/I2C Data0 Register
unsigned char xdata USI0SCHR _at_ 0x101E;	// R/W I2C0 SCL High Period Register
unsigned char xdata USI0SCLR _at_ 0x101D;	// R/W I2C0 SCL Low Period Register
unsigned char xdata USI0SAR _at_ 0x101F;	// R/W I2C0 Self Address Register

// USI1
unsigned char xdata USI1CR1 _at_  0x1020;	// R/W UART1 Control1 Register
unsigned char xdata USI1CR2 _at_  0x1021;	// R/W UART1 Interrupt Control Register
unsigned char xdata USI1CR3 _at_  0x1022;	// R/W SPI1 Sync Control Register
unsigned char xdata USI1CR4 _at_  0x1023;	// R/W I2C1 Control Register
unsigned char xdata USI1ST1 _at_  0x1028;	// R/W UART1 State Register 0
unsigned char xdata USI1ST2 _at_  0x1029;	// R/W UART1 State Register 1
unsigned char xdata USI1BD _at_ 0x102A;		// R/W UART1 BAUD Rate Register
unsigned char xdata USI1SDHR _at_ 0x102B;	// R/W I2C1 SDA Hold Time Register
unsigned char xdata USI1DR _at_ 0x102C;		// R/W UART/SPI/I2C Data0 Register
unsigned char xdata USI1SCHR _at_ 0x102E;	// R/W I2C1 SCL High Period Register
unsigned char xdata USI1SCLR _at_ 0x102D;	// R/W I2C1 SCL Low Period Register
unsigned char xdata USI1SAR _at_ 0x102F;	// R/W I2C01 Self Address Register

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
extern unsigned char xdata USI0SCHR;
extern unsigned char xdata USI0SCLR;
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
extern unsigned char xdata USI1SCHR;
extern unsigned char xdata USI1SCLR;
extern unsigned char xdata USI1SAR;
#endif

//======================================================
// UART2
//======================================================
sfr			UART2CR1	= 0xF2;			// R/W UART2 Control Register 1
sfr			UART2CR2	= 0xF3;			// R/W UART2 Control Register 2
sfr			UART2CR3	= 0xF4;			// R/W UART2 Control Register 3
sfr			UART2ST		= 0xF5;			// R/W UART2 Status Register
sfr			UART2BD		= 0xF6;			// R/W UART2 Baus Rate Generation Register
sfr			UART2DR		= 0xF7;			// R/W UART2 Data Register

//======================================================
// LCD
//======================================================
sfr			LCDCCR		= 0x9A;			// R/W LCD Contrast Contrast Register
sfr			LCDCRL		= 0x9B;			// R/W LCD Driver Control Low Register
sfr			LCDCRH		= 0x99;			// R/W LCD Driver Control High Register

//======================================================
// Flash CRC Generator
//======================================================
#ifdef MAIN
unsigned char xdata FCSARH _at_  0x5050;	// R/W Flash CRC Start Address High Register
unsigned char xdata FCEARH _at_  0x5051;	// R/W Flash CRC End Address High Register
unsigned char xdata FCSARM _at_  0x5052;	// R/W Flash CRC Start Address Middle Register
unsigned char xdata FCEARM _at_  0x5053;	// R/W Flash CRC End Address Middle Register
unsigned char xdata FCSARL _at_  0x5054;	// R/W Flash CRC Start Address Low Register
unsigned char xdata FCEARL _at_  0x5055;	// R/W Flash CRC End Address Low Register
unsigned char xdata FCCR _at_  0x5056;	// R/W Flash CRC Control Register
unsigned char xdata FCDRH _at_  0x5057;	// R   Flash CRC Data High Register
unsigned char xdata FCDRL _at_  0x5058;	// R   Flash CRC Data Low Register
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
sfr			FCDIN		= 0xD7;			// R/W Flash CRC Data In register

//======================================================
// Power down
//======================================================
sfr			PCON		= 0x87;			// R/W Power Control Register

//======================================================
// Brown Out Detector Processor
//======================================================
sfr			LVICR		= 0x86;			// R/W Low Voltage Indicator Control Register
sfr			RSTFR		= 0xE8;			// R/W Reset Flag Register
sfr			LVRCR		= 0xD8;			// R/W Low Voltage Reset Control register

//======================================================
// M8051 System Register 
//======================================================
sfr			ACC			= 0xE0;			// R/W 
sfr			B			= 0xF0;			// R/W 

sfr			PSW			= 0xD0;			// R/W 
sfr			SP			= 0x81;			// R/W 
sfr16		DPTR0		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		DPTR1		= 0x84;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// R/W EXTENDED OPERATION REGISTER

//======================================================
// Flash Memory
//======================================================
sfr			FSADRH		= 0xFA;			// R/W Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// R/W Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// R/W Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// R/W Flash Identification Register
sfr			FMCR		= 0xFE;			// R/W Flash Mode Control Register

#endif	//_MC96F7848C_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
