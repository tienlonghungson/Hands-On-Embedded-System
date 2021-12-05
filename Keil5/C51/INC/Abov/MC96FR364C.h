//======================================================
//		file name: MC96FR364C.h
//		device   : MC96FR364C, MC96FR264C, MC96FR164C
//		version  : Ver1.0
//		date     : 2015-11-23.Mon
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FR364C_
#define _MC96FR364C_

sfr			P0			= 0x80;			// P0 Data Register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;

sfr			P0IO		= 0x98;			// P0 Direction Register
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2f00;	// P0 pullup
unsigned char xdata P0OD _at_ 0x2f08;	// P0 pullup control
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
#endif
sfr			P0PC		= 0xC1;			// P0 Pin Change Interrupt

sfr			P1			= 0x88;			// P1 Data Register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;

sfr			P1IO		= 0xA0;			// P1 Direction Register
#ifdef MAIN
unsigned char xdata P1PU _at_ 0x2f01;	// P1 pullup
unsigned char xdata P1OD _at_ 0x2f09;	// P1 open drain
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
#endif

sfr			P2			= 0x90;			// P2 Data Register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;

sfr			P2IO		= 0xB0;			// P2 Direction Register
#ifdef MAIN
unsigned char xdata P2PU _at_ 0x2f02;	// P2 pullup
unsigned char xdata P2OD _at_ 0x2f0A;	// P2 open drain
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
#endif

sfr			P3			= 0xC0;			// P3 Data Register
	sbit	P30			= 0xC0;
	sbit	P31			= 0xC1;
	sbit	P32			= 0xC2;
	sbit	P33			= 0xC3;
	sbit	P34			= 0xC4;
	sbit	P35			= 0xC5;
	sbit	P36			= 0xC6;
	sbit	P37			= 0xC7;

sfr			P3IO		= 0x9B;			// P3 Direction Register
#ifdef MAIN
unsigned char xdata P3PU _at_ 0x2f03;	// P3 pullup
unsigned char xdata P3OD _at_ 0x2f0B;	// P3 open drain
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
#endif

#ifdef MAIN
unsigned char xdata PMISC0 _at_ 0x2f11;	// Port Miscellaneous 0 Register
unsigned char xdata PMISC1 _at_ 0x2f12;	// Port Miscellaneous 1 Register
#else
extern unsigned char xdata PMISC0;
extern unsigned char xdata PMISC1;
#endif

// interrupt registers
sfr			IE			= 0xA8;			// Interrupt Enable Register
sfr			IE1			= 0xA9;			// Interrupt Enable Register
sfr			IE2			= 0xAA;			// Interrupt Enable Register
sfr			IE3			= 0xAB;			// Interrupt Enable Register 

sfr			IP			= 0xB8;			// Interrupt Priority Register 
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1

sfr			EIFLAG		= 0xAC;			// External Interrupt Flag Register
sfr			EIEDGE0		= 0xAD;			// External Interrupt Edge Register 0
sfr			EIEDGE1		= 0xAE;			// External Interrupt Edge Register 1
sfr			EIPOLA		= 0xAF;			// External Interrupt Polarity Register
sfr			EIENAB		= 0xB1;			// External Interrupt Enable Register

#ifdef MAIN
unsigned char xdata EIPS0 _at_ 0x2F18;	// External Interrupt Port Select Register 0
unsigned char xdata EIPS1 _at_ 0x2F19;	// External Interrupt Port Select Register 1
unsigned char xdata EIPS2 _at_ 0x2F1A;	// External Interrupt Port Select Register 2
unsigned char xdata EIPS3 _at_ 0x2F1B;	// External Interrupt Port Select Register 3
unsigned char xdata EIPS4 _at_ 0x2F1C;	// External Interrupt Port Select Register 4
unsigned char xdata EIPS5 _at_ 0x2F1D;	// External Interrupt Port Select Register 5
#else
extern unsigned char xdata EIPS0;
extern unsigned char xdata EIPS1;
extern unsigned char xdata EIPS2;
extern unsigned char xdata EIPS3;
extern unsigned char xdata EIPS4;
extern unsigned char xdata EIPS5;
#endif

