//****************************************************************************
// @Module        Project Settings
// @Filename      XC822.H
// @Project       XC822.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822MT-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.2
//
// @Description   This is the include header file for all other modules.
//
//----------------------------------------------------------------------------
// @Date          26.05.2010 11:40:57
//
//****************************************************************************

#ifndef _XC822_H_
#define _XC822_H_

//****************************************************************************
// @Macros
//****************************************************************************

// Please ensure that SCU_PAGE is switched to Page 1 before using these macros
#define MAIN_vUnlockProtecReg() PASSWD = 0x9B 
#define MAIN_vlockProtecReg()   PASSWD = 0xAB


//****************************************************************************
// @Defines
//****************************************************************************

#define bool  bit
#define ulong unsigned long
#define uword unsigned int
#define ubyte unsigned char


//   -------------------------------------------------------------------------
//   Declaration of SFRs
//   -------------------------------------------------------------------------

//   Notes: You can avoid the problem that your compiler does not yet support 
//          the latest derivatives if you use the SFR definitions generated 
//          by DAvE instead of those that come along with your compiler (in 
//          the "Register File").

//          PORT SFRs are defined in file 'IO.H'.

#define SBIT(name, addr, bit)  sbit  name = (addr^bit)
#define SFR(name, addr)        sfr   name = addr
#define SFR16(name, addr)      sfr16 name = addr


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
SFR(ACC       , 0xE0);    
SFR(ADC_ALR0  , 0xCF);    
SFR(ADC_CHCTR0, 0xCA);    
SFR(ADC_CHCTR1, 0xCB);    
SFR(ADC_CHCTR2, 0xCC);    
SFR(ADC_CHCTR3, 0xCD);    
SFR(ADC_CHCTR4, 0xCE);    
SFR(ADC_CHCTR5, 0xCF);    
SFR(ADC_CHCTR6, 0xD2);    
SFR(ADC_CHCTR7, 0xD3);    
SFR(ADC_CHINCR, 0xCB);    
SFR(ADC_CHINFR, 0xCA);    
SFR(ADC_CHINSR, 0xCC);    
SFR(ADC_CNF   , 0xD2);    
SFR(ADC_CRCR1 , 0xCA);    
SFR(ADC_CRMR1 , 0xCC);    
SFR(ADC_CRPR1 , 0xCB);    
SFR(ADC_ENORC , 0xD3);    
SFR(ADC_ETRCR , 0xD3);    
SFR(ADC_EVINCR, 0xCF);    
SFR(ADC_EVINFR, 0xCE);    
SFR(ADC_EVINSR, 0xD2);    
SFR(ADC_GLOBCTR, 0xCA);    
SFR(ADC_GLOBSTR, 0xCB);    
SFR(ADC_INPCR0, 0xCE);    
SFR(ADC_LCBR0 , 0xCD);    
SFR(ADC_LCBR1 , 0xCF);    
SFR(ADC_LORE  , 0xD2);    
SFR(ADC_PAGE  , 0xD1);    
SFR(ADC_PRAR  , 0xCC);    
SFR(ADC_Q0R0  , 0xCF);    
SFR(ADC_QBUR0 , 0xD2);    
SFR(ADC_QINR0 , 0xD2);    
SFR(ADC_QMR0  , 0xCD);    
SFR(ADC_QSR0  , 0xCE);    
SFR(ADC_RCR0  , 0xCA);    
SFR(ADC_RCR1  , 0xCB);    
SFR(ADC_RCR2  , 0xCC);    
SFR(ADC_RCR3  , 0xCD);    
SFR(ADC_RESR0H, 0xCB);    
SFR(ADC_RESR0L, 0xCA);    
SFR(ADC_RESR1H, 0xCD);    
SFR(ADC_RESR1L, 0xCC);    
SFR(ADC_RESR2H, 0xCF);    
SFR(ADC_RESR2L, 0xCE);    
SFR(ADC_RESR3H, 0xD3);    
SFR(ADC_RESR3L, 0xD2);    
SFR(ADC_VFCR  , 0xCE);    
SFR(B         , 0xF0);    
SFR(BCON      , 0xF2);    
SFR(BGH       , 0xF4);    
SFR(BGL       , 0xF3);    
SFR(CCU6_CC60RH, 0xFB);    
SFR(CCU6_CC60RL, 0xFA);    
SFR(CCU6_CC60SRH, 0xFB);    
SFR(CCU6_CC60SRL, 0xFA);    
SFR(CCU6_CC61RH, 0xFD);    
SFR(CCU6_CC61RL, 0xFC);    
SFR(CCU6_CC61SRH, 0xFD);    
SFR(CCU6_CC61SRL, 0xFC);    
SFR(CCU6_CC62RH, 0xFF);    
SFR(CCU6_CC62RL, 0xFE);    
SFR(CCU6_CC62SRH, 0xFF);    
SFR(CCU6_CC62SRL, 0xFE);    
SFR(CCU6_CC63RH, 0x9B);    
SFR(CCU6_CC63RL, 0x9A);    
SFR(CCU6_CC63SRH, 0x9B);    
SFR(CCU6_CC63SRL, 0x9A);    
SFR(CCU6_CMPMODIFH, 0xA7);    
SFR(CCU6_CMPMODIFL, 0xA6);    
SFR(CCU6_CMPSTATH, 0xFF);    
SFR(CCU6_CMPSTATL, 0xFE);    
SFR(CCU6_IENH , 0x9D);    
SFR(CCU6_IENL , 0x9C);    
SFR(CCU6_INPH , 0x9F);    
SFR(CCU6_INPL , 0x9E);    
SFR(CCU6_ISH  , 0x9D);    
SFR(CCU6_ISL  , 0x9C);    
SFR(CCU6_ISRH , 0xA5);    
SFR(CCU6_ISRL , 0xA4);    
SFR(CCU6_ISSH , 0xA5);    
SFR(CCU6_ISSL , 0xA4);    
SFR(CCU6_MCMCTR, 0xA7);    
SFR(CCU6_MCMOUTH, 0x9B);    
SFR(CCU6_MCMOUTL, 0x9A);    
SFR(CCU6_MCMOUTSH, 0x9F);    
SFR(CCU6_MCMOUTSL, 0x9E);    
SFR(CCU6_MODCTRH, 0xFD);    
SFR(CCU6_MODCTRL, 0xFC);    
SFR(CCU6_PAGE , 0xA3);    
SFR(CCU6_PISEL0H, 0x9F);    
SFR(CCU6_PISEL0L, 0x9E);    
SFR(CCU6_PISEL2, 0xA4);    
SFR(CCU6_PSLR , 0xA6);    
SFR(CCU6_T12DTCH, 0xA5);    
SFR(CCU6_T12DTCL, 0xA4);    
SFR(CCU6_T12H , 0xFB);    
SFR(CCU6_T12L , 0xFA);    
SFR(CCU6_T12MSELH, 0x9B);    
SFR(CCU6_T12MSELL, 0x9A);    
SFR(CCU6_T12PRH, 0x9D);    
SFR(CCU6_T12PRL, 0x9C);    
SFR(CCU6_T13H , 0xFD);    
SFR(CCU6_T13L , 0xFC);    
SFR(CCU6_T13PRH, 0x9F);    
SFR(CCU6_T13PRL, 0x9E);    
SFR(CCU6_TCTR0H, 0xA7);    
SFR(CCU6_TCTR0L, 0xA6);    
SFR(CCU6_TCTR2H, 0xFB);    
SFR(CCU6_TCTR2L, 0xFA);    
SFR(CCU6_TCTR4H, 0x9D);    
SFR(CCU6_TCTR4L, 0x9C);    
SFR(CCU6_TRPCTRH, 0xFF);    
SFR(CCU6_TRPCTRL, 0xFE);    
SFR(CD_CON    , 0xA1);    
SFR(CD_CORDXH , 0xBB);    
SFR(CD_CORDXL , 0xBA);    
SFR(CD_CORDYH , 0xBD);    
SFR(CD_CORDYL , 0xBC);    
SFR(CD_CORDZH , 0xBF);    
SFR(CD_CORDZL , 0xBE);    
SFR(CD_STATC  , 0xA0);    
SFR(DPH       , 0x83);    
SFR(DPL       , 0x82);    
SFR(EO        , 0xA2);    
SFR(EXICON0   , 0xEF);    
SFR(EXICON1   , 0xF4);    
SFR(FEAH      , 0xF7);    
SFR(FEAL      , 0xF6);    
SFR(HWBPDR    , 0xF7);    
SFR(HWBPSR    , 0xF6);    
SFR(ID        , 0xF5);    
SFR(IEN0      , 0xA8);    
SFR(IEN1      , 0xE8);    
SFR(IIC_ADDR  , 0xDA);    
SFR(IIC_ADDRX , 0xDE);    
SFR(IIC_BRCR  , 0xDD);    
SFR(IIC_CNTR  , 0xDC);    
SFR(IIC_DATA  , 0xDB);    
SFR(IIC_SRST  , 0xDF);    
SFR(IIC_STAT  , 0xDD);    
SFR(IP        , 0xB8);    
SFR(IP1       , 0xF8);    
SFR(IPH       , 0xB9);    
SFR(IPH1      , 0xF9);    
SFR(IRCON0    , 0xF2);    
SFR(IRCON1    , 0xF3);    
SFR(IRCON2    , 0xF5);    
SFR(IRCON3    , 0xF6);    
SFR(LINST     , 0xF5);    
SFR(LTS_COMPARE, 0xD4);    
SFR(LTS_GLOBCTL0, 0x97);    
SFR(LTS_GLOBCTL1, 0xD8);    
SFR(LTS_LDLINE, 0xD5);    
SFR(LTS_LDTSCTL, 0xD6);    
SFR(LTS_TSCTL , 0xD7);    
SFR(LTS_TSVAL , 0xD9);    
SFR(MDU_MD0   , 0xB2);    
SFR(MDU_MD1   , 0xB3);    
SFR(MDU_MD2   , 0xB4);    
SFR(MDU_MD3   , 0xB5);    
SFR(MDU_MD4   , 0xB6);    
SFR(MDU_MD5   , 0xB7);    
SFR(MDU_MDUCON, 0xB1);    
SFR(MDU_MDUSTAT, 0xB0);    
SFR(MDU_MR0   , 0xB2);    
SFR(MDU_MR1   , 0xB3);    
SFR(MDU_MR2   , 0xB4);    
SFR(MDU_MR3   , 0xB5);    
SFR(MDU_MR4   , 0xB6);    
SFR(MDU_MR5   , 0xB7);    
SFR(MMICR     , 0xF4);    
SFR(MMWR2     , 0xEC);    
SFR(MODIEN    , 0xF7);    
SFR(MODPISEL  , 0xF3);    
SFR(MODPISEL1 , 0xF4);    
SFR(MODPISEL2 , 0xF5);    
SFR(MODPISEL3 , 0xEE);    
SFR(MODSUSP   , 0xF6);    
SFR(NMICON    , 0xEE);    
SFR(NMISR     , 0xF7);    
SFR(OSC_CON   , 0xF4);    
SFR(P0_ALTSEL0, 0x80);    
SFR(P0_ALTSEL1, 0x86);    
SFR(P0_ALTSEL2, 0x85);    
SFR(P0_DATAIN , 0x86);    
SFR(P0_DATAOUT, 0x80);    
SFR(P0_OD     , 0x80);    
SFR(P0_PUDEN  , 0x86);    
SFR(P0_PUDSEL , 0x80);    
SFR(P1_ALTSEL0, 0x90);    
SFR(P1_ALTSEL1, 0x91);    
SFR(P1_DATAIN , 0x91);    
SFR(P1_DATAOUT, 0x90);    
SFR(P1_OCD    , 0x92);    
SFR(P1_OCPEN  , 0x92);    
SFR(P1_OD     , 0x90);    
SFR(P1_PUDEN  , 0x91);    
SFR(P1_PUDSEL , 0x90);    
SFR(P1_SLEW   , 0x92);    
SFR(P2_DATAIN , 0x94);    
SFR(P2_EN     , 0x94);    
SFR(P2_PUDEN  , 0x94);    
SFR(P2_PUDSEL , 0x93);    
SFR(PASSWD    , 0xF2);    
SFR(PCON      , 0x87);    
SFR(PMCON0    , 0xF3);    
SFR(PMCON1    , 0xEF);    
SFR(PORT_PAGE , 0x8E);    
SFR(PSW       , 0xD0);    
SFR(RSTCON    , 0xF7);    
SFR(RTC_CNT0  , 0xE1);    
SFR(RTC_CNT1  , 0xE2);    
SFR(RTC_CNT2  , 0xE3);    
SFR(RTC_CNT3  , 0xE4);    
SFR(RTC_CNT4  , 0xE5);    
SFR(RTC_CNT5  , 0xE6);    
SFR(RTC_RTCCR0, 0xE7);    
SFR(RTC_RTCCR1, 0xE9);    
SFR(RTC_RTCCR2, 0xEA);    
SFR(RTC_RTCCR3, 0xEB);    
SFR(RTC_RTCCR4, 0xEC);    
SFR(RTC_RTCCR5, 0xED);    
SFR(RTC_RTCON , 0x95);    
SFR(RTC_RTCON1, 0x96);    
SFR(SBUF      , 0x99);    
SFR(SCON      , 0x98);    
SFR(SCU_PAGE  , 0xF1);    
SFR(SDCON     , 0xEE);    
SFR(SP        , 0x81);    
SFR(SSC_BRH   , 0xAF);    
SFR(SSC_BRL   , 0xAE);    
SFR(SSC_CONH_O, 0xAB);    
SFR(SSC_CONH_P, 0xAB);    
SFR(SSC_CONL_O, 0xAA);    
SFR(SSC_CONL_P, 0xAA);    
SFR(SSC_RBL   , 0xAD);    
SFR(SSC_TBL   , 0xAC);    
SFR(SYSCON0   , 0x8F);    
SFR(T2_RC2H   , 0xC3);    
SFR(T2_RC2L   , 0xC2);    
SFR(T2_T2CON  , 0xC0);    
SFR(T2_T2CON1 , 0xC6);    
SFR(T2_T2H    , 0xC5);    
SFR(T2_T2L    , 0xC4);    
SFR(T2_T2MOD  , 0xC1);    
SFR(TCON      , 0x88);    
SFR(TH0       , 0x8C);    
SFR(TH1       , 0x8D);    
SFR(TL0       , 0x8A);    
SFR(TL1       , 0x8B);    
SFR(TMOD      , 0x89);    
SFR(WDTCON    , 0xF6);    
SFR(WDTH      , 0xF6);    
SFR(WDTL      , 0xF5);    
SFR(WDTREL    , 0xF3);    
SFR(WDTWINB   , 0xF4);    
SFR(XADDRH    , 0xF2);    


