//======================================================
//	file name	: A97C450.h
//	device		: A97C450(100/80 LQFP/MQFP)
//	version		: Ver1.0
//	date		: 2017-02-02.Thu
//	author		: ABOV Semiconductor
//======================================================

#include	<intrins.h>

#ifndef		_A97C450_
#define		_A97C450_

//======================================================
// M8051 System register 
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;

sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr16		DPTR0		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			EO			= 0xA2;

//======================================================
// PORT Control register
//======================================================
// PORT0
sfr			P0			= 0x80;			// R/W P0 Data register
	sbit	P00			= 0x80;
	sbit	P01			= 0x81;
	sbit	P02			= 0x82;
	sbit	P03			= 0x83;
	sbit	P04			= 0x84;
	sbit	P05			= 0x85;
	sbit	P06			= 0x86;
	sbit	P07			= 0x87;
sfr			P0IO		= 0x89;			// R/W P0 Direction register
#ifdef MAIN
unsigned char xdata P0PU _at_ 0x8F00;	// R/W P0 pullup register
unsigned char xdata P0OD _at_ 0x8F0C;	// R/W P0 Open-drain Select register
unsigned char xdata P0DB _at_ 0x8F18;	// R/W P0 debounce register
#else
extern unsigned char xdata P0PU;
extern unsigned char xdata P0OD;
extern unsigned char xdata P0DB;
#endif

// PORT1
sfr			P1			= 0x88;			// R/W P1 Data register
	sbit	P10			= 0x88;
	sbit	P11			= 0x89;
	sbit	P12			= 0x8A;
	sbit	P13			= 0x8B;
	sbit	P14			= 0x8C;
	sbit	P15			= 0x8D;
	sbit	P16			= 0x8E;
	sbit	P17			= 0x8F;
sfr			P1IO		= 0x92;			// R/W P1 Direction register
#ifdef MAIN
unsigned char xdata P1PU _at_ 0x8F01;	// R/W P1 pullup register
unsigned char xdata P1OD _at_ 0x8F0D;	// R/W P1 Open-drain Select register
unsigned char xdata P1DB _at_ 0x8F19;	// R/W P1 debounce register
#else
extern unsigned char xdata P1PU;
extern unsigned char xdata P1OD;
extern unsigned char xdata P1DB;
#endif

// PORT2
sfr			P2			= 0x90;			// R/W P2 Data register
	sbit	P20			= 0x90;
	sbit	P21			= 0x91;
	sbit	P22			= 0x92;
	sbit	P23			= 0x93;
	sbit	P24			= 0x94;
	sbit	P25			= 0x95;
	sbit	P26			= 0x96;
	sbit	P27			= 0x97;
sfr			P2IO		= 0x99;			// R/W P2 Direction register
#ifdef MAIN
unsigned char xdata P2PU _at_ 0x8F02;	// R/W P2 pullup register
unsigned char xdata P2OD _at_ 0x8F0E;	// R/W P2 Open-drain Select register
unsigned char xdata P2DB _at_ 0x8F1A;	// R/W P2 debounce register
#else
extern unsigned char xdata P2PU;
extern unsigned char xdata P2OD;
extern unsigned char xdata P2DB;
#endif

// PORT3
sfr			P3			= 0x98;			// R/W P3 Data register
	sbit	P30			= 0x98;
	sbit	P31			= 0x99;
	sbit	P32			= 0x9A;
	sbit	P33			= 0x9B;
	sbit	P34			= 0x9C;
	sbit	P35			= 0x9D;
	sbit	P36			= 0x9E;
	sbit	P37			= 0x9F;
sfr			P3IO		= 0xA1;			// R/W P3 Direction register
#ifdef MAIN
unsigned char xdata P3PU _at_ 0x8F03;	// R/W P3 pullup register
unsigned char xdata P3OD _at_ 0x8F0F;	// R/W P3 Open-drain Select register
unsigned char xdata P3DB _at_ 0x8F1B;	// R/W P3 debounce register
#else
extern unsigned char xdata P3PU;
extern unsigned char xdata P3OD;
extern unsigned char xdata P3DB;
#endif

// PORT4
sfr			P4			= 0xA0;			// R/W P4 Data register
	sbit	P40			= 0xA0;
	sbit	P41			= 0xA1;
	sbit	P42			= 0xA2;
	sbit	P43			= 0xA3;
	sbit	P44			= 0xA4;
	sbit	P45			= 0xA5;
	sbit	P46			= 0xA6;
	sbit	P47			= 0xA7;
