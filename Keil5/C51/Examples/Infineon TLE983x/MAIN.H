//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.h
// @Project       -NA-
//----------------------------------------------------------------------------
// @Controller    Infineon TLE9832
// @Compiler      Keil
// @Description   This is the include header file for all other modules.
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************

#ifndef _MAIN_H_
#define _MAIN_H_

#include <intrins.h>
#include "IO.H"
#include "T01.H"


#define WD_TRIG			0x01   	// WD trigger 16ms
//#define WD_TRIG		0x3F   	// WD trigger 1008ms
#define WD_SOW			0x40	// trigger short open window (1 SOW allowed)
//#define WD_SOW		0xC0	// trigger short open window (3 SOW allowed)

#define _40MHZ		  	1		// chip frequency



// Please ensure that SCU_PAGE is switched to Page 1 before using these macros
#define MAIN_vUnlockProtecReg() PASSWD = 0x9B 
#define MAIN_vlockProtecReg()   PASSWD = 0xAB


#define bool  bit
#define ulong unsigned long
#define uword unsigned int
#define ubyte unsigned char

//Macro Definition For an easier differentiation of XSFRs and SFRs.

#define XSFR(xsfrname)    xsfrname


//   SFR byte definitions
#ifdef __C51__
#define SBIT(name, addr, bit)  sbit  name = (addr^bit)
#define SFR(name, addr)        sfr   name = addr
#define SFR16(name, addr)      sfr16 name = addr
#endif


//   defines for sbit definitions
#define BIT0    0
#define BIT1    1
#define BIT2    2
#define BIT3    3
#define BIT4    4
#define BIT5    5
#define BIT6    6
#define BIT7    7


