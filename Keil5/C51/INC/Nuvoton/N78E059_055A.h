/*--------------------------------------------------------------------------
N78E059_055A.H

Header file for Nuvoton N78E059_055A
--------------------------------------------------------------------------*/

/*  BYTE Registers  */
sfr P0        	= 0x80;
sfr SP        	= 0x81;
sfr DPL       	= 0x82;
sfr DPH       	= 0x83;
sfr P0OR        = 0x86;
sfr PCON      	= 0x87;
sfr TCON      	= 0x88;
sfr TMOD      	= 0x89;
sfr TL0       	= 0x8A;
sfr TL1       	= 0x8B;
sfr TH0       	= 0x8C;
sfr TH1       	= 0x8D;
sfr AUXR        = 0x8E;
sfr P1        	= 0x90;
sfr RSR       	= 0x96;
sfr IRCCAL     	= 0x97;
sfr SCON      	= 0x98;
sfr SBUF      	= 0x99;
sfr CHPCON     	= 0x9F;
sfr P2      	= 0xA0;
sfr XRAMAH     	= 0xA1;
sfr ISPTRG     	= 0xA4;
sfr ISPAL       = 0xA6;
sfr ISPAH     	= 0xA7;
sfr IE        	= 0xA8;
sfr WDCON      	= 0xAA;
sfr PDCON    	= 0xAB;
sfr PMC       	= 0xAC;
sfr ISPFD     	= 0xAE;
sfr ISPCN     	= 0xAF;
sfr P3        	= 0xB0;
sfr IP        	= 0xB8;
sfr IPH        	= 0xBA;
sfr EIPH      	= 0xBB;
sfr EIP       	= 0xBC;
sfr EIE       	= 0xBD;
sfr XICON     	= 0xC0;
sfr TA        	= 0xC7;
sfr T2CON      	= 0xC8;
sfr T2MOD      	= 0xC9;
sfr RCAP2L    	= 0xCA;
sfr RCAP2H    	= 0xCB;
sfr TL2       	= 0xCC;
sfr TH2       	= 0xCD;
sfr PWMCON1   	= 0xCE;
sfr PWM4	= 0xCF;
sfr PSW        	= 0xD0;
sfr P4        	= 0xD8;
sfr PWMP 	= 0xD9;
sfr PWM0 	= 0xDA;
sfr PWM1    	= 0xDB;
sfr PWMCON0   	= 0xDC;
sfr PWM2 	= 0xDD;
sfr PWM3 	= 0xDE;
sfr ACC       	= 0xE0;
sfr B         	= 0xF0;
sfr SPCR      	= 0xF3;
sfr SPSR      	= 0xF4;
sfr SPDR      	= 0xF5;


/*  BIT Registers  */
/*  P0  */
sbit P00    	= P0^0;
sbit P01    	= P0^1;
sbit P02    	= P0^2;
sbit P03    	= P0^3;
sbit P04    	= P0^4;
sbit P05    	= P0^5;
sbit P06    	= P0^6;
sbit P07    	= P0^7;

/*  TCON  */
sbit TF1    	= TCON^7;
sbit TR1    	= TCON^6;
sbit TF0    	= TCON^5;
sbit TR0    	= TCON^4;
sbit IE1    	= TCON^3;
sbit IT1   	= TCON^2;
sbit IE0   	= TCON^1;
sbit IT0   	= TCON^0;

/*  P1  */
sbit P10    	= P1^0;
sbit P11    	= P1^1;
sbit P12    	= P1^2;
sbit P13    	= P1^3;
sbit P14    	= P1^4;
sbit P15    	= P1^5;
sbit P16    	= P1^6;
sbit P17    	= P1^7;

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
sbit P20    	= P2^0;
sbit P21    	= P2^1;
sbit P22    	= P2^2;
sbit P23    	= P2^3;
sbit P24    	= P2^4;
sbit P25    	= P2^5;
sbit P26    	= P2^6;
sbit P27    	= P2^7;

/*  IE  */
sbit EA    	= IE^7;
sbit ET2   	= IE^5;
sbit ES    	= IE^4;
sbit ET1   	= IE^3;
sbit EX1   	= IE^2;
sbit ET0   	= IE^1;
sbit EX0   	= IE^0;

/*  P3  */
sbit P30    	= P3^0;
sbit P31    	= P3^1;
sbit P32    	= P3^2;
sbit P33    	= P3^3;
sbit P34    	= P3^4;
sbit P35    	= P3^5;
sbit P36    	= P3^6;
sbit P37    	= P3^7;

/*  IP  */
sbit PT2   	= IP^5;
sbit PS    	= IP^4;
sbit PT1   	= IP^3;
sbit PX1   	= IP^2;
sbit PT0   	= IP^1;
sbit PX0   	= IP^0;

/*  XICON  */
sbit PX3    	= XICON^7;
sbit EX3    	= XICON^6;
sbit IE3    	= XICON^5;
sbit IT3    	= XICON^4;
sbit PX2   	= XICON^3;
sbit EX2    	= XICON^2;
sbit IE2    	= XICON^1;
sbit IT2    	= XICON^0;

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
sbit CY    	= PSW^7;
sbit AC    	= PSW^6;
sbit F0    	= PSW^5;
sbit RS1   	= PSW^4;
sbit RS0   	= PSW^3;
sbit OV    	= PSW^2;
sbit FL    	= PSW^1;
sbit P     	= PSW^0;

/*  P4  */
sbit P40    	= P4^0;
sbit P41    	= P4^1;
sbit P42    	= P4^2;
sbit P43    	= P4^3;
sbit P44    	= P4^4;
sbit P45    	= P4^5;
sbit P46    	= P4^6;
sbit P47    	= P4^7;