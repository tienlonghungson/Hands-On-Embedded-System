//****************************************************************************
// @Module        Project Settings
// @Filename      TLE9832_SFR.H
//----------------------------------------------------------------------------
// @Controller    Infineon TLE9832
//
// @Compiler      Keil
//
//
// @Description   This is the include header file for all other modules.
//
//----------------------------------------------------------------------------
// @Date          06.05.2009
//
//****************************************************************************



/* Macros definition for easy SFR access */
#define  SETB( sfr_reg, bit_mask )   ( sfr_reg |= bit_mask )
#define  CLRB( sfr_reg, bit_mask )   ( sfr_reg &= ~bit_mask )

/* sfr address definition in plain format */
/* ADC */
sfr   ADC_PAGE        =    	0xd1;  // RMAP=0, PAGE= x - ADC Page Register
sfr   ADC_GLOBCTR     =    	0xca;  // RMAP=0, PAGE= 0 - ADC Global Control Register
sfr   ADC_GLOBSTR     =    	0xcb;  // RMAP=0, PAGE= 0 - ADC Global Status Register
sfr   ADC_PRAR        =    	0xcc;  // RMAP=0, PAGE= 0 - ADC Priority and Arbitration Register
sfr   ADC_LCBR        =    	0xcd;  // RMAP=0, PAGE= 0 - ADC Limit Check Boundary Register
sfr   ADC_INPCR0      =    	0xce;  // RMAP=0, PAGE= 0 - ADC Input Class 0 Register
sfr   ADC_ETRCR       =    	0xcf;  // RMAP=0, PAGE= 0 - ADC External Trigger Control Register
sfr   ADC_CHCTR0      =    	0xca;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 0
sfr   ADC_CHCTR1      =    	0xcb;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 1
sfr   ADC_CHCTR2      =    	0xcc;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 2
sfr   ADC_CHCTR3      =    	0xcd;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 3
sfr   ADC_CHCTR4      =    	0xce;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 4
sfr   ADC_CHCTR5      =    	0xcf;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 5
sfr   ADC_CHCTR6      =    	0xd2;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 6
sfr   ADC_CHCTR7      =    	0xd3;  // RMAP=0, PAGE= 1 - ADC Channel Control Register 7
sfr   ADC_RESR0L      =    	0xca;  // RMAP=0, PAGE= 2 - ADC Result Register 0 Low
sfr   ADC_RESR0H      =    	0xcb;  // RMAP=0, PAGE= 2 - ADC Result Register 0 High
sfr   ADC_RESR1L      =    	0xcc;  // RMAP=0, PAGE= 2 - ADC Result Register 1 Low
sfr   ADC_RESR1H      =    	0xcd;  // RMAP=0, PAGE= 2 - ADC Result Register 1 High
sfr   ADC_RESR2L      =    	0xce;  // RMAP=0, PAGE= 2 - ADC Result Register 2 Low
sfr   ADC_RESR2H      =    	0xcf;  // RMAP=0, PAGE= 2 - ADC Result Register 2 High
sfr   ADC_RESR3L      =    	0xd2;  // RMAP=0, PAGE= 2 - ADC Result Register 3 Low
sfr   ADC_RESR3H      =    	0xd3;  // RMAP=0, PAGE= 2 - ADC Result Register 3 High
sfr   ADC_RESRA0L     =    	0xca;  // RMAP=0, PAGE= 3 - ADC Result Register 0, View A Low
sfr   ADC_RESRA0H     =    	0xcb;  // RMAP=0, PAGE= 3 - ADC Result Register 0, View A High
sfr   ADC_RESRA1L     =    	0xcc;  // RMAP=0, PAGE= 3 - ADC Result Register 1, View A Low
sfr   ADC_RESRA1H     =    	0xcd;  // RMAP=0, PAGE= 3 - ADC Result Register 1, View A High
sfr   ADC_RESRA2L     =    	0xce;  // RMAP=0, PAGE= 3 - ADC Result Register 2, View A Low
sfr   ADC_RESRA2H     =    	0xcf;  // RMAP=0, PAGE= 3 - ADC Result Register 2, View A High
sfr   ADC_RESRA3L     =    	0xd2;  // RMAP=0, PAGE= 3 - ADC Result Register 3, View A Low
sfr   ADC_RESRA3H     =    	0xd3;  // RMAP=0, PAGE= 3 - ADC Result Register 3, View A High
sfr   ADC_RCR0        =    	0xca;  // RMAP=0, PAGE= 4 - ADC Result Control Register 0
sfr   ADC_RCR1        =    	0xcb;  // RMAP=0, PAGE= 4 - ADC Result Control Register 1
sfr   ADC_RCR2        =    	0xcc;  // RMAP=0, PAGE= 4 - ADC Result Control Register 2
sfr   ADC_RCR3        =    	0xcd;  // RMAP=0, PAGE= 4 - ADC Result Control Register 3
sfr   ADC_VFCR        =    	0xce;  // RMAP=0, PAGE= 4 - ADC Valid Flag Clear Register
sfr   ADC_CHINFR      =    	0xca;  // RMAP=0, PAGE= 5 - ADC Channel Interrupt Flag Register
sfr   ADC_CHINCR      =    	0xcb;  // RMAP=0, PAGE= 5 - ADC Channel Interrupt Clear Register
sfr   ADC_CHINSR      =    	0xcc;  // RMAP=0, PAGE= 5 - ADC Channel Interrupt Set Register
sfr   ADC_CHINPR      =    	0xcd;  // RMAP=0, PAGE= 5 - ADC Channel Interrupt Node Pointer Register
sfr   ADC_EVINFR      =    	0xce;  // RMAP=0, PAGE= 5 - ADC Event Interrupt Flag Register
sfr   ADC_EVINCR      =    	0xcf;  // RMAP=0, PAGE= 5 - ADC Event Interrupt Clear Flag Register
sfr   ADC_EVINSR      =    	0xd2;  // RMAP=0, PAGE= 5 - ADC Event Interrupt Set Flag Register
sfr   ADC_EVINPR      =    	0xd3;  // RMAP=0, PAGE= 5 - ADC Event Interrupt Node Pointer Register
sfr   ADC_CRCR1       =    	0xca;  // RMAP=0, PAGE= 6 - ADC Conversion Request Control Register 1
sfr   ADC_CRPR1       =    	0xcb;  // RMAP=0, PAGE= 6 - ADC Conversion Request Pending Register 1
sfr   ADC_CRMR1       =    	0xcc;  // RMAP=0, PAGE= 6 - ADC Conversion Request Mode Register 1
sfr   ADC_QMR0        =    	0xcd;  // RMAP=0, PAGE= 6 - ADC Queue Mode Register 0
sfr   ADC_QSR0        =    	0xce;  // RMAP=0, PAGE= 6 - ADC Queue Status Register 0
sfr   ADC_Q0R0        =    	0xcf;  // RMAP=0, PAGE= 6 - ADC Queue 0 Register 0
sfr   ADC_QBUR0       =    	0xd2;  // RMAP=0, PAGE= 6 - ADC Queue Backup Register 0
sfr   ADC_QINR0       =    	0xd2;  // RMAP=0, PAGE= 6 - ADC Queue Input Register 0

