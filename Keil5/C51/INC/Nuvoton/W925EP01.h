/*--------------------------------------------------------------------------
W925EP01.H
Header file for Nuvoton W925C240 & W925E240   
The Head file is suitiable for Keil C compiler using
Date: 2005/03/16

--------------------------------------------------------------------------*/
sfr     P0      =       0x80;
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    P0_0   =        P0^0;       
sbit    P0_1   =        P0^1;       
sbit    P0_2   =        P0^2;       
sbit    P0_3   =        P0^3;       
sbit    P0_4   =        P0^4;       
sbit    P0_5   =        P0^5;       
sbit    P0_6   =        P0^6;       
sbit    P0_7   =        P0^7;       

/*............................*/
sfr     SP      =       0x81;                          
sfr     DPL     =       0x82;
sfr     DPH     =       0x83;
sfr     DPL1    =       0x84;
sfr     DPH1    =       0x85;
sfr     DPS     =       0x86;
sfr     PCON    =       0x87;
/*============================*/
sfr     TCON    =       0x88;
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
sbit    IT0     =       TCON^0;
sbit    IE0     =       TCON^1;
sbit    IT1     =       TCON^2;
sbit    IE1     =       TCON^3;
sbit    TR0     =       TCON^4;
sbit    TF0     =       TCON^5;
sbit    TR1     =       TCON^6;
sbit    TF1     =       TCON^7;
/*............................*/                     
sfr     TMOD    =       0x89;
sfr     TL0     =       0x8A;
sfr     TL1     =       0x8B;
sfr     TH0     =       0x8C;
sfr     TH1     =       0x8D;
sfr     CKCON1  =       0x8E;
sfr     CKCON2  =       0x8F;
/*============================*/
sfr     P1      =       0x90;
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    P1_0   =        P1^0;       
sbit    P1_1   =        P1^1;       
sbit    P1_2   =        P1^2;       
sbit    P1_3   =        P1^3;       
sbit    P1_4   =        P1^4;       
sbit    P1_5   =        P1^5;       
sbit    P1_6   =        P1^6;       
sbit    P1_7   =        P1^7;       

sbit    INT2_0  =       P1^0;
sbit    INT2_1  =       P1^1;
sbit    INT2_2  =       P1^2;
sbit    INT2_3  =       P1^3;
sbit    INT3_0  =       P1^4;
sbit    INT3_1  =       P1^5;
sbit    INT3_2  =       P1^6;
sbit    INT3_3  =       P1^7;
/*............................*/
sfr     EXIF    =       0x91;
sfr     RPAGE   =       0x92;
sfr     P1SR    =       0x93;
sfr     P0IO    =       0x94;
sfr     P1IO    =       0x95;
sfr     P2IO    =       0x96;
sfr     P3IO    =       0x97;
/*============================*/

/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
sfr     SCON    =       0x98;
sbit    RI      =       SCON^0;
sbit    TI      =       SCON^1;
sbit    RB8     =       SCON^2;
sbit    TB8     =       SCON^3;
sbit    REN     =       SCON^4;
sbit    SM2     =       SCON^5;
sbit    SM1     =       SCON^6;
sbit    SM0_FE  =       SCON^7;

sfr     SBUF    =       0x99;

/*............................*/

sfr     P1EF    =       0x9B;
sfr     P1H     =       0x9D;
sfr     P2H     =       0x9E;
sfr     P3H     =       0x9F;
/*===========================*/
sfr     P2      =       0xA0;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    P2_0   =        P2^0;       
sbit    P2_1   =        P2^1;       
sbit    P2_2   =        P2^2;       
sbit    P2_3   =        P2^3;       
sbit    P2_4   =        P2^4;       
sbit    P2_5   =        P2^5;       
sbit    P2_6   =        P2^6;       
sbit    P2_7   =        P2^7;       

/*............................*/
sfr	HB     =        0xA1;
sfr	P4H    =        0xA2;       
sfr	P5H	= 	0xA3;
sfr	P7     =        0xA4;       
sfr	P6     =        0xA5;       
sfr	P4     =        0xA6;       
sfr	P5     =        0xA7;       

/*===========================*/
sfr     IE     =        0x0A8;
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
sbit    EX0    =        IE^0;       
sbit    ET0    =        IE^1;       
sbit    EX1    =        IE^2;       
sbit    ET1    =        IE^3;      
sbit    ES0    =        IE^4;       
sbit    ES1    =        IE^6;       
sbit    EA     =        IE^7;       
/*............................*/
sfr	P6H    	= 	0xAA;
sfr 	P7H    	= 	0xAB;
sfr 	P7IO   	= 	0xAC;
sfr 	P6IO   	= 	0xAD;
sfr     P4IO   =        0xAE;
sfr 	P5IO   	= 	0xAF;      
/*===========================*/
sfr     P3     =        0xB0;
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    P3_0   =        P3^0;       
sbit    P3_1   =        P3^1;       
sbit    P3_2   =        P3^2;       
sbit    P3_3   =        P3^3;       
sbit    P3_4   =        P3^4;       
sbit    P3_5   =        P3^5;       
sbit    P3_6   =        P3^6;       
sbit    P3_7   =        P3^7;       

