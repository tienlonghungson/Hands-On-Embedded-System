/**************************************************************************************************
 *                                        - CC1010.h -
 *
 * Header file for the Chipcon CC1010 System on Chip.
 *
 **************************************************************************************************
 */

#ifndef IOCC1010_H
#define IOCC1010_H

/* ------------------------------------------------------------------------------------------------
 *                                      Compiler Abstraction
 * ------------------------------------------------------------------------------------------------
 */
#define SFR(name,addr)   sfr   name  =  addr;
#define SFRBIT(name, addr, bit7, bit6, bit5, bit4, bit3, bit2, bit1, bit0)  sfr name = addr;
#define SBIT(name,addr)  sbit  name  =  addr;
#define VECT(num,addr)   num
#ifdef __C51__
#define XREG(addr)  ((unsigned char volatile xdata *) 0)[addr]
#elif defined __AX51__ || defined __A51__
#define XREG(addr)  addr
#endif


/* ------------------------------------------------------------------------------------------------
 *                                        Interrupt Vectors
 * ------------------------------------------------------------------------------------------------
 */
#define  RFTXRX_VECTOR  VECT(  0, 0x03 )   /*  RF TX FIFO Underflow and RX FIFO Overflow   */
#define  ADC_VECTOR     VECT(  1, 0x0B )   /*  ADC End of Conversion                       */
#define  URX0_VECTOR    VECT(  2, 0x13 )   /*  USART0 RX Complete                          */
#define  URX1_VECTOR    VECT(  3, 0x1B )   /*  USART1 RX Complete                          */
#define  ENC_VECTOR     VECT(  4, 0x23 )   /*  AES Encryption/Decryption Complete          */
#define  ST_VECTOR      VECT(  5, 0x2B )   /*  Sleep Timer Compare                         */
#define  P2INT_VECTOR   VECT(  6, 0x33 )   /*  Port 2 Inputs                               */
#define  UTX0_VECTOR    VECT(  7, 0x3B )   /*  USART0 TX Complete                          */
#define  DMA_VECTOR     VECT(  8, 0x43 )   /*  DMA Transfer Complete                       */
#define  T1_VECTOR      VECT(  9, 0x4B )   /*  Timer 1 (16-bit) Capture/Compare/Overflow   */
#define  T2_VECTOR      VECT( 10, 0x53 )   /*  Timer 2 (MAC Timer)                         */
#define  T3_VECTOR      VECT( 11, 0x5B )   /*  Timer 3 (8-bit) Capture/Compare/Overflow    */
#define  T4_VECTOR      VECT( 12, 0x63 )   /*  Timer 4 (8-bit) Capture/Compare/Overflow    */
#define  P0INT_VECTOR   VECT( 13, 0x6B )   /*  Port 0 Inputs                               */
#define  UTX1_VECTOR    VECT( 14, 0x73 )   /*  USART1 TX Complete                          */
#define  P1INT_VECTOR   VECT( 15, 0x7B )   /*  Port 1 Inputs                               */
#define  RF_VECTOR      VECT( 16, 0x83 )   /*  RF General Interrupts                       */
#define  WDT_VECTOR     VECT( 17, 0x8B )   /*  Watchdog Overflow in Timer Mode             */


/* ------------------------------------------------------------------------------------------------
 *                                            SFRs
 * ------------------------------------------------------------------------------------------------
 */

/* Port 0                                                                           */
SFRBIT( P0      ,  0x80, P0_7, P0_6, P0_5, P0_4, P0_3, P0_2, P0_1, P0_0 )
SFR(  SP        ,  0x81  )   /*  Stack Pointer                                      */
SFR(  DPL0      ,  0x82  )   /*  Data Pointer 0 Low Byte                            */
SFR(  DPH0      ,  0x83  )   /*  Data Pointer 0 High Byte                           */
SFR(  DPL1      ,  0x84  )   /*  Data Pointer 1 Low Byte                            */
SFR(  DPH1      ,  0x85  )   /*  Data Pointer 1 High Byte                           */
SFR(  U0CSR     ,  0x86  )   /*  USART 0 Control and Status                         */
SFR(  PCON      ,  0x87  )   /*  Power Mode Control                                 */

/* Interrupt Flags                                                                  */
SFRBIT( TCON    ,  0x88, URX1IF, _TCON6, ADCIF, _TCON5, URX0IF, IT1, RFTXRXIF, IT0 )
SFR(  P0IFG     ,  0x89  )   /*  Port 0 Interrupt Status Flag                       */
SFR(  P1IFG     ,  0x8A  )   /*  Port 1 Interrupt Status Flag                       */
SFR(  P2IFG     ,  0x8B  )   /*  Port 2 Interrupt Status Flag                       */
SFR(  PICTL     ,  0x8C  )   /*  Port Interrupt Control                             */
SFR(  P1IEN     ,  0x8D  )   /*  Port 1 Interrupt Mask                              */
SFR(  _SFR8E    ,  0x8E  )   /*  not used                                           */
SFR(  P0INP     ,  0x8F  )   /*  Port 0 Input Mode                                  */