/* CCU6 */
sfr   CCU6_PAGE       =   	0xa3;  // RMAP=0, PAGE= x - CCU6 Page Register
sfr   CCU6_CC63SRL    =    	0x9a;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC63 Low
sfr   CCU6_CC63SRH    =    	0x9b;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC63 High
sfr   CCU6_TCTR4L     =    	0x9c;  // RMAP=0, PAGE= 0 - CCU6 Timer Control Register 4 Low
sfr   CCU6_TCTR4H     =    	0x9d;  // RMAP=0, PAGE= 0 - CCU6 Timer Control Register 4 High
sfr   CCU6_MCMOUTSL   =    	0x9e;  // RMAP=0, PAGE= 0 - CCU6 Multi-Channel Mode Output Shadow Register Low
sfr   CCU6_MCMOUTSH   =    	0x9f;  // RMAP=0, PAGE= 0 - CCU6 Multi-Channel Mode Output Shadow Register High
sfr   CCU6_ISRL       =    	0xa4;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Interrupt Status Reset Register Low
sfr   CCU6_ISRH       =    	0xa5;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Interrupt Status Reset Register High
sfr   CCU6_CMPMODIFL  =    	0xa6;  // RMAP=0, PAGE= 0 - CCU6 Compare State Modification Register Low
sfr   CCU6_CMPMODIFH  =    	0xa7;  // RMAP=0, PAGE= 0 - CCU6 Compare State Modification Register High
sfr   CCU6_CC60SRL    =    	0xfa;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC60 Low
sfr   CCU6_CC60SRH    =    	0xfb;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC60 High
sfr   CCU6_CC61SRL    =    	0xfc;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC61 Low
sfr   CCU6_CC61SRH    =    	0xfd;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC61 High
sfr   CCU6_CC62SRL    =    	0xfe;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC62 Low
sfr   CCU6_CC62SRH    =    	0xff;  // RMAP=0, PAGE= 0 - CCU6 Capture/Compare Shadow Register for Channel CC62 High
sfr   CCU6_CC63RL     =    	0x9a;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC63 Low
sfr   CCU6_CC63RH     =    	0x9b;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC63 High
sfr   CCU6_T12PRL     =    	0x9c;  // RMAP=0, PAGE= 1 - CCU6 Timer T12 Period Register Low
sfr   CCU6_T12PRH     =   	0x9d;  // RMAP=0, PAGE= 1 - CCU6 Timer T12 Period Register High
sfr   CCU6_T13PRL     =    	0x9e;  // RMAP=0, PAGE= 1 - CCU6 Timer T13 Period Register Low
sfr   CCU6_T13PRH     =    	0x9f;  // RMAP=0, PAGE= 1 - CCU6 Timer T13 Period Register High
sfr   CCU6_T12DTCL    =    	0xa4;  // RMAP=0, PAGE= 1 - CCU6 Dead-Time Control Register for Timer T12 Low
sfr   CCU6_T12DTCH    =    	0xa5;  // RMAP=0, PAGE= 1 - CCU6 Dead-Time Control Register for Timer T12 High
sfr   CCU6_TCTR0L     =    	0xa6;  // RMAP=0, PAGE= 1 - CCU6 Timer Control Register 0 Low
sfr   CCU6_TCTR0H     =    	0xa7;  // RMAP=0, PAGE= 1 - CCU6 Timer Control Register 0 High
sfr   CCU6_CC60RL     =    	0xfa;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC60 Low
sfr   CCU6_CC60RH     =    	0xfb;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC60 High
sfr   CCU6_CC61RL     =    	0xfc;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC61 Low
sfr   CCU6_CC61RH     =    	0xfd;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC61 High
sfr   CCU6_CC62RL     =    	0xfe;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC62 Low
sfr   CCU6_CC62RH     =    	0xff;  // RMAP=0, PAGE= 1 - CCU6 Capture/Compare Register for Channel CC62 High
sfr   CCU6_T12MSELL   =    	0x9a;  // RMAP=0, PAGE= 2 - CCU6 T12 Capture/Compare Mode Select Register Low
sfr   CCU6_T12MSELH   =    	0x9b;  // RMAP=0, PAGE= 2 - CCU6 T12 Capture/Compare Mode Select Register High
sfr   CCU6_IENL       =    	0x9c;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Enable Register Low
sfr   CCU6_IENH       =    	0x9d;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Enable Register High
sfr   CCU6_INPL       =    	0x9e;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Node Pointer Register Low
sfr   CCU6_INPH       =    	0x9f;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Node Pointer Register High
sfr   CCU6_ISSL       =    	0xa4;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Status Set Register Low
sfr   CCU6_ISSH       =    	0xa5;  // RMAP=0, PAGE= 2 - CCU6 Capture/Compare Interrupt Status Set Register High
sfr   CCU6_PSLR       =    	0xa6;  // RMAP=0, PAGE= 2 - CCU6 Passive State Level Register
sfr   CCU6_MCMCTRL    =    	0xa7;  // RMAP=0, PAGE= 2 - CCU6 Multi-Channel Mode Control Register Low
sfr   CCU6_TCTR2L     =    	0xfa;  // RMAP=0, PAGE= 2 - CCU6 Timer Control Register 2 Low
sfr   CCU6_TCTR2H     =    	0xfb;  // RMAP=0, PAGE= 2 - CCU6 Timer Control Register 2 High
sfr   CCU6_MODCTRL    =    	0xfc;  // RMAP=0, PAGE= 2 - CCU6 Modulation Control Register Low
sfr   CCU6_MODCTRH    =    	0xfd;  // RMAP=0, PAGE= 2 - CCU6 Modulation Control Register High
sfr   CCU6_TRPCTRL    =    	0xfe;  // RMAP=0, PAGE= 2 - CCU6 Trap Control Register Low
sfr   CCU6_TRPCTRH    =    	0xff;  // RMAP=0, PAGE= 2 - CCU6 Trap Control Register High
sfr   CCU6_MCMOUTL    =    	0x9a;  // RMAP=0, PAGE= 3 - CCU6 Multi-Channel Mode Output Register Low
sfr   CCU6_MCMOUTH    =    	0x9b;  // RMAP=0, PAGE= 3 - CCU6 Multi-Channel Mode Output Register High
sfr   CCU6_ISL        =    	0x9c;  // RMAP=0, PAGE= 3 - CCU6 Capture/Compare Interrupt Status Register Low
sfr   CCU6_ISH        =    	0x9d;  // RMAP=0, PAGE= 3 - CCU6 Capture/Compare Interrupt Status Register High
sfr   CCU6_PISEL0L    =    	0x9e;  // RMAP=0, PAGE= 3 - CCU6 Port Input Select Register 0 Low
sfr   CCU6_PISEL0H    =    	0x9f;  // RMAP=0, PAGE= 3 - CCU6 Port Input Select Register 0 High
sfr   CCU6_PISEL2     =    	0xa4;  // RMAP=0, PAGE= 3 - CCU6 Port Input Select Register 2
sfr   CCU6_MCMCTRH    =    	0xa7;  // RMAP=0, PAGE= 3 - CCU6 Multi-Channel Mode Control Register High
sfr   CCU6_T12L       =    	0xfa;  // RMAP=0, PAGE= 3 - CCU6 Timer T12 Counter Register Low
sfr   CCU6_T12H       =    	0xfb;  // RMAP=0, PAGE= 3 - CCU6 Timer T12 Counter Register High
sfr   CCU6_T13L       =    	0xfc;  // RMAP=0, PAGE= 3 - CCU6 Timer T13 Counter Register Low
sfr   CCU6_T13H       =    	0xfd;  // RMAP=0, PAGE= 3 - CCU6 Timer T13 Counter Register High
sfr   CCU6_CMPSTATL   =    	0xfe;  // RMAP=0, PAGE= 3 - CCU6 Compare State Register Low
sfr   CCU6_CMPSTATH   =    	0xff;  // RMAP=0, PAGE= 3 - CCU6 Compare State Register High