sfr			P4IO		= 0xB1;			// R/W P4 Direction register
#ifdef MAIN
unsigned char xdata P4PU _at_ 0x8F04;	// R/W P4 pullup register
unsigned char xdata P4OD _at_ 0x8F10;	// R/W P4 Open-drain Select register
unsigned char xdata P4DB _at_ 0x8F1C;	// R/W P4 debounce register
#else
extern unsigned char xdata P4PU;
extern unsigned char xdata P4OD;
extern unsigned char xdata P4DB;
#endif

// PORT5
sfr			P5			= 0xB0;			// R/W P5 Data register
	sbit	P50			= 0xB0;
	sbit	P51			= 0xB1;
	sbit	P52			= 0xB2;
	sbit	P53			= 0xB3;
	sbit	P54			= 0xB4;
	sbit	P55			= 0xB5;
	sbit	P56			= 0xB6;
	sbit	P57			= 0xB7;
sfr			P5IO		= 0xB9;			// R/W P5 Direction register
#ifdef MAIN
unsigned char xdata P5PU _at_ 0x8F05;	// R/W P5 pullup register
unsigned char xdata P5OD _at_ 0x8F11;	// R/W P5 Open-drain Select register
unsigned char xdata P5DB _at_ 0x8F1D;	// R/W P5 debounce register
#else
extern unsigned char xdata P5PU;
extern unsigned char xdata P5OD;
extern unsigned char xdata P5DB;
#endif

#ifdef MAIN
unsigned char xdata PSR1 _at_ 0x8F40;	// R/W Port Selection register 1
unsigned char xdata PSR2 _at_ 0x8F41;	// R/W Port Selection register 2
unsigned char xdata IODBCNT _at_ 0x8F08;// R/W Port Debounce Length Selection register
#else
extern unsigned char xdata PSR1;
extern unsigned char xdata PSR2;
extern unsigned char xdata IODBCNT;
#endif

//======================================================
// Interrupt
//======================================================
sfr			IE			= 0xA8;			// Interrupt Enable register
sfr			IE1			= 0xA9;			// Interrupt Enable register 1
sfr			IE2			= 0xAA;			// Interrupt Enable register 2
sfr			IE3			= 0xAB;			// Interrupt Enable register 3
sfr			IE4			= 0xAC;			// Interrupt Enable register 4

#ifdef MAIN
unsigned char xdata IP0L _at_ 0x8FA0;	// R/W Interrupt Priority 0 Low register
unsigned char xdata IP0H _at_ 0x8FA1;	// R/W Interrupt Priority 0 High register
unsigned char xdata IP1L _at_ 0x8FA2;	// R/W Interrupt Priority 1 Low register
unsigned char xdata IP1H _at_ 0x8FA3;	// R/W Interrupt Priority 1 High register
unsigned char xdata IP2L _at_ 0x8FA4;	// R/W Interrupt Priority 2 Low register
unsigned char xdata IP2H _at_ 0x8FA5;	// R/W Interrupt Priority 2 High register
unsigned char xdata IP3L _at_ 0x8FA6;	// R/W Interrupt Priority 3 Low register
unsigned char xdata IP3H _at_ 0x8FA7;	// R/W Interrupt Priority 3 High register
unsigned char xdata IP4L _at_ 0x8FA8;	// R/W Interrupt Priority 4 Low register
unsigned char xdata IP4H _at_ 0x8FA9;	// R/W Interrupt Priority 4 High register
#else
extern unsigned char xdata IP0L;
extern unsigned char xdata IP0H;
extern unsigned char xdata IP1L;
extern unsigned char xdata IP1H;
extern unsigned char xdata IP2L;
extern unsigned char xdata IP2H;
extern unsigned char xdata IP3L;
extern unsigned char xdata IP3H;
extern unsigned char xdata IP4L;
extern unsigned char xdata IP4H;
#endif

sfr			EIENAB		= 0xA3;			// R/W External Interrupt Enable register
sfr			EIFLAG		= 0xA4;			// R/W External Interrupt Flag register
sfr			EIEDGE		= 0xA5;			// R/W External Interrupt Edge register
sfr			EIPOLA		= 0xA6;			// R/W External Interrupt Polarity register
sfr			EIBOTH		= 0xA7;			// R/W External Interrupt Both Edge register

