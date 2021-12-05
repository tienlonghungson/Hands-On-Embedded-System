//======================================================
//	file name	: MC93F5516.h
//	device		: MC93F5516 (24)
//	version		: Ver1.2
//	date		: 2015-10-01.Thu
//======================================================

#include	<intrins.h>

#ifndef		_MC93F5516_
#define		_MC93F5516_

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
	
#ifdef MAIN
unsigned char xdata P0IO _at_ 0x1006;	// P0 I/O Direction Register
unsigned char xdata P0PU _at_ 0x1009;	// P0 Pull-up Resistor Selection Register
unsigned char xdata P0DB _at_ 0x100C;	// P0 Debounce Enable Register
#else
extern unsigned char xdata P0IO;
extern unsigned char xdata P0PU;
extern unsigned char xdata P0DB;
#endif

// PORT1
sfr			P1			= 0x90;			// P1 Data Register
	sbit	P10			= 0x90;
	sbit	P11			= 0x91;
	sbit	P12			= 0x92;
	sbit	P13			= 0x93;
	sbit	P14			= 0x94;
	sbit	P15			= 0x95;
	sbit	P16			= 0x96;
	sbit	P17			= 0x97;
	
#ifdef MAIN
unsigned char xdata P1IO _at_ 0x1007;	// P1 I/O Direction Register
unsigned char xdata P1PU _at_ 0x100A;	// P1 Pull-up Resistor Selection Register
unsigned char xdata P1DB _at_ 0x100D;	// P1 Debounce Enable Register
#else
extern unsigned char xdata P1IO;
extern unsigned char xdata P1PU;
extern unsigned char xdata P1DB;
#endif

// PORT2
sfr			P2			= 0xA0;			// P2 Data Register
	sbit	P20			= 0xA0;
	sbit	P21			= 0xA1;
	sbit	P22			= 0xA2;
	sbit	P23			= 0xA3;
	sbit	P24			= 0xA4;
	sbit	P25			= 0xA5;
	sbit	P26			= 0xA6;
	sbit	P27			= 0xA7;

#ifdef MAIN
unsigned char xdata P2IO _at_ 0x1008;	// P2 I/O Direction Register
unsigned char xdata P2PU _at_ 0x100B;	// P2 Pull-up Resistor Selection Register
unsigned char xdata P2DB _at_ 0x100E;	// P2 Debounce Enable Register
#else
extern unsigned char xdata P2IO;
extern unsigned char xdata P2PU;
extern unsigned char xdata P2DB;
#endif

// PORT SFR
#ifdef MAIN
unsigned char xdata P0FSRH _at_ 0x1000;	// P0 Port Function Selection Register MSB
unsigned char xdata P0FSRL _at_ 0x1001;	// P0 Port Function Selection Register LSB
unsigned char xdata P1FSRH _at_ 0x1002;	// P1 Port Function Selection Register MSB
unsigned char xdata P1FSRL _at_ 0x1003;	// P2 Port Function Selection Register LSB
unsigned char xdata P2FSRH _at_ 0x1004;	// P3 Port Function Selection Register MSB
unsigned char xdata P2FSRL _at_ 0x1005;	// P3 Port Function Selection Register LSB
#else
extern unsigned char xdata P0FSRH;
extern unsigned char xdata P0FSRL;
extern unsigned char xdata P1FSRH;
extern unsigned char xdata P1FSRL;
extern unsigned char xdata P2FSRH;
extern unsigned char xdata P2FSRL;
#endif

//======================================================
// Interrupt Control
//======================================================
sfr			IE			= 0x85;			// Interrupt Enable Register
sfr			IE1			= 0x86;			// Interrupt Enable Register 1
sfr			IRQ0		= 0xB0;			// Interrupt Request Register 0
sfr			IRQ1		= 0xC0;			// Interrupt Request Register 1
sfr			INT_OFFSET	= 0x85;			// Interrupt Offset Register
sfr			XINT_SRC	= 0xE5;			// External Interrupt Status Register