// SYSCON
sfr			NCCR		= 0x89;			// Noise Clock Control Register
sfr			SCCR		= 0x8A;			// System Clock Control Register
sfr			MCCR		= 0xEF;			// Main Oscillator Clock Control Register

// Basic interval timer
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// Clock Control Register

// Watchdog timer
sfr			WDTR		= 0x8E;			// Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

// Timer
sfr			T0CR		= 0xB2;			// Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// Timer 0 register
sfr			T0DR		= 0xB3;			// Timer 0 Data register
sfr			CDR0		= 0xB3;			// Capture 0 Data register

sfr			T1CR		= 0xB4;			// Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// Timer 1 Data Register
sfr			PWM1PR		= 0xB5;			// Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// Timer 1 Register
sfr			PWM1DR		= 0xB6;			// Timer 1 PWM Duty Register
sfr			CDR1		= 0xB6;			// Capture 1 Data Register
sfr			PWM1HR		= 0xB7;			// Timer 1 PWM High Register

sfr			T2CR		= 0xC6;			// Timer 2 Mode Control Register
sfr			T2H			= 0xC7;			// Timer 2 Counter High
sfr			T2DRH		= 0xC7;			// Timer 2 Data Register High
sfr			CDR2H		= 0xC7;			// Timer 2 Capture Data Register High
sfr			T2L			= 0xCF;			// Timer 2 Counter Low
sfr			T2DRL		= 0xCF;			// Timer 2 Data Register Low
sfr			CDR2L		= 0xCF;			// Timer 2 Capture Data Register Low

sfr			T3CR2		= 0xC9;			// Timer 3 Mode Control Register 2
sfr			T3CR		= 0xCA;			// Timer 3 Mode Control Register
sfr			T3L			= 0xCB;			// Timer 3 Counter Low
sfr			PWM3DRL		= 0xCB;			// PWM 3 Duty Register Low
sfr			CDR3L		= 0xCB;			// Timer 3 Capture Data Register Low
sfr			T3H			= 0xCC;			// Timer 3 Counter High
sfr			PWM3DRH		= 0xCC;			// PWM 3 Duty Register High
sfr			CDR3H		= 0xCC;			// Timer 3 Capture Data Register High
sfr			T3DRL		= 0xCD;			// Timer 3 Data Register Low
sfr			PWM3PRL		= 0xCD;			// PWM 3 Period Register Low
sfr			T3DRH		= 0xCE;			// Timer 3 Data Register High
sfr			PWM3PRH		= 0xCE;			// PWM 3 Period Data Register High

// Watch timer
sfr			WTMR		= 0xD1;			// Watch Timer Mode Register
sfr			WTDR1		= 0xD4;			// Watch Timer Data Register 1
sfr			WTDR0		= 0xD5;			// Watch Timer Data Register 0
sfr			WTSR		= 0xD9;			// Watch Timer Status Register
sfr			WTDRH		= 0xDC;			// Watch Timer Data Register High
sfr			WTCR0H		= 0xF1;			// Watch Timer Capture Register0 High
sfr			WTCR0L		= 0xF2;			// Watch Timer Capture Register0 Low
sfr			WTCR1H		= 0xF3;			// Watch Timer Capture Register1 High
sfr			WTCR1L		= 0xF4;			// Watch Timer Capture Register1 Low
sfr			WTCR2H		= 0xF5;			// Watch Timer Capture Register2 High
sfr			WTCR2L		= 0xF6;			// Watch Timer Capture Register2 Low

// IR capture
sfr			IRCC0		= 0xDD;			// IR Capture Control Register 0 
sfr			IRCC1		= 0xDE;			// IR Capture Control Register 1
sfr			IRCC2		= 0xDF;			// IR Capture Control Register 2
sfr			IRCC3		= 0xDA;			// IR Capture Control Register 3
sfr			IRCC4		= 0xDB;			// IR Capture Control Register 4

