/*-----------------------------------------------------------------------------
IS31CS8973.H

Header file for the IS31CS8973 microcontroller.

Copyright (c) 2019 ARM Germany GmbH.
All rights reserved.
--------------------------------------------------------------------------------*/

#ifndef __IS31CS8973_H__
#define __IS31CS8973_H__

/*------------------------------------------------------------------------------
  Defined registers
--------------------------------------------------------------------------------*/

/*  BYTE Register  */
    sfr P0        = 0x80;   /* Port 0                                           */
    sfr SP        = 0x81;   /* Stack Pointer                                    */
    sfr DPL       = 0x82;   /* Data Pointer 0 Low byte                          */
    sfr DPH       = 0x83;   /* Data Pointer 0 High byte                         */
    sfr DPL1      = 0x84;   /* Data Pointer 1 Low byte                          */
    sfr DPH1      = 0x85;   /* Data Pointer 1 High byte                         */
    sfr DPS       = 0x86;   /* Data pointers select                             */
    sfr PCON      = 0x87;   /* Power Configuration                              */

    sfr TCON      = 0x88;   /* Timer 0,1 Configuration                          */
    sfr TMOD      = 0x89;   /* Timer 0,1 Mode                                   */
    sfr TL0       = 0x8A;   /* Timer 0 Low byte counter                         */
    sfr TL1       = 0x8B;   /* Timer 1 Low byte counter                         */
    sfr TH0       = 0x8C;   /* Timer 0 High byte counter                        */
    sfr TH1       = 0x8D;   /* Timer 1 High byte counter                        */
    sfr CKCON     = 0x8E;   /* XDATA Wait States                                */
    sfr CKSEL     = 0x8F;   /* CPU clock select                                 */

    sfr P1        = 0x90;   /* Port 1                                           */
    sfr EXIF      = 0x91;   /* External Interrupt Flag                          */
    sfr WTST      = 0x92;   /* Program Wait States                              */
    sfr DPX       = 0x93;   /* Data Page Pointer 0 for A23~A16                  */
    sfr CMPST     = 0x94;   /* Comparator status register                       */
    sfr DPX1      = 0x95;   /* Data Page Pointer 1 for A23~A16                  */

    sfr SCON0     = 0x98;   /* Serial 0 Configuration                           */
    sfr SBUF0     = 0x99;   /* Serial 0 I/O Buffer                              */
    sfr ESP       = 0x9B;   /* Extend Stack Pointer for A15~A8                  */
    sfr ACON      = 0x9D;   /* Address Control FLAT/LARGE                       */
    sfr WKMASK    = 0x9F;   /* Wake up mask register                            */

    sfr P2        = 0xA0;   /* Port 2                                           */
    sfr SPICR     = 0xA1;   /* SPI Configuration Register                       */
    sfr SPIMR     = 0xA2;   /* SPI Mode Control Register                        */
    sfr SPIST     = 0xA3;   /* SPI Status Register                              */
    sfr SPIDAT    = 0xA4;   /* SPI Data Register                                */
    sfr SFIFO2    = 0xA5;   /* UART2 FIFO Status/Control                        */
    sfr SBUF2     = 0xA6;   /* UART2 Data Buffer Register                       */
    sfr SINT2     = 0xA7;   /* UART2 Interrupt Status/Enable Register           */

    sfr IE        = 0xA8;   /* Interrupt Enable                                 */
    sfr ADCCFG    = 0xA9;   /* ADC configuration rgister                        */
    sfr TL4       = 0xAC;   /* Timer 4 low byte counter                         */
    sfr TH4       = 0xAD;   /* Timer 4 High byte counter                        */
    sfr TL3       = 0xAE;   /* Timer 3 low byte counter                         */
    sfr TH3       = 0xAF;   /* Timer 3 High byte counter                        */

    sfr CCAPM0    = 0xB2;   /* PCA module 0 configuration register              */
    sfr CCAPM1    = 0xB3;   /* PCA module 1 configuration register              */
    sfr CCAPM2    = 0xB4;   /* PCA module 2 configuration register              */
    sfr CCAPM3    = 0xB5;   /* PCA module 3 configuration register              */
    sfr CCAPM4    = 0xB6;   /* PCA module 4 configuration register              */
    sfr CCAPM5    = 0xB7;   /* PCA module 5 configuration register              */

    sfr IP        = 0xB8;   /* Interrupt priority                               */
    sfr ADCPGA    = 0xB9;   /* ADC PGA Control Register                         */
    sfr ADCL      = 0xBA;   /* ADC result low byte                              */
    sfr ADCH      = 0xBB;   /* ADC result high byte                             */

    sfr SCON2     = 0xC2;   /* Serial 1 Configuration                           */
    sfr PMR       = 0xC4;   /* Power mode control register                      */
    sfr STATUS    = 0xC5;   /* Interrupt or UART active status                  */
    sfr MCON      = 0xC6;   /* On-chip XRAM relocation register                 */
    sfr TA        = 0xC7;   /* Timed access A register                          */

    sfr T2CON     = 0xC8;   /* Timer 2 Configuration                            */
    sfr TB        = 0xC9;   /* Timed access B register                          */
    sfr RLDL      = 0xCA;   /* Timer 2 Reload Low byte                          */
    sfr RLDH      = 0xCB;   /* Timer 2 Reload High byte                         */
    sfr TL2       = 0xCC;   /* Timer 2 low byte counter                         */
    sfr TH2       = 0xCD;   /* Timer 2 High byte counter                        */
    sfr ADCCTL    = 0xCE;   /* ADC Control Register                             */
    sfr T34CON    = 0xCF;   /* Timer 3 and Timer 4 Control and Status Register  */

    sfr PSW       = 0xD0;   /* Program Status Word                              */
    sfr PCAMOD	  = 0xD1;   /* PCA mode control register                        */
    sfr CCAP0L    = 0xD2;   /* PCA ch0 compare, capture or PWM low byte         */
    sfr CCAP0H    = 0xD3;   /* PCA ch0 compare, capture or PWM high byte        */
    sfr CCAP1L    = 0xD4;   /* PCA ch1 compare, capture or PWM low byte         */
    sfr CCAP1H    = 0xD5;   /* PCA ch1 compare, capture or PWM high byte        */
    sfr CCAP2L    = 0xD6;   /* PCA ch2 compare, capture or PWM low byte         */
    sfr CCAP2H    = 0xD7;   /* PCA ch2 compare, capture or PWM high byte        */

    sfr WDCON     = 0xD8;   /* Watch dog control and status register            */
    sfr CL        = 0xD9;   /* PCA main counter low byte                        */
    sfr DPXR      = 0xDA;   /* MOVX @Ri optional high byte register             */
    sfr I2CSCON2  = 0xDB;   /* I2CS2 Configuration Regiter                      */
    sfr I2CSST2   = 0xDC;   /* I2CS2 Status Register                            */
    sfr I2CSADR1  = 0xDD;   /* I2CS1 Slave Address Register                     */
    sfr I2CSDAT2  = 0xDE;   /* I2CS2 Data Register                              */
    sfr I2CSADR2  = 0xDF;   /* I2CS2 Slave Address Register                     */

    sfr ACC       = 0xE0;   /* Accumulator                                      */
    sfr PCACON    = 0xE1;   /* PCA control register                             */
    sfr CCAP3L    = 0xE2;   /* PCA ch3 compare, capture or PWM low byte         */
    sfr CCAP3H    = 0xE3;   /* PCA ch3 compare, capture or PWM high byte        */
    sfr CCAP4L    = 0xE4;   /* PCA ch4 compare, capture or PWM low byte         */
    sfr CCAP4H    = 0xE5;   /* PCA ch4 compare, capture or PWM high byte        */
    sfr CCAP5L    = 0xE6;   /* PCA ch5 compare, capture or PWM low byte         */
    sfr CCAP5H    = 0xE7;   /* PCA ch5 compare, capture or PWM high byte        */

    sfr EXIE      = 0xE8;   /* External interrupt enable                        */
    sfr CH        = 0xE9;   /* PCA main counter high byte                       */
    sfr MXAX      = 0xEA;   /* MOVX @Ri High address for A23~A16                */

    sfr B         = 0xF0;   /* B Working register                               */
    sfr CLSR      = 0xF2;   /* PCA Snapshot Register of CL RO                   */
    sfr CHSR      = 0xF3;   /* PCA Snapshot Register of CH RW                   */
    sfr I2CMSA    = 0xF4;   /* I2CM Slave Address                               */
    sfr I2CMCR    = 0xF5;   /* I2CM Control Register                            */
    sfr I2CMBUF   = 0xF6;   /* I2CM I/O Buffer                                  */
    sfr I2CMTP    = 0xF7;   /* I2CM Timer Period                                */

    sfr EXIP      = 0xF8;   /* External Interr. Priority                        */
    sfr MD0       = 0xF9;   /* MDU Data 0                                       */
    sfr MD1       = 0xFA;   /* MDU Data 1                                       */
    sfr MD2       = 0xFB;   /* MDU Data 2                                       */
    sfr MD3       = 0xFC;   /* MDU Data 3                                       */
    sfr MD4       = 0xFD;   /* MDU Data 4                                       */
    sfr MD5       = 0xFE;   /* MDU Data 5                                       */
    sfr ARCON     = 0xFF;   /* MDU Control                                      */