/* Port 1                                                                           */
SFRBIT( P1      ,  0x90, P1_7, P1_6, P1_5, P1_4, P1_3, P1_2, P1_1, P1_0 )
SFR(  RFIM      ,  0x91  )   /*  RF Interrupt Mask                                  */
SFR(  DPS       ,  0x92  )   /*  Data Pointer Select                                */
SFR(  MPAGE     ,  0x93  )   /*  Memory Page Select                                 */
SFR(  _SFR94    ,  0x94  )   /*  not used                                           */
SFR(  _SFR95    ,  0x95  )   /*  not used                                           */
SFR(  _SFR96    ,  0x96  )   /*  not used                                           */
SFR(  _SFR97    ,  0x97  )   /*  not used                                           */

/*  Interrupt Flags 2                                                               */
SFRBIT(  S0CON  ,  0x98, _SOCON7, _SOCON6, _SOCON5, _SOCON4, _SOCON3, _SOCON2, ENCIF_1, ENCIF_0  )
SFR(  _SFR99    ,  0x99  )   /*  not used                                           */
SFR(  IEN2      ,  0x9A  )   /*  Interrupt Enable 2                                 */
SFR(  S1CON     ,  0x9B  )   /*  Interrupt Flags 3                                  */
SFR(  T2CT      ,  0x9C  )   /*  Timer 2 Overflow Count 0                           */
SFR(  T2PR      ,  0x9D  )   /*  Timer 2 Overflow Count 1                           */
SFR(  T2CTL     ,  0x9E  )   /*  Timer 2 Overflow Count 2                           */
SFR(  _SFR9F    ,  0x9F  )   /*  not used                                           */

/* Port 2                                                                           */
SFRBIT( P2      ,  0xA0, _P2_7, _P2_6, _P2_5, P2_4, P2_3, P2_2, P2_1, P2_0 )
SFR(  WORIRQ    ,  0xA1  )   /*  Sleep Timer Interrupts                             */
SFR(  WORCTL    ,  0xA2  )   /*  Sleep Timer Control                                */
SFR(  WOREVT0   ,  0xA3  )   /*  Sleep Timer Event 0                                */
SFR(  WOREVT1   ,  0xA4  )   /*  Sleep Timer Event 1                                */
SFR(  WORTIME0  ,  0xA5  )   /*  Sleep Timer Value 0                                */
SFR(  WORTIME1  ,  0xA6  )   /*  Sleep Timer Value 1                                */
SFR(  _SFRA7    ,  0xA7  )   /*  not used                                           */

/* Interrupt Enable 0                                                               */
SFRBIT( IEN0    ,  0xA8, EA, _IEN06, STIE, ENCIE, URX1IE, URX0IE, ADCIE, RFTXRXIE  )
SFR(  IP0       ,  0xA9  )   /*  Interrupt Priority 0                               */
SFR(  _SFRAA    ,  0xAA  )   /*  not used                                           */
SFR(  FWT       ,  0xAB  )   /*  Flash Write Timing                                 */
SFR(  FADDRL    ,  0xAC  )   /*  Flash Address Low Byte                             */
SFR(  FADDRH    ,  0xAD  )   /*  Flash Address High Byte                            */
SFR(  FCTL      ,  0xAE  )   /*  Flash Control                                      */
SFR(  FWDATA    ,  0xAF  )   /*  Flash Write Data                                   */

SFR(  _SFRB0    ,  0xB0  )   /*  not used                                           */
SFR(  ENCDI     ,  0xB1  )   /*  Encryption Input Data                              */
SFR(  ENCDO     ,  0xB2  )   /*  Encryption Output Data                             */
SFR(  ENCCS     ,  0xB3  )   /*  Encryption Control and Status                      */
SFR(  ADCCON1   ,  0xB4  )   /*  ADC Control 1                                      */
SFR(  ADCCON2   ,  0xB5  )   /*  ADC Control 2                                      */
SFR(  ADCCON3   ,  0xB6  )   /*  ADC Control 3                                      */
SFR(  _SFRB7    ,  0xB7  )   /*  not used                                           */

/*  Interrupt Enable 1                                                              */
SFRBIT( IEN1    ,  0xB8, _IEN17, _IEN16, P0IE, T4IE, T3IE, T2IE,  T1IE, DMAIE  )
SFR(  IP1       ,  0xB9  )   /*  Interrupt Priority 1                               */
SFR(  ADCL      ,  0xBA  )   /*  ADC Data Low                                       */
SFR(  ADCH      ,  0xBB  )   /*  ADC Data High                                      */
SFR(  RNDL      ,  0xBC  )   /*  Random Register Low Byte                           */
SFR(  RNDH      ,  0xBD  )   /*  Random Register High Byte                          */
SFR(  SLEEP     ,  0xBE  )   /*  Sleep Mode Control                                 */
SFR(  _SFRBF    ,  0xBF  )   /*  not used                                           */

