//======================================================
//	file name	: A96T346.h
//	device		: A96T346
//	version		: Ver1.0  
//	date		: 2018-02-07
//======================================================

#include	<intrins.h>

#ifndef		_A96T346_
#define		_A96T346_

//======================================================
// PORT Control Register
//======================================================
// PORT0
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

// PORT1
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

sfr			PSR0		= 0xAB;			// P0 Port Selection Register
sfr			PSR1		= 0xAC;			// P1 Port Selection Register

sfr			DIMM1		= 0xD2;			// Dimming Value Select Register 1
sfr			DIMM2		= 0xD3;			// Dimming Value Select Register 2
sfr			DIMM3		= 0xD4;			// Dimming Value Select Register 3

//======================================================
// Interrupt Control
//======================================================
sfr			IE			= 0xA8;			// Interrupt Enable Register 0
sfr			IE1			= 0xA9;			// Interrupt Enable Register 1
sfr			IP			= 0xB8;			// Interrupt Priority Register 0
sfr			IP1			= 0xF8;			// Interrupt Priority Register 1
sfr			EIENAB		= 0xA3;			// External Enable Register
sfr			EIFLAG		= 0xA4;			// External Interrupt Flag Register

//======================================================
// System Oscillator, Reset Control
//======================================================
sfr			SCCR		= 0x8A;			// System Clock Control Register

//======================================================
//  BIT Timer Control 
//======================================================
sfr			BCCR		= 0x8B;			// BIT Clock Control Register
sfr			BITR		= 0x8C;			// BIT Register

//======================================================
//  Watch Dog Timer Control 
//======================================================
sfr			WDTR		= 0x8E;			// Watch Dog Timer Data Register
sfr			WDTCR		= 0x8E;			// Watch Dog Timer Counter Register
sfr			WDTMR		= 0x8D;			// Watch Dog Timer Mode Register

//======================================================
// Timer Control
//======================================================
// TIMER 0 Control
sfr			T0CR		= 0xB2;			// R/W 00H Timer 0 Mode Control Register
sfr			T0CR1		= 0xB3;			// R/W 00H Timer 0 Mode Control Register #1
sfr			T0L			= 0xB4;			// R 00H Timer 0 Low Register
sfr			PWM0DRL		= 0xB4;			// R/W 00H PWM 0 Duty Register Low
sfr			CDR0L		= 0xB4;			// R 00H Timer 0 Capture Data Register Low
sfr			T0H			= 0xB5;			// R 00H Timer 0 Register High
sfr			PWM0DRH		= 0xB5;			// R/W 00H PWM 0 Duty Register High
sfr			CDR0H		= 0xB5;			// R 00H Timer 0 Capture Data Register High
sfr			T0DRL		= 0xB6;			// W FFH Timer 0 Data Register Low
sfr			PWM0PRL		= 0xB6;			// W FFH PWM 0 Period Register Low
sfr			T0DRH		= 0xB7;			// W FFH Timer 0 Data Register High
sfr			PWM0PRH		= 0xB7;			// W FFH PWM 0 Period Register High

//======================================================
//  I2C Control
//======================================================
sfr			I2CMR		= 0xDA;			// R/W 00H I2C Mode Control Register
sfr			I2CSR		= 0xDB;			// R 00H I2C Status Register
sfr			I2CSCLLR	= 0xDC;			// R/W 3FH SCL Low Period Register
sfr			I2CSCLHR	= 0xDD;			// R/W 3FH SCL High Period Register
sfr			I2CSDAHR	= 0xDE;			// R/W 01H SDA Hold Time Register
sfr			I2CDR		= 0xDF;			// R/W FFH I2C Data Register
sfr			I2CSAR		= 0xD7;			// R/W 00H I2C Slave Address Register
sfr			I2CSAR1		= 0xD6;			// R/W 00H I2C Slave Address Register 1

//======================================================
//  Touch Control
//======================================================
#ifdef MAIN
unsigned char xdata SUM_CH0H _at_ 0x2E00;	// R 00H Touch Sensor Ch0 Sum High-Byte Register
unsigned char xdata SUM_CH0L _at_ 0x2E01;	// R 00H Touch Sensor Ch0 Sum Low-Byte Register
unsigned char xdata SUM_CH1H _at_ 0x2E02;	// R 00H Touch Sensor Ch1 Sum High-Byte Register
unsigned char xdata SUM_CH1L _at_ 0x2E03;	// R 00H Touch Sensor Ch1 Sum Low-Byte Register
unsigned char xdata SUM_CH2H _at_ 0x2E04;	// R 00H Touch Sensor Ch2 Sum High-Byte Register
unsigned char xdata SUM_CH2L _at_ 0x2E05;	// R 00H Touch Sensor Ch2 Sum Low-Byte Register
unsigned char xdata SUM_CH3H _at_ 0x2E06;	// R 00H Touch Sensor Ch3 Sum High-Byte Register
unsigned char xdata SUM_CH3L _at_ 0x2E07;	// R 00H Touch Sensor Ch3 Sum Low-Byte Register
unsigned char xdata SUM_CH4H _at_ 0x2E08;	// R 00H Touch Sensor Ch4 Sum High-Byte Register
unsigned char xdata SUM_CH4L _at_ 0x2E09;	// R 00H Touch Sensor Ch4 Sum Low-Byte Register
unsigned char xdata SUM_CH5H _at_ 0x2E0A;	// R 00H Touch Sensor Ch5 Sum High-Byte Register
unsigned char xdata SUM_CH5L _at_ 0x2E0B;	// R 00H Touch Sensor Ch5 Sum Low-Byte Register
unsigned char xdata SUM_CH6H _at_ 0x2E0C;	// R 00H Touch Sensor Ch6 Sum High-Byte Register
unsigned char xdata SUM_CH6L _at_ 0x2E0D;	// R 00H Touch Sensor Ch6 Sum Low-Byte Register
unsigned char xdata SUM_CH7H _at_ 0x2E0E;	// R 00H Touch Sensor Ch7 Sum High-Byte Register
unsigned char xdata SUM_CH7L _at_ 0x2E0F;	// R 00H Touch Sensor Ch7 Sum Low-Byte Register

