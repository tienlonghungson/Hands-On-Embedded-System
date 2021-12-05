//======================================================
//	file name: A94B114.h
//	device   : A94B114 (20/16 pin)
//	version  : Ver1.000.00
//	date     : 2017-04-27
//	compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef		_A94B114_
#define		_A94B114_

//------------------------------------------------------
// default
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			SP			= 0x81;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;

sfr			PSW			= 0xD0;
	sbit	CY			= 0xD7;
	sbit	AC			= 0xD6;
	sbit	F0			= 0xD5;
	sbit	RS1			= 0xD4;
	sbit	RS0			= 0xD3;
	sbit	OV			= 0xD2;
	sbit	F1			= 0xD1;
	sbit	P			= 0xD0;
sfr			EO			= 0xA2;

//------------------------------------------------------
// GPIO port
sfr			P0			= 0x80;		// R/W 00H P0 Data Register
sfr			P0IO		= 0x9B;		// R/W 00H P0 Direction Register
sfr			P0PU		= 0x9C;		// R/W 00H P0 Pull-up Resistor Selection Register
sfr			P0OD		= 0x9D;		// R/W 00H P0 Open-drain Selection Register
sfr			P0DB		= 0x9E;		// R/W 00H P0 De-bounce Enable Register
sfr			P0FSRL		= 0xB3;		// R/W 00H P0 Function Selection Low Register
sfr			P0FSRH		= 0xB4;		// R/W 00H P0 Function Selection High Register

sfr			P1			= 0x88;		// R/W 00H P1 Data Register
sfr			P1IO		= 0xA3;		// R/W 00H P1 Direction Register
sfr			P1PU		= 0xA4;		// R/W 00H P1 Pull-up Resistor Selection Register
sfr			P1OD		= 0xA5;		// R/W 00H P1 Open-drain Selection Register
sfr			P1DB		= 0xA6;		// R/W 00H P1 De-bounce Enable Register
sfr			P1FSRL		= 0xB5;		// R/W 00H P1 Function Selection Low Register
sfr			P1FSRH		= 0xB6;		// R/W 00H P1 Function Selection High Register

sfr			P2			= 0x90;		// R/W 00H P2 Data Register
sfr			P2IO		= 0xAB;		// R/W 00H P2 Direction Register
sfr			P2PU		= 0xAC;		// R/W 00H P2 Pull-up Resistor Selection Register
sfr			P2OD		= 0xAD;		// R/W 00H P2 Open-drain Selection Register
sfr			P2DB		= 0xAE;		// R/W 00H P2 De-bounce Enable Register
sfr			P2FSR		= 0xB7;		// R/W 00H P2 Function Selection Register
sfr			DBTSR		= 0x84;		// R/W 00H De-bounce Time Selection Register

//------------------------------------------------------
// interrupt
sfr			IE			= 0xB8;		// R/W 00H Interrupt Enable Register
sfr			IE1			= 0xC0;		// R/W 00H Interrupt Enable Register 1
sfr			IE2			= 0xC8;		// R/W 00H Interrupt Enable Register 2
sfr			IP			= 0xE8;		// R/W 00H Interrupt Priority Register
sfr			IP1			= 0xE9;		// R/W 00H Interrupt Priority Register 1
sfr			IP2			= 0xEA;		// R/W 00H Interrupt Priority Register 2
sfr			IRQ			= 0xA0;		// R/W 00H Interrupt Request Register
sfr			IRQ1		= 0xA8;		// R/W 00H Interrupt Request Register 1
sfr			IRQ2		= 0xB0;		// R/W 00H Interrupt Request Register 2
sfr			IOFFSET		= 0x8A;		// R/W 00H Interrupt Offset Register
sfr			ILVL		= 0x9A;		// R/W 00H Interrupt Level Register
sfr			EIFLAG		= 0xC9;		// R/W 00H External Interrupt Flag Register
sfr			EIPOL0		= 0x8B;		// R/W 00H External Interrupt Polarity 0 Register
sfr			EIPOL1		= 0x8C;		// R/W 00H External Interrupt Polarity 1 Register

//------------------------------------------------------
// clock generator
sfr			SYSCON_AR	= 0x8F;		// R/W 00H System Control Access Register
sfr			SCCR		= 0xD9;		// R/W 40H System and Clock Control Register
sfr			OSCCR		= 0xD8;		// R/W 04H Oscillator Control Register

