/*-----------------------------------------------------------------------------
CC2543.H

Header file for Texas Instruments CC2543, CC2544, CC2545

Copyright (c) 2014 ARM Germany GmbH.
All rights reserved.
-------------------------------------------------------------------------------*/
#ifndef __CC2543_H__
#define __CC2543_H__


/* Module ADC                                            */
sfr ADCCON1 = 0xB4;   /* ADC ADC control 1 (not available on the CC2544)       */
sfr ADCCON2 = 0xB5;   /* ADC ADC control 2 (not available on the CC2544)       */
sfr ADCCON3 = 0xB6;   /* ADC ADC control 3 (not available on the CC2544)       */
sfr ADCL    = 0xBA;   /* ADC ADC data low (not available on the CC2544)        */
sfr ADCH    = 0xBB;   /* ADC ADC data high (not available on the CC2544)       */
sfr RNDL    = 0xBC;   /* ADC Random number generator data low                  */
sfr RNDH    = 0xBD;   /* ADC Random number generator data high                 */

                      /* Module AES                                            */
sfr ENCDI   = 0xB1;   /* AES Encryption/decryption input data                  */
sfr ENCDO   = 0xB2;   /* AES Encryption/decryption output data                 */
sfr ENCCS   = 0xB3;   /* AES Encryption/decryption control and status          */

                      /* Module CPU                                            */
sfr P0      = 0x80;   /* CPU Port 0. Readable from XDATA (0x7080)              */
sfr SP      = 0x81;   /* CPU Stack pointer                                     */
sfr DPL0    = 0x82;   /* CPU Data pointer 0 low byte                           */
sfr DPH0    = 0x83;   /* CPU Data pointer 0 high byte                          */
sfr DPL1    = 0x84;   /* CPU Data pointer 1 low byte                           */
sfr DPH1    = 0x85;   /* CPU Data pointer 0 high byte                          */
sfr PCON    = 0x87;   /* CPU Power mode control                                */
sfr TCON    = 0x88;   /* CPU Interrupt flags                                   */
sfr P1      = 0x90;   /* CPU Port 1. Readable from XDATA (0x7090)              */
sfr DPS     = 0x92;   /* CPU Data pointer select                               */
sfr S0CON   = 0x98;   /* CPU Interrupt flags 2                                 */
sfr IEN2    = 0x9A;   /* CPU Interrupt enable 2                                */
sfr S1CON   = 0x9B;   /* CPU Interrupt flags 3                                 */
sfr P2      = 0xA0;   /* CPU Port 2. Readable from XDATA (0x70A0) (not available on sfr the CC2544) */
sfr IEN0    = 0xA8;   /* CPU Interrupt enable 0                                */
sfr IP0     = 0xA9;   /* CPU Interrupt priority 0                              */
sfr IEN1    = 0xB8;   /* CPU Interrupt enable 1                                */
sfr IP1     = 0xB9;   /* CPU Interrupt priority 1                              */
sfr IRCON   = 0xC0;   /* CPU Interrupt flags 4                                 */
sfr PSW     = 0xD0;   /* CPU Program status Word                               */
sfr ACC     = 0xE0;   /* CPU Accumulator                                       */
sfr IRCON2  = 0xE8;   /* CPU Interrupt flags 5                                 */
sfr B       = 0xF0;   /* CPU B register                                        */
sfr P3      = 0xB0;   /* CPU Port 3. Readable from XDATA (0x70B0) (only available on the CC2545) */

                      /* Module DMA                                            */
sfr DMAIRQ    = 0xD1; /* DMA DMA interrupt flag                                */
sfr DMA1CFGL  = 0xD2; /* DMA DMA channel 1 configuration address low           */
sfr DMA1CFGH  = 0xD3; /* DMA DMA channel 1 configuration address high          */
sfr DMA0CFGL  = 0xD4; /* DMA DMA channel 0 configuration address low           */
sfr DMA0CFGH  = 0xD5; /* DMA DMA channel 0 configuration address high          */
sfr DMAARM    = 0xD6; /* DMA DMA channel armed                                 */
sfr DMAREQ    = 0xD7; /* DMA DMA channel start request and status              */

                      /* Memory                                                */
sfr MPAGE     = 0x93; /* MEMORY Memory page select                             */
sfr MEMCTR    = 0xC7; /* MEMORY Memory system control                          */

                      /* Module RF                                             */
sfr RFIRQF1   = 0x91; /* RF RF interrupt flags MSB                             */
sfr RFIRQF0   = 0xE9; /* RF RF interrupt flags LSB                             */
sfr RFD       = 0xD9; /* RF RF data                                            */
sfr RFST      = 0xE1; /* RF RF command strobe                                  */
sfr RFERRF    = 0xBF; /* RF RF error interrupt flags                           */

                      /* Module ST                                             */
sfr ST0       = 0x95; /* ST Sleep Timer 0                                      */
sfr ST1       = 0x96; /* ST Sleep Timer 1                                      */
sfr ST2       = 0x97; /* ST Sleep Timer 2                                      */
sfr STLOAD    = 0xAD; /* ST Sleep-timer load status                            */

                      /* Module PMC                                            */
sfr SLEEPCMD  = 0xBE; /* PMC Sleep-mode control command                        */
sfr SLEEPSTA  = 0x9D; /* PMC Sleep-mode control status                         */
sfr CLKCONCMD = 0xC6; /* PMC Clock control command                             */
sfr CLKCONSTA = 0x9E; /* PMC Clock control status                              */

                      /* Module Timer 1                                        */
sfr T1CC0L    = 0xDA; /* Timer 1 Timer 1 channel 0 capture/compare value low   */
sfr T1CC0H    = 0xDB; /* Timer 1 Timer 1 channel 0 capture/compare value high  */
sfr T1CC1L    = 0xDC; /* Timer 1 Timer 1 channel 1 capture/compare value low   */
sfr T1CC1H    = 0xDD; /* Timer 1 Timer 1 channel 1 capture/compare value high  */
sfr T1CC2L    = 0xDE; /* Timer 1 Timer 1 channel 2 capture/compare value low   */
sfr T1CC2H    = 0xDF; /* Timer 1 Timer 1 channel 2 capture/compare value high  */
sfr T1CNTL    = 0xE2; /* Timer 1 Timer 1 counter low                           */
sfr T1CNTH    = 0xE3; /* Timer 1 Timer 1 counter high                          */
sfr T1CTL     = 0xE4; /* Timer 1 Timer 1 control and status                    */
sfr T1CCTL0   = 0xE5; /* Timer 1 Timer 1 channel 0 capture/compare control     */
sfr T1CCTL1   = 0xE6; /* Timer 1 Timer 1 channel 1 capture/compare control     */
sfr T1CCTL2   = 0xE7; /* Timer 1 Timer 1 channel 2 capture/compare control     */
sfr T1STAT    = 0xAF; /* Timer 1 Timer 1 statu                                 */

                      /* Module Timer 2                                        */
