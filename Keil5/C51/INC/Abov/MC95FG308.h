//======================================================
//	95FG308 header file
//	Version 1.2
//			2015-10-01.Thu
//======================================================

#include	<intrins.h>

#ifndef		_MC95FG308_
#define		_MC95FG308_

//======================================================
// PORT Control Register
//======================================================
// PORT0
sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00 		= 0x80;
	sbit	P01	  		= 0x81;
	sbit	P02	  		= 0x82;
	sbit	P03 		= 0x83;
	sbit	P04	  		= 0x84;
	sbit	P05	  		= 0x85;
	sbit	P06	  		= 0x86;
	sbit	P07	  		= 0x87;
sfr			P0DA		= 0x80;			// P0 Data Register
	sbit	P0DA0		= 0x80;
	sbit	P0DA1		= 0x81;
	sbit	P0DA2		= 0x82;
	sbit	P0DA3		= 0x83;
	sbit	P0DA4		= 0x84;
	sbit	P0DA5		= 0x85;
	sbit	P0DA6		= 0x86;
	sbit	P0DA7		= 0x87;
sfr			P0IO		= 0x89;			// P0 Direction Register

#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2F00;	// P0 Pull-up Register
unsigned char xdata P0OD _at_ 0x2F0C;	// P0 Open Drain Register
unsigned char xdata P0DB _at_ 0x2F18;	// P0 DEBOUNCE Register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif

// PORT1
sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
sfr	P1DA				= 0x88;			// P1 Data Register
	sbit	P1DA0		= 0x88;
	sbit	P1DA1		= 0x89;
	sbit	P1DA2		= 0x8A;
	sbit	P1DA3		= 0x8B;
	sbit	P1DA4		= 0x8C;
	sbit	P1DA5		= 0x8D;
	sbit	P1DA6		= 0x8E;
sfr			P1IO		= 0x91;			// PORTCON	R/W 8'b0000_0000	P1 Direction Register

#ifdef MAIN
unsigned char xdata P1PU _at_ 0x2F01;	// PORTCON	R/W 8'b0000_0000	P1 Pull-up Register
unsigned char xdata P1OD _at_ 0x2F0D;	// PORTCON	R/W 8'b0000_0000	P1 Open Drain Register
unsigned char xdata P1DB _at_ 0x2F19;	// PORTCON	R/W 8'b0000_0000	P1 DEBOUNCE Register
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P1DB;
#endif

// PORT2
sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
sfr			P2DA		= 0x90;			// PORTCON	R/W 8'b0000_0000	P2 Data Register
	sbit	P2DA0		= 0x90;
	sbit	P2DA1		= 0x91;
	sbit	P2DA2		= 0x92;
	sbit	P2DA3		= 0x93;
	sbit	P2DA4		= 0x94;
	sbit	P2DA5		= 0x95;
	sbit	P2DA6		= 0x96;
sfr			P2IO		= 0x99;			// PORTCON	R/W 8'b0000_0000	P2 Direction Register

#ifdef MAIN
unsigned char xdata P2PU _at_ 0x2F02;	// PORTCON	R/W 8'b0000_0000	P2 Pull-up Register
unsigned char xdata P2OD _at_ 0x2F0E;	// PORTCON	R/W 8'b0000_0000	P2 Open Drain Register
unsigned char xdata P2DB _at_ 0x2F1A;	// PORTCON	R/W 8'b0000_0000	P2 DEBOUNCE Register
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
extern unsigned char xdata P2DB;
#endif

//PORT3
sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;
sfr			P3DA		= 0x98;			// PORTCON	R/W 8'b0000_0000	P3 Data Register
	sbit	P3DA0		= 0x98;
	sbit	P3DA1		= 0x99;
	sbit	P3DA2		= 0x9A;
	sbit	P3DA3		= 0x9B;
	sbit	P3DA4		= 0x9C;
	sbit	P3DA5		= 0x9D;
	sbit	P3DA6		= 0x9E;
	sbit	P3DA7		= 0x9F;
sfr			P3IO		= 0xA1;			// PORTCON	R/W 8'b0000_0000	P3 Direction Register

#ifdef MAIN
unsigned char xdata P3PU _at_ 0x2F03;	// PORTCON	R/W 8'b0000_0000	P3 Pull-up Register
unsigned char xdata P3OD _at_ 0x2F0F;	// PORTCON	R/W 8'b0000_0000	P3 Open Drain Register
unsigned char xdata P3DB _at_ 0x2F1B;	// PORTCON	R/W 8'b0000_0000	P3 DEBOUNCE Register
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
extern unsigned char xdata P3DB;
#endif