//------------------------------------------------------
// Basic Interval Timer
sfr			BITCNT		= 0x85;		// R   00H Basic Interval Timer Counter Register
sfr			BITCR		= 0x86;		// R/W 04H Basic Interval Timer Control Register

//------------------------------------------------------
// Watch-dog Timer
sfr			WDTMR		= 0x8D;		// R/W 00H Watch Dog Timer Mode register
sfr			WDTR		= 0x8E;		// W FFH Watch Dog Timer Register
sfr			WDTCR		= 0x8E;		// R 00H Watch Dog Timer Counter Register

//------------------------------------------------------
// Timer/PWM
sfr			T0CR		= 0x92;		// R/W 00H Timer 0 Control Register
sfr			T0CNT		= 0x93;		// R   00H Timer 0 Counter Register
sfr			T0DR		= 0x94;		// R/W FFH Timer 0 Data Register
sfr			T0CDR		= 0x94;		// R   00H Timer 0 Capture Data Register

sfr			T1CRL		= 0xBA;		// R/W 00H Timer 1 Control Low Register
sfr			T1CRH		= 0xBB;		// R/W 00H Timer 1 Control High Register
sfr			T1ADRL		= 0xBC;		// R/W FFH Timer 1 A Data Low Register
sfr			T1ADRH		= 0xBD;		// R/W FFH Timer 1 A Data High Register
sfr			T1BDRL		= 0xBE;		// R/W FFH Timer 1 B Data Low Register
sfr			T1BDRH		= 0xBF;		// R/W FFH Timer 1 B Data High Register
sfr			T1CDRL		= 0xCC;		// R/W FFH Timer 1 C Data Low Register
sfr			T1CDRH		= 0xCD;		// R/W FFH Timer 1 C Data High Register
sfr			T1DDRL		= 0xCE;		// R/W FFH Timer 1 D Data Low Register
sfr			T1DDRH		= 0xCF;		// R/W FFH Timer 1 D Data High Register

sfr			T2CRL		= 0xC2;		// R/W 00H Timer 2 Control Low Register
sfr			T2CRH		= 0xC3;		// R/W 00H Timer 2 Control High Register
sfr			T2ADRL		= 0xC4;		// R/W FFH Timer 2 A Data Low Register
sfr			T2ADRH		= 0xC5;		// R/W FFH Timer 2 A Data High Register
sfr			T2BDRL		= 0xC6;		// R/W FFH Timer 2 B Data Low Register
sfr			T2BDRH		= 0xC7;		// R/W FFH Timer 2 B Data High Register

//------------------------------------------------------
// 12bit ADC
sfr			ADCM		= 0x95;		// R/W 8FH A/D Converter Mode Register
sfr			ADCM1		= 0x96;		// R/W (STBY=1) 01H A/D Converter Mode 1 Register
									// W (STBY=0) 01H A/D Converter Mode 1 register
sfr			ADCRL		= 0x96;		// R xxH A/D Converter Result High Register
sfr			ADCRH		= 0x97;		// R xxH A/D Converter Result Low Register

//------------------------------------------------------
// Comparator
sfr			CMPCR		= 0xD6;		// R/W 00H Comparator Control Register
sfr			CMPTR		= 0xD7;		// R/W 00H Comparator Option Register
sfr			CMPDBT		= 0xDE;		// R/W 0FH Comparator Output de-bounce time Register
sfr			LDOCR		= 0xAA;		// R/W 00H LDO Control Register

//------------------------------------------------------
// USART
sfr			UCTRL1		= 0xE1;		// R/W 00H USART Control 1 Register
sfr			UCTRL2		= 0xE2;		// R/W 00H USART Control 2 Register
sfr			UCTRL3		= 0xE3;		// R/W 00H USART Control 3 Register
sfr			UCTRL4		= 0xEB;		// R/W 00H USART Control 4 Register
sfr			USTAT		= 0xE4;		// R 80H USART Status Register
sfr			UBAUD		= 0xE5;		// R/W FFH USART Baud Rate Generation Register
sfr			UDATA		= 0xE6;		// R/W FFH USART Data Register
sfr			FPCR		= 0xEC;		// R/W 00H USART Floating Point Counter Register

