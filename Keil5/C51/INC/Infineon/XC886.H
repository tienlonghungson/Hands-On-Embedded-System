//****************************************************************************
// @Module        Project Settings
// @Filename      XC886.H
// @Project       XC886.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC886
//
// @Compiler      Keil
//
// @Codegenerator 0.1
//
// @Description   This is the include header file for all other modules.
//
//----------------------------------------------------------------------------
// @Date          1/25/2006 4:17:21 PM
// @Date          13.03.2009 added FIXXC800
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,1)

// USER CODE END



#ifndef _MAIN_H_
#define _MAIN_H_

#pragma FIXXC800     // bypass SYS XC8.001 problem

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// Please ensure that SCU_PAGE is switched to Page 1 before using these macros
#define MAIN_vUnlockProtecReg() PASSWD = 0x9B 
#define MAIN_vlockProtecReg()   PASSWD = 0xAB

// USER CODE BEGIN (MAIN_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,4)

// USER CODE END

#define bool  bit
#define ulong unsigned long
#define uword unsigned int
#define ubyte unsigned char


#define KEIL


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************


// USER CODE BEGIN (MAIN_Header,5)

// USER CODE END


//   -------------------------------------------------------------------------
//   Declaration of SFRs
//   -------------------------------------------------------------------------

//   Notes: You can avoid the problem that your compiler does not yet support 
//          the latest derivatives if you use the SFR definitions generated 
//          by DAvE instead of those that come along with your compiler (in 
//          the "Register File").

//          PORT SFRs are defined in file 'IO.H'.

