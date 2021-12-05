/*REV.  0.1    2nd November 2006
  ADE7169F16  Apps, Analog Devices Inc.
-2/13/2007: Petre M.
  -changed PINMAP0_x into PINMAP0x, PINMAP1_x into PINMAP1x and PINMAP2_x into PINMAP2x
  -changed SPI2CTX into SPI2CTx and SPI2CRX into SPI2CRx to match the 
    denomination used in the data sheet
  -changed INVLVL into INV_LVL for the same reason
  -eliminated _R from the ADE registers because is superfluous
  -changed EDATA SFR name into EDATA_ because EDATA is reserved for AX51
*/

/***************************************************************************
 *                                - ADE7169.h -
 *
 * Header for the Analog Devices ADE7x66/ADE7x69 Microcontroller.
 *
 *
 ***************************************************************************/


/*-------------------------------------------------------------------------
 *   SPI
 *-------------------------------------------------------------------------*/

sfr SPI2CTx   = 0x9A;
sfr SPI2CRx   = 0x9B;
sfr SPIMOD1   = 0xE8;
sfr SPIMOD2   = 0xE9;
sfr SPISTAT   = 0xEA;

/*-------------------------------------------------------------------------
 *   I2C
 *-------------------------------------------------------------------------*/

sfr I2CMOD    = 0xE8;
sfr I2CADR    = 0xE9;
sfr I2CSTAT   = 0xEA;

/*-------------------------------------------------------------------------
 *   RTC
 *-------------------------------------------------------------------------*/

sfr TIMECON   = 0xA1;
sfr HTHSEC    = 0xA2;
sfr SEC       = 0xA3;
sfr MIN       = 0xA4;
sfr HOUR      = 0xA5;
sfr INTVAL    = 0xA6;
sfr RTCCOMP   = 0xF6;
sfr TEMPCAL   = 0xF7;

/*-------------------------------------------------------------------------
 *   LCD
 *-------------------------------------------------------------------------*/

sfr LCDCON    = 0x95;
sfr LCDCLK    = 0x96;
sfr LCDSEGE   = 0x97;
sfr LCDCONX   = 0x9C;
sfr LCDPTR    = 0xAC;
sfr LCDDAT    = 0xAE;
sfr LCDCONY   = 0xB1;
sfr LCDSEGE2  = 0xED;

/*-------------------------------------------------------------------------
 *   Energy Measurement
 *-------------------------------------------------------------------------*/

sfr MADDPT    = 0x91;
sfr MDATL     = 0x92;
sfr MDATM     = 0x93;
sfr MDATH     = 0x94;
sfr VRMSL     = 0xD1;
sfr VRMSM     = 0xD2;
sfr VRMSH     = 0xD3;
sfr IRMSL     = 0xD4;
sfr IRMSM     = 0xD5;
sfr IRMSH     = 0xD6;
sfr MIRQENL   = 0xD9;
sfr MIRQENM   = 0xDA;
sfr MIRQENH   = 0xDB;
sfr MIRQSTL   = 0xDC;
sfr MIRQSTM   = 0xDD;
sfr MIRQSTH   = 0xDE;
sfr WAV1L     = 0xE2;
sfr WAV1M     = 0xE3;
sfr WAV1H     = 0xE4;
sfr WAV2L     = 0xE5;
sfr WAV2M     = 0xE6;
sfr WAV2H     = 0xE7;


/*-------------------------------------------------------------------------
 *   UART
 *-------------------------------------------------------------------------*/

sfr SCON      = 0x98;
sfr SBUF      = 0x99;
sfr SBAUDF    = 0x9D;
sfr SBAUDT    = 0x9E;

/*-------------------------------------------------------------------------
 *   Interupt
 *-------------------------------------------------------------------------*/

sfr IE        = 0xA8;
sfr IEIP2     = 0xA9;
sfr IP        = 0xB8;
sfr WDCON     = 0xC0;

/*-------------------------------------------------------------------------
 *   Temp, batt and volt
 *-------------------------------------------------------------------------*/