/* CPU */
sfr   SP              =    	0x81;  // RMAP=x, PAGE= x - CPU Stack Pointer Register
sfr   DPL             =    	0x82;  // RMAP=x, PAGE= x - CPU Data Pointer Register Low
sfr   DPH             =    	0x83;  // RMAP=x, PAGE= x - CPU Data Pointer Register High
sfr   PCON            =    	0x87;  // RMAP=x, PAGE= x - CPU Power Control Register
sfr   TCON            =    	0x88;  // RMAP=x, PAGE= x - CPU Timer Control Register
sfr   TMOD            =    	0x89;  // RMAP=x, PAGE= x - CPU Timer Mode Register
sfr   TL0             =    	0x8a;  // RMAP=x, PAGE= x - CPU Timer 0 Register Low
sfr   TL1             =    	0x8b;  // RMAP=x, PAGE= x - CPU Timer 1 Register Low
sfr   TH0             =    	0x8c;  // RMAP=x, PAGE= x - CPU Timer 0 Register High
sfr   TH1             =    	0x8d;  // RMAP=x, PAGE= x - CPU Timer 1 Register High
sfr   MEX1            =    	0x94;  // RMAP=x, PAGE= x - CPU Memory Extension Register 1
sfr   MEX2            =    	0x95;  // RMAP=x, PAGE= x - CPU Memory Extension Register 2
sfr   MEX3            =    	0x96;  // RMAP=x, PAGE= x - CPU Memory Extension Register 3
sfr   MEXSP           =    	0x97;  // RMAP=x, PAGE= x - CPU Memory Extension Stack Pointer Register
sfr   SCON            =    	0x98;  // RMAP=x, PAGE= x - CPU Serial Channel Control Register
sfr   SBUF            =    	0x99;  // RMAP=x, PAGE= x - CPU Serial Data Buffer Register
sfr   EO              =    	0xa2;  // RMAP=x, PAGE= x - CPU Extended Operation Register
sfr   IEN0            =    	0xa8;  // RMAP=x, PAGE= x - CPU Interrupt Enable Register 0
sfr   IP              =    	0xb8;  // RMAP=x, PAGE= x - CPU Interrupt Priority Register
sfr   IPH             =    	0xb9;  // RMAP=x, PAGE= x - CPU Interrupt Priority High Register
sfr   PSW             =    	0xd0;  // RMAP=x, PAGE= x - CPU Program Status Word Register
sfr   ACC             =    	0xe0;  // RMAP=x, PAGE= x - CPU Accumulator Register
sfr   IEN1            =    	0xe8;  // RMAP=x, PAGE= x - CPU Interrupt Enable Register 1
sfr   B               =    	0xf0;  // RMAP=x, PAGE= x - CPU B Register
sfr   IP1             =    	0xf8;  // RMAP=x, PAGE= x - CPU Interrupt Priority 1 Register
sfr   IPH1            =    	0xf9;  // RMAP=x, PAGE= x - CPU Interrupt Priority 1 High Register
/* MDU */
sfr   MDU_MDUSTAT     =    	0xb0;  // RMAP=0, PAGE= x - MDU Status Register
sfr   MDU_MDUCON      =    	0xb1;  // RMAP=0, PAGE= x - MDU Control Register
sfr   MDU_MR0         =    	0xb2;  // RMAP=0, PAGE= x - MDU Result Register 0
sfr   MDU_MD0         =    	0xb2;  // RMAP=0, PAGE= x - MDU Operand Register 0
sfr   MDU_MR1         =    	0xb3;  // RMAP=0, PAGE= x - MDU Result Register 1
sfr   MDU_MD1         =    	0xb3;  // RMAP=0, PAGE= x - MDU Operand Register 1
sfr   MDU_MR2         =    	0xb4;  // RMAP=0, PAGE= x - MDU Result Register 2
sfr   MDU_MD2         =    	0xb4;  // RMAP=0, PAGE= x - MDU Operand Register 2
sfr   MDU_MD3         =    	0xb5;  // RMAP=0, PAGE= x - MDU Operand Register 3
sfr   MDU_MR3         =    	0xb5;  // RMAP=0, PAGE= x - MDU Result Register 3
sfr   MDU_MD4         =    	0xb6;  // RMAP=0, PAGE= x - MDU Operand Register 4
sfr   MDU_MR4         =    	0xb6;  // RMAP=0, PAGE= x - MDU Result Register 4
sfr   MDU_MR5         =    	0xb7;  // RMAP=0, PAGE= x - MDU Result Register 5
sfr   MDU_MD5         =    	0xb7;  // RMAP=0, PAGE= x - MDU Operand Register 5

