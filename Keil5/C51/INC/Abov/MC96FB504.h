//======================================================
//		file name: MC95FB504.h
//		device   : MC95FB504
//		version  : Ver1.0  
//		date     : 2012-09-20
//		compiler : Keil-C
//		author   : Ma, Nakwon
//======================================================

#include	<intrins.h>

#ifndef		_MC96FB504_
#define		_MC96FB504_

sfr			P0			= 0x80;			// PORTCON P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x98;			// PORTCON P0 Direction Register
	sbit	P0IO0		= 0x98;
	sbit	P0IO1		= 0x99;
	sbit	P0IO2		= 0x9A;
	sbit	P0IO3		= 0x9B;
	sbit	P0IO4		= 0x9C;
	sbit	P0IO5		= 0x9D;
	sbit	P0IO6		= 0x9E;
	sbit	P0IO7		= 0x9F;

sfr			P0PU		= 0x89;			// PORTCON P0 Pull-up Register
sfr			P0OD		= 0xA1;			// PORTCON P0 Open Drain Register

sfr			P0DB		= 0xC0;			// PORTCON P0 DEBOUNCE Register
	sbit	P0DB0		= 0xC0;
	sbit	P0DB1		= 0xC1;
	sbit	P0DB2		= 0xC2;
	sbit	P0DB3		= 0xC3;
	sbit	P0DB4		= 0xC4;
	sbit	P0DB5		= 0xC5;
	sbit	P0DB6		= 0xC6;
	sbit	P0DB7		= 0xC7;

sfr			P1			= 0x88;			// PORTCON P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			P1IO		= 0xA0;			// PORTCON P1 Direction Register
	sbit	P1IO0		= 0xA0;
	sbit	P1IO1		= 0xA1;
	sbit	P1IO2		= 0xA2;
	sbit	P1IO3		= 0xA3;
	sbit	P1IO4		= 0xA4;
	sbit	P1IO5		= 0xA5;
	sbit	P1IO6		= 0xA6;
	sbit	P1IO7		= 0xA7;

sfr			P1PU		= 0x91;			// PORTCON P1 Pull-up Register
sfr			P1OD		= 0xB1;			// PORTCON P1 Open Drain Register

sfr			P1DB		= 0xC8;			// PORTCON P1 DEBOUNCE Register
	sbit	P1DB0		= 0xC8;
	sbit	P1DB1		= 0xC9;
	sbit	P1DB2		= 0xCA;
	sbit	P1DB3		= 0xCB;
	sbit	P1DB4		= 0xCC;
	sbit	P1DB5		= 0xCD;
	sbit	P1DB6		= 0xCE;
	sbit	P1DB7		= 0xCF;

sfr			P2			= 0x90;			// PORTCON P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0xB0;			// PORTCON P2 Direction Register
	sbit	P2IO0		= 0xB0;
	sbit	P2IO1		= 0xB1;
	sbit	P2IO2		= 0xB2;
	sbit	P2IO3		= 0xB3;
	sbit	P2IO4		= 0xB4;
	sbit	P2IO5		= 0xB5;
	sbit	P2IO6		= 0xB6;
	sbit	P2IO7		= 0xB7;

sfr			P2PU		= 0x99;			// PORTCON P2 Pull-up Register
sfr			P2OD		= 0xB9;			// PORTCON P2 Open Drain Register

sfr			P2DB		= 0xD8;			// PORTCON P2 DEBOUNCE Register
	sbit	P2DB0		= 0xD8;
	sbit	P2DB1		= 0xD9;
	sbit	P2DB2		= 0xDA;
	sbit	P2DB3		= 0xDB;
	sbit	P2DB4		= 0xDC;
	sbit	P2DB5		= 0xDD;
	sbit	P2DB6		= 0xDE;
	sbit	P2DB7		= 0xDF;

// SYSCON
sfr			PCON		= 0x87;			// PCON Stop and Sleep Mode Control Register
sfr			SCCR		= 0x8A;			// CLKGEN System Clock Control Register
sfr			BCCR		= 0x8B;			// BIT BIT Clock Control Register
sfr			BITR		= 0x8C;			// BIT Clock Control Register

// WDT 
sfr			WDTR		= 0x8E;			// WDT Watch Dog Timer Register(Write only)
sfr			WDTCR		= 0x8E;			// WDT Watch Dog Timer Counter Register(Read only) 
sfr			WDTMR		= 0x8D;			// WDT Watch Dog Timer Mode Register