sfr T2CTRL    = 0x94; /* Timer 2 Timer 2 control                               */
sfr T2EVTCFG  = 0x9C; /* Timer 2 Timer 2 event configuration                   */
sfr T2IRQF    = 0xA1; /* Timer 2 Timer 2 interrupt flags                       */
sfr T2M0      = 0xA2; /* Timer 2 Timer 2 multiplexed register 0                */
sfr T2M1      = 0xA3; /* Timer 2 Timer 2 multiplexed register 1                */
sfr T2MOVF0   = 0xA4; /* Timer 2 Timer 2 multiplexed overflow register 0       */
sfr T2MOVF1   = 0xA5; /* Timer 2 Timer 2 multiplexed overflow register 1       */
sfr T2MOVF2   = 0xA6; /* Timer 2 Timer 2 multiplexed overflow register 2       */
sfr T2IRQM    = 0xA7; /* Timer 2 Timer 2 interrupt mask                        */
sfr T2MSEL    = 0xC3; /* Timer 2 Timer 2 multiplex select                      */

                      /* Module Timer 3                                        */
sfr T3CNT     = 0xCA; /* Timer 3 Timer 3 counter                               */
sfr T3CTL     = 0xCB; /* Timer 3 Timer 3 control                               */
sfr T3CCTL0   = 0xCC; /* Timer 3 Timer 3 channel 0 compare control             */
sfr T3CC0     = 0xCD; /* Timer 3 Timer 3 channel 0 compare value               */
sfr T3CCTL1   = 0xCE; /* Timer 3 Timer 3 channel 1 compare control             */
sfr T3CC1     = 0xCF; /* Timer 3 Timer 3 channel 1 compare value               */

                      /* Module Timer 4                                        */
sfr T4CNT     = 0xEA; /* Timer 4 Timer 4 counter                               */
sfr T4CTL     = 0xEB; /* Timer 4 Timer 4 control                               */
sfr T4CCTL0   = 0xEC; /* Timer 4 Timer 4 channel 0 compare control             */
sfr T4CC0     = 0xED; /* Timer 4 Timer 4 channel 0 compare value               */
sfr T4CCTL1   = 0xEE; /* Timer 4 Timer 4 channel 1 compare control             */
sfr T4CC1     = 0xEF; /* Timer 4 Timer 4 channel 1 compare value               */

                      /* Module Timer interrupt                                */
sfr TIMIF     = 0xD8; /* TMINT Timers 1/3/4 joint interrupt mask/flags         */

                      /* Module USART                                          */
sfr U0CSR     = 0x86; /* USART 0 USART 0 control and status                    */
sfr U0DBUF    = 0xC1; /* USART 0 USART 0 receive/transmit data buffer          */
sfr U0BAUD    = 0xC2; /* USART 0 USART 0 baud-rate control                     */
sfr U0UCR     = 0xC4; /* USART 0 USART 0 UART control                          */
sfr U0GCR     = 0xC5; /* USART 0 USART 0 generic control                       */

                      /* Module WDT                                            */
sfr WDCTL     = 0xC9; /* WDT Watchdog Timer control                            */

                      /* I/O Registers                                         */
sfr PERCFG    = 0xF1; /* Peripheral Control                                    */
sfr APCFG     = 0xF2; /* Analog Peripheral I/O Configuration                   */
sfr P0SEL     = 0xF3; /* P0 Function Select                                    */
sfr P1SEL     = 0xF4; /* P1 Function Select                                    */
sfr P2SEL     = 0xF5; /* P2 Function Select                                    */
sfr PPRI      = 0xFB; /* Peripheral Priority Setup                             */
sfr P0DIR     = 0xFD; /* Port 0 Direction Control                              */
sfr P1DIR     = 0xFE; /* Port 1 Direction Control                              */
sfr P2DIR     = 0xFF; /* Port 2 Direction Control                              */
sfr P0INP     = 0x8F; /* Port 0 Input Mode                                     */
sfr P1INP     = 0xF6; /* Port 1 Input Mode                                     */
sfr P2INP     = 0xF7; /* Port 2 Input Mode                                     */
sfr PPULL     = 0xF8; /* Port Pullup/Pulldown Control                          */
sfr P0IFG     = 0x89; /* Port 0 Interrupt Status Flag                          */
sfr P1IFG     = 0x8A; /* Port 1 Interrupt Status Flag                          */
sfr P2IFG     = 0x8B; /* Port 2 Interrupt Status Flag                          */
sfr PICTL     = 0x8C; /* Port Interrupt Control                                */
sfr P0IEN     = 0xAB; /* Port 0 Interrupt Mask                                 */
sfr P1IEN     = 0x8D; /* Port 1 Interrupt Mask                                 */
sfr P2IEN     = 0xAC; /* Port 2 Interrupt Mask                                 */
sfr PMUX      = 0xAE; /* Power-Down Signal Mux                                 */

/*        Bit registers                                                        */
/* P0 Port 0 (0x80)                                                            */
sbit  P07      = P0^7;   /*                                                    */
sbit  P06      = P0^6;   /*                                                    */
sbit  P05      = P0^5;   /*                                                    */
sbit  P04      = P0^4;   /*                                                    */
sbit  P03      = P0^3;   /*                                                    */
sbit  P02      = P0^2;   /*                                                    */
sbit  P01      = P0^1;   /*                                                    */
sbit  P00      = P0^0;   /*                                                    */

/* P1 Port 1 (0x90)                                                            */
                         /* Bit 7 Reserved                                     */
                         /* Bit 6 Reserved                                     */
                         /* Bit 5 Reserved                                     */
sbit  P14      = P1^4;   /*                                                    */
sbit  P13      = P1^3;   /*                                                    */
sbit  P12      = P1^2;   /*                                                    */
sbit  P11      = P1^1;   /*                                                    */
sbit  P10      = P1^0;   /*                                                    */

/* P2 Port 2 (0xA0)                                                            */
                         /* Bit 7 Reserved                                     */
                         /* Bit 6 Reserved                                     */
                         /* Bit 5 Reserved                                     */
                         /* Bit 4 Reserved                                     */
                         /* Bit 3 Reserved                                     */
sbit  P22      = P2^2;   /*                                                    */
sbit  P21      = P2^1;   /*                                                    */
sbit  P20      = P2^0;   /*                                                    */

/* PSW Program Status Word (0xD0)                                              */
sbit  CY      = PSW^7;  /* Carry flag                                          */
sbit  AC      = PSW^6;  /* Auxiliary                                           */
sbit  F0      = PSW^5;  /* User defined                                        */
sbit  RS1     = PSW^4;  /* Register bank select bit 1                          */
sbit  RS0     = PSW^3;  /* Register bank select bit 0                          */
sbit  OV      = PSW^2;  /* Overflow                                            */
sbit  F1      = PSW^1;  /* User defined                                        */
sbit  P       = PSW^0;  /* Parity flag                                         */

/* IEN0 Interrupt Enable 0  (0xA8)                                             */
sbit  EA      = IEN0^7; /* Disables all interrupts                             */
                        /* Bit 6 Reserved                                      */