//   SFR byte definitions
SFR(SP             , 0x81); 
SFR(DPL            , 0x82); 
SFR(DPH            , 0x83); 
SFR(PCON           , 0x87); 
SFR(TCON           , 0x88); 
SFR(TMOD           , 0x89); 
SFR(TL0            , 0x8A); 
SFR(TL1            , 0x8B); 
SFR(TH0            , 0x8C); 
SFR(TH1            , 0x8D); 
SFR(MEX1           , 0x94); 
SFR(MEX2           , 0x95); 
SFR(MEX3           , 0x96); 
SFR(MEXSP          , 0x97); 
SFR(SCON           , 0x98); 
SFR(SBUF           , 0x99); 
SFR(EO             , 0xA2); 
SFR(IEN0           , 0xA8); 
SFR(IP             , 0xB8); 
SFR(IPH            , 0xB9); 
SFR(PSW            , 0xD0); 
SFR(ACC            , 0xE0); 
SFR(IEN1           , 0xE8); 
SFR(B              , 0xF0); 
SFR(IP1            , 0xF8); 
SFR(IPH1           , 0xF9); 
SFR(MDU_MDUSTAT    , 0xB0); 
SFR(MDU_MDUCON     , 0xB1); 
SFR(MDU_MD0        , 0xB2); 
SFR(MDU_MR0        , 0xB2); 
SFR(MDU_MD1        , 0xB3); 
SFR(MDU_MR1        , 0xB3); 
SFR(MDU_MD2        , 0xB4); 
SFR(MDU_MR2        , 0xB4); 
SFR(MDU_MD3        , 0xB5); 
SFR(MDU_MR3        , 0xB5); 
SFR(MDU_MD4        , 0xB6); 
SFR(MDU_MR4        , 0xB6); 
SFR(MDU_MD5        , 0xB7); 
SFR(MDU_MR5        , 0xB7); 
SFR(SYSCON0        , 0x8F); 
SFR(SCU_PAGE       , 0xF1); 
SFR(IRCON0         , 0xF2); 
SFR(IRCON1         , 0xF3); 
SFR(IRCON3         , 0xF5); 
SFR(IRCON4         , 0xF6); 
SFR(NMISR          , 0xF7); 
SFR(NMICON         , 0xF2); 
SFR(EXICON0        , 0xF3); 
SFR(MODIEN         , 0xF7); 
SFR(PASSWD         , 0xF2); 
SFR(PMCON0         , 0xF3); 
SFR(PLL_CON        , 0xF4); 
SFR(CMCON          , 0xF5); 
SFR(WDTCON         , 0xF6); 
SFR(XADDRH         , 0xF2); 
SFR(PMCON1         , 0xF3); 
SFR(RSTCON         , 0xF6); 
SFR(WDTREL         , 0xF3); 
SFR(WDTWINB        , 0xF4); 
SFR(WDTL           , 0xF5); 
SFR(WDTH           , 0xF6); 
SFR(BCON           , 0xF2); 
SFR(BGL            , 0xF3); 
SFR(BGH            , 0xF4); 
SFR(LINST          , 0xF5); 
SFR(ID             , 0xF2); 
SFR(OSC_CON        , 0xF4); 
SFR(COCON          , 0xF5); 
SFR(MODPISEL       , 0xF2); 
SFR(MODPISEL1      , 0xF3); 
SFR(MODPISEL2      , 0xF4); 
SFR(MODSUSP        , 0xF6); 
SFR(EDCCON         , 0xF2); 
SFR(EDCSTAT        , 0xF3); 
SFR(MEMSTAT        , 0xF7); 
SFR(SPARE0         , 0xF2); 
SFR(SPARE1         , 0xF3); 
SFR(P0_POCON0      , 0xF2); 
SFR(P0_POCON1      , 0xF3); 
SFR(P0_POCON2      , 0xF4); 
SFR(TCCR           , 0xF7); 
SFR(P1_POCON0      , 0xF2); 
SFR(P1_POCON1      , 0xF3); 
SFR(P1_POCON2      , 0xF4); 
SFR(XRTESTL        , 0xF2); 
SFR(XRTESTH        , 0xF3); 
SFR(IRTESTL        , 0xF4); 
SFR(IRTESTH        , 0xF5); 
SFR(BRTEST         , 0xF6); 
SFR(MEMTEST        , 0xF7); 
SFR(TSCON0         , 0xF2); 
SFR(TSCON1         , 0xF3); 
SFR(TSCON2         , 0xF4); 
SFR(TSCON3         , 0xF5); 
SFR(VAR_IDL        , 0xF2); 
SFR(VAR_IDH        , 0xF3); 
SFR(OSC_TRIM       , 0xF4); 
SFR(PKGCFG0        , 0xF5); 
SFR(PKGCFG1        , 0xF6); 
SFR(SSTCON         , 0xF7); 
SFR(PORT_PAGE      , 0x8E); 
SFR(P0_DATA        , 0x80); 
SFR(P0_DIR         , 0x86); 
SFR(P1_DATA        , 0x90); 
SFR(P1_DIR         , 0x91); 
SFR(P2_DATA        , 0xC8); 
SFR(P2_DIR         , 0xC9); 
SFR(P0_PUDSEL      , 0x80); 
SFR(P0_PUDEN       , 0x86); 
SFR(P1_PUDSEL      , 0x90); 
SFR(P1_PUDEN       , 0x91); 
SFR(P2_PUDSEL      , 0xC8); 
SFR(P2_PUDEN       , 0xC9); 
SFR(P0_ALTSEL0     , 0x80); 
SFR(P0_ALTSEL1     , 0x86); 
SFR(P1_ALTSEL0     , 0x90); 
SFR(P1_ALTSEL1     , 0x91); 
SFR(P0_OD          , 0x80); 
SFR(P1_OD          , 0x90); 
SFR(ADC_PAGE       , 0xD1); 
SFR(ADC_GLOBCTR    , 0xCA); 
SFR(ADC_GLOBSTR    , 0xCB); 
SFR(ADC_PRAR       , 0xCC); 
SFR(ADC_LCBR       , 0xCD); 
SFR(ADC_INPCR0     , 0xCE); 
SFR(ADC_ETRCR      , 0xCF); 
SFR(ADC_CHCTR0     , 0xCA); 
SFR(ADC_CHCTR1     , 0xCB); 
SFR(ADC_CHCTR2     , 0xCC); 
SFR(ADC_CHCTR3     , 0xCD); 
SFR(ADC_CHCTR4     , 0xCE); 
SFR(ADC_CHCTR5     , 0xCF); 
SFR(ADC_CHCTR6     , 0xD2); 
SFR(ADC_CHCTR7     , 0xD3); 
SFR(ADC_RESR0L     , 0xCA); 
SFR(ADC_RESR0H     , 0xCB); 
SFR(ADC_RESR1L     , 0xCC); 
SFR(ADC_RESR1H     , 0xCD); 
SFR(ADC_RESR2L     , 0xCE); 
SFR(ADC_RESR2H     , 0xCF); 
SFR(ADC_RESR3L     , 0xD2); 
SFR(ADC_RESR3H     , 0xD3); 
SFR(ADC_RESRA0L    , 0xCA); 
SFR(ADC_RESRA0H    , 0xCB); 
SFR(ADC_RESRA1L    , 0xCC); 
SFR(ADC_RESRA1H    , 0xCD); 
SFR(ADC_RESRA2L    , 0xCE); 
SFR(ADC_RESRA2H    , 0xCF); 
SFR(ADC_RESRA3L    , 0xD2); 
SFR(ADC_RESRA3H    , 0xD3); 
SFR(ADC_RCR0       , 0xCA); 
SFR(ADC_RCR1       , 0xCB); 
SFR(ADC_RCR2       , 0xCC); 
SFR(ADC_RCR3       , 0xCD); 
SFR(ADC_VFCR       , 0xCE); 
SFR(ADC_CHINFR     , 0xCA); 
SFR(ADC_CHINCR     , 0xCB); 
SFR(ADC_CHINSR     , 0xCC); 
SFR(ADC_CHINPR     , 0xCD); 
SFR(ADC_EVINFR     , 0xCE); 
SFR(ADC_EVINCR     , 0xCF); 
SFR(ADC_EVINSR     , 0xD2); 
SFR(ADC_EVINPR     , 0xD3); 
SFR(ADC_CRCR1      , 0xCA); 
SFR(ADC_CRPR1      , 0xCB); 
SFR(ADC_CRMR1      , 0xCC); 
SFR(ADC_QMR0       , 0xCD); 
SFR(ADC_QSR0       , 0xCE); 
SFR(ADC_Q0R0       , 0xCF); 
SFR(ADC_QBUR0      , 0xD2); 
SFR(ADC_QINR0      , 0xD2); 
SFR(PERIPHERAL_PAGE, 0xC7); 
SFR(T2_T2CON       , 0xC0); 
SFR(T2_T2MOD       , 0xC1); 
SFR(T2_RC2L        , 0xC2); 
SFR(T2_RC2H        , 0xC3); 
SFR(T2_T2L         , 0xC4); 
SFR(T2_T2H         , 0xC5); 
SFR(T2_T2CON1      , 0xC6); 
SFR(T21_T2CON      , 0xC0); 
SFR(T21_T2MOD      , 0xC1); 
SFR(T21_RC2L       , 0xC2); 
SFR(T21_RC2H       , 0xC3); 
SFR(T21_T2L        , 0xC4); 
SFR(T21_T2H        , 0xC5); 
SFR(T21_T2CON1     , 0xC6); 
SFR(CCU6_PAGE      , 0xA3); 
SFR(CCU6_CC63SRL   , 0x9A); 
SFR(CCU6_CC63SRH   , 0x9B); 
SFR(CCU6_TCTR4L    , 0x9C); 
SFR(CCU6_TCTR4H    , 0x9D); 
SFR(CCU6_MCMOUTSL  , 0x9E); 
SFR(CCU6_MCMOUTSH  , 0x9F); 
SFR(CCU6_ISRL      , 0xA4); 
SFR(CCU6_ISRH      , 0xA5); 
SFR(CCU6_CMPMODIFL , 0xA6); 
SFR(CCU6_CMPMODIFH , 0xA7); 
SFR(CCU6_CC60SRL   , 0xFA); 
SFR(CCU6_CC60SRH   , 0xFB); 
SFR(CCU6_CC61SRL   , 0xFC); 
SFR(CCU6_CC61SRH   , 0xFD); 
SFR(CCU6_CC62SRL   , 0xFE); 
SFR(CCU6_CC62SRH   , 0xFF); 
SFR(CCU6_CC63RL    , 0x9A); 
SFR(CCU6_CC63RH    , 0x9B); 
SFR(CCU6_T12PRL    , 0x9C); 
SFR(CCU6_T12PRH    , 0x9D); 
SFR(CCU6_T13PRL    , 0x9E); 
SFR(CCU6_T13PRH    , 0x9F); 
SFR(CCU6_T12DTCL   , 0xA4); 
SFR(CCU6_T12DTCH   , 0xA5); 
SFR(CCU6_TCTR0L    , 0xA6); 
SFR(CCU6_TCTR0H    , 0xA7); 
SFR(CCU6_CC60RL    , 0xFA); 
SFR(CCU6_CC60RH    , 0xFB); 
SFR(CCU6_CC61RL    , 0xFC); 
SFR(CCU6_CC61RH    , 0xFD); 
SFR(CCU6_CC62RL    , 0xFE); 
SFR(CCU6_CC62RH    , 0xFF); 
SFR(CCU6_T12MSELL  , 0x9A); 
SFR(CCU6_T12MSELH  , 0x9B); 
SFR(CCU6_IENL      , 0x9C); 
SFR(CCU6_IENH      , 0x9D); 
SFR(CCU6_INPL      , 0x9E); 
SFR(CCU6_INPH      , 0x9F); 
SFR(CCU6_ISSL      , 0xA4); 
SFR(CCU6_ISSH      , 0xA5); 
SFR(CCU6_PSLR      , 0xA6); 
SFR(CCU6_MCMCTRL   , 0xA7); 
SFR(CCU6_TCTR2L    , 0xFA); 
SFR(CCU6_TCTR2H    , 0xFB); 
SFR(CCU6_MODCTRL   , 0xFC); 
SFR(CCU6_MODCTRH   , 0xFD); 
SFR(CCU6_TRPCTRL   , 0xFE); 
SFR(CCU6_TRPCTRH   , 0xFF); 
SFR(CCU6_MCMOUTL   , 0x9A); 
SFR(CCU6_MCMOUTH   , 0x9B); 
SFR(CCU6_ISL       , 0x9C); 
SFR(CCU6_ISH       , 0x9D); 
SFR(CCU6_PISEL0L   , 0x9E); 
SFR(CCU6_PISEL0H   , 0x9F); 
SFR(CCU6_PISEL2    , 0xA4); 
SFR(CCU6_MCMCTRH   , 0xA7); 
SFR(CCU6_T12L      , 0xFA); 
SFR(CCU6_T12H      , 0xFB); 
SFR(CCU6_T13L      , 0xFC); 
SFR(CCU6_T13H      , 0xFD); 
SFR(CCU6_CMPSTATL  , 0xFE); 
SFR(CCU6_CMPSTATH  , 0xFF); 
SFR(SSC_PISEL      , 0xA9); 
SFR(SSC_CONL_O     , 0xAA); 
SFR(SSC_CONH_O     , 0xAB); 
SFR(SSC_CONL_P     , 0xAA); 
SFR(SSC_CONH_P     , 0xAB); 
SFR(SSC_TBL        , 0xAC); 
SFR(SSC_RBL        , 0xAD); 
SFR(SSC_BRL        , 0xAE); 
SFR(SSC_BRH        , 0xAF); 

