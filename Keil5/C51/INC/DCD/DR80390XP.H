/*--------------------------------------------------------------------------
  DR80390XP.H
 Registers definition for DCD DR80390XP

 Copyright (c) 2003 Keil Elektronik GmbH and Keil Software, Inc.
 All rights reserved.
-------------------------------------------------------------------------- */
#ifndef _DR80390XP_H_
#define _DR80390XP_H_

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* Defined configuration peripherals */

  #define PMU_ENABLED      /* Power Management Unit enabled */
  #define DPTR1_ENABLED    /* Enable second DPTR1           */

  #define PORT0_ENABLED    /* Port 0 enabled                */
  #define PORT1_ENABLED    /* Port 1 enabled                */
  #define PORT2_ENABLED    /* Port 2 enabled                */
  #define PORT3_ENABLED    /* Port 3 enabled                */

  #define TIMERS01_ENABLED /* Timers 0&1 enabled            */
  #define TIMER2_ENABLED   /* Timer 2 enabled               */
  #define CC_ENABLED       /* Compare/Capture enabled       */

  #define UART0_ENABLED    /* UART 0 enabled                */
  #define UART1_ENABLED    /* UART 1 enabled                */

  #define MDU_ENABLED      /* 16/32-bit MUL/DIV enabled     */

  #define DI2CM_ENABLED    /* Master I2C enabled            */
  #define DI2CS_ENABLED    /* Slave I2C enabled             */
  #define WATCHDOG_ENABLED /* Watchdog enabled              */
  #define DSPI_ENABLED     /* Master/Slave SPI enabled      */

/* *********************************************************************** */
/* *********************************************************************** */

/*---------------------------------------------------------------------------
  Defined registers  
---------------------------------------------------------------------------*/

/*  BYTE Register  */
#ifdef PORT0_ENABLED
  sfr P0        = 0x80; /* Port 0                    */
#endif

sfr SP        = 0x81;   /* Stack Pointer             */
sfr DPL       = 0x82;   /* Data Pointer 0 Low byte   */
sfr DPL0      = 0x82;
sfr DPH       = 0x83;   /* Data Pointer 0 High byte  */
sfr DPH0      = 0x83;

#ifdef DPTR1_ENABLED
  sfr DPL1      = 0x84; /* Data Pointer 1 Low byte   */
  sfr DPH1      = 0x85; /* Data Pointer 1 High byte  */
  sfr DPS       = 0x86; /* Data pointers select      */
#endif

sfr PCON      = 0x87;   /* Power Configuration       */
sfr TCON      = 0x88;   /* Timer 0,1 Configuration   */

#ifdef TIMERS01_ENABLED
  sfr TMOD      = 0x89; /* Timer 0,1 Mode            */
  sfr TL0       = 0x8A; /* Timer 0 Low byte counter  */
  sfr TL1       = 0x8B; /* Timer 1 Low byte counter  */
  sfr TH0       = 0x8C; /* Timer 0 High byte counter */
  sfr TH1       = 0x8D; /* Timer 1 High byte counter */
#endif

sfr CKCON     = 0x8E;   /* XDATA Wait States         */
/* 0x8F */
#ifdef PORT1_ENABLED
  sfr P1        = 0x90; /* Port 1                    */
#endif

sfr EIF       = 0x91;   /* External Interrupt Flag   */

sfr WTST      = 0x92;   /* Program Wait States       */

sfr DPP       = 0x93;   /* Data Page Pointer 0       */
sfr DPX0      = 0x93;
/* 0x94 */
#ifdef DPTR1_ENABLED
  sfr DPX1      = 0x95; /* Data Page Pointer 1       */
#endif
/* 0x96
   0x97*/
#ifdef UART0_ENABLED
  sfr SCON      = 0x98; /* Serial 0 Configuration    */
  sfr SCON0     = 0x98;
  sfr SBUF      = 0x99; /* Serial 0 I/O Buffer       */
  sfr SBUF0     = 0x99;
#endif
/* 0x9A
   0x9B
   0x9C*/
  sfr ACON      = 0x9D;  /* Address Control FLAT/LARGE*/
/* 0x9E
   0x9F*/