sbit  STIE    = IEN0^5; /* Sleep Timer interrupt enable                        */
sbit  ENCIE   = IEN0^4; /* AES encryption/decryption interrupt enable          */
                        /* Bit 3 Reserved                                      */
sbit  URX0IE  = IEN0^2; /* USART0 RX interrupt enable                          */
sbit  ADCIE   = IEN0^1; /* ADC interrupt enable (not available on the CC2544)  */
sbit  RFERRIE = IEN0^0; /* RF TXFIFO/RXFIFO interrupt enable                   */

/* IEN1 Interrupt Enable 0  (0xA8)                                             */
                        /* Bit 7 Reserved                                      */
                        /* Bit 6 Reserved                                      */
sbit   P0IE   = IEN1^5; /* Port 0 interrupt enable                             */
sbit   T4IE   = IEN1^4; /* Timer 4 interrupt enable                            */
sbit   T3IE   = IEN1^3; /* Timer 3 interrupt enable                            */
sbit   T2IE   = IEN1^2; /* Timer 2 interrupt enable                            */
sbit   T1IE   = IEN1^1; /* Timer 1 interrupt enable                            */
sbit   DMAIE  = IEN1^0; /* DMA transfer interrupt enable                       */

/* TCON Interrupt Flags (0x88)                                                 */
                         /* Bit 7 Reserved                                     */
                         /* Bit 6 Reserved                                     */
sbit   ADCIF   = TCON^5; /* ADC interrupt flag                                 */
                         /* Bit 4 Reserved                                     */
sbit   URX0IF  = TCON^3; /* USART RX interrupt flag                            */
sbit   IT1     = TCON^2; /* Reserved. Setting a zero enables low-level interrupt detection, which is almost the case. */
sbit   RFERRIF = TCON^1; /* RF TXFIFO/RXFIFO interrupt flag.                   */
sbit   IT0     = TCON^0; /* Reserved. Setting a zero enables low-level interrupt detection, which is almost the case. */

/* SCON Interrupt Flags 2(0x98)                                                */
                          /* Bit 7 Reserved                                    */
                          /* Bit 6 Reserved                                    */
                          /* Bit 5 Reserved                                    */
                          /* Bit 4 Reserved                                    */
                          /* Bit 3 Reserved                                    */
                          /* Bit 2 Reserved                                    */
sbit   ENCIF_1 = S0CON^1; /* AES interrupt flag 1                              */
sbit   ENCIF_0 = S0CON^0; /* AES interrupt flag 0                              */

/* IRCON Interrupt Flags 4(0xC0)                                               */
sbit  STIF    = IRCON^7; /* Sleep Timer interrupt flag                         */
                         /* Bit 6 Reserved                                     */
sbit  P0IF    = IRCON^5; /* Port 0 interrupt flag                              */
sbit  T4IF    = IRCON^4; /* Timer 4 interrupt flag.                            */
sbit  T3IF    = IRCON^3; /* Timer 3 interrupt flag.                            */
sbit  T2IF    = IRCON^2; /* Timer 2 interrupt flag.                            */
sbit  T1IF    = IRCON^1; /* Timer 1 interrupt flag.                            */
sbit  DMAIF   = IRCON^0; /* DMA-complete interrupt flag                        */

/* IRCON2 Interrupt Flags 5(0xE8)                                              */
                          /* Bit 7 Reserved                                    */
                          /* Bit 6 Reserved                                    */
                          /* Bit 5 Reserved                                    */
sbit  WDTIF   = IRCON2^4; /* Watchdog Timer interrupt flag                     */
sbit  P1IF    = IRCON2^3; /* Port 1 interrupt flag                             */
sbit  I2CIF   = IRCON2^2; /* I2C interrupt flag (N/A CC2544)                   */
sbit  UTX0IF  = IRCON2^1; /* USART 0 TX interrupt flag                         */
sbit  P2IF    = IRCON2^0; /* Port 2 interrupt flag                             */

/* PPULL Port Pullup/Pulldown Control (0xF8)                                   */
                         /* Bit 7 Reserved                                     */
                         /* Bit 6 Reserved                                     */
                         /* Bit 5 Reserved                                     */
sbit  PDUP2L  = PPULL^4; /* P2[2:0] pull direction                             */
sbit  PDUP1H  = PPULL^3; /* P1[6:4] pull direction                             */
sbit  PDUP1L  = PPULL^2; /* P1[3] pull direction                               */
sbit  PDUP0H  = PPULL^1; /* P0[7:4] pull direction                             */
sbit  PDUP0L  = PPULL^0; /* P0[3:0] pull direction                             */

/* TIMIF Timer 1/3/4 Interrupt Mask/Flag (0xD8)                                */
                          /* Bit 7 Reserved                                    */
sbit  T1OVFIM = TIMIF^6;  /* Timer 1 overflow interrupt mask                   */
sbit  T4CH1IF = TIMIF^5;  /* Timer 4 channel 1 interrupt flag                  */
sbit  T4CH0IF = TIMIF^4;  /* Timer 4 channel 0 interrupt flag                  */
sbit  T4OVFIF = TIMIF^3;  /* Timer 4 overflow interrupt flag                   */
sbit  T3CH1IF = TIMIF^2;  /* Timer 3 channel 1 interrupt flag                  */
sbit  T3CH0IF = TIMIF^1;  /* Timer 3 channel 0 interrupt flag                  */
sbit  T3OVFIF = TIMIF^0;  /* Timer 3 overflow interrupt flag                   */

/*-----------------------------------------------------------------------------*/
/*        RAM Based registers                                                  */
/*-----------------------------------------------------------------------------*/

#define PRF_CHAN           ((unsigned char volatile xdata *) 0)[0x6000]   /*  Frequency to use                             */
#define PRF_TASK_CONF      ((unsigned char volatile xdata *) 0)[0x6001]   /*  Configuration of task control                */
#define PRF_FIFO_CONF      ((unsigned char volatile xdata *) 0)[0x6002]   /*  Configure FIFO use                           */
#define PRF_PKT_CONF       ((unsigned char volatile xdata *) 0)[0x6003]   /*  Packet configuration                         */
#define PRF_CRC_LEN        ((unsigned char volatile xdata *) 0)[0x6004]   /*  Number of CRC bytes.                         */
#define PRF_RSSI_LIMIT     ((unsigned char volatile xdata *) 0)[0x6005]   /*  For transmit on clear channel.               */
#define PRF_RSSI_COUNTH    ((unsigned char volatile xdata *) 0)[0x6006]   /*  RSSI count high byte.                        */
#define PRF_RSSI_COUNTL    ((unsigned char volatile xdata *) 0)[0x6007]   /*  RSSI count low byte.                         */
#define PRF_CRC_INIT1      ((unsigned char volatile xdata *) 0)[0x6008]   /*  Initialization value for CRC byte 1 MSB      */
#define PRF_CRC_INIT2      ((unsigned char volatile xdata *) 0)[0x6009]   /*  Initialization value for CRC byte 2          */
#define PRF_CRC_INIT3      ((unsigned char volatile xdata *) 0)[0x600A]   /*  Initialization value for CRC byte 3          */
#define PRF_CRC_INIT4      ((unsigned char volatile xdata *) 0)[0x600B]   /*  Initialization value for CRC byte 4 LSB      */