unsigned char xdata SCO0_H _at_ 0x2E10;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch0
unsigned char xdata SCO0_L _at_ 0x2E11;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch0
unsigned char xdata SCO1_H _at_ 0x2E12;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch1
unsigned char xdata SCO1_L _at_ 0x2E13;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch1
unsigned char xdata SCO2_H _at_ 0x2E14;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch2
unsigned char xdata SCO2_L _at_ 0x2E15;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch2
unsigned char xdata SCO3_H _at_ 0x2E16;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch3
unsigned char xdata SCO3_L _at_ 0x2E17;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch3
unsigned char xdata SCO4_H _at_ 0x2E18;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch4
unsigned char xdata SCO4_L _at_ 0x2E19;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch4
unsigned char xdata SCO5_H _at_ 0x2E1A;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch5
unsigned char xdata SCO5_L _at_ 0x2E1B;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch5
unsigned char xdata SCO6_H _at_ 0x2E1C;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch6
unsigned char xdata SCO6_L _at_ 0x2E1D;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch6
unsigned char xdata SCO7_H _at_ 0x2E1E;	// R/W 00H Touch Sensor Offset Capacitor Selection High-Byte Register for Ch7
unsigned char xdata SCO7_L _at_ 0x2E1F;	// R/W 00H Touch Sensor Offset Capacitor Selection Low-Byte Register for Ch7

unsigned char xdata TS_CON _at_ 0x2E20;	// R/W 00H Touch Sensor Control Register
unsigned char xdata TS_MODE _at_ 0x2E21;	// R/W 10H Touch Sensor Mode Register
unsigned char xdata TS_SUM_CNT _at_ 0x2E22;	// R/W 01H Touch Sensor Sum Repeat Count Register
unsigned char xdata TS_CH_SEL _at_ 0x2E23;	// R/W 00H Touch Sensor Channel Selection Register
unsigned char xdata TS_SLP_CR _at_ 0x2E24;	// R/W 01H Touch Sensor Low Pass Filter Control Register
unsigned char xdata TS_INTEG_CNT _at_ 0x2E27;	// R/W 32H Touch Sensor Sensing Integration Count Register
unsigned char xdata TS_FREQ_NUM _at_ 0x2E28;// R/W FFH Touch Sensor Frequency Number Register
unsigned char xdata TS_FREQ_DEL _at_ 0x2E29;// R/W 00H Touch Sensor Frequency Delta Register
unsigned char xdata TS_CLK_CFG _at_ 0x2E2A;	// R/W 10H Touch Sensor Clock Configuration Register
unsigned char xdata TRIM_OSC _at_ 0x2E2B;	// R/W B8H Touch Sensor RING OSC. Trimming Selection Register
unsigned char xdata TRIM_A_OSC _at_ 0x2E2C;	// R/W FFH Touch Sensor RING OSC. Trimming for ADC Register
unsigned char xdata SCI _at_ 0x2E2D;	// R/W 34H Touch Sensor Input Capacitor Selection Register
unsigned char xdata SCC _at_ 0x2E2E;	// R/W 04H Touch Sensor Conversion Capacitor Selection Register
unsigned char xdata SVREF _at_ 0x2E2F;	// R/W 04H Touch Sensor VREF Selection Register
unsigned char xdata TAR _at_ 0x2E30;	// R/W 20H Touch Sensor Integration AMP Reset Time Register
unsigned char xdata TRST _at_ 0x2E31;	// R/W 03H Touch Sensor Reset Time of Sensing Register
unsigned char xdata TDRV _at_ 0x2E32;	// R/W 03H Touch Sensor Driving Time of Sensing Register
unsigned char xdata TINT _at_ 0x2E33;	// R/W 14H Touch Sensor Integration Time of Sensing Register
unsigned char xdata TD _at_ 0x2E34;		// R/W 20H Touch Sensor Differential AMP Sampling Register
#else
extern unsigned char xdata SUM_CH0H;
extern unsigned char xdata SUM_CH0L;
extern unsigned char xdata SUM_CH1H;
extern unsigned char xdata SUM_CH1L;
extern unsigned char xdata SUM_CH2H;
extern unsigned char xdata SUM_CH2L;
extern unsigned char xdata SUM_CH3H;
extern unsigned char xdata SUM_CH3L;
extern unsigned char xdata SUM_CH4H;
extern unsigned char xdata SUM_CH4L;
extern unsigned char xdata SUM_CH5H;
extern unsigned char xdata SUM_CH5L;
extern unsigned char xdata SUM_CH6H;
extern unsigned char xdata SUM_CH6L;
extern unsigned char xdata SUM_CH7H;
extern unsigned char xdata SUM_CH7L;

extern unsigned char xdata SCO0_H;
extern unsigned char xdata SCO0_L;
extern unsigned char xdata SCO1_H;
extern unsigned char xdata SCO1_L;
extern unsigned char xdata SCO2_H;
extern unsigned char xdata SCO2_L;
extern unsigned char xdata SCO3_H;
extern unsigned char xdata SCO3_L;
extern unsigned char xdata SCO4_H;
extern unsigned char xdata SCO4_L;
extern unsigned char xdata SCO5_H;
extern unsigned char xdata SCO5_L;
extern unsigned char xdata SCO6_H;
extern unsigned char xdata SCO6_L;
extern unsigned char xdata SCO7_H;
extern unsigned char xdata SCO7_L;

extern unsigned char xdata TS_CON;
extern unsigned char xdata TS_MODE;
extern unsigned char xdata TS_SUM_CNT;
extern unsigned char xdata TS_CH_SEL;
extern unsigned char xdata TS_SLP_CR;
extern unsigned char xdata TS_INTEG_CNT;
extern unsigned char xdata TS_FREQ_NUM;
extern unsigned char xdata TS_FREQ_DEL;
extern unsigned char xdata TS_CLK_CFG;
extern unsigned char xdata TRIM_OSC;
extern unsigned char xdata TRIM_A_OSC;
extern unsigned char xdata SCI;
extern unsigned char xdata SCC;
extern unsigned char xdata SVREF;
extern unsigned char xdata TAR;
extern unsigned char xdata TRST;
extern unsigned char xdata TDRV;
extern unsigned char xdata TINT;
extern unsigned char xdata TD;
#endif

//======================================================
// ADC Control
//======================================================
#ifdef MAIN
//unsigned char xdata SUM_CH0H _at_ 0x2E00;	// R 00H A/D Converter Data High Register
//unsigned char xdata SUM_CH0L _at_ 0x2E01;	// R 00H A/D Converter Data Low Register
//unsigned char xdata TS_CON _at_ 0x2E20;		// R/W 00H A/D Converter Control Register
//unsigned char xdata TS_MODE _at_ 0x2E21;	// R/W 10H A/D Converter Mode Register
unsigned char xdata ADC_CH_SELH _at_ 0x2E25;// R/W 00H- A/D Converter Channel Selection High-Byte Register
unsigned char xdata ADC_CH_SELL _at_ 0x2E26;// R/W 00H- A/D Converter Channel Selection Low-Byte Register
//unsigned char xdata TS_CLK_CFG _at_ 0x2E2A;	// R/W 20H A/D Converter Clock Configuration Register
//unsigned char xdata TRIM_A_OSC _at_ 0x2E2C;	// R/W FFH A/D Converter RING OSC. Trimming Register
#else
//extern unsigned char xdata SUM_CH0H;
//extern unsigned char xdata SUM_CH0L;
//extern unsigned char xdata TS_CON;
//extern unsigned char xdata TS_MODE;
extern unsigned char xdata ADC_CH_SELH;
extern unsigned char xdata ADC_CH_SELL;
//extern unsigned char xdata TS_CLK_CFG;
//extern unsigned char xdata TRIM_A_OSC;
#endif

//======================================================
// Power, Reset Control
//======================================================
sfr			PCON		= 0x87;			// Power Control Register
sfr			BODR		= 0x86;			// BOD status Register
sfr			LDOCR		= 0x8F;			// R/W 00H LDO Control Register

//======================================================
// Flash Control
//======================================================
sfr			FEMR		= 0xEA;			// Flash Mode Register
sfr			FECR		= 0xEB;			// Flash Control Register
sfr			FESR		= 0xEC;			// Flash Status Register
sfr			FETCR		= 0xED;			// Flash Time Control Register
sfr			FSADRL		= 0xF2;			// Flash Sector Address Low Register
sfr			FSADRM		= 0xF3;			// Flash Sector Address Middle Register
sfr			FSADRH		= 0xF4;			// Flash Sector Address High Register

//======================================================
// Fundamental Registers
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr16		DPTR		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr16		DPTR1		= 0x84;
sfr			DPL1		= 0x84;
sfr			DPH1		= 0x85;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_A96T346_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