#ifdef PORT2_ENABLED
  sfr P2        = 0xA0; /* Port 2                    */
#endif
/* 0xA1
   0xA2
   0xA3
   0xA4
   0xA5
   0xA6
   0xA7*/
sfr IE        = 0xA8;   /* Interrupt Enable          */
/* 0xA9
   0xAA
   0xAB
   0xAC
   0xAD
   0xAE
   0xAF*/
#ifdef PORT3_ENABLED
  sfr P3        = 0xB0; /* Port 3                    */
#endif
/* 0xB1
   0xB2
   0xB3
   0xB4
   0xB5
   0xB6
   0xB7*/
sfr IP        = 0xB8;
/* 0xB9
   0xBA
   0xBB
   0xBC
   0xBD
   0xBE
   0xBF*/

#ifdef UART1_ENABLED
  sfr SCON1     = 0xC0; /* Serial 1 Configuration    */
  sfr SBUF1     = 0xC1; /* Serial 1 I/O Buffer       */
#endif

#ifdef CC_ENABLED
  sfr CCL1     = 0xC2;  /* Comare/Capture/Reload 1 Low */
  sfr CCH1     = 0xC3;  /* Comare/Capture/Reload 1 High*/
  sfr CCL2     = 0xC4;  /* Comare/Capture/Reload 2 Low */
  sfr CCH2     = 0xC5;  /* Comare/Capture/Reload 2 High*/
  sfr CCL3     = 0xC6;  /* Comare/Capture/Reload 3 Low */
  sfr CCH3     = 0xC7;  /* Comare/Capture/Reload 3 High*/
#endif

#if defined(TIMER2_ENABLED)  || defined(CC_ENABLED)
  sfr T2CON     = 0xC8; /* Timer 2 Configuration     */
#endif

#ifdef CC_ENABLED
  sfr T2IF      = 0xC9; /* Timer 2 Interrupt Flags   */
  sfr RCRL      = 0xCA; /* Timer 2 Reload Low byte   */
  sfr RCRH      = 0xCB; /* Timer 2 Reload High byte  */
  sfr TL2       = 0xCC; /* Timer 2 Low byte counter  */
  sfr TH2       = 0xCD; /* Timer 2 High byte counter */
#else
  #ifdef TIMER2_ENABLED
    sfr RLDL      = 0xCA; /* Timer 2 Reload Low byte   */
    sfr RLDH      = 0xCB; /* Timer 2 Reload High byte  */
    sfr TL2       = 0xCC; /* Timer 2 Low byte counter  */
    sfr TH2       = 0xCD; /* Timer 2 High byte counter */
  #endif
#endif

#ifdef CC_ENABLED
  sfr CCEN      = 0xCE; /* Comare/Capture/Reload Enable*/
#endif
/* 0xCF */
sfr PSW       = 0xD0;   /* Program Status Word       */
/* 0xD1
   0xD2
   0xD3
   0xD4
   0xD5
   0xD6
   0xD7*/
#ifdef WATCHDOG_ENABLED
  sfr WDCON     = 0xD8; /* Watchdog configuration    */
#endif
/* 0xD9
   0xDA
   0xDB
   0xDC
   0xDD
   0xDE
   0xDF*/
sfr ACC       = 0xE0;   /* Accumulator               */
/* 0xE1
   0xE2
   0xE3
   0xE4
   0xE5
   0xE6
   0xE7*/
sfr EIE       = 0xE8;   /* External Interrupt Enable */

#ifdef PMU_ENABLED
  sfr STATUS    = 0xE9; /* Status register           */
#endif

sfr MXAX      = 0xEA;   /* MOVX @Ri High address     */

#ifdef WATCHDOG_ENABLED
  sfr TA        = 0xEB; /* Timed Access protection   */
#endif

#ifdef DSPI_ENABLED
  sfr SPCR      = 0xEC; /* SPI Control Register      */
  sfr SPSR      = 0xED; /* SPI Status Register       */
  sfr SPDR      = 0xEE; /* SPI I/O Register          */
  sfr SSCR      = 0xEF; /* SPI Sleve Select Register */
#endif

sfr B         = 0xF0;   /* B Working register        */

