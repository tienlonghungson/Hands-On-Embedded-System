//======================================================
//		device   : MC96F8316(32 pin)
//		version  : Ver1.0  
//		date     : 2011-10-14
//		compiler : Keil-C
//		author   : Ma, Nakwon
//======================================================

#include	<intrins.h>

#ifndef		_MC96F8316_
#define		_MC96F8316_

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
sfr			P03DB		= 0xDE;			// P0/P3 Debounce Enable Register

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
sfr			P12DB		= 0xDF;			// P1/P2 Debounce Enable Register

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
   			
sfr			P0FSR		= 0xD3;			//P0 Function Selection Register
sfr			P1FSRL		= 0xD4;			//P1 Function Selection Low Register
sfr			P1FSRH		= 0xD5;			//P1 Function Selection High Register
sfr			P2FSR		= 0xD6;			//P2 Function Selection Register
sfr			P3FSR		= 0xD7;			//P3 Function Selection Register

// Interrupt Control
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// Interrupt Enable Register 3
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			IIFLAG		= 0xA0;			// Internal Interrupt Flag Register
sfr			EIFLAG0		= 0xC0;			// External Interrupt Flag 0 Register
sfr			EIFLAG1		= 0xB0;			// External Interrupt Flag 1 Register
sfr			EIPOL0L		= 0xA4;			// External Interrupt Polarity 0 Low Register
sfr			EIPOL0H		= 0xA5;			// External Interrupt Polarity 0 High Register
sfr			EIPOL1		= 0xA6;			// External Interrupt Polarity 1 Register
sfr			EIPOL2		= 0xA7;			// External Interrupt Polarity 2 Register

// System Oscillator, Reset Control
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			OSCCR		= 0xC8;			// Oscillator Control Register
sfr			BITCNT		= 0x8C;			// Basic Interval Timer Counter Register
sfr			BITCR		= 0x8B;			// Basic Interval Timer Control Register
sfr			RSTFR		= 0xE8;			// Reset Flag Register
sfr			PCON		= 0x87;			// Power Control Register
sfr			LVRCR		= 0xD8;			// Low Voltage Reset Control Register
sfr			LVICR		= 0x86;			// Low Voltage Indicator Control Register

//  Watch Dog Timer Control 
sfr			WDTDR		= 0x8E;			// Watch Dog Timer Data Register
sfr			WDTCNT		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTCR		= 0x8D;			// Watch Dog Timer Control Register

//  Watch Timer Control
sfr			WTDR		= 0x89;			// Watch Timer Data Register
sfr			WTCNT		= 0x89;			// Watch Timer Counter Register
sfr			WTCR		= 0x96;			// Watch Timer Control Register

// TIMER 0 Control
sfr			T0CR		= 0xB2;			// Timer 0 Control Register
sfr			T0CNT		= 0xB3;			// Timer 0 Counter Register
sfr			T0DR		= 0xB4;			// Timer 0 Data Register
sfr			T0CDR		= 0xB4;			// Timer 0 Capture Data Register

// TIMER interrupt Control
//sfr   TIFR    =  0xC3;// Timer Interrupt Flag Register

// TIMER 1 Control
sfr			T1CRL		= 0xBA;			// Timer 1 Control Low Register
sfr			T1CRH		= 0xBB;			// Timer 1 Control High Register
sfr			T1ADRL		= 0xBC;			// Timer 1 A Data Low Register
sfr			T1ADRH		= 0xBD;			// Timer 1 A Data High Register
sfr			T1BDRL		= 0xBE;			// Timer 1 B Data Low Register
sfr			T1BDRH		= 0xBF;			// Timer 1 B Data High Register

// TIMER 2 Control
sfr			T2CRL		= 0xC2;			// Timer 2 Control Low Register
sfr			T2CRH		= 0xC3;			// Timer 2 Control High Register
sfr			T2ADRL		= 0xC4;			// Timer 2 A Data Low Register
sfr			T2ADRH		= 0xC5;			// Timer 2 A Data High Register
sfr			T2BDRL		= 0xC6;			// Timer 2 B Data Low Register
sfr			T2BDRH		= 0xC7;			// Timer 2 B Data High Register

// BUZZER Control
sfr			BUZDR		= 0x8F;			// BUZZER Data Register
sfr			BUZCR		= 0x97;			// BUZZER Control Register

// ADC Contol
sfr			ADCCRL		= 0x9C;			// A/D Converter Control Low Register
sfr			ADCCRH		= 0x9D;			// A/D Converter Control High Register
sfr			ADCDRL		= 0x9E;			// A/D Converter Data Low Register
sfr			ADCDRH		= 0x9F;			// A/D Converter Data High Register

sfr			ADWRCR0		= 0xF2;			// ADC Wake-up Resistor Control Register 0
sfr			ADWRCR1		= 0xF3;			// ADC Wake-up Resistor Control Register 1
sfr			ADWRCR2		= 0xF4;			// ADC Wake-up Resistor Control Register 2
sfr			ADWRCR3		= 0xF5;			// ADC Wake-up Resistor Control Register 3
sfr			ADWCRL		= 0xF6;			// ADC Wake-up Control Low Register
sfr			ADWCRH		= 0xF7;			// ADC Wake-up Control High Register
sfr			ADWIFRL		= 0xDC;			// ADC Wake-up Interrupt Flag Low Register
sfr			ADWIFRH		= 0xDD;			// ADC Wake-up Interrupt Flag High Register

// SPI(SIO) Control
sfr			SPICR		= 0xB5;			// SPI Control Register
sfr			SPIDR		= 0xB6;			// SPI Data Register
sfr			SPISR		= 0xB7;			// SPI Status Register

// UART Control
sfr			UARTCR1		= 0xE2;			// UART Control Register 1
sfr			UARTCR2		= 0xE3;			// UART Control Register 2
sfr			UARTCR3		= 0xE4;			// UART Control Register 3
sfr			UARTST		= 0xE5;			// UART Status Register
sfr			UARTBD		= 0xE6;			// UART BaudRate Register
sfr			UARTDR		= 0xE7;			// UART Data Register

// I2C Control
sfr			I2CCR		= 0xE9;			// I2C Control Register
sfr			I2CSR		= 0xEA;			// I2C Status Register
sfr			I2CSAR0		= 0xEB;			// I2C Slave Address 0 Register
sfr			I2CSAR1		= 0xF1;			// I2C Slave Address 1 Register
sfr			I2CDR		= 0xEC;			// I2C Data Register
sfr			I2CSDHR		= 0xED;			// I2C SDA Hold Time Register
sfr			I2CSCLR		= 0xEE;			// I2C SCL Low Period Register
sfr			I2CSCHR		= 0xEF;			// I2C SCL High Period Register

// Flash Memory Control
sfr			FSADRH		= 0xFA;			// Flash Sector Address High Register
sfr			FSADRM		= 0xFB;			// Flash Sector Address Middle Register
sfr			FSADRL		= 0xFC;			// Flash Sector Address Low Register
sfr			FIDR		= 0xFD;			// Flash Identification Register
sfr			FMCR		= 0xFE;			// Flash Mode Control Register

sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_MC96F8316_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