sfr TEMPADC   = 0xD7;
sfr ADCGO     = 0xD8;
sfr BATADC    = 0xDF;
sfr VSWADC    = 0xEF;
sfr DIFFPROG  = 0xF3;
sfr STRBPER   = 0xF9;
sfr BATVTH    = 0xFA;

/*-------------------------------------------------------------------------
 *   I/O Ports
 *-------------------------------------------------------------------------*/

sfr P0        = 0x80; /* Port 0 */
sfr P1        = 0x90;
sfr EPCFG     = 0x9F;
sfr P2        = 0xA0;
sfr PINMAP0   = 0xB2;
sfr PINMAP1   = 0xB3;
sfr PINMAP2   = 0xB4;

/*-------------------------------------------------------------------------
 *   Core
 *-------------------------------------------------------------------------*/
sfr DPL       = 0x82;
sfr DPH       = 0x83;
sfr PCON      = 0x87;
sfr DPCON     = 0xA7;
sfr CFG       = 0xAF;
sfr PSW       = 0xD0;
sfr ACC       = 0xE0;
sfr B         = 0xF0;

/*-------------------------------------------------------------------------
 *   Timer
 *-------------------------------------------------------------------------*/

sfr TCON      = 0x88;
sfr TMOD      = 0x89;
sfr TL0       = 0x8A;
sfr TL1       = 0x8B;
sfr TH0       = 0x8C;
sfr TH1       = 0x8D;
sfr T2CON     = 0xC8;
sfr RCAP2L    = 0xCA;
sfr RCAP2H    = 0xCB;
sfr TL2       = 0xCC;
sfr TH2       = 0xCD;

/*-------------------------------------------------------------------------
 *   FLASH
 *-------------------------------------------------------------------------*/

sfr ECON      = 0xB9;
sfr FLSHKY    = 0xBA;
sfr PROTKY    = 0xBB;
sfr EDATA_    = 0xBC;
sfr PROTB0    = 0xBD;
sfr PROTB1    = 0xBE;
sfr PROTR     = 0xBF;
sfr EADRL     = 0xC6;
sfr EADRH     = 0xC7;

/*-------------------------------------------------------------------------
 *   Power
 *-------------------------------------------------------------------------*/

sfr KYREG     = 0xC1;
sfr POWCON    = 0xC5;
sfr IPSME     = 0xEC;
sfr PERIPH    = 0xF4;
sfr BATPR     = 0xF5;
sfr IPSMF     = 0xF8;
sfr SCRATCH1  = 0xFB;
sfr SCRATCH2  = 0xFC;
sfr SCRATCH3  = 0xFD;
sfr SCRATCH4  = 0xFE;
sfr INTPR     = 0xFF;

/*-------------------------------------------------------------------------
 *   Bit Definitions
 *-------------------------------------------------------------------------*/
//P0 bits
sbit INT1     = 0x80;
sbit CF1      = 0x82;
sbit CF2      = 0x83;
sbit T0	      = 0x86;
sbit T1	      = 0x87;

//TCON bits
sbit IT0      = 0x88;
sbit IE0      = 0x89;
sbit IT1      = 0x8A;
sbit IE1      = 0x8B;
sbit TR0      = 0x8C;
sbit TF0      = 0x8D;
sbit TR1      = 0x8E;
sbit TF1      = 0x8F;

//P1 bits
sbit RXD      = 0x90;
sbit TXD      = 0x91;
sbit T2EX     = 0x93;
sbit T2       = 0x94;

//SCON bits
sbit RI       = 0x98;
sbit TI       = 0x99;
sbit RB8      = 0x9A;
sbit TB8      = 0x9B;
sbit REN      = 0x9C;
sbit SM2      = 0x9D;
sbit SM1      = 0x9E;
sbit SM0      = 0x9F;

//IE bits
sbit EX0      = 0xA8;
sbit ET0      = 0xA9;
sbit EX1      = 0xAA;
sbit ET1      = 0xAB;
sbit ES       = 0xAC;
sbit ET2      = 0xAD;
sbit ETEMP    = 0xAE;
sbit EA       = 0xAF;

