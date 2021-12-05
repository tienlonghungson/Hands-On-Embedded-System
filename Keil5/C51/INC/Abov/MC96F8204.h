//======================================================
//		file name: MC96F8204.h
//		device   : MC96F8204 (20/16/10/8pin)
//		version  : Ver1.0  
//		date     : 2016-05-03
//======================================================
#include	<intrins.h>

#ifndef		_MC96F8204_
#define		_MC96F8204_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x88;			// P0 Direction Register
sfr			P0OD		= 0x94;			// P0 Open-drain Selection Register
sfr			P0PU		= 0x93;			// P0 Pull-up Resistor Selection Register
sfr			P0DB		= 0x95;			// P0/P3 Debounce Enable Register

sfr			P0FSRH		= 0x97;			// P0 Function Selection High Register
sfr			P0FSRM		= 0x8F;			// P0 Function Selection Mid Register
sfr			P0FSRL		= 0x96;			// P0 Function Selection Low Register

// P1 port
sfr			P1			= 0xAC;			// P1 Data Register
sfr			P1IO		= 0xAD;			// P1 Direction Register
sfr			P1OD		= 0xAF;			// P1 Open-drain Selection Register
sfr			P1PU		= 0xAE;			// P1 Pull-up Resistor Selection Register
sfr			P1FSR		= 0xA7;			// P1 Function Selection Register

// P2 port
sfr			P2			= 0xC4;			// P2 Data Register
sfr			P2IO		= 0xC5;			// P2 Direction Register
sfr			P2OD		= 0xC7;			// P2 Open-drain Selection Register
sfr			P2PU		= 0xC6;			// P2 Pull-up Resistor Selection Register

// interrupt
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0xB8;			// Interrupt Priority Register
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIFLAG		= 0xC0;			// External Interrupt Flag Register
sfr			EIPOL0		= 0xA4;			// External Interrupt Polarity 0 Register
sfr			EIPOL1		= 0xA5;			// External Interrupt Polarity 1 Register

// clock
sfr			SCCR		= 0x8A;			// System and Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register
sfr			LIFSR		= 0xC9;			// LFIRC Frequency Selection Register
sfr			XTFLSR		= 0xBF;			// X-tal Filter Selection Register

// Basic interval timer
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// Basic Interval Timer Control Register

// Watch-dog timer
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTDR		= 0x8E;			// Watch Dog Timer Data Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control Register

// Watch timer
sfr			WTCNT		= 0x9F;			// Watch Timer Counter Register
sfr			WTDR		= 0x9F;			// Watch Timer Data Register
sfr			WTCR		= 0x9E;			// Watch Timer Control register

// Timer 0
sfr			T0CR		= 0x90;			// Timer 0 Control Register
sfr			T0CNT		= 0x91;			// Timer 0 Counter Register
sfr			T0DR		= 0x92;			// Timer 0 Data Register
sfr			T0CDR		= 0x92;			// Timer 0 Capture Data Register

// Timer 1
sfr			T1CRH		= 0x99;			// Timer 1 Control High Register
sfr			T1CRL		= 0x98;			// Timer 1 Control Low Register
sfr			T1ADRH		= 0x9B;			// Timer 1 A Data High Register
sfr			T1ADRL		= 0x9A;			// Timer 1 A Data Low Register
sfr			T1BDRH		= 0x9D;			// Timer 1 B Data High Register
sfr			T1BDRL		= 0x9C;			// Timer 1 B Data Low register

// Timer 2
sfr			T2CRH		= 0xB1;			// Timer 2 Control High Register
sfr			T2CRL		= 0xB0;			// Timer 2 Control Low Register
sfr			T2ADRH		= 0xB3;			// Timer 2 A Data High Register
sfr			T2ADRL		= 0xB2;			// Timer 2 A Data Low Register
sfr			T2BDRH		= 0xB5;			// Timer 2 B Data High Register
sfr			T2BDRL		= 0xB4;			// Timer 2 B Data Low register

// ADC
sfr			ADCCRH		= 0xA1;			// A/D Converter Control High Register
sfr			ADCCRL		= 0xA0;			// A/D Converter Control Low Register
sfr			ADCDRH		= 0xCF;			// A/D Converter Data High Register
sfr			ADCDRL		= 0xCE;			// A/D Converter Data Low register

// USART
sfr			USTCR1		= 0xD9;			// USART Control Register 1
sfr			USTCR2		= 0xDA;			// USART Control Register 2
sfr			USTCR3		= 0xDB;			// USART Control Register 3
sfr			USTST		= 0xDC;			// USART Status Register
sfr			USTBD		= 0xDD;			// USART Baud Rate Generation Register
sfr			USTDR		= 0xDE;			// USART Data register

// I2C
sfr			I2CCR		= 0xE9;			// I2C Control Register
sfr			I2CSR		= 0xEA;			// I2C Status Register
sfr			I2CSAR0		= 0xEB;			// I2C Slave Address 0 Register
sfr			I2CSAR1		= 0xF1;			// I2C Slave Address 1 Register
sfr			I2CDR		= 0xEC;			// I2C Data Register
sfr			I2CSDHR		= 0xED;			// I2C SDA Hold Time Register
sfr			I2CSCLR		= 0xEE;			// I2C SCL Low Period Register
sfr			I2CSCHR		= 0xEF;			// I2C SCL High Period Register

// Flash CRC/Checksum
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
sfr			FCDIN		= 0xD7;			// Flash CRC Data In register

// Power
sfr			PCON		= 0x87;			// Power Control register

// LVI
sfr			RSTFR		= 0xE8;			// Reset Flag Register
sfr			LVRCR		= 0xD8;			// Low Voltage Reset Control Register
sfr			LVICR		= 0x86;			// Low Voltage Indicator Control register

// Flash
sfr			FSADRH		= 0xFA;			// Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// Flash Identification Register
sfr			FMCR		= 0xFE;			// Flash Mode Control register


// Basic registers
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif									//_MC96F8204_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