/*------------------------------------------------------------------------------
  BIT Register  
  ------------------------------------------------------------------------------*/

/*  P0    */
    sbit P0_7     = P0^7;
    sbit P0_6     = P0^6;
    sbit P0_5     = P0^5;
    sbit P0_4     = P0^4;
    sbit P0_3     = P0^3;
    sbit P0_2     = P0^2;
    sbit P0_1     = P0^1;
    sbit P0_0     = P0^0;

/*  P1    */
    sbit P1_7     = P1^7;
    sbit P1_6     = P1^6;
    sbit P1_5     = P1^5;
    sbit P1_4     = P1^4;
    sbit P1_3     = P1^3;
    sbit P1_2     = P1^2;
    sbit P1_1     = P1^1;
    sbit P1_0     = P1^0;

/*  P2    */
    sbit P2_7     = P2^7;
    sbit P2_6     = P2^6;
    sbit P2_5     = P2^5;
    sbit P2_4     = P2^4;
    sbit P2_3     = P2^3;
    sbit P2_2     = P2^2;
    sbit P2_1     = P2^1;
    sbit P2_0     = P2^0;

/*  TCON  */
    sbit PINT0EG  = TCON^0;     /* Pin Interrupt 0 Edge or Level Setting                                    */
    sbit PINT0F   = TCON^1;     /* Pin INT0 Interrupt Flag                                                  */
    sbit PINT1EG  = TCON^2;     /* Pin Interrupt 1 Edge or Level Setting                                    */
    sbit PINT1F   = TCON^3;     /* Pin INT1 Interrupt Flag                                                  */
    sbit TR0      = TCON^4;     /* Timer 0 Run Control                                                      */
    sbit TF0      = TCON^5;     /* Timer 0 Interrupt Flag                                                   */
    sbit TR1      = TCON^6;     /* Timer 1 Run Control                                                      */
    sbit TF1      = TCON^7;     /* Timer 1 Interrupt Flag                                                   */

