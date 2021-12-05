//======================================================
//		file name: MC96FC864A.h
//		device   : MC96FC864A(80 pin)
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//		author   : Park, Sungje
//======================================================

#include	<intrins.h>

#ifndef _MC96FC864A_
#define _MC96FC864A_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

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
sfr			PCI0		= 0xAE;			// P0 Pin Change Interrupt

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			P1DA		= 0x88;			// P1 Data Register
	sbit	P1DA0		= 0x88;
	sbit	P1DA1		= 0x89;
	sbit	P1DA2		= 0x8A;
	sbit	P1DA3		= 0x8B;
	sbit	P1DA4		= 0x8C;
	sbit	P1DA5		= 0x8D;
	sbit	P1DA6		= 0x8E;
	sbit	P1DA7		= 0x8F;

sfr			P1IO		= 0x91;			// P1 Direction Register

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2DA		= 0x90;			// P2 Data Register
	sbit	P2DA0		= 0x90;
	sbit	P2DA1		= 0x91;
	sbit	P2DA2		= 0x92;
	sbit	P2DA3		= 0x93;
	sbit	P2DA4		= 0x94;
	sbit	P2DA5		= 0x95;
	sbit	P2DA6		= 0x96;
	sbit	P2DA7		= 0x97;

sfr			P2IO		= 0x99;			// P2 Direction Register

sfr			P3			= 0x98;			// P3 Data Register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;

sfr			P3DA		= 0x98;			// P3 Data Register
	sbit	P3DA0		= 0x98;
	sbit	P3DA1		= 0x99;
	sbit	P3DA2		= 0x9A;
	sbit	P3DA3		= 0x9B;
	sbit	P3DA4		= 0x9C;
	sbit	P3DA5		= 0x9D;
	sbit	P3DA6		= 0x9E;
	sbit	P3DA7		= 0x9F;

sfr			P3IO		= 0xA1;			// P3 Direction Register

sfr			P4			= 0xA0;			// P4 Data Register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;

sfr			P4DA		= 0xA0;			// P4 Data Register
	sbit	P4DA0		= 0xA0;
	sbit	P4DA1		= 0xA1;
	sbit	P4DA2		= 0xA2;
	sbit	P4DA3		= 0xA3;
	sbit	P4DA4		= 0xA4;
	sbit	P4DA5		= 0xA5;
	sbit	P4DA6		= 0xA6;
	sbit	P4DA7		= 0xA7;

sfr			P4IO		= 0xB1;			// P4 Direction Register

sfr			P5			= 0xB0;			// P5 Data Register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;

sfr			P5DA		= 0xB0;			// P5 Data Register
	sbit	P5DA0		= 0xB0;
	sbit	P5DA1		= 0xB1;
	sbit	P5DA2		= 0xB2;
	sbit	P5DA3		= 0xB3;
	sbit	P5DA4		= 0xB4;
	sbit	P5DA5		= 0xB5;
	sbit	P5DA6		= 0xB6;
	sbit	P5DA7		= 0xB7;

sfr			P5IO		= 0xB9;			// P5 Direction Register

sfr			P6			= 0xC0;			// P6 Data Register
	sbit	P60			= 0xC0;
	sbit	P61			= 0xC1;
	sbit	P62			= 0xC2;
	sbit	P63			= 0xC3;
	sbit	P64			= 0xC4;
	sbit	P65			= 0xC5;
	sbit	P66			= 0xC6;
	sbit	P67			= 0xC7;

sfr			P6DA		= 0xC0;			// P6 Data Register
	sbit	P6DA0		= 0xC0;
	sbit	P6DA1		= 0xC1;
	sbit	P6DA2		= 0xC2;
	sbit	P6DA3		= 0xC3;
	sbit	P6DA4		= 0xC4;
	sbit	P6DA5		= 0xC5;
	sbit	P6DA6		= 0xC6;
	sbit	P6DA7		= 0xC7;

sfr			P6IO		= 0xC1;			// P6 Direction Register