//   SFR bit definitions
//   CD_STATC
#define CD_STATC_BASE    0xA0
SBIT(CD_BSY     ,CD_STATC_BASE,BIT0);
SBIT(DMAP       ,CD_STATC_BASE,BIT4);
SBIT(EOC        ,CD_STATC_BASE,BIT2);
SBIT(ERROR      ,CD_STATC_BASE,BIT1);
SBIT(INT_EN     ,CD_STATC_BASE,BIT3);
SBIT(KEEPX      ,CD_STATC_BASE,BIT5);
SBIT(KEEPY      ,CD_STATC_BASE,BIT6);
SBIT(KEEPZ      ,CD_STATC_BASE,BIT7);
#undef CD_STATC_BASE    

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

//   LTS_GLOBCTL1
#define LTS_GLOBCTL1_BASE    0xD8
SBIT(CLKSEL     ,LTS_GLOBCTL1_BASE,BIT3);
SBIT(FNCOL      ,LTS_GLOBCTL1_BASE,BIT2);
SBIT(ITF_EN     ,LTS_GLOBCTL1_BASE,BIT4);
SBIT(ITS_EN     ,LTS_GLOBCTL1_BASE,BIT6);
SBIT(TFF        ,LTS_GLOBCTL1_BASE,BIT5);
SBIT(TSF        ,LTS_GLOBCTL1_BASE,BIT7);
#undef LTS_GLOBCTL1_BASE    

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