//======================================================
// Stack Pointer Management Unit
//======================================================
#ifdef MAIN
unsigned char xdata SPMUCR _at_ 0x8FD0;	// R/W SPMU Control register
unsigned char xdata SPMUSR _at_ 0x8FD8;	// R/W SPMU Flag register
unsigned char xdata PADDR_OVFH _at_ 0x8FD1;	// R/W Program Address Overflow Data register High
unsigned char xdata PADDR_OVFM _at_ 0x8FD2;	// R/W Program Address Overflow Data register Middle
unsigned char xdata PADDR_OVFL _at_ 0x8FD3;	// R/W Program Address Overflow Data register Low
unsigned char xdata STPTR_OVFH _at_ 0x8FD4;	// R/W Stack Pointer Overflow Data register High
unsigned char xdata STPTR_OVFL _at_ 0x8FD5;	// R/W Stack Pointer Overflow Data register Low
unsigned char xdata STPTR_UDFH _at_ 0x8FD6;	// R/W Stack Pointer Underflow Data register High
unsigned char xdata STPTR_UDFL _at_ 0x8FD7;	// R/W Stack Pointer Underflow Data register Low
unsigned char xdata PADDRH _at_ 0x8FD9;	// R/W Program Address Overflow Data register High
unsigned char xdata PADDRM _at_ 0x8FDA;	// R/W Program Address Overflow Data register Middle
unsigned char xdata PADDRL _at_ 0x8FDB;	// R/W Program Address Overflow Data register Low
unsigned char xdata STPTRH _at_ 0x8FDC;	// R/W Stack Pointer register High
unsigned char xdata STPTRL _at_ 0x8FDD;	// R/W Stack Pointer register Low
unsigned char xdata XSTPTR _at_ 0x8FDE;	// R/W Memory Extension Stack Pointer
#else
extern unsigned char xdata SPMUCR;
extern unsigned char xdata SPMUSR;
extern unsigned char xdata PADDR_OVFH;
extern unsigned char xdata PADDR_OVFM;
extern unsigned char xdata PADDR_OVFL;
extern unsigned char xdata STPTR_OVFH;
extern unsigned char xdata STPTR_OVFL;
extern unsigned char xdata STPTR_UDFH;
extern unsigned char xdata STPTR_UDFL;
extern unsigned char xdata PADDRH;
extern unsigned char xdata PADDRM;
extern unsigned char xdata PADDRL;
extern unsigned char xdata STPTRH;
extern unsigned char xdata STPTRL;
extern unsigned char xdata XSTPTR;
#endif

//======================================================
// Clock Generator
//======================================================
sfr			SCCR		= 0x8A;			// R/W System Clock Control register

//======================================================
// Basic Interval Timer
//======================================================
sfr			BCCR		= 0x8B;			// R/W BIT Clock Control register
sfr			BITR		= 0x8C;			// R   Basic Interval Timer register

//======================================================
// Watch Dog Timer
//======================================================
sfr			WDTMR		= 0x8D;			// R/W Watch Dog Timer Mode register
sfr			WDTR		= 0x8E;			// W   Watch Dog Timer register
sfr			WDTCR		= 0x8E;			// R   Watch Dog Timer Counter register

//======================================================
// Watch Timer
//======================================================
sfr			WTMR		= 0x9D;			// R/W Watch Timer Mode register
sfr			WTR			= 0x9E;			// W   Watch Timer register
sfr			WTCR		= 0x9E;			// R   Watch Timer Counter register

//======================================================
// Timer 0/1
//======================================================
sfr			T0CNT		= 0xB3;			// R   Timer 0 Counter register
sfr			T0DR		= 0xB4;			// R/W Timer 0 Data register
sfr			T0CDR		= 0xB4;			// R   Timer 0 Capture Data register
sfr			T0CR		= 0xB5;			// R/W Timer 0 Control register

sfr			T1CNT		= 0xB7;			// R   Timer 1 Counter register
sfr			T1DR		= 0xBA;			// R/W Timer 1 Data register
sfr			T1CDR		= 0xBA;			// R   Timer 1 Capture Data register
sfr			T1CR		= 0xBB;			// R/W Timer 1 Control register

sfr			TINTCR		= 0xB2;			// R/W Timer Interrupt Control register
sfr			TIFLAG0		= 0xB6;			// R/W Timer Interrupt Flag register