/*  Interrupt Flags 4                                                               */
SFRBIT( IRCON   ,  0xC0 ,STIF, _IRCON6, P0IF, T4IF, T3IF, T2IF, T1IF, DMAIF )
SFR(  U0DBUF    ,  0xC1  )   /*  USART 0 Receive/Transmit Data Buffer               */
SFR(  U0BAUD    ,  0xC2  )   /*  USART 0 Baud Rate Control                          */
SFR(  _SFRC3    ,  0xC3  )   /*  not in use                                         */
SFR(  U0UCR     ,  0xC4  )   /*  USART 0 UART Control                               */
SFR(  U0GCR     ,  0xC5  )   /*  USART 0 Generic Control                            */
SFR(  CLKCON    ,  0xC6  )   /*  Clock Control                                      */
SFR(  MEMCTR    ,  0xC7  )   /*  Memory Arbiter Control                             */

SFR(  _SFRC8    ,  0xC8  )   /*  not in use                                         */
SFR(  WDCTL     ,  0xC9  )   /*  Watchdog Timer Control                             */
SFR(  T3CNT     ,  0xCA  )   /*  Timer 3 Counter                                    */
SFR(  T3CTL     ,  0xCB  )   /*  Timer 3 Control                                    */
SFR(  T3CCTL0   ,  0xCC  )   /*  Timer 3 Channel 0 Capture/Compare Control          */
SFR(  T3CC0     ,  0xCD  )   /*  Timer 3 Channel 0 Capture/Compare Value            */
SFR(  T3CCTL1   ,  0xCE  )   /*  Timer 3 Channel 1 Capture/Compare Control          */
SFR(  T3CC1     ,  0xCF  )   /*  Timer 3 Channel 1 Capture/Compare Value            */

 /*  Program Status Word                                */
SFRBIT( PSW     ,  0xD0, CY, AC, F0, RS1, RS0, OV, F1, P)
SFR(  DMAIRQ    ,  0xD1  )   /*  DMA Interrupt Flag                                 */
SFR(  DMA1CFGL  ,  0xD2  )   /*  DMA Channel 1-4 Configuration Address Low Byte     */
SFR(  DMA1CFGH  ,  0xD3  )   /*  DMA Channel 1-4 Configuration Address High Byte    */
SFR(  DMA0CFGL  ,  0xD4  )   /*  DMA Channel 0 Configuration Address Low Byte       */
SFR(  DMA0CFGH  ,  0xD5  )   /*  DMA Channel 0 Configuration Address High Byte      */
SFR(  DMAARM    ,  0xD6  )   /*  DMA Channel Arm                                    */
SFR(  DMAREQ    ,  0xD7  )   /*  DMA Channel Start Request and Status               */

/*  Timers 1/3/4 Interrupt Mask/Flag                   */
SFRBIT( TIMIF   ,  0xD8 , _TIMIF7, OVFIM, T4CH1IF, T4CH0IF, T4OVFIF, T3CH1IF, T3CH0IF, T3OVFIF )
SFR(  RFD       ,  0xD9  )   /*  RF Data                                            */
SFR(  T1CC0L    ,  0xDA  )   /*  Timer 1 Channel 0 Capture/Compare Value Low Byte   */
SFR(  T1CC0H    ,  0xDB  )   /*  Timer 1 Channel 0 Capture/Compare Value High Byte  */
SFR(  T1CC1L    ,  0xDC  )   /*  Timer 1 Channel 1 Capture/Compare Value Low Byte   */
SFR(  T1CC1H    ,  0xDD  )   /*  Timer 1 Channel 1 Capture/Compare Value High Byte  */
SFR(  T1CC2L    ,  0xDE  )   /*  Timer 1 Channel 2 Capture/Compare Value Low Byte   */
SFR(  T1CC2H    ,  0xDF  )   /*  Timer 1 Channel 2 Capture/Compare Value High Byte  */

SFR(  ACC       ,  0xE0  )   /*  Accumulator                                        */
SFR(  RFST      ,  0xE1  )   /*  RF CSMA-CA / Strobe Processor                      */
SFR(  T1CNTL    ,  0xE2  )   /*  Timer 1 Counter Low                                */
SFR(  T1CNTH    ,  0xE3  )   /*  Timer 1 Counter High                               */
SFR(  T1CTL     ,  0xE4  )   /*  Timer 1 Control and Status                         */
SFR(  T1CCTL0   ,  0xE5  )   /*  Timer 1 Channel 0 Capture/Compare Control          */
SFR(  T1CCTL1   ,  0xE6  )   /*  Timer 1 Channel 1 Capture/Compare Control          */
SFR(  T1CCTL2   ,  0xE7  )   /*  Timer 1 Channel 2 Capture/Compare Control          */