//   SFR byte definitions
sfr ACC        = 0xE0;    
sfr ADC_CHCTR0 = 0xCA;    
sfr ADC_CHCTR1 = 0xCB;    
sfr ADC_CHCTR2 = 0xCC;    
sfr ADC_CHCTR3 = 0xCD;    
sfr ADC_CHCTR4 = 0xCE;    
sfr ADC_CHCTR5 = 0xCF;    
sfr ADC_CHCTR6 = 0xD2;    
sfr ADC_CHCTR7 = 0xD3;    
sfr ADC_CHINCR = 0xCB;    
sfr ADC_CHINFR = 0xCA;    
sfr ADC_CHINPR = 0xCD;    
sfr ADC_CHINSR = 0xCC;    
sfr ADC_CRCR1  = 0xCA;    
sfr ADC_CRMR1  = 0xCC;    
sfr ADC_CRPR1  = 0xCB;    
sfr ADC_ETRCR  = 0xCF;    
sfr ADC_EVINCR = 0xCF;    
sfr ADC_EVINFR = 0xCE;    
sfr ADC_EVINPR = 0xD3;    
sfr ADC_EVINSR = 0xD2;    
sfr ADC_GLOBCTR = 0xCA;    
sfr ADC_GLOBSTR = 0xCB;    
sfr ADC_INPCR0 = 0xCE;    
sfr ADC_LCBR   = 0xCD;    
sfr ADC_PAGE   = 0xD1;    
sfr ADC_PRAR   = 0xCC;    
sfr ADC_Q0R0   = 0xCF;    
sfr ADC_QBUR0  = 0xD2;    
sfr ADC_QINR0  = 0xD2;    
sfr ADC_QMR0   = 0xCD;    
sfr ADC_QSR0   = 0xCE;    
sfr ADC_RCR0   = 0xCA;    
sfr ADC_RCR1   = 0xCB;    
sfr ADC_RCR2   = 0xCC;    
sfr ADC_RCR3   = 0xCD;    
sfr ADC_RESR0H = 0xCB;    
sfr ADC_RESR0L = 0xCA;    
sfr ADC_RESR1H = 0xCD;    
sfr ADC_RESR1L = 0xCC;    
sfr ADC_RESR2H = 0xCF;    
sfr ADC_RESR2L = 0xCE;    
sfr ADC_RESR3H = 0xD3;    
sfr ADC_RESR3L = 0xD2;    
sfr ADC_RESRA0H = 0xCB;    
sfr ADC_RESRA0L = 0xCA;    
sfr ADC_RESRA1H = 0xCD;    
sfr ADC_RESRA1L = 0xCC;    
sfr ADC_RESRA2H = 0xCF;    
sfr ADC_RESRA2L = 0xCE;    
sfr ADC_RESRA3H = 0xD3;    
sfr ADC_RESRA3L = 0xD2;    
sfr ADC_VFCR   = 0xCE;    
sfr B          = 0xF0;    
sfr BCON       = 0xBD;    
sfr BG         = 0xBE;    
sfr CCU6_CC60RH = 0xFB;    
sfr CCU6_CC60RL = 0xFA;    
sfr CCU6_CC60SRH = 0xFB;    
sfr CCU6_CC60SRL = 0xFA;    
sfr CCU6_CC61RH = 0xFD;    
sfr CCU6_CC61RL = 0xFC;    
sfr CCU6_CC61SRH = 0xFD;    
sfr CCU6_CC61SRL = 0xFC;    
sfr CCU6_CC62RH = 0xFF;    
sfr CCU6_CC62RL = 0xFE;    
sfr CCU6_CC62SRH = 0xFF;    
sfr CCU6_CC62SRL = 0xFE;    
sfr CCU6_CC63RH = 0x9B;    
sfr CCU6_CC63RL = 0x9A;    
sfr CCU6_CC63SRH = 0x9B;    
sfr CCU6_CC63SRL = 0x9A;    
sfr CCU6_CMPMODIFH = 0xA7;    
sfr CCU6_CMPMODIFL = 0xA6;    
sfr CCU6_CMPSTATH = 0xFF;    
sfr CCU6_CMPSTATL = 0xFE;    
sfr CCU6_IENH  = 0x9D;    
sfr CCU6_IENL  = 0x9C;    
sfr CCU6_INPH  = 0x9F;    
sfr CCU6_INPL  = 0x9E;    
sfr CCU6_ISH   = 0x9D;    
sfr CCU6_ISL   = 0x9C;    
sfr CCU6_ISRH  = 0xA5;    
sfr CCU6_ISRL  = 0xA4;    
sfr CCU6_ISSH  = 0xA5;    
sfr CCU6_ISSL  = 0xA4;    
sfr CCU6_MCMCTR = 0xA7;    
sfr CCU6_MCMOUTH = 0x9B;    
sfr CCU6_MCMOUTL = 0x9A;    
sfr CCU6_MCMOUTSH = 0x9F;    
sfr CCU6_MCMOUTSL = 0x9E;    
sfr CCU6_MODCTRH = 0xFD;    
sfr CCU6_MODCTRL = 0xFC;    
sfr CCU6_PAGE  = 0xA3;    
sfr CCU6_PISEL0H = 0x9F;    
sfr CCU6_PISEL0L = 0x9E;    
sfr CCU6_PISEL2 = 0xA4;    
sfr CCU6_PSLR  = 0xA6;    
sfr CCU6_T12DTCH = 0xA5;    
sfr CCU6_T12DTCL = 0xA4;    
sfr CCU6_T12H  = 0xFB;    
sfr CCU6_T12L  = 0xFA;    
sfr CCU6_T12MSELH = 0x9B;    
sfr CCU6_T12MSELL = 0x9A;    
sfr CCU6_T12PRH = 0x9D;    
sfr CCU6_T12PRL = 0x9C;    
sfr CCU6_T13H  = 0xFD;    
sfr CCU6_T13L  = 0xFC;    
sfr CCU6_T13PRH = 0x9F;    
sfr CCU6_T13PRL = 0x9E;    
sfr CCU6_TCTR0H = 0xA7;    
sfr CCU6_TCTR0L = 0xA6;    
sfr CCU6_TCTR2H = 0xFB;    
sfr CCU6_TCTR2L = 0xFA;    
sfr CCU6_TCTR4H = 0x9D;    
sfr CCU6_TCTR4L = 0x9C;    
sfr CCU6_TRPCTRH = 0xFF;    
sfr CCU6_TRPCTRL = 0xFE;    
sfr CD_CON     = 0xA1;    
sfr CD_CORDXH  = 0x9B;    
sfr CD_CORDXL  = 0x9A;    
sfr CD_CORDYH  = 0x9D;    
sfr CD_CORDYL  = 0x9C;    
sfr CD_CORDZH  = 0x9F;    
sfr CD_CORDZL  = 0x9E;    
sfr CD_STATC   = 0xA0;    
sfr CMCON      = 0xBA;    
sfr COCON      = 0xBE;    
sfr DPH        = 0x83;    
sfr DPL        = 0x82;    
sfr EO         = 0xA2;    
sfr EXICON0    = 0xB7;    
sfr EXICON1    = 0xBA;    
sfr FDCON      = 0xE9;    
sfr FDRES      = 0xEB;    
sfr FDSTEP     = 0xEA;    
sfr FEAH       = 0xBD;    
sfr FEAL       = 0xBC;    
sfr HWBPDR     = 0xF7;    
sfr HWBPSR     = 0xF6;    
sfr ID         = 0xB3;    
sfr IEN0       = 0xA8;    
sfr IEN1       = 0xE8;    
sfr IP         = 0xB8;    
sfr IP1        = 0xF8;    
sfr IPH        = 0xB9;    
sfr IPH1       = 0xF9;    
sfr IRCON0     = 0xB4;    
sfr IRCON1     = 0xB5;    
sfr IRCON2     = 0xB6;    
sfr IRCON3     = 0xB4;    
sfr IRCON4     = 0xB5;    
sfr MISC_CON   = 0xE9;    
sfr MMBPCR     = 0xF3;    
sfr MMCR       = 0xF1;    
sfr MMCR2      = 0xE9;    
sfr MMDR       = 0xF5;    
sfr MMICR      = 0xF4;    
sfr MMSR       = 0xF2;    
sfr MMWR1      = 0xEB;    
sfr MMWR2      = 0xEC;    
sfr MODPISEL   = 0xB3;    
sfr MODPISEL1  = 0xB7;    
sfr MODPISEL2  = 0xBA;    
sfr MODSUSP    = 0xBD;    
sfr NMICON     = 0xBB;    
sfr NMISR      = 0xBC;    
sfr OSC_CON    = 0xB6;    
sfr P0_ALTSEL0 = 0x80;    
sfr P0_ALTSEL1 = 0x86;    
sfr P0_DATA    = 0x80;    
sfr P0_DIR     = 0x86;    
sfr P0_OD      = 0x80;    
sfr P0_PUDEN   = 0x86;    
sfr P0_PUDSEL  = 0x80;    
sfr P1_ALTSEL0 = 0x90;    
sfr P1_ALTSEL1 = 0x91;    
sfr P1_DATA    = 0x90;    
sfr P1_DIR     = 0x91;    
sfr P1_OD      = 0x90;    
sfr P1_PUDEN   = 0x91;    
sfr P1_PUDSEL  = 0x90;    
sfr P2_DATA    = 0xA0;    
sfr P2_DIR     = 0xA1;    
sfr P2_PUDEN   = 0xA1;    
sfr P2_PUDSEL  = 0xA0;    
sfr P3_ALTSEL0 = 0xB0;    
sfr P3_ALTSEL1 = 0xB1;    
sfr P3_DATA    = 0xB0;    
sfr P3_DIR     = 0xB1;    
sfr P3_OD      = 0xB0;    
sfr P3_PUDEN   = 0xB1;    
sfr P3_PUDSEL  = 0xB0;    
sfr P4_ALTSEL0 = 0xC8;    
sfr P4_ALTSEL1 = 0xC9;    
sfr P4_DATA    = 0xC8;    
sfr P4_DIR     = 0xC9;    
sfr P4_OD      = 0xC8;    
sfr P4_PUDEN   = 0xC9;    
sfr P4_PUDSEL  = 0xC8;    
sfr P5_ALTSEL0 = 0x92;    
sfr P5_ALTSEL1 = 0x93;    
sfr P5_DATA    = 0x92;    
sfr P5_DIR     = 0x93;    
sfr P5_OD      = 0x92;    
sfr P5_PUDEN   = 0x93;    
sfr P5_PUDSEL  = 0x92;    
sfr PASSWD     = 0xBB;    
sfr PCON       = 0x87;    
sfr PLL_CON    = 0xB7;    
sfr PMCON0     = 0xB4;    
sfr PMCON1     = 0xB5;    
sfr PMCON2     = 0xBB;    
sfr PORT_PAGE  = 0xB2;    
sfr PSW        = 0xD0;    
sfr SBUF       = 0x99;    
sfr SCON       = 0x98;    
sfr SCU_PAGE   = 0xBF;    
sfr SP         = 0x81;    
sfr SSC_BRH    = 0xAF;    
sfr SSC_BRL    = 0xAE;    
sfr SSC_CONH_O = 0xAB;    
sfr SSC_CONH_P = 0xAB;    
sfr SSC_CONL_O = 0xAA;    
sfr SSC_CONL_P = 0xAA;    
sfr SSC_PISEL  = 0xA9;    
sfr SSC_RBL    = 0xAD;    
sfr SSC_TBL    = 0xAC;    
sfr SYSCON0    = 0x8F;    
sfr T21_RC2H   = 0xC3;    
sfr T21_RC2L   = 0xC2;    
sfr T21_T2CON  = 0xC0;    
sfr T21_T2H    = 0xC5;    
sfr T21_T2L    = 0xC4;    
sfr T21_T2MOD  = 0xC1;    
sfr T2_RC2H    = 0xC3;    
sfr T2_RC2L    = 0xC2;    
sfr T2_T2CON   = 0xC0;    
sfr T2_T2H     = 0xC5;    
sfr T2_T2L     = 0xC4;    
sfr T2_T2MOD   = 0xC1;    
sfr TCON       = 0x88;    
sfr TH0        = 0x8C;    
sfr TH1        = 0x8D;    
sfr TL0        = 0x8A;    
sfr TL1        = 0x8B;    
sfr TMOD       = 0x89;    
sfr UART1_BCON = 0xCA;    
sfr UART1_BG   = 0xCB;    
sfr UART1_FDCON = 0xCC;    
sfr UART1_FDRES = 0xCE;    
sfr UART1_FDSTEP = 0xCD;    
sfr UART1_SBUF = 0xC9;    
sfr UART1_SCON = 0xC8;    
sfr WDTCON     = 0xBB;    //   located in the mapped SFR area
sfr WDTH       = 0xBF;    //   located in the mapped SFR area
sfr WDTL       = 0xBE;    //   located in the mapped SFR area
sfr WDTREL     = 0xBC;    //   located in the mapped SFR area
sfr WDTWINB    = 0xBD;    //   located in the mapped SFR area
sfr XADDRH     = 0xB3;    

