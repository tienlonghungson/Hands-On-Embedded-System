/*-----------------------------------------------------------------------------
  REG71M6531F.H

Header file for MAXIMs 71M6531D/31F/32D and 71M6532F devices.
Copyright (c) 2012 ARM Ltd and ARM Germany GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REG71M6531F_H__
#define __REG71M6531F_H__

sfr P0          = 0x80;            /* Port 0                                 */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL         = 0x82;            /* Data Pointer Low 0                     */
sfr DPH         = 0x83;            /* Data Pointer High 0                    */
sfr DPL1        = 0x84;            /* Data Pointer Low 1                     */
sfr DPH1        = 0x85;            /* Data Pointer High 1                    */
sfr PCON        = 0x87;            /* UART Speed Control                     */
sfr TCON        = 0x88;            /* Timer/Counter Control                  */
sfr TMOD        = 0x89;            /* Timer Mode Control                     */
sfr TL0         = 0x8A;            /* Timer 0, low byte                      */
sfr TL1         = 0x8B;            /* Timer 1, high byte                     */
sfr TH0         = 0x8C;            /* Timer 0, low byte                      */
sfr TH1         = 0x8D;            /* Timer 1, high byte                     */
sfr CKCON       = 0x8E;            /* Clock Control (Stretch=1)              */
sfr P1          = 0x90;            /* Port 1                                 */
sfr DIR1        = 0x91;            /*   */
sfr DPS         = 0x92;            /* Data Pointer select Register           */
sfr ERASE       = 0x94;            /* Flash erase                            */
sfr S0CON       = 0x98;            /* Serial Port 0, Control Register        */
sfr S0BUF       = 0x99;            /* Serial Port 0, Data Buffer             */
sfr IEN2        = 0x9A;            /* Interrupt Enable Register 2            */
sfr S1CON       = 0x9B;            /* Serial Port 1, Control Register        */
sfr S1BUF       = 0x9C;            /* Serial Port 1, Data Buffer             */
sfr S1RELL      = 0x9D;            /* Serial Port 1, Reload Reg. , low byte  */
sfr EEDATA      = 0x9E;            /* Serial EEPROM interface data           */
sfr EECTRL      = 0x9F;            /* Serial EEPROM interface control        */
sfr P2          = 0xA0;            /* Port 2                                 */
sfr DIR2        = 0xA1;            /*   */
sfr DIR0        = 0xA2;            /*   */
sfr IEN0        = 0xA8;            /* Interrupt Enable Register 0            */
sfr IP0         = 0xA9;            /* Interrupt Priority Register 0          */
sfr S0RELL      = 0xAA;            /* Serial Port 0, Reload Reg.,  low byte  */
sfr P3          = 0xB0;            /* Port 3                                 */
sfr FLSHCTL     = 0xB2;            /* Flash control                          */
sfr FL_BANK     = 0xB6;            /**/
sfr PGADR       = 0xB7;            /* Flash page erase address               */
sfr IEN1        = 0xB8;            /* Interrupt Enable Register 1            */
sfr IP1         = 0xB9;            /* Interrupt Priority Register 1          */
sfr S0RELH      = 0xBA;            /* Serial Port 0, Reload Reg., high byte  */
sfr S1RELH      = 0xBB;            /* Serial Port 1, Reload Reg., high byte  */
sfr PDATA       = 0xBF;            /* High address byte for MOVX@Ri (USR2)   */
sfr IRCON       = 0xC0;            /* Interrupt Request Control Register     */
sfr T2CON       = 0xC8;            /* Polarity for INT2 and INT3             */
sfr PSW         = 0xD0;            /* Program Status Word                    */
sfr WDCON       = 0xD8;            /* Baud Rate Control Register             */
sfr A           = 0xE0;            /* Accumulator                            */
sfr IFLAGS      = 0xE8;            /*   */
sfr B           = 0xF0;            /* B Register                             */
sfr INTBITS     = 0xF8;            /*   */