// Carrier generator
sfr			RMR			= 0xE8;			// Remocon Mode Register
sfr			RDCH		= 0xBA;			// Remocon Data Counter High
sfr			CFRH		= 0xBB;			// Carrier Frequency Register High
sfr			CFRL		= 0xBC;			// Carrier Frequency Register Low
sfr			RDCL		= 0xBD;			// Remocon Data Counter Low
sfr			RODR		= 0xBE;			// Remocon Output Data Register
sfr			ROB			= 0xBF;			// Remocon Output Buffer
sfr			RDBH		= 0xC2;			// Remocon Data Buffer High
sfr			RDBL		= 0xC3;			// Remocon Data Buffer Low
sfr			RDRH		= 0xC4;			// Remocon Data Register High
sfr			RDRL		= 0xC5;			// Remocon Data Register Low
#ifdef MAIN
unsigned char xdata RMR2 _at_ 0x2f56;	// [R/W] Remocon Mode Reg. 2
#else
extern unsigned char xdata RMR2;
#endif

// Key scan
sfr			SMRR0		= 0xD2;			// Standby Mode Release Register 0
sfr			SMRR1		= 0xD3;			// Standby Mode Release Register 1
sfr			SRLC0		= 0xD6;			// Standby Release Level Control Register 0
sfr			SRLC1		= 0xD7;			// Standby Release Level Control Register 1
sfr			KITSR		= 0xF7;			// Key Interrupt Trigger Selection Register

// USART
sfr			UCTRL01		= 0xE2;			// USART0 Control 1 Register
sfr			UCTRL02		= 0xE3;			// USART0 Control 2 Register
sfr			UCTRL03		= 0xE4;			// USART0 Control 3 Register
sfr			USTAT0		= 0xE5;			// USART0 Status Register
sfr			UBAUD0		= 0xE6;			// USART0 Baud Rate Generation Register
sfr			UDATA0		= 0xE7;			// USART0 Data Register

// I2C
sfr			I2CMR		= 0x9C;			// I2C Mode Control Register
sfr			I2CSR		= 0x9D;			// I2C Status Register
sfr			I2CSCLLR	= 0x9E;			// SCL Low Period Register
sfr			I2CSCLHR	= 0x9F;			// SCL High Period Register
sfr			I2CSDAHR	= 0xA3;			// SDA Hold Time Register
sfr			I2CDR		= 0xA5;			// I2C Data Register
sfr			I2CSAR		= 0xA6;			// I2C Slave Address Register
sfr			I2CSAR1		= 0xA7;			// I2C Slave Address Register 1

// Power control
sfr			PCON		= 0x87;			// Stop and Sleep Mode Control Register

// BOD
sfr			BODR		= 0x86;			// BOD Control Register
sfr			BODSR		= 0x8F;			// BOD Status Register
sfr			CFGRR		= 0xF9;			// Configuration Reset register

// Flash control
sfr			FMR			= 0xE1;			// FLASH Mode Register
sfr			FARH		= 0xE9;			// FLASH Address Register High
sfr			FARM		= 0xEA;			// FLASH Address Register Middle
sfr			FARL		= 0xEB;			// FLASH Address Register Low
sfr			FCR			= 0xEC;			// FLASH Control Register
sfr			FSR			= 0xED;			// FLASH Status Register
sfr			FTCR		= 0xEE;			// FLASH Time Control Register

#ifdef MAIN
unsigned char xdata CSUMH _at_ 0x2F06;	// FLASH Read Checksum Register Low
unsigned char xdata CSUMM _at_ 0x2F07;	// FLASH Read Checksum Register Middle
unsigned char xdata CSUML _at_ 0x2F0F;	// FLASH Read Checksum Register Low
unsigned char xdata FTR	 _at_ 0x2F58;	// FLASH Test Register @XSFR
unsigned char xdata PageBuffer _at_ 0x8000;	// FLASH Page Buffer @XSFR (8000H~803FH)
#else
extern unsigned char xdata CSUMH;
extern unsigned char xdata CSUMM;
extern unsigned char xdata CSUML;
extern unsigned char xdata FTR;
extern unsigned char xdata PageBuffer;
#endif

// Register
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		_DPTR		= 0x82;

sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER
#endif	//_MC96FR364C_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