//   T2_T2CON
#define T2_T2CON_BASE    0xC0
SBIT(CP_RL2     ,T2_T2CON_BASE,BIT0);
SBIT(C_T2       ,T2_T2CON_BASE,BIT1);
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

SFR16( ADC_RESR0LH, 0xCA);       // 16-bit Address
SFR16( ADC_RESR1LH, 0xCC);       // 16-bit Address
SFR16( ADC_RESR2LH, 0xCE);       // 16-bit Address
SFR16( ADC_RESR3LH, 0xD2);       // 16-bit Address
SFR16( CCU6_CC60RLH, 0xFA);      // 16-bit Address
SFR16( CCU6_CC60SRLH, 0xFA);     // 16-bit Address
SFR16( CCU6_CC61RLH, 0xFC);      // 16-bit Address
SFR16( CCU6_CC61SRLH, 0xFC);     // 16-bit Address
SFR16( CCU6_CC62RLH, 0xFE);      // 16-bit Address
SFR16( CCU6_CC62SRLH, 0xFE);     // 16-bit Address
SFR16( CCU6_CC63RLH, 0x9A);      // 16-bit Address
SFR16( CCU6_CC63SRLH, 0x9A);     // 16-bit Address
SFR16( CCU6_T12LH, 0xFA);        // 16-bit Address
SFR16( CCU6_T12PRLH, 0x9C);      // 16-bit Address
SFR16( CCU6_T13LH, 0xFC);        // 16-bit Address
SFR16( CCU6_T13PRLH, 0x9E);      // 16-bit Address
SFR16( CD_CORDXLH, 0xBA);        // 16-bit Address
SFR16( CD_CORDYLH, 0xBC);        // 16-bit Address
SFR16( CD_CORDZLH, 0xBE);        // 16-bit Address
SFR16( DPLH,   0x82);            // 16-bit Address
SFR16( MDU_MD01, 0xB2);          // 16-bit Address
SFR16( MDU_MD23, 0xB4);          // 16-bit Address
SFR16( MDU_MD45, 0xB6);          // 16-bit Address
SFR16( MDU_MR01, 0xB2);          // 16-bit Address
SFR16( MDU_MR23, 0xB4);          // 16-bit Address
SFR16( MDU_MR45, 0xB6);          // 16-bit Address
SFR16( T2_RC2LH, 0xC2);          // 16-bit Address
SFR16( T2_T2LH, 0xC4);           // 16-bit Address