/* Bit Definitions */
/* TCON 0x88 */
sbit TF1      = TCON^7;            /* Timer 1 Overflow Flag                  */
sbit TR1      = TCON^6;            /* Timer 1 On/Off Control                 */
sbit TF0      = TCON^5;            /* Timer 0 Overflow Flag                  */
sbit TR0      = TCON^4;            /* Timer 0 On/Off Control                 */
sbit IE1      = TCON^3;            /* Ext. Interrupt 1 Edge Flag             */
sbit IT1      = TCON^2;            /* Ext. Interrupt 1 Type                  */
sbit IE0      = TCON^1;            /* Ext. Interrupt 0 Edge Flag             */
sbit IT0      = TCON^0;            /* Ext. Interrupt 0 Type                  */

/* S0CON 0x98 */
sbit SM0      = S0CON^7;           /* UART0 Mode Bit0                        */
sbit SM1      = S0CON^6;           /* UART0 Mode Bit1                        */
sbit SM20     = S0CON^5;           /* Enable inter-processor communication   */
sbit REN0     = S0CON^4;           /* UART0 RX Enable                        */
sbit TB80     = S0CON^3;           /* UART0 TX 9th data bit;                 */
sbit RB80     = S0CON^2;           /* UART0 RX 9th data bit or stop bit.     */
sbit TI0      = S0CON^1;           /* UART0 TX Interrupt Flag                */
sbit RI0      = S0CON^0;           /* UART0 RX Interrupt Flag                */


/* IEN0 0xA8 */
sbit EAL      = IEN0^7;            /* Global Interrupt Enable                */
sbit WDT      = IEN0^6;            /* Not used for interrupt control         */
                                   /* Not used                               */
sbit ES0      = IEN0^4;            /* UART0 Interrupt Enable                 */
sbit ET1      = IEN0^3;            /* Timer 1 Interrupt Enable               */
sbit EX1      = IEN0^2;            /* External Interrupt 1 Enable            */
sbit ET0      = IEN0^1;            /* Timer 0 Interrupt Enable               */
sbit EX0      = IEN0^0;            /* External Interrupt 0 Enable            */

/* IEN1 0xB8 */
                                   /* Not used                               */
                                   /* Not used                               */
sbit EX6      = IEN1^5;            /* External Int. 6 Enable.                */
sbit EX5      = IEN1^4;            /* External Int. 5 Enable. EEPROM or SPI  */
sbit EX4      = IEN1^3;            /* External Int. 4 Enable. VSTAT          */
sbit EX3      = IEN1^2;            /* External Int. 3 Enable. CE_BUSY        */
sbit EX2      = IEN1^1;            /* External Int. 2 Enable. XPULSE, etc.   */
                                   /* Not used                               */

/* IRCON 0xC0 */
                                   /* Not used                               */
                                   /* Not used                               */
sbit IEX6     = IRCON^5;           /* External Int. 6 request.               */
sbit IEX5     = IRCON^4;           /* External Int. 5 request. EEPROM or SPI */
sbit IEX4     = IRCON^3;           /* External Int. 4 request. VSTAT         */
sbit IEX3     = IRCON^2;           /* External Int. 3 request. CE_BUSY       */
sbit IEX2     = IRCON^1;           /* External Int. 2 request. XPULSE, etc.  */
                                   /* Not used                               */

/* T2C0N 0xC8 */
                                   /* Not used                               */
sbit T3FR     = T2CON^6;           /* Polarity control for ex.int. 3         */
sbit T2FR     = T2CON^5;           /* Polarity control for ex.int. 2         */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */

/* PSW 0xD0 */
sbit CY       = PSW^7;             /* Carry Flag                             */
sbit AC       = PSW^6;             /* Auxiliary Carry Flag                   */
sbit F0       = PSW^5;             /* User Flag 0                            */
sbit RS1      = PSW^4;             /* Register Bank Select 1                 */
sbit RS0      = PSW^3;             /* Register Bank Select 0                 */
sbit OV       = PSW^2;             /* Overflow Flag                          */
                                   /* Not used                               */
sbit P        = PSW^0;             /* Accumulator Parity Flag                */

/* WDC0N 0xD8 */
sbit UBRCFG   = WDCON^7;           /* UART0/1 baud rate configuration.       */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */
                                   /* Not used                               */