/*  Interrupt Flags 5                                                               */
SFRBIT(  IRCON2    ,  0xE8,_IRCON27, _IRCON26, _IRCON25, WDTIF, P1IF, UTX1IF, UTX0IF, P2IF )
SFR(  RFIF      ,  0xE9  )   /*  RF Interrupt Flags                                 */
SFR(  T4CNT     ,  0xEA  )   /*  Timer 4 Counter                                    */
SFR(  T4CTL     ,  0xEB  )   /*  Timer 4 Control                                    */
SFR(  T4CCTL0   ,  0xEC  )   /*  Timer 4 Channel 0 Capture/Compare Control          */
SFR(  T4CC0     ,  0xED  )   /*  Timer 4 Channel 0 Capture/Compare Value            */
SFR(  T4CCTL1   ,  0xEE  )   /*  Timer 4 Channel 1 Capture/Compare Control          */
SFR(  T4CC1     ,  0xEF  )   /*  Timer 4 Channel 1 Capture/Compare Value            */

SFR(  B         ,  0xF0  )   /*  B Register                                         */
SFR(  PERCFG    ,  0xF1  )   /*  Peripheral Control                                 */
SFR(  ADCCFG    ,  0xF2  )   /*  ADC Input Configuration                            */
SFR(  P0SEL     ,  0xF3  )   /*  Port 0 Function Select                             */
SFR(  P1SEL     ,  0xF4  )   /*  Port 1 Function Select                             */
SFR(  P2SEL     ,  0xF5  )   /*  Port 2 Function Select                             */
SFR(  P1INP     ,  0xF6  )   /*  Port 1 Input Mode                                  */
SFR(  P2INP     ,  0xF7  )   /*  Port 2 Input Mode                                  */

SFR(  U1CSR     ,  0xF8  )   /*  USART 1 Control and Status                         */
SFR(  U1DBUF    ,  0xF9  )   /*  USART 1 Receive/Transmit Data Buffer               */
SFR(  U1BAUD    ,  0xFA  )   /*  USART 1 Baud Rate Control                          */
SFR(  U1UCR     ,  0xFB  )   /*  USART 1 UART Control                               */
SFR(  U1GCR     ,  0xFC  )   /*  USART 1 Generic Control                            */
SFR(  P0DIR     ,  0xFD  )   /*  Port 0 Direction                                   */
SFR(  P1DIR     ,  0xFE  )   /*  Port 1 Direction                                   */
SFR(  P2DIR     ,  0xFF  )   /*  Port 2 Direction                                   */


/* ------------------------------------------------------------------------------------------------
 *                                         SFR Bit Access
 * ------------------------------------------------------------------------------------------------
 */

/* P0 */
SBIT(  P0_7      ,  0x87   )  /*  GPIO - Port 0, Input 7                      */
SBIT(  P0_6      ,  0x86   )  /*  GPIO - Port 0, Input 6                      */
SBIT(  P0_5      ,  0x85   )  /*  GPIO - Port 0, Input 5                      */
SBIT(  P0_4      ,  0x84   )  /*  GPIO - Port 0, Input 4                      */
SBIT(  P0_3      ,  0x83   )  /*  GPIO - Port 0, Input 3                      */
SBIT(  P0_2      ,  0x82   )  /*  GPIO - Port 0, Input 2                      */
SBIT(  P0_1      ,  0x81   )  /*  GPIO - Port 0, Input 1                      */
SBIT(  P0_0      ,  0x80   )  /*  GPIO - Port 0, Input 0                      */

/* TCON */
SBIT(  URX1IF    ,  0x8F  )  /*  USART1 RX Interrupt Flag                    */
SBIT(  _TCON6    ,  0x8E  )  /*  not used                                    */
SBIT(  ADCIF     ,  0x8D  )  /*  ADC Interrupt Flag                          */
SBIT(  _TCON5    ,  0x8C  )  /*  not used                                    */
SBIT(  URX0IF    ,  0x8B  )  /*  USART0 RX Interrupt Flag                    */
SBIT(  IT1       ,  0x8A  )  /*  reserved (must always be set to 1)          */
SBIT(  RFTXRXIF  ,  0x89  )  /*  RF TX/RX FIFO Interrupt Flag                */
SBIT(  IT0       ,  0x88  )  /*  reserved (must always be set to 1)          */

/* P1 */
SBIT(  P1_7      ,  0x97  )  /*  GPIO - Port 1, Input 7                      */
SBIT(  P1_6      ,  0x96  )  /*  GPIO - Port 1, Input 6                      */
SBIT(  P1_5      ,  0x95  )  /*  GPIO - Port 1, Input 5                      */
SBIT(  P1_4      ,  0x94  )  /*  GPIO - Port 1, Input 4                      */
SBIT(  P1_3      ,  0x93  )  /*  GPIO - Port 1, Input 3                      */
SBIT(  P1_2      ,  0x92  )  /*  GPIO - Port 1, Input 2                      */
SBIT(  P1_1      ,  0x91  )  /*  GPIO - Port 1, Input 1                      */
SBIT(  P1_0      ,  0x90  )  /*  GPIO - Port 1, Input 0                      */

/* S0CON */
SBIT(  ENCIF_1   ,  0x99  )  /*  AES Interrupt Flag 1                        */
SBIT(  ENCIF_0   ,  0x98  )  /*  AES Interrupt Flag 0                        */

