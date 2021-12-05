/*-----------------------------------------------------------------------------
MIDAS300.H

Header file for CoreRiver GC89L591/81L591/89L581/81L581/89L541/81L541 devices.
MiDAS3.0 Family - GC89L5x1AE Series.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __MIDAS300_H__
#define __MIDAS300_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr ADCON       = 0x84;          /* ADC Control & ADC Result Low             */
sfr ADCSEL      = 0x85;          /* ADC Clock & MUX Selection                */
sfr ADCR        = 0x86;          /* ADC Result High                          */
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
sfr C0CAP0L     = 0x92;          /* PCA0, Module 0, Low Capture/Compare      */
sfr C0CAP1L     = 0x93;          /* PCA0, Module 1, Low Capture/Compare      */
sfr C0CAP2L     = 0x94;          /* PCA0, Module 2, Low Capture/Compare      */
sfr C0CAP3L     = 0x95;          /* PCA0, Module 3, Low Capture/Compare      */
sfr C0CAP4L     = 0x96;          /* PCA0, Module 4, Low Capture/Compare      */
sfr C0CAP5L     = 0x97;          /* PCA0, Module 5, Low Capture/Compare      */

sfr SCON        = 0x98;          /* UART0 Control                            */
sfr SBUF        = 0x99;          /* UART0 Data Buffer                        */
sfr C0CAP0H     = 0x9A;          /* PCA0, Module 0, High Capture/Compare     */
sfr C0CAP1H     = 0x9B;          /* PCA0, Module 1, High Capture/Compare     */
sfr C0CAP2H     = 0x9C;          /* PCA0, Module 2, High Capture/Compare     */
sfr C0CAP3H     = 0x9D;          /* PCA0, Module 3, High Capture/Compare     */
sfr C0CAP4H     = 0x9E;          /* PCA0, Module 4, High Capture/Compare     */
sfr C0CAP5H     = 0x9F;          /* PCA0, Module 5, High Capture/Compare     */

sfr P2          = 0xA0;          /* Port 2 Latch                             */
sfr SBUF1       = 0xA1;          /* Serial data buffer register of UART1     */
sfr C0CAPM0     = 0xA2;          /* PCA0, Module 0, Mode control register    */
sfr C0CAPM1     = 0xA3;          /* PCA0, Module 1, Mode control register    */
sfr C0CAPM2     = 0xA4;          /* PCA0, Module 2, Mode control register    */
sfr C0CAPM3     = 0xA5;          /* PCA0, Module 3, Mode control register    */
sfr C0CAPM4     = 0xA6;          /* PCA0, Module 4, Mode control register    */
sfr C0CAPM5     = 0xA7;          /* PCA0, Module 5, Mode control register    */

sfr IE          = 0xA8;          /* Interrupt Enable                         */
sfr SADDR       = 0xA9;          /* UART0, Slave address register            */
sfr SADDR1      = 0xAA;          /* UART1, Slave address register            */
sfr SADEN1      = 0xAB;          /* UART1, Slave address mask enable register*/
sfr C0CON       = 0xAC;          /* PCA0, Counter control register           */
sfr C0MOD       = 0xAD;          /* PCA0, Counter mode register              */
sfr C0L         = 0xAE;          /* PCA0, Counter Low Byte Register          */
sfr C0H         = 0xAF;          /* PCA0, Counter High Byte Register         */

sfr P3          = 0xB0;          /* Port 3 Latch                             */
sfr SCON1       = 0xB1;          /* UART1 serial port control register       */
sfr IT          = 0xB2;          /* Interrupt type selection register        */
sfr P0TYP       = 0xB3;          /* Port0 Type selection register            */
sfr P1TYP       = 0xB4;          /* Port1 Type selection register            */
sfr P2TYP       = 0xB5;          /* Port2 Type selection register            */
sfr P3TYP       = 0xB6;          /* Port3 Type selection register            */
sfr IPH         = 0xB7;          /* Interrupt priority register              */

sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr SADEN       = 0xB9;          /* Slave address mask enable register       */
sfr ITSEL       = 0xBA;          /* Interrupt polarity selection register    */
sfr P0DIR       = 0xBB;          /* Port0 Input/Output control register      */
sfr P1DIR       = 0xBC;          /* Port1 Input/Output control register      */
sfr P2DIR       = 0xBD;          /* Port2 Input/Output control register      */
sfr P3DIR       = 0xBE;          /* Port3 Input/Output control register      */
sfr AUXAD       = 0xBF;          /* High address register for MOVX with Ri   */

sfr PLLCON      = 0xC1;          /* PLL control register                     */
sfr PLLNR       = 0xC2;          /* PLL input divider register               */
sfr PLLFR       = 0xC3;          /* PLL feedback divider register            */
sfr PMR         = 0xC4;          /* Power management register                */
sfr STATUS      = 0xC5;          /* Status register                          */
sfr OSCICN      = 0xC6;          /* Internal ring oscillator control register*/
sfr IOCFG       = 0xC7;          /* I/O configuration register               */

sfr T2CON       = 0xC8;          /* Timer/Counter 2 Control                  */
sfr T2MOD       = 0xC9;          /* Timer/Counter 2 Mode                     */
sfr RCAP2L      = 0xCA;          /* Timer/Counter 2 Reload Low               */
sfr RCAP2H      = 0xCB;          /* Timer/Counter 2 Reload High              */
sfr TMR2L       = 0xCC;          /* Timer/Counter 2 Low                      */
sfr TMR2H       = 0xCD;          /* Timer/Counter 2 High                     */
sfr C1CON       = 0xCE;          /* PCA1 Counter control register            */
sfr C1MOD       = 0xCF;          /* PCA1 Counter mode register               */

sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr P0SEL       = 0xD1;          /* Port0 Pull-Up control register           */
sfr C1CAP0L     = 0xD2;          /* PCA1, Module 0, Low Capture/Compare      */
sfr C1CAP1L     = 0xD3;          /* PCA1, Module 1, Low Capture/Compare      */
sfr C1CAP2L     = 0xD4;          /* PCA1, Module 2, Low Capture/Compare      */
sfr C1CAP3L     = 0xD5;          /* PCA1, Module 3, Low Capture/Compare      */
sfr C1CAP4L     = 0xD6;          /* PCA1, Module 4, Low Capture/Compare      */
sfr C1CAP5L     = 0xD7;          /* PCA1, Module 5, Low Capture/Compare      */

sfr WDCON       = 0xD8;          /* Watchdog Timer & Power Status            */
sfr P1SEL       = 0xD9;          /* Port1 Pull-Up control register           */
sfr C1CAP0H     = 0xDA;          /* PCA1, Module 0, High Capture/Compare     */
sfr C1CAP1H     = 0xDB;          /* PCA1, Module 1, High Capture/Compare     */
sfr C1CAP2H     = 0xDC;          /* PCA1, Module 2, High Capture/Compare     */
sfr C1CAP3H     = 0xDD;          /* PCA1, Module 3, High Capture/Compare     */
sfr C1CAP4H     = 0xDE;          /* PCA1, Module 4, High Capture/Compare     */
sfr C1CAP5H     = 0xDF;          /* PCA1, Module 5, High Capture/Compare     */

sfr ACC         = 0xE0;          /* Accumulator                              */
sfr P2SEL       = 0xE1;          /* Port2 Pull-Up control register           */
sfr C1CAPM0     = 0xE2;          /* PCA1, Module 0, Mode control register    */
sfr C1CAPM1     = 0xE3;          /* PCA1, Module 1, Mode control register    */
sfr C1CAPM2     = 0xE4;          /* PCA1, Module 2, Mode control register    */
sfr C1CAPM3     = 0xE5;          /* PCA1, Module 3, Mode control register    */
sfr C1CAPM4     = 0xE6;          /* PCA1, Module 4, Mode control register    */
sfr C1CAPM5     = 0xE7;          /* PCA1, Module 5, Mode control register    */

