//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.H
// @Project       test2.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866
//
// @Compiler      Keil
//
// @Codegenerator 1.0
//
// @Description   This is the include header file for all other modules.
//
//----------------------------------------------------------------------------
// @Date          2/3/2005 11:33:35 AM
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,1)

// USER CODE END



#ifndef _MAIN_H_
#define _MAIN_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

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

void MAIN_vUnlockProtecReg(void);
void MAIN_vlockProtecReg(void);

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
sfr CPU_A      = 0xE0;    
sfr CPU_B      = 0xF0;    
sfr CPU_DPH    = 0x83;    
sfr CPU_DPL    = 0x82;    
sfr CPU_EO     = 0xA2;    
sfr CPU_IEN0   = 0xA8;    
sfr CPU_IEN1   = 0xE8;    
sfr CPU_IP     = 0xB8;    
sfr CPU_IP1    = 0xF8;    
sfr CPU_IPH    = 0xB9;    
sfr CPU_IPH1   = 0xF9;    
sfr CPU_PCON   = 0x87;    
sfr CPU_PSW    = 0xD0;    
sfr CPU_SBUF   = 0x99;    
sfr CPU_SCON   = 0x98;    
sfr CPU_SP     = 0x81;    
sfr CPU_TCON   = 0x88;    
sfr CPU_TH0    = 0x8C;    
sfr CPU_TH1    = 0x8D;    
sfr CPU_TL0    = 0x8A;    
sfr CPU_TL1    = 0x8B;    
sfr CPU_TMOD   = 0x89;    
sfr FLASH_EECPP0 = 0xD5;    //   located in the mapped SFR area
sfr FLASH_EECPP1 = 0xD6;    //   located in the mapped SFR area
sfr FLASH_EECS = 0xD2;    //   located in the mapped SFR area
sfr FLASH_EECSP = 0xD1;    //   located in the mapped SFR area
sfr FLASH_EESER0 = 0xD3;    //   located in the mapped SFR area
sfr FLASH_EESER1 = 0xD4;    //   located in the mapped SFR area
sfr FLASH_FCON0 = 0xD1;    //   located in the mapped SFR area
sfr FLASH_FCON1 = 0xD2;    //   located in the mapped SFR area
sfr FLASH_FCON2 = 0xD3;    //   located in the mapped SFR area
sfr FLASH_FCPP0 = 0xDB;    //   located in the mapped SFR area
sfr FLASH_FCPP1 = 0xDC;    //   located in the mapped SFR area
sfr FLASH_FCS0 = 0xD2;    //   located in the mapped SFR area
sfr FLASH_FCS1 = 0xD5;    //   located in the mapped SFR area
sfr FLASH_FCS2 = 0xDB;    //   located in the mapped SFR area
sfr FLASH_FCSP0 = 0xD1;    //   located in the mapped SFR area
sfr FLASH_FCSP1 = 0xD4;    //   located in the mapped SFR area
sfr FLASH_FCSP2 = 0xD7;    //   located in the mapped SFR area
sfr FLASH_FPTCR = 0xD4;    //   located in the mapped SFR area
sfr FLASH_FPTPS0 = 0xD5;    //   located in the mapped SFR area
sfr FLASH_FPTPS1 = 0xD6;    //   located in the mapped SFR area
sfr FLASH_FSER0 = 0xD3;    //   located in the mapped SFR area
sfr FLASH_FSER1 = 0xD6;    //   located in the mapped SFR area
sfr FLASH_FSER2 = 0xDC;    //   located in the mapped SFR area
sfr FLASH_FTCON = 0xDD;    //   located in the mapped SFR area
sfr FLASH_FTKAS = 0xD7;    //   located in the mapped SFR area
sfr FLASH_FTRL = 0xDE;    //   located in the mapped SFR area
sfr FLASH_PAGE = 0xDF;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_0H = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_0L = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_1H = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_1L = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_2H = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_2L = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_3H = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPDR_3L = 0xF7;    //   located in the mapped SFR area
sfr OCDS_HWBPSR = 0xF6;    //   located in the mapped SFR area
sfr OCDS_MMBPCR = 0xF3;    //   located in the mapped SFR area
sfr OCDS_MMCR  = 0xF1;    //   located in the mapped SFR area
sfr OCDS_MMCR2 = 0xE9;    //   located in the mapped SFR area
sfr OCDS_MMDR_R = 0xF5;    //   located in the mapped SFR area
sfr OCDS_MMDR_T = 0xF5;    //   located in the mapped SFR area
sfr OCDS_MMICR = 0xF4;    //   located in the mapped SFR area
sfr OCDS_MMSR  = 0xF2;    //   located in the mapped SFR area
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
sfr P2_PUDEN   = 0xA1;    
sfr P2_PUDSEL  = 0xA0;    
sfr P3_ALTSEL0 = 0xB0;    
sfr P3_ALTSEL1 = 0xB1;    
sfr P3_DATA    = 0xB0;    
sfr P3_DIR     = 0xB1;    
sfr P3_OD      = 0xB0;    
sfr P3_PUDEN   = 0xB1;    
sfr P3_PUDSEL  = 0xB0;    
sfr PORT_PAGE  = 0xB2;    
sfr SCU_BCON   = 0xBD;    
sfr SCU_BG     = 0xBE;    
sfr SCU_CMCON  = 0xBA;    
sfr SCU_EVRCON0 = 0xB3;    
sfr SCU_EVRCON1 = 0xB4;    
sfr SCU_EVRCON2 = 0xB5;    
sfr SCU_EXICON0 = 0xB7;    
sfr SCU_EXICON1 = 0xBA;    
sfr SCU_FEAH   = 0xBD;    
sfr SCU_FEAL   = 0xBC;    
sfr SCU_ID     = 0xB3;    
sfr SCU_IRCON0 = 0xB4;    
sfr SCU_IRCON1 = 0xB5;    
sfr SCU_IRCON2 = 0xB6;    
sfr SCU_MODPISEL = 0xB3;    
sfr SCU_NMICON = 0xBB;    
sfr SCU_NMISR  = 0xBC;    
sfr SCU_OSC_CON = 0xB6;    
sfr SCU_PAGE   = 0xBF;    
sfr SCU_PASSWD = 0xBB;    
sfr SCU_PLL_CON = 0xB7;    
sfr SCU_PMCON0 = 0xB4;    
sfr SCU_PMCON1 = 0xB5;    
sfr SCU_SYSCON0 = 0x8F;    
sfr SCU_TSCON0 = 0xB6;    
sfr SCU_TSCON1 = 0xB7;    
sfr SSC_BRH    = 0xAF;    
sfr SSC_BRL    = 0xAE;    
sfr SSC_CONH_O = 0xAB;    
sfr SSC_CONH_P = 0xAB;    
sfr SSC_CONL_O = 0xAA;    
sfr SSC_CONL_P = 0xAA;    
sfr SSC_PISEL  = 0xA9;    
sfr SSC_RBL    = 0xAD;    
sfr SSC_TBL    = 0xAC;    
sfr T2_RC2H    = 0xC3;    
sfr T2_RC2L    = 0xC2;    
sfr T2_T2CON   = 0xC0;    
sfr T2_T2H     = 0xC5;    
sfr T2_T2L     = 0xC4;    
sfr T2_T2MOD   = 0xC1;    
sfr WDT_WDTCON = 0xBB;    //   located in the mapped SFR area
sfr WDT_WDTH   = 0xBF;    //   located in the mapped SFR area
sfr WDT_WDTL   = 0xBE;    //   located in the mapped SFR area
sfr WDT_WDTREL = 0xBC;    //   located in the mapped SFR area
sfr WDT_WDTWINB = 0xBD;    //   located in the mapped SFR area

//   SFR bit definitions

//   CPU_A
sbit ACC0       = 0xE0;    
sbit ACC1       = 0xE1;    
sbit ACC2       = 0xE2;    
sbit ACC3       = 0xE3;    
sbit ACC4       = 0xE4;    
sbit ACC5       = 0xE5;    
sbit ACC6       = 0xE6;    
sbit ACC7       = 0xE7;    

//   CPU_B
sbit B0         = 0xF0;    
sbit B1         = 0xF1;    
sbit B2         = 0xF2;    
sbit B3         = 0xF3;    
sbit B4         = 0xF4;    
sbit B5         = 0xF5;    
sbit B6         = 0xF6;    
sbit B7         = 0xF7;    

//   CPU_IEN0
sbit EA         = 0xAF;    
sbit ES         = 0xAC;    
sbit ET0        = 0xA9;    
sbit ET1        = 0xAB;    
sbit ET2        = 0xAD;    
sbit EX0        = 0xA8;    
sbit EX1        = 0xAA;    

//   CPU_IEN1
sbit EADC       = 0xE8;    
sbit ECCIP0     = 0xEC;    
sbit ECCIP1     = 0xED;    
sbit ECCIP2     = 0xEE;    
sbit ECCIP3     = 0xEF;    
sbit ESSC       = 0xE9;    
sbit EX2        = 0xEA;    
sbit EXM        = 0xEB;    

//   CPU_IP1
sbit PADC       = 0xF8;    
sbit PCCIP0     = 0xFC;    
sbit PCCIP1     = 0xFD;    
sbit PCCIP2     = 0xFE;    
sbit PCCIP3     = 0xFF;    
sbit PSSC       = 0xF9;    
sbit PX2        = 0xFA;    
sbit PXM        = 0xFB;    

//   CPU_IP
sbit PS         = 0xBC;    
sbit PT0        = 0xB9;    
sbit PT1        = 0xBB;    
sbit PT2        = 0xBD;    
sbit PX0        = 0xB8;    
sbit PX1        = 0xBA;    

//   CPU_PSW
sbit AC         = 0xD6;    
sbit CY         = 0xD7;    
sbit F0         = 0xD5;    
sbit F1         = 0xD1;    
sbit OV         = 0xD2;    
sbit P          = 0xD0;    
sbit RS0        = 0xD3;    
sbit RS1        = 0xD4;    

//   CPU_SCON
sbit RB8        = 0x9A;    
sbit REN        = 0x9C;    
sbit RI         = 0x98;    
sbit SM0        = 0x9F;    
sbit SM1        = 0x9E;    
sbit SM2        = 0x9D;    
sbit TB8        = 0x9B;    
sbit TI         = 0x99;    

//   CPU_TCON
sbit IE0        = 0x89;    
sbit IE1        = 0x8B;    
sbit IT0        = 0x88;    
sbit IT1        = 0x8A;    
sbit TF0        = 0x8D;    
sbit TF1        = 0x8F;    
sbit TR0        = 0x8C;    
sbit TR1        = 0x8E;    

//   T2_T2CON
sbit C_T2       = 0xC1;    
sbit CP_RL2     = 0xC0;    
sbit EXEN2      = 0xC3;    
sbit EXF2       = 0xC6;    
sbit RCLK       = 0xC5;    
sbit TCLK       = 0xC4;    
sbit TF2        = 0xC7;    
sbit TR2        = 0xC2;    

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

#include "IO.H"
#include "ADC.H"

// USER CODE BEGIN (MAIN_Header,11)

// USER CODE END


#endif  // ifndef _MAIN_H_