//IP bits
sbit PX0      = 0xB8;
sbit PT0      = 0xB9;
sbit PX1      = 0xBA;
sbit PT1      = 0xBB;
sbit PS       = 0xBC;
sbit PT2      = 0xBD;
sbit PTEMP    = 0xBE;
sbit PADE     = 0xBF;

//WDCON bits
sbit WDWR     = 0xC0;
sbit WDE      = 0xC1;
sbit WDS      = 0xC2;
sbit WDIR     = 0xC3;
sbit PRE0     = 0xC4;
sbit PRE1     = 0xC5;
sbit PRE2     = 0xC6;
sbit PRE3     = 0xC7;

//T2CON bits
sbit CAP2     = 0xC8;
sbit CNT2     = 0xC9;
sbit TR2      = 0xCA;
sbit EXEN2    = 0xCB;
sbit TCLK     = 0xCC;
sbit RCLK     = 0xCD;
sbit EXF2     = 0xCE;
sbit TF2      = 0xCF;

//PSW bits
sbit P        = 0xD0;
sbit F1       = 0xD1;
sbit OV       = 0xD2;
sbit RS0      = 0xD3;
sbit RS1      = 0xD4;
sbit F0       = 0xD5;
sbit AC       = 0xD6;
sbit CY       = 0xD7;

//ADCGO bits
sbit BTADC    = 0xD8;
sbit TADC     = 0xD9;
sbit VADC     = 0xDA;
sbit PLLACK   = 0xDF;

//SPIMOD1 bits
sbit SPIR0    = 0xE8;
sbit SPIR1    = 0xE9;
sbit RXOFW    = 0xEA;
sbit SSE      = 0xEB;
sbit AUTO_SS  = 0xEC;
sbit INTMOD   = 0xED;

//I2CMOD bits
sbit I2CRCT0  = 0xE8;
sbit I2CRCT1  = 0xE9;
sbit I2CRCT2  = 0xEA;
sbit I2CRCT3  = 0xEB;
sbit I2CRCT4  = 0xEC;
sbit I2CR0    = 0xED;
sbit I2CR1    = 0xEE;
sbit I2CEN    = 0xEF;

//IPSMF bits
sbit FVDC     = 0xF8;
sbit FBSO     = 0xF9;
sbit FBAT     = 0xFA;
sbit FVSW     = 0xFB;
sbit FSAG     = 0xFD;
sbit FPSM     = 0xFE;
sbit FPSR     = 0xFF;

//Define ADE indirect registers read and write commands
#define WATTHR        0x01
#define RWATTHR       0x02
#define LWATTHR       0x03
#define VARHR         0x04
#define RVARHR        0x05
#define LVARHR        0x06
#define VAHR          0x07
#define RVAHR         0x08
#define LVAHR         0x09
#define PER_FREQ      0x0A
#define MODE1         0x0B
#define MODE2         0x0C
#define WAVMODE       0x0D
#define NLMODE        0x0E
#define ACCMODE       0x0F
#define PHCAL         0x10
#define ZXTOUT        0x11
#define LINCYC        0x12
#define SAGCYC        0x13
#define SAGLVL        0x14
#define IPKLVL        0x15
#define VPKLVL        0x16
#define IPEAK         0x17
#define RSTIPEAK      0x18
#define VPEAK         0x19
#define RSTVPEAK      0x1A
#define GAIN          0x1B
#define IBGAIN        0x1C
#define WGAIN         0x1D
#define VARGAIN       0x1E
#define VAGAIN        0x1F
#define WATTOS        0x20
#define VAROS         0x21
#define IRMSOS        0x22
#define VRMSOS        0x23
#define WDIV          0x24
#define VARDIV        0x25
#define VADIV         0x26
#define CF1NUM        0x27
#define CF1DEN        0x28
#define CF2NUM        0x29
#define CF2DEN        0x2A
#define CALMODE       0x3D


