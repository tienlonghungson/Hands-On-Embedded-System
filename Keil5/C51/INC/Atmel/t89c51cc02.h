/*H***************************************************************************
* NAME: T89C51CC02.h           
*----------------------------------------------------------------------------
* PURPOSE: inlcude file for KEIL
*****************************************************************************/
#ifndef _T89C51CC02_H_

#define _T89C51CC02_H_

#define Sfr(x, y)	  	sfr x = y
#define Sbit(x, y, z)   sbit x = y^z
#define Sfr16(x,y)	sfr16 x = y

/*----------------------------------------*/
/* Include file for 8051 SFR Definitions  */
/*----------------------------------------*/

/*  BYTE Register  */
Sfr (P1 , 0x90);	

Sbit (P1_7, 0x90, 7);
Sbit (P1_6, 0x90, 6);
Sbit (P1_5, 0x90, 5);
Sbit (P1_4, 0x90, 4);
Sbit (P1_3, 0x90, 3);
Sbit (P1_2, 0x90, 2);
Sbit (P1_1, 0x90, 1);
Sbit (P1_0, 0x90, 0);

Sfr (P2 , 0xA0);	

Sbit (P2_1 , 0xA0, 1);
Sbit (P2_0 , 0xA0, 0);


Sfr (P3 , 0xB0);	

Sbit (P3_7 , 0xB0, 7);
Sbit (P3_6 , 0xB0, 6);
Sbit (P3_5 , 0xB0, 5);
Sbit (P3_4 , 0xB0, 4);
Sbit (P3_3 , 0xB0, 3);
Sbit (P3_2 , 0xB0, 2);
Sbit (P3_1 , 0xB0, 1);
Sbit (P3_0 , 0xB0, 0);

Sbit (RD , 0xB0, 7);
Sbit (WR , 0xB0, 6);
Sbit (T1 , 0xB0, 5);
Sbit (T0 , 0xB0, 4);
Sbit (INT1, 0xB0, 3);
Sbit (INT0, 0xB0, 2);
Sbit (TXD , 0xB0, 1);
Sbit (RXD , 0xB0, 0);

Sfr (P4 , 0xC0);	

Sfr (PSW , 0xD0);	

Sbit (CY  , 0xD0, 7);
Sbit (AC  , 0xD0, 6);
Sbit (F0  , 0xD0, 5);
Sbit (RS1 , 0xD0, 4);
Sbit (RS0 , 0xD0, 3);
Sbit (OV  , 0xD0, 2);
Sbit (UD  , 0xD0, 1);
Sbit (P   , 0xD0, 0);

Sfr (ACC , 0xE0);	
Sfr (B , 0xF0);	
Sfr (SP , 0x81);	
Sfr (DPL , 0x82);	
Sfr (DPH , 0x83);	

Sfr (PCON , 0x87);	
Sfr (CKCON , 0x8F);	

/*------------------ TIMERS registers ---------------------*/
Sfr (TCON , 0x88);
Sbit (TF1 , 0x88, 7);
Sbit (TR1 , 0x88, 6);
Sbit (TF0 , 0x88, 5);
Sbit (TR0 , 0x88, 4);
Sbit (IE1 , 0x88, 3);
Sbit (IT1 , 0x88, 2);
Sbit (IE0 , 0x88, 1);
Sbit (IT0 , 0x88, 0);
	
Sfr (TMOD , 0x89);	

Sfr  (T2CON , 0xC8);
Sbit (TF2   , 0xC8, 7);
Sbit (EXF2  , 0xC8, 6);
Sbit (RCLK  , 0xC8, 5);
Sbit (TCLK  , 0xC8, 4);
Sbit (EXEN2 , 0xC8, 3);
Sbit (TR2   , 0xC8, 2);
Sbit (C_T2  , 0xC8, 1);
Sbit (CP_RL2, 0xC8, 0);
	
Sfr (T2MOD , 0xC9);	
Sfr (TL0 , 0x8A);	
Sfr (TL1 , 0x8B);	
Sfr (TL2 , 0xCC);	
Sfr (TH0 , 0x8C);	
Sfr (TH1 , 0x8D);	
Sfr (TH2 , 0xCD);	
Sfr (RCAP2L , 0xCA);	
Sfr (RCAP2H , 0xCB);	
Sfr (WDTRST , 0xA6);	
Sfr (WDTPRG , 0xA7);	