//   Definition of the PAGE SFR

//   PORT_PAGE
#define _pp0 PORT_PAGE=0 // PORT_PAGE postfix
#define _pp1 PORT_PAGE=1 // PORT_PAGE postfix
#define _pp2 PORT_PAGE=2 // PORT_PAGE postfix
#define _pp3 PORT_PAGE=3 // PORT_PAGE postfix

//   New Definition of the PORT PAGE SFR

#define P0_DATAOUT_PAGE   PORT_PAGE=0 // PORT_PAGE postfix
#define P0_DATAIN_PAGE    PORT_PAGE=0 // PORT_PAGE postfix
#define P0_PUDSEL_PAGE    PORT_PAGE=1 // PORT_PAGE postfix
#define P0_PUDEN_PAGE     PORT_PAGE=1 // PORT_PAGE postfix
#define P0_ALTSEL0_PAGE   PORT_PAGE=2 // PORT_PAGE postfix
#define P0_ALTSEL1_PAGE   PORT_PAGE=2 // PORT_PAGE postfix
#define P0_ALTSEL2_PAGE   PORT_PAGE=2 // PORT_PAGE postfix
#define P0_OD_PAGE        PORT_PAGE=3 // PORT_PAGE postfix

#define P1_DATAOUT_PAGE   PORT_PAGE=0 // PORT_PAGE postfix
#define P1_DATAIN_PAGE    PORT_PAGE=0 // PORT_PAGE postfix
#define P1_OCD_PAGE       PORT_PAGE=0 // PORT_PAGE postfix
#define P1_PUDSEL_PAGE    PORT_PAGE=1 // PORT_PAGE postfix
#define P1_PUDEN_PAGE     PORT_PAGE=1 // PORT_PAGE postfix
#define P1_ALTSEL0_PAGE   PORT_PAGE=2 // PORT_PAGE postfix
#define P1_ALTSEL1_PAGE   PORT_PAGE=2 // PORT_PAGE postfix
#define P1_OD_PAGE        PORT_PAGE=3 // PORT_PAGE postfix