sfr			P7			= 0xC8;			// P7 Data Register
	sbit	P70			= 0xC8;
	sbit	P71			= 0xC9;
	sbit	P72			= 0xCA;
	sbit	P73			= 0xCB;
	sbit	P74			= 0xCC;
	sbit	P75			= 0xCD;
	sbit	P76			= 0xCE;
	sbit	P77			= 0xCF;

sfr			P7DA		= 0xC8;			// P7 Data Register
	sbit	P7DA0		= 0xC8;
	sbit	P7DA1		= 0xC9;
	sbit	P7DA2		= 0xCA;
	sbit	P7DA3		= 0xCB;
	sbit	P7DA4		= 0xCC;
	sbit	P7DA5		= 0xCD;
	sbit	P7DA6		= 0xCE;
	sbit	P7DA7		= 0xCF;

sfr			P7IO		= 0xC9;			// P7 Direction Register
sfr			PCI7		= 0xAF;			// P7 Pin Change Interrupt

sfr			P8			= 0xD8;			// P8 Data Register
	sbit	P80			= 0xD8;
	sbit	P81			= 0xD9;

sfr			P8DA		= 0xD8;			// P8 Data Register
	sbit	P8DA0		= 0xD8;
	sbit	P8DA1		= 0xD9;

sfr			P8IO		= 0xD1;			// P8 Direction Register

// SYSCON
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			PLLCR		= 0xD9;			// PLL Control Register 
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Clock Control Register
sfr			BODR		= 0x86;			// BOD Control Register
sfr			PCON		= 0x87;			// Stop and Sleep Mode Control Register

// WDT 
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// 
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

// WT
sfr			WTR			= 0x9E;			// Watch Timer Register
sfr			WTCR		= 0x9E;			//
sfr			WTMR		= 0x9D;			// Watch Timer Mode Register

// INTCON
sfr			IE5			= 0xAD;			// Interrupt Enable Register 
sfr			IE4			= 0xAC;			// Interrupt Enable Register 
sfr			IE3			= 0xAB;			// Interrupt Enable Register 
sfr			IE2			= 0xAA;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register
sfr			IE0			= 0xA8;			// Interrupt Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register
sfr			EIBOTH		= 0xA7;			// External Interrupt BOTH Edge Register
sfr			EIEDGE		= 0xA5;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xA6;			// External Interrupt Polarity Register
sfr			EIENAB		= 0xA3;			// External Interrupt Enable Register
sfr			IP0			= 0xB8;			// Interrupt Priority Register 
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1

// TIMER 0
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// Timer 0 Register
sfr			T0DR		= 0xB3;			// Timer 0 Data Register
sfr			CDR0		= 0xB3;			// Timer 0 Capture Data Register

// TIMER 1
sfr			T1CR		= 0xB4;			// Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// Timer 1 Data Register
sfr			T1PPR		= 0xB5;			// Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// Timer 1 Register
sfr			T1PDR		= 0xB6;			// Timer 1 PWM Duty Register
sfr			CDR1		= 0xB6;			// Timer 1 Capture Data Register
sfr			T1PWHR		= 0xB7;			// Timer 1 PWM Control Register

// TIMER 2
sfr			T2CR		= 0xBA;			// Timer 2 Mode Control Register
sfr			T2CR1		= 0xBB;			// Timer 2 Mode Control Register 1
sfr			T2L			= 0xBC;			// Timer 2 Register Low
sfr			PWM2LDR		= 0xBC;			// Timer 2 PWM Duty Low Register
sfr			CDR2L		= 0xBC;			// Timer 2 Capture Data Low Register
sfr			T2H			= 0xBD;			// Timer 2 Register High
sfr			PWM2HDR		= 0xBD;			// Timer 2 PWM Duty High Register
sfr			CDR2H		= 0xBD;			// Timer 2 Capture Data High Register
sfr			T2DRL		= 0xBE;			// Timer 2 Data Low Register
sfr			PWM2LPR		= 0xBE;			// Timer 2 PWM Period Low Register
sfr			T2DRH		= 0xBF;			// Timer 2 Data High Register
sfr			PWM2HPR		= 0xBF;			// Timer 2 PWM Period Low Register