//   SFR bit definitions
//   IEN0
#define IEN0_BASE    0xA8
SBIT(EA         ,IEN0_BASE,BIT7);
SBIT(ES         ,IEN0_BASE,BIT4);
SBIT(ET0        ,IEN0_BASE,BIT1);
SBIT(ET1        ,IEN0_BASE,BIT3);
SBIT(ET2        ,IEN0_BASE,BIT5);
SBIT(EX0        ,IEN0_BASE,BIT0);
SBIT(EX1        ,IEN0_BASE,BIT2);
#undef IEN0_BASE    

//   IEN1
#define IEN1_BASE    0xE8
SBIT(EADC       ,IEN1_BASE,BIT0);
SBIT(ECCIP0     ,IEN1_BASE,BIT4);
SBIT(ECCIP1     ,IEN1_BASE,BIT5);
SBIT(ECCIP2     ,IEN1_BASE,BIT6);
SBIT(ECCIP3     ,IEN1_BASE,BIT7);
SBIT(ESSC       ,IEN1_BASE,BIT1);
SBIT(EX2        ,IEN1_BASE,BIT2);
SBIT(EXM        ,IEN1_BASE,BIT3);
#undef IEN1_BASE    

//   IP1
#define IP1_BASE    0xF8
SBIT(PADC       ,IP1_BASE,BIT0);
SBIT(PCCIP0     ,IP1_BASE,BIT4);
SBIT(PCCIP1     ,IP1_BASE,BIT5);
SBIT(PCCIP2     ,IP1_BASE,BIT6);
SBIT(PCCIP3     ,IP1_BASE,BIT7);
SBIT(PSSC       ,IP1_BASE,BIT1);
SBIT(PX2        ,IP1_BASE,BIT2);
SBIT(PXM        ,IP1_BASE,BIT3);
#undef IP1_BASE    

//   IP
#define IP_BASE    0xB8
SBIT(PS         ,IP_BASE,BIT4);
SBIT(PT0        ,IP_BASE,BIT1);
SBIT(PT1        ,IP_BASE,BIT3);
SBIT(PT2        ,IP_BASE,BIT5);
SBIT(PX0        ,IP_BASE,BIT0);
SBIT(PX1        ,IP_BASE,BIT2);
#undef IP_BASE    

//   MDU_MDUSTAT
#define MDU_MDUSTAT_BASE    0xB0
SBIT(IERR       ,MDU_MDUSTAT_BASE,BIT1);
SBIT(IRDY       ,MDU_MDUSTAT_BASE,BIT0);
SBIT(MDU_BSY    ,MDU_MDUSTAT_BASE,BIT2);
#undef MDU_MDUSTAT_BASE    

//   PSW
#define PSW_BASE    0xD0
SBIT(AC         ,PSW_BASE,BIT6);
SBIT(CY         ,PSW_BASE,BIT7);
SBIT(F0         ,PSW_BASE,BIT5);
SBIT(F1         ,PSW_BASE,BIT1);
SBIT(OV         ,PSW_BASE,BIT2);
SBIT(P          ,PSW_BASE,BIT0);
SBIT(RS0        ,PSW_BASE,BIT3);
SBIT(RS1        ,PSW_BASE,BIT4);
#undef PSW_BASE    

//   SCON
#define SCON_BASE    0x98
SBIT(RB8        ,SCON_BASE,BIT2);
SBIT(REN        ,SCON_BASE,BIT4);
SBIT(RI         ,SCON_BASE,BIT0);
SBIT(SM0        ,SCON_BASE,BIT7);
SBIT(SM1        ,SCON_BASE,BIT6);
SBIT(SM2        ,SCON_BASE,BIT5);
SBIT(TB8        ,SCON_BASE,BIT3);
SBIT(TI         ,SCON_BASE,BIT1);
#undef SCON_BASE    

//   T2_T2CON and T21_T2CON
#define T2_T2CON_BASE    0xC0
SBIT(C_T2       ,T2_T2CON_BASE,BIT1);
SBIT(CP_RL2     ,T2_T2CON_BASE,BIT0);
SBIT(EXEN2      ,T2_T2CON_BASE,BIT3);
SBIT(EXF2       ,T2_T2CON_BASE,BIT6);
SBIT(TF2        ,T2_T2CON_BASE,BIT7);
SBIT(TR2        ,T2_T2CON_BASE,BIT2);
#undef T2_T2CON_BASE    

//   TCON
#define TCON_BASE    0x88
SBIT(IE0        ,TCON_BASE,BIT1);
SBIT(IE1        ,TCON_BASE,BIT3);
SBIT(IT0        ,TCON_BASE,BIT0);
SBIT(IT1        ,TCON_BASE,BIT2);
SBIT(TF0        ,TCON_BASE,BIT5);
SBIT(TF1        ,TCON_BASE,BIT7);
SBIT(TR0        ,TCON_BASE,BIT4);
SBIT(TR1        ,TCON_BASE,BIT6);
#undef TCON_BASE    