/*------------------- UART registers ------------------------*/
Sfr (SCON , 0x98);	
Sbit (SM0  , 0x98, 7);
Sbit (FE   , 0x98, 7);
Sbit (SM1  , 0x98, 6);
Sbit (SM2  , 0x98, 5);
Sbit (REN  , 0x98, 4);
Sbit (TB8  , 0x98, 3);
Sbit (RB8  , 0x98, 2);
Sbit (TI   , 0x98, 1);
Sbit (RI   , 0x98, 0);

Sfr (SBUF , 0x99);	
Sfr (SADEN , 0xB9);	
Sfr (SADDR , 0xA9);	

/*-------------------- ADC registers ----------------------*/
Sfr (ADCLK , 0xF2);	
Sfr (ADCON , 0xF3);	
#define MSK_ADCON_PSIDLE 0x40
#define MSK_ADCON_ADEN   0x20
#define MSK_ADCON_ADEOC  0x10
#define MSK_ADCON_ADSST  0x08
#define MSK_ADCON_SCH    0x07
Sfr (ADDL , 0xF4);	
#define MSK_ADDL_UTILS	 0x03
Sfr (ADDH , 0xF5);	
Sfr (ADCF , 0xF6);	

/*-------------------- FLASH EEPROM registers ------------*/
Sfr (FCON  , 0xD1);	
#define MSK_FCON_FBUSY 0x01
#define MSK_FCON_FMOD  0x06
#define MSK_FCON_FPS   0x08
#define MSK_FCON_FPL   0xF0
Sfr (EECON  , 0xD2);	
#define MSK_EECON_EEBUSY 0x01
#define MSK_EECON_EEE    0x02
#define MSK_EECON_EEPL   0xF0
Sfr (AUXR  , 0x8E);	
#define MSK_AUXR_M0      0x20
Sfr (AUXR1  , 0xA2);	
#define MSK_AUXR1_ENBOOT 0x20
/*-------------------- IT registers -----------------------*/
Sfr (IPL1 , 0xF8);	
Sfr (IPH1 , 0xF7);	
Sfr (IEN0  , 0xA8);	
Sfr (IPL0 , 0xB8);	
Sfr (IPH0 , 0xB7);	
Sfr (IEN1  , 0xE8);	

/*  IEN0  */
Sbit (EA   , 0xA8, 7);
Sbit (EC   , 0xA8, 6);
Sbit (ET2  , 0xA8, 5);
Sbit (ES   , 0xA8, 4);
Sbit (ET1  , 0xA8, 3);
Sbit (EX1  , 0xA8, 2);
Sbit (ET0  , 0xA8, 1);
Sbit (EX0  , 0xA8, 0);

/*  IEN1  */
Sbit (ETIM , 0xE8, 2);
Sbit (EADC , 0xE8, 1);
Sbit (ECAN , 0xE8, 0);

/*--------------------- PCA registers --------------------*/
Sfr (CCON , 0xD8);	
Sbit(CF  , 0xD8, 7);
Sbit(CR  , 0xD8, 6);
Sbit(CCF4, 0xD8, 4);
Sbit(CCF3, 0xD8, 3);
Sbit(CCF2, 0xD8, 2);
Sbit(CCF1, 0xD8, 1);
Sbit(CCF0, 0xD8, 0);

Sfr (CMOD , 0xD9);	
Sfr (CH , 0xF9);	
Sfr (CL , 0xE9);	
Sfr (CCAP0H  , 0xFA);	
Sfr (CCAP0L  , 0xEA);	
Sfr (CCAPM0  , 0xDA);	
Sfr (CCAP1H  , 0xFB);	
Sfr (CCAP1L  , 0xEB);	
Sfr (CCAPM1  , 0xDB);	
Sfr (CCAP2H  , 0xFC);	
Sfr (CCAP2L  , 0xEC);	
Sfr (CCAPM2  , 0xDC);	
Sfr (CCAP3H  , 0xFD);	
Sfr (CCAP3L  , 0xED);	
Sfr (CCAPM3  , 0xDD);	
Sfr (CCAP4H  , 0xFE);	
Sfr (CCAP4L  , 0xEE);	
Sfr (CCAPM4  , 0xDE);	

/*------------------- CAN registers --------------------------*/
Sfr (CANGIT , 0x9B);
#define MSK_CANGIT_CANIT	0x80
#define MSK_CANGIT_OVRTIM       0x20
#define MSK_CANGIT_OVRBUF	0x10	
#define MSK_CANGIT_SERG		0x08
#define MSK_CANGIT_CERG		0x04
#define MSK_CANGIT_FERG		0x02
#define MSK_CANGIT_AERG		0x01