// TIMER 3
sfr			T3CR		= 0xC2;			// Timer 3 Mode Control Register
sfr			T3CR1		= 0xC3;			// Timer 3 Mode Control Register 1
sfr			T3L			= 0xC4;			// Timer 3 Register Low
sfr			PWM3LDR		= 0xC4;			// Timer 3 PWM Duty Low Register
sfr			CDR3L		= 0xC4;			// Timer 3 Capture Data Low Register
sfr			T3H			= 0xC5;			// Timer 3 Register High
sfr			PWM3HDR		= 0xC5;			// Timer 3 PWM Duty High Register
sfr			CDR3H		= 0xC5;			// Timer 3 Capture Data High Register
sfr			T3DRL		= 0xC6;			// Timer 3 Data Low Register
sfr			PWM3LPR		= 0xC6;			// Timer 3 PWM Period Low Register
sfr			T3DRH		= 0xC7;			// Timer 3 Data High Register
sfr			PWM3HPR		= 0xC7;			// Timer 3 PWM Period Low Register

// TIMER 4
sfr			T4CR		= 0xCA;			// Timer 4 Mode Control Register
sfr			T4CR1		= 0xCB;			// Timer 4 Mode Control Register 1
sfr			T4L			= 0xCC;			// Timer 4 Register Low
sfr			PWM4LDR		= 0xCC;			// Timer 4 PWM Duty Low Register
sfr			CDR4L		= 0xCC;			// Timer 4 Capture Data Low Register
sfr			T4H			= 0xCD;			// Timer 4 Register High
sfr			PWM4HDR		= 0xCD;			// Timer 4 PWM Duty High Register
sfr			CDR4H		= 0xCD;			// Timer 4 Capture Data High Register
sfr			T4DRL		= 0xCE;			// Timer 4 Data Low Register
sfr			PWM4LPR		= 0xCE;			// Timer 4 PWM Period Low Register
sfr			T4DRH		= 0xCF;			// Timer 4 Data High Register
sfr			PWM4HPR		= 0xCF;			// Timer 4 PWM Period Low Register

sfr			TMISR		= 0xD5;			// Timer Interrupt Status Register

// BUZZER
sfr			BUZCR		= 0x9F;			// Buzzer Driver ctrl Register
sfr			BUZDR		= 0x8F;			// Buzzer Driver data Register

// USART 0
sfr			UCTRL01		= 0xE2;			// USART0 Control Register 1
sfr			UCTRL02		= 0xE3;			// USART0 Control Register 2
sfr			UCTRL03		= 0xE4;			// USART0 Control Register 3
sfr			USTAT0		= 0xE5;			// USART0 Status Register
sfr			UBAUD0		= 0xE6;			// USART0 BaudRate Register
sfr			UDATA0		= 0xE7;			// USART0 Data Register

// USART 1
sfr			UCTRL11		= 0xFA;			// USART1 Control Register 1
sfr			UCTRL12		= 0xFB;			// USART1 Control Register 2
sfr			UCTRL13		= 0xFC;			// USART1 Control Register 3
sfr			USTAT1		= 0xFD;			// USART1 Status Register
sfr			UBAUD1		= 0xFE;			// USART1 BaudRate Register
sfr			UDATA1		= 0xFF;			// USART1 Data Register

// SPI
sfr			SPICR0		= 0xD2;			// SPI control register 0
sfr			SPIDR0		= 0xD3;			// SPI data register 0
sfr			SPISR0		= 0xD4;			// SPI status register 0

sfr			SPICR1		= 0x92;			// SPI control register 1
sfr			SPIDR1		= 0x93;			// SPI data register 1
sfr			SPISR1		= 0xF1;			// SPI status register 1

