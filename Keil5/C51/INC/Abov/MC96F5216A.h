//======================================================
//		file name: MC96F5216A.h
//		device   : MC96F5216A, MC96F5416A
//		version  : Ver1.0  
//		date     : 2014-11-01
//		compiler : Keil-C
//======================================================

#include	<intrins.h>

#ifndef _MC96F5216A_
#define _MC96F5216A_

sfr			SP			= 0x81;			// R/W Stack Pointer
sfr			DPL			= 0x82;			// R/W Data Pointer Register Low
sfr			DPH			= 0x83;			// R/W Data Pointer Register High
sfr			SYNC_GEN_CON	= 0x84;		// R/W SYNC_GEN Control Register
sfr			SCCR		= 0x85;			// R/W System Clock Control Register
sfr			BODR		= 0x86;			// R/W BOD Control Register
sfr			PCON		= 0x87;			// R/W Power Control Register
sfr			P0			= 0x88;			// R/W Port 0 Data Register
sfr			P0IO		= 0x89;			// R/W Port 0 Direction Register
sfr			P0PU		= 0x8A;			// R/W Port 0 Pull-up Resistor Option Register
sfr			P0OD		= 0x8B;			// R/W Port 0 Open Drain Register
sfr			P0DB		= 0x8C;			// R/W Port 0 Debounce Register
sfr			XINT_EN		= 0x8D;			// R/W External Interrupt Enable Register
sfr			XINT_EDGE	= 0x8E;			// R/W External Interrupt Edge Selection Register
sfr			P1			= 0x90;			// R/W Port 1 Data Register
sfr			P1IO		= 0x91;			// R/W Port 1 Direction Register
sfr			P1PU		= 0x92;			// R/W Port 1 Pull-up Resistor Option Register
sfr			P1OD		= 0x93;			// R/W Port 1 Open Drain Register
sfr			P1DB		= 0x94;			// R/W Port 1 Debounce Register
sfr			WDTMR		= 0x96;			// R/W Watch Dog Timer Mode Register
sfr			WDTR		= 0x97;			// W   Watch Dog Timer Register
sfr			WDTCR		= 0x97;			// R   Watch Dog Timer Counter Register
sfr			CCCVR		= 0x98;			// R/W CC/CV Control Register
sfr			CPCON		= 0x99;			// R/W Charge Pump Control Register
sfr			CLK1SEL		= 0x9A;			// R/W Charge Pump Clock Selection Register
sfr			WTR			= 0x9B;			// R/W Watch Timer Register
sfr			WTMR		= 0x9C;			// R/W Watch Timer Mode Register
sfr			IE			= 0x9D;			// R/W Interrupt Enable Register 0
sfr			IE1			= 0x9E;			// R/W Interrupt Enable Register 1
sfr			IE2			= 0x9F;			// R/W Interrupt Enable Register 2
sfr			IRQ0		= 0xA0;			// R/W Interrupt Request Register 0
sfr			IP0			= 0xA1;			// R/W Interrupt Priority Control Register 0
sfr			EO			= 0xA2;			// R/W Extended Operation Register
sfr			T0MR		= 0xA3;			// R/W Timer 0 Mode Control Register
sfr			T0RH		= 0xA4;			// R/W Timer 0 Register High
sfr			T0RL		= 0xA5;			// R/W Timer 0 Register Low
sfr			IRQ1		= 0xA8;			// R/W Interrupt Request Register 1
sfr			T1MR		= 0xA9;			// R/W Timer 1 Mode Control Register
sfr			T1R			= 0xAA;			// R/W Timer 1 Register
sfr			IP1			= 0xAC;			// R/W Interrupt Priority Control Register 1
sfr			ADCM		= 0xAD;			// R/W ADC Mode Register
sfr			ADCM2		= 0xAE;			// W   ADC Mode Register 2
sfr			ADCRH		= 0xAE;			// R   ADC Data Register High
sfr			ADCRL		= 0xAF;			// R/W ADC Data Register Low
sfr			IRQ2		= 0xB0;			// R/W Interrupt Request Register 2
sfr			T2MR		= 0xB1;			// R/W Timer 2 Mode Control Register
sfr			T2R			= 0xB2;			// R/W Timer 2 Register
sfr			T3MR		= 0xB3;			// R/W Timer 3 Mode Control Register
sfr			T3R			= 0xB4;			// R/W Timer 3 Register
sfr			PSR1		= 0xB6;			// R/W Port Selection Register 1
sfr			PSR0		= 0xB7;			// R/W Port Selection Register 0
sfr			P2			= 0xB8;			// R/W Port 2 Data Register
sfr			P2IO		= 0xB9;			// R/W Port 2 Direction Register
sfr			P2PU		= 0xBA;			// R/W Port 2 Pull-up Resistor Option Register
sfr			P2OD		= 0xBB;			// R/W Port 2 Open Drain Register
sfr			P2DB		= 0xBC;			// R/W Port 2 Debounce Register
sfr			XBANK		= 0xC3;			// R/W XRAM Bank Register
sfr			DSP_CNTL	= 0xC8;			// R/W DSP Control Register
sfr			DSP_INST	= 0xC9;			// R/W DSP Instruction Register
sfr			DSP_ADDR	= 0xCA;			// R/W DSP Address Register
sfr			DSP_DMA_SIZE	= 0xCB;		// R/W DSP DMA Size Register
sfr			DSP_CONF_SUB	= 0xCC;		// R/W DSP CONF SUB Register
sfr			DSP_CONF_DIV	= 0xCD;		// R/W DSP CONF DIV Register
sfr			DSC_CONF_DIV_CP	= 0xCE;		// R/W DSP CONF DIV CP Register
sfr			T4L			= 0xCF;			// R/W Timer 4 Data Low Register
sfr			PSW			= 0xD0;			// R/W Program Status Word Register
sfr			FUSE_VDCCAL	= 0xD1;			// R   VDC Calibration Data
sfr			FUSE_VDCVAL	= 0xD2;			// R/W VDC Measurement Data
sfr			FUSE_CPCAL	= 0xD3;			// R/W Charge Pump Calibration Data
sfr			FUSE_CCCV0	= 0xD4;			// R   CCCV Calibration Data 0
sfr			FUSE_CCCV1	= 0xD5;			// R   CCCV Calibration Data 1
sfr			FUSE_PKG36	= 0xD6;			// R   36 Pin PKG Option Data
sfr			IR_DEC_ADDR	= 0xD7;			// R/W IR Decoding Address Register
sfr			IR_DEC_DATA	= 0xD8;			// R/W IR Decoding Data Register
sfr			FUSE_OSCCAL2	= 0xD9;		// R/W Internal Oscillator Trimming Data 2
sfr			ACC			= 0xE0;			// R/W Accumulator Register
sfr			FUSE_OSCCAL1	= 0xE1;		// R/W Internal Oscillator Trimming Data 1
sfr			I2C_SDHR	= 0xE2;			// R/W I2C SDA Hold Time Register
sfr			I2C_SCLHR	= 0xE3;			// R/W I2C SCL High Period Register
sfr			I2C_SCLLR	= 0xE4;			// R/W I2C SCL Low Period Register
sfr			I2C_CR		= 0xE5;			// R/W I2C Mode Control Register
sfr			I2C_SAR		= 0xE6;			// R/W I2C Slave Address Register
sfr			I2C_DR		= 0xE7;			// R/W I2C Data Register
sfr			I2C_SR		= 0xE8;			// R   I2C Status Register
sfr			FUSE_CONF0	= 0xE9;			// R   FUSE Conf 0 Register
sfr			FEMR		= 0xEA;			// R/W Flash and EEPROM Mode Register
sfr			FECR		= 0xEB;			// R/W Flash and EEPROM Control Register
sfr			FESR		= 0xEC;			// R/W Flash and EEPROM Status Register
sfr			FETCR		= 0xED;			// R/W Flash and EEPROM Timer Control Register
sfr			B			= 0xF0;			// R/W B Register
sfr			FEARL		= 0xF2;			// W   Flash and EEPROM Address Low Register
sfr			FEARM		= 0xF3;			// W   Flash and EEPROM Address Middle Register
sfr			FEARH		= 0xF4;			// W   Flash and EEPROM Address High Register
sfr			FEDR		= 0xF5;			// R/W Flash and EEPROM Data Register
sfr			FETR		= 0xF6;			// R/W Flash and EEPROM Test Register
sfr			BLU_LED_CON	= 0xF8;			// R/W BLU LED Control Register
sfr			SYNC_GEN_CON2	= 0xF9;		// R/W SYNC_GEN Control Register 2
sfr			CRC_CON		= 0xFA;			// R/W CRC Control Register
sfr			CRC_DIN		= 0xFB;			// R/W CRC Data Register
sfr			CRC_H		= 0xFC;			// R/W CRC Register High
sfr			CRC_L		= 0xFD;			// R/W CRC Register Low
sfr			TESTL		= 0xFE;			// R/W Function Test Register Low
sfr			TESTH		= 0xFF;			// R/W Function Test Register High

#endif	//_MC96F5216A_ 

#define		cli()		do{IE &= ~0x80;}while(0)
#define		sei()		do{IE |=  0x80;}while(0)
#define		NOP			_nop_()