#ifdef DI2CS_ENABLED
  sfr I2CSADR = 0xF1;   /* I2CS Address              */
  sfr I2CSCR  = 0xF2;   /* I2CS Control Register     */
  sfr I2CSBUF = 0xF3;   /* I2CS I/O Buffer           */
#endif

#ifdef DI2CM_ENABLED
  sfr I2CMSA   = 0xF4;  /* I2CM Slave Address        */
  sfr I2CMCR   = 0xF5;  /* I2CM Control Register     */
  sfr I2CMBUF  = 0xF6;  /* I2CM I/O Buffer           */
  sfr I2CMTP   = 0xF7;  /* I2CM Timer Period         */
#endif

sfr EIP       = 0xF8;   /* External Interr. Priority */

#ifdef MDU_ENABLED
  sfr MD0       = 0xF9; /* MDU Data 0                */
  sfr MD1       = 0xFA; /* MDU Data 1                */
  sfr MD2       = 0xFB; /* MDU Data 2                */
  sfr MD3       = 0xFC; /* MDU Data 3                */
  sfr MD4       = 0xFD; /* MDU Data 4                */
  sfr MD5       = 0xFE; /* MDU Data 5                */
  sfr ARCON     = 0xFF; /* MDU Control               */
#endif


/*-------------------------------------------------------------------------
  BIT Register  
  -------------------------------------------------------------------------*/

/*  P0  */
#ifdef PORT0_ENABLED
  sbit P0_7     = P0^7;
  sbit P0_6     = P0^6;
  sbit P0_5     = P0^5;
  sbit P0_4     = P0^4;
  sbit P0_3     = P0^3;
  sbit P0_2     = P0^2;
  sbit P0_1     = P0^1;
  sbit P0_0     = P0^0;
#endif
/*  P1  */
#ifdef PORT1_ENABLED
  sbit P1_7     = P1^7;
  sbit P1_6     = P1^6;
  sbit P1_5     = P1^5;
  sbit P1_4     = P1^4;
  sbit P1_3     = P1^3;
  sbit P1_2     = P1^2;
  sbit P1_1     = P1^1;
  sbit P1_0     = P1^0;
#endif
/*  P2  */
#ifdef PORT2_ENABLED
  sbit P2_7     = P2^7;
  sbit P2_6     = P2^6;
  sbit P2_5     = P2^5;
  sbit P2_4     = P2^4;
  sbit P2_3     = P2^3;
  sbit P2_2     = P2^2;
  sbit P2_1     = P2^1;
  sbit P2_0     = P2^0;
#endif
/*  P3  */
#ifdef PORT3_ENABLED
  sbit P3_7     = P3^7;
  sbit P3_6     = P3^6;
  sbit P3_5     = P3^5;
  sbit P3_4     = P3^4;
  sbit P3_3     = P3^3;
  sbit P3_2     = P3^2;
  sbit P3_1     = P3^1;
  sbit P3_0     = P3^0;
#endif
/*  TCON  */
sbit IT0      = TCON^0;
sbit IE0      = TCON^1;
sbit IT1      = TCON^2;
sbit IE1      = TCON^3;
#ifdef TIMERS01_ENABLED
  sbit TR0      = TCON^4;
  sbit TF0      = TCON^5;
  sbit TR1      = TCON^6;
  sbit TF1      = TCON^7;
#endif

/*  SCON0 */
#ifdef UART0_ENABLED
  sbit RI0      = SCON0^0;
  sbit TI0      = SCON0^1;
  sbit RB08     = SCON0^2;
  sbit TB08     = SCON0^3;
  sbit REN0     = SCON0^4;
  sbit SM02     = SCON0^5;
  sbit SM01     = SCON0^6;
  sbit SM00     = SCON0^7;
  
  /* SCON */
  sbit RI       = SCON0^0;
  sbit TI       = SCON0^1;
  sbit RB8      = SCON0^2;
  sbit TB8      = SCON0^3;
  sbit REN      = SCON0^4;
  sbit SM2      = SCON0^5;
  sbit SM1      = SCON0^6;
  sbit SM0      = SCON0^7;
#endif