#ifdef MAIN
unsigned char xdata XINT_EDGE_P _at_ 0x1011;	// External Interrupt Positive Edge Selection Register
unsigned char xdata XINT_EDGE_N _at_ 0x1012;	// External Interrupt Negative Edge Selection Register
unsigned char xdata XINT_SRC_P _at_ 0x1015;	// External Interrupt Status Positive Edge Register
unsigned char xdata XINT_SRC_N _at_ 0x1016;	// External Interrupt Status Negative Edge Register
#else
extern unsigned char xdata XINT_EDGE_P;
extern unsigned char xdata XINT_EDGE_N;
extern unsigned char xdata XINT_SRC_P;
extern unsigned char xdata XINT_SRC_N;
#endif

//======================================================
// Clock Control and Power Saving
//======================================================
sfr			SYSCON_AR	= 0x84;			// System Control Authorization Register
sfr			SCCR		= 0x86;			// System Clock Control Register
sfr			PCON		= 0x87;			// Power Control Register

//======================================================
//  Watch Dog Timer Control 
//======================================================
sfr			WDTMR		= 0x92;			// WDT Mode Register
sfr			WDTR		= 0x93;			// WDT Data register

//======================================================
// Timer Control
//======================================================
// Timer 0 Control
sfr			T0MR		= 0xA3;			// Timer 0 Mode Control Register
sfr			T0RH		= 0xA4;			// Timer 0 High Data Register
sfr			T0RL		= 0xA5;			// Timer 0 Low Data Register
sfr			T0CL		= 0xA6;			// Timer 0 Capture Data Register
sfr			T0CH		= 0xA7;			// Timer 0 Capture Data Register

// Timer 1 Control
sfr			T1MR		= 0xC6;			// Timer 1 Mode Control Register
sfr			T1R			= 0xC7;			// Timer 1 Capture Data Register

//======================================================
// I2C Control
//======================================================
sfr			I2C_SDHR	= 0xEE;			// SDA Hold Time Register
sfr			I2C_SCLHR	= 0xED;			// SCL High Period Register
sfr			I2C_SCLLR	= 0xEC;			// SCL Low Period Register
sfr			I2C_CR		= 0xEB;			// I2C Mode Control Register
sfr			I2C_SAR		= 0xEA;			// I2C Slave Address Register
sfr			I2C_DR		= 0xE9;			// I2C Data Register
sfr			I2C_SR		= 0xE8;			// I2C Status Register

//======================================================
// SPI Control
//======================================================
// SPI slave Control
sfr			SPI_SL_CON	= 0xB8;			// SPI Slave Control Register
sfr			SPI_SL_CON2	= 0xB9;			// SPI Slave Control Register 2
sfr			SPI_SL_CONF	= 0xC1;			// SPI Slave Configuration Register

#ifdef MAIN
unsigned char xdata SPI_SL_CONF2 _at_ 0x1014;	// SPI Slave Configuration Register 2
#else
extern unsigned char xdata SPI_SL_CONF2;
#endif

sfr			SPI_SL_DATA_L	= 0xBE;		// SPI Salve Data Low Register
sfr			SPI_SL_DATA_H	= 0xBF;		// SPI Salve Data High Register
sfr			SPI_SL_DPTR_HEAD_L	= 0xBA;	// SPI Slave DMA HEAD DPTR High Register
sfr			SPI_SL_DPTR_HEAD_H	= 0xBB;	// SPI Slave DMA HEAD DPTR Low Register
sfr			SPI_SL_DPTR_BODY_L	= 0xBC;	// SPI Slave DMA BODY DPTR High Register
sfr			SPI_SL_DPTR_BODY_H	= 0xBD;	// SPI Slave DMA BODY DPTR Low Register
sfr			SPI_SL_CHECKSUM_L	= 0xC4;	// SPI Slave Checksum High Register
sfr			SPI_SL_CHECKSUM_H	= 0xC5;	// SPI Salve Checksum Low Register
sfr			SPI_SL_BODY_N		= 0xC2;	// SPI Slave Body Length Register

// SPI master Control
sfr			SPI_MA_CON	= 0xA8;			// SPI Master Control Register
sfr			SPI_MA_CON2	= 0xA9;			// SPI Master Control Register 2
sfr			SPI_MA_CONF	= 0xB1;			// SPI Master Configuration Register

#ifdef MAIN
unsigned char xdata SPI_MA_CONF2 _at_ 0x1014;	// SPI Master Configuration Register 2
#else
extern unsigned char xdata SPI_MA_CONF2;
#endif