#define P2_DATAIN_PAGE    PORT_PAGE=0 // PORT_PAGE postfix
#define P2_PUDSEL_PAGE    PORT_PAGE=1 // PORT_PAGE postfix
#define P2_PUDEN_PAGE     PORT_PAGE=1 // PORT_PAGE postfix
#define P2_EN_PAGE        PORT_PAGE=3 // PORT_PAGE postfix


//   ADC_PAGE
#define _ad0 ADC_PAGE=0 // ADC_PAGE postfix
#define _ad1 ADC_PAGE=1 // ADC_PAGE postfix
#define _ad2 ADC_PAGE=2 // ADC_PAGE postfix
#define _ad3 ADC_PAGE=3 // ADC_PAGE postfix
#define _ad4 ADC_PAGE=4 // ADC_PAGE postfix
#define _ad5 ADC_PAGE=5 // ADC_PAGE postfix
#define _ad6 ADC_PAGE=6 // ADC_PAGE postfix

//   New Definition of the ADC PAGE SFR

#define ADC_GLOBCTR_PAGE ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_GLOBSTR_PAGE ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_PRAR_PAGE    ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_LCBR0_PAGE   ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_LCBR1_PAGE   ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_INPCR0_PAGE  ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_LORE_PAGE    ADC_PAGE=0 // ADC_PAGE postfix
#define ADC_ENORC_PAGE   ADC_PAGE=0 // ADC_PAGE postfix