/* IFLAGS 0xE8 */
sbit PLL_FAIL  = IFLAGS^7;         /* PLL_FALL Interrupt Flag                */
sbit PLL_RISE  = IFLAGS^6;         /* PLL_RISE Interrupt Flag                */
sbit IE_WAKE   = IFLAGS^5;         /* MPU was awakened by the autowake timer */
sbit IE_PB     = IFLAGS^4;         /* Wake-up push button was pressed.       */
sbit IE_FWCOL1 = IFLAGS^3;         /* During Flash write CE starts code pass */
sbit IE_FWCOL0 = IFLAGS^2;         /* Flash write attempt & CE was busy      */
sbit IE_RTC    = IFLAGS^1;         /* This flag monitors the RTC_1SEC Int.   */
sbit IE_XFER   = IFLAGS^0;         /* This flag monitors the XFER_BUSY Int.  */


/* INTBITS 0xF8 */
sbit WD_RST    = INTBITS^7;        /* WD timer bit \ WDT reset bit.          */
sbit INT6      = INTBITS^6;        /*   */
sbit INT5      = INTBITS^5;        /*   */
sbit INT4      = INTBITS^4;        /*   */
sbit INT3      = INTBITS^3;        /*   */
sbit INT2      = INTBITS^2;        /*   */
sbit INT1      = INTBITS^1;        /*   */
sbit INT0      = INTBITS^4;        /*   */


/* MPU Port 0 0x80 */
sbit DIO_07       = P0^7;          /*              */
sbit DIO_06       = P0^6;          /*              */
sbit DIO_05       = P0^5;          /*              */
sbit DIO_04       = P0^4;          /*              */
sbit DIO_03       = P0^3;          /*              */
sbit DIO_02       = P0^2;          /*              */
sbit DIO_01       = P0^1;          /*              */
sbit PB           = P0^0;          /* DIO_00 only for 71M6531x               */

/* MPU Port 1 0x90 */
sbit DIO_15       = P1^7;          /* DIO_15 only for 71M6532x               */
sbit DIO_14       = P1^6;          /* DIO_14 only for 71M6532x               */
sbit DIO_13       = P1^5;          /* DIO_13 only for 71M6532x               */
sbit DIO_12       = P1^4;          /* DIO_12 only for 71M6532x               */
sbit DIO_11       = P1^3;          /* DIO_11 only for 71M6532x               */
sbit DIO_10       = P1^2;          /* DIO_10 only for 71M6532x               */
sbit DIO_09       = P1^1;          /*              */
sbit DIO_08       = P1^0;          /* DIO_08 only for 71M6532x               */

/* MPU Port 2 0xA0 */
sbit DIO_23       = P2^7;          /* DIO_23 only for 71M6532x               */
sbit DIO_22       = P2^6;          /* DIO_22 only for 71M6532x               */
sbit DIO_21       = P2^5;          /* DIO_21 only for 71M6532x               */
sbit DIO_20       = P2^4;          /* DIO_20 only for 71M6532x               */
sbit DIO_19       = P2^3;          /* DIO_19 only for 71M6532x               */
sbit DIO_18       = P2^2;          /* DIO_18 only for 71M6532x               */
sbit DIO_17       = P2^1;          /*              */
sbit DIO_16       = P2^0;          /* DIO_16 only for 71M6532x               */

/* MPU Port 3 0xB0 */
                                   /* Reserved             */
sbit DIO_30       = P2^6;          /* DIO_30 only for 71M6531x               */
sbit DIO_29       = P2^5;          /*              */
sbit DIO_28       = P2^4;          /* DIO_28 only for 71M6531x               */
sbit DIO_27       = P2^3;          /* DIO_27 only for 71M6531x               */
sbit DIO_26       = P2^2;          /* DIO_26 only for 71M6531x               */
sbit DIO_25       = P2^1;          /* DIO_25 only for 71M6531x               */
sbit DIO_24       = P2^0;          /* DIO_24 only for 71M6531x               */


#endif                                 /* #define __REG71M6531F_H__          */