sfr			SPI_MA_CLK_CON	= 0xB3;		// SPI Master Clock Control Register
sfr			SPI_MA_DATA_L	= 0xAE;		// SPI Master Data High Register
sfr			SPI_MA_DATA_H	= 0xAF;		// SPI Master Data Low Register
sfr			SPI_MA_DPTR_HEAD_L	= 0xAA;	// SPI Master DMA TX DPTR High Register
sfr			SPI_MA_DPTR_HEAD_H	= 0xAB;	// SPI Master DMA TX DPTR Low Register
sfr			SPI_MA_DPTR_BODY_L	= 0xAC;	// SPI Master DMA RX DPTR High Register
sfr			SPI_MA_DPTR_BODY_H	= 0xAD;	// SPI Master DMA RX DPTR Low Register
sfr			SPI_MA_DPTR_IADR_L	= 0xB6;	// SPI Master DMA Indirect Addressing DPTR Low Register
sfr			SPI_MA_DPTR_IADR_H	= 0xB7;	// SPI Master DMA Indirect Addressing DPTR High Register
sfr			SPI_MA_CHECKSUM_L	= 0xB4;	// SPI Master Checksum High Register
sfr			SPI_MA_CHECKSUM_H	= 0xB5;	// SPI Master Data Low Register
sfr			SPI_MA_BODY_N	= 0xB2;		// SPI Master Body Number Register

//======================================================
// ADC Contol
//======================================================
sfr			ADC_CON		= 0xD8;			// A/D Converter Control Register
sfr			ADC_MODE	= 0xFD;			// A/D Converter Mode Register
sfr			ADC_DATA	= 0xE6;			// A/D Converter Result register

//======================================================
// PWM Contol
//======================================================
sfr			CNT_PWM_CON	= 0x88;			// PWM Counter Controller
sfr			CNT_PWM_OVF_L	= 0x8B;		// Overflow Counter Low
sfr			CNT_PWM_OVF_M	= 0x8C;		// Overflow Counter Middle
sfr			CNT_PWM_OVF_H	= 0x8D;		// Overflow Counter High
sfr			CNT_PWM_DUTY_L	= 0x8E;		// PWM Duty Register Low
sfr			CNT_PWM_DUTY_H	= 0x8F;		// PWM Duty Register High
sfr			CNT_PWM_CDIV_L	= 0x89;		// PWM Custom Divider Low
sfr			CNT_PWM_PERIOD_L	= 0x89;	// PWM Period Low(4 bit right shifted)
sfr			CNT_PWM_CDIV_H	= 0x8A;		// PWM Custom Divider High
sfr			CNT_PWM_PERIOD_H	= 0x8A;	// PWM Period High(4 bit right shifted)

#ifdef MAIN
unsigned char xdata PWM_DB _at_ 0x1010;	// PWM Counter Debounce Register
#else
extern unsigned char xdata PWM_DB;
#endif