/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    RXD    =        P3^0;       
sbit    TXD    =        P3^1;       
sbit    INT0   =        P3^2;       
sbit    INT1   =        P3^3;       
sbit    T0     =        P3^4;       
sbit    T1     =        P3^5;       
sbit    WR     =        P3^6;       
sbit    RD     =        P3^7;       
/*............................*/
sfr     CIDR   =        0xB1;       
sfr     CIDFG  =        0xB2;       
sfr     CIDPCR =        0xB3;       
sfr     FSKDR  =        0xB4;       
sfr     DTMFDR =        0xB5;       
sfr     DTMFPT =        0xB6;       
sfr     DTMFAT =        0xB7;       
/*============================*/
sfr     IP     =        0xB8;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    PX0    =        IP^0;       
sbit    PT0    =        IP^1;       
sbit    PX1    =        IP^2;       
sbit    PT1    =        IP^3;       
sbit    PS0    =        IP^4;       
sbit    PS1    =        IP^6;       
/*.............................*/
sfr     DTMFGR =        0xBA;       
sfr     DTMFG  =        0xBA;       
sfr     COMPR  =        0xBB;       
sfr     IRC1   =        0xBC;    
sfr     IRC2   =        0xBD;    
sfr     ASPT   =        0xBE;    
sfr     CASPT  =        0xBE;
sfr     ASAT   =        0xBF;        
sfr     CASAT  =        0xBF;
/*============================*/
sfr     SCON1  =        0xC0;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    SIO    =        SCON1^0;    
sbit    CLKIO  =        SCON1^1;    
sbit    SEDG   =        SCON1^2;    
sbit    SFQ    =        SCON1^3;    
sbit    REN1   =        SCON1^4;    
sbit    REGON  =        SCON1^5;    

sbit    SF1    =        SCON1^7;    
/*............................*/
sfr		SBUF1  =		0xc1;
sfr     REGVC  =        0xC2;       
sfr     PMR    =        0xC4;       
sfr     STATUS =        0xC5;       
sfr     FSKTC  =        0xC6;       
sfr     FSKTB  =        0xC7;       
/*============================*/
//sfr     T2CON   =        0xC8;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sfr     DIVC    =        0xC8;       
sbit    DIVA   =        DIVC^0;    
/*............................*/
//sfr 	RCAP2L	= 	0xCA;
//sfr 	RCAP2H	= 	0xCB;

sfr 	BGCON 	= 	0xCE;
sfr 	BG    	= 	0xCF;


/*===========================*/    
sfr     PSW    =        0xD0;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    P      =        PSW^0;      
sbit    F1     =        PSW^1;      
sbit    OV     =        PSW^2;      
sbit    RS0    =        PSW^3;      
sbit    RS1    =        PSW^4;      
sbit    F0     =        PSW^5;      
sbit    AC     =        PSW^6;      
sbit    CY     =        PSW^7;      
/*===========================*/       
sfr     WDCON  =        0xD8;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit    RWT    =        WDCON^0;    
sbit    EWT    =        WDCON^1;    
sbit    WTRF   =        WDCON^2;    
sbit    WDIF   =        WDCON^3;    
sbit    WFS    =        WDCON^4;    
sbit    POR    =        WDCON^6;    
/*===========================*/       
sfr     ACC    =        0xE0;  
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/       
sbit	ACC_0  =		ACC^0;
sbit	ACC_1  =		ACC^1;
sbit	ACC_2  =		ACC^2;
sbit	ACC_3  =		ACC^3;
sbit	ACC_4  =		ACC^4;
sbit	ACC_5  =		ACC^5;
sbit	ACC_6  =		ACC^6;
sbit	ACC_7  =		ACC^7;
/*===========================*/   
sfr	SFRAL	= 	0xE4;
sfr 	SFRAH	= 	0xE5;
sfr 	SFRFD	= 	0xE6;
sfr 	SFRCN	= 	0xE7;       
sfr     EIE    =        0xE8;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/          
sbit    EX2    =        EIE^0;      
sbit    EX3    =        EIE^1;      
sbit    ECID   =        EIE^2;      
sbit    EDIV   =        EIE^3;      
sbit    ECOMP  =        EIE^4;      
sbit    EWDI   =        EIE^5;      
/*===========================*/   
sfr	TA	= 	0xEE;
sfr	CHPCON	= 	0xEF;
sfr     B      =        0x0F0;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/          
sbit	B_0	   =		B^0;		
sbit	B_1	   =		B^1;		
sbit	B_2	   =		B^2;		
sbit	B_3	   =		B^3;		
sbit	B_4	   =		B^4;		
sbit	B_5	   =		B^5;		
sbit	B_6	   =		B^6;		
sbit	B_7	   =		B^7;		
/*............................*/
/*===========================*/          
sfr     EIP    =        0xF8;       
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/          
sbit    PX2    =        EIP^0;      
sbit    PX3    =        EIP^1;      
sbit    PCID   =        EIP^2;      
sbit    PDIV   =        EIP^3;      
sbit    PCOMP  =        EIP^4;      
sbit    PWDI   =        EIP^5; 
/*............................*/     
sfr     CIDGD  =        0xF9;       
sfr     CIDGA  =        0xFA;       
//;-------------------------------------------------
