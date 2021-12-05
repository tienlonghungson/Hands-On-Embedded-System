//======================================================
//		file name: MC96FT242.h
//		device   : MC96FT242, MC96FT202, MC96FT162
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FT242_
#define _MC96FT242_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x89;			// P0 Direction Register
sfr			P0PU		= 0x95;			// P0 Pull-up Resistor Selection Register
sfr			P0OD		= 0x96;			// P0 Open-drain Selection Register
sfr			P0DB		= 0x97;			// P0 Debounce Enable Register

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;


sfr			P1IO		= 0x91;			// P1 Direction Register
sfr			P1PU		= 0x92;			// P1 Pull-up Resistor Selection Register
sfr			P1OD		= 0x93;			// P1 Open-drain Selection Register
sfr			P1DB		= 0x94;			// P1 Debounce Enable Register

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0x99;			// P2 Direction Register
sfr			P2PU		= 0x9A;			// P2 Pull-up Resistor Selection Register
sfr			P2OD		= 0x9B;			// P2 Open-drain Selection Register
sfr			P2DB		= 0x9C;			// P2 Debounce Enable Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			P3IO		= 0xA1;			// P3 Direction Register
sfr			P3PU		= 0x9D;			// P3 Pull-up Resistor Selection Register
sfr			P3OD		= 0x9E;			// P3 Open-drain Selection Register
sfr			P3DB		= 0x9F;			// P3 Debounce Enable Register

sfr			PCI0		= 0xA3;			// P0 Pin Change Interrupt Enable Register
sfr			PCI1		= 0xA4;			// P1 Pin Change Interrupt Enable Register
sfr			PSR0		= 0xAB;			// P0 Port Select Register
sfr			PSR1		= 0xAC;			// I2C, USART Port Change Selection Register
sfr			PSR2		= 0xAD;			// P2 Port Select Register
sfr			PSR3		= 0xAE;			// P3 Port Select Register
sfr			PSRPWM		= 0xAF;			// PWM Port Select Register

// interrupt registers
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// Interrupt Enable Register 2
sfr			IP			= 0xB8;			// Interrupt Priority Register
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1

// SYSCON
sfr			SCCR		= 0x8A;			// System and Clock Control Register

// Basic interval timer
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Basic Interval Timer Register

// Watchdog timer
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode register

// Free Run Counter
sfr			FCMR		= 0xCB;			// Free Run Counter Enable Register
sfr			FCLL		= 0xCC;			// Free Run Counter Low L
sfr			FCLH		= 0xCD;			// Free Run Counter Low H
sfr			FCHL		= 0xCE;			// Free Run Counter High L
sfr			FCHH		= 0xCF;			// Free Run Counter High H

// Buzzer
sfr			BUZCR0		= 0xB0;			// Buzzer Control Register 0
sfr			BUZDR0		= 0xB1;			// Buzzer Data Register 0
sfr			BUZCR1		= 0xC0;			// Buzzer Control Register 1
sfr			BUZDR1		= 0xC1;			// Buuzer Data Register 1

// Timer
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0CR1		= 0xB3;			// Timer 0 Mode Control Register 1
sfr			T0L			= 0xB4;			// Timer 0 Low register
sfr			PWM0DRL		= 0xB4;			// PWM 0 Duty Register Low
sfr			CDR0L		= 0xB4;			// Timer 0 Capture Data Register Low
sfr			T0H			= 0xB5;			// Timer 0 Register High
sfr			PWM0DRH		= 0xB5;			// PWM 0 Duty Register High
sfr			CDR0H		= 0xB5;			// Timer 0 Capture Data Register High
sfr			T0DRL		= 0xB6;			// Timer 0 Data Register Low
sfr			PWM0PRL		= 0xB6;			// PWM 0 Period Register Low
sfr			T0DRH		= 0xB7;			// Timer 0 Data Register High
sfr			PWM0PRH		= 0xB7;			// PWM 0 Period Register High
sfr			T1CR		= 0xBA;			// Timer 1 Mode Control register
sfr			T1CR1		= 0xBB;			// Timer 1 Mode Control Register 1
sfr			T1L			= 0xBC;			// Timer 1 Register Low
sfr			PWM1DRL		= 0xBC;			// PWM 1 Duty Register Low
sfr			CDR1L		= 0xBC;			// Timer 1 Capture Data Register Low
sfr			T1H			= 0xBD;			// Timer 1 Register High
sfr			PWM1DRH		= 0xBD;			// PWM 1 Duty Register High
sfr			CDR1H		= 0xBD;			// Timer 1 Capture Data Register High
sfr			T1DRL		= 0xBE;			// Timer 1 Data Register Low
sfr			PWM1PRL		= 0xBE;			// PWM 1 Period Register Low
sfr			T1DRH		= 0xBF;			// Timer 1 Data Register High
sfr			PWM1PRH		= 0xBF;			// PWM 1 Period Register High
sfr			T2CR		= 0xC2;			// Timer 2 Mode Control register
sfr			T2CR1		= 0xC3;			// Timer 2 Mode Control Register 1
sfr			T2L			= 0xC4;			// Timer 2 Low register
sfr			PWM2DRL		= 0xC4;			// PWM 2 Duty Register Low
sfr			CDR2L		= 0xC4;			// Timer 2 Capture Data Register Low
sfr			T2H			= 0xC5;			// Timer 2 Register High
sfr			PWM2DRH		= 0xC5;			// PWM 2 Duty Register High
sfr			CDR2H		= 0xC5;			// Timer 2 Capture Data Register High
sfr			T2DRL		= 0xC6;			// Timer 2 Data Register Low
sfr			PWM2PRL		= 0xC6;			// PWM 2 Period Register Low
sfr			T2DRH		= 0xC7;			// Timer 2 Data Register High
sfr			PWM2PRH		= 0xC7;			// PWM 2 Period Register High

