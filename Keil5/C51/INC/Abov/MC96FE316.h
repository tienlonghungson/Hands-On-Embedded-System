//======================================================
//	file name: MC96FE316.h				: ANTS (CHINA)
//	device   : MC96FE316(32, 28, 24, 20 pin)
//	version  : Ver1.000.01
//	date     : 2018-07-16.Mon
//	compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_MC96FE316_
#define		_MC96FE316_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0xA1;			// P0 Direction Register
sfr			P0OD		= 0x91;			// P0 Open-drain Selection Register
sfr			P0PU		= 0xAC;			// P0 Pull-up Resistor Selection Register

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;
	
sfr			P1IO		= 0xB1;			// P1 Direction Register
sfr			P1OD		= 0x92;			// P1 Open-drain Selection Register
sfr			P1PU		= 0xAD;			// P1 Pull-up Resistor Selection Register
sfr			P1DB		= 0x95;			// P1 Debounce Enable Register

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0xB9;			// P2 Direction Register
sfr			P2OD		= 0x93;			// P2 Open-drain Selection Register
sfr			P2PU		= 0xAE;			// P2 Pull-up Resistor Selection Register
sfr			P23DB		= 0x96;			// P2/P3 Debounce Enable Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			P3IO		= 0xC1;			// P3 Direction Register
sfr			P3OD		= 0x94;			// P3 Open-drain Selection Register
sfr			P3PU		= 0xAF;			// P3 Pull-up Resistor Selection Register

sfr			P0FSR		= 0xF1;			//P0 Function Selection Register
sfr			P1FSRL		= 0xF2;			//P1 Function Selection Low Register
sfr			P1FSRH		= 0xF3;			//P1 Function Selection High Register
sfr			P2FSRL		= 0xF4;			//P2 Function Selection Low Register
sfr			P2FSRH		= 0xF5;			//P2 Function Selection High Register
sfr			P3FSR		= 0xF6;			//P3 Function Selection Register

// Interrupt
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIFLAG0		= 0xC0;			// External Interrupt Flag 0 Register
sfr			EIFLAG1		= 0xB0;			// External Interrupt Flag 1 Register
sfr			EIPOL0L		= 0xA4;			// External Interrupt Polarity 0 Low Register
sfr			EIPOL0H		= 0xA5;			// External Interrupt Polarity 0 High Register
sfr			EIPOL1		= 0xA6;			// External Interrupt Polarity 1 Register

// System Oscillator, Reset
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register

// Basic Interval TImer
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// Basic Interval Timer Control Register

//  Watch Dog Timer
#ifdef MAIN
unsigned char xdata WDTC _at_ 0x505E;	// Watch Dog Timer Clear Register
unsigned char xdata WDTSR _at_ 0x505F;	// Watch Dog Timer Status Register
#else
extern unsigned char xdata WDTC;
extern unsigned char xdata WDTSR;
#endif
sfr			WDTIDR		= 0x8E;			// Watch Dog Timer Identification Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control register

// TIMER 0
sfr			T0CR		= 0x99;			// Timer 0 Control Register
sfr			T0CNT		= 0x9A;			// Timer 0 Counter Register
sfr			T0DR		= 0x9B;			// Timer 0 Data register

// TIMER 1
sfr			T1CRL		= 0xB2;			// Timer 1 Control Low Register
sfr			T1CRH		= 0xB3;			// Timer 1 Control High Register
sfr			T1ADRL		= 0xB4;			// Timer 1 A Data Low Register
sfr			T1ADRH		= 0xB5;			// Timer 1 A Data High Register
sfr			T1BDRL		= 0xB6;			// Timer 1 B Data Low Register
sfr			T1BDRH		= 0xB7;			// Timer 1 B Data High Register

// TIMER 2
sfr			T2CRL		= 0xBA;			// Timer 2 Control Low Register
sfr			T2CRH		= 0xBB;			// Timer 2 Control High Register
sfr			T2ADRL		= 0xBC;			// Timer 2 A Data Low Register
sfr			T2ADRH		= 0xBD;			// Timer 2 A Data High Register
sfr			T2BDRL		= 0xBE;			// Timer 2 B Data Low Register
sfr			T2BDRH		= 0xBF;			// Timer 2 B Data High Register