//======================================================
// USART
//======================================================
// USART0
sfr			UCTRL1		= 0xE2;			// USART	R/W 8'b0000_0000	USART Control Register 1
sfr			UCTRL2		= 0xE3;			// USART	R/W 8'b0000_0000	USART Control Register 2
sfr			UCTRL3		= 0xE4;			// USART	R/W 8'b0000_0000	USART Control Register 3
sfr			USTAT		= 0xE5;			// USART	R/W 8'b1000_0000	USART Status Register
sfr			UBAUD		= 0xE6;			// USART	R/W 8'b1111_1111	USART BaudRate Register
sfr			UDATA		= 0xE7;			// USART	R/W 8'b0000_0000	USART Data Register
// USART1
sfr			UCTRL11		= 0xFA;			// USART	R/W 8'b0000_0000	USART Control Register 1
sfr			UCTRL12		= 0xFB;			// USART	R/W 8'b0000_0000	USART Control Register 2
sfr			UCTRL13		= 0xFC;			// USART	R/W 8'b0000_0000	USART Control Register 3
sfr			USTAT1		= 0xFD;			// USART	R/W 8'b1000_0000	USART Status Register
sfr			UBAUD1		= 0xFE;			// USART	R/W 8'b1111_1111	USART BaudRate Register
sfr			UDATA1		= 0xFF;			// USART	R/W 8'b0000_0000	USART Data Register

//======================================================
// SYSCON
//======================================================
sfr			BODR		= 0x86;			// BOD		R/W  8'b0000_0000	BOD Control Register
sfr			PCON		= 0x87;			// PCON		W    8'b0000_0000	Stop and Sleep Mode Control Register
sfr			SCCR		= 0x8A;			// CLKGEN	R/W  8'b0000_0100	System Clock Control Register
sfr			BCCR		= 0x8B;			// BIT		R/W  8'b0000_0111	BIT Clock Control Register
sfr			BITR		= 0x8C;			// BIT		R    8'b0000_0000	Clock Control Register

//======================================================
// WDT
//======================================================
sfr			WDTR		= 0x8E;			// WDT		W    8'b1111_1111	Watch Dog Timer Register
sfr			WDTCR		= 0x8E;
sfr			WDTMR		= 0x8D;			// WDT		W    8'b000-_---0	Watch Dog Timer Mode Register

//======================================================
// WT
//======================================================
sfr			WTR			= 0x9E;			// WT		W    8'b1111_1111	Watch Timer Register
sfr			WTCR		= 0x9E;
sfr			WTMR		= 0x9D;			// WT		R/W  8'b0--0_0000	Watch Timer Mode Register

//======================================================
// BUZZER
//======================================================
sfr			BUZDR		= 0x8F;			// BUZZER	W    8'b1111_1111	Buzzer Data Register
sfr			BUZCR		= 0x9F;			// BUZZER	W    8'b0000_0000	Buzzer Control Register

//======================================================
// INTCON
//======================================================
sfr			EIENAB		= 0xA3;			// PORTCON	External Interrupt Enable Register
sfr			EIFLAG		= 0xA4;			// PORTCON	External Interrupt Flag Register
sfr			EIEDGE		= 0xA5;			// PORTCON	External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;			// PORTCON	External Interrupt Polarity Register
sfr			EIBEDGE		= 0xA7;			// External	Interrupt Both_edge Register
sfr			EIBOTH		= 0xA7;			// External	Interrupt Both_edge Register

sfr			IEN0		= 0xA8;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register Low
sfr			IEN1		= 0xA9;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register Low
sfr			IEN2		= 0xAA;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register High
sfr			IEN3		= 0xAB;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register High
sfr			IEN4		= 0xAC;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register High
sfr			IEN5		= 0xAD;			// INTCON	R/W  8'b0000_0000	Interrupt Enable Register High

sfr			IP0			= 0xB8;			// INTCON	Interrupt Priority Register low
sfr			IP1			= 0xF8;			// INTCON	Interrupt Priority Register high

sfr			PCI0		= 0xAE;			// PORTCON	R/W 8'b0000_0000	P0 Pin Change Interrupt 
sfr			P0PC		= 0xAE;			// PORTCON	R/W 8'b0000_0000	P0 Pin Change Interrupt 

//======================================================
// TIMER
//======================================================
sfr			TMISR		= 0xAF;			// TMISR	R/W  8'b--00_0000	Timer Interrupt Status Register 
// TIMER 0
sfr			T0CR		= 0xB2;			// TIMER0 Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// TIMER0 Timer 0 Register
sfr			T0DR		= 0xB3;			// TIMER0 Timer 0 Data Register
sfr			CDR0		= 0xB3;			// TIMER0 Timer 0 Capture Data Register
// TIMER 1
sfr			T1CR		= 0xB4;			// TIMER1 Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// TIMER1 Timer 1 Data Register
sfr			T1PPR		= 0xB5;			// TIMER1 Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// TIMER1 Timer 1 Register
sfr			T1ADR		= 0xB6;			// TIMER1 Timer 1 PWM A-ch Duty Register
sfr			CDR1		= 0xB6;			// TIMER1 Timer 1 Capture Data Register
sfr			T1PCR		= 0xB7;			// TIMER1 Timer 1 PWM Control Register
sfr			T1BDR		= 0xBA;			// TIMER1 Timer 1 PWM B-ch Duty Register
sfr			T1CDR		= 0xBB;			// TIMER1 Timer 1 PWM C-ch Duty Register
sfr			T1PHR		= 0xBC;			// TIMER1 Timer 1 PWM High Register
sfr			T1PCR2		= 0xBD;			// TIMER1 Timer 1 PWM Control Register 2
sfr			T1PCR3		= 0xBE;			// TIMER1 Timer 1 PWM Control Register 3
sfr			T1DLYA		= 0xBF;			// TIMER1 Timer 1 PWM Delay A-ch Register
sfr			T1DLYB		= 0xC2;			// TIMER1 Timer 1 PWM Delay B-ch Register
sfr			T1DLYC		= 0xC3;			// TIMER1 Timer 1 PWM Delay C-ch Register
sfr			T1ISR		= 0xC4;			// TIMER1 Timer 1 PWM Interrupt Status Register
sfr			T1IMSK		= 0xC5;			// TIMER1 Timer 1 PWM Interrupt Mask Register
sfr			PLLCR		= 0x85;			// TIMER1	R/W  8'b0100_0010	Timer 1 PLL Control Register
// TIMER 2
sfr			T2CR		= 0xC6;			// TIMER2 Timer 2 Mode Control Register 
sfr			T2			= 0xC7;			// TIMER2 Timer 2 Register
sfr			T2DR		= 0xC7;			// TIMER2 Timer 2 Data Register
sfr			CDR2		= 0xC7;			// TIMER2 Timer 2 Capture Data Register
// TIMER 3                        
sfr			T3CR		= 0xCA;			// TIMER3 Timer 3 Mode Control Register
sfr			T3DR		= 0xCB;			// TIMER3 Timer 3 Data Register
sfr			PWM3PR		= 0xCB;			// TIMER3 Timer 3 PWM Period Register
sfr			T3PPR		= 0xCB;			// TIMER3 Timer 3 PWM Period Register
sfr			T3			= 0xCC;			// TIMER3 Timer 3 Register
sfr			PWM3DR		= 0xCC;			// TIMER3 Timer 3 PWM Duty Register
sfr			T3PDR		= 0xCC;			// TIMER3 Timer 3 PWM Duty Register
sfr			CDR3		= 0xCC;			// TIMER3 Timer 3 Capture Data Register
sfr			PWM3HR		= 0xCD;			// TIMER3 Timer 3 PWM High Register
sfr			T3PWHR		= 0xCD;			// TIMER3 Timer 3 PWM High Register
// TIMER 4
sfr			T4CR		= 0xCE;			// TIMER4 Timer 4 Mode Control Register
sfr			T4L			= 0xCF;			// TIMER4 Timer 4 Low Register
sfr			T4H			= 0xD5;			// TIMER4 Timer 4 High Register
sfr			T4LDR		= 0xCF;			// TIMER4 Timer 4 Data Low Register
sfr			T4HDR		= 0xD5;			// TIMER4 Timer 4 Data High Register
sfr			LCDR4		= 0xCF;			// Low Capture4 Data Register
sfr			HCDR4		= 0xD5;			// High Capture4 Data Register

//======================================================
// SPI
//======================================================
sfr			SPICR		= 0xD2;			// SPI control register
sfr			SPIDR		= 0xD3;			// SPI data register
sfr			SPISR		= 0xD4;			// SPI status register

