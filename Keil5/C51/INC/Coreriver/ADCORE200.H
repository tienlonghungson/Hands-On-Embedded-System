/*-----------------------------------------------------------------------------
ADCore200.H

Header file for CoreRiver ADCore200, ADCore210, and ADCore220 devices.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __ADCORE200_H__
#define __ADCORE200_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr ALTSEL      = 0x85;          /* Alternative Pin Selection                */
sfr CKSEL       = 0x86;          /* Clock Selection                          */
sfr PCON        = 0x87;          /* Power Control                            */

sfr TCON        = 0x88;          /* Timer/Counter Control                    */
sfr TMOD        = 0x89;          /* Timer/Counter Mode                       */
sfr TL0         = 0x8A;          /* Timer/Counter 0 Low                      */
sfr TL1         = 0x8B;          /* Timer/Counter 1 Low                      */
sfr TH0         = 0x8C;          /* Timer/Counter 0 High                     */
sfr TH1         = 0x8D;          /* Timer/Counter 1 High                     */
sfr CKCON       = 0x8E;          /* Clock Control                            */
sfr RINGCON     = 0x8F;          /* RING Control Register                    */

sfr P1          = 0x90;          /* Port 1 Latch                             */
sfr EXIF        = 0x91;          /* External Interrupt Flag                  */
sfr PWM0CON     = 0x92;          /* PWM0 Control                             */
sfr PWM0CNT     = 0x93;          /* PWM0 Count                               */
sfr PWM0D0      = 0x94;          /* PWM0D0 Duty Data                         */
sfr PWM0D1      = 0x95;          /* PWM0D1 Duty Data                         */
sfr PWM0D2      = 0x96;          /* PWM0D2 Duty Data                         */
sfr PWM0D3      = 0x97;          /* PWM0D3 Duty Data                         */

sfr SCON        = 0x98;          /* UART0 Control                            */
sfr SBUF        = 0x99;          /* UART0 Data Buffer                        */
sfr PWM0OEN     = 0x9B;          /* PWM0 Output Enable                       */
sfr PWM0D4      = 0x9C;          /* PWM0D4 Duty Data                         */
sfr PWM0D5      = 0x9D;          /* PWM0D5 Duty Data                         */
sfr PWM0D6      = 0x9E;          /* PWM0D6 Duty Data                         */
sfr PWM0D7      = 0x9F;          /* PWM0D7 Duty Data                         */

sfr P2          = 0xA0;          /* Port 2 Latch                             */
sfr EIE         = 0xA1;          /* External interrupt enable register       */
sfr PWM1CON     = 0xA2;          /* PWM1 Control                             */
sfr PWM1CNT     = 0xA3;          /* PWM1 Count                               */
sfr PWM1D0      = 0xA4;          /* PWM1D0 Duty Data                         */
sfr PWM1D1      = 0xA5;          /* PWM1D1 Duty Data                         */
sfr PWM1D2      = 0xA6;          /* PWM1D2 Duty Data                         */
sfr PWM1D3      = 0xA7;          /* PWM1D3 Duty Data                         */

sfr IE          = 0xA8;          /* Interrupt Enable                         */
sfr SADDR       = 0xA9;          /* UART0, Slave address register            */
sfr PWM1OEN     = 0xAB;          /* PWM1 Output Enable                       */
sfr P0HD        = 0xAC;          /* Port0 High Current Driving               */
sfr P1HD        = 0xAD;          /* Port1 High Current Driving               */
sfr P2HD        = 0xAE;          /* Port2 High Current Driving               */
sfr P3HD        = 0xAF;          /* Port3 High Current Driving               */

sfr P3          = 0xB0;          /* Port 3 Latch                             */
sfr EIP         = 0xB1;          /* Extended Interrupt Priority              */
sfr IT          = 0xB2;          /* Interrupt type selection register        */
sfr IPH         = 0xB7;          /* Interrupt priority register              */

sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr SADEN       = 0xB9;          /* Slave address mask enable register       */
sfr ITSEL       = 0xBA;          /* Interrupt polarity selection register    */


sfr PMR         = 0xC4;          /* Power Management Control                 */
sfr STATUS      = 0xC5;          /* Status register                          */
sfr OSCICN      = 0xC6;          /* Internal ring oscillator control         */
sfr OSCICN2     = 0xC7;          /* Internal ring oscillator2 control        */