//   SFR bit definitions

//   CD_STATC
sbit CD_BSY     = 0xA0;    
sbit DMAP       = 0xA4;    
sbit EOC        = 0xA2;    
sbit ERROR      = 0xA1;    
sbit INT_EN     = 0xA3;    
sbit KEEPX      = 0xA5;    
sbit KEEPY      = 0xA6;    
sbit KEEPZ      = 0xA7;    

//   IEN0
sbit EA         = 0xAF;    
sbit ES         = 0xAC;    
sbit ET0        = 0xA9;    
sbit ET1        = 0xAB;    
sbit ET2        = 0xAD;    
sbit EX0        = 0xA8;    
sbit EX1        = 0xAA;    

//   IEN1
sbit EADC       = 0xE8;    
sbit ECCIP0     = 0xEC;    
sbit ECCIP1     = 0xED;    
sbit ECCIP2     = 0xEE;    
sbit ECCIP3     = 0xEF;    
sbit ESSC       = 0xE9;    
sbit EX2        = 0xEA;    
sbit EXM        = 0xEB;    

//   IP1
sbit PADC       = 0xF8;    
sbit PCCIP0     = 0xFC;    
sbit PCCIP1     = 0xFD;    
sbit PCCIP2     = 0xFE;    
sbit PCCIP3     = 0xFF;    
sbit PSSC       = 0xF9;    
sbit PX2        = 0xFA;    
sbit PXM        = 0xFB;    

