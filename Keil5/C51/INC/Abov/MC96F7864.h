//======================================================
//	file name	: MC96F7864.h
//	device		: MC96F7864(80/64 LQFP)
//	version		: Ver1.2
//	date		: 2015-10-01.Thu
//	author		: ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_MC96F7864_
#define		_MC96F7864_

///======================================================
// PORT Control Register
//======================================================
// PORT0
sfr			P0IO		= 0xA1;			// R/W P0 Direction Register
sfr			P0PU		= 0x93;			// R/W P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0xB5;			// R/W P0 Debounce Enable Register
sfr			P0			= 0x80;			// R/W P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

// PORT1
sfr			P1IO		= 0xB1;			// R/W P1 Direction Register
sfr			P1PU		= 0x94;			// R/W P1 Pull-up Resistor Selection Register
sfr			P1DB		= 0xB6;			// R/W P1/P5 Debounce Enable Register
sfr			P1			= 0x88;			// R/W P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

// PORT2
sfr			P2IO		= 0xB9;			// R/W P2 Direction Register
sfr			P2PU		= 0x99;			// R/W P2 Pull-up Resistor Selection Register	//by nakwon
sfr			P2			= 0x90;			// R/W P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

// PORT3
sfr			P3IO		= 0xC1;			// R/W P3 Direction Register
sfr			P3PU		= 0x9A;			// R/W P3 Pull-up Resistor Selection Register
sfr			P3			= 0x98;			// R/W P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

// PORT4
sfr			P4IO		= 0xC9;			// R/W P4 Direction Register
sfr			P4PU		= 0x9B;			// R/W P4 Pull-up Resistor Selection Register
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

// PORT5
sfr			P5IO		= 0xD1;			// R/W P5 Direction Register
sfr			P5PU		= 0x9C;			// R/W P5 Pull-up Resistor Selection Register
sfr			P5			= 0xB0;			// R/W P5 Data Register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;

// PORT6
sfr			P6IO		= 0xD9;			// R/W P6 Direction Register
sfr			P6PU		= 0x9D;			// R/W P6 Pull-up Resistor Selection Register
sfr			P6			= 0xC0;			// R/W P6 Data Register
	sbit	P60			= 0xC0;
	sbit	P61			= 0xC1;
	sbit	P62			= 0xC2;
	sbit	P63			= 0xC3;
	sbit	P64			= 0xC4;
	sbit	P65			= 0xC5;
	sbit	P66			= 0xC6;
	sbit	P67			= 0xC7;

// PORT7
sfr			P7IO		= 0xE1;			// R/W P7 Direction Register
sfr			P7PU		= 0x9E;			// R/W P7 Pull-up Resistor Selection Register
sfr			P7			= 0x91;			// R/W P7 Data Register

// PORT8
sfr			P8IO		= 0xE9;			// R/W P8 Direction Register	//by nakwon
sfr			P8PU		= 0x9F;			// R/W P8 Pull-up Resistor Selection Register	//by nakwon
sfr			P8			= 0x92;			// R/W P8 Data Register

//======================================================
// System Oscillator, Reset Control
//======================================================
sfr			PCON		= 0x87;			// R/W Power Control Register
sfr			LVRCR		= 0xD8;			// R/W Low Voltage Reset Control Register
sfr			LVICR		= 0x86;			// R/W Low Voltage Indicator Control Register
//#define	 LVIF		0x20			// bit5

sfr			RSTFR		= 0xE8;			// R/W Reset Flag Register
	sbit	LVRF		= 0xEB;
	sbit	OCDRF		= 0xEC;
	sbit	WDTRF		= 0xED;
	sbit	EXTRF		= 0xEE;
	sbit	PORF		= 0xEF;

sfr			SCCR		= 0x8A;			// R/W System Clock Control Register
sfr			OSCCR		= 0xC8;			// R/W Oscillator Control Register
sfr			PLLCR		= 0x95;			// R/W Phase Locked-Loop Control Register

//======================================================
//  Watch Timer Control
//======================================================
sfr			WTDR		= 0x89;			// R/W Watch Timer Data Register
sfr			WTCNT		= 0x89;			// R   Watch Timer Counter Register
sfr			WTCR		= 0x96;			// R/W Watch Timer Control Register