sfr T2CON       = 0xC8;          /* Timer/Counter 2 Control                  */
sfr T2MOD       = 0xC9;          /* Timer/Counter 2 Mode                     */
sfr RCAP2L      = 0xCA;          /* Timer/Counter 2 Reload Low               */
sfr RCAP2H      = 0xCB;          /* Timer/Counter 2 Reload High              */
sfr TL2         = 0xCC;          /* Timer/Counter 2 Low                      */
sfr TH2         = 0xCD;          /* Timer/Counter 2 High                     */
sfr ADENB       = 0xCE;          /* ADC Channel Enable Bar                   */
sfr ADCOSC      = 0xCF;          /* ADC Clock Selecting Register             */

sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr P3SEL       = 0xD4;          /* Port3 Pull-Up control register           */
sfr ADCFG       = 0xD5;          /* ADC Configuration                        */
sfr ADCON       = 0xD6;          /* ADC Control & ADC Result Low             */
sfr ADSOC       = 0xD7;          /* ADC Clock Selecting Register             */

sfr WDCON       = 0xD8;          /* Watchdog Timer & Power Status            */
sfr P0TYPE      = 0xD9;          /* Port0 Type Control                       */
sfr P1TYPE      = 0xDA;          /* Port1 Type Control                       */
sfr P2TYPE      = 0xDB;          /* Port2 Type Control                       */
sfr P3TYPE      = 0xDC;          /* Port3 Type Control                       */
sfr ADRDL       = 0xDD;          /* ADC Result Low                           */
sfr ADRDM       = 0xDE;          /* ADC Result Medium                        */
sfr ADCSEL      = 0xDF;          /* ADC Clock & MUX Selection                */

sfr ACC         = 0xE0;          /* Accumulator                              */
sfr P0DIR       = 0xE1;          /* Port0 Input/Output control               */
sfr P1DIR       = 0xE2;          /* Port1 Input/Output control               */
sfr P2DIR       = 0xE3;          /* Port2 Input/Output control               */
sfr P3DIR       = 0xE4;          /* Port3 Input/Output control               */
sfr ADOFL       = 0xE5;          /* ADC Data ofset low                       */
sfr ADOFM       = 0xE6;          /* ADC Data offset medium                   */
sfr ADOFH       = 0xE7;          /* ADC Data offset high                     */

sfr I2C0ST      = 0xE8;          /* I2C0 Status                              */
sfr I2C0CON     = 0xE9;          /* I2C0 Control                             */
sfr I2C0CFG     = 0xEA;          /* I2C0 Configuration                       */
sfr I2C0SLA     = 0xEB;          /* I2C0 Slave address                       */
sfr I2C0DAT     = 0xEC;          /* I2C0 Data                                */
sfr I2C0SCL     = 0xED;          /* I2C0 Clocl scaling                       */
sfr ADCMD       = 0xEF;          /* ADC Access mode                          */

sfr B           = 0xF0;          /* B Register                               */
sfr FCNTLD      = 0xF1;          /* FLASH Program/Erase Count Load           */
sfr FCNTL       = 0xF2;          /* FLASH Program/Erase Count Low            */
sfr FCNTM       = 0xF3;          /* FLASH Program/Erase Count Middle         */
sfr FCNTH       = 0xF4;          /* FLASH Program/Erase Count High           */
sfr FCON        = 0xF6;          /* FLASH Control                            */
sfr FAEN        = 0xF7;          /* IAP Routine Access Enable                */

sfr I2C1ST      = 0xF8;          /* I2C1 Status                              */
sfr I2C1CON     = 0xF9;          /* I2C1 Control                             */
sfr I2C1CFG     = 0xFA;          /* I2C1 Configuration                       */
sfr I2C1SLA     = 0xFB;          /* I2C1 Slave Address                       */
sfr I2C1DAT     = 0xFC;          /* I2C1 Data                                */
sfr I2C1SCL     = 0xFD;          /* I2C1 Clock Scaling                       */