/*  IE   */
sbit EX0      = IE^0;
#ifdef TIMERS01_ENABLED
  sbit ET0      = IE^1;
#endif
sbit EX1      = IE^2;
#ifdef TIMERS01_ENABLED
  sbit ET1      = IE^3;
#endif
#ifdef UART0_ENABLED
  sbit ES0      = IE^4;
sbit ES       = IE^4;
#endif
#ifdef TIMER2_ENABLED
  sbit ET2      = IE^5;
#endif
#ifdef UART1_ENABLED
  sbit ES1      = IE^6;
#endif
sbit EA       = IE^7;

/*  IP   */ 
sbit PX0      = IP^0;
#ifdef TIMERS01_ENABLED
  sbit PT0      = IP^1;
#endif
sbit PX1      = IP^2;
#ifdef TIMERS01_ENABLED
  sbit PT1      = IP^3;
#endif
#ifdef UART0_ENABLED
  sbit PS0      = IP^4;
  sbit PS       = IP^4;
#endif
#ifdef TIMER2_ENABLED
  sbit PT2      = IP^5;
#endif
#ifdef UART1_ENABLED
  sbit PS1      = IP^6;
#endif

/*  SCON1  */
#ifdef UART1_ENABLED
  sbit RI1      = SCON1^0;
  sbit TI1      = SCON1^1;
  sbit RB18     = SCON1^2;
  sbit TB18     = SCON1^3;
  sbit REN1     = SCON1^4;
  sbit SM12     = SCON1^5;
  sbit SM11     = SCON1^6;
  sbit SM10     = SCON1^7;
#endif

/*  T2CON  */
#ifdef CC_ENABLED
  sbit T2I0     = T2CON^0;
  sbit T2I1     = T2CON^1;
  sbit T2CM     = T2CON^2;
  sbit T2R0     = T2CON^3;
  sbit T2R1     = T2CON^4;
  /* T2CON^5;*/
  sbit I3FR     = T2CON^6;
  sbit T2PS     = T2CON^7;
#else
  #ifdef TIMER2_ENABLED
    sbit CPRL2    = T2CON^0;
    sbit CT2      = T2CON^1;
    sbit TR2      = T2CON^2;
    sbit EXEN2    = T2CON^3;
    sbit TCLK     = T2CON^4;
    sbit RCLK     = T2CON^5;
    sbit EXF2     = T2CON^6;
    sbit TF2      = T2CON^7;
  #endif
#endif

/*  PSW   */
sbit P        = PSW^0;
sbit F1       = PSW^1;
sbit OV       = PSW^2;
sbit RS0      = PSW^3;
sbit RS1      = PSW^4;
sbit F0       = PSW^5;
sbit AC       = PSW^6;
sbit CY       = PSW^7;

/*  WDCON  */
#ifdef WATCHDOG_ENABLED
  sbit RWT      = WDCON^0;
  sbit EWT      = WDCON^1;
  sbit WTRF     = WDCON^2;
  sbit WDIF     = WDCON^3;
  sbit INT5F    = WDCON^4;
  sbit INT6F    = WDCON^5;
  sbit INT7F    = WDCON^6;
  sbit INT8F    = WDCON^7;
#endif

/*  EIE  */
sbit EX2      = EIE^0;
sbit EX3      = EIE^1;
sbit EX4      = EIE^2;
sbit EX5      = EIE^3;
sbit EX6      = EIE^4;
#ifdef WATCHDOG_ENABLED
  sbit EWDI     = EIE^5;
#endif
#ifdef DI2CM_ENABLED
  sbit EI2CM    = EIE^6;
#endif
#ifdef DI2CS_ENABLED
  sbit EI2CS    = EIE^7;
#endif

/*  EIP  */
sbit PX2      = EIP^0;
sbit PX3      = EIP^1;
sbit PX4      = EIP^2;
sbit PX5      = EIP^3;
sbit PX6      = EIP^4;
#ifdef WATCHDOG_ENABLED
  sbit PWDI     = EIP^5;
#endif
#ifdef DI2CM_ENABLED
  sbit PI2CM    = EIP^6;
#endif
#ifdef DI2CS_ENABLED
  sbit PI2CS    = EIP^7;