#define WATTHR_W      0x81
#define RWATTHR_W     0x82
#define LWATTHR_W     0x83
#define VARHR_W       0x84
#define RVARHR_W      0x85
#define LVARHR_W      0x86
#define VAHR_W        0x87
#define RVAHR_W       0x88
#define LVAHR_W       0x89
#define PER_FREQ_W    0x8A
#define MODE1_W       0x8B
#define MODE2_W       0x8C
#define WAVMODE_W     0x8D
#define NLMODE_W      0x8E
#define ACCMODE_W     0x8F
#define PHCAL_W       0x90
#define ZXTOUT_W      0x91
#define LINCYC_W      0x92
#define SAGCYC_W      0x93
#define SAGLVL_W      0x94
#define IPKLVL_W      0x95
#define VPKLVL_W      0x96
#define IPEAK_W       0x97
#define RSTIPEAK_W    0x98
#define VPEAK_W       0x99
#define RSTVPEAK_W    0x9A
#define GAIN_W        0x9B
#define IBGAIN_W      0x9C
#define WGAIN_W       0x9D
#define VARGAIN_W     0x9E
#define VAGAIN_W      0x9F
#define WATTOS_W      0xA0
#define VAROS_W       0xA1
#define IRMSOS_W      0xA2
#define VRMSOS_W      0xA3
#define WDIV_W        0xA4
#define VARDIV_W      0xA5
#define VADIV_W       0xA6
#define CF1NUM_W      0xA7
#define CF1DEN_W      0xA8
#define CF2NUM_W      0xA9
#define CF2DEN_W      0xAA
#define CALMODE_W     0xBD

//*****************  **********************************
//**** METER NON-BIT ADDRESSABLE BIT DEFINITIONS ****
//***************************************************
//MODE1
#define DISHPF        0x01
#define DISCF1        0x02
#define DISCF2        0x04
#define PWRDN         0x08
#define SWAPBITS      0x10
#define INTE          0x20
#define DISZXLPF      0x40
#define SWRST         0x80

//MODE2
#define FREQSEL       0x02
#define ZXRMS         0x04
#define VARMSCFCON    0x08
#define CF1SEL0       0x10
#define CF1SEL1       0x20
#define CF2SEL0       0x40
#define CF2SEL1       0x80

#define CF1WATT       0x00
#define CF2VAR        0x40

//WAVMODE
#define DTRT0         0x01
#define DTRT1         0x02
#define WAV1SEL0      0x04
#define WAV1SEL1      0x08
#define WAV1SEL2      0x10
#define WAV2SEL0      0x20
#define WAV2SEL1      0x40
#define WAV2SEL2      0x80

//NLMODE
#define APNOLOAD0     0x01
#define APNOLOAD1     0x02
#define VARNOLOAD0    0x04
#define VARNOLOAD1    0x08
#define VANOLOAD0     0x10
#define VANOLOAD1     0x20
#define IRMSNOLOAD    0x40

//ACCMODE
#define ABSAM         0x01
#define POAM          0x02
#define SAVARM        0x04
#define ABSVARM       0x08
#define APSIGN_INT    0x10
#define VARSIGN_INT   0x20
#define FAULTSIGN_INT 0x40
#define ICHANNEL      0x80

//GAIN
#define PGA1_0        0x01
#define PGA1_1        0x02
#define PGA1_2        0x04
#define PGA2_0        0x20
#define PGA2_1        0x40
#define PGA2_2        0x80

//CALMODE
#define I_CH_SHORT    0x04
#define V_CH_SHORT    0x08
#define SEL_I_CH0     0x10
#define SEL_I_CH1     0x20

//MIRQSTL/MIRQENL
#define APNOLOAD      0x01
#define RNOLOAD       0x02
#define VANOLOAD      0x04
#define APSIGN        0x08
#define VARSIGN       0x10
#define FAULTSIGN     0x20
#define ADEIRQFLAG    0x80