//======================================================
// Timer 2/3
//======================================================
sfr			T2ADRH		= 0xBF;			// R/W Timer 2 A Data High register
sfr			T2ADRL		= 0xBE;			// R/W Timer 2 A Data Low register
sfr			T2BDRH		= 0xC1;			// R/W Timer 2 B Data High register
sfr			T2BDRL		= 0xC0;			// R/W Timer 2 B Data Low register
sfr			T2CRH		= 0xBD;			// R/W Timer 2 Control High register
sfr			T2CRL		= 0xBC;			// R/W Timer 2 Control Low register

sfr			T3ADRH		= 0xC5;			// R/W Timer 3 A Data High register
sfr			T3ADRL		= 0xC4;			// R/W Timer 3 A Data Low register
sfr			T3BDRH		= 0xC7;			// R/W Timer 3 B Data High register
sfr			T3BDRL		= 0xC6;			// R/W Timer 3 B Data Low register
sfr			T3CRH		= 0xC3;			// R/W Timer 3 Control High register
sfr			T3CRL		= 0xC2;			// R/W Timer 3 Control Low register

//======================================================
// Timer 4/5/6
//======================================================
sfr			T4ADRH		= 0xCB;			// R/W Timer 4 A Data High register
sfr			T4ADRL		= 0xCA;			// R/W Timer 4 A Data Low register
sfr			T4BDRH		= 0xCD;			// R/W Timer 4 B Data High register
sfr			T4BDRL		= 0xCC;			// R/W Timer 4 B Data Low register
sfr			T4CRH		= 0xC9;			// R/W Timer 4 Control High register
sfr			T4CRL		= 0xC8;			// R/W Timer 4 Control Low register

sfr			T5ADRH		= 0xD3;			// R/W Timer 5 A Data High register
sfr			T5ADRL		= 0xD2;			// R/W Timer 5 A Data Low register
sfr			T5BDRH		= 0xD5;			// R/W Timer 5 B Data High register
sfr			T5BDRL		= 0xD4;			// R/W Timer 5 B Data Low register
sfr			T5CRH		= 0xCF;			// R/W Timer 5 Control High register
sfr			T5CRL		= 0xCE;			// R/W Timer 5 Control Low register

sfr			T6ADRH		= 0xEF;			// R/W Timer 6 A Data High register
sfr			T6ADRL		= 0xEE;			// R/W Timer 6 A Data Low register
sfr			T6BDRH		= 0xF9;			// R/W Timer 6 B Data High register
sfr			T6BDRL		= 0xF8;			// R/W Timer 6 B Data Low register
sfr			T6CRH		= 0xF7;			// R/W Timer 6 Control High register
sfr			T6CRL		= 0xF1;			// R/W Timer 6 Control Low register

//======================================================
// Buzzer Driver
//======================================================
sfr			BUZDR		= 0x8F;			// R/W Buzzer Data register
sfr			BUZCR		= 0x9F;			// R/W Buzzer Control register

//======================================================
// USART 0/1
//======================================================
sfr			UCTRL01		= 0xE2;			// R/W USART 0 Control 1 register 0
sfr			UCTRL02		= 0xE3;			// R/W USART 0 Control 2 register 0
sfr			UCTRL03		= 0xE4;			// R/W USART 0 Control 3 register 0
#ifdef MAIN
unsigned char xdata UCTRL04 _at_ 0x8FC0;// R/W USART 0 Control 4 register 0
unsigned char xdata FPCR0 _at_ 0x8FC1;	// R/W 00H USART 0 Floating Point Counter
#else
extern unsigned char xdata UCTRL04;
extern unsigned char xdata FPCR0;
#endif
sfr			USTAT0		= 0xE5;			// R   USART Status register 0
sfr			UBAUD0		= 0xE6;			// R/W USART Baud Rate Generation register 0
sfr			UDATA0		= 0xE7;			// R/W USART Data register 0

sfr			UCTRL11		= 0xFA;			// R/W USART 1 Control 1 register 1
sfr			UCTRL12		= 0xFB;			// R/W USART 1 Control 2 register 1
sfr			UCTRL13		= 0xFC;			// R/W USART 1 Control 3 register 1
#ifdef MAIN
unsigned char xdata UCTRL14 _at_ 0x8FC8;// R/W USART 1 Control 4 register 0
unsigned char xdata FPCR1 _at_ 0x8FC9;	// R/W 00H USART 1 Floating Point Counter
#else
extern unsigned char xdata UCTRL14;
extern unsigned char xdata FPCR1;
#endif
sfr			USTAT1		= 0xFD;			// R   USART Status register 1
sfr			UBAUD1		= 0xFE;			// R/W USART Baud Rate Generation register 1
sfr			UDATA1		= 0xFF;			// R/W USART Data register 1