//   Definition of the 16-bit SFR
//   sfr16 data type to access two 8-bit SFRs as a single 16-bit SFR.
//SFR16(DPTR         , 0x82); // 16 bit address  // this line would cause an error with the inline assembler
SFR16(IPLH           , 0xB8); // 16 bit address
SFR16(WDTLH          , 0xF5); // 16 bit address
SFR16(ADC_RESR0LH    , 0xCA); // 16 bit address
SFR16(ADC_RESR1LH    , 0xCC); // 16 bit address
SFR16(ADC_RESR2LH    , 0xCE); // 16 bit address
SFR16(ADC_RESR3LH    , 0xD2); // 16 bit address
SFR16(ADC_RESRA0LH   , 0xCA); // 16 bit address
SFR16(ADC_RESRA1LH   , 0xCC); // 16 bit address
SFR16(ADC_RESRA2LH   , 0xCE); // 16 bit address
SFR16(ADC_RESRA3LH   , 0xD2); // 16 bit address
SFR16(T2_RC2LH       , 0xC2); // 16 bit address
SFR16(T2_T2LH        , 0xC4); // 16 bit address
SFR16(T21_RC2LH      , 0xC2); // 16 bit address
SFR16(T21_T2LH       , 0xC4); // 16 bit address
SFR16(CCU6_CC63SRLH  , 0x9A); // 16 bit address
SFR16(CCU6_TCTR4LH   , 0x9C); // 16 bit address
SFR16(CCU6_MCMOUTSLH , 0x9E); // 16 bit address
SFR16(CCU6_ISRLH     , 0xA4); // 16 bit address
SFR16(CCU6_CMPMODIFLH, 0xA6); // 16 bit address
SFR16(CCU6_CC60SRLH  , 0xFA); // 16 bit address
SFR16(CCU6_CC61SRLH  , 0xFC); // 16 bit address
SFR16(CCU6_CC62SRLH  , 0xFE); // 16 bit address
SFR16(CCU6_CC63RLH   , 0x9A); // 16 bit address
SFR16(CCU6_T12PRLH   , 0x9C); // 16 bit address
SFR16(CCU6_T13PRLH   , 0x9E); // 16 bit address
SFR16(CCU6_T12DTCLH  , 0xA4); // 16 bit address
SFR16(CCU6_TCTR0LH   , 0xA6); // 16 bit address
SFR16(CCU6_CC60RLH   , 0xFA); // 16 bit address
SFR16(CCU6_CC61RLH   , 0xFC); // 16 bit address
SFR16(CCU6_CC62RLH   , 0xFE); // 16 bit address
SFR16(CCU6_T12MSELLH , 0x9A); // 16 bit address
SFR16(CCU6_IENLH     , 0x9C); // 16 bit address
SFR16(CCU6_INPLH     , 0x9E); // 16 bit address
SFR16(CCU6_ISSLH     , 0xA4); // 16 bit address
SFR16(CCU6_TCTR2LH   , 0xFA); // 16 bit address
SFR16(CCU6_MODCTRLH  , 0xFC); // 16 bit address
SFR16(CCU6_TRPCTRLH  , 0xFE); // 16 bit address
SFR16(CCU6_MCMOUTLH  , 0x9A); // 16 bit address
SFR16(CCU6_ISLH      , 0x9C); // 16 bit address
SFR16(CCU6_PISEL0LH  , 0x9E); // 16 bit address
SFR16(CCU6_MCMCTR    , 0xA7); // 16 bit address
SFR16(CCU6_T12LH     , 0xFA); // 16 bit address
SFR16(CCU6_T13LH     , 0xFC); // 16 bit address
SFR16(CCU6_CMPSTATLH , 0xFE); // 16 bit address
SFR16(SSC_CONLH      , 0xAA); // 16 bit address
SFR16(SSC_BRLH       , 0xAE); // 16 bit address

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
#define _su3 SCU_PAGE=3 // SCU_PAGE postfix
#define _su4 SCU_PAGE=4 // SCU_PAGE postfix
#define _su5 SCU_PAGE=5 // SCU_PAGE postfix
#define _su6 SCU_PAGE=6 // SCU_PAGE postfix
#define _su7 SCU_PAGE=7 // SCU_PAGE postfix
#define _su8 SCU_PAGE=8 // SCU_PAGE postfix
#define _su9 SCU_PAGE=9 // SCU_PAGE postfix
#define _su10 SCU_PAGE=10 // SCU_PAGE postfix
#define _su11 SCU_PAGE=11 // SCU_PAGE postfix
#define _su12 SCU_PAGE=12 // SCU_PAGE postfix
#define _su13 SCU_PAGE=13 // SCU_PAGE postfix
#define _su14 SCU_PAGE=14 // SCU_PAGE postfix
#define _su15 SCU_PAGE=15 // SCU_PAGE postfix

//   CCU6_PAGE
#define _cc0 CCU6_PAGE=0 // CCU6_PAGE postfix
#define _cc1 CCU6_PAGE=1 // CCU6_PAGE postfix
#define _cc2 CCU6_PAGE=2 // CCU6_PAGE postfix
#define _cc3 CCU6_PAGE=3 // CCU6_PAGE postfix

//   T2_PAGE
#define _t21 PERIPHERAL_PAGE=8 // T21_PAGE postfix
#define _t2 PERIPHERAL_PAGE=0 // T2_PAGE postfix

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


#define _su  SCU_PAGE // SCU_PAGE

#ifdef __C51__
#define STR_PAGE(pg,op)  { _push_(op); \
   pg ; }

#define RST_PAGE(op)  _pop_(op)

//   Definition of the X-SFRS
//   Note: pdata is used here for optimized access, therefore corresponding
//         switches and setting should be configured in startup file.
//         By default, DAvE generated startup file will have the required
//         settings.  

