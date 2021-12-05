/*--------------------------------------------------------------------------
N79E352(R).H

Header file for Nuvoton N79E352(R)
--------------------------------------------------------------------------*/

/*  BYTE Registers  */
sfr P0        	= 0x80;
sfr SP        	= 0x81;
sfr DPL       	= 0x82;
sfr DPH       	= 0x83;
sfr DPL1     	= 0x84;
sfr DPH1      	= 0x85;
sfr DPS      	= 0x86;
sfr PCON      	= 0x87;
sfr TCON      	= 0x88;
sfr TMOD      	= 0x89;
sfr TL0       	= 0x8A;
sfr TL1       	= 0x8B;
sfr TH0       	= 0x8C;
sfr TH1       	= 0x8D;
sfr CKCON      	= 0x8E;
sfr P1        	= 0x90;
sfr P5        	= 0x94;
sfr SCON      	= 0x98;
sfr SBUF      	= 0x99;
sfr P3M1      	= 0x9E;
sfr P3M2      	= 0x9F;
sfr P2        	= 0xA0;
sfr KBI        	= 0xA1;
sfr AUXR1      	= 0xA2;
sfr CAPCON0     = 0xA3;
sfr CAPCON1     = 0xA4;
sfr P4        	= 0xA5;
sfr IE        	= 0xA8;
sfr SADDR      	= 0xA9;
sfr P3	     	= 0xB0;
sfr P0M1     	= 0xB1;
sfr P0M2     	= 0xB2;
sfr P1M1     	= 0xB3;
sfr P1M2     	= 0xB4;
sfr P2M1     	= 0xB5;
sfr P2M2     	= 0xB6;
sfr IP0H     	= 0xB7;
sfr IP0        	= 0xB8;
sfr SADEN      	= 0xB9;
sfr I2DATA     	= 0xBC;
sfr I2STATUS   	= 0xBD;
sfr I2CLK     	= 0xBE;
sfr I2TIMER    	= 0xBF;
sfr I2CON	= 0xC0;
sfr I2ADDR	= 0xC1;
sfr ROMMAP     	= 0xC2;
sfr PMR      	= 0xC4;
sfr STATUS     	= 0xC5;
sfr NVMADDR    	= 0xC6;
sfr TA      	= 0xC7;
sfr T2CON     	= 0xC8;
sfr T2MOD     	= 0xC9;
sfr RCAP2L    	= 0xCA;
sfr RCAP2H    	= 0xCB;
sfr TL2       	= 0xCC;
sfr TH2       	= 0xCD;
sfr NVMCON     	= 0xCE;
sfr NVMDAT     	= 0xCF;
sfr PSW       	= 0xD0;
sfr PWMCON3    	= 0xD7;
sfr WDCON    	= 0xD8;
sfr PWM0L    	= 0xDA;
sfr PWM1L    	= 0xDB;
sfr PWMCON1    	= 0xDC;
sfr ACC       	= 0xE0;
sfr CCL0        = 0xE4;
sfr CCH0        = 0xE5;
sfr EIE       	= 0xE8;
sfr KBL       	= 0xE9;
sfr PORTS      	= 0xEC;
sfr P5M1       	= 0xED;
sfr P5M2       	= 0xEE;
sfr B         	= 0xF0;
sfr IP1H       	= 0xF7;
sfr IP1     	= 0xF8;


/*  BIT Registers  */
/*  P0  */
sbit P07    	= P0^7;
sbit P06    	= P0^6;
sbit P05    	= P0^5;
sbit P04    	= P0^4;
sbit P03    	= P0^3;
sbit P02    	= P0^2;
sbit P01    	= P0^1;
sbit P00    	= P0^0;

/*  TCON  */
sbit TF1    	= TCON^7;
sbit TR1    	= TCON^6;
sbit TF0    	= TCON^5;
sbit TR0    	= TCON^4;
sbit IE1    	= TCON^3;
sbit IT1    	= TCON^2;
sbit IE0    	= TCON^1;
sbit IT0    	= TCON^0;

/*  P1  */
sbit P17    	= P1^7;
sbit P16    	= P1^6;
sbit P15    	= P1^5;
sbit P14    	= P1^4;
sbit P13    	= P1^3;
sbit P12    	= P1^2;
sbit P11    	= P1^1;
sbit P10    	= P1^0;

/*  SCON   */
sbit SM0    	= SCON^7;
sbit FE     	= SCON^7;  
sbit SM1    	= SCON^6; 
sbit SM2    	= SCON^5; 
sbit REN    	= SCON^4; 
sbit TB8    	= SCON^3; 
sbit RB8    	= SCON^2; 
sbit TI     	= SCON^1; 
sbit RI     	= SCON^0; 

/*  P2  */
sbit P27    	= P2^7;
sbit P26    	= P2^6;
sbit P25    	= P2^5;
sbit P24    	= P2^4;
sbit P23    	= P2^3;
sbit P22    	= P2^2;
sbit P21    	= P2^1;
sbit P20    	= P2^0;

/*  IE  */
sbit EA     	= IE^7;
sbit ET2    	= IE^5;
sbit ES     	= IE^4;
sbit ET1    	= IE^3;
sbit EX1    	= IE^2;
sbit ET0    	= IE^1;
sbit EX0    	= IE^0;

/*  P3  */
sbit P37    	= P3^7;
sbit P36    	= P3^6;
sbit P35    	= P3^5;
sbit P34    	= P3^4;
sbit P33    	= P3^3;
sbit P32    	= P3^2;
sbit P31    	= P3^1;
sbit P30    	= P3^0;

/*  IP0  */
sbit PT2    	= IP0^5;
sbit PS     	= IP0^4;
sbit PT1    	= IP0^3;
sbit PX1    	= IP0^2;
sbit PT0    	= IP0^1;
sbit PX0    	= IP0^0;

/*  I2CON  */
sbit ENSI   	= I2CON^6;
sbit STA    	= I2CON^5;
sbit STO    	= I2CON^4;
sbit SI     	= I2CON^3;
sbit AA     	= I2CON^2;

/*  T2CON  */
sbit TF2    	= T2CON^7;
sbit EXF2   	= T2CON^6;
sbit RCLK   	= T2CON^5;
sbit TCLK   	= T2CON^4;
sbit EXEN2  	= T2CON^3;
sbit TR2    	= T2CON^2;
sbit C_T2   	= T2CON^1;
sbit CP_RL2 	= T2CON^0;

/*  PSW */
sbit CY     	= PSW^7;
sbit AC     	= PSW^6;
sbit F0     	= PSW^5;
sbit RS1    	= PSW^4;
sbit RS0    	= PSW^3;
sbit OV     	= PSW^2;
sbit F1     	= PSW^1;
sbit P      	= PSW^0;

/*  WDCON  */
sbit WDRUN  	= WDCON^7;
sbit POR    	= WDCON^6;
sbit WDIF   	= WDCON^3;
sbit WTRF   	= WDCON^2;
sbit EWRST  	= WDCON^1;
sbit WDCLR  	= WDCON^0;

/*  EIE  */
sbit ECPTF  	= EIE^7;
sbit EBO    	= EIE^6;
sbit EWDI   	= EIE^4;
sbit EKB    	= EIE^1;
sbit EI2    	= EIE^0;

/*  IP1  */
sbit PCAP   	= IP1^7;
sbit PBO    	= IP1^6;
sbit PWDI   	= IP1^4;
sbit PKB    	= IP1^1;
sbit PI2    	= IP1^0;