//======================================================
//  Watch Dog Timer Control 
//======================================================
sfr			BITCR		= 0x8B;			// R/W BIT Clock Control Register
sfr			BITCNT		= 0x8C;			// R   Basic Interval Timer Counter Register
sfr			WDTCR		= 0x8D;			// R/W Watch Dog Timer Control Register
sfr			WDTDR		= 0x8E;			// W   Watch Dog Timer Data Register
sfr			WDTCNT		= 0x8E;			// R   Watch Dog Timer Counter Register

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
sfr			EIFLAG1		= 0xA4;			// R/W External Interrupt Flag Register 1
sfr			EIFLAG2		= 0xA5;			// R/W External Interrupt Flag Register 2
sfr			EIPOL0L		= 0xA6;			// R/W External Interrupt Polarity Register 0 Low
sfr			EIPOL0H		= 0xA7;			// R/W External Interrupt Polarity Register 0 High
sfr			EIPOL1		= 0xAD;			// R/W External Interrupt Polarity Register 1
sfr			EIPOL2L		= 0xAE;			// R/W R/W External Interrupt Polarity Register 2 Low
sfr			EIPOL2H		= 0xAF;			// R/W External Interrupt Polarity Register 2 High

sfr			TIFLAG		= 0xAC;			// R/W Timer Interrupt Flag Register

//======================================================
// Timer
//======================================================
// TIMER 0 Control
sfr			T0CR		= 0xB2;			// R/W Timer 0 Mode Control Register
sfr			T0CNT		= 0xB3;			// R   Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// R/W Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// R   Timer 0 Capture Data Register

// TIMER 1 Control
sfr			T1CR		= 0xBA;			// R/W Timer 1 Mode Control Register
sfr			T1CNT		= 0xBB;			// R   Timer 1 Counter Register
sfr			T1DR		= 0xBC;			// R/W Timer 1 Data Register
sfr			T1CDR		= 0xBC;			// R   Timer 1 Capture Data Register

// TIMER 2 Control
sfr			T2CR		= 0xBD;			// R/W Timer 2 Mode Control Register
sfr			T2CNT		= 0xBE;			// R   Timer 2 Counter Register
sfr			T2DR		= 0xBF;			// R/W Timer 2 Data Register
sfr			T2CDR		= 0xBF;			// R   Timer 2 Capture Data Register

sfr			TINTCR		= 0xEC;			// R/W Timer 0,1,2 Interrupt enable register

// TIMER 3 Control
sfr			T3CRL		= 0xC2;			// R/W Timer 3 Control Low Register
sfr			T3CRH		= 0xC3;			// R/W Timer 3 Control High Register
sfr16		T3ADR		= 0xC4;			// R/W Timer 3 Counter High Register
sfr			T3ADRL		= 0xC4;			// R/W Timer 3 Counter Low Register
sfr			T3ADRH		= 0xC5;			// R/W Timer 3 Counter Register	//by nakwon
sfr			T3BDRL		= 0xC6;			// R/W Timer 3 Data Low Register
sfr			T3BDRH		= 0xC7;			// R/W Timer 3 Data High Register

// TIMER 4 Control
sfr			T4CRL		= 0xCA;			// R/W Timer 4 Control Low Register
sfr			T4CRH		= 0xCB;			// R/W Timer 4 Control High Register
//sfr16		T4ADR		= 0xCC;			// R/W Timer 4 Counter Register	//by nakwon
sfr			T4ADRL		= 0xCC;			// R/W Timer 4 Counter Low Register
sfr			T4ADRH		= 0xCD;			// R/W Timer 4 Counter High Register
sfr			T4BDRL		= 0xCE;			// R/W Timer 4 Data Low Register
sfr			T4BDRH		= 0xCF;			// R/W Timer 4 Data High Register

// TIMER 5 Control
sfr			T5CRL		= 0xD2;			// R/W Timer 5 Control Low Register
sfr			T5CRH		= 0xD3;			// R/W Timer 5 Control High Register
//sfr16		T5ADR		= 0xD4;			// R/W Timer 5 Counter Register
sfr			T5ADRL		= 0xD4;			// R/W Timer 5 Counter Low Register
sfr			T5ADRH		= 0xD5;			// R/W Timer 5 Counter High Register
sfr			T5BDRL		= 0xD6;			// R/W Timer 5 Data Low Register
sfr			T5BDRH		= 0xD7;			// R/W Timer 5 Data High Register

// TIMER 6 Control
sfr			T6CRL		= 0xDA;			// R/W Timer 6 Control Low Register
sfr			T6CRH		= 0xDB;			// R/W Timer 6 Control High Register
//sfr16		T6ADR		= 0xDC;			// R/W Timer 6 Counter Register
sfr			T6ADRL		= 0xDC;			// R/W Timer 6 Counter Low Register
sfr			T6ADRH		= 0xDD;			// R/W Timer 6 Counter High Register
sfr			T6BDRL		= 0xDE;			// R/W Timer 6 Data Low Register
sfr			T6BDRH		= 0xDF;			// R/W Timer 6 Data High Register

//======================================================
// BUZZER Control
//======================================================
sfr			BUZCR		= 0x97;			// R/W BUZZER Control Register
sfr			BUZDR		= 0x8F;			// R/W BUZZER Data Register

//======================================================
//    SPI(SIO) Control
//======================================================
sfr			SPI2CR		= 0xED;			// R/W SPI2 Control Register
sfr			SPI2DR		= 0xEE;			// R/W SPI2 Data Register
sfr			SPI2SR		= 0xEF;			// R/W SPI2 Status Register

sfr			SPI3CR		= 0xF5;			// R/W SPI3 Control Register
sfr			SPI3DR		= 0xF6;			// R/W SPI3 Data Register
sfr			SPI3SR		= 0xF7;			// R/W SPI3 Status Register

//======================================================
//    ADC and DAC Contol
//======================================================
sfr			ADCCRL		=  0xEA;		// R/W A/D Converter Control Low Register
sfr			ADCCRH		=  0xEB;		// R/W A/D Converter Control High Register
sfr			ADCDRL		=  0xE2;		// R   A/D Converter Data Low Register
sfr			ADCDRH		=  0xE3;		// R   A/D Converter Data High Register


//======================================================
//    LCD Contol
//======================================================
sfr			LCDCCR		= 0xF1;			// R/W LCD Contrast Contrast Register
sfr			LCDCRL		= 0xF2;			// R/W LCD Driver Control Low Register
sfr			LCDCRH		= 0xF3;			// R/W LCD Driver Control High Register

//======================================================
//  M8051 System Register 
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
//    Flash Memory Control
//======================================================
sfr			FSADRH		= 0xFA;			// R/W Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// R/W Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// R/W Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// R/W Flash Identification Register
sfr			FMCR		= 0xFE;			// R/W Flash Mode Control Register

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

unsigned char xdata P0FSR _at_ 0x1009;	// R/W P0 Function Select Register
unsigned char xdata P1FSR _at_ 0x100A;	// R/W P1 Function Select Register
unsigned char xdata P8FSR _at_ 0x100B;	// R/W P8 Function Select Register
unsigned char xdata P2FSRL _at_ 0x100C;	// R/W P2 Function Select Register Low
unsigned char xdata P2FSRH _at_ 0x100D;	// R/W P2 Function Select Register High
unsigned char xdata P3FSRL _at_ 0x100E;	// R/W P3 Function Select Register Low
unsigned char xdata P3FSRH _at_ 0x100F;	// R/W P3 Function Select Register High
unsigned char xdata P4FSRL _at_ 0x1010;	// R/W P4 Function Select Register Low
unsigned char xdata P4FSRH _at_ 0x1011;	// R/W P4 Function Select Register High
unsigned char xdata P5FSRL _at_ 0x1012;	// R/W P5 Function Select Register Low
unsigned char xdata P5FSRH _at_ 0x1013;	// R/W P5 Function Select Register High
unsigned char xdata P6FSRL _at_ 0x1014;	// R/W P6 Function Select Register Low
unsigned char xdata P6FSRH _at_ 0x1015;	// R/W P6 Function Select Register High
unsigned char xdata P7FSRL _at_ 0x1016;	// R/W P7 Function Select Register Low
unsigned char xdata P7FSRH _at_ 0x1017;	// R/W P7 Function Select Register High

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

extern unsigned char xdata P0FSR;
extern unsigned char xdata P1FSR;
extern unsigned char xdata P8FSR;
extern unsigned char xdata P2FSRL;
extern unsigned char xdata P2FSRH;
extern unsigned char xdata P3FSRL;
extern unsigned char xdata P3FSRH;
extern unsigned char xdata P4FSRL;
extern unsigned char xdata P4FSRH;
extern unsigned char xdata P5FSRL;
extern unsigned char xdata P5FSRH;
extern unsigned char xdata P6FSRL;
extern unsigned char xdata P6FSRH;
extern unsigned char xdata P7FSRL;
extern unsigned char xdata P7FSRH;
#endif

//------------------------------------------------------------------------------
//    UART/SPI/I2C Control
//------------------------------------------------------------------------------
#ifdef MAIN
unsigned char xdata USI0CR1 _at_ 0x1018;	// R/W UART0 Control1 Register
unsigned char xdata USI0CR2 _at_ 0x1019;	// R/W UART0 Interrupt Control Register
unsigned char xdata USI0CR3 _at_ 0x101A;	// R/W SPI0 Sync Control Register
unsigned char xdata USI0CR4 _at_ 0x101B;	// R/W I2C0 Control Register
unsigned char xdata USI0ST1 _at_ 0x1020;	// R/W UART0 State Register 0
unsigned char xdata USI0ST2 _at_ 0x1021;	// R/W UART0 State Register 1
unsigned char xdata USI0BD _at_ 0x1022;	// R/W UART0 BAUD Rate Register
unsigned char xdata USI0SDHR _at_ 0x1023;	// R/W I2C0 SDA Hold Time Register
unsigned char xdata USI0DR _at_ 0x1024;	// R/W UART/SPI/I2C Data0 Register
unsigned char xdata USI0SCLR _at_ 0x1025;	// R/W I2C0 SCL Low Period Register
unsigned char xdata USI0SCHR _at_ 0x1026;	// R/W I2C0 SCL High Period Register
unsigned char xdata USI0SAR _at_ 0x1027;	// R/W I2C0 Self Address Register

unsigned char xdata USI1CR1 _at_ 0x1028;	// R/W  UART1 Control1 Register
unsigned char xdata USI1CR2 _at_ 0x1029;	// R/W UART1 Interrupt Control Register
unsigned char xdata USI1CR3 _at_ 0x102A;	// R/W SPI1 Sync Control Register
unsigned char xdata USI1CR4 _at_ 0x102B;	// R/W I2C1 Control Register
unsigned char xdata USI1ST1 _at_ 0x1030;	// R/W UART1 State Register 0
unsigned char xdata USI1ST2 _at_ 0x1031;	// R/W UART1 State Register 1
unsigned char xdata USI1BD _at_ 0x1032;	// R/W UART1 BAUD Rate Register
unsigned char xdata USI1SDHR _at_ 0x1033;	// R/W I2C1 SDA Hold Time Register
unsigned char xdata USI1DR _at_ 0x1034;	// R/W UART/SPI/I2C Data0 Register
unsigned char xdata USI1SCLR _at_ 0x1035;	// R/W I2C1 SCL Low Period Register
unsigned char xdata USI1SCHR _at_ 0x1036;	// R/W I2C1 SCL High Period Register
unsigned char xdata USI1SAR _at_ 0x1037;	// R/W I2C01 Self Address Register

unsigned char xdata UART2CR1 _at_ 0x1038;	// R/W UART2 Control1 Register
unsigned char xdata UART2CR2 _at_ 0x1039;	// R/W UART2 Control2 Register
unsigned char xdata UART2CR3 _at_ 0x103A;	// R/W UART2 Control3 Register
unsigned char xdata UART2ST _at_ 0x103B;	// R/W UART2 State Register
unsigned char xdata UART2BD _at_ 0x103C;	// R/W UART2 BAUD Rate Register
unsigned char xdata UART2DR _at_ 0x103D;	// R/W UART2 Data Register
unsigned char xdata PGINTCR _at_ 0x103E;	// R/W PWM Generator Interrupt Control Register
unsigned char xdata PGIFLAG _at_ 0x103F;	// R/W PWM Generator Interrupt Flag Register

unsigned char xdata UART3CR1 _at_ 0x1040;	// R/W UART3 Control1 Register
unsigned char xdata UART3CR2 _at_ 0x1041;	// R/W UART3 Control2 Register
unsigned char xdata UART3CR3 _at_ 0x1042;	// R/W UART3 Control3 Register
unsigned char xdata UART3ST _at_ 0x1043;	// R/W UART3 State Register
unsigned char xdata UART3BD _at_ 0x1044;	// R/W UART3 BAUD Rate Register
unsigned char xdata UART3DR _at_ 0x1045;	// R/W UART3 Data Register

unsigned char xdata UART4CR1 _at_ 0x1048;	// R/W UART4 Control1 Register
unsigned char xdata UART4CR2 _at_ 0x1049;	// R/W UART4 Control2 Register
unsigned char xdata UART4CR3 _at_ 0x104A;	// R/W UART4 Control3 Register
unsigned char xdata UART4ST _at_ 0x104B;	// R/W UART4 State Register
unsigned char xdata UART4BD _at_ 0x104C;	// R/W UART4 BAUD Rate Register
unsigned char xdata UART4DR _at_ 0x104D;	// R/W UART4 Data Register

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

extern unsigned char xdata UART2CR1;
extern unsigned char xdata UART2CR2;
extern unsigned char xdata UART2CR3;
extern unsigned char xdata UART2ST;
extern unsigned char xdata UART2BD;
extern unsigned char xdata UART2DR;
extern unsigned char xdata PGINTCR;
extern unsigned char xdata PGIFLAG;

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

//======================================================
//    Extend Timer Control
//======================================================
#ifdef MAIN
unsigned char xdata T7CR _at_ 0x1050;	// R/W Timer7 Control Register
unsigned char xdata T7DR _at_ 0x1051;	// R/W Timer7 Data Register
unsigned char xdata T7CNT _at_ 0x1051;	// R   Timer7 Count Register
unsigned char xdata T7CAPR _at_ 0x1051;	// R   Timer7 Capture Data Register

#else
extern unsigned char xdata T7CR;
extern unsigned char xdata T7DR;
extern unsigned char xdata T7CNT;
extern unsigned char xdata T7CAPR;
#endif

//======================================================
//    3 phase PWM Motor Control
//======================================================
#ifdef MAIN
unsigned char xdata T8CR _at_ 0x1052;	// R/W Timer8 Control Register
unsigned char xdata T8PCR1 _at_ 0x1053;	// R/W Timer8 PWM Control Register 1
unsigned char xdata T8PCR2 _at_ 0x1054;	// R/W Timer8 PWM Control Register 2
unsigned char xdata T8PCR3 _at_ 0x1055;	// R/W Timer8 PWM Control Register 3
unsigned char xdata T8ISR _at_ 0x1056;	// R/W Timer8 Interrupt State Register
unsigned char xdata T8MSK _at_ 0x1057;	// R/W Timer8 Interrupt Mask Register

unsigned char xdata T8PPRL _at_ 0x1058;	// R/W Timer8 PWM Period Low Register
unsigned char xdata T8PPRH _at_ 0x1059;	// R/W Timer8 PWM Period High Register
unsigned char xdata T8ADRL _at_ 0x105A;	// R/W Timer8 PWM A Duty Low Register
unsigned char xdata T8ADRH _at_ 0x105B;	// R/W Timer8 PWM A Duty High Register
unsigned char xdata T8BDRL _at_ 0x105C;	// R/W Timer8 PWM B Duty Low Register
unsigned char xdata T8BDRH _at_ 0x105D;	// R/W Timer8 PWM B Duty High Register
unsigned char xdata T8CDRL _at_ 0x105E;	// R/W Timer8 PWM C Duty Low Register
unsigned char xdata T8CDRH _at_ 0x105F;	// R/W Timer8 PWM C Duty High Register

unsigned char xdata T8DLYA _at_ 0x1060;	// R/W Timer8 PWM A Delay Register
unsigned char xdata T8DLYB _at_ 0x1061;	// R/W Timer8 PWM B Delay Register
unsigned char xdata T8DLYC _at_ 0x1062;	// R/W Timer8 PWM C Delay Register
unsigned char xdata T8DR _at_ 0x1063;	// R/W Timer8 Data Register
unsigned char xdata T8CAPR _at_ 0x1064;	// R   Timer8 Capture Data Register
unsigned char xdata T8CNT _at_ 0x1065;	// R   Timer8 Count Register
unsigned char xdata PWMDLYDR _at_ 0x1066;	// R/W PWM Generator Delay Data Register
unsigned char xdata NFILDR _at_ 0x1067;	// R/W PWM Generator Noise Filter Register

#else
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
extern unsigned char xdata PWMDLYDR;
extern unsigned char xdata NFILDR;
#endif

//======================================================
//    10bit PWM Control
//======================================================
#ifdef MAIN
unsigned char xdata PWMCRL _at_ 0x1078;	// R/W PWM Generator Control Low Register
unsigned char xdata PWMCRH _at_ 0x1079;	// R/W PWM Generator Control High Register
unsigned char xdata PWMADRL _at_ 0x107A;	// R/W PWM Generator A Data Low Register
unsigned char xdata PWMADRH _at_ 0x107B;	// R/W PWM Generator A Data High Register
unsigned char xdata PWMBDRL _at_ 0x107C;	// R/W PWM Generator B Data Low Register
unsigned char xdata PWMBDRH _at_ 0x107D;	// R/W PWM Generator B Data High Register
unsigned char xdata PWMCNTL _at_ 0x107E;	// R   PWM Generator Counter Low Register
unsigned char xdata PWMCNTH _at_ 0x107F;	// R   PWM Generator Counter High Register

#else
extern unsigned char xdata PWMCRL;
extern unsigned char xdata PWMCRH;
extern unsigned char xdata PWMADRL;
extern unsigned char xdata PWMADRH;
extern unsigned char xdata PWMBDRL;
extern unsigned char xdata PWMBDRH;
extern unsigned char xdata PWMCNTL;
extern unsigned char xdata PWMCNTH;
#endif

#endif	//_MC96F7864_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