//MIRQSTM/MIRQENM
#define AEHF          0x01
#define REHF          0x02
#define VAEHF         0x04
#define AEOF          0x08
#define REOF          0x10
#define VAEOF         0x20
#define CF1INT        0x40
#define CF2INT        0x80

//MIRQSTH/MIRQENH
#define ZX            0x01
#define ZXTO          0x02
#define CYCEND        0x04
#define PKV           0x08
#define PKI           0x10
#define WFSM          0x20
#define END_RESET     0x80

//***************************************************
//***** LCD NON-BIT ADDRESSABLE BIT DEFINITIONS *****
//***************************************************
//LCDCON
#define LMUX0         0x01
#define LMUX1         0x02
#define BIAS          0x04
#define CLKSEL        0x08
#define LCDPSM2       0x10
#define BLINKEN       0x20
#define LCDRST        0x40
#define LCDEN         0x80

#define MUX4_BIAS3    0x07

//LCDCONX
#define BIASLVL0      0x01
#define BIASLVL1      0x02
#define BIASLVL2      0x04
#define BIASLVL3      0x08
#define BIASLVL4      0x10
#define BIASLVL5      0x20
#define EXTRES        0x40

//LCDCONY
#define REFRESH       0x01
#define UPDATEOVER    0x02
#define INV_LVL       0x40

//LCDCLK
#define FD0           0x01
#define FD1           0x02
#define FD2           0x04
#define FD3           0x08
#define BLKFREQ0      0x10
#define BLKFREQ1      0x20
#define BLKMOD0       0x40
#define BLKMOD1       0x80

//LCDSEGE
#define FDELAY0       0x01
#define FDELAY1       0x02
#define SEG20EN       0x04
#define SEG21EN       0x08
#define SEG22EN       0x10
#define SEG23EN       0x20
#define SEG24EN       0x40
#define SEG25EN       0x80

//LCDPTR
#define ADDRESS0      0x01
#define ADDRESS1      0x02
#define ADDRESS2      0x04
#define ADDRESS3      0x08
#define ADDRESS4      0x10
#define ADDRESS5      0x20
#define WR            0x80

//LCDDAT
#define LCDDATA0      0x01
#define LCDDATA1      0x02
#define LCDDATA2      0x04
#define LCDDATA3      0x08
#define LCDDATA4      0x10
#define LCDDATA5      0x20
#define LCDDATA6      0x40
#define LCDDATA7      0x80

//LCDSEGE2
#define SEG16EN       0x01
#define SEG17EN       0x02
#define SEG18EN       0x04
#define SEG19EN       0x08

//*****************************************************
//POWER MANAGEMENT NON-BIT ADDRESSABLE BIT DEFINITIONS
//*****************************************************
//PERIPH
#define RXPROG0       0x01
#define RXPROG1       0x02
#define EXTREFEN      0x04
#define REF_BAT_EN    0x08
#define PLL_FLT       0x10
#define VDD_OK        0x20
#define VSWSOURCE     0x40
#define RXFLAG        0x80

//BATPR
#define BATPRG0       0x01
#define BATPRG1       0x02

//INTPR
#define INT0PRG       0x01
#define INT1PRG0      0x02
#define INT1PRG1      0x04
#define INT1PRG2      0x08
#define RTCCAL        0x80

#define INT1GPIO      0x00
#define INT1BCTRL     0x02
#define INT1NOWAKE    0x04
#define INT1WAKE      0x0C

//IPSME
#define EVDCIN        0x01
#define EBSO          0x02
#define EBAT          0x04
#define EVSW          0x08
#define ESAG          0x20
#define ADEIAUTCLR    0x40
#define EPSR          0x80

//KYREG
#define KYREGKEY      0xA7

//POWCON
//(NOTE: write 0xA7 to KYREG before writing this register)
#define CD0           0x01
#define CD1           0x02
#define CD2           0x04
#define COREOFF       0x10

//****************************************************
//***** MISC NON-BIT ADDRESSABLE BIT DEFINITIONS *****
//****************************************************
//IEIP2
#define ESI           0x01
#define EPSM          0x02
#define ETI           0x04
#define EADE          0x08
#define PSI           0x10
#define PTI           0x40