// CCCV
sfr			CC_CV1		= 0x9E;			//CC/CV1 Control Register	
sfr			CC_CV2		= 0x9F;			//CC/CV2 Control Register	

// INTCON
sfr			IE0			= 0xA8;			// INTCON Interrupt Enable Register0
sfr			IE1			= 0xA9;			// INTCON Interrupt Enable Register1
sfr			IE2			= 0xAA;			// INTCON Interrupt Enable Register2
sfr			IE3			= 0xAB;			// INTCON Interrupt Enable Register3
sfr			EIFLAG		= 0xAC;			// External Interrupt Flag Register
sfr			EIEDGE		= 0xAD;			// External Interrupt Edge Register
sfr			EIPOLA		= 0xAE;			// External Interrupt Polarity Register
sfr			EIENAB		= 0xAF;			// PORTCON External Interrupt Enable Register
sfr			IP0			= 0xB8;			// INTCON Interrupt Priority Register0
sfr			IP1			= 0xF8;			// INTCON Interrupt Priority Register1

// TIMER 0
sfr			T0CR		= 0xB2;			// TIMER0 Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// TIMER0 Timer 0 Register(Read only)
sfr			T0DR		= 0xB3;			// TIMER0 Timer 0 Data Register(Write only)

// TIMER 1
sfr			T1CR		= 0xB4;			// TIMER1 Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// TIMER1 Timer 1 Data Register
sfr			PWM1PR		= 0xB5;			// TIMER1 Timer 1 PWM1 Period Register
sfr			T1			= 0xB6;			// TIMER1 Timer 1 Register
sfr			PWM1DR		= 0xB6;			// TIMER1 Timer 1 PWM1 Duty Register
sfr			PWM1HR		= 0xB7;			// TIMER1 Timer 1 PWM1 High Register

// ADC 
sfr			ADCM		= 0x9A;			// R/W ADC 12 bit A/D Converter Control Register
sfr			ADCRH		= 0x9B;			// R   ADC 12 bit A/D Converter Result Register High, R:STBY==0
sfr			ADCRL		= 0x9C;			// R   ADC 12 bit A/D Converter Result Register Low 
sfr			ADCM2		= 0x9B;			// R/W ADC 12 bit A/D Converter Control2 Register, R:STBY==1
sfr			PSR0		= 0x92;			// Port Selection Register 0
sfr			PSR1		= 0x93;			// Port Selection Register 1 

// Flash and EEPROM Memory REGISTER
//sfr     FEMR    =       0xEA; // Flash and EEPROM mode register          
//sfr     FECR    =       0xEB; // Flash and EEPROM control register       
//sfr     FESR    =       0xEC; // Flash and EEPROM status register        
//sfr     FETCR   =       0xED; // Flash and EEPROM time control register  
//sfr     FEARL   =       0xF2; // Flash and EEPROM address register low   
//sfr     FEARM   =       0xF3; // Flash and EEPROM address register middle
//sfr     FEARH   =       0xF4; // Flash and EEPROM address register high  
//sfr     FEDR    =       0xF5; // Flash and EEPROM data register   
//sfr     FETR    =       0xF6; // Flash and EEPROM test register          

// TEST MODE REGISTER
//sfr     TEST_REGA =     0xFF; // TEST_MODE Function Test Reg. A    
//sfr     TEST_REGB =     0xFE; // TEST_MODE Function Test Reg. B    
//sfr     FUSE_CONF =     0xFD; // FUSE Config setting.    
//sfr     FUSE_CAL0 =     0xFC; // TEST_MODE FUSE INTOSC TEMP calibration.
//sfr     FUSE_CAL1 =     0xFB; // TEST_MODE FUSE INTOSC calibration.
//sfr     FUSE_CAL2 =     0xFA; // TEST_MODE FUSE BGR calibration.
//sfr     FUSE_CONF2 =    0xF9; // VDC calibration and PKG information.
//sfr     FUSE_CAL3 =     0xE7; // TEST_MODE FUSE CCCV BGR calibration.
//sfr     FUSE_PKG16=     0xDF; // TEST_MODE FUSE 16 pin PKG setting.

#endif 

#define		cli()		do{IE0 &= ~0x80;}while(0)
#define		sei()		do{IE0 |=  0x80;}while(0)
#define		NOP			_nop_()