//   IP
sbit PS         = 0xBC;    
sbit PT0        = 0xB9;    
sbit PT1        = 0xBB;    
sbit PT2        = 0xBD;    
sbit PX0        = 0xB8;    
sbit PX1        = 0xBA;    

//   PSW
sbit AC         = 0xD6;    
sbit CY         = 0xD7;    
sbit F0         = 0xD5;    
sbit F1         = 0xD1;    
sbit OV         = 0xD2;    
sbit P          = 0xD0;    
sbit RS0        = 0xD3;    
sbit RS1        = 0xD4;    

//   SCON
sbit RB8        = 0x9A;    
sbit REN        = 0x9C;    
sbit RI         = 0x98;    
sbit SM0        = 0x9F;    
sbit SM1        = 0x9E;    
sbit SM2        = 0x9D;    
sbit TB8        = 0x9B;    
sbit TI         = 0x99;    

//   T2_T2CON and T21_T2CON
sbit C_T2       = 0xC1;    
sbit CP_RL2     = 0xC0;    
sbit EXEN2      = 0xC3;    
sbit EXF2       = 0xC6;    
sbit TF2        = 0xC7;    
sbit TR2        = 0xC2;    

//   TCON
sbit IE0        = 0x89;    
sbit IE1        = 0x8B;    
sbit IT0        = 0x88;    
sbit IT1        = 0x8A;    
sbit TF0        = 0x8D;    
sbit TF1        = 0x8F;    
sbit TR0        = 0x8C;    
sbit TR1        = 0x8E;    

