/*--------------------------------------------------------------------------
W78L812.H

Header file for Nuvoton W78L812
Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc. 
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __W78L812_H__
#define __W78L812_H__

/*  BYTE Registers  */
sfr P0    = 0x80;
sfr P1    = 0x90;
sfr P2    = 0xA0;
sfr P3    = 0xB0;
sfr P4    = 0xD8;
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
sfr IE    = 0xA8;
sfr IE1   = 0xE8;
sfr IP0   = 0xB8;
sfr IP1   = 0xF8;
sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr T2MOD = 0xC9;
sfr WDTC  = 0x8F;

/*  8052 Extensions  */
sfr T2CON  = 0xC8;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;

/* Nuvoton extension */
sfr P4     = 0xD8;
sfr IRQ    = 0xC0;
sfr AUXR   = 0x8E;
sfr POR    = 0x86;
sfr IX     = 0xE9;




/*  BIT Registers  */
/*  PSW  */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0; //8052 only

/*  TCON  */
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

/*  IE  */
sbit EA    = IE^7;
sbit ET2   = IE^5; //8052 only
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IE1  */
sbit EX9   = IE1^7;
sbit EX8   = IE1^6;
sbit EX7   = IE1^5;
sbit EX6   = IE1^4;
sbit EX5   = IE1^3;
sbit EX4   = IE1^2;
sbit EX3   = IE1^1;
sbit EX2   = IE1^0;

/*  IP0  */
sbit PT2   = IP0^5;
sbit PS    = IP0^4;
sbit PT1   = IP0^3;
sbit PX1   = IP0^2;
sbit PT0   = IP0^1;
sbit PX0   = IP0^0;

/*  IP1  */
sbit PX9   = IP1^7;
sbit PX8   = IP1^6;
sbit PX7   = IP1^5;
sbit PX6   = IP1^4;
sbit PX5   = IP1^3;
sbit PX4   = IP1^2;
sbit PX3   = IP1^1;
sbit PX2   = IP1^0;


/*  P3  */
sbit RD    = P3^7;
sbit WR    = P3^6;
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*  SCON  */
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

/*  P1  */
sbit T2EX  = P1^1; // 8052 only
sbit T2    = P1^0; // 8052 only
             
/*  T2CON  */
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit TR2    = T2CON^2;
sbit C_T2   = T2CON^1;
sbit CP_RL2 = T2CON^0;


/* IRQ */
sbit IQ9    = IRQ^7;
sbit IQ8    = IRQ^6;
sbit IQ7    = IRQ^5;
sbit IQ6    = IRQ^4;
sbit IQ5    = IRQ^3;
sbit IQ4    = IRQ^2;
sbit IQ3    = IRQ^1;
sbit IQ2    = IRQ^0;


#endif