/* Bit Definitions */
/* TCON 0x88 Timer/Counter Control */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* SCON 0x98 UART0 Control */
sbit SM0      = SCON^7;            /* Serial Port Mode Selection             */
sbit SM1      = SCON^6;            /* Serial Port Mode Selection             */
sbit SM2      = SCON^5;            /* Enable Automatic Address Recognition   */
sbit REN      = SCON^4;            /* Serial Reception Enable                */
sbit TB8      = SCON^3;            /* Ninth Data Bit Transmission            */
sbit RB8      = SCON^2;            /* Ninth Data Bit Reception               */
sbit TI       = SCON^1;            /* Transmission Interrupt Flag            */
sbit RI       = SCON^0;            /* Reception Interrupt Flag               */

/* IE 0xA8 Interrupt Enable */
sbit EA       = IE^7;              /* Global Interrupt Enable                */
sbit EADC     = IE^6;              /* ADC Interrupt Enable                   */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES       = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 Interrupt Priority */
                                   /* Bit 7 unused                           */
sbit PADC     = IP^6;              /* ADC Interrupt Priority low             */
sbit PT2      = IP^5;              /* Timer 2 Interrupt Priority low         */
sbit PS       = IP^4;              /* UART0 Interrupt Priority low           */
sbit PT1      = IP^3;              /* Timer 1 Interrupt Priority low         */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority low      */
sbit PT0      = IP^1;              /* Timer 0 Interrupt Priority low         */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority low      */

/* T2CON 0xC8 Timer/Counter 2 Control */
sbit TF2      = T2CON^7;           /* Timer 2 Overflow Flag                  */
sbit EXF2     = T2CON^6;           /* Timer 2 External Flag                  */
sbit RCLK     = T2CON^5;           /* Receive Clock Flag                     */
sbit TCLK     = T2CON^4;           /* Transmit Clock Flag                    */
sbit EXEN2    = T2CON^3;           /* Timer 2 External Enable Flag           */
sbit TR2      = T2CON^2;           /* Timer2 Run Enable                      */
sbit C_T2     = T2CON^1;           /* Timer or Counter selection             */
sbit CP_RL2   = T2CON^0;           /* Capture/Reload Flag                    */

/* PSW 0xD0 Program Status Word */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
sbit F1       = PSW^1;             /* User Flag 1                            */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* WDCON 0xD8 Watchdog Timer & Power Status */
sbit WDMOD    = WDCON^7;           /* WDT mode selection flag                */
sbit POR      = WDCON^6;           /* Power-On reset flag                    */
                                   /* Bit 5 unused                           */
                                   /* Bit 4 unused                           */
sbit WDIF     = WDCON^3;           /* Watchdog Timer interrupt flag          */
sbit WTRF     = WDCON^2;           /* Watchdog Timer reset flag              */
sbit EWT      = WDCON^1;           /* Watchdog Timer reset enable            */
sbit RWT      = WDCON^0;           /* Restart Watchdog timer                 */

/* I2C0ST 0xE8 I2C0 Status register */
sbit I2CIF    = I2C0ST^7;         /* I2C Master interrupt flag              */
sbit I2COF    = I2C0ST^6;         /* I2C Overflow flag                      */
sbit I2CACK   = I2C0ST^5;         /* I2C Acknowledge flag                   */
sbit I2CRW    = I2C0ST^4;         /* I2C Reade Write flag                   */
sbit I2CDA    = I2C0ST^3;         /* I2C Data Address flag                  */
sbit I2CP     = I2C0ST^2;         /* I2C Stop flag                          */
sbit I2CS     = I2C0ST^1;         /* I2C Start flag                         */
sbit I2CBF    = I2C0ST^0;         /* I2C Busy flag                          */

/* I2C1ST 0xF8 I2C1 status */
sbit I2C1IF   = I2C1ST^7;          /* I2C1 Master Interrupt Flag             */
sbit I2C1OF   = I2C1ST^6;          /* I2C1 Overflow Flag                     */
sbit I2C1ACK  = I2C1ST^5;          /* I2C1 Acknowledge flag                  */
sbit I2C1RW   = I2C1ST^4;          /* I2C1 Read/Write flag                   */
sbit I2C1DA   = I2C1ST^3;          /* I2C1 Data / Address flag               */
sbit I2C1P    = I2C1ST^2;          /* I2C1 Stop flag                         */
sbit I2C1S    = I2C1ST^1;          /* I2C1 Start flag                        */
sbit I2C1BF   = I2C1ST^0;          /* I2C1 Busy flag                         */


#endif                           /* __ADCORE200_H__                          */