// I2C
sfr			I2CMR		= 0xDA;			// I2C Mode Control Register
sfr			I2CCR		= 0xDA;			// I2C Mode Control Register           
sfr			I2CSR		= 0xDB;			// I2C Status Register         
sfr			I2CSCLLR	= 0xDC;			// I2C SCL Low Period Register 
sfr			I2CSCLHR	= 0xDD;			// I2C SCL High Period Register
sfr			I2CSDHR		= 0xDE;			// I2C SDA Hold Register       
sfr			I2CDR		= 0xDF;			// I2C Data Register           
sfr			I2CSAR		= 0xD7;			// I2C Slave Address Register  
sfr			I2CAR		= 0xD7;			// I2C Slave Address Register  
sfr			I2CSAR1		= 0xD6;			// I2C Slave Address Register 1
sfr			I2CAR1		= 0xD6;			// I2C Slave Address Register 1 

// ADC 
sfr			ADCM		= 0x9A;			// 12 bit A/D Converter Control Register
sfr			ADCM2		= 0x9B;			// 
sfr			ADCRH		= 0x9B;			// 12 bit A/D Converter Result Register High
sfr			ADCRL		= 0x9C;			// 12 bit A/D Converter Result Register Low 

// Flash and EEPROM Memory REGISTER
sfr			FEMR		= 0xEA;       
sfr			FESR		= 0xEB;       
sfr			FETCR		= 0xEC;        
sfr			FEARH		= 0xF2;   
sfr			FEARM		= 0xF3;
sfr			FEARL		= 0xF4;  
sfr			FEDR		= 0xF5;  
sfr			FECR		= 0xF6;          

sfr			XADDR		= 0xEE;
sfr			XDATAR		= 0xEF;
sfr			XCONR		= 0xF7;

sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;

sfr16		_DPTR		= 0x82;
sfr16		_DPTR1		= 0x84;

sfr			EO			= 0xA2;			// Extended Operation Register

/* XSFR */
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2f00;
unsigned char xdata P1PU _at_ 0x2f01;
unsigned char xdata P2PU _at_ 0x2f02;
unsigned char xdata P3PU _at_ 0x2f03;
unsigned char xdata P4PU _at_ 0x2f04;
unsigned char xdata P5PU _at_ 0x2f05;
unsigned char xdata P6PU _at_ 0x2f06;
unsigned char xdata P7PU _at_ 0x2f07;
unsigned char xdata P8PU _at_ 0x2f08;

unsigned char xdata P0OD _at_ 0x2f0c;
unsigned char xdata P1OD _at_ 0x2f0d;
unsigned char xdata P2OD _at_ 0x2f0e;
unsigned char xdata P3OD _at_ 0x2f0f;
unsigned char xdata P4OD _at_ 0x2f10;
unsigned char xdata P5OD _at_ 0x2f11;
unsigned char xdata P6OD _at_ 0x2f12;
unsigned char xdata P7OD _at_ 0x2f13;
unsigned char xdata P8OD _at_ 0x2f14;

unsigned char xdata P0DB _at_ 0x2f18;
unsigned char xdata P1DB _at_ 0x2f19;
unsigned char xdata P2DB _at_ 0x2f1a;
unsigned char xdata P3DB _at_ 0x2f1b;
unsigned char xdata P4DB _at_ 0x2f1c;
unsigned char xdata P5DB _at_ 0x2f1d;
unsigned char xdata P6DB _at_ 0x2f1e;
unsigned char xdata P7DB _at_ 0x2f1f;
unsigned char xdata P8DB _at_ 0x2f20;

unsigned char xdata UCTRL21 _at_ 0x2f28;
unsigned char xdata UCTRL22 _at_ 0x2f29;
unsigned char xdata UCTRL23 _at_ 0x2f2a;
unsigned char xdata USTAT2 _at_ 0x2f2b;
unsigned char xdata UBAUD2 _at_ 0x2f2c;
unsigned char xdata UDATA2 _at_ 0x2f2d;

unsigned char xdata UCTRL31 _at_ 0x2f30;
unsigned char xdata UCTRL32 _at_ 0x2f31;
unsigned char xdata UCTRL33 _at_ 0x2f32;
unsigned char xdata USTAT3 _at_ 0x2f33;
unsigned char xdata UBAUD3 _at_ 0x2f34;
unsigned char xdata UDATA3 _at_ 0x2f35;