//------------------------------------------------------
// I2C
sfr			I2CSR		= 0xF8;		// R 00H I2C Status Register 0
sfr			I2CMR		= 0xF9;		// R/W 00H I2C Mode Control Register
sfr			I2CMR1		= 0xEE;		// R/W 00H I2C Mode Control Register 1
sfr			I2CSCLLR	= 0xFA;		// R/W 3FH SCL Low Period Register
sfr			I2CSCLHR	= 0xFB;		// R/W 3FH SCL High Period Register
sfr			I2CSDAHR	= 0xFC;		// R/W 01H SDA Hold Time Register
sfr			I2CDR0		= 0xFD;		// R/W FFH I2C Data Register
sfr			I2CSAR		= 0xFE;		// R/W 00H I2C Slave Address 0 Register
sfr			I2CSAR1		= 0xFF;		// R/W 00H I2C Slave Address 1 Register

//------------------------------------------------------
// CRC
#ifdef MAIN
unsigned char xdata CRC_CON _at_ 0x20E0;	// R/W 00H CRC Control Register
unsigned char xdata CRC_H _at_ 0x20E3;	// R/W 00H CRC High Register
unsigned char xdata CRC_L _at_ 0x20E4;	// R/W 00H CRC Low Register
unsigned char xdata CRC_MNT_H _at_ 0x20E5;	// R/W 00H CRC Monitor High Register
unsigned char xdata CRC_MNT_L _at_ 0x20E6;	// R/W 00H CRC Monitor Low Register
unsigned char xdata CRC_ADDR_M _at_ 0x20E8;	// R/W 00H CRC Address Monitor Middle Register
unsigned char xdata CRC_ADDR_L _at_ 0x20E9;	// R/W 00H CRC Address Monitor Low Register
unsigned char xdata CRC_ADDR_START_M _at_ 0x20EB;	// R/W 00H CRC Start Address Middle Register
unsigned char xdata CRC_ADDR_START_L _at_ 0x20EC;	// R/W 00H CRC Start Address Low Register
unsigned char xdata CRC_ADDR_END_M _at_ 0x20ED;	// R/W 00H CRC End Address Middle Register
unsigned char xdata CRC_ADDR_END_L _at_ 0x20EE;	// R/W 00H CRC End Address Low Register
#else
extern unsigned char xdata CRC_CON;
extern unsigned char xdata CRC_H;
extern unsigned char xdata CRC_L;
extern unsigned char xdata CRC_MNT_H;
extern unsigned char xdata CRC_MNT_L;
extern unsigned char xdata CRC_ADDR_M;
extern unsigned char xdata CRC_ADDR_L;
extern unsigned char xdata CRC_ADDR_START_M;
extern unsigned char xdata CRC_ADDR_START_L;
extern unsigned char xdata CRC_ADDR_END_M;
extern unsigned char xdata CRC_ADDR_END_L;
#endif

//------------------------------------------------------
// Power Down Operation
sfr			PCON		= 0x87;		// R/W 00H Power Control Register

//------------------------------------------------------
// Reset
sfr			RSFR		= 0x98;		// R/W 8CH Reset Flag Register
sfr			LVIR		= 0x89;		// R/W 01H Low Voltage Indicator Control Register

//------------------------------------------------------
// Flash
sfr			FEMR		= 0xF1;		// R/W 00H Flash Mode Register
sfr			FECR		= 0xF2;		// R/W 03H Flash Control Register
sfr			FESR		= 0xF3;		// R/W 80H Flash Status Register
sfr			FETCR		= 0xF4;		// R/W 00H Flash Time Control Register
sfr			FEARL		= 0xF5;		// R/W 00H Flash Address Low Register
sfr			FEARM		= 0xF6;		// R/W 00H Flash Address Middle Register
sfr			FEARH		= 0xF7;		// R/W 00H Flash Address High Register
#ifdef MAIN
unsigned char xdata ENTRY_0 _at_ 0x10D8;	// R/W 00H 0xAA
unsigned char xdata ENTRY_1 _at_ 0x10DA;	// R/W 00H 0x55
unsigned char xdata ENTRY_2 _at_ 0x10DD;	// R/W 00H 0xA5
unsigned char xdata PAGE_BUF _at_ 0x10E0;	// R/W 00H Flash Data Buffer
#else
extern unsigned char xdata ENTRY_0;
extern unsigned char xdata ENTRY_1;
extern unsigned char xdata ENTRY_2;
extern unsigned char xdata PAGE_BUF;
#endif

#endif								//_A94B114_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