#define ADC_CHCTR0_PAGE  ADC_PAGE=1 // ADC_PAGE postfix
#define ADC_CHCTR1_PAGE  ADC_PAGE=1 // ADC_PAGE postfix
#define ADC_CHCTR2_PAGE  ADC_PAGE=1 // ADC_PAGE postfix
#define ADC_CHCTR3_PAGE  ADC_PAGE=1 // ADC_PAGE postfix

#define ADC_RESR0L_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR0H_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR1L_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR1H_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR2L_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR2H_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR3L_PAGE  ADC_PAGE=2 // ADC_PAGE postfix
#define ADC_RESR3H_PAGE  ADC_PAGE=2 // ADC_PAGE postfix

#define ADC_RCR0_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_RCR1_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_RCR2_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_RCR3_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_VFCR_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_ALR0_PAGE    ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_CNF_PAGE     ADC_PAGE=4 // ADC_PAGE postfix
#define ADC_ETRCR_PAGE   ADC_PAGE=4 // ADC_PAGE postfix

#define ADC_CHINFR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix
#define ADC_CHINCR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix
#define ADC_CHINSR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix
#define ADC_EVINFR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix
#define ADC_EVINCR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix
#define ADC_EVINSR_PAGE  ADC_PAGE=5 // ADC_PAGE postfix

#define ADC_CRCR1_PAGE   ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_CRPR1_PAGE   ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_CRMR1_PAGE   ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_QMR0_PAGE    ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_QSR0_PAGE    ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_Q0R0_PAGE    ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_QBUR0_PAGE   ADC_PAGE=6 // ADC_PAGE postfix
#define ADC_QINR0_PAGE   ADC_PAGE=6 // ADC_PAGE postfix


//   SCU_PAGE
#define _su0 SCU_PAGE=0 // SCU_PAGE postfix
#define _su1 SCU_PAGE=1 // SCU_PAGE postfix
#define _su2 SCU_PAGE=2 // SCU_PAGE postfix
#define _su3 SCU_PAGE=3 // SCU_PAGE postfix
#define _su4 SCU_PAGE=4 // SCU_PAGE postfix
#define _su5 SCU_PAGE=5 // SCU_PAGE postfix

//   New Definition of the SCU PAGE SFR