//   UART1_SCON
sbit RB8_1      = 0xCA;    
sbit REN_1      = 0xCC;    
sbit RI_1       = 0xC8;    
sbit SM0_1      = 0xCF;    
sbit SM1_1      = 0xCE;    
sbit SM2_1      = 0xCD;    
sbit TB8_1      = 0xCB;    
sbit TI_1       = 0xC9;    

//   Definition of the PAGE SFR

//   PORT_PAGE
#define _pp0 PORT_PAGE=0 // PORT_PAGE postfix
#define _pp1 PORT_PAGE=1 // PORT_PAGE postfix
#define _pp2 PORT_PAGE=2 // PORT_PAGE postfix
#define _pp3 PORT_PAGE=3 // PORT_PAGE postfix

//   ADC_PAGE
#define _ad0 ADC_PAGE=0 // ADC_PAGE postfix
#define _ad1 ADC_PAGE=1 // ADC_PAGE postfix
#define _ad2 ADC_PAGE=2 // ADC_PAGE postfix
#define _ad3 ADC_PAGE=3 // ADC_PAGE postfix
#define _ad4 ADC_PAGE=4 // ADC_PAGE postfix
#define _ad5 ADC_PAGE=5 // ADC_PAGE postfix
#define _ad6 ADC_PAGE=6 // ADC_PAGE postfix

//   SCU_PAGE
#define _su0 SCU_PAGE=0 // SCU_PAGE postfix
#define _su1 SCU_PAGE=1 // SCU_PAGE postfix
#define _su2 SCU_PAGE=2 // SCU_PAGE postfix
#define _su3 SCU_PAGE=3 // SCU_PAGE postfix

//   CCU6_PAGE
#define _cc0 CCU6_PAGE=0 // CCU6_PAGE postfix
#define _cc1 CCU6_PAGE=1 // CCU6_PAGE postfix
#define _cc2 CCU6_PAGE=2 // CCU6_PAGE postfix
#define _cc3 CCU6_PAGE=3 // CCU6_PAGE postfix

#define SST0  0x80        // Save SFR page to ST0
#define RST0  0xC0        // Restore SFR page from ST0
#define SST1  0x90        // Save SFR page to ST1
#define RST1  0xD0        // Restore SFR page from ST1
#define SST2  0xA0        // Save SFR page to ST2
#define RST2  0xE0        // Restore SFR page from ST2
#define SST3  0xB0        // Save SFR page to ST3
#define RST3  0xF0        // Restore SFR page from ST3
#define noSST 0x00        // Switch page without saving

#define SFR_PAGE(pg,op) pg+op

//   SYSCON0_RMAP
//   The access to the mapped SFR area is enabled.
#define SET_RMAP() SYSCON0 |= 0x01

//   The access to the standard SFR area is enabled.
#define RESET_RMAP() SYSCON0 &= ~0x01

//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,6)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,7)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,9)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,10)

// USER CODE END


//****************************************************************************
// @Project Includes
//****************************************************************************






#include <intrins.h>


// USER CODE BEGIN (MAIN_Header,11)

// USER CODE END


#endif  // ifndef _MAIN_H_