#define PRF_W_INIT         ((unsigned char volatile xdata *) 0)[0x600C]   /*  */
#define PRF_RETRANS_CNT    ((unsigned char volatile xdata *) 0)[0x600D]   /*  Maximum number of retransmissions            */
#define PRF_TX_DELAYH      ((unsigned char volatile xdata *) 0)[0x600E]   /*  Delay between two tranmissions high byte     */
#define PRF_TX_DELAYL      ((unsigned char volatile xdata *) 0)[0x600F]   /*  Delay between two tranmissions low byte      */

#define PRF_RETRANS_DELAYH ((unsigned char volatile xdata *) 0)[0x6010]   /*  Delay between retranmissions high byte       */
#define PRF_RETRANS_DELAYL ((unsigned char volatile xdata *) 0)[0x6011]   /*  Delay between retranmissions low byte        */

#define PRF_SEARCH_TIMEH   ((unsigned char volatile xdata *) 0)[0x6012]   /*  Search time high byte                        */
#define PRF_SEARCH_TIMEL   ((unsigned char volatile xdata *) 0)[0x6013]   /*  Search time low byte                         */

#define PRF_RX_TX_TIMEH    ((unsigned char volatile xdata *) 0)[0x6014]   /*  */
#define PRF_RX_TX_TIMEL    ((unsigned char volatile xdata *) 0)[0x6015]   /*  */

#define PRF_TX_RX_TIMEH    ((unsigned char volatile xdata *) 0)[0x6016]   /*  */
#define PRF_TX_RX_TIMEL    ((unsigned char volatile xdata *) 0)[0x6017]   /*  */

#define PRF_ADDR_ENTRY01   ((unsigned char volatile xdata *) 0)[0x6018]   /*  */
#define PRF_ADDR_ENTRY02   ((unsigned char volatile xdata *) 0)[0x6019]   /*  */
#define PRF_ADDR_ENTRY03   ((unsigned char volatile xdata *) 0)[0x601A]   /*  */
#define PRF_ADDR_ENTRY04   ((unsigned char volatile xdata *) 0)[0x601B]   /*  */
#define PRF_ADDR_ENTRY05   ((unsigned char volatile xdata *) 0)[0x601C]   /*  */
#define PRF_ADDR_ENTRY06   ((unsigned char volatile xdata *) 0)[0x601D]   /*  */
#define PRF_ADDR_ENTRY07   ((unsigned char volatile xdata *) 0)[0x601E]   /*  */
#define PRF_ADDR_ENTRY08   ((unsigned char volatile xdata *) 0)[0x601F]   /*  */
#define PRF_ADDR_ENTRY09   ((unsigned char volatile xdata *) 0)[0x6020]   /*  */
#define PRF_ADDR_ENTRY0A   ((unsigned char volatile xdata *) 0)[0x6021]   /*  */
#define PRF_ADDR_ENTRY0B   ((unsigned char volatile xdata *) 0)[0x6022]   /*  */
#define PRF_ADDR_ENTRY0C   ((unsigned char volatile xdata *) 0)[0x6023]   /*  */

#define PRF_ADDR_ENTRY11   ((unsigned char volatile xdata *) 0)[0x6024]   /*  */
#define PRF_ADDR_ENTRY12   ((unsigned char volatile xdata *) 0)[0x6025]   /*  */
#define PRF_ADDR_ENTRY13   ((unsigned char volatile xdata *) 0)[0x6026]   /*  */
#define PRF_ADDR_ENTRY14   ((unsigned char volatile xdata *) 0)[0x6027]   /*  */
#define PRF_ADDR_ENTRY15   ((unsigned char volatile xdata *) 0)[0x6028]   /*  */
#define PRF_ADDR_ENTRY16   ((unsigned char volatile xdata *) 0)[0x6029]   /*  */
#define PRF_ADDR_ENTRY17   ((unsigned char volatile xdata *) 0)[0x602A]   /*  */
#define PRF_ADDR_ENTRY18   ((unsigned char volatile xdata *) 0)[0x602B]   /*  */
#define PRF_ADDR_ENTRY19   ((unsigned char volatile xdata *) 0)[0x602C]   /*  */
#define PRF_ADDR_ENTRY1A   ((unsigned char volatile xdata *) 0)[0x602D]   /*  */
#define PRF_ADDR_ENTRY1B   ((unsigned char volatile xdata *) 0)[0x602E]   /*  */
#define PRF_ADDR_ENTRY1C   ((unsigned char volatile xdata *) 0)[0x602F]   /*  */

#define PRF_ADDR_ENTRY21   ((unsigned char volatile xdata *) 0)[0x6030]   /*  */
#define PRF_ADDR_ENTRY22   ((unsigned char volatile xdata *) 0)[0x6031]   /*  */
#define PRF_ADDR_ENTRY23   ((unsigned char volatile xdata *) 0)[0x6032]   /*  */
#define PRF_ADDR_ENTRY24   ((unsigned char volatile xdata *) 0)[0x6033]   /*  */
#define PRF_ADDR_ENTRY25   ((unsigned char volatile xdata *) 0)[0x6034]   /*  */
#define PRF_ADDR_ENTRY26   ((unsigned char volatile xdata *) 0)[0x6035]   /*  */
#define PRF_ADDR_ENTRY27   ((unsigned char volatile xdata *) 0)[0x6036]   /*  */
#define PRF_ADDR_ENTRY28   ((unsigned char volatile xdata *) 0)[0x6037]   /*  */
#define PRF_ADDR_ENTRY29   ((unsigned char volatile xdata *) 0)[0x6038]   /*  */
#define PRF_ADDR_ENTRY2A   ((unsigned char volatile xdata *) 0)[0x6039]   /*  */
#define PRF_ADDR_ENTRY2B   ((unsigned char volatile xdata *) 0)[0x603A]   /*  */
#define PRF_ADDR_ENTRY2C   ((unsigned char volatile xdata *) 0)[0x603B]   /*  */

#define PRF_ADDR_ENTRY31   ((unsigned char volatile xdata *) 0)[0x603C]   /*  */
#define PRF_ADDR_ENTRY32   ((unsigned char volatile xdata *) 0)[0x603D]   /*  */
#define PRF_ADDR_ENTRY33   ((unsigned char volatile xdata *) 0)[0x603E]   /*  */
#define PRF_ADDR_ENTRY34   ((unsigned char volatile xdata *) 0)[0x603F]   /*  */
#define PRF_ADDR_ENTRY35   ((unsigned char volatile xdata *) 0)[0x6040]   /*  */
#define PRF_ADDR_ENTRY36   ((unsigned char volatile xdata *) 0)[0x6041]   /*  */
#define PRF_ADDR_ENTRY37   ((unsigned char volatile xdata *) 0)[0x6042]   /*  */
#define PRF_ADDR_ENTRY38   ((unsigned char volatile xdata *) 0)[0x6043]   /*  */
#define PRF_ADDR_ENTRY39   ((unsigned char volatile xdata *) 0)[0x6044]   /*  */
#define PRF_ADDR_ENTRY3A   ((unsigned char volatile xdata *) 0)[0x6045]   /*  */
#define PRF_ADDR_ENTRY3B   ((unsigned char volatile xdata *) 0)[0x6046]   /*  */
#define PRF_ADDR_ENTRY3C   ((unsigned char volatile xdata *) 0)[0x6047]   /*  */