//======================================================
// SPI 0/1
//======================================================
sfr			SPICR0		= 0xD8;			// R/W SPI Control register 0
sfr			SPIDR0		= 0xD9;			// R/W SPI Data register 0
sfr			SPISR0		= 0xD1;			// R/W SPI Status register 0

sfr			SPICR1		= 0xE8;			// R/W SPI Control register 1
sfr			SPIDR1		= 0xE9;			// R/W SPI Data register 1
sfr			SPISR1		= 0xE1;			// R/W SPI Status register 1

//======================================================
// I2C 0/1
//======================================================
sfr			I2CMR00		= 0xDA;			// R/W I2C0 Mode Control register 0
sfr			I2CSR0		= 0xDB;			// R   I2C0 Status register
sfr			I2CSCLLR0	= 0xDC;			// R/W I2C0 SCL Low Period register
sfr			I2CSCLHR0	= 0xDD;			// R/W I2C0 SCL High Period register
sfr			I2CSDAHR0	= 0xDE;			// R/W I2C0 SDA Hold Time register
sfr			I2CDR0		= 0xDF;			// R/W I2C0 Data register
sfr			I2CSAR00	= 0xD7;			// R/W I2C0 Slave Address 0 register
sfr			I2CSAR01	= 0xD6;			// R/W I2C0 Slave Address 1 register
#ifdef MAIN
unsigned char xdata I2CMR01 _at_ 0x8F1E;// R/W I2C0 Mode Control register 1
#else
extern unsigned char xdata I2CMR01;
#endif

#ifdef MAIN
unsigned char xdata I2CMR10 _at_ 0x8F20;// R/W I2C1 Mode Control register 0
unsigned char xdata I2CSR1 _at_ 0x8F21;	// R I2C1 Status register
unsigned char xdata I2CSCLLR1 _at_ 0x8F22;// R/W I2C1 SCL Low Period register
unsigned char xdata I2CSCLHR1 _at_ 0x8F23;// R/W I2C1 SCL High Period register
unsigned char xdata I2CSDAHR1 _at_ 0x8F24;// R/W I2C1 SDA Hold Time register
unsigned char xdata I2CDR1 _at_ 0x8F25;	// R/W I2C1 Data register
unsigned char xdata I2CSAR10 _at_ 0x8F26;// R/W I2C1 Slave Address 1 register
unsigned char xdata I2CSAR11 _at_ 0x8F27;// R/W I2C1 Slave Address register
unsigned char xdata I2CMR11 _at_ 0x8F1F;// R/W I2C1 Mode Control register 1
#else
extern unsigned char xdata I2CMR10;
extern unsigned char xdata I2CSR1;
extern unsigned char xdata I2CSCLLR1;
extern unsigned char xdata I2CSCLHR1;
extern unsigned char xdata I2CSDAHR1;
extern unsigned char xdata I2CDR1;
extern unsigned char xdata I2CSAR10;
extern unsigned char xdata I2CSAR11;
extern unsigned char xdata I2CMR11;
#endif

//======================================================
// 12-bit A/D Converter
//======================================================
sfr			ADCM		= 0x9A;			// R/W A/D Converter Mode register
sfr			ADCM2		= 0x92;			// R/W A/D Converter Mode 2 register
sfr			ADCRL		= 0x9B;			// R   A/D Converter Result Low register
sfr			ADCRH		= 0x9C;			// R   A/D Converter Result High register