//CFG
#define XREN0         0x01
#define XREN1         0x02
#define MOD38EN       0x10
#define SCPS          0x20
#define EXTEN         0x40

//STRBPER
#define TEMP_PERIOD0  0x01
#define TEMP_PERIOD1  0x02
#define BATT_PERIOD0  0x04
#define BATT_PERIOD1  0x08
#define VSW_PERIOD0   0x10
#define VSW_PERIOD1   0x20

//DIFFPROG
#define VSW_DIFF0     0x01
#define VSW_DIFF1     0x02
#define VSW_DIFF2     0x04
#define TEMP_DIFF0    0x08
#define TEMP_DIFF1    0x10
#define TEMP_DIFF2    0x20

//SPIMOD2
#define TIMODE        0x01
#define SPILSBF       0x02
#define SPICPHA       0x04
#define SPICPOL       0x08
#define SPIMS_b       0x10
#define SPIODO        0x20
#define SPIEN         0x40
#define SPICONT       0x80

//SPISTAT
#define SPITxBF       0x01
#define SPITxIRQ      0x02
#define SPITxUF       0x04
#define SPIRxBF       0x08
#define SPIRxIRQ      0x10
#define SPIRxOF       0x20
#define MMERR         0x40
#define SPIBUSY       0x80

//I2CSTAT
#define I2CTxWR_ERR   0x01
#define I2CACC_ERR    0x02
#define I2CFIFOSTAT0  0x04
#define I2CFIFOSTAT1  0x08
#define I2CTxIRQ      0x10
#define I2CRxIRQ      0x20
#define I2CNOACK      0x40
#define I2CBUSY       0x80

//PINMAP0
#define PINMAP00      0x01
#define PINMAP01      0x02
#define PINMAP02      0x04
#define PINMAP03      0x08
#define PINMAP04      0x10
#define PINMAP05      0x20
#define PINMAP06      0x40
#define PINMAP07      0x80

//PINMAP1
#define PINMAP10      0x01
#define PINMAP11      0x02
#define PINMAP12      0x04
#define PINMAP13      0x08
#define PINMAP14      0x10
#define PINMAP15      0x20
#define PINMAP16      0x40
#define PINMAP17      0x80

//PINMAP2
#define PINMAP20      0x01
#define PINMAP21      0x02
#define PINMAP22      0x04
#define PINMAP23      0x08
#define PINMAP25      0x20

//TIMECON
#define RTCEN         0x01
#define ITEN          0x02
#define ALARM         0x04
#define SIT           0x08
#define ITS0          0x10
#define ITS1          0x20
#define TFH           0x40
#define MIDNIGHT      0x80

//DPCON
#define DPSEL         0x01
#define DP0m0         0x04
#define DP0m1         0x08
#define DP1m0         0x10
#define DP1m1         0x20
#define DPT           0x40

//SBAUDF
#define SBAUDF_0      0x01
#define SBAUDF_1      0x04
#define SBAUDF_2      0x08
#define SBAUDF_3      0x10
#define SBAUDF_4      0x20
#define SBAUDF_5      0x40
#define UARTBAUDEN    0x80

//SBAUDT
#define DIV0          0x01
#define DIV1          0x02
#define DIV2          0x04
#define SBTH0         0x08
#define SBTH1         0x10
#define BE            0x20
#define FE            0x40
#define OWE           0x80

//EPFG
#define MOD38_CF2     0x01
#define MOD38_MISO    0x02
#define MOD38_SSb     0x04
#define MOD38_CF1     0x08
#define MOD38_TxD     0x10
#define MOD38_FP23    0x20
#define MOD38_FP22    0x40
#define MOD38_FP21    0x80

//TMOD
#define T0_M0         0x01
#define T0_M1         0x02
#define C_T0          0x04
#define GATE0         0x08
#define T1_M0         0x10
#define T1_M1         0x20
#define C_T1          0x40
#define GATE1         0x80