#define PRF_ADDR_ENTRY41   ((unsigned char volatile xdata *) 0)[0x6048]   /*  */
#define PRF_ADDR_ENTRY42   ((unsigned char volatile xdata *) 0)[0x6049]   /*  */
#define PRF_ADDR_ENTRY43   ((unsigned char volatile xdata *) 0)[0x604A]   /*  */
#define PRF_ADDR_ENTRY44   ((unsigned char volatile xdata *) 0)[0x604B]   /*  */
#define PRF_ADDR_ENTRY45   ((unsigned char volatile xdata *) 0)[0x604C]   /*  */
#define PRF_ADDR_ENTRY46   ((unsigned char volatile xdata *) 0)[0x604D]   /*  */
#define PRF_ADDR_ENTRY47   ((unsigned char volatile xdata *) 0)[0x604E]   /*  */
#define PRF_ADDR_ENTRY48   ((unsigned char volatile xdata *) 0)[0x604F]   /*  */
#define PRF_ADDR_ENTRY49   ((unsigned char volatile xdata *) 0)[0x6050]   /*  */
#define PRF_ADDR_ENTRY4A   ((unsigned char volatile xdata *) 0)[0x6051]   /*  */
#define PRF_ADDR_ENTRY4B   ((unsigned char volatile xdata *) 0)[0x6052]   /*  */
#define PRF_ADDR_ENTRY4C   ((unsigned char volatile xdata *) 0)[0x6053]   /*  */

#define PRF_ADDR_ENTRY51   ((unsigned char volatile xdata *) 0)[0x6054]   /*  */
#define PRF_ADDR_ENTRY52   ((unsigned char volatile xdata *) 0)[0x6055]   /*  */
#define PRF_ADDR_ENTRY53   ((unsigned char volatile xdata *) 0)[0x6056]   /*  */
#define PRF_ADDR_ENTRY54   ((unsigned char volatile xdata *) 0)[0x6057]   /*  */
#define PRF_ADDR_ENTRY55   ((unsigned char volatile xdata *) 0)[0x6058]   /*  */
#define PRF_ADDR_ENTRY56   ((unsigned char volatile xdata *) 0)[0x6059]   /*  */
#define PRF_ADDR_ENTRY57   ((unsigned char volatile xdata *) 0)[0x605A]   /*  */
#define PRF_ADDR_ENTRY58   ((unsigned char volatile xdata *) 0)[0x605B]   /*  */
#define PRF_ADDR_ENTRY59   ((unsigned char volatile xdata *) 0)[0x605C]   /*  */
#define PRF_ADDR_ENTRY5A   ((unsigned char volatile xdata *) 0)[0x605D]   /*  */
#define PRF_ADDR_ENTRY5B   ((unsigned char volatile xdata *) 0)[0x605E]   /*  */
#define PRF_ADDR_ENTRY5C   ((unsigned char volatile xdata *) 0)[0x605F]   /*  */

#define PRF_ADDR_ENTRY61   ((unsigned char volatile xdata *) 0)[0x6060]   /*  */
#define PRF_ADDR_ENTRY62   ((unsigned char volatile xdata *) 0)[0x6061]   /*  */
#define PRF_ADDR_ENTRY63   ((unsigned char volatile xdata *) 0)[0x6062]   /*  */
#define PRF_ADDR_ENTRY64   ((unsigned char volatile xdata *) 0)[0x6063]   /*  */
#define PRF_ADDR_ENTRY65   ((unsigned char volatile xdata *) 0)[0x6064]   /*  */
#define PRF_ADDR_ENTRY66   ((unsigned char volatile xdata *) 0)[0x6065]   /*  */
#define PRF_ADDR_ENTRY67   ((unsigned char volatile xdata *) 0)[0x6066]   /*  */
#define PRF_ADDR_ENTRY68   ((unsigned char volatile xdata *) 0)[0x6067]   /*  */
#define PRF_ADDR_ENTRY69   ((unsigned char volatile xdata *) 0)[0x6068]   /*  */
#define PRF_ADDR_ENTRY6A   ((unsigned char volatile xdata *) 0)[0x6069]   /*  */
#define PRF_ADDR_ENTRY6B   ((unsigned char volatile xdata *) 0)[0x606A]   /*  */
#define PRF_ADDR_ENTRY6C   ((unsigned char volatile xdata *) 0)[0x606B]   /*  */

#define PRF_ADDR_ENTRY71   ((unsigned char volatile xdata *) 0)[0x606C]   /*  */
#define PRF_ADDR_ENTRY72   ((unsigned char volatile xdata *) 0)[0x606D]   /*  */
#define PRF_ADDR_ENTRY73   ((unsigned char volatile xdata *) 0)[0x606E]   /*  */
#define PRF_ADDR_ENTRY74   ((unsigned char volatile xdata *) 0)[0x606F]   /*  */
#define PRF_ADDR_ENTRY75   ((unsigned char volatile xdata *) 0)[0x6070]   /*  */
#define PRF_ADDR_ENTRY76   ((unsigned char volatile xdata *) 0)[0x6071]   /*  */
#define PRF_ADDR_ENTRY77   ((unsigned char volatile xdata *) 0)[0x6072]   /*  */
#define PRF_ADDR_ENTRY78   ((unsigned char volatile xdata *) 0)[0x6073]   /*  */
#define PRF_ADDR_ENTRY79   ((unsigned char volatile xdata *) 0)[0x6074]   /*  */
#define PRF_ADDR_ENTRY7A   ((unsigned char volatile xdata *) 0)[0x6075]   /*  */
#define PRF_ADDR_ENTRY7B   ((unsigned char volatile xdata *) 0)[0x6076]   /*  */
#define PRF_ADDR_ENTRY7C   ((unsigned char volatile xdata *) 0)[0x6077]   /*  */

#define PRF_N_TX           ((unsigned char volatile xdata *) 0)[0x6078]   /*  Total number of packets transmitted          */
#define PRF_LAST_RSSI      ((unsigned char volatile xdata *) 0)[0x6079]   /*  RSSI of last received packet                 */

#define PRF_LAST_DCOFF1    ((unsigned char volatile xdata *) 0)[0x607A]   /*  DC offset of last received packet byte 1 MSB */
#define PRF_LAST_DCOFF2    ((unsigned char volatile xdata *) 0)[0x607B]   /*  DC offset of last received packet byte 2     */
#define PRF_LAST_DCOFF3    ((unsigned char volatile xdata *) 0)[0x607C]   /*  DC offset of last received packet byte 3     */
#define PRF_LAST_DCOFF4    ((unsigned char volatile xdata *) 0)[0x607D]   /*  DC offset of last received packet byte 4 LSB */