/* NVM */
sfr   NVM_STATUS1     =    	0xe1;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_STATUS2     =    	0xe2;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_ADDRP       =    	0xe3;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_ADDRS       =    	0xe4;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_CTRL        =    	0xe5;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_MODE        =    	0xe6;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_MAP1        =    	0xe7;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_MAP2        =    	0xe9;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_BRNG        =    	0xea;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_PROT        =    	0xeb;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_SFRSEL      =    	0xec;  // RMAP=0, PAGE= x - NVM register
sfr   NVM_SFRDAT      =    	0xed;  // RMAP=0, PAGE= x - NVM register

/* OCDS */
sfr   MMCR2           =   	0xe9;  // RMAP=1, PAGE= x - OCDS Monitor Mode Control 2 Register
sfr   MEXTCR          =    	0xea;  // RMAP=1, PAGE= x - OCDS Memory Extension Control Register
sfr   MMWR1           =    	0xeb;  // RMAP=1, PAGE= x - OCDS Monitor Work Register 1
sfr   MMWR2           =    	0xec;  // RMAP=1, PAGE= x - OCDS Monitor Work Register 2
sfr   MMCR            =    	0xf1;  // RMAP=1, PAGE= x - OCDS Monitor Mode Control Register
sfr   MMSR            =    	0xf2;  // RMAP=1, PAGE= x - OCDS Monitor Mode Status Register
sfr   MMBPCR          =    	0xf3;  // RMAP=1, PAGE= x - OCDS Breakpoints Control Register
sfr   MMICR           =    	0xf4;  // RMAP=1, PAGE= x - OCDS Monitor Mode Interrupt Control Register
sfr   MMDR            =    	0xf5;  // RMAP=1, PAGE= x - OCDS Monitor Mode Data Register
sfr   HWBPSR          =    	0xf6;  // RMAP=1, PAGE= x - OCDS Hardware Breakpoints Select Register
sfr   HWBPDR          =    	0xf7;  // RMAP=1, PAGE= x - OCDS Hardware Breakpoints Data Register

