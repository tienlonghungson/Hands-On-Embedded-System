/*--------------------------------------------------------------------------
W79E4051.H
Registers definition for Nuvoton W79E4051
-------------------------------------------------------------------------- */
#ifndef __W79E4051_H__
#define __W79E4051_H__

/* Byte Addresses */
sfr   SP   	   = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   CKCON  	 = 0x8E;
sfr   CLKREG 	 = 0x8F;
sfr   P1   	   = 0x90;
sfr   ACCK   	 = 0x96;
sfr   ACSR   	 = 0x97;
sfr   SCON   	 = 0x98;
sfr   SBUF   	 = 0x99;
sfr   P2   	   = 0xA0;
sfr   AUXR1    = 0xA2;
sfr		AUXR2    = 0xA3;
sfr   IE   	   = 0xA8;
sfr   SADDR 	 = 0xA9;
sfr   P3   	   = 0xB0;
sfr   P1M1   	 = 0xB3;
sfr   IPH      = 0xB7;
sfr   IP   	   = 0xB8;
sfr   SADEN  	 = 0xB9;
sfr   NVMADDRL = 0xC6;
sfr   TA       = 0xC7;
sfr   T2CON    = 0xC8;
sfr   NVMCON   = 0xCE;
sfr   NVMDATA	 = 0xCF;
sfr   PSW   	 = 0xD0;
sfr   PWMPH  	 = 0xD1;
sfr   PWM0H  	 = 0xD2;
sfr   PWMCON3	 = 0xD7;
sfr   WDCON  	 = 0xD8;
sfr   PWMPL  	 = 0xD9;
sfr   PWM0L  	 = 0xDA;
sfr   PWMCON1  = 0xDC;
sfr   ACC   	 = 0xE0;
sfr   EIE   	 = 0xE8;
sfr   B   	   = 0xF0;
sfr   PCMPIDS	 = 0xF6;
sfr   IP1H   	 = 0xF7;
sfr   IP1   	 = 0xF8;


/* Bit Addresses */

/* TCON */
sbit   IT0   	 = TCON^0;
sbit   IE0   	 = TCON^1;
sbit   IT1   	 = TCON^2;
sbit   TR0   	 = TCON^4;
sbit   TF0   	 = TCON^5;
sbit   TR1   	 = TCON^6;
sbit   TF1   	 = TCON^7;

/*	 P1*  	 */
sbit 	P10	=P1^0;
sbit 	P11	=P1^1;
sbit 	P12	=P1^2;
sbit 	P13	=P1^3;
sbit 	P14	=P1^4;
sbit 	P15	=P1^5;
sbit 	P16	=P1^6;
sbit 	P17	=P1^7;


/* P2 */
sbit 	P20	=P2^0;
sbit 	P21	=P2^1;

/*	 P3*  	 */
sbit 	P30	=P3^0;
sbit 	P31	=P3^1;
sbit 	P32	=P3^2;
sbit 	P33	=P3^3;
sbit 	P34	=P3^4;
sbit 	P35	=P3^5;
sbit 	P36	=P3^6;
sbit 	P37	=P3^7;


/* SCON */
sbit   RI   	 = SCON^0;
sbit   TI   	 = SCON^1;
sbit   RB8   	 = SCON^2;
sbit   TB8   	 = SCON^3;
sbit   REN   	 = SCON^4;
sbit   SM3   	 = SCON^5;
sbit   SM1   	 = SCON^6;
sbit   SM0   	 = SCON^7;

/* IE */
sbit   EX0   	 = IE^0;
sbit   ET0   	 = IE^1;
sbit   EX1   	 = IE^2;
sbit   ET1   	 = IE^3;
sbit   ES   	 = IE^4;
sbit   EC   	 = IE^6;
sbit   EA   	 = IE^7;

/* IP */
sbit   PX0   	 = IP^0;
sbit   PT0   	 = IP^1;
sbit   PX1   	 = IP^2;
sbit   PT1   	 = IP^3;
sbit   PS   	 = IP^4;

/* PSW */
sbit   P   	 = PSW^0;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;