//======================================================
// HDMI™- CEC Controller
//======================================================
#ifdef MAIN
unsigned char xdata CEC_PRES1 _at_ 0x8F60;// R/W 00H Clock prescaler register (High byte)
unsigned char xdata CEC_PRES0 _at_ 0x8F61;// R/W 00H Clock prescaler register (Low byte)
unsigned char xdata CEC_CONF1 _at_ 0x8F62;// R/W 00H CEC Block configuration register 1
unsigned char xdata CEC_CONF0 _at_ 0x8F63;// R/W 00H CEC Block configuration register 0
unsigned char xdata CEC_GCTRL _at_ 0x8F64;// R/W 00H Signal free time control register
unsigned char xdata CEC_ICTRL _at_ 0x8F65;// R/W 00H TX data control register
unsigned char xdata CEC_FCTRL _at_ 0x8F66;// W 00H RX data count register
unsigned char xdata CEC_ISTAT _at_ 0x8F67;// R 00H TX block state register
unsigned char xdata CEC_FSTAT _at_ 0x8F68;// R 00H RX block state register
unsigned char xdata CEC_ICLR _at_ 0x8F69;// W 00H TX block state clear register
unsigned char xdata CEC_FCLR _at_ 0x8F6A;// W 00H RX block status clear register
unsigned char xdata CEC_TXH _at_ 0x8F6B;// R/W 00H TX Header data buffer
unsigned char xdata CEC_TXD_1 _at_ 0x8F6C;// R/W TX Data buffers
unsigned char xdata CEC_TXD_2 _at_ 0x8F6D;
unsigned char xdata CEC_TXD_3 _at_ 0x8F6E;
unsigned char xdata CEC_TXD_4 _at_ 0x8F6F;
unsigned char xdata CEC_TXD_5 _at_ 0x8F70;
unsigned char xdata CEC_TXD_6 _at_ 0x8F71;
unsigned char xdata CEC_TXD_7 _at_ 0x8F72;
unsigned char xdata CEC_TXD_8 _at_ 0x8F73;
unsigned char xdata CEC_TXD_9 _at_ 0x8F74;
unsigned char xdata CEC_TXD_10 _at_ 0x8F75;
unsigned char xdata CEC_TXD_11 _at_ 0x8F76;
unsigned char xdata CEC_TXD_12 _at_ 0x8F77;
unsigned char xdata CEC_TXD_13 _at_ 0x8F78;
unsigned char xdata CEC_TXD_14 _at_ 0x8F79;
unsigned char xdata CEC_TXD_15 _at_ 0x8F7A;
unsigned char xdata CEC_TXD_16 _at_ 0x8F7B;
unsigned char xdata CEC_TXD_17 _at_ 0x8F7C;
unsigned char xdata CEC_TXD_18 _at_ 0x8F7D;
unsigned char xdata CEC_TXD_19 _at_ 0x8F7E;

unsigned char xdata CEC_RXH _at_ 0x8F7F;// R - RX Header Data buffer
unsigned char xdata CEC_RXD_1 _at_ 0x8F80;// R - RX Data buffer
unsigned char xdata CEC_RXD_2 _at_ 0x8F81;
unsigned char xdata CEC_RXD_3 _at_ 0x8F82;
unsigned char xdata CEC_RXD_4 _at_ 0x8F83;
unsigned char xdata CEC_RXD_5 _at_ 0x8F84;
unsigned char xdata CEC_RXD_6 _at_ 0x8F85;
unsigned char xdata CEC_RXD_7 _at_ 0x8F86;
unsigned char xdata CEC_RXD_8 _at_ 0x8F87;
unsigned char xdata CEC_RXD_9 _at_ 0x8F88;
unsigned char xdata CEC_RXD_10 _at_ 0x8F89;
unsigned char xdata CEC_RXD_11 _at_ 0x8F8A;
unsigned char xdata CEC_RXD_12 _at_ 0x8F8B;
unsigned char xdata CEC_RXD_13 _at_ 0x8F8C;
unsigned char xdata CEC_RXD_14 _at_ 0x8F8D;
unsigned char xdata CEC_RXD_15 _at_ 0x8F8E;
unsigned char xdata CEC_RXD_16 _at_ 0x8F8F;
unsigned char xdata CEC_RXD_17 _at_ 0x8F90;
unsigned char xdata CEC_RXD_18 _at_ 0x8F91;
unsigned char xdata CEC_RXD_19 _at_ 0x8F92;
#else
extern unsigned char xdata CEC_PRES1;
extern unsigned char xdata CEC_PRES0;
extern unsigned char xdata CEC_CONF1;
extern unsigned char xdata CEC_CONF0;
extern unsigned char xdata CEC_GCTRL;
extern unsigned char xdata CEC_ICTRL;
extern unsigned char xdata CEC_FCTRL;
extern unsigned char xdata CEC_ISTAT;
extern unsigned char xdata CEC_FSTAT;
extern unsigned char xdata CEC_ICLR;
extern unsigned char xdata CEC_FCLR;
extern unsigned char xdata CEC_TXH;
extern unsigned char xdata CEC_TXD_1;
extern unsigned char xdata CEC_TXD_2;
extern unsigned char xdata CEC_TXD_3;
extern unsigned char xdata CEC_TXD_4;
extern unsigned char xdata CEC_TXD_5;
extern unsigned char xdata CEC_TXD_6;
extern unsigned char xdata CEC_TXD_7;
extern unsigned char xdata CEC_TXD_8;
extern unsigned char xdata CEC_TXD_9;
extern unsigned char xdata CEC_TXD_10;
extern unsigned char xdata CEC_TXD_11;
extern unsigned char xdata CEC_TXD_12;
extern unsigned char xdata CEC_TXD_13;
extern unsigned char xdata CEC_TXD_14;
extern unsigned char xdata CEC_TXD_15;
extern unsigned char xdata CEC_TXD_16;
extern unsigned char xdata CEC_TXD_17;
extern unsigned char xdata CEC_TXD_18;
extern unsigned char xdata CEC_TXD_19;