#define IRCON0_PAGE      SCU_PAGE=0 // SCU_PAGE postfix
#define IRCON1_PAGE      SCU_PAGE=0 // SCU_PAGE postfix
#define IRCON2_PAGE      SCU_PAGE=0 // SCU_PAGE postfix
#define IRCON3_PAGE      SCU_PAGE=0 // SCU_PAGE postfix
#define EXICON0_PAGE     SCU_PAGE=0 // SCU_PAGE postfix
#define EXICON1_PAGE     SCU_PAGE=0 // SCU_PAGE postfix
#define NMISR_PAGE       SCU_PAGE=0 // SCU_PAGE postfix
#define NMICON_PAGE      SCU_PAGE=0 // SCU_PAGE postfix

#define PASSWD_PAGE      SCU_PAGE=1 // SCU_PAGE postfix
#define PMCON0_PAGE      SCU_PAGE=1 // SCU_PAGE postfix
#define PMCON1_PAGE      SCU_PAGE=1 // SCU_PAGE postfix
#define OSC_CON_PAGE     SCU_PAGE=1 // SCU_PAGE postfix
#define ID_PAGE          SCU_PAGE=1 // SCU_PAGE postfix
#define WDTCON_PAGE      SCU_PAGE=1 // SCU_PAGE postfix
#define RSTCON_PAGE      SCU_PAGE=1 // SCU_PAGE postfix
#define SDCON_PAGE       SCU_PAGE=1 // SCU_PAGE postfix

#define XADDRH_PAGE      SCU_PAGE=3 // SCU_PAGE postfix
#define MODPISEL_PAGE    SCU_PAGE=3 // SCU_PAGE postfix
#define MODPISEL1_PAGE   SCU_PAGE=3 // SCU_PAGE postfix
#define MODPISEL2_PAGE   SCU_PAGE=3 // SCU_PAGE postfix
#define MODPISEL3_PAGE   SCU_PAGE=3 // SCU_PAGE postfix
#define MODSUSP_PAGE     SCU_PAGE=3 // SCU_PAGE postfix
#define MODIEN_PAGE      SCU_PAGE=3 // SCU_PAGE postfix

#define WDTREL_PAGE      SCU_PAGE=4 // SCU_PAGE postfix
#define WDTWINB_PAGE     SCU_PAGE=4 // SCU_PAGE postfix
#define WDTL_PAGE        SCU_PAGE=4 // SCU_PAGE postfix
#define WDTH_PAGE        SCU_PAGE=4 // SCU_PAGE postfix

#define BCON_PAGE        SCU_PAGE=5 // SCU_PAGE postfix
#define BGL_PAGE         SCU_PAGE=5 // SCU_PAGE postfix
#define BGH_PAGE         SCU_PAGE=5 // SCU_PAGE postfix
#define LINST_PAGE       SCU_PAGE=5 // SCU_PAGE postfix
#define FEAL_PAGE        SCU_PAGE=5 // SCU_PAGE postfix
#define FEAH_PAGE        SCU_PAGE=5 // SCU_PAGE postfix


//   CCU6_PAGE
#define _cc0 CCU6_PAGE=0 // CCU6_PAGE postfix
#define _cc1 CCU6_PAGE=1 // CCU6_PAGE postfix
#define _cc2 CCU6_PAGE=2 // CCU6_PAGE postfix
#define _cc3 CCU6_PAGE=3 // CCU6_PAGE postfix

//   New Definition of the CCU6 PAGE SFR

#define CCU6_CC63SRL_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC63SRH_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_TCTR4L_PAGE    CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_TCTR4H_PAGE    CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_MCMOUTSL_PAGE  CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_MCMOUTSH_PAGE  CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_ISRL_PAGE      CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_ISRH_PAGE      CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CMPMODIFL_PAGE CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CMPMODIFH_PAGE CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC60SRL_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC60SRH_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC61SRL_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC61SRH_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC62SRL_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix
#define CCU6_CC62SRH_PAGE   CCU6_PAGE=0 // CCU6_PAGE postfix

#define CCU6_CC63RL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC63RH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T12PRL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T12PRH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T13PRL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T13PRH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T12DTCL_PAGE   CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_T12DTCH_PAGE   CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_TCTR0L_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_TCTR0H_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC60RL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC60RH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC61RL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC61RH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC62RL_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix
#define CCU6_CC62RH_PAGE    CCU6_PAGE=1 // CCU6_PAGE postfix

