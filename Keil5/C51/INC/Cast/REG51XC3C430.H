/*--------------------------------------------------------------------------
S8051XC3C430.H

Header file for S8051XC3-C microcontroller with 430-like Dual DPTR.
--------------------------------------------------------------------------*/

#ifndef __REG51XC3C430_H__
#define __REG51XC3C430_H__

/*  BYTE Register  */
sfr P0    = 0x80; 
sfr P1    = 0x90; 
sfr P2    = 0xA0; 
sfr P3    = 0xB0; 
sfr PSW   = 0xD0; 
sfr ACC   = 0xE0; 
sfr B     = 0xF0; 
sfr SP    = 0x81; 
sfr DPL   = 0x82; 
sfr DPH   = 0x83; 
sfr PCON  = 0x87; 
sfr TCON  = 0x88; 
sfr TMOD  = 0x89; 
sfr TL0   = 0x8A; 
sfr TL1   = 0x8B; 
sfr TH0   = 0x8C; 
sfr TH1   = 0x8D; 
sfr IEN0  = 0xA8; 
sfr IPL0  = 0xB8; 
sfr IEN1  = 0xE6;
sfr IEN2  = 0xE7;
sfr IPH0  = 0xB7;
sfr IPL1  = 0xF6; 
sfr IPH1  = 0xF5;
sfr IPL2  = 0xF4; 
sfr IPH2  = 0xF3;
sfr SCON  = 0x98; 
sfr SBUF  = 0x99; 
sfr SADDR = 0xA9; 
sfr SADEN = 0xB9; 
sfr SMB0CN =0xC0;
sfr SMB0CF =0xC1;
sfr SMB0DAT=0xC2;

sfr DPS   = 0x86;

sfr IRCON1= 0x91;
sfr IRCON2= 0xE1;
sfr PMOD  = 0x97;
sfr SDR   = 0x8F;
sfr SP0CNFG=0xA1;
sfr SP0CKR =0xA2;
sfr SP0DAT =0xA3;
sfr SP0CTRL=0xF8;
sfr T2CON  =0xC8;
sfr T2MOD  =0xC9;
sfr RCAP2L =0xCA;
sfr RCAP2H =0xCB;
sfr TL2    =0xCC;
sfr TH2    =0xCD;
sfr CCON   =0xD8;
sfr CMOD   =0xD9;
sfr CCAPM0 =0xDA;
sfr CCAPM1 =0xDB;
sfr CCAPM2 =0xDC;
sfr CCAPM3 =0xDD;
sfr CCAPM4 =0xDE;
sfr CL     =0xE9;
sfr CH     =0xF9;
sfr CCAP0L =0xEA;
sfr CCAP1L =0xEB;
sfr CCAP2L =0xEC;
sfr CCAP3L =0xED;
sfr CCAP4L =0xEE;
sfr CCAP0H =0xFA;
sfr CCAP1H =0xFB;
sfr CCAP2H =0xFC;
sfr CCAP3H =0xFD;
sfr CCAP4H =0xFE;
sfr WDTRST =0xA6;

/*  BIT Register  */
/*  PSW   */
sbit CY   = 0xD7;
sbit AC   = 0xD6;
sbit F0   = 0xD5;
sbit RS1  = 0xD4;
sbit RS0  = 0xD3;
sbit OV   = 0xD2;
sbit P    = 0xD0;

/*  TCON  */
sbit TF1  = 0x8F;
sbit TR1  = 0x8E;
sbit TF0  = 0x8D;
sbit TR0  = 0x8C;
sbit IE1  = 0x8B;
sbit IT1  = 0x8A;
sbit IE0  = 0x89;
sbit IT0  = 0x88;

/*  IEN0  */
sbit EA   = 0xAF;
sbit EC   = 0xAE;
sbit ET2  = 0xAD;
sbit ES   = 0xAC;
sbit ET1  = 0xAB;
sbit EX1  = 0xAA;
sbit ET0  = 0xA9;
sbit EX0  = 0xA8;

/*  IPL0  */ 
sbit PC   = 0xBE;
sbit PT2  = 0xBD;
sbit PS   = 0xBC;
sbit PT1  = 0xBB;
sbit PX1  = 0xBA;
sbit PT0  = 0xB9;
sbit PX0  = 0xB8;

/*  SCON  */
sbit SM0  = 0x9F;
sbit SM1  = 0x9E;
sbit SM2  = 0x9D;
sbit REN  = 0x9C;
sbit TB8  = 0x9B;
sbit RB8  = 0x9A;
sbit TI   = 0x99;
sbit RI   = 0x98;

/*  T2CON  */
sbit TF2   = 0xCF;
sbit EXF2  = 0xCE;
sbit RCLK  = 0xCD;
sbit TCLK  = 0xCC;
sbit EXEN2 = 0xCB;
sbit TR2   = 0xCA;
sbit CT2   = 0xC9;
sbit CPRL2 = 0xC8;

/*  CCON  */
sbit CF   = 0xDF;
sbit CR   = 0xDE;
sbit CCF4 = 0xDC;
sbit CCF3 = 0xDB;
sbit CCF2 = 0xDA;
sbit CCF1 = 0xD9;
sbit CCF0 = 0xD8;

/*  SP0CTRL  */
sbit SPIF0  = 0xFF;
sbit WCOL0  = 0xFE;
sbit MODF0  = 0xFD;
sbit ROV0   = 0xFC;
sbit SSMOD1 = 0xFB;
sbit SSMOD0 = 0xFA;
sbit TXBMP0 = 0xF9;
sbit SPIEN0 = 0xF8;


/*  SMB0CN  */
sbit SMBMTR0 = 0xCF;
sbit SMBTXM0 = 0xCE;
sbit SMBSTA0 = 0xCD;
sbit SMBSTO0 = 0xCC;
sbit SMBARQ0 = 0xCB;
sbit SMBLOST0= 0xCA;
sbit SMBACK0 = 0xC9;
sbit SMBSI0  = 0xC8;

#endif