sfr EIE         = 0xE8;          /* External interrupt enable register       */
sfr P3SEL       = 0xE9;          /* Port3 Pull-Up control register           */
sfr C1L         = 0xEA;          /* PCA1 counter, low byte                   */
sfr C1H         = 0xEB;          /* PCA1 counter, high byte                  */
sfr ADCENB0     = 0xEC;          /* ADC Input Enable Bar0, Ch. ADC0.0~ADC0.7 */
sfr ADCENB1     = 0xED;          /* ADC Input Enable Bar1, Ch. ADC1.0~ADC1.7 */
sfr ADCENB2     = 0xEE;          /* ADC Input Enable Bar2, Ch. ADC2.0~ADC2.7 */
sfr ADCENB3     = 0xEF;          /* ADC Input Enable Bar3, Ch. ADC3.0~ADC3.7 */

sfr B           = 0xF0;          /* B Register                               */
sfr FAEN        = 0xF7;          /* IAP Routine Access Enable                */

sfr EIP         = 0xF8;          /* Extended interrupt priority              */
sfr UINDX       = 0xF9;          /* I2C Slave Access Index Register          */
sfr UDATA       = 0xFA;          /* I2C Slave Access Data Register           */
sfr CLKSEL      = 0xFB;          /* Internal clock selection                 */


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
sbit ESPI0    = IE^6;              /* SPI0 Interrupt Enable                  */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES0      = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 Interrupt Priority */
                                   /* Bit 7 unused                           */
sbit PADC     = IP^6;              /* ADC Priority                           */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS       = IP^4;              /* UART0 Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

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
                                   /* Bit 7 unused                           */
sbit POR      = WDCON^6;           /* Power-On reset flag                    */
sbit EPFI     = WDCON^5;           /* Enable Power fail interrupt flag       */
sbit PFI      = WDCON^4;           /* Power Fail interrupt flag              */
sbit WDIF     = WDCON^3;           /* Watchdog Timer interrupt flag          */
sbit WTRF     = WDCON^2;           /* Watchdog Timer reset flag              */
sbit EWT      = WDCON^1;           /* Watchdog Timer reset enable            */
sbit RWT      = WDCON^0;           /* Restart Watchdog timer                 */

/* EIE 0xE8 External interrupt enable register */
sbit EPCA1    = EIE^7;             /* PCA1 interrupt enable                  */
sbit EPCA0    = EIE^6;             /* PCA0 interrupt enable                  */
sbit ES1      = EIE^5;             /* UART1 interrupt enable                 */
sbit EWDT     = EIE^4;             /* Watchdog timer ineterrupt enable       */
sbit EX5      = EIE^3;             /* Enable external interrupt 5            */
sbit EX4      = EIE^2;             /* Enable external interrupt 4            */
sbit EX3      = EIE^1;             /* Enable external interrupt 3            */
sbit EX2      = EIE^0;             /* Enable external interrupt 2            */

/* EIP 0xF8 Extended interrupt priority */
sbit PPCA1    = EIP^7;             /* PCA1 interrupt priority                */
sbit PPCA0    = EIP^6;             /* PCA0 interrupt priority                */
sbit PS1      = EIP^5;             /* UART1 interrupt priority               */
sbit PWDT     = EIP^4;             /* Watchdog timer ineterrupt priority     */
sbit PX5      = EIP^3;             /* Priority external interrupt 5          */
sbit PX4      = EIP^2;             /* Priority external interrupt 4          */
sbit PX3      = EIP^1;             /* Priority external interrupt 3          */
sbit PX2      = EIP^0;             /* Priority external interrupt 2          */


#endif                           /* __MIDAS300_H__                           */