/* Port */
sfr   PORT_PAGE       =    	0x8e;  // RMAP=0, PAGE= x - Port Page Register
sfr   P0_DATA         =    	0x80;  // RMAP=0, PAGE= 0 - Port P0 Data Register
sfr   P0_DIR          =    	0x86;  // RMAP=0, PAGE= 0 - Port P0 Direction Register
sfr   P1_DATA         =    	0x90;  // RMAP=0, PAGE= 0 - Port P1 Data Register
sfr   P1_DIR          =    	0x91;  // RMAP=0, PAGE= 0 - Port P1 Direction Register
sfr   P2_DATA         =    	0xc8;  // RMAP=0, PAGE= 0 - Port P2 Data Register
sfr   P2_DIR          =    	0xc9;  // RMAP=0, PAGE= 0 - Port P2 Direction Register
sfr   P0_PUDSEL       =    	0x80;  // RMAP=0, PAGE= 1 - Port P0 Pull-Up/Pull-Down Select Register
sfr   P0_PUDEN        =    	0x86;  // RMAP=0, PAGE= 1 - Port P0 Pull-Up/Pull-Down Enable Register
sfr   P1_PUDSEL       =    	0x90;  // RMAP=0, PAGE= 1 - Port P1 Pull-Up/Pull-Down Select Register
sfr   P1_PUDEN        =    	0x91;  // RMAP=0, PAGE= 1 - Port P1 Pull-Up/Pull-Down Enable Register
sfr   P2_PUDSEL       =    	0xc8;  // RMAP=0, PAGE= 1 - Port P2 Pull-Up/Pull-Down Select Register
sfr   P2_PUDEN        =    	0xc9;  // RMAP=0, PAGE= 1 - Port P2 Pull-Up/Pull-Down Enable Register
sfr   P0_ALTSEL0      =    	0x80;  // RMAP=0, PAGE= 2 - Port P0 Alternate Select 0 Register
sfr   P0_ALTSEL1      =    	0x86;  // RMAP=0, PAGE= 2 - Port P0 Alternate Select 1 Register
sfr   P1_ALTSEL0      =    	0x90;  // RMAP=0, PAGE= 2 - Port P1 Alternate Select 0 Register
sfr   P1_ALTSEL1      =    	0x91;  // RMAP=0, PAGE= 2 - Port P1 Alternate Select 1 Register
sfr   P0_OD           =    	0x80;  // RMAP=0, PAGE= 3 - Port P0 Open Drain Control Register
sfr   P1_OD           =    	0x90;  // RMAP=0, PAGE= 3 - Port P1 Open Drain Control Register