/* P2 */
SBIT(  _P2_7     ,  0xA7  )  /*  not used                                    */
SBIT(  _P2_6     ,  0xA6  )  /*  not used                                    */
SBIT(  _P2_5     ,  0xA5  )  /*  not used                                    */
SBIT(  P2_4      ,  0xA4  )  /*  GPIO - Port 2, Input 4                      */
SBIT(  P2_3      ,  0xA3  )  /*  GPIO - Port 2, Input 3                      */
SBIT(  P2_2      ,  0xA2  )  /*  GPIO - Port 2, Input 2                      */
SBIT(  P2_1      ,  0xA1  )  /*  GPIO - Port 2, Input 1                      */
SBIT(  P2_0      ,  0xA0  )  /*  GPIO - Port 2, Input 0                      */

/* IEN0 */
SBIT(  EA        ,  0xAF  )  /*  Global Interrupt Enable                     */
SBIT(  _IEN06    ,  0xAE  )  /*  not used                                    */
SBIT(  STIE      ,  0xAD  )  /*  Sleep Timer Interrupt Enable                */
SBIT(  ENCIE     ,  0xAC  )  /*  AES Encryption/Decryption Interrupt Enable  */
SBIT(  URX1IE    ,  0xAB  )  /*  USART1 RX Interrupt Enable                  */
SBIT(  URX0IE    ,  0xAA  )  /*  USART0 RX Interrupt Enable                  */
SBIT(  ADCIE     ,  0xA9  )  /*  ADC Interrupt Enable                        */
SBIT(  RFTXRXIE  ,  0xA8  )  /*  RFRXTXIE – RF TX/RX done interrupt enable   */

/* IEN1 */
SBIT(  _IEN17    ,  0xBF  )  /*  not used                                    */
SBIT(  _IEN16    ,  0xBE  )  /*  not used                                    */
SBIT(  P0IE      ,  0xBD  )  /*  Port 0 Interrupt Enable                     */
SBIT(  T4IE      ,  0xBC  )  /*  Timer 4 Interrupt Enable                    */
SBIT(  T3IE      ,  0xBB  )  /*  Timer 3 Interrupt Enable                    */
SBIT(  T2IE      ,  0xBA  )  /*  Timer 2 Interrupt Enable                    */
SBIT(  T1IE      ,  0xB9  )  /*  Timer 1 Interrupt Enable                    */
SBIT(  DMAIE     ,  0xB8  )  /*  DMA Transfer Interrupt Enable               */

/* IRCON */
SBIT(  STIF      ,  0xC7  )  /*  Sleep Timer Interrupt Flag                  */
SBIT(  _IRCON6   ,  0xC6  )  /*  not used                                    */
SBIT(  P0IF      ,  0xC5  )  /*  Port 0 Interrupt Flag                       */
SBIT(  T4IF      ,  0xC4  )  /*  Timer 4 Interrupt Flag                      */
SBIT(  T3IF      ,  0xC3  )  /*  Timer 3 Interrupt Flag                      */
SBIT(  T2IF      ,  0xC2  )  /*  Timer 2 Interrupt Flag                      */
SBIT(  T1IF      ,  0xC1  )  /*  Timer 1 Interrupt Flag                      */
SBIT(  DMAIF     ,  0xC0  )  /*  DMA Complete Interrupt Flag                 */

/* PSW */
SBIT(  CY        ,  0xD7  )  /*  Carry Flag                                  */
SBIT(  AC        ,  0xD6  )  /*  Auxiliary Carry Flag                        */
SBIT(  F0        ,  0xD5  )  /*  User-Defined                                */
SBIT(  RS1       ,  0xD4  )  /*  Register Bank Select 1                      */
SBIT(  RS0       ,  0xD3  )  /*  Register Bank Select 0                      */
SBIT(  OV        ,  0xD2  )  /*  Overflow Flag                               */
SBIT(  F1        ,  0xD1  )  /*  User-Defined                                */
SBIT(  P         ,  0xD0  )  /*  Parity Flag                                 */

/* TIMIF */
SBIT(  _TIMIF7   ,  0xDF  )  /*  not used                                    */
SBIT(  OVFIM     ,  0xDE  )  /*  Timer 1 Overflow Interrupt Mask             */
SBIT(  T4CH1IF   ,  0xDD  )  /*  Timer 4 Channel 1 Interrupt Flag            */
SBIT(  T4CH0IF   ,  0xDC  )  /*  Timer 4 Channel 0 Interrupt Flag            */
SBIT(  T4OVFIF   ,  0xDB  )  /*  Timer 4 Overflow Interrupt Flag             */
SBIT(  T3CH1IF   ,  0xDA  )  /*  Timer 3 Channel 1 Interrupt Flag            */
SBIT(  T3CH0IF   ,  0xD9  )  /*  Timer 3 Channel 0 Interrupt Flag            */
SBIT(  T3OVFIF   ,  0xD8  )  /*  Timer 3 Overflow Interrupt Flag             */