#define PRF_RADIO_CONF     ((unsigned char volatile xdata *) 0)[0x607E]   /*  Configure radio hardware                     */

#define OBSSEL0            ((unsigned char volatile xdata *) 0)[0x6243]   /*  Observation output control register 0        */
#define OBSSEL1            ((unsigned char volatile xdata *) 0)[0x6244]   /*  Observation output control register 1        */
#define OBSSEL2            ((unsigned char volatile xdata *) 0)[0x6245]   /*  Observation output control register 2        */
#define OBSSEL3            ((unsigned char volatile xdata *) 0)[0x6246]   /*  Observation output control register 3        */
#define OBSSEL4            ((unsigned char volatile xdata *) 0)[0x6247]   /*  Observation output control register 4        */
#define OBSSEL5            ((unsigned char volatile xdata *) 0)[0x6248]   /*  Observation output control register 5        */

/*             Variables in RAM Page 5                                  */
#define PRFX_LAST_FREQEST        ((unsigned char volatile xdata *) 0)[0x6006]   /*  */ 
#define PRFX_RSSI_LIM_LOWER      ((unsigned char volatile xdata *) 0)[0x6008]   /*  */ 
#define PRFX_RSSI_LIM_UPPER      ((unsigned char volatile xdata *) 0)[0x6009]   /*  */ 
#define PRFX_RSSI_DIFF           ((unsigned char volatile xdata *) 0)[0x600A]   /*  */ 
#define PRFX_LNAGAIN_SAT         ((unsigned char volatile xdata *) 0)[0x600B]   /*  */ 

#define PRFX_TONE_DURATIONH      ((unsigned char volatile xdata *) 0)[0x600C]   /*  */ 
#define PRFX_TONE_DURATIONL      ((unsigned char volatile xdata *) 0)[0x600D]   /*  */ 

#define PRFX_TONE_OFFSETH        ((unsigned char volatile xdata *) 0)[0x600E]   /*  */ 
#define PRFX_TONE_OFFSETL        ((unsigned char volatile xdata *) 0)[0x600F]   /*  */ 