//======================================================
// PWM out Contol
//======================================================
#ifdef MAIN
unsigned char xdata BLU_DPTR_SET_H _at_ 0x102A;	// BLU Data Pointer High Register
unsigned char xdata BLU_DPTR_SET_L _at_ 0x102B;	// BLU Data Pointer Low Register
unsigned char xdata PWM_SET_0_H _at_ 0x1030;	// PWM0 SET Data Register
unsigned char xdata PWM_SET_0_L _at_ 0x1031;
unsigned char xdata PWM_SET_1_H _at_ 0x1032;	// PWM1 SET Data Register
unsigned char xdata PWM_SET_1_L _at_ 0x1033;
unsigned char xdata PWM_SET_2_H _at_ 0x1034;	// PWM2 SET Data Register
unsigned char xdata PWM_SET_2_L _at_ 0x1035;
unsigned char xdata PWM_SET_3_H _at_ 0x1036;	// PWM3 SET Data Register
unsigned char xdata PWM_SET_3_L _at_ 0x1037;
unsigned char xdata PWM_SET_4_H _at_ 0x1038;	// PWM4 SET Data Register
unsigned char xdata PWM_SET_4_L _at_ 0x1039;
unsigned char xdata PWM_SET_5_H _at_ 0x103A;	// PWM5 SET Data Register
unsigned char xdata PWM_SET_5_L _at_ 0x103B;
unsigned char xdata PWM_CLR_0_H _at_ 0x1040;	// PWM0 CLR Data Register
unsigned char xdata PWM_CLR_0_L _at_ 0x1041;
unsigned char xdata PWM_CLR_1_H _at_ 0x1042;	// PWM1 CLR Data Register
unsigned char xdata PWM_CLR_1_L _at_ 0x1043;
unsigned char xdata PWM_CLR_2_H _at_ 0x1044;	// PWM2 CLR Data Register
unsigned char xdata PWM_CLR_2_L _at_ 0x1045;
unsigned char xdata PWM_CLR_3_H _at_ 0x1046;	// PWM3 CLR Data Register
unsigned char xdata PWM_CLR_3_L _at_ 0x1047;
unsigned char xdata PWM_CLR_4_H _at_ 0x1048;	// PWM4 CLR Data Register
unsigned char xdata PWM_CLR_4_L _at_ 0x1049;
unsigned char xdata PWM_CLR_5_H _at_ 0x104A;	// PWM5 CLR Data Register
unsigned char xdata PWM_CLR_5_L _at_ 0x104B;
#else
extern unsigned char xdata BLU_DPTR_SET_H;
extern unsigned char xdata BLU_DPTR_SET_L;
extern unsigned char xdata PWM_SET_0_H;
extern unsigned char xdata PWM_SET_0_L;
extern unsigned char xdata PWM_SET_1_H;
extern unsigned char xdata PWM_SET_1_L;
extern unsigned char xdata PWM_SET_2_H;
extern unsigned char xdata PWM_SET_2_L;
extern unsigned char xdata PWM_SET_3_H;
extern unsigned char xdata PWM_SET_3_L;
extern unsigned char xdata PWM_SET_4_H;
extern unsigned char xdata PWM_SET_4_L;
extern unsigned char xdata PWM_SET_5_H;
extern unsigned char xdata PWM_SET_5_L;
extern unsigned char xdata PWM_CLR_0_H;
extern unsigned char xdata PWM_CLR_0_L;
extern unsigned char xdata PWM_CLR_1_H;
extern unsigned char xdata PWM_CLR_1_L;
extern unsigned char xdata PWM_CLR_2_H;
extern unsigned char xdata PWM_CLR_2_L;
extern unsigned char xdata PWM_CLR_3_H;
extern unsigned char xdata PWM_CLR_3_L;
extern unsigned char xdata PWM_CLR_4_H;
extern unsigned char xdata PWM_CLR_4_L;
extern unsigned char xdata PWM_CLR_5_H;
extern unsigned char xdata PWM_CLR_5_L;
#endif

//======================================================
// Calculator Control
//======================================================
sfr			CALC_CON	= 0xC8;			// Calculator Control Register
sfr			CALC_SHIFT	= 0xDF;			// Calculator Shift Register
sfr			CALC_A_L	= 0xC9;			// Calculator A Register Low
sfr			CALC_A_M	= 0xCA;			// Calculator A Register Middle
sfr			CALC_A_H	= 0xCB;			// Calculator A Register High
sfr			CALC_B_L	= 0xD1;			// Calculator B Register Low
sfr			CALC_B_M	= 0xD2;			// Calculator BM Register Middle
sfr			CALC_B_H	= 0xD3;			// Calculator BM Register High
sfr			CALC_BM_L	= 0xD9;			// Calculator BM Register Low
sfr			CALC_BM_M	= 0xDA;			// Calculator B Register Middle
sfr			CALC_BM_H	= 0xDB;			// Calculator B Register High
sfr			CALC_S_L	= 0xDC;			// Calculator SAT Register Low
sfr			CALC_S_M	= 0xDD;			// Calculator SAT Register Middle
sfr			CALC_S_H	= 0xDE;			// Calculator SAT Register High
sfr			CALC_MUL_A_L	= 0xCC;		// Calculator MUL_A register Low
sfr			CALC_MUL_A_H	= 0xCD;		// Calculator MUL_A register High
sfr			CALC_MUL_O_L	= 0xCE;		// Calculator MUL_O register Low
sfr			CALC_MUL_O_H	= 0xCF;		// Calculator MUL_O register High

#ifdef MAIN
unsigned char xdata CALC_LDIM_CONF _at_ 0x1027;	// Calculator Local DIMMING Configuration
unsigned char xdata CALC_LDIM_B_H _at_ 0x1028;	// Calculator Local Dimming B High
unsigned char xdata CALC_LDIM_B_L _at_ 0x1029;	// Calculator Local Dimming B Low
#else
extern unsigned char xdata CALC_LDIM_CONF;
extern unsigned char xdata CALC_LDIM_B_H;
extern unsigned char xdata CALC_LDIM_B_L;
#endif