#define CCU6_T12MSELL_PAGE  CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_T12MSELH_PAGE  CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_IENL_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_IENH_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_INPL_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_INPH_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_ISSL_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_ISSH_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_PSLR_PAGE      CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_MCMCTRL_PAGE   CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_TCTR2L_PAGE    CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_TCTR2H_PAGE    CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_MODCTRL_PAGE   CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_MODCTRH_PAGE   CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_TRPCTRL_PAGE   CCU6_PAGE=2 // CCU6_PAGE postfix
#define CCU6_TRPCTRH_PAGE   CCU6_PAGE=2 // CCU6_PAGE postfix

#define CCU6_MCMOUTL_PAGE   CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_MCMOUTH_PAGE   CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_ISL_PAGE       CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_ISH_PAGE       CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_PISEL0L_PAGE   CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_PISEL0H_PAGE   CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_PISEL2_PAGE    CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_T12L_PAGE      CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_T12H_PAGE      CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_T13L_PAGE      CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_T13H_PAGE      CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_CMPSTATL_PAGE  CCU6_PAGE=3 // CCU6_PAGE postfix
#define CCU6_CMPSTATH_PAGE  CCU6_PAGE=3 // CCU6_PAGE postfix


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

#define STR_PAGE(pg,op)  { _push_(op); \
   pg ; }
#define RST_PAGE(op)  _pop_(op)

//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

//****************************************************************************
// @Function      bit BR_FEATURE_SETTING(char ubOption, char ubData) 
//
//----------------------------------------------------------------------------
// @Description   This is the BootROM routine for clock mode setting (to 
//                switch the clock between 8 MHz and 24 MHz) and programming 
//                the user id.Function will returns the status based on 
//                success or fail.
//
//----------------------------------------------------------------------------
// @Returnvalue   Status of the operation
//                0 - Correct 
//                option is selected 
//                1 - Invalid option 
//                is selected 
//                0 - Programming of User ID 
//                is successful (for Option 1) 
//                1 - 
//                Programming of User ID has failed (for Option 1) 
//      
//                1 - Routine is exited as NMISR is not 0x00 - error (for 
//                Option 1)
//
//----------------------------------------------------------------------------
// @Parameters    ubOption: 
//                ubOption : Option 0 and Option 1 for clock mode setting and 
//                programming user id
//                0x00 - (Option 0) 
//                for BR_CLKMODE_SETTING
//                0x01 - (Option 1) 
//                for BR_PROG_USER_ID
//                for Option 1, 4-byte 
//                User ID Information (in IRAM) is required                  
//                and all interrupts including NMI must be disabled 
//                (NMICON=00H),(SFR NMISR = 0x00)
// @Parameters    ubData: 
//                ubData : Values based on Option 0 and Option 1
//       
//                For Option 0 (BR_CLKMODE_SETTING)                          
//                0x00-for 8MHz clock
//                0x80-for 24MHz 
//                clock
//                For Option 1 (BR_PROG_USER_ID)     
//                USER_ID_3,USER_ID_2,USER_ID_1 and USER_ID_0
//
//----------------------------------------------------------------------------
// @Date          26.05.2010
//
//****************************************************************************

//bit BR_FEATURE_SETTING(char ubOption, char ubData);
#define BR_FEATURE_SETTING(_ubOption, _ubData)  (((bit (code *)(char ubOption, char ubData)) 0xDFE4)(_ubOption, _ubData))

//****************************************************************************
// @Function      void BR_AUTO_BAUD(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the BootROM routine for automatically detecting 
//                UART baud rate.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          26.05.2010
//
//****************************************************************************

//void BR_AUTO_BAUD(void);
#define BR_AUTO_BAUD()  (((void (code *)(void)) 0xDFE7)())

//****************************************************************************
// @Function      void BR_UART_BSL(void)
//
//----------------------------------------------------------------------------
// @Description   This is the BootROM routine for re-entering into UART BSL
//                Mode.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          26.05.2010
//
//****************************************************************************

//void BR_UART_BSL(void);
#define BR_UART_BSL()  (((void (code *)(void)) 0xDFEA)())

//****************************************************************************
// @Project Includes
//****************************************************************************

#include <intrins.h>

#endif  // ifndef _XC822_H_