#endif


/*-------------------------------------------------------------------------
  BIT Values  
  -------------------------------------------------------------------------*/

/* TMOD Bit Values */
#define T0_M0_   0x01
#define T0_M1_   0x02
#define T0_CT_   0x04
#define T0_GATE_ 0x08
#define T1_M0_   0x10
#define T1_M1_   0x20
#define T1_CT_   0x40
#define T1_GATE_ 0x80

/* CKCON Bit Values  */
#define MD_    0x07
#define T0M_   0x08
#define T1M_   0x10
#define T2M_   0x20
#define WD_    0xC0

/* EIF Bit Values  */
#define  INT2F_   0x01
#define  INT3F_   0x02
#define  INT4F_   0x04
#define  INT5F_   0x08
#define  INT6F_   0x10

#ifdef DI2CM_ENABLED
  #define  I2CMIF_  0x40
#endif
#ifdef DI2CS_ENABLED
  #define  I2CSIF_  0x80
#endif

/* T2IF Bit Values */
#ifdef CC_ENABLED
  #define T2_TF2_    0x01
  #define T2_EXF2_   0x02
  #define T2_EXEN2_  0x04
#endif

/* CCEN Bit Values */
#ifdef CC_ENABLED
  #define T2_CM0_    0x03
  #define T2_CM1_    0x0C
  #define T2_CM2_    0x30
  #define T2_CM3_    0xC0
#endif

#ifdef DSPI_ENABLED
  /* DSPI Control bits                                             */
  #define SPCR_SPIE_          0x80 /* Interrupt enable */
  #define SPCR_SPE_           0x40 /* SPI Enable */
  #define SPCR_MSTR_          0x10 /* Master(1)/Slave(0) */
  #define SPCR_CPOL_          0x08 /* Clock polarity Low(1)/High(0) */
  #define SPCR_CPHA_          0x04 /* Clock phase */
  
  #define SPCR_SPR_           0x23 /* Clock rate mask */
  #define SPR(x)              ((x&0x03)| ((x<<3)&0x20) )
  #define DIV_BY_4            0x0
  #define DIV_BY_8            0x1
  #define DIV_BY_16           0x2
  #define DIV_BY_32           0x3
  #define DIV_BY_64           0x4
  #define DIV_BY_128          0x5
  #define DIV_BY_256          0x6
  #define DIV_BY_512          0x7
  
  /* DSPI Status bits                                            */
  #define SPSR_SPIF_          0x80 /* Interrupt */
  #define SPSR_WCOL_          0x40 /* Write colision */
  #define SPSR_MODF_          0x10 /* Model fault */
  
  /* DSPI Select Codes For SSCR register                         */
  #define SEL_7               0x80
  #define SEL_6               0x40
  #define SEL_5               0x20
  #define SEL_4               0x10
  #define SEL_3               0x08
  #define SEL_2               0x04
  #define SEL_1               0x02
  #define SEL_0               0x01
#endif


#ifdef DI2CS_ENABLED
  /* DI2CS Status bits                                           */
  #define SR_TREQ                        0x02
  #define SR_RREQ                        0x01
  