unsigned char xdata T5CR _at_ 0x2f38;
unsigned char xdata T5CR1 _at_ 0x2f39;
unsigned char xdata T5L	 _at_ 0x2f3a;
unsigned char xdata PWM5LDR _at_ 0x2f3a;
unsigned char xdata CDR5L _at_ 0x2f3a;
unsigned char xdata T5H	 _at_ 0x2f3b;
unsigned char xdata PWM5HDR _at_ 0x2f3b;
unsigned char xdata CDR5H _at_ 0x2f3b;
unsigned char xdata T5DRL _at_ 0x2f3c;
unsigned char xdata PWM5LPR _at_ 0x2f3c;
unsigned char xdata T5DRH _at_ 0x2f3d;
unsigned char xdata PWM5HPR _at_ 0x2f3d;

unsigned char xdata PSR0 _at_ 0x2f50;
unsigned char xdata PSR1 _at_ 0x2f51;

// TEST MODE REGISTER
unsigned char xdata TEST_A _at_ 0x2f5f;
unsigned char xdata TEST_B _at_ 0x2f5e;
unsigned char xdata FUSE_CONF _at_ 0x2f5d;
unsigned char xdata FUSE_CAL0 _at_ 0x2f5c;
unsigned char xdata FUSE_CAL1 _at_ 0x2f5b;
unsigned char xdata FUSE_CAL2 _at_ 0x2f5a;
unsigned char xdata FUSE_PKG _at_ 0x2f59;

#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P1PU;
extern unsigned char xdata P2PU;
extern unsigned char xdata P3PU;
extern unsigned char xdata P4PU;
extern unsigned char xdata P5PU;
extern unsigned char xdata P6PU;
extern unsigned char xdata P7PU;
extern unsigned char xdata P8PU;

extern unsigned char xdata P0OD;
extern unsigned char xdata P1OD;
extern unsigned char xdata P2OD;
extern unsigned char xdata P3OD;
extern unsigned char xdata P4OD;
extern unsigned char xdata P5OD;
extern unsigned char xdata P6OD;
extern unsigned char xdata P7OD;
extern unsigned char xdata P8OD;

extern unsigned char xdata P0DB;
extern unsigned char xdata P1DB;
extern unsigned char xdata P2DB;
extern unsigned char xdata P3DB;
extern unsigned char xdata P4DB;
extern unsigned char xdata P5DB;
extern unsigned char xdata P6DB;
extern unsigned char xdata P7DB;
extern unsigned char xdata P8DB;

extern unsigned char xdata UCTRL21;
extern unsigned char xdata UCTRL22;
extern unsigned char xdata UCTRL23;
extern unsigned char xdata USTAT2;
extern unsigned char xdata UBAUD2;
extern unsigned char xdata UDATA2;

extern unsigned char xdata UCTRL31;
extern unsigned char xdata UCTRL32;
extern unsigned char xdata UCTRL33;
extern unsigned char xdata USTAT3;
extern unsigned char xdata UBAUD3;
extern unsigned char xdata UDATA3;

extern unsigned char xdata T5CR;
extern unsigned char xdata T5CR1;
extern unsigned char xdata T5L;
extern unsigned char xdata PWM5LDR;
extern unsigned char xdata CDR5L;
extern unsigned char xdata T5H;
extern unsigned char xdata PWM5HDR;
extern unsigned char xdata CDR5H;
extern unsigned char xdata T5DRL;
extern unsigned char xdata PWM5LPR;
extern unsigned char xdata T5DRH;
extern unsigned char xdata PWM5HPR;

extern unsigned char xdata PSR0;
extern unsigned char xdata PSR1;

extern unsigned char xdata TEST_A;
extern unsigned char xdata TEST_B;
extern unsigned char xdata FUSE_CONF;
extern unsigned char xdata FUSE_CAL0;
extern unsigned char xdata FUSE_CAL1;
extern unsigned char xdata FUSE_CAL2;
extern unsigned char xdata FUSE_PKG;
#endif

#endif	//_MC96FC864A_ 

#define		cli()		do{IE0 &= ~0x80;}while(0)
#define		sei()		do{IE0 |=  0x80;}while(0)
#define		NOP			_nop_()