/* SCU */
sfr   SCU_PAGE        =    	0xf1;  // RMAP=0, PAGE= x - SCU Page Register
sfr   SYSCON0         =    	0x8f;  // RMAP=x, PAGE= x - SCU System Control Register 0
sfr   IRCON0          =    	0xf2;  // RMAP=0, PAGE= 0 - SCU Interrupt Request Register 0
sfr   IRCON1          =    	0xf3;  // RMAP=0, PAGE= 0 - SCU Interrupt Request Register 1
sfr   IRCON3          =    	0xf5;  // RMAP=0, PAGE= 0 - SCU Interrupt Request Register 3
sfr   IRCON4          =    	0xf6;  // RMAP=0, PAGE= 0 - SCU Interrupt Request Register 4
sfr   NMISR           =    	0xf7;  // RMAP=0, PAGE= 0 - SCU NMI Status Register
sfr   NMICON          =    	0xf2;  // RMAP=0, PAGE= 1 - SCU NMI Control Register
sfr   EXICON0         =    	0xf3;  // RMAP=0, PAGE= 1 - SCU External Interrupt Control Register 0
sfr   MODIEN          =    	0xf7;  // RMAP=0, PAGE= 1 - SCU Peripheral Interrupt Enable Register
sfr   PASSWD          =    	0xf2;  // RMAP=0, PAGE= 2 - SCU Password Register
sfr   PMCON0          =    	0xf3;  // RMAP=0, PAGE= 2 - SCU Power Mode Control Register 0
sfr   PLL_CON         =    	0xf4;  // RMAP=0, PAGE= 2 - SCU PLL Control Register
sfr   CMCON           =    	0xf5;  // RMAP=0, PAGE= 2 - SCU Clock Control Register
sfr   WDTCON          =    	0xf6;  // RMAP=0, PAGE= 2 - SCU Watchdog Timer Control Register
sfr   XADDRH          =    	0xf2;  // RMAP=0, PAGE= 3 - SCU On-chip XRAM Address Higher Order
sfr   PMCON1          =    	0xf3;  // RMAP=0, PAGE= 3 - SCU Power Mode Control Register 1
sfr   RSTCON          =    	0xf6;  // RMAP=0, PAGE= 3 - SCU Reset Control Register
sfr   WDTREL          =    	0xf3;  // RMAP=0, PAGE= 4 - SCU Watchdog Timer Reload Register
sfr   WDTWINB         =    	0xf4;  // RMAP=0, PAGE= 4 - SCU Watchdog Window-Boundary Count Register
sfr   WDTL            =    	0xf5;  // RMAP=0, PAGE= 4 - SCU Watchdog Timer Register Low
sfr   WDTH            =    	0xf6;  // RMAP=0, PAGE= 4 - SCU Watchdog Timer Register High
sfr   BCON            =    	0xf2;  // RMAP=0, PAGE= 5 - SCU Baud Rate Control Register
sfr   BG              =    	0xf3;  // RMAP=0, PAGE= 5 - SCU Baud Rate Timer/Reload Register
sfr   FDCON           =    	0xf4;  // RMAP=0, PAGE= 5 - SCU Fractional Divider Control Register
sfr   FDSTEP          =    	0xf5;  // RMAP=0, PAGE= 5 - SCU Fractional Divider Reload Register
sfr   FDRES           =    	0xf6;  // RMAP=0, PAGE= 5 - SCU Fractional Divider Result Register
sfr   ID              =    	0xf2;  // RMAP=0, PAGE= 6 - SCU Identity Register
sfr   OSC_CON         =    	0xf4;  // RMAP=0, PAGE= 6 - SCU OSC Control Register
sfr   COCON           =    	0xf5;  // RMAP=0, PAGE= 6 - SCU Clock Output Control Register
sfr   MODPISEL        =    	0xf2;  // RMAP=0, PAGE= 7 - SCU Peripheral Input Select Register
sfr   MODPISEL1       =    	0xf3;  // RMAP=0, PAGE= 7 - SCU Peripheral Input Select Register 1
sfr   MODPISEL2       =    	0xf4;  // RMAP=0, PAGE= 7 - SCU Peripheral Input Select Register 2
sfr   MODSUSP         =    	0xf6;  // RMAP=0, PAGE= 7 - SCU Module Suspend Control Register
sfr   EDCCON          =    	0xf2;  // RMAP=0, PAGE= 8 - SCU Error Detection and Correction Control Register
sfr   EDCSTAT         =    	0xf3;  // RMAP=0, PAGE= 8 - SCU Error Detection and Correction Status Register
sfr   MEMSTAT         =    	0xf7;  // RMAP=0, PAGE= 8 - SCU Memory Status Register
sfr   SPARE0          =    	0xf2;  // RMAP=0, PAGE= 9 - SCU Spare Register 0
sfr   SPARE1          =    	0xf3;  // RMAP=0, PAGE= 9 - SCU Spare Register 1
sfr   P0_POCON0       =    	0xf2;  // RMAP=0, PAGE=11 - SCU Port00 Output Control Register
sfr   P0_POCON1       =    	0xf3;  // RMAP=0, PAGE=11 - SCU Port01 Output Control Register
sfr   P0_POCON2       =    	0xf4;  // RMAP=0, PAGE=11 - SCU Port02 Output Control Register
sfr   TCCR            =    	0xf7;  // RMAP=0, PAGE=11 - SCU Temperature Compensation Control Register
sfr   P1_POCON0       =    	0xf2;  // RMAP=0, PAGE=12 - SCU Port10 Output Control Register
sfr   P1_POCON1       =    	0xf3;  // RMAP=0, PAGE=12 - SCU Port11 Output Control Register
sfr   P1_POCON2       =    	0xf4;  // RMAP=0, PAGE=12 - SCU Port12 Output Control Register
sfr   XRTESTL         =    	0xf2;  // RMAP=0, PAGE=13 - SCU XRAM Test Register, Low Byte
sfr   XRTESTH         =    	0xf3;  // RMAP=0, PAGE=13 - SCU XRAM Test Register, High Byte
sfr   IRTESTL         =    	0xf4;  // RMAP=0, PAGE=13 - SCU IRAM Test Register, Low Byte
sfr   IRTESTH         =    	0xf5;  // RMAP=0, PAGE=13 - SCU IRAM Test Register, High Byte
sfr   BRTEST          =    	0xf6;  // RMAP=0, PAGE=13 - SCU BROM Test Register
sfr   MEMTEST         =    	0xf7;  // RMAP=0, PAGE=13 - SCU Memory Test Register
sfr   TSCON0          =    	0xf2;  // RMAP=0, PAGE=14 - SCU Test Control Register 0
sfr   TSCON1          =    	0xf3;  // RMAP=0, PAGE=14 - SCU Test Control Register 1
sfr   TSCON2          =    	0xf4;  // RMAP=0, PAGE=14 - SCU Test Control Register 2
sfr   TSCON3          =    	0xf5;  // RMAP=0, PAGE=14 - SCU Test Control Register 3
sfr   VAR_IDL         =    	0xf2;  // RMAP=0, PAGE=15 - SCU Variant Identity Register Low
sfr   VAR_IDH         =    	0xf3;  // RMAP=0, PAGE=15 - SCU Variant Identity Register High
sfr   OSC_TRIM        =    	0xf4;  // RMAP=0, PAGE=15 - SCU OSC Trim Register
sfr   PKGCFG0         =    	0xf5;  // RMAP=0, PAGE=15 - SCU Package Configuration Register 0
sfr   PKGCFG1         =    	0xf6;  // RMAP=0, PAGE=15 - SCU Package Configuration Register 1
sfr   SSTCON          =    	0xf7;  // RMAP=0, PAGE=15 - SCU Firmware System Control Register