/*
  DI2CS CODES written into control register I2CSCR to perfrom an action 
  Naming rules
  <actual state of DI2CS>_<next code>_<RS_value>
*/
  /* DI2CS in IDLE                                               */
  #define IDLE_START_SEND_0             0x03 /* RS=0 */
  #define IDLE_START_SEND_STOP_0        0x07 /* RS=0 */
  
  #define IDLE_START_RECEIVE_nACK_1     0x03 /* RS=1 */
  #define IDLE_START_RECEIVE_STOP_1     0x07 /* RS=1 */
  
  #define IDLE_START_RECEIVE_1          0x0B /* RS=1 */
  #define IDLE_MASTERCODE_HS_0          0x11 /* RS=0 */
  
  /* DI2CS in TRANSMIT                                           */
  #define TRANSMIT_SEND_x               0x01 /* RS=x */
  #define TRANSMIT_STOP_x               0x04 /* RS=x */
  #define TRANSMIT_SEND_STOP_x          0x05 /* RS=x */
  
  #define TRANSMIT_START_SEND_0         0x03 /* RS=0 */
  #define TRANSMIT_START_SEND_STOP_0    0x07 /* RS=0 */
  
  #define TRANSMIT_START_RECEIVE_nACK_1 0x03 /* RS=1 */
  #define TRANSMIT_START_SEND_STOP_1    0x07 /* RS=1 */
  #define TRANSMIT_START_RECEIVE_1      0x0B /* RS=1 */
  
  /* DI2CS in RECEIVE                                            */
  #define RECEIVE_RECEIVE_nACK_x        0x01 /* RS=x */
  #define RECEIVE_STOP_x                0x04 /* RS=x */
  #define RECEIVE_RECEIVE_STOP_x        0x05 /* RS=x */
  #define RECEIVE_RECEIVE_x             0x09 /* RS=x */
  
  #define RECEIVE_START_RECEIVE_nACK_1  0x03 /* RS=1 */
  #define RECEIVE_START_RECEIVE_STOP_1  0x07 /* RS=1 */
  #define RECEIVE_START_RECEIVE_1       0x0B /* RS=1 */
  
  #define RECEIVE_START_SEND_0          0x03 /* RS=0 */
  #define RECEIVE_START_SEND_STOP_0     0x07 /* RS=0 */

#endif

#ifdef DI2CM_ENABLED
  #define RS_1      0x01
  #define RS_0      0xFE
  
  /* DI2CM Status bits                                           */
  #define SR_BUS_BUSY                   0x40
  #define SR_IDLE                       0x20
  #define SR_ARB_LOST                   0x10
  #define SR_DATA_ACK                   0x08
  #define SR_ADDR_ACK                   0x04
  #define SR_ERROR                      0x02
  #define SR_BUSY                       0x01
  
/*
  DI2CM CODES written into control register I2CMCR to perfrom 
  an action. Naming rules
  <actual state of DI2CM>_<next code>_<RS_value>
*/

  /* DI2CM in IDLE state                                        */
  #define IDLE_START_SEND_0             0x03 /* RS=0 */
  #define IDLE_START_SEND_STOP_0        0x07 /* RS=0 */
  
  #define IDLE_START_RECEIVE_nACK_1     0x03 /* RS=1 */
  #define IDLE_START_RECEIVE_STOP_1     0x07 /* RS=1 */
  
  #define IDLE_START_RECEIVE_1          0x0B /* RS=1 */
  #define IDLE_MASTERCODE_HS_x          0x11 /* RS=x */
  
  /* DI2CM in TRANSMIT state                                    */
  #define TRANSMIT_SEND_x               0x01 /* RS=x */
  #define TRANSMIT_STOP_x               0x04 /* RS=x */
  #define TRANSMIT_SEND_STOP_x          0x05 /* RS=x */
  
  #define TRANSMIT_START_SEND_0         0x03 /* RS=0 */
  #define TRANSMIT_START_SEND_STOP_0    0x07 /* RS=0 */
  
  #define TRANSMIT_START_RECEIVE_nACK_1 0x03 /* RS=1 */
  #define TRANSMIT_START_SEND_STOP_1    0x07 /* RS=1 */
  #define TRANSMIT_START_RECEIVE_1      0x0B /* RS=1 */
  
  /* DI2CM in RECEIVE state                                     */
  #define RECEIVE_RECEIVE_nACK_x        0x01 /* RS=x */
  #define RECEIVE_STOP_x                0x04 /* RS=x */
  #define RECEIVE_RECEIVE_STOP_x        0x05 /* RS=x */
  #define RECEIVE_RECEIVE_x             0x09 /* RS=x */
  
  #define RECEIVE_START_RECEIVE_nACK_1  0x03 /* RS=1 */
  #define RECEIVE_START_RECEIVE_STOP_1  0x07 /* RS=1 */
  #define RECEIVE_START_RECEIVE_1       0x0B /* RS=1 */
  
  #define RECEIVE_START_SEND_0          0x03 /* RS=0 */
  #define RECEIVE_START_SEND_STOP_0     0x07 /* RS=0 */
#endif

#endif /*_DR80390XP_H_*/