/* IRCON2 */
SBIT(  _IRCON27  ,  0xEF  )  /*  not used                                    */
SBIT(  _IRCON26  ,  0xEE  )  /*  not used                                    */
SBIT(  _IRCON25  ,  0xED  )  /*  not used                                    */
SBIT(  WDTIF     ,  0xEC  )  /*  Watchdog Timer Interrupt Flag               */
SBIT(  P1IF      ,  0xEB  )  /*  Port 1 Interrupt Flag                       */
SBIT(  UTX1IF    ,  0xEA  )  /*  USART1 TX Interrupt Flag                    */
SBIT(  UTX0IF    ,  0xE9  )  /*  USART0 TX Interrupt Flag                    */
SBIT(  P2IF      ,  0xE8  )  /*  Port 2 Interrupt Flag                       */


/* ------------------------------------------------------------------------------------------------
 *                                       Xdata Radio Registers
 * ------------------------------------------------------------------------------------------------
 */
#define  SYNC1       XREG( 0xDF00 )  /*  Sync word, high byte                                */
#define  SYNC0       XREG( 0xDF01 )  /*  Sync word, low byte                                 */
#define  PKTLEN      XREG( 0xDF02 )  /*  Packet length                                       */
#define  PKTCTRL1    XREG( 0xDF03 )  /*  Packet automation control                           */
#define  PKTCTRL0    XREG( 0xDF04 )  /*  Packet automation control                           */
#define  ADDR        XREG( 0xDF05 )  /*  Device address                                      */
#define  CHANNR      XREG( 0xDF06 )  /*  Channel number                                      */
#define  FSCTRL1     XREG( 0xDF07 )  /*  Frequency synthesizer control                       */
#define  FSCTRL0     XREG( 0xDF08 )  /*  Frequency synthesizer control                       */
#define  FREQ2       XREG( 0xDF09 )  /*  Frequency control word, high byte                   */
#define  FREQ1       XREG( 0xDF0A )  /*  Frequency control word, middle byte                 */
#define  FREQ0       XREG( 0xDF0B )  /*  Frequency control word, low byte                    */
#define  MDMCFG4     XREG( 0xDF0C )  /*  Modem configuration                                 */
#define  MDMCFG3     XREG( 0xDF0D )  /*  Modem configuration                                 */
#define  MDMCFG2     XREG( 0xDF0E )  /*  Modem configuration                                 */
#define  MDMCFG1     XREG( 0xDF0F )  /*  Modem configuration                                 */
#define  MDMCFG0     XREG( 0xDF10 )  /*  Modem configuration                                 */
#define  DEVIATN     XREG( 0xDF11 )  /*  Modem deviation setting                             */
#define  MCSM2       XREG( 0xDF12 )  /*  Main Radio Control State Machine configuration      */
#define  MCSM1       XREG( 0xDF13 )  /*  Main Radio Control State Machine configuration      */
#define  MCSM0       XREG( 0xDF14 )  /*  Main Radio Control State Machine configuration      */
#define  FOCCFG      XREG( 0xDF15 )  /*  Frequency Offset Compensation configuration         */
#define  BSCFG       XREG( 0xDF16 )  /*  Bit Synchronization configuration                   */
#define  AGCCTRL2    XREG( 0xDF17 )  /*  AGC control                                         */
#define  AGCCTRL1    XREG( 0xDF18 )  /*  AGC control                                         */
#define  AGCCTRL0    XREG( 0xDF19 )  /*  AGC control                                         */
#define  FREND1      XREG( 0xDF1A )  /*  Front end RX configuration                          */
#define  FREND0      XREG( 0xDF1B )  /*  Front end TX configuration                          */
#define  FSCAL3      XREG( 0xDF1C )  /*  Frequency synthesizer calibration                   */
#define  FSCAL2      XREG( 0xDF1D )  /*  Frequency synthesizer calibration                   */
#define  FSCAL1      XREG( 0xDF1E )  /*  Frequency synthesizer calibration                   */
#define  FSCAL0      XREG( 0xDF1F )  /*  Frequency synthesizer calibration                   */
#define  _XREGDF20   XREG( 0xDF20 )  /*  reserved                                            */
#define  _XREGDF21   XREG( 0xDF21 )  /*  reserved                                            */
#define  _XREGDF22   XREG( 0xDF22 )  /*  reserved                                            */
#define  _XREGDF23   XREG( 0xDF23 )  /*  reserved                                            */
#define  _XREGDF24   XREG( 0xDF24 )  /*  reserved                                            */
#define  _XREGDF25   XREG( 0xDF25 )  /*  reserved                                            */
#define  _XREGDF26   XREG( 0xDF26 )  /*  reserved                                            */
#define  PA_TABLE7   XREG( 0xDF27 )  /*  PA output power setting                             */
#define  PA_TABLE6   XREG( 0xDF28 )  /*  PA output power setting                             */
#define  PA_TABLE5   XREG( 0xDF29 )  /*  PA output power setting                             */
#define  PA_TABLE4   XREG( 0xDF2A )  /*  PA output power setting                             */
#define  PA_TABLE3   XREG( 0xDF2B )  /*  PA output power setting                             */
#define  PA_TABLE2   XREG( 0xDF2C )  /*  PA output power setting                             */
#define  PA_TABLE1   XREG( 0xDF2D )  /*  PA output power setting                             */
#define  PA_TABLE0   XREG( 0xDF2E )  /*  PA output power setting                             */
#define  IOCFG2      XREG( 0xDF2F )  /*  GDO2 output pin configuration                       */
#define  IOCFG1      XREG( 0xDF30 )  /*  GDO1 output pin configuration                       */
#define  IOCFG0      XREG( 0xDF31 )  /*  GDO0 output pin configuration                       */
#define  _XREGDF32   XREG( 0xDF32 )  /*  reserved                                            */
#define  _XREGDF33   XREG( 0xDF33 )  /*  reserved                                            */
#define  _XREGDF34   XREG( 0xDF34 )  /*  reserved                                            */
#define  _XREGDF35   XREG( 0xDF35 )  /*  reserved                                            */
#define  PARTNUM     XREG( 0xDF36 )  /*  Chip Identifier                                     */
#define  VERSION     XREG( 0xDF37 )  /*  Configuration                                       */
#define  FREQEST     XREG( 0xDF38 )  /*  Frequency Offset Estimate                           */
#define  LQI         XREG( 0xDF39 )  /*  Link Quality Indicator                              */
#define  RSSI        XREG( 0xDF3A )  /*  Received Signal Strength Indication                 */
#define  MARCSTATE   XREG( 0xDF3B )  /*  Main Radio Control State                            */
#define  PKTSTATUS   XREG( 0xDF3C )  /*  Packet status                                       */
#define  VCO_VC_DAC  XREG( 0xDF3D )  /*  PLL calibration current                             */