extern unsigned char xdata CEC_RXH;
extern unsigned char xdata CEC_RXD_1;
extern unsigned char xdata CEC_RXD_2;
extern unsigned char xdata CEC_RXD_3;
extern unsigned char xdata CEC_RXD_4;
extern unsigned char xdata CEC_RXD_5;
extern unsigned char xdata CEC_RXD_6;
extern unsigned char xdata CEC_RXD_7;
extern unsigned char xdata CEC_RXD_8;
extern unsigned char xdata CEC_RXD_9;
extern unsigned char xdata CEC_RXD_10;
extern unsigned char xdata CEC_RXD_11;
extern unsigned char xdata CEC_RXD_12;
extern unsigned char xdata CEC_RXD_13;
extern unsigned char xdata CEC_RXD_14;
extern unsigned char xdata CEC_RXD_15;
extern unsigned char xdata CEC_RXD_16;
extern unsigned char xdata CEC_RXD_17;
extern unsigned char xdata CEC_RXD_18;
extern unsigned char xdata CEC_RXD_19;
#endif

//======================================================
// IR Controller
//======================================================
#ifdef MAIN
unsigned char xdata IRC_PRES1 _at_ 0x8F48;// R/W IRC Prescaler High register
unsigned char xdata IRC_PRES0 _at_ 0x8F49;// R/W IRC Prescaler Low register
unsigned char xdata IRC_FRMP1 _at_ 0x8F4A;// R/W IRC Frame Period Parameter High register
unsigned char xdata IRC_FRMP0 _at_ 0x8F4B;// R/W IRC Frame Period Parameter Low register
unsigned char xdata IRC_CONF _at_ 0x8F4C;// R/W IRC Configuration register
unsigned char xdata IRC_FLAG _at_ 0x8F4D;// R/W IRC Status register
unsigned char xdata IRC_EDGE1 _at_ 0x8F4E;// R   IRC Edge Counter Data High register
unsigned char xdata IRC_EDGE0 _at_ 0x8F4F;// R   IRC Edge Counter Data Low register
#else
extern unsigned char xdata IRC_PRES1;
extern unsigned char xdata IRC_PRES0;
extern unsigned char xdata IRC_FRMP1;
extern unsigned char xdata IRC_FRMP0;
extern unsigned char xdata IRC_CONF;
extern unsigned char xdata IRC_FLAG;
extern unsigned char xdata IRC_EDGE1;
extern unsigned char xdata IRC_EDGE0;
#endif

//======================================================
// Comparator
//======================================================
#ifdef MAIN
unsigned char xdata COMPCON _at_ 0x8F30;// R/W Comparator Control register
unsigned char xdata COMPVREFSEL _at_ 0x8F31;// R/W Comparator Voltage Reference Select register
unsigned char xdata COMPST _at_ 0x8F32;	// R   Comparator Output Read register
unsigned char xdata COMPDBCNT _at_ 0x8F33;// R/W Comparator Output Debounce register
#else
extern unsigned char xdata COMPCON;
extern unsigned char xdata COMPVREFSEL;
extern unsigned char xdata COMPST;
extern unsigned char xdata COMPDBCNT;
#endif