/* SSC */
sfr   SSC_PISEL       =    	0xa9;  // RMAP=0, PAGE= x - SSC Port Input Select Register
sfr   SSC_CONL        =    	0xaa;  // RMAP=0, PAGE= x - SSC Control Register Low Operating Mode
sfr   SSC_CONH        =    	0xab;  // RMAP=0, PAGE= x - SSC Control Register High Operating Mode
sfr   SSC_TBL         =    	0xac;  // RMAP=0, PAGE= x - SSC Transmitter Buffer Register Low
sfr   SSC_RBL         =    	0xad;  // RMAP=0, PAGE= x - SSC Receiver Buffer Register Low
sfr   SSC_BRL         =    	0xae;  // RMAP=0, PAGE= x - SSC Baud Rate Timer Reload Register Low
sfr   SSC_BRH         =    	0xaf;  // RMAP=0, PAGE= x - SSC Baud Rate Timer Reload Register High

/* T2 */
sfr   PERIPHERAL_PAGE =    	0xc7;  // RMAP=0, PAGE= x - T2 Page Register
sfr   T2_T2CON        =    	0xc0;  // RMAP=0, PAGE= 0 - T2 Timer 2 Control Register
sfr   T2_T2MOD        =    	0xc1;  // RMAP=0, PAGE= 0 - T2 Timer 2 Mode Register
sfr   T2_RC2L         =    	0xc2;  // RMAP=0, PAGE= 0 - T2 Timer 2 Reload/Capture Register Low
sfr   T2_RC2H         =    	0xc3;  // RMAP=0, PAGE= 0 - T2 Timer 2 Reload/Capture Register High
sfr   T2_T2L          =    	0xc4;  // RMAP=0, PAGE= 0 - T2 Timer 2 Register Low
sfr   T2_T2H          =    	0xc5;  // RMAP=0, PAGE= 0 - T2 Timer 2 Register High
sfr   T2_T2CON1       =    	0xc6;  // RMAP=0, PAGE= 0 - T2 Timer 2 Control Register 1

/* T21 */
sfr   T21_T2CON       =    	0xc0;  // RMAP=0, PAGE= 8 - T21 Timer 2 Control Register
sfr   T21_T2MOD       =    	0xc1;  // RMAP=0, PAGE= 8 - T21 Timer 2 Mode Register
sfr   T21_RC2L        =    	0xc2;  // RMAP=0, PAGE= 8 - T21 Timer 2 Reload/Capture Register Low
sfr   T21_RC2H        =    	0xc3;  // RMAP=0, PAGE= 8 - T21 Timer 2 Reload/Capture Register High
sfr   T21_T2L         =    	0xc4;  // RMAP=0, PAGE= 8 - T21 Timer 2 Register Low
sfr   T21_T2H         =    	0xc5;  // RMAP=0, PAGE= 8 - T21 Timer 2 Register High
sfr   T21_T2CON1      =    	0xc6;  // RMAP=0, PAGE= 8 - T21 Timer 21 Control Register 1


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