/* ------------------------------------------------------------------------------------------------
 *                                      Xdata Mapped SFRs
 * ------------------------------------------------------------------------------------------------
 */

/*
 *   Most SFRs are also accessible through XDATA address space.  The register definitions for
 *   this type of access are listed below.  The register names are identical to the SFR names
 *   but with the prefix X_ to denote an XDATA register.
 *
 *   Some SFRs are not accessible through XDATA space.  For clarity, entries are included for these
 *   registers.  They have a prefix of _NA to denote "not available."
 *
 *   For register descriptions, refer to the actual SFR declartions elsewhere in this file.
 */
#define  _NA_P0      XREG( 0xDF80 )
#define  _NA_SP      XREG( 0xDF81 )
#define  _NA_DPL0    XREG( 0xDF82 )
#define  _NA_DPH0    XREG( 0xDF83 )
#define  _NA_DPL1    XREG( 0xDF84 )
#define  _NA_DPH1    XREG( 0xDF85 )
#define  X_U0CSR     XREG( 0xDF86 )
#define  _NA_PCON    XREG( 0xDF87 )

#define  _NA_TCON    XREG( 0xDF88 )
#define  X_P0IFG     XREG( 0xDF89 )
#define  X_P1IFG     XREG( 0xDF8A )
#define  X_P2IFG     XREG( 0xDF8B )
#define  X_PICTL     XREG( 0xDF8C )
#define  X_P1IEN     XREG( 0xDF8D )
#define  _X_SFR8E    XREG( 0xDF8E )
#define  X_P0INP     XREG( 0xDF8F )

#define  _NA_P1      XREG( 0xDF90 )
#define  X_RFIM      XREG( 0xDF91 )
#define  _NA_DPS     XREG( 0xDF92 )
#define  X_MPAGE     XREG( 0xDF93 )
#define  _X_SFR94    XREG( 0xDF94 )
#define  _X_SFR95    XREG( 0xDF95 )
#define  _X_SFR96    XREG( 0xDF96 )
#define  _X_SFR97    XREG( 0xDF97 )

#define  _NA_S0CON   XREG( 0xDF98 )
#define  _X_SFR99    XREG( 0xDF99 )
#define  _NA_IEN2    XREG( 0xDF9A )
#define  _NA_S1CON   XREG( 0xDF9B )
#define  X_T2CT      XREG( 0xDF9C )
#define  X_T2PR      XREG( 0xDF9D )
#define  X_T2CTL     XREG( 0xDF9E )
#define  _X_SFR9F    XREG( 0xDF9F )

#define  _NA_P2      XREG( 0xDFA0 )
#define  X_WORIRQ    XREG( 0xDFA1 )
#define  X_WORCTL    XREG( 0xDFA2 )
#define  X_WOREVT0   XREG( 0xDFA3 )
#define  X_WOREVT1   XREG( 0xDFA4 )
#define  X_WORTIME0  XREG( 0xDFA5 )
#define  X_WORTIME1  XREG( 0xDFA6 )
#define  _X_SFRA7     XREG( 0xDFA7 )

#define  _NA_IEN0    XREG( 0xDFA8 )
#define  _NA_IP0     XREG( 0xDFA9 )
#define  _X_SFRAA    XREG( 0xDFAA )
#define  X_FWT       XREG( 0xDFAB )
#define  X_FADDRL    XREG( 0xDFAC )
#define  X_FADDRH    XREG( 0xDFAD )
#define  X_FCTL      XREG( 0xDFAE )
#define  X_FWDATA    XREG( 0xDFAF )