Sfr (CANTEC , 0x9C);	
Sfr (CANREC , 0x9D);	
Sfr (CANTCON , 0xA1);	
Sfr (CANMSG , 0xA3);	
Sfr (CANTTCL , 0xA4);	
Sfr (CANTTCH , 0xA5);	
Sfr (CANGSTA , 0xAA);	
#define MSK_CANGSTA_OVFG	0x40
#define MSK_CANGSTA_TBSY	0x10
#define MSK_CANGSTA_RBSY	0x08
#define MSK_CANGSTA_ENFG	0x04
#define MSK_CANGSTA_BOFF	0x02
#define MSK_CANGSTA_ERRP	0x01

Sfr (CANGCON , 0xAB);	
#define MSK_CANGCON_ABRQ   	0x80
#define MSK_CANGCON_OVRQ   	0x40
#define MSK_CANGCON_TTC   	0x20
#define MSK_CANGCON_SYNCTTC     0x10
#define TTC_EOF                 0x10
#define TTC_SOF		        0x00
#define MSK_CANGCON_AUTBAUD     0x08
#define MSK_CANGCON_ENA  	0x02
#define MSK_CANGCON_GRES 	0x01


Sfr (CANTIML , 0xAC);	
Sfr (CANTIMH , 0xAD);	
Sfr (CANSTMPL , 0xAE);	
Sfr (CANSTMPH , 0xAF);	
Sfr (CANPAGE , 0xB1);	
Sfr (CANSTCH , 0xB2);	
#define MSK_CANSTCH_DLCW  0x80
#define MSK_CANSTCH_TxOk  0x40
#define MSK_CANSTCH_RxOk  0x20
#define MSK_CANSTCH_BERR  0x10
#define MSK_CANSTCH_SERR  0x08
#define MSK_CANSTCH_CERR  0x04
#define MSK_CANSTCH_FERR  0x02
#define MSK_CANSTCH_AERR  0x01

Sfr (CANCONCH , 0xB3);	
#define MSK_CANCONCH_IDE  0x10
#define MSK_CANCONCH_DLC  0x0F
#define MSK_CANCONCH_CONF 0xC0
#define DLC_MAX    8
#define CH_DISABLE 0x00
#define CH_RxENA   0x80
#define CH_TxENA   0x40
#define CH_RxBENA  0xC0

Sfr (CANBT1 , 0xB4);
#define CAN_PRESCALER_MIN  0
#define CAN_PRESCALER_MAX  63
	
Sfr (CANBT2 , 0xB5);
#define MSK_CANBT2_SJW  0x60
#define MSK_CANBT2_PRS  0x0E
#define CAN_SJW_MIN  0
#define CAN_SJW_MAX  3
#define CAN_PRS_MIN  0
#define CAN_PRS_MAX  7
	
Sfr (CANBT3 , 0xB6);
#define MSK_CANBT3_PHS2 0x70
#define MSK_CANBT3_PHS1 0x0E
#define CAN_PHS2_MIN 0
#define CAN_PHS2_MAX 7
#define CAN_PHS1_MIN 0
#define CAN_PHS1_MAX 7
	
Sfr (CANSIT , 0xBB);	
Sfr (CANIDT1 , 0xBC);	
Sfr (CANIDT2 , 0xBD);	
Sfr (CANIDT3 , 0xBE);	
Sfr (CANIDT4 , 0xBF);	
#define MSK_CANIDT4_RTRTAG 0x04

Sfr (CANGIE , 0xC1);	
#define MSK_CANGIE_ENRX    0x20
#define MSK_CANGIE_ENTX    0x10
#define MSK_CANGIE_ENERCH  0x08
#define MSK_CANGIE_ENBUF   0x04
#define MSK_CANGIE_ENERG   0x02

Sfr (CANIE , 0xC3);	
Sfr (CANIDM1 , 0xC4);	
Sfr (CANIDM2 , 0xC5);	
Sfr (CANIDM3 , 0xC6);	
Sfr (CANIDM4 , 0xC7);
#define MSK_CANIDM4_RTRMSK 0x04
#define MSK_CANIDM4_IDEMSK 0x01 
	
Sfr (CANEN , 0xCF);	

#endif