/*            XREG Registers                                                    */
#define FRMCTRL0                 ((unsigned char volatile xdata *) 0)[0x6180]   /*  */
#define RFIRQM0                  ((unsigned char volatile xdata *) 0)[0x6181]   /* RF Interrupt Masks                      */
#define RFIRQM1                  ((unsigned char volatile xdata *) 0)[0x6182]   /* RF Interrupt Masks                      */
#define RFERRM                   ((unsigned char volatile xdata *) 0)[0x6183]   /* RF Error Interrupt Masks                */
#define FREQCTRL                 ((unsigned char volatile xdata *) 0)[0x6184]   /* Synth Frequency Control                 */
#define FREQTUNE                 ((unsigned char volatile xdata *) 0)[0x6185]   /* Crystal Oscillator Frequency Tuning     */
#define TXPOWER                  ((unsigned char volatile xdata *) 0)[0x6186]   /* Output Power Control                    */
#define TXCTRL                   ((unsigned char volatile xdata *) 0)[0x6187]   /* Tx Settings                             */
#define LLESTAT                  ((unsigned char volatile xdata *) 0)[0x6188]   /* LLE Status                              */
#define SEMAPHORE0               ((unsigned char volatile xdata *) 0)[0x618A]   /* Semaphore0 for Accessing RF Data Memory */
#define SEMAPHORE1               ((unsigned char volatile xdata *) 0)[0x618B]   /* Semaphore1 for Accessing RF Data Memory */
#define SEMAPHORE2               ((unsigned char volatile xdata *) 0)[0x618C]   /* Semaphore2 for Accessing RF Data Memory */
#define RFSTAT                   ((unsigned char volatile xdata *) 0)[0x618D]   /* RF Core Status                          */
#define RSSI                     ((unsigned char volatile xdata *) 0)[0x618E]   /* Received Signal Strength Indicator      */
#define RFPSRND                  ((unsigned char volatile xdata *) 0)[0x618F]   /* Pseudo-Random Number Generator          */
#define MDMCTRL0                 ((unsigned char volatile xdata *) 0)[0x6190]   /* Modem Configuration                     */
#define MDMCTRL1                 ((unsigned char volatile xdata *) 0)[0x6191]   /* Modem Configuration                     */
#define MDMCTRL2                 ((unsigned char volatile xdata *) 0)[0x6192]   /* Modem Configuration                     */
#define MDMCTRL3                 ((unsigned char volatile xdata *) 0)[0x6193]   /* Modem Configuration                     */
#define SW_CONF                  ((unsigned char volatile xdata *) 0)[0x6194]   /* Sync Word Configuration                 */
#define SW0                      ((unsigned char volatile xdata *) 0)[0x6195]   /* Primary Sync Word Byte 0                */
#define SW1                      ((unsigned char volatile xdata *) 0)[0x6196]   /* Primary Sync Word Byte 1                */
#define SW2                      ((unsigned char volatile xdata *) 0)[0x6197]   /* Primary Sync Word Byte 2                */
#define SW3                      ((unsigned char volatile xdata *) 0)[0x6198]   /* Primary Sync Word Byte 3                */
#define FREQEST                  ((unsigned char volatile xdata *) 0)[0x6199]   /* Estimated RF Frequency Offset           */
#define RXCTRL                   ((unsigned char volatile xdata *) 0)[0x619A]   /* Receive Section Tuning                  */
#define FSCTRL                   ((unsigned char volatile xdata *) 0)[0x619B]   /* Frequency Synthesizer Tuning            */
#define LNAGAIN                  ((unsigned char volatile xdata *) 0)[0x61A0]   /* LNA Gain Setting                        */
#define AAFGAIN                  ((unsigned char volatile xdata *) 0)[0x61A1]   /* AAF Gain Setting                        */
#define ADCTEST0                 ((unsigned char volatile xdata *) 0)[0x61A2]   /* ADC Tuning                              */
#define MDMTEST0                 ((unsigned char volatile xdata *) 0)[0x61A5]   /* Modem Configuration                     */
#define MDMTEST1                 ((unsigned char volatile xdata *) 0)[0x61A6]   /* Modem Configuration                     */
#define ATEST                    ((unsigned char volatile xdata *) 0)[0x61A9]   /* Analog Test Control                     */
#define RFC_OBS_CTRL0            ((unsigned char volatile xdata *) 0)[0x61AE]   /* RF Observation Mux Control 0            */
#define RFC_OBS_CTRL1            ((unsigned char volatile xdata *) 0)[0x61AF]   /* RF Observation Mux Control 1            */
#define RFC_OBS_CTRL2            ((unsigned char volatile xdata *) 0)[0x61B0]   /* RF Observation Mux Control 2            */
#define LLECTRL                  ((unsigned char volatile xdata *) 0)[0x61B1]   /* LLE Control                             */
#define ACOMPQS                  ((unsigned char volatile xdata *) 0)[0x61B6]   /* Quadrature Skew Setting                 */
#define TXFILTCFG                ((unsigned char volatile xdata *) 0)[0x61BC]   /* TX Filter Configuration                 */
#define RFRND                    ((unsigned char volatile xdata *) 0)[0x61BF]   /* Random Data                             */
#define RFRAMCFG                 ((unsigned char volatile xdata *) 0)[0x61C0]   /* Radio RAM Configuration                 */
#define RFFDMA0                  ((unsigned char volatile xdata *) 0)[0x61C3]   /* Radio DMA Trigger 0 Control             */
#define RFFDMA1                  ((unsigned char volatile xdata *) 0)[0x61C4]   /* Radio DMA Trigger 1 Control             */
#define RFFSTATUS                ((unsigned char volatile xdata *) 0)[0x61C5]   /* FIFO Status                             */
#define RFFCFG                   ((unsigned char volatile xdata *) 0)[0x61C6]   /* FIFO Configuration                      */
#define RFRXFLEN                 ((unsigned char volatile xdata *) 0)[0x61C8]   /* Rx FIFO Length                          */
#define RFRXFTHRS                ((unsigned char volatile xdata *) 0)[0x61C9]   /* Rx FIFO Threshold                       */
#define RFRXFWR                  ((unsigned char volatile xdata *) 0)[0x61CA]   /* Rx FIFO Write Register                  */
#define RFRXFRD                  ((unsigned char volatile xdata *) 0)[0x61CB]   /* Rx FIFO Read Register                   */
#define RFRXFWP                  ((unsigned char volatile xdata *) 0)[0x61CC]   /* Rx FIFO Write Pointer                   */
#define RFRXFRP                  ((unsigned char volatile xdata *) 0)[0x61CD]   /* Rx FIFO Read Pointer                    */
#define RFRXFSWP                 ((unsigned char volatile xdata *) 0)[0x61CE]   /* Rx FIFO Start-of-Frame Write Pointer    */
#define RFRXFSRP                 ((unsigned char volatile xdata *) 0)[0x61CF]   /* Rx FIFO Start-of-Frame Read Pointer     */
#define RFTXFLEN                 ((unsigned char volatile xdata *) 0)[0x61D0]   /* Tx FIFO Length                          */
#define RFTXFTHRS                ((unsigned char volatile xdata *) 0)[0x61D1]   /* Tx FIFO Threshold                       */
#define RFTXFWR                  ((unsigned char volatile xdata *) 0)[0x61D2]   /* Tx FIFO Write Register                  */
#define RFTXFRD                  ((unsigned char volatile xdata *) 0)[0x61D3]   /* Tx FIFO Read Register                   */
#define RFTXFWP                  ((unsigned char volatile xdata *) 0)[0x61D4]   /* Tx FIFO Write Pointer                   */
#define RFTXFRP                  ((unsigned char volatile xdata *) 0)[0x61D5]   /* Tx FIFO Read Pointer                    */
#define RFTXFSWP                 ((unsigned char volatile xdata *) 0)[0x61D6]   /* Tx FIFO Start-of-Frame Write Pointer    */
#define RFTXFSRP                 ((unsigned char volatile xdata *) 0)[0x61D7]   /* Tx FIFO Start-of-Frame Read Pointer     */
#define BSP_P0                   ((unsigned char volatile xdata *) 0)[0x61E0]   /* CRC Polynomial Byte 0                   */
#define BSP_P1                   ((unsigned char volatile xdata *) 0)[0x61E1]   /* CRC Polynomial Byte 1                   */
#define BSP_P2                   ((unsigned char volatile xdata *) 0)[0x61E2]   /* CRC Polynomial Byte 2                   */
#define BSP_P3                   ((unsigned char volatile xdata *) 0)[0x61E3]   /* CRC Polynomial Byte 3                   */
#define BSP_D0                   ((unsigned char volatile xdata *) 0)[0x61E4]   /* CRC Value Byte 0                        */
#define BSP_D1                   ((unsigned char volatile xdata *) 0)[0x61E5]   /* CRC Value Byte 1                        */
#define BSP_D2                   ((unsigned char volatile xdata *) 0)[0x61E6]   /* CRC Value Byte 2                        */
#define BSP_D3                   ((unsigned char volatile xdata *) 0)[0x61E7]   /* CRC Value Byte 3                        */
#define BSP_W                    ((unsigned char volatile xdata *) 0)[0x61E8]   /* Whitener Value                          */
#define BSP_MODE                 ((unsigned char volatile xdata *) 0)[0x61E9]   /* Bit Stream Processor Configuration      */
#define BSP_DATA                 ((unsigned char volatile xdata *) 0)[0x61EA]   /* Bit Stream Processor Co-Processor Data  */
#define SW4                      ((unsigned char volatile xdata *) 0)[0x61F8]   /* Secondary Sync Word Byte 0              */
#define SW5                      ((unsigned char volatile xdata *) 0)[0x61F9]   /* Secondary Sync Word Byte 1              */
#define SW6                      ((unsigned char volatile xdata *) 0)[0x61FA]   /* Secondary Sync Word Byte 2              */
#define SW7                      ((unsigned char volatile xdata *) 0)[0x61FB]   /* Secondary Sync Word Byte 3              */
#define DC_I_L                   ((unsigned char volatile xdata *) 0)[0x61FC]   /* In-Phase DC Offset Estimate Low Byte    */
#define DC_I_H                   ((unsigned char volatile xdata *) 0)[0x61FD]   /* In-Phase DC Offset Estimate High Byte   */
#define DC_Q_L                   ((unsigned char volatile xdata *) 0)[0x61FE]   /* Quadrature-Phase DC Offset Estimate Low Byte  */
#define DC_Q_H                   ((unsigned char volatile xdata *) 0)[0x61FF]   /* Quadrature-Phase DC Offset Estimate High Byte */