#define  _X_SFRB0    XREG( 0xDFB0 )
#define  X_ENCDI     XREG( 0xDFB1 )
#define  X_ENCDO     XREG( 0xDFB2 )
#define  X_ENCCS     XREG( 0xDFB3 )
#define  X_ADCCON1   XREG( 0xDFB4 )
#define  X_ADCCON2   XREG( 0xDFB5 )
#define  X_ADCCON3   XREG( 0xDFB6 )
#define  _X_SFRB7    XREG( 0xDFB7 )

#define  _NA_IEN1    XREG( 0xDFB8 )
#define  _NA_IP1     XREG( 0xDFB9 )
#define  X_ADCL      XREG( 0xDFBA )
#define  X_ADCH      XREG( 0xDFBB )
#define  X_RNDL      XREG( 0xDFBC )
#define  X_RNDH      XREG( 0xDFBD )
#define  X_SLEEP     XREG( 0xDFBE )
#define  _X_SFRBF    XREG( 0xDFBF )

#define  _NA_IRCON   XREG( 0xDFC0 )
#define  X_U0DBUF    XREG( 0xDFC1 )
#define  X_U0BAUD    XREG( 0xDFC2 )
#define  _X_SFRC3    XREG( 0xDFC3 )
#define  X_U0UCR     XREG( 0xDFC4 )
#define  X_U0GCR     XREG( 0xDFC5 )
#define  X_CLKCON    XREG( 0xDFC6 )
#define  X_MEMCTR    XREG( 0xDFC7 )

#define  _X_SFRC8N   XREG( 0xDFC8 )
#define  X_WDCTL     XREG( 0xDFC9 )
#define  X_T3CNT     XREG( 0xDFCA )
#define  X_T3CTL     XREG( 0xDFCB )
#define  X_T3CCTL0   XREG( 0xDFCC )
#define  X_T3CC0     XREG( 0xDFCD )
#define  X_T3CCTL1   XREG( 0xDFCE )
#define  X_T3CC1     XREG( 0xDFCF )

#define  _NA_PSW     XREG( 0xDFD0 )
#define  X_DMAIRQ    XREG( 0xDFD1 )
#define  X_DMA1CFGL  XREG( 0xDFD2 )
#define  X_DMA1CFGH  XREG( 0xDFD3 )
#define  X_DMA0CFGL  XREG( 0xDFD4 )
#define  X_DMA0CFGH  XREG( 0xDFD5 )
#define  X_DMAARM    XREG( 0xDFD6 )
#define  X_DMAREQ    XREG( 0xDFD7 )

#define  X_TIMIF     XREG( 0xDFD8 )
#define  X_RFD       XREG( 0xDFD9 )
#define  X_T1CC0L    XREG( 0xDFDA )
#define  X_T1CC0H    XREG( 0xDFDB )
#define  X_T1CC1L    XREG( 0xDFDC )
#define  X_T1CC1H    XREG( 0xDFDD )
#define  X_T1CC2L    XREG( 0xDFDE )
#define  X_T1CC2H    XREG( 0xDFDF )

#define  _NA_ACC     XREG( 0xDFE0 )
#define  X_RFST      XREG( 0xDFE1 )
#define  X_T1CNTL    XREG( 0xDFE2 )
#define  X_T1CNTH    XREG( 0xDFE3 )
#define  X_T1CTL     XREG( 0xDFE4 )
#define  X_T1CCTL0   XREG( 0xDFE5 )
#define  X_T1CCTL1   XREG( 0xDFE6 )
#define  X_T1CCTL2   XREG( 0xDFE7 )

#define  _NA_IRCON2  XREG( 0xDFE8 )
#define  X_RFIF      XREG( 0xDFE9 )
#define  X_T4CNT     XREG( 0xDFEA )
#define  X_T4CTL     XREG( 0xDFEB )
#define  X_T4CCTL0   XREG( 0xDFEC )
#define  X_T4CC0     XREG( 0xDFED )
#define  X_T4CCTL1   XREG( 0xDFEE )
#define  X_T4CC1     XREG( 0xDFEF )

#define  _NA_B       XREG( 0xDFF0 )
#define  X_PERCFG    XREG( 0xDFF1 )
#define  X_ADCCFG    XREG( 0xDFF2 )
#define  X_P0SEL     XREG( 0xDFF3 )
#define  X_P1SEL     XREG( 0xDFF4 )
#define  X_P2SEL     XREG( 0xDFF5 )
#define  X_P1INP     XREG( 0xDFF6 )
#define  X_P2INP     XREG( 0xDFF7 )

#define  X_U1CSR     XREG( 0xDFF8 )
#define  X_U1DBUF    XREG( 0xDFF9 )
#define  X_U1BAUD    XREG( 0xDFFA )
#define  X_U1UCR     XREG( 0xDFFB )
#define  X_U1GCR     XREG( 0xDFFC )
#define  X_P0DIR     XREG( 0xDFFD )
#define  X_P1DIR     XREG( 0xDFFE )
#define  X_P2DIR     XREG( 0xDFFF )

/**************************************************************************************************
 */
#endif
