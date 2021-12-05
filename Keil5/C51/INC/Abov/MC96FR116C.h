//======================================================
//		file name: MC96FR116C.h
//		device   : MC96FR116C
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FR116C_H_
#define _MC96FR116C_H_

//------------------------------------------------------ 0x80
sfr			P0			= 0x80;			// [R/W] Port 0 Data Reg.
	sbit	P07			= P0^7;
	sbit	P06			= P0^6;
	sbit	P05			= P0^5;
	sbit	P04			= P0^4;
	sbit	P03			= P0^3;
	sbit	P02			= P0^2;
	sbit	P01			= P0^1;
	sbit	P00			= P0^0;

sfr			SP			= 0x81;			// [R/W] Stack Pointer
sfr			DPL			= 0x82;			// [R/W] Data Pointer Reg. Low
sfr			DPH			= 0x83;			// [R/W] Data Pointer Reg. High
sfr			BODR		= 0x86;			// [R/W] BOD Control Reg. 
sfr			PCON		= 0x87;			// [R/W] Power Contrl Reg.

//------------------------------------------------------ 0x88
sfr			P1			= 0x88;			// [R/W] Port 1 Data Reg.
	sbit	P17			= P1^7;
	sbit	P16			= P1^6;
	sbit	P15			= P1^5;
	sbit	P14			= P1^4;
	sbit	P13			= P1^3;
	sbit	P12			= P1^2;
	sbit	P11			= P1^1;
	sbit	P10			= P1^0;

sfr			SCCR		= 0X8A;			// [R/W] System Clock Control Reg.
sfr			BCCR		= 0X8B;			// [R/W] BIT Clock Control Reg.
sfr			BITR		= 0x8C;			// [R/W] BIT Clock Control Reg.
sfr			WDTMR		= 0x8D;			// [R/W] Watch Dog Timer Mode Register
sfr			WDTR		= 0x8E;			// [W] Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// [R] Watch Dog Timer Counter Register
sfr			BODSR		= 0X8F;			// [R/W]  BOD Status Register

//------------------------------------------------------ 0x90
//sfr		P2			= 0x90;			// [R/W] Port 2 Data Reg.
//	sbit	P27			= P2^7;
//	sbit	P26			= P2^6;
//	sbit	P25			= P2^5;
//	sbit	P24			= P2^4;
//	sbit	P23			= P2^3;
//	sbit	P22			= P2^2;
//	sbit	P21			= P2^1;
//	sbit	P20			= P2^0;

//sfr		PSR0		= 0x92;			// [R/W] Port Selection Register 0

//sfr		MEX1		= 0x94;			// [R/W] Memory Extension Register 1
//sfr		MEX2		= 0x95;			// [R/W] Memory Extension Register 2
//sfr		MEX3		= 0x96;			// [R/W] Memory Extension Register 3
//sfr		MEXSP		= 0x97;			// [R/W] Memory Extension Stack Pointer

//------------------------------------------------------ 0x98
sfr			P0IO		= 0x98;			// [R/W] Port 0 Direction Register
	sbit	P0IO7		= P0IO^7;
	sbit	P0IO6		= P0IO^6;
	sbit	P0IO5		= P0IO^5;
	sbit	P0IO4		= P0IO^4;
	sbit	P0IO3		= P0IO^3;
	sbit	P0IO2		= P0IO^2;
	sbit	P0IO1		= P0IO^1;
	sbit	P0IO0		= P0IO^0;

sfr			P3IO		= 0x9B;			// [R/W] Port 3 Direction Register
sfr			I2CMR		= 0x9C;			// [R/W] 
sfr			I2CSR		= 0x9D;			// [R/W] 
sfr			I2CSCLLR	= 0x9E;			// [R/W] 
sfr			I2CSCLHR	= 0x9F;			// [R/W] 

//------------------------------------------------------ 0xA0
sfr			P1IO		= 0xA0;			// Port 1 Direction Register
	sbit	P1IO7		= P1IO^7;
	sbit	P1IO6		= P1IO^6;
	sbit	P1IO5		= P1IO^5;
	sbit	P1IO4		= P1IO^4;
	sbit	P1IO3		= P1IO^3;
	sbit	P1IO2		= P1IO^2;
	sbit	P1IO1		= P1IO^1;
	sbit	P1IO0		= P1IO^0;

sfr			EO			= 0xA2;			// [R/W] Extended Operation Register
sfr			I2CSDHR		= 0xA3;			// [R/W] 
sfr			I2CDR		= 0xA5;			// [R/W] 
sfr			I2CSAR		= 0xA6;			// [R/W] 
sfr			I2CSAR1		= 0xA7;			// [R/W] 

//------------------------------------------------------ 0xA8
sfr			IE			= 0xA8;			// [R/W] Interrupt Enable Register 0
	sbit	EA			= IE^7;

sfr			IE1			= 0xA9;			// [R/W] Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// [R/W] Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// [R/W] Interrupt Enable Register 3
sfr			EIFLAG		= 0xAC;			// [R/W] External Interrupt Flag Register
sfr			EIEDGE0		= 0xAD;			// [R/W] External Interrupt Edge Register
sfr			EIEDGE1		= 0xAE;			// [R/W] External Interrupt Edge Register
sfr			EIPOLA		= 0xAF;			// [R/W] External Interrupt polarity Register

//------------------------------------------------------ 0xB0
//sfr		P2IO		= 0xB0;			// [R/W] Port 2 Direction Register
//	sbit	P2IO7		= P2IO^7;
//	sbit	P2IO6		= P2IO^6;
//	sbit	P2IO5		= P2IO^5;
//	sbit	P2IO4		= P2IO^4;
//	sbit	P2IO3		= P2IO^3;
//	sbit	P2IO2		= P2IO^2;
//	sbit	P2IO1		= P2IO^1;
//	sbit	P2IO0		= P2IO^0;

sfr			EIENAB		= 0xB1;			// [R/W] External Interrupt Enable Register
sfr			T0CR		= 0xB2;			// [R/W] Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// [R] Timer 0 Register
sfr			CDR0		= 0xB3;			// [R] Timer 0 Capture Data Register
sfr			T0DR		= 0xB3;			// [W] Timer 0 Data Register
sfr			T1CR		= 0xB4;			// [R/W] Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// [W] Timer 1 Data Register
sfr			PWM1PR		= 0xB5;			// [W] Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// [R] Timer 1 Register
sfr			CDR1		= 0xB6;			// [R] Timer 1 Capture Data Register
sfr			PWM1DR		= 0xB6;			// [R/W] Timer 1 PWM A-ch Duty Register
sfr			PWM1HR		= 0xB7;			// [W] Timer 1 PWM Control Register

//------------------------------------------------------ 0xB8
sfr			IP			= 0xB8;			// [R/W] Interrupt Priority Control Register 0
sfr			RDCH		= 0xBA;			// 
sfr			CFRH		= 0xBB;			// [R/W] Carrier Frequency High Selection Register
sfr			CFRL		= 0xBC;			// [R/W] Carrier Frequency Low Selection Register
sfr			RDCL		= 0xBD;			// [R/W] Remocon Data Counter
sfr			RODR		= 0xBE;			// [R/W] Remocon Output Data Register
sfr			ROB			= 0xBF;			// [R/W] Remocon Output Buffer

//------------------------------------------------------ 0xC0
//sfr		P3			= 0xC0;			// [R/W] Port 3 Data Reg.
sfr			P0PC		= 0xC1;			// [R/W] Port 0 Pin Change Interrupt
sfr			RDBH		= 0xC2;			// [R/W] Remocon Data High Register
sfr			RDBL		= 0xC3;			// [R/W] Remocon Data Low Register
sfr			RDRH		= 0xC4;			// [R/W] Remocon Data High Register
sfr			RDRL		= 0xC5;			// [R/W] Remocon Data Low Register
sfr			T2CR		= 0xC6;			// [R/W] Timer 2 Mode Control Register 
sfr			T2H			= 0xC7;			// [R] Timer 2 High Register
sfr			T2DRH		= 0xC7;			// [W] Timer 2 High Data Register
sfr			CDR2H		= 0xC7;			// [R] Timer 2 Capture Data High Register

//------------------------------------------------------ 0xC8
//sfr		P4			= 0xC8;			// [R/W] Port 4 Data Reg.
sfr			T3CR2		= 0xC9;			// [R/W] Timer 3 Control Register 2
sfr			T3CR		= 0xCA;			// [R/W] Timer 3 Control Register
sfr			T3L			= 0xCB;			// [R/W] Timer 3 Low Register
sfr			CDR3L		= 0xCB;			// [R] Timer 3 Capture Data Low Register
sfr			PWM3DRL		= 0xCB;			// [W] Timer 3 PWM Duty Low Register
sfr			T3H			= 0xCC;			// [R/W] Timer 3 High Register
sfr			CDR3H		= 0xCC;			// [R] Timer 3 Capture Data High Register
sfr			PWM3DRH		= 0xCC;			// [R/W] Timer 3 PWM Duty High Register
sfr			T3DRL		= 0xCD;			// [W] Timer 3 Data Low Register
sfr			PWM3PRL		= 0xCD;			// [W] Timer 3 PWM Period Low Register
sfr			T3DRH		= 0xCE;			// [W] Timer 3 Data High Register
sfr			PWM3PRH		= 0xCE;			// [R/W] Timer 3 PWM Period High Register
sfr			T2L			= 0xCF;			// [R] Timer 2 Low Register
sfr			T2DRL		= 0xCF;			// [W] Timer 2 Low Data Register
sfr			CDR2L		= 0xCF;			// [R] Timer 2 Capture Data Low Register

//------------------------------------------------------ 0xD0
sfr			PSW			= 0xD0;			// [R/W] Program Status Word Register
sfr			WTMR		= 0xD1;			// 
sfr			SMRR0		= 0xD2;			// [R/W] Standby Mode Release Register0
sfr			SMRR1		= 0xD3;			// [R/W] Standby Mode Release Register1
sfr			WTR1		= 0xD4;			// 
sfr			WTR0		= 0xD5;			// 
sfr			SRLC0		= 0xD6;			// [R/W] Standby Release Level Control Register0
sfr			SRLC1		= 0xD7;			// [R/W] Standby Release Level Control Register1

//------------------------------------------------------ 0xD8
//sfr		P5			= 0xD8;			// [R/W] Port 5 Data Reg.
sfr			WTSR		= 0xD9;			// [R] Watch Timer Status Register
//sfr		P5IO		= 0xDB;			// [R/W] Port 5 Direction Register
sfr			WTDRH		= 0xDC;			// [W] Watch Timer High Data Register
sfr			IRCC0		= 0xDD;			//IR Capture Control Register 0 
sfr			IRCC1		= 0xDE;			//IR Capture Control Register 1 
sfr			IRCC2		= 0xDF;			//IR Capture Control Register 2 

//------------------------------------------------------ 0xE0
//sfr		ACC			= 0xE0;			// [R/W] Accumulator Register
sfr			FMR			= 0xE1;			// 
sfr			UCTRL01		= 0xE2;			// [R/W] USART Control Register 1
sfr			UCTRL02		= 0xE3;			// [R/W] USART Control Register 2
sfr			UCTRL03		= 0xE4;			// [R/W] USART Control Register 3
sfr			USTAT0		= 0xE5;			// [R/W] USART Status Register
sfr			UBAUD0		= 0xE6;			// [R/W] USART BaudRate Register
sfr			UDATA0		= 0xE7;			// [R/W] USART Data Register

//------------------------------------------------------ 0xE8
sfr			RMR			= 0xE8;			//new // [R/W] Remocon Mode Register
sfr			FEARH		= 0xE9;			// [W] Flash and EEPROM Address High Register
sfr			FARH		= 0xE9;			// [W] Flash and EEPROM Address High Register
sfr			FEARM		= 0xEA;			// [W] Flash and EEPROM Address Middle Register
sfr			FARM		= 0xEA;			// [W] Flash and EEPROM Address Middle Register
sfr			FEARL		= 0xEB;			// [W] Flash and EEPROM Address Low Register
sfr			FARL		= 0xEB;			// [W] Flash and EEPROM Address Low Register
sfr			FECR		= 0xEC;			//
sfr			FCR			= 0xEC;			//
sfr			FESR		= 0xED;			//
sfr			FSR			= 0xED;			//
sfr			FETCR		= 0xEE;			//
sfr			FTCR		= 0xEE;			//
sfr			MCCR		= 0xEF;			//

//------------------------------------------------------ 0xF0
//sfr		B			= 0xF0;			// [R/W] B Register
sfr			WTCR0H		= 0xF1;			//
sfr			WTCR0L		= 0xF2;			//
sfr			WTCR1H		= 0xF3;			//
sfr			WTCR1L		= 0xF4;			//
sfr			WTCR2H		= 0xF5;			//
sfr			WTCR2L		= 0xF6;			//
sfr			KITSR		= 0xF7;			// [R/W] Key Interrupt Trigger Select Register      

//------------------------------------------------------ 0xF8
sfr			IP1			= 0xF8;			// [R/W] Interrupt Priority Control Register 1
sfr			CFGCR		= 0xF9;			// 
sfr			UCTRL11		= 0xFA;			// [R/W] USART Control Register 1
sfr			UCTRL12		= 0xFB;			// [R/W] USART Control Register 2
sfr			UCTRL13		= 0xFC;			// [R/W] USART Control Register 3
sfr			USTAT1		= 0xFD;			// [R/W] USART Status Register
sfr			UBAUD1		= 0xFE;			// [R/W] USART BaudRate Register
sfr			UDATA1		= 0xFF;			// [R/W] USART Data Register

//------------------------------------------------------ 
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x2f00;	// [R/W] Port 0 Pull-up Resistor Option Reg.
unsigned char xdata P1PU _at_ 0x2f01;	// [R/W] Port 1 Pull-up Resistor Option Reg.

unsigned char xdata CSUML _at_ 0x2f06;	// [R] FLASH Read Check Sum Register Low
unsigned char xdata CSUMM _at_ 0x2f07;	// [R] FLASH Read Check Sum Register Middle
unsigned char xdata P0OD _at_ 0x2f08;	// [R/W] Port 0 Open Drain Register
unsigned char xdata P1OD _at_ 0x2f09;	// [R/W] Port 1 Open Drain Register
unsigned char xdata CSUMH _at_ 0x2f0f;	// [R] FLASH Read Check Sum Register High

unsigned char xdata PMISC0 _at_ 0x2f11;	// [R/W] Port Miscellaneous 0 Register TR
unsigned char xdata PMISC1 _at_ 0x2f12;	// [R/W] Port Miscellaneous 1 Register TR

unsigned char xdata EIPS0 _at_ 0x2f18;	// [R/W] Port 5 Open Drain Register
unsigned char xdata EIPS1 _at_ 0x2f19;	// [R/W] Port 5 Open Drain Register
unsigned char xdata EIPS2 _at_ 0x2f1A;	// [R/W] Port 5 Open Drain Register
unsigned char xdata EIPS3 _at_ 0x2f1B;	// [R/W] Port 5 Open Drain Register
unsigned char xdata EIPS4 _at_ 0x2f1C;	// [R/W] Port 5 Open Drain Register
unsigned char xdata EIPS5 _at_ 0x2f1D;	// [R/W] Port 5 Open Drain Register

unsigned char xdata P0BPC _at_ 0x2f50;	// [R/W] Port 0 BOD Pull-up Resistor Option Reg.
unsigned char xdata P1BPC _at_ 0x2f51;	// [R/W] Port 1 BOD Pull-up Resistor Option Reg.
unsigned char xdata RMR2 _at_ 0x2f56;	// [R/W] Remocon Mode Reg. 2

unsigned char xdata FSLBA1 _at_ 0x2f61;	// [R/W] FLASH Secure Lock Base Address 1 Register
unsigned char xdata FSLBA0 _at_ 0x2f62;	// [R/W] FLASH Secure Lock Base Address 0 Register
unsigned char xdata FSLTA1 _at_ 0x2f64;	// [R/W] FLASH Secure Lock Top Address 1 Register
unsigned char xdata FSLTA0 _at_ 0x2f65;	// [R/W] FLASH Secure Lock Top Address 0 Register

unsigned char xdata FSUBA1 _at_ 0x2f67;	// [R/W] FLASH Secure Unlock Base Address 1 Register
unsigned char xdata FSUBA0 _at_ 0x2f68;	// [R/W] FLASH Secure Unlock Base Address 0 Register
unsigned char xdata FSUTA1 _at_ 0x2f6A;	// [R/W] FLASH Secure Unlock Top Address 1 Register
unsigned char xdata FSUTA0 _at_ 0x2f6B;	// [R/W] FLASH Secure Unlock Top Address 0 Register
unsigned char xdata FSCTRL _at_ 0x2f6C;	// [R/W] FLASH Secure Control Register

unsigned char xdata PBUF_00 _at_ 0x8000;	// [R/W] FLASH page buffer start address

#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P1PU;

extern unsigned char xdata CSUML;
extern unsigned char xdata CSUMM;
extern unsigned char xdata P0OD;
extern unsigned char xdata P1OD;
extern unsigned char xdata CSUMH;

extern unsigned char xdata PMISC0;
extern unsigned char xdata PMISC1;

extern unsigned char xdata EIPS0;
extern unsigned char xdata EIPS1;
extern unsigned char xdata EIPS2;
extern unsigned char xdata EIPS3;
extern unsigned char xdata EIPS4;
extern unsigned char xdata EIPS5;

extern unsigned char xdata P0BPC;
extern unsigned char xdata P1BPC;
extern unsigned char xdata RMR2;

extern unsigned char xdata FSLBA1;
extern unsigned char xdata FSLBA0;
extern unsigned char xdata FSLTA1;
extern unsigned char xdata FSLTA0;

extern unsigned char xdata FSUBA1;
extern unsigned char xdata FSUBA0;
extern unsigned char xdata FSUTA1;
extern unsigned char xdata FSUTA0;
extern unsigned char xdata FSCTRL;

extern unsigned char xdata PBUF_00;
#endif

#endif		//_MC96FR116C_H_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