/*  SCON0 */
    sbit RI       = SCON0^0;    /* Receive Interrupt Flag                                                   */
    sbit TI       = SCON0^1;    /* Transmit Interrupt Flag                                                  */
    sbit RB8      = SCON0^2;    /* The receive-value of 9th bit in 9-bit UART mode                          */
    sbit TB8      = SCON0^3;    /* The transmit-value of 9th bit in 9-bit UART mode                         */
    sbit REN      = SCON0^4;    /* Enable UART PMM switch back function                                     */
    sbit SM2      = SCON0^5;    /* Enable multiprocessor communication as a slave device.                   */
    sbit SM1      = SCON0^6;    /* UART Operation Mode bit 1                                                */
    sbit SM0      = SCON0^7;    /* UART Operation Mode bit 0                                                */

/*  IE    */
    sbit PINT0EN  = IE^0;       /* Pin PINT0.x Interrupt enable                                             */
    sbit ET0      = IE^1;       /* Timer 0 Interrupt enable                                                 */
    sbit PINT1EN  = IE^2;       /* Pin PINT1.x Interrupt enable                                             */
    sbit ET1      = IE^3;       /* Timer 1 Interrupt enable                                                 */
    sbit ES0      = IE^4;       /* UART0 Interrupt enable                                                   */
    sbit ET2      = IE^5;       /* Timer 2 Interrupt enable                                                 */
    sbit ES2      = IE^6;       /* LIN-capable 16550-like UART2 Interrupt enable                            */
    sbit EA       = IE^7;       /* Global Interrupt enable                                                  */