// TIMER 3
sfr			T3CRL		= 0xC2;			// Timer 3 Control Low Register
sfr			T3CRH		= 0xC3;			// Timer 3 Control High Register
sfr			T3OUTCRL	= 0xC4;			// Timer 3 Output Control Low Register
sfr			T3OUTCRH	= 0xC5;			// Timer 3 Output Control High Register
sfr			T3PDRL		= 0xC6;			// Timer 3 Period Data Low Register
sfr			T3PDRH		= 0xC7;			// Timer 3 Period Data High Register
sfr			T3ADRL		= 0xCA;			// Timer 3 A Data Low Register
sfr			T3ADRH		= 0xCB;			// Timer 3 A Data High Register
sfr			T3BDRL		= 0xCC;			// Timer 3 B Data Low Register
sfr			T3BDRH		= 0xCD;			// Timer 3 B Data High Register
sfr			T3CDRL		= 0xCE;			// Timer 3 C Data Low Register
sfr			T3CDRH		= 0xCF;			// Timer 3 C Data High Register
sfr			T3DLY		= 0xC9;			// Timer 3 PWM Output Delay Register
sfr			T3INTCR		= 0xD1;			// Timer 3 Interrupt Control Register
sfr			T3IFR		= 0xD2;			// Timer 3 Interrupt Flag Register
sfr			T3ADTCR		= 0xD3;			// Timer 3 A/DC Trigger Control Register
sfr			T3ADTDR		= 0xD4;			// Timer 3 A/DC Trigger Generator Data Register
sfr			T3HIZCR		= 0xD5;			// Timer 3 High-Impedance Control register

// BUZZER
sfr			BUZDR		= 0x8F;			// BUZZER Data Register
sfr			BUZCR		= 0x97;			// BUZZER Control Register

// ADC
sfr			ADCCRL		= 0x9C;			// A/D Converter Control Low Register
sfr			ADCCRH		= 0x9D;			// A/D Converter Control High Register
sfr			ADCDRL		= 0x9E;			// A/D Converter Data Low Register
sfr			ADCDRH		= 0x9F;			// A/D Converter Data High Register

// Comparator
sfr			CMPCR		= 0xEA;			// Comparator Control Register
sfr			CMPPOL		= 0xE9;			// Comparator Polarity Register
sfr			CMPFLAG		= 0xA0;			// Comparator Interrupt Flag Register
sfr			CMPNFCR		= 0xEC;			// Comparator Noise Filter Control Register

// Operational Amplifier
sfr			AMPCR		= 0xEB;			// OP-AMP Control Register

// USI (UART + SPI + I2C)
sfr			USICR1		= 0xD9;			// USI Control Register 1
sfr			USICR2		= 0xDA;			// USI Control Register 2
sfr			USICR3		= 0xDB;			// USI Control Register 3
sfr			USICR4		= 0xDC;			// USI Control Register 4
sfr			USIST1		= 0xE1;			// USI Status Register 1
sfr			USIST2		= 0xE2;			// USI Status Register 2
sfr			USIBD		= 0xE3;			// USI Baud Rate Generation Register
sfr			USIDR		= 0xE5;			// USI Data Register
sfr			USISDHR		= 0xE4;			// USI SDA Hold Time Register
sfr			USISCHR		= 0xE7;			// USI SCL High Period Register
sfr			USISCLR		= 0xE6;			// USI SCL Low Period Register
sfr			USISAR		= 0xDD;			// USI Slave Address Register

// Calculator
sfr			CALCR		= 0xED;			// Calculator Control Register
sfr			CALPTR		= 0xEE;			// Calculator Address Pointer
sfr			CALDR		= 0xEF;			// Calculator Data Register

// Power down operation
sfr			PCON		= 0x87;			// Power Control Register
sfr			LVICR		= 0x86;			// Low Voltage Indicator Control Register
sfr			RSTFR		= 0xE8;			// Reset Flag Register
sfr			LVRCR		= 0xD8;			// Low Voltage Reset Control Register

// Flash Memory Control
sfr			FSADRH		= 0xFA;			// Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// Flash Identification Register
sfr			FMCR		= 0xFE;			// Flash Mode Control Register

// Flash CRC
#ifdef MAIN
unsigned char xdata FCSARH _at_ 0x5050;	// Flash CRC Start Address High Register
unsigned char xdata FCEARH _at_ 0x5051;	// Flash CRC End Address High Register
unsigned char xdata FCSARM _at_ 0x5052;	// Flash CRC Start Address Middle Register
unsigned char xdata FCEARM _at_ 0x5053;	// Flash CRC End Address Middle Register
unsigned char xdata FCSARL _at_ 0x5054;	// Flash CRC Start Address Low Register
unsigned char xdata FCEARL _at_ 0x5055;	// Flash CRC End Address Low Register
unsigned char xdata FCCR _at_ 0x5056;	// Flash CRC Control Register
unsigned char xdata FCDRH _at_ 0x5057;	// Flash CRC Data High Register
unsigned char xdata FCDRL _at_ 0x5058;	// Flash CRC Data Low Register
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
sfr			FCDIN		= 0xDF;			// Flash CRC Data In Register

// Miscellany
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_MC96FE316_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