/*Main wake status register*/
#define    WAKE_STATUS               ( *((volatile unsigned char pdata *) 0x00 ))
/*Voltage Reg Status*/
#define    PMU_SUPPLY_STS            ( *((volatile unsigned char pdata *) 0x01 ))
/*Error Indications PMU*/
#define    PMU_ERROR_STS             ( *((volatile unsigned char pdata *) 0x03 ))
/*Reset Status*/
#define    PMU_RST_STS               ( *((volatile unsigned char pdata *) 0x04 ))
/*Reset Control*/
#define    PMU_RST_CTRL              ( *((volatile unsigned char pdata *) 0x05 ))
/*Reset Pin Blind Time*/
#define    RESPIN_BLIND_TIME         ( *((volatile unsigned char pdata *) 0x1B ))
/*PMU Wake-up Control*/
#define    PMU_WAKEUP_CTRL           ( *((volatile unsigned char pdata *) 0x08 ))
/*Dead Time in Cycle Sense*/
#define    CNF_CYC_SENSE             ( *((volatile unsigned char pdata *) 0x0A ))
/*Dead Time in Cycle Wake*/
#define    CNF_CYC_WAKE              ( *((volatile unsigned char pdata *) 0x0B ))
/*Sample Delay in Cycle Sense*/
#define    CNF_CYC_SAMPLE_DEL        ( *((volatile unsigned char pdata *) 0x0C ))
/*PMU Wake-up Timing*/
#define    PMU_WAKEUP_TIMING         ( *((volatile unsigned char pdata *) 0x2B ))
/*WakeStatus Fail*/
#define    WAKE_STS_FAIL             ( *((volatile unsigned char pdata *) 0x20 ))
/*Wake Status MON Inputs*/
#define    WAKE_STS_MON              ( *((volatile unsigned char pdata *) 0x21 ))
/*Wake Status GPIO 0*/
#define    WAKE_STS_GPIO0            ( *((volatile unsigned char pdata *) 0x22 ))
/*Wake Status GPIO 1*/
#define    WAKE_STS_GPIO1            ( *((volatile unsigned char pdata *) 0x23 ))
/*System Fail Status*/
#define    SYS_FAIL_STS              ( *((volatile unsigned char pdata *) 0x1C ))
/*Hall Supply Control*/
#define    HALL_SUPPLY_CTRL          ( *((volatile unsigned char pdata *) 0x02 ))
/*Analog Module Clock 1 Control and Status Register*/
#define    AMCLK1_CTRL_STS           ( *((volatile unsigned char pdata *) 0x19 ))
/*Analog Module Clock 2 Control and Status Register*/
#define    AMCLK2_CTRL_STS           ( *((volatile unsigned char pdata *) 0x1A ))
/*Analog Module Clock 3 Control and Status Register*/
#define    AMCLK3_CTRL_STS           ( *((volatile unsigned char pdata *) 0xB4 ))
/*Timer 3 Clock Control Register*/
#define    T3_CLK_CTRL               ( *((volatile unsigned char pdata *) 0xCA ))
/*Analog Module Clock 1 Frequency Status Register*/
#define    AMCLK1_FREQ_STS           ( *((volatile unsigned char pdata *) 0xE9 ))
/*Analog Module Clock 2 Frequency Status Register*/
#define    AMCLK2_FREQ_STS           ( *((volatile unsigned char pdata *) 0xEA ))
/*Analog Module Clock Control and Register*/
#define    AMCLK_CTRL                ( *((volatile unsigned char pdata *) 0xEC ))
/*Analog Module Clock 1 Lower Limit Register*/
#define    AMCLK1_LOW_TH_HYS         ( *((volatile unsigned char pdata *) 0xED ))
/*Analog Module Clock 1 Upper Limit Register*/
#define    AMCLK1_UP_TH_HYS          ( *((volatile unsigned char pdata *) 0xEE ))
/*Analog Module Clock 2 Lower Limit Register*/
#define    AMCLK2_LOW_TH_HYS         ( *((volatile unsigned char pdata *) 0xEF ))
/*Analog Module Clock 2 Upper Limit Register*/
#define    AMCLK2_UP_TH_HYS          ( *((volatile unsigned char pdata *) 0xF0 ))
/*System Startup Status*/
#define    SYS_STRTUP_STS            ( *((volatile unsigned char pdata *) 0x2C ))
/*Supplement Control*/
#define    SUPPLEMENT_CTRL           ( *((volatile unsigned char pdata *) 0xA9 ))
/*Interrupt Status Module Overview*/
#define    INTERRUPT_STATUS          ( *((volatile unsigned char pdata *) 0x06 ))
/*System Interrupt Status 1*/
#define    SYS_IS_1                  ( *((volatile unsigned char pdata *) 0x09 ))
/*System Supply Interrupt Status*/
#define    SYS_SUPPLY_IRQ_STS        ( *((volatile unsigned char pdata *) 0x68 ))
/*System Interrupt Status 2*/
#define    SYS_IS_2                  ( *((volatile unsigned char pdata *) 0xAC ))
/*System Interrupt Status 3*/
#define    SYS_IS_3                  ( *((volatile unsigned char pdata *) 0xAD ))
/*System Supply Interrupt Control*/
#define    SYS_SUPPLY_IRQ_CTRL       ( *((volatile unsigned char pdata *) 0x66 ))
/*System Interrupt Control 1*/
#define    SYS_IRQ_CTRL_1            ( *((volatile unsigned char pdata *) 0x67 ))
/*System Interrupt Control 2*/
#define    SYS_IRQ_CTRL_2            ( *((volatile unsigned char pdata *) 0xAA ))
/*System Interrupt Control 3*/
#define    SYS_IRQ_CTRL_3            ( *((volatile unsigned char pdata *) 0xAB ))
/*System Supply Status*/
#define    SYS_SUPPLY_STS            ( *((volatile unsigned char pdata *) 0x69 ))
/*System Status 1*/
#define    SYS_STS_1                 ( *((volatile unsigned char pdata *) 0x6A ))
/*System Status 2*/
#define    SYS_STS_2                 ( *((volatile unsigned char pdata *) 0x6B ))
/*System Status 3*/
#define    SYS_STS_3                 ( *((volatile unsigned char pdata *) 0xAE ))
/*System Status 4*/
#define    SYS_STS_4                 ( *((volatile unsigned char pdata *) 0xAF ))
/*Wake Configuration GPIO Port 0 Raising Edge*/
#define    WAKE_CONF_GPIOP0_RI       ( *((volatile unsigned char pdata *) 0x24 ))
/*Wake Configuration GPIO Port 0 Falling Edge*/
#define    WAKE_CONF_GPIOP0_FA       ( *((volatile unsigned char pdata *) 0x25 ))
/*Wake Configuration GPIO Port 1 Raising Edge*/
#define    WAKE_CONF_GPIOP1_RI       ( *((volatile unsigned char pdata *) 0x26 ))
/*Wake Configuration GPIO Port 1 Falling Edge*/
#define    WAKE_CONF_GPIOP1_FA       ( *((volatile unsigned char pdata *) 0x27 ))
/*Wake Src 0 Cycle Enabled*/
#define    WAKE_CNF_GPIO0_CYC        ( *((volatile unsigned char pdata *) 0x28 ))
/*Wake Src 1 Cycle Enabled*/
#define    WAKE_CNF_GPIO1_CYC        ( *((volatile unsigned char pdata *) 0x29 ))
/*Power Control Unit Control Status 2*/
#define    PCU_CTRL_STS_2            ( *((volatile unsigned char pdata *) 0x63 ))
/*Power Control Unit Control Status 1*/
#define    PCU_CTRL_STS_1            ( *((volatile unsigned char pdata *) 0x65 ))
/*Power Control Unit Control Status 3*/
#define    PCU_CTRL_STS_3            ( *((volatile unsigned char pdata *) 0xFD ))
/*Power Control Unit Control Status 4*/
#define    PCU_CTRL_STS_4            ( *((volatile unsigned char pdata *) 0xFE ))
/*WDT1_Watchdog _control*/
#define    WDT1_TRIG                 ( *((volatile unsigned char pdata *) 0x07 ))
/*MON1 Control Status*/
#define    MON1_CTRL_STS             ( *((volatile unsigned char pdata *) 0x0D ))
/*MON2 Control Status*/
#define    MON2_CTRL_STS             ( *((volatile unsigned char pdata *) 0x0E ))
/*MON3 Control Status*/
#define    MON3_CTRL_STS             ( *((volatile unsigned char pdata *) 0x0F ))
/*MON4 Control Status*/
#define    MON4_CTRL_STS             ( *((volatile unsigned char pdata *) 0x10 ))
/*MON5 Control Status*/
#define    MON5_CTRL_STS             ( *((volatile unsigned char pdata *) 0x11 ))
/*LIN Transceiver Control and Status 1*/
#define    LIN_CTRL_STS_1            ( *((volatile unsigned char pdata *) 0x12 ))
/*LIN Control and Status 2*/
#define    LIN_CTRL_STS_2            ( *((volatile unsigned char pdata *) 0x13 ))
/*LIN Control and Status 3*/
#define    LIN_CTRL_STS_3            ( *((volatile unsigned char pdata *) 0x14 ))
/*High-Side Switch 1 Control*/
#define    HS1_CTRL                  ( *((volatile unsigned char pdata *) 0x17 ))
/*High-Side Switch 1 Configuration*/
#define    HS1_CTRL2                 ( *((volatile unsigned char pdata *) 0x18 ))
/*High-Side Switch 2 Control*/
#define    HS2_CTRL                  ( *((volatile unsigned char pdata *) 0x1E ))
/*High-Side Switch 2 Configuration*/
#define    HS2_CTRL2                 ( *((volatile unsigned char pdata *) 0x1F ))
/*Low-Side Switch 1 Control*/
#define    LS1_CTRL                  ( *((volatile unsigned char pdata *) 0x15 ))
/*Low-Side Switch 2 Control*/
#define    LS2_CTRL                  ( *((volatile unsigned char pdata *) 0x16 ))
/*PWM1 Frequency Divider*/
#define    PWMGEN1_FREQ_DIV          ( *((volatile unsigned char pdata *) 0xB0 ))
/*PWM1 Duty Cycle*/
#define    PWMGEN1_DUTY_CYCLE        ( *((volatile unsigned char pdata *) 0xB1 ))
/*PWM2 frequency divider*/
#define    PWMGEN2_FREQ_DIV          ( *((volatile unsigned char pdata *) 0xB2 ))
/*PWM2 Duty Cycle*/
#define    PWMGEN2_DUTY_CYCLE        ( *((volatile unsigned char pdata *) 0xB3 ))
/*PWM Control Register*/
#define    PWMGEN_CTRL               ( *((volatile unsigned char pdata *) 0xC8 ))
/*Low Side PWM Control Register*/
#define    PWMGEN_OUT_CTRL           ( *((volatile unsigned char pdata *) 0xC9 ))
/*VMON Sense Control Register*/
#define    VMON_SEN_CTRL             ( *((volatile unsigned char pdata *) 0xB9 ))
/*VSUPPLY Sense Control Register 1*/
#define    VSUPP_SEN_CTRL_1          ( *((volatile unsigned char pdata *) 0xBB ))
/*VSUPPLY Sense Control Register 2*/
#define    VSUPP_SEN_CTRL_2          ( *((volatile unsigned char pdata *) 0xF5 ))
/*Temperature Sensor Control Register*/
#define    TEMPSENSE_CTRL            ( *((volatile unsigned char pdata *) 0xB7 ))
/*Loss of Ground Status Register*/
#define    LoG_STS                   ( *((volatile unsigned char pdata *) 0xA8 ))
/*Channel Settings Bits for Exceptional Interrupt Measurement*/
#define    MEAS_ADC2_CHx_EIM         ( *((volatile unsigned char pdata *) 0x1D ))
/*Measurement Control ADC/MI Unit*/
#define    MEAS_CTRL1_ADC2           ( *((volatile unsigned char pdata *) 0x2D ))
/*Measurement Control ADC/MI Unit*/
#define    MEAS_CTRL2_ADC2           ( *((volatile unsigned char pdata *) 0x2E ))
/*Measurement Control 3 ADC/MI Unit*/
#define    MEAS_CTRL3_ADC2           ( *((volatile unsigned char pdata *) 0x2F ))
/*Measurement Channel Enable Bits for Cycle 1*/
#define    MEAS_ADC2_SQ1             ( *((volatile unsigned char pdata *) 0x30 ))
/*Measurement Channel Enable Bits for Cycle 2*/
#define    MEAS_ADC2_SQ2             ( *((volatile unsigned char pdata *) 0x31 ))
/*Measurement Channel Enable Bits for Cycle 3*/
#define    MEAS_ADC2_SQ3             ( *((volatile unsigned char pdata *) 0x32 ))
/*Measurement Channel Enable Bits for Cycle 4*/
#define    MEAS_ADC2_SQ4             ( *((volatile unsigned char pdata *) 0x33 ))
/*Measurement Channel Enable Bits for Cycle 5*/
#define    MEAS_ADC2_SQ5             ( *((volatile unsigned char pdata *) 0x34 ))
/*Measurement Channel Enable Bits for Cycle 6*/
#define    MEAS_ADC2_SQ6             ( *((volatile unsigned char pdata *) 0x35 ))
/*Measurement Channel Enable Bits for Cycle 7*/
#define    MEAS_ADC2_SQ7             ( *((volatile unsigned char pdata *) 0x36 ))
/*Measurement Channel Enable Bits for Cycle 8*/
#define    MEAS_ADC2_SQ8             ( *((volatile unsigned char pdata *) 0x37 ))
/*Measurement Channel Enable Bits for Cycle 9*/
#define    MEAS_ADC2_SQ9             ( *((volatile unsigned char pdata *) 0x38 ))
/*Measurement Channel Enable Bits for Cycle 10*/
#define    MEAS_ADC2_SQ10            ( *((volatile unsigned char pdata *) 0x39 ))
/*Measurement Control 4 ADC/MI Unit*/
#define    MEAS_CTRL4_ADC2           ( *((volatile unsigned char pdata *) 0x43 ))
/*Channel Settings Bits for Exceptional Interrupt Measurement*/
#define    MEAS_ADC2_SQ_FB           ( *((volatile unsigned char pdata *) 0x6F ))
/*Measurement Channel Enable Bits for Cycle 1 and 2*/
#define    MEAS_ADC2_SQ1_2_int       ( *((volatile unsigned char pdata *) 0x70 ))
/*Measurement Channel Enable Bits for Cycle 3 and 4*/
#define    MEAS_ADC2_SQ3_4_int       ( *((volatile unsigned char pdata *) 0x71 ))
/*Measurement Channel Enable Bits for Cycle 5 and 6*/
#define    MEAS_ADC2_SQ5_6_int       ( *((volatile unsigned char pdata *) 0x72 ))
/*Measurement Channel Enable Bits for Cycle 7 and 8*/
#define    MEAS_ADC2_SQ7_8_int       ( *((volatile unsigned char pdata *) 0x73 ))
/*Measurement Channel Enable Bits for Cycle 9 and 10*/
#define    MEAS_ADC2_SQ9_10_int      ( *((volatile unsigned char pdata *) 0x74 ))
/*Measurement Control 5 ADC/MI Unit*/
#define    MEAS_CTRL5_ADC2           ( *((volatile unsigned char pdata *) 0x86 ))
/*Calibration of Offset for Channel 7*/
#define    ADC2_CALOFFS_CH7          ( *((volatile unsigned char pdata *) 0x77 ))
/*Filter Coefficients ADC Channel 0-3*/
#define    ADC2_FILTCOEFF0_3         ( *((volatile unsigned char pdata *) 0x3A ))
/*Filter Coefficients ADC Channel 4-5*/
#define    ADC2_FILTCOEFF4_5         ( *((volatile unsigned char pdata *) 0x3B ))
/*Upper Threshold Filter Enable Ch 0-5*/
#define    ADC2_FILT_UP_CTRL_0_5     ( *((volatile unsigned char pdata *) 0x3C ))
/*Lower Threshold Filter Enable Ch 0-5*/
#define    ADC2_FILT_LO_CTRL_0_5     ( *((volatile unsigned char pdata *) 0x3D ))
/*ADC or Filter Output Channel 0*/
#define    ADC2_FILT_OUT0            ( *((volatile unsigned char pdata *) 0x3E ))
/*ADC or Filter Output Channel 1*/
#define    ADC2_FILT_OUT1            ( *((volatile unsigned char pdata *) 0x3F ))
/*ADC or Filter Output Channel 2*/
#define    ADC2_FILT_OUT2            ( *((volatile unsigned char pdata *) 0x40 ))
/*ADC or Filter Output Channel 3*/
#define    ADC2_FILT_OUT3            ( *((volatile unsigned char pdata *) 0x41 ))
/*ADC or Filter Output Channel 4*/
#define    ADC2_FILT_OUT4            ( *((volatile unsigned char pdata *) 0x42 ))
/*Upper Comparator Trigger Level Channel 0*/
#define    ADC2_TH0_UPPER            ( *((volatile unsigned char pdata *) 0x46 ))
/*Upper Comparator Trigger Level Channel 1*/
#define    ADC2_TH1_UPPER            ( *((volatile unsigned char pdata *) 0x47 ))
/*Upper Comparator Trigger Level Channel 2*/
#define    ADC2_TH2_UPPER            ( *((volatile unsigned char pdata *) 0x48 ))
/*Upper Comparator Trigger Level Channel 3*/
#define    ADC2_TH3_UPPER            ( *((volatile unsigned char pdata *) 0x49 ))
/*Upper Comparator Trigger Level Channel 4*/
#define    ADC2_TH4_UPPER            ( *((volatile unsigned char pdata *) 0x4A ))
/*Upper Counter Trigger Level Channel 0*/
#define    ADC2_CNT0_UPPER           ( *((volatile unsigned char pdata *) 0x4E ))
/*Upper Counter Trigger Level Channel 1*/
#define    ADC2_CNT1_UPPER           ( *((volatile unsigned char pdata *) 0x4F ))
/*Upper Counter Trigger Level Channel 2*/
#define    ADC2_CNT2_UPPER           ( *((volatile unsigned char pdata *) 0x50 ))
/*Upper Counter Trigger Level Channel 3*/
#define    ADC2_CNT3_UPPER           ( *((volatile unsigned char pdata *) 0x51 ))
/*Upper Counter Trigger Level Channel 4*/
#define    ADC2_CNT4_UPPER           ( *((volatile unsigned char pdata *) 0x52 ))
/*Lower Comparator Trigger Level Channel 0*/
#define    ADC2_TH0_LOWER            ( *((volatile unsigned char pdata *) 0x56 ))
/*Lower Comparator Trigger Level Channel 1*/
#define    ADC2_TH1_LOWER            ( *((volatile unsigned char pdata *) 0x57 ))
/*Lower Comparator Trigger Level Channel 2*/
#define    ADC2_TH2_LOWER            ( *((volatile unsigned char pdata *) 0x58 ))
/*Lower Comparator Trigger Level Channel 3*/
#define    ADC2_TH3_LOWER            ( *((volatile unsigned char pdata *) 0x59 ))
/*Lower Comparator Trigger Level Channel 4*/
#define    ADC2_TH4_LOWER            ( *((volatile unsigned char pdata *) 0x5A ))
/*Lower Counter Trigger Level Channel 0*/
#define    ADC2_CNT0_LOWER           ( *((volatile unsigned char pdata *) 0x5E ))
/*Lower Counter Trigger Level Channel 1*/
#define    ADC2_CNT1_LOWER           ( *((volatile unsigned char pdata *) 0x5F ))
/*Lower Counter Trigger Level Channel 2*/
#define    ADC2_CNT2_LOWER           ( *((volatile unsigned char pdata *) 0x60 ))
/*Lower Counter Trigger Level Channel 3*/
#define    ADC2_CNT3_LOWER           ( *((volatile unsigned char pdata *) 0x61 ))
/*Lower Counter Trigger Level Channel 4*/
#define    ADC2_CNT4_LOWER           ( *((volatile unsigned char pdata *) 0x62 ))
/*Overvoltage Measurement Mode of Ch 0-3*/
#define    ADC2_MMODE0_3             ( *((volatile unsigned char pdata *) 0x6C ))
/*Overvoltage Measurement Mode of Ch 4-5*/
#define    ADC2_MMODE4_5             ( *((volatile unsigned char pdata *) 0x6D ))
/*Overvoltage Measurement Mode of Ch 6-9*/
#define    ADC2_ADC2MMODE6_9         ( *((volatile unsigned char pdata *) 0x6E ))
/*Calibration of Offset for Channel 6*/
#define    ADC2_CALOFFS_CH6          ( *((volatile unsigned char pdata *) 0x75 ))
/*Calibration of Gain for Channel 6*/
#define    ADC2_CALGAIN_CH6          ( *((volatile unsigned char pdata *) 0x76 ))
/*Calibration of Gain for Channel 7*/
#define    ADC2_CALGAIN_CH7          ( *((volatile unsigned char pdata *) 0x78 ))
/*Calibration of Offset for Channel 8*/
#define    ADC2_CALOFFS_CH8          ( *((volatile unsigned char pdata *) 0x79 ))
/*Calibration of Gain for Channel 8*/
#define    ADC2_CALGAIN_CH8          ( *((volatile unsigned char pdata *) 0x7A ))
/*Calibration of Offset for Channel 9*/
#define    ADC2_CALOFFS_CH9          ( *((volatile unsigned char pdata *) 0x7B ))
/*Calibration of Gain for Channel 9*/
#define    ADC2_CALGAIN_CH9          ( *((volatile unsigned char pdata *) 0x7C ))
/*Filter Length ADC Channel 6-9*/
#define    ADC2_FILTCOEFF6_9         ( *((volatile unsigned char pdata *) 0x7D ))
/*Upper Threshold Filter Enable Ch 6-9*/
#define    ADC2_FILT_UP_CTRL_6_9     ( *((volatile unsigned char pdata *) 0x7F ))
/*Lower Threshold Filter Enable Ch 6-9*/
#define    ADC2_FILT_LO_CTRL_6_9     ( *((volatile unsigned char pdata *) 0x80 ))
/*ADC or Filter Output Channel 5*/
#define    ADC2_FILT_OUT5            ( *((volatile unsigned char pdata *) 0x81 ))
/*ADC or Filter Output Channel 6*/
#define    ADC2_FILT_OUT6            ( *((volatile unsigned char pdata *) 0x82 ))
/*ADC or Filter Output Channel 7*/
#define    ADC2_FILT_OUT7            ( *((volatile unsigned char pdata *) 0x83 ))
/*ADC or Filter Output Channel 8*/
#define    ADC2_FILT_OUT8            ( *((volatile unsigned char pdata *) 0x84 ))
/*ADC or Filter Output Channel 9*/
#define    ADC2_FILT_OUT9            ( *((volatile unsigned char pdata *) 0x85 ))
/*Upper Comparator Trigger Level Channel 5*/
#define    ADC2_TH5_UPPER            ( *((volatile unsigned char pdata *) 0x89 ))
/*Upper Comparator Trigger Level Channel 6*/
#define    ADC2_TH6_UPPER            ( *((volatile unsigned char pdata *) 0x8A ))
/*Upper Comparator Trigger Level Channel 7*/
#define    ADC2_TH7_UPPER            ( *((volatile unsigned char pdata *) 0x8B ))
/*Upper Comparator Trigger Level Channel 8*/
#define    ADC2_TH8_UPPER            ( *((volatile unsigned char pdata *) 0x8C ))
/*Upper Comparator Trigger Level Channel 8*/
#define    ADC2_TH9_UPPER            ( *((volatile unsigned char pdata *) 0x8D ))
/*Upper Counter Trigger Level Channel 5*/
#define    ADC2_CNT5_UPPER           ( *((volatile unsigned char pdata *) 0x91 ))
/*Upper Counter Trigger Level Channel 6*/
#define    ADC2_CNT6_UPPER           ( *((volatile unsigned char pdata *) 0x92 ))
/*Upper Counter Trigger Level Channel 7*/
#define    ADC2_CNT7_UPPER           ( *((volatile unsigned char pdata *) 0x93 ))
/*Upper Counter Trigger Level Channel 8*/
#define    ADC2_CNT8_UPPER           ( *((volatile unsigned char pdata *) 0x94 ))
/*Upper Counter Trigger Level Channel 9*/
#define    ADC2_CNT9_UPPER           ( *((volatile unsigned char pdata *) 0x95 ))
/*Lower Comparator Trigger Level Channel 5*/
#define    ADC2_TH5_LOWER            ( *((volatile unsigned char pdata *) 0x9A ))
/*Lower Comparator Trigger Level Channel 6*/
#define    ADC2_TH6_LOWER            ( *((volatile unsigned char pdata *) 0x9B ))
/*Lower Comparator Trigger Level Channel 7*/
#define    ADC2_TH7_LOWER            ( *((volatile unsigned char pdata *) 0x9C ))
/*Lower Comparator Trigger Level Channel 8*/
#define    ADC2_TH8_LOWER            ( *((volatile unsigned char pdata *) 0x9D ))
/*Lower Comparator Trigger Level Channel 9*/
#define    ADC2_TH9_LOWER            ( *((volatile unsigned char pdata *) 0x9E ))
/*Lower Counter Trigger Level Channel 5*/
#define    ADC2_CNT5_LOWER           ( *((volatile unsigned char pdata *) 0xA2 ))
/*Lower Counter Trigger Level Channel 6*/
#define    ADC2_CNT6_LOWER           ( *((volatile unsigned char pdata *) 0xA3 ))
/*Lower Counter Trigger Level Channel 7*/
#define    ADC2_CNT7_LOWER           ( *((volatile unsigned char pdata *) 0xA4 ))
/*Lower Counter Trigger Level Channel 7*/
#define    ADC2_CNT8_LOWER           ( *((volatile unsigned char pdata *) 0xA5 ))
/*Lower Counter Trigger Level Channel 9*/
#define    ADC2_CNT9_LOWER           ( *((volatile unsigned char pdata *) 0xA6 ))
/*Calibration of Offset for Channel 0*/
#define    ADC2_CALOFFS_CH0          ( *((volatile unsigned char pdata *) 0xBC ))
/*Calibration of Gain for Channel 0*/
#define    ADC2_CALGAIN_CH0          ( *((volatile unsigned char pdata *) 0xBD ))
/*Calibration of Offset for Channel 1*/
#define    ADC2_CALOFFS_CH1          ( *((volatile unsigned char pdata *) 0xBE ))
/*Calibration of Gain for Channel 1*/
#define    ADC2_CALGAIN_CH1          ( *((volatile unsigned char pdata *) 0xBF ))
/*Calibration of Offset for Channel 2*/
#define    ADC2_CALOFFS_CH2          ( *((volatile unsigned char pdata *) 0xC0 ))
/*Calibration of Gain for Channel 2*/
#define    ADC2_CALGAIN_CH2          ( *((volatile unsigned char pdata *) 0xC1 ))
/*Calibration of Offset for Channel 3*/
#define    ADC2_CALOFFS_CH3          ( *((volatile unsigned char pdata *) 0xC2 ))
/*Calibration of Gain for Channel 3*/
#define    ADC2_CALGAIN_CH3          ( *((volatile unsigned char pdata *) 0xC3 ))
/*Calibration of Offset for Channel 4*/
#define    ADC2_CALOFFS_CH4          ( *((volatile unsigned char pdata *) 0xC4 ))
/*Calibration of Gain for Channel 4*/
#define    ADC2_CALGAIN_CH4          ( *((volatile unsigned char pdata *) 0xC5 ))
/*Calibration of Offset for Channel 5*/
#define    ADC2_CALOFFS_CH5          ( *((volatile unsigned char pdata *) 0xC6 ))
/*Calibration of Gain for Channel 5*/
#define    ADC2_CALGAIN_CH5          ( *((volatile unsigned char pdata *) 0xC7 ))
/*PWM Control Register*/
#define    T3_TRIGG_CTRL             ( *((volatile unsigned char pdata *) 0x64 ))
/*Timer 3 Low Byte*/
#define    TIMER3_LOW                ( *((volatile unsigned char pdata *) 0xCB ))
/*Timer 3 High Byte*/
#define    TIMER3_HIGH               ( *((volatile unsigned char pdata *) 0xCC ))
/*Timer 3 Control Register*/
#define    TIMER3_CTRL               ( *((volatile unsigned char pdata *) 0xCD ))
/*Timer 3 Mode Configuration Register*/
#define    TIMER3_MODE_CONF          ( *((volatile unsigned char pdata *) 0xCE ))
/*Timer 3 Compare Value Low Byte*/
#define    TIMER3_CMP_LO             ( *((volatile unsigned char pdata *) 0xFA ))
/*Timer 3 Compare Value High Byte*/
#define    TIMER3_CMP_HI             ( *((volatile unsigned char pdata *) 0xFB ))

#endif  // __C51__

#endif  // ifndef _MAIN_H_