/*  EXIE  */
    sbit EI2CM    = EXIE^0;     /* I2C Master Interrupt enable                                              */
    sbit EINT2    = EXIE^1;     /* Low Voltage Detection Interrupt enable                                   */
    sbit EINT3    = EXIE^2;     /* Analog Comparator, Buzzer, Touch Key and Remote filter Interrupt enable  */
    sbit EINT4    = EXIE^3;     /* ADC Interrupt enable                                                     */
    sbit EWDI     = EXIE^4;     /* Watchdog Timer Interrupt enable                                          */
    sbit EINT6    = EXIE^5;     /* PCA and PWM Interrupt enable                                             */
    sbit EINT7    = EXIE^6;     /* SPI and I2C Slave Interrupt enable                                       */
    sbit EINT8    = EXIE^7;     /* Timer 3/4/5 Interrupt enable                                             */

/*  IP    */
    sbit PX0      = IP^0;       /* Pin Interrupt INT0 priority                                              */
    sbit PT0      = IP^1;       /* Timer 0 priority                                                         */
    sbit PX1      = IP^2;       /* Pin Interrupt INT1 priority                                              */
    sbit PT1      = IP^3;       /* Timer 1 priority                                                         */
    sbit PS0      = IP^4;       /* UART 0 priority                                                          */
    sbit PT2      = IP^5;       /* Timer 2 priority                                                         */
    sbit PS2      = IP^6;       /* LIN-capable 16550-like UART2 priority                                    */

/*  EXIP  */
    sbit EI2CMP   = EXIP^0;     /* I2C Master priority                                                      */
    sbit EINT2P   = EXIP^1;     /* INT2 Low Voltage Detection priority                                      */
    sbit EINT3P   = EXIP^2;     /* INT3 Analog Comparator, Buzzer, Touch Key and Remote filter priority     */
    sbit EINT4P   = EXIP^3;     /* INT4 ADC priority                                                        */
    sbit EWDIP    = EXIP^4;     /* Watchdog priority                                                        */
    sbit EINT6P   = EXIP^5;     /* INT6 PCA and PWM priority                                                */
    sbit EINT7P   = EXIP^6;     /* INT7 SPI and I2C Slave priority                                          */
    sbit EINT8P   = EXIP^7;     /* INT8 Timer 3/4/5 priority                                                */

/*  PSW   */
    sbit P        = PSW^0;      /* Parity Flag                                                              */
    sbit UD       = PSW^1;      /* User Defined                                                             */
    sbit OV       = PSW^2;      /* Overflow Flag                                                            */
    sbit RS0      = PSW^3;      /* Register Bank Select Flag 0                                              */
    sbit RS1      = PSW^4;      /* Register Bank Select Flag 1                                              */
    sbit FO       = PSW^5;      /* General Purpose                                                          */
    sbit AC       = PSW^6;      /* Auxiliary Carry Flag                                                     */
    sbit CY       = PSW^7;      /* Carry Flag                                                               */

/*  WDCON */
    sbit RWT      = WDCON^0;    /* Reset The Watchdog Timer                                                 */
    sbit EWT      = WDCON^1;    /* Watchdog Timer Reset Enable                                              */
    sbit WTRF     = WDCON^2;    /* WDT Reset Flag                                                           */
    sbit WDIF     = WDCON^3;    /* WDT Interrupt Flag                                                       */

/*  T2CON */
    sbit CPRL2    = T2CON^0;    /* Capture/Reload Select                                                    */
    sbit CT2      = T2CON^1;    /* Timer 2 Timer/Counter Mode Select                                        */
    sbit TR2      = T2CON^2;    /* Start/Stop Timer 2 Control                                               */
    sbit EXEN2    = T2CON^3;    /* T2EX Function Enable                                                     */
    sbit TCLK     = T2CON^4;    /* Transmit Clock Enable                                                    */
    sbit RCLK     = T2CON^5;    /* Receive Clock Enable                                                     */
    sbit EXF2     = T2CON^6;    /* T2EX Falling Edge Flag                                                   */
    sbit TF2      = T2CON^7;    /* Timer 2 Interrupt Flag                                                   */



#endif                      /*               __IS31CS8973_H__                   */