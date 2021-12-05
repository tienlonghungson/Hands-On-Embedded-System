//======================================================
//		file name: MC96FR4128.h
//		device   : MC96FR4128
//		version  : Ver1.2
//		date     : 2015-10-01.Thu
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96FR4128_H_
#define _MC96FR4128_H_

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
sfr		SP			= 0x81;			// [R/W] Stack Pointer
sfr		DPL			= 0x82;			// [R/W] Data Pointer Reg. Low
sfr		DPH			= 0x83;			// [R/W] Data Pointer Reg. High
sfr			DPL1		= 0x84;			// [R/W] Data Pointer Reg. Low 1
sfr			DPH1		= 0x85;			// [R/W] Data Pointer Reg. High 1
sfr			BODR		= 0x86;			// [R/W] BOD Control Reg. 
sfr			PCON		= 0x87;			// [R/W] Power Contrl Reg.

//------------------------------------------------------ 0x88
sfr			P1			= 0x88;			// [R/W] Port 1 Data Reg.
sbit		P17			= P1^7;
sbit		P16			= P1^6;
sbit		P15			= P1^5;
sbit		P14			= P1^4;
sbit		P13			= P1^3;
sbit		P12			= P1^2;
sbit		P11			= P1^1;
sbit		P10			= P1^0;

sfr			SCCR		= 0X8A;			// [R/W] System Clock Control Reg.
sfr			BCCR		= 0X8B;			// [R/W] BIT Clock Control Reg.
sfr			BITR		= 0x8C;			// [R/W] BIT Clock Control Reg.
sfr			WDTMR		= 0x8D;			// [R/W] Watch Dog Timer Mode Register
sfr			WDTR		= 0x8E;			// [W] Watch Dog Timer Register
sfr			WDTCR		= 0x8E;			// [R] Watch Dog Timer Counter Register
sfr			BODSR		= 0X8F;			// [R/W]  BOD Status Register

//------------------------------------------------------ 0x90
sfr			P2			= 0x90;			// [R/W] Port 2 Data Reg.
sbit		P27			= P2^7;
sbit		P26			= P2^6;
sbit		P25			= P2^5;
sbit		P24			= P2^4;
sbit		P23			= P2^3;
sbit		P22			= P2^2;
sbit		P21			= P2^1;
sbit		P20			= P2^0;

sfr			PSR0		= 0x92;			// [R/W] Port Selection Register 0

sfr			MEX1		= 0x94;			// [R/W] Memory Extension Register 1
sfr			MEX2		= 0x95;			// [R/W] Memory Extension Register 2
sfr			MEX3		= 0x96;			// [R/W] Memory Extension Register 3
sfr			MEXSP		= 0x97;			// [R/W] Memory Extension Stack Pointer

//------------------------------------------------------ 0x98
sfr			P0IO		= 0x98;			// [R/W] Port 0 Direction Register
sbit		P0IO7		= P0IO^7;
sbit		P0IO6		= P0IO^6;
sbit		P0IO5		= P0IO^5;
sbit		P0IO4		= P0IO^4;
sbit		P0IO3		= P0IO^3;
sbit		P0IO2		= P0IO^2;
sbit		P0IO1		= P0IO^1;
sbit		P0IO0		= P0IO^0;

sfr			P3IO		= 0x9B;			// [R/W] Port 3 Direction Register
// 0x9E; // Reserved

//------------------------------------------------------ 0xA0
sfr			P1IO		= 0xA0;			// Port 1 Direction Register
sbit		P1IO7		= P1IO^7;
sbit		P1IO6		= P1IO^6;
sbit		P1IO5		= P1IO^5;
sbit		P1IO4		= P1IO^4;
sbit		P1IO3		= P1IO^3;
sbit		P1IO2		= P1IO^2;
sbit		P1IO1		= P1IO^1;
sbit		P1IO0		= P1IO^0;
sfr			EO			= 0xA2;			// [R/W] Extended Operation Register
sfr			P4IO		= 0xA4;			// [R/W] Port 4 Direction Register

//------------------------------------------------------ 0xA8
sfr			IE			= 0xA8;			// [R/W] Interrupt Enable Register 0
sbit		EA			= IE^7;
sfr			IE1			= 0xA9;			// [R/W] Interrupt Enable Register 1
sfr			IE2			= 0xAA;			// [R/W] Interrupt Enable Register 2
sfr			IE3			= 0xAB;			// [R/W] Interrupt Enable Register 3
sfr			EIFLAG		= 0xAC;			// [R/W] External Interrupt Flag Register
sfr			EIEDGE		= 0xAD;			// [R/W] External Interrupt Edge Register
sfr			EIPOLA		= 0xAE;			// [W] External Interrupt Polarity Register
sfr			EIENAB		= 0xAF;			// [R/W] External Interrupt Enable Register

//------------------------------------------------------ 0xB0
sfr			P2IO		= 0xB0;			// [R/W] Port 2 Direction Register
sbit		P2IO7		= P2IO^7;
sbit		P2IO6		= P2IO^6;
sbit		P2IO5		= P2IO^5;
sbit		P2IO4		= P2IO^4;
sbit		P2IO3		= P2IO^3;
sbit		P2IO2		= P2IO^2;
sbit		P2IO1		= P2IO^1;
sbit		P2IO0		= P2IO^0;
sfr			T0CR		= 0xB2;			// [R/W] Timer 0 Mode Control Register
sfr			T0			= 0xB3;			// [R] Timer 0 Register
sfr			T0DR		= 0xB3;			// [W] Timer 0 Data Register
sfr			CDR0		= 0xB3;			// [R] Timer 0 Capture Data Register
sfr			T1CR		= 0xB4;			// [R/W] Timer 1 Mode Control Register
sfr			T1DR		= 0xB5;			// [W] Timer 1 Data Register
sfr			PWM1PR		= 0xB5;			// [W] Timer 1 PWM Period Register
sfr			T1			= 0xB6;			// [R] Timer 1 Register
sfr			PWM1DR		= 0xB6;			// [R/W] Timer 1 PWM A-ch Duty Register
sfr			CDR1		= 0xB6;			// [R] Timer 1 Capture Data Register
sfr			PWM1HR		= 0xB7;			// [W] Timer 1 PWM Control Register

//------------------------------------------------------ 0xB8
sfr			IP			= 0xB8;			// [R/W] Interrupt Priority Control Register 0
sfr			RDCH		= 0xBA;			// 
sfr			CFHS		= 0xBB;			// [R/W] Carrier Frequency High Selection Register
sfr			CFLS		= 0xBC;			// [R/W] Carrier Frequency Low Selection Register
sfr			RDC			= 0xBD;			// [R/W] Remocon Data Counter
sfr			RODR		= 0xBE;			// [R/W] Remocon Output Data Register
sfr			ROB			= 0xBF;			// [R/W] Remocon Output Buffer

//------------------------------------------------------ 0xC0
sfr			P3			= 0xC0;			// [R/W] Port 3 Data Reg.
sfr			P0PC		= 0xC1;			// [R/W] Port 0 Pin Change Interrupt
sfr			RDHB		= 0xC2;			// [R/W] Remocon Data High Register
sfr			RDBH		= 0xC2;			// [R/W] Remocon Data High Register
sfr			RDLB		= 0xC3;			// [R/W] Remocon Data Low Register
sfr			RDBL		= 0xC3;			// [R/W] Remocon Data Low Register
sfr			RDHR		= 0xC4;			// [R/W] Remocon Data High Register
sfr			RDRH		= 0xC4;			// [R/W] Remocon Data High Register
sfr			RDLR		= 0xC5;			// [R/W] Remocon Data Low Register
sfr			RDRL		= 0xC5;			// [R/W] Remocon Data Low Register
sfr			T2CR		= 0xC6;			// [R/W] Timer 2 Mode Control Register 
sfr			T2H			= 0xC7;			// [R] Timer 2 High Register
sfr			T2HDR		= 0xC7;			// [W] Timer 2 High Data Register
sfr			CDR2H		= 0xC7;			// [R] Timer 2 Capture Data High Register

//------------------------------------------------------ 0xC8
sfr			P4			= 0xC8;			// [R/W] Port 4 Data Reg.
sfr			T3CR2		= 0xC9;			// [R/W] Timer 3 Control Register 2
sfr			T3CR		= 0xCA;			// [R/W] Timer 3 Control Register
sfr			T3L			= 0xCB;			// [R/W] Timer 3 Low Register
sfr			PWM3LDR		= 0xCB;			// [W] Timer 3 PWM Duty Low Register
sfr			CDR3L		= 0xCB;			// [R] Timer 3 Capture Data Low Register
sfr			T3H			= 0xCC;			// [R/W] Timer 3 High Register
sfr			PWM3HDR		= 0xCC;			// [R/W] Timer 3 PWM Duty High Register
sfr			CDR3H		= 0xCC;			// [R] Timer 3 Capture Data High Register
sfr			T3LDR		= 0xCD;			// [W] Timer 3 Data Low Register
sfr			PWM3LPR		= 0xCD;			// [W] Timer 3 PWM Period Low Register
sfr			T3HDR		= 0xCE;			// [W] Timer 3 Data High Register
sfr			PWM3HPR		= 0xCE;			// [R/W] Timer 3 PWM Period High Register
sfr			T2L			= 0xCF;			// [R] Timer 2 Low Register
sfr			T2LDR		= 0xCF;			// [W] Timer 2 Low Data Register
sfr			CDR2L		= 0xCF;			// [R] Timer 2 Capture Data Low Register

//------------------------------------------------------ 0xD0
sfr			PSW			= 0xD0;			// [R/W] Program Status Word Register
sfr			WTMR		= 0xD1;			// 
sfr			SMRR0		= 0xD2;			// [R/W] Standby Mode Release Register0
sfr			SMRR1		= 0xD3;			// [R/W] Standby Mode Release Register1
sfr			WTDR1		= 0xD4;			// 
sfr			WTDR0		= 0xD5;			// 
sfr			SRLC0		= 0xD6;			// [R/W] Standby Release Level Control Register0
sfr			SRLC1		= 0xD7;			// [R/W] Standby Release Level Control Register1

//------------------------------------------------------ 0xD8
sfr			P5			= 0xD8;			// [R/W] Port 5 Data Reg.
sfr			WTSR		= 0xD9;			// [R] Watch Timer Status Register
sfr			P5IO		= 0xDB;			// [R/W] Port 5 Direction Register
sfr			WTHDR		= 0xDC;			// [W] Watch Timer High Data Register
sfr			IRCC0		= 0xDD;			// IR Capture Control Register 0 
sfr			IRCC1		= 0xDE;			// IR Capture Control Register 1 
sfr			IRCC2		= 0xDF;			// IR Capture Control Register 2 

//------------------------------------------------------ 0xE0
sfr			ACC			= 0xE0;			// [R/W] Accumulator Register
sfr			FMR			= 0xE1;			// 
sfr			UCTRL01		= 0xE2;			// [R/W] USART Control Register 1
sfr			UCTRL02		= 0xE3;			// [R/W] USART Control Register 2
sfr			UCTRL03		= 0xE4;			// [R/W] USART Control Register 3
sfr			USTAT0		= 0xE5;			// [R/W] USART Status Register
sfr			UBAUD0		= 0xE6;			// [R/W] USART BaudRate Register
sfr			UDATA0		= 0xE7;			// [R/W] USART Data Register

//------------------------------------------------------ 0xE8
sfr			RMR			= 0xE8;			// [R/W] Remocon Mode Register
sfr			FEARH		= 0xE9;			// [W] Flash and EEPROM Address High Register
sfr			FEARM		= 0xEA;			// [W] Flash and EEPROM Address Middle Register
sfr			FEARL		= 0xEB;			// [W] Flash and EEPROM Address Low Register
sfr			FECR		= 0xEC;			//
sfr			FESR		= 0xED;			//
sfr			FETCR		= 0xEE;			//
sfr			FSECR		= 0xEF;			//

//------------------------------------------------------ 0xF0
sfr			B			= 0xF0;			// [R/W] B Register
sfr			WTCR0H		= 0xF1;			//
sfr			WTCR0L		= 0xF2;			//
sfr			WTCR1H		= 0xF3;			//
sfr			WTCR1L		= 0xF4;			//
sfr			WTCR2H		= 0xF5;			//
sfr			WTCR2L		= 0xF6;			//
sfr			KITSR		= 0xF7;			// [R/W] Key Interrupt Trigger Select Register      

//------------------------------------------------------ 0xF8
sfr			IP1			= 0xF8;			// [R/W] Interrupt Priority Control Register 1
sfr			CFGRR		= 0xF9;			//
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
unsigned char xdata P2PU _at_ 0x2f02;	// [R/W] Port 2 Pull-up Resistor Option Reg.
unsigned char xdata P3PU _at_ 0x2f03;	// [R/W] Port 3 Pull-up Resistor Option Reg.
unsigned char xdata P4PU _at_ 0x2f04;	// [R/W] Port 4 Pull-up Resistor Option Reg.
unsigned char xdata P5PU _at_ 0x2f05;	// [R/W] Port 5 Pull-up Resistor Option Reg.
unsigned char xdata P1OD _at_ 0x2f09;	// [R/W] Port 1 Open Drain Register
unsigned char xdata P2OD _at_ 0x2f0a;	// [R/W] Port 2 Open Drain Register
unsigned char xdata P3OD _at_ 0x2f0b;	// [R/W] Port 3 Open Drain Register
unsigned char xdata P4OD _at_ 0x2f0c;	// [R/W] Port 4 Open Drain Register
unsigned char xdata P5OD _at_ 0x2f0d;	// [R/W] Port 5 Open Drain Register
unsigned char xdata P0BPC _at_ 0x2f50;	// [R/W] Port 0 BOD Pull-up Resistor Option Reg.
unsigned char xdata P1BPC _at_ 0x2f51;	// [R/W] Port 1 BOD Pull-up Resistor Option Reg.
unsigned char xdata P2BPC _at_ 0x2f52;	// [R/W] Port 2 BOD Pull-up Resistor Option Reg.
unsigned char xdata P3BPC _at_ 0x2f53;	// [R/W] Port 3 BOD Pull-up Resistor Option Reg.
unsigned char xdata FTR _at_ 0x2f58;	// 
unsigned char xdata FUSE_CAL2 _at_ 0x2f5a;	// [R] VDC Pseudo-Calibration Data
unsigned char xdata FUSE_CONF _at_ 0x2f5d;	// [R] Pseudo-Configure Data
unsigned char xdata TEST_B _at_ 0x2f5e;	// [R/W] Function Test Reg. B    
unsigned char xdata TEST_A _at_ 0x2f5f;	// [R/W] Function Test Reg. A    

#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P1PU;
extern unsigned char xdata P2PU;
extern unsigned char xdata P3PU;
extern unsigned char xdata P4PU;
extern unsigned char xdata P5PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P2OD;
extern unsigned char xdata P3OD;
extern unsigned char xdata P4OD;
extern unsigned char xdata P5OD;
extern unsigned char xdata P0BPC;
extern unsigned char xdata P1BPC;
extern unsigned char xdata P2BPC;
extern unsigned char xdata P3BPC;
extern unsigned char xdata FTR;
extern unsigned char xdata FUSE_CAL2;
extern unsigned char xdata FUSE_CONF;
extern unsigned char xdata TEST_B;
extern unsigned char xdata TEST_A;
#endif

//SCCR
#define		DIV1			6
#define		DIV0			5
#define		CBYS			4

//IE0
#define		INT5E_PCI		5
#define		INT4E_EXTINT3	4
#define		INT3E_EXTINT2	3
#define		INT2E_EXTINT1	2
#define		INT1E_EXTINT0	1

//IE2
#define		INT16E_Timer3	4
#define		INT15E_Timer2	3
#define		INT14E_Timer1	2
#define		INT13E_Timer0	1

//IE3
#define		INT23E_EEPROM	5
#define		INT22E_BIT		4
#define		INT21E_WDT		3
#define		INT19E_Keyscan	1
#define		INT18E_Remocon	0

//T0CR
#define		T0EN			7
#define		T0_PE			6
#define		CAP0			5
#define		T0CK2			4
#define		T0CK1			3
#define		T0CK0			2
#define		T0CN			1
#define		T0ST			0

//T1CR
#define		POL				7
#define		_16BIT			6
#define		PWM1E			5
#define		CAP1			4
#define		T1CK1			3
#define		T1CK0			2
#define		T1CN			1
#define		T1ST			0

#endif		//_MC96FR4128_H_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