// USART
sfr			UCTRL1		= 0xFA;			// USART Control 1 Register
sfr			UCTRL2		= 0xFB;			// USART Control 2 Register
sfr			UCTRL3		= 0xFC;			// USART Control 3 Register
sfr			USTAT		= 0xFD;			// USART Status Register
sfr			UBAUD		= 0xFE;			// USART Baud Rate Generation Register
sfr			UDATA		= 0xFF;			// USART Data register

// I2C
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// I2C Data Register
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1

// AD converter
sfr			ADCM		= 0xD1;			// A/D Converter Mode Register
sfr			ADCM2		= 0xD2;			// A/D Converter Mode 2 Register
sfr			ADCRL		= 0xD3;			// A/D Converter Result Low Register
sfr			ADCRH		= 0xD4;			// A/D Converter Result High register

// Touch switch
sfr			TSCR		= 0xE2;			// Touch Sensing Interrupt Flag Register
sfr			TSTR		= 0xE3;			// Touch Sensing Test register

#ifdef MAIN
unsigned char xdata KS00H _at_ 0x2E00;	// Touch Sensing Data High register
unsigned char xdata KS00L _at_ 0x2E01;	// Touch Sensing Data Low register
unsigned char xdata KS27H _at_ 0x2E2E;	// Touch Sensing Data High register
unsigned char xdata KS27L _at_ 0x2E2F;	// Touch Sensing Data Low register
unsigned char xdata RSD00 _at_ 0x2E40;	// Resistor Selection Data register
unsigned char xdata RSD01 _at_ 0x2E41;	// Resistor Selection Data register
unsigned char xdata RSD26 _at_ 0x2E5E;	// Resistor Selection Data register
unsigned char xdata RSD27 _at_ 0x2E5F;	// Resistor Selection Data Register
unsigned char xdata TTMR _at_ 0x2EC0;	// Touch-Timer Mode Register
unsigned char xdata TTDLL _at_ 0x2EC1;	// Touch Timer Data Low Register Low-Byte
unsigned char xdata TTDLH _at_ 0x2EC2;	// Touch Timer Data Low Register High-Byte
unsigned char xdata TTDHL _at_ 0x2EC3;	// Touch Timer Data High Register Low-Byte
unsigned char xdata TTDHH _at_ 0x2EC4;	// Touch Timer Data High Register High-Byte
unsigned char xdata KENR _at_ 0x2EC5;	// Touch Key Enable Register
unsigned char xdata KSMR _at_ 0x2EC6;	// Touch Key Scan Register
unsigned char xdata FPCAL _at_ 0x2EC8;	// Functional Power Calibration Register
unsigned char xdata VCAL _at_ 0x2EC9;	// Voltage Calibration Register
unsigned char xdata CCAL _at_ 0x2ECA;	// Current Calibration Register for Frequency Control
unsigned char xdata TSCTL0 _at_ 0x2ECB;	// Touch Sensor Control Register 0
unsigned char xdata TSCTL1 _at_ 0x2ECC;	// Touch Sensor Control Register 1
unsigned char xdata P0FT _at_ 0x2ECD;	// P0 Port Touch Function Register
unsigned char xdata P2FT _at_ 0x2ECE;	// P2 Port Touch Function Register
unsigned char xdata P3FT _at_ 0x2ECF;	// P3 Port Touch Function register

#else
extern unsigned char xdata KS00H;
extern unsigned char xdata KS00L;
extern unsigned char xdata KS27H;
extern unsigned char xdata KS27L;
extern unsigned char xdata RSD00;
extern unsigned char xdata RSD01;
extern unsigned char xdata RSD26;
extern unsigned char xdata RSD27;
extern unsigned char xdata TTMR;
extern unsigned char xdata TTDLL;
extern unsigned char xdata TTDLH;
extern unsigned char xdata TTDHL;
extern unsigned char xdata TTDHH;
extern unsigned char xdata KENR;
extern unsigned char xdata KSMR;
extern unsigned char xdata FPCAL;
extern unsigned char xdata VCAL;
extern unsigned char xdata CCAL;
extern unsigned char xdata TSCTL0;
extern unsigned char xdata TSCTL1;
extern unsigned char xdata P0FT;
extern unsigned char xdata P2FT;
extern unsigned char xdata P3FT;
#endif

// Power control
sfr			PCON		= 0x87;			// Power Control register

// BOD
sfr			BODR		= 0x86;			// BOD Control Register
sfr			LVDR		= 0x8F;			// LVD Control register

// Flash control
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FEARL		= 0xF2;			// Flash Address Low Register
sfr			FEARM		= 0xF3;			// Flash Address Middle Register
sfr			FEARH		= 0xF4;			// Flash Address High Register
sfr			FEDR		= 0xF5;			// Flash Data register

// Register
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		_DPTR		= 0x82;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr16		_DPTR1		= 0x84;

sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER
#endif	//_MC96FT242_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