//======================================================
// Sync Processor Control
//======================================================
sfr			SYNC_GEN_CON	= 0x98;		// SYNC Generator Control Register
sfr			BLU_LED_CON	= 0xF8;			// LED BLU Control Register
sfr			VSYNC_I_L	= 0x99;			// VSYNC Capture Data Low Register
sfr			VSYNC_I_M	= 0x9A;			// VSYNC Capture Data Middle Register
sfr			VSYNC_I_H	= 0x9B;			// VSYNC Capture Data HIgh Register
sfr			VSYNC_CDR_L	= 0x9C;			// VSYNC Gap Capture Data Low Register
sfr			VSYNC_CDR_M	= 0x9D;			// VSYNC Gap Capture Data Middle Register
sfr			VSYNC_CDR_H	= 0x9E;			// VSYNC Gap Capture Data High Register
sfr			HSYNC_TR1_L	= 0xF9;			// HSYNC TR1 Data Low Regiser
sfr			HSYNC_TR1_H	= 0xFA;			// HSYNC TR1 Data High Regiser
sfr			HSYNC_TR2_L	= 0xFB;			// HSYNC TR2 Data Low Regiser
sfr			HSYNC_TR2_H	= 0xFC;			// HSYNC TR2 Data High Regiser

#ifdef MAIN
unsigned char xdata VSYNC_DB _at_ 0x100F;	// VSYNC Debounce Register
unsigned char xdata N_HSYNC_P_H _at_ 0x1020;	// HSYNC Number of Period High Regiser
unsigned char xdata N_HSYNC_P_L _at_ 0x1021;	// HSYNC Number of Period Low Regiser
unsigned char xdata N_HSYNC_P_LOOP _at_ 0x1022;	// N_HSYNC_P Loop Register
unsigned char xdata VSYNC_O_HIGH _at_ 0x1023;	// VSYNC Ouput High Period Data Register
unsigned char xdata VSYNC_MAX_H _at_ 0x1024;	// HSYNC MAX Data High Register
unsigned char xdata VSYNC_MAX_M _at_ 0x1025;	// HSYNC MAX Data Middle Register
unsigned char xdata VSYNC_MAX_L _at_ 0x1026;	// HSYNC MAX Data Low Register
unsigned char xdata N_VSYNC_INT_DLY _at_ 0x102C;	// Internal Vsync Delay register
#else
extern unsigned char xdata VSYNC_DB;
extern unsigned char xdata N_HSYNC_P_H;
extern unsigned char xdata N_HSYNC_P_L;
extern unsigned char xdata N_HSYNC_P_LOOP;
extern unsigned char xdata VSYNC_O_HIGH;
extern unsigned char xdata VSYNC_MAX_H;
extern unsigned char xdata VSYNC_MAX_M;
extern unsigned char xdata VSYNC_MAX_L;
extern unsigned char xdata N_VSYNC_INT_DLY;
#endif

//======================================================
// Flash Memory Control
//======================================================
sfr			FEMR		= 0xEA;			// Flash and EEPROM Mode Register
sfr			FECR		= 0xEB;			// Flash and EEPROM Control Register
sfr			FESR		= 0xEC;			// Flash and EEPROM Status Register
sfr			FETCR		= 0xED;			// Flash and EEPROM Time Control Register
sfr			FEARL		= 0xF2;			// Flash and EEPROM Address Low Register
sfr			FEARM		= 0xF3;			// Flash and EEPROM Address Middle Register
sfr			FEARH		= 0xF4;			// Flash and EEPROM Address High Register
sfr			FEDR		= 0xF5;			// Flash and EEPROM Data register

//======================================================
// Miscellany
//======================================================
sfr			ACC			= 0xE0;
sfr			B			= 0xF0;
sfr			PSW			= 0xD0;
sfr			SP			= 0x81;
sfr16		DPTR		= 0x82;
sfr			DPL			= 0x82;
sfr			DPH			= 0x83;
sfr			EO			= 0xA2;			// EXTENDED OPERATION REGISTER

#endif	//_MC93F5516_

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |= 0x80;}while(0)
#define		NOP			_nop_()