//======================================================
// I2C
//======================================================
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CCR		= 0xDA;			// I2C Mode Control Register           
sfr			I2CSR		= 0xDB;			// I2C Status Register         
sfr			I2CSCLLR	= 0xDC;			// I2C SCL Low Period Register 
sfr			I2CSCLHR	= 0xDD;			// I2C SCL High Period Register
sfr			I2CSDHR		= 0xDE;			// I2C SDA Hold Register
sfr			I2CSDAHR	= 0xDE;			// I2C SDA Hold Register
sfr			I2CDR		= 0xDF;			// I2C Data Register           
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register  
sfr			I2CAR		= 0xD7;			// I2C Slave Address Register  
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1
sfr			I2CAR1		= 0xD6;			// I2C Slave Address Register 1 

//======================================================
// ACMP
//======================================================
sfr			ACCSR		= 0xF9;			// ACMP		R/W  8'b0000_0000	Analog Comparator Control/Status Register

//======================================================
// ADC
//======================================================
sfr			ADCM		= 0x9A;			// 12 bit A/D Converter Control Register
sfr			ADCM2		= 0x9B;			// 
sfr			ADCRH		= 0x9B;			// 12 bit A/D Converter Result Register High
sfr			ADCRL		= 0x9C;			// 12 bit A/D Converter Result Register Low 

//======================================================
// PSR
//======================================================
#ifdef MAIN
unsigned char xdata PSR0 _at_ 0x2F50;	// PSR		R/W  8'b0000_0000	Port Select Register
unsigned char xdata PSR1 _at_ 0x2F51;	// PSR		R/W  8'b0000_0000	Port Select Register
#else
extern unsigned char xdata PSR0;
extern unsigned char xdata PSR1;
#endif

//======================================================
// Flash and EEPROM Memory REGISTER
//======================================================
sfr			FEMR		= 0xEA;			// Flash and EEPROM mode register          
sfr			FECR		= 0xEB;			// Flash and EEPROM control register       
sfr			FESR		= 0xEC;			// Flash and EEPROM status register        
sfr			FETCR		= 0xED;			// Flash and EEPROM time control register  
sfr			FEARL		= 0xF2;			// Flash and EEPROM address register low   
sfr			FEARM		= 0xF3;			// Flash and EEPROM address register middle
sfr			FEARH		= 0xF4;			// Flash and EEPROM address register high  
sfr			FEDR		= 0xF5;			// Flash and EEPROM data register   
sfr			FETR		= 0xF6;			// Flash and EEPROM test register          

//======================================================
// TEST MODE REGISTER
//======================================================
#ifdef MAIN
unsigned char xdata TEST_REGA _at_ 0x2F5F;	// TEST_MODE	W    8'b0000_0000	Function Test Reg. A
unsigned char xdata TEST_REGB _at_ 0x2F5E;	// TEST_MODE	W    8'b0000_0000	Function Test Reg. B
unsigned char xdata FUSE_CONF _at_ 0x2F5D;	// TEST_MODE	R/W  8'b0000_0000	FUSE Config setting.
unsigned char xdata FUSE_CAL0 _at_ 0x2F5C;	// TEST_MODE	R/W  8'b0000_0000	FUSE VDC_BOD calibration.
unsigned char xdata FUSE_CAL1 _at_ 0x2F5B;	// TEST_MODE	R/W  8'b0000_0000	FUSE INTOSC calibration.
unsigned char xdata FUSE_CAL2 _at_ 0x2F5A;	// TEST_MODE	R/W  8'b0000_0000	FUSE VDC calibration.
unsigned char xdata FUSE_PKGx _at_ 0x2F59;	// TEST_MODE	R/W  8'b0000_0000	FUSE pin PKG setting.
#else
extern unsigned char xdata TEST_REGA;
extern unsigned char xdata TEST_REGB;
extern unsigned char xdata FUSE_CONF;
extern unsigned char xdata FUSE_CAL0;
extern unsigned char xdata FUSE_CAL1;
extern unsigned char xdata FUSE_CAL2;
extern unsigned char xdata FUSE_PKGx;
#endif

//======================================================
// Basic REGISTER
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;

#endif	//_MC95FG308_ 

#define		cli()		do{IEN0 &= ~0x80;}while(0)
#define		sei()		do{IEN0 |=  0x80;}while(0)
#define		NOP			_nop_()