//======================================================
// RTC : Real-time Clock
//======================================================
#ifdef MAIN
unsigned char xdata RTCC0 _at_ 0x8FB1;	// R/W RTC Control register 0
unsigned char xdata RTCC1 _at_ 0x8FB2;	// R/W RTC Control register 1
unsigned char xdata ERRCOR _at_ 0x8FB3;	// R/W Watch Error Correction register
unsigned char xdata SEC _at_ 0x8FB4;	// R/W Second Count register
unsigned char xdata MIN _at_ 0x8FB5;	// R/W Minute Count register
unsigned char xdata HOUR _at_ 0x8FB6;	// R/W Hour Count register
unsigned char xdata DAY _at_ 0x8FB7;	// R/W Day Count register
unsigned char xdata WEEK _at_ 0x8FB8;	// R/W Week Count register
unsigned char xdata MONTH _at_ 0x8FB9;	// R/W Month Count register
unsigned char xdata YEAR _at_ 0x8FBA;	// R/W Year Count register
unsigned char xdata ALARMWM _at_ 0x8FBB;// R/W Alarm Minute register
unsigned char xdata ALARMWH _at_ 0x8FBC;// R/W Alarm Hour register
unsigned char xdata ALARMWW _at_ 0x8FBD;// R/W Alarm Week register
#else
extern unsigned char xdata RTCC0;
extern unsigned char xdata RTCC1;
extern unsigned char xdata ERRCOR;
extern unsigned char xdata SEC;
extern unsigned char xdata MIN;
extern unsigned char xdata HOUR;
extern unsigned char xdata DAY;
extern unsigned char xdata WEEK;
extern unsigned char xdata MONTH;
extern unsigned char xdata YEAR;
extern unsigned char xdata ALARMWM;
extern unsigned char xdata ALARMWH;
extern unsigned char xdata ALARMWW;
#endif

//======================================================
// BISC : Built in self calibration circuit
//======================================================
#ifdef MAIN
unsigned char xdata BISCCON _at_ 0x8F28;// R   BISC Control register
unsigned char xdata INTCNTH _at_ 0x8F29;// R/W BISC Counter register High
unsigned char xdata INTCNTL _at_ 0x8F2A;// R/W BISC Counter register Low
unsigned char xdata XTLCNTH _at_ 0x8F2B;// R/W BISC Reference Counter register High
unsigned char xdata XTLCNTL _at_ 0x8F2C;// R/W BISC Reference Counter register Low
#else
extern unsigned char xdata BISCCON;
extern unsigned char xdata INTCNTH;
extern unsigned char xdata INTCNTL;
extern unsigned char xdata XTLCNTH;
extern unsigned char xdata XTLCNTL;
#endif

//======================================================
// CRC
//======================================================
#ifdef MAIN
unsigned char xdata CRC_CON _at_ 0x8FE0;// R/W CRC Control register
unsigned char xdata CRC_H _at_ 0x8FE2;	// R/W CRC High register
unsigned char xdata CRC_L _at_ 0x8FE3;	// R/W CRC Low register
unsigned char xdata CRC_MNT_H _at_ 0x8FE4;// R/W CRC Monitor High register
unsigned char xdata CRC_MNT_L _at_ 0x8FE5;// R/W CRC Monitor Low register
unsigned char xdata CRC_ADDR_START_H _at_ 0x8FE9;// R/W CRC Start Address High register
unsigned char xdata CRC_ADDR_START_M _at_ 0x8FEA;// R/W CRC Start Address Middle register
unsigned char xdata CRC_ADDR_START_L _at_ 0x8FEB;// R/W CRC Start Address Low register
unsigned char xdata CRC_ADDR_END_H _at_ 0x8FEC;// R/W CRC End Address High register
unsigned char xdata CRC_ADDR_END_M _at_ 0x8FED;// R/W CRC End Address Middle register
unsigned char xdata CRC_ADDR_END_L _at_ 0x8FEE;// R/W CRC End Address Low register
#else
extern unsigned char xdata CRC_CON;
extern unsigned char xdata CRC_H;
extern unsigned char xdata CRC_L;
extern unsigned char xdata CRC_MNT_H;
extern unsigned char xdata CRC_MNT_L;
extern unsigned char xdata CRC_ADDR_START_H;
extern unsigned char xdata CRC_ADDR_START_M;
extern unsigned char xdata CRC_ADDR_START_L;
extern unsigned char xdata CRC_ADDR_END_H;
extern unsigned char xdata CRC_ADDR_END_M;
extern unsigned char xdata CRC_ADDR_END_L;
#endif

//======================================================
// Power Down Operation
//======================================================
sfr			PCON		= 0x87;			// R/W Power Control register
sfr			VDCMOD		= 0xB8;			// R/W VDC Mode Control register

//======================================================
// RESET
//======================================================
sfr			RSFR		= 0x85;			// R/W Reset Source Flag register
sfr			LVIR		= 0x86;			// R/W LVI Control register

#endif	//_A97C450_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