/*            USB registers                                                    */
#define USBADDR                  ((unsigned char volatile xdata *) 0)[0x6200]   /* Function Address                        */
#define USBPOW                   ((unsigned char volatile xdata *) 0)[0x6201]   /* Power/Control Register                  */
#define USBIIF                   ((unsigned char volatile xdata *) 0)[0x6202]   /* IN Endpoints and EP0 Interrupt Flags    */
#define USBOIF                   ((unsigned char volatile xdata *) 0)[0x6204]   /* OUT-Endpoint Interrupt Flags            */
#define USBCIF                   ((unsigned char volatile xdata *) 0)[0x6206]   /* Common USB Interrupt Flags              */
#define USBIIE                   ((unsigned char volatile xdata *) 0)[0x6207]   /* IN Endpoints and EP0 Interrupt-Enable Mask  */
#define USBOIE                   ((unsigned char volatile xdata *) 0)[0x6209]   /* Out Endpoints Interrupt Enable Mask     */
#define USBCIE                   ((unsigned char volatile xdata *) 0)[0x620B]   /* Common USB Interrupt-Enable Mask        */
#define USBFRML                  ((unsigned char volatile xdata *) 0)[0x620B]   /* Current Frame Number (low byte)         */
#define USBFRMH                  ((unsigned char volatile xdata *) 0)[0x620C]   /* Current Frame Number (high byte)        */
#define USBINDEX                 ((unsigned char volatile xdata *) 0)[0x620E]   /* Current-Endpoint Index Register         */
#define USBCTRL                  ((unsigned char volatile xdata *) 0)[0x620F]   /* USB Control Register                    */
#define USBMAXI                  ((unsigned char volatile xdata *) 0)[0x6210]   /* Max. Packet Size for IN Endpoint{1–5}   */
#define USBCS0                   ((unsigned char volatile xdata *) 0)[0x6211]   /* EP0 Control and Status (USBINDEX = 0)   */
#define USBCSIL                  ((unsigned char volatile xdata *) 0)[0x6211]   /* IN EP{1–5} Control and Status, low      */
#define USBCSIH                  ((unsigned char volatile xdata *) 0)[0x6212]   /* IN EP{1–5} Control and Status, high     */
#define USBMAXO                  ((unsigned char volatile xdata *) 0)[0x6213]   /* Max. Packet Size for OUT EP{1–5}        */
#define USBCSOL                  ((unsigned char volatile xdata *) 0)[0x6214]   /* OUT EP{1–5} Control and Status, low     */
#define USBCSOH                  ((unsigned char volatile xdata *) 0)[0x6215]   /* OUT EP{1–5} Control and Status, High    */
#define USBCNT0                  ((unsigned char volatile xdata *) 0)[0x6216]   /* Number of Received Bytes in EP0 FIFO (USBINDEX = 0)   */
#define USBCNTL                  ((unsigned char volatile xdata *) 0)[0x6216]   /* Number of Bytes in EP{1–5} OUT FIFO, Low              */
#define USBCNTH                  ((unsigned char volatile xdata *) 0)[0x6217]   /* Number of Bytes in EP{1–5} OUT FIFO, High             */
#define USBF0                    ((unsigned char volatile xdata *) 0)[0x6220]   /* Endpoint-0 FIFO                         */
#define USBF1                    ((unsigned char volatile xdata *) 0)[0x6222]   /* Endpoint-1 FIFO                         */
#define USBF2                    ((unsigned char volatile xdata *) 0)[0x6224]   /* Endpoint-2 FIFO                         */
#define USBF3                    ((unsigned char volatile xdata *) 0)[0x6226]   /* Endpoint-3 FIFO                         */
#define USBF4                    ((unsigned char volatile xdata *) 0)[0x6228]   /* Endpoint-4 FIFO                         */
#define USBF5                    ((unsigned char volatile xdata *) 0)[0x622A]   /* Endpoint-5 FIFO                         */
#define TR0                      ((unsigned char volatile xdata *) 0)[0x624B]   /* Test Register 0                         */

/*            Debug interface registers                                                    */
#define DBGDATA                  ((unsigned char volatile xdata *) 0)[0x6260]   /* Debug Data                              */
#define CHVER                    ((unsigned char volatile xdata *) 0)[0x6249]   /* Chip Version                            */
#define CHIPID                   ((unsigned char volatile xdata *) 0)[0x624A]   /* Chip ID                                 */
#define CHIPINFO0                ((unsigned char volatile xdata *) 0)[0x6276]   /* Chip Information Byte 0                 */
#define CHIPINFO1                ((unsigned char volatile xdata *) 0)[0x6277]   /* Chip Information Byte 1                 */

/*            Power management                                                            */
#define SRCRC                    ((unsigned char volatile xdata *) 0)[0x6262]   /* Sleep Reset CRC (not available on the CC2544) */

/*            Clock-Loss Detector                                                         */
#define CLD                      ((unsigned char volatile xdata *) 0)[0x6290]   /* Clock-Loss detection                    */

/*            Flash controller registers                                                  */
#define FCTL                     ((unsigned char volatile xdata *) 0)[0x6270]   /* Flash Control                           */
#define FWDATA                   ((unsigned char volatile xdata *) 0)[0x6273]   /* Flash write data                        */
#define FADDRH                   ((unsigned char volatile xdata *) 0)[0x6272]   /* Flash-Address high byte                 */
#define FADDRL                   ((unsigned char volatile xdata *) 0)[0x6271]   /* Flash-Address low byte                  */

/*            Timer registers                                                             */
#define T1CCTL3                  ((unsigned char volatile xdata *) 0)[0x62A3]   /* Timer 1 Channel 3 Capture/Compare control     */
#define T1CC3H                   ((unsigned char volatile xdata *) 0)[0x62AD]   /* Timer 1 Channel 3 Capture/Compare value, high */
#define T1CC3L                   ((unsigned char volatile xdata *) 0)[0x62AC]   /* Timer 1 Channel 3 Capture/Compare value, low  */
#define T1CCTL4                  ((unsigned char volatile xdata *) 0)[0x62A4]   /* Timer 1 Channel 4 Capture/Compare control     */
#define T1CC4H                   ((unsigned char volatile xdata *) 0)[0x62AF]   /* Timer 1 Channel 4 Capture/Compare value, high */
#define T1CC4L                   ((unsigned char volatile xdata *) 0)[0x62AE]   /* Timer 1 Channel 4 Capture/Compare value, low  */
#define IRCTL                    ((unsigned char volatile xdata *) 0)[0x6281]   /* Timer 1 IR Generation Control                 */

/*            Sleep timer registers                                                       */
#define STCC                     ((unsigned char volatile xdata *) 0)[0x62B0]   /* Sleep timer capture control                   */
#define STCS                     ((unsigned char volatile xdata *) 0)[0x62B1]   /* Sleep Timer Capture Status                    */
#define STCV0                    ((unsigned char volatile xdata *) 0)[0x62B2]   /* Sleep Timer Capture Value Byte 0              */
#define STCV1                    ((unsigned char volatile xdata *) 0)[0x62B3]   /* Sleep Timer Capture Value Byte 1              */
#define STCV2                    ((unsigned char volatile xdata *) 0)[0x62B4]   /* Sleep Timer Capture Value Byte 2              */

/*            I2C registers                                                              */
#define I2CCFG                    ((unsigned char volatile xdata *) 0)[0x6230]   /* I2C control                                  */
#define I2CSTAT                   ((unsigned char volatile xdata *) 0)[0x6231]   /* I2C status                                   */
#define I2CDATA                   ((unsigned char volatile xdata *) 0)[0x6232]   /* I2C data                                     */
#define I2CADDR                   ((unsigned char volatile xdata *) 0)[0x6233]   /* I2C own slave address                        */

/*            Analog comparator                                                          */
#define CMPCTL                    ((unsigned char volatile xdata *) 0)[0x62D0]   /* Analog Comparator Control and Status         */



#endif   /* __CC2543_H__ */
