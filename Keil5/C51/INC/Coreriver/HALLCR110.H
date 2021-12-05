/*-----------------------------------------------------------------------------
HALLCR110.H

Header file for CoreRiver HallCore110 device.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __HALLCR110_H__
#define __HALLCR110_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr ITSEL       = 0x86;          /* Clock Selection                          */
sfr PCON        = 0x87;          /* Power Control                            */

sfr TCON        = 0x88;          /* Timer/Counter Control                    */
sfr TMOD        = 0x89;          /* Timer/Counter Mode                       */
sfr TL0         = 0x8A;          /* Timer/Counter 0 Low                      */
sfr TL1         = 0x8B;          /* Timer/Counter 1 Low                      */
sfr TH0         = 0x8C;          /* Timer/Counter 0 High                     */
sfr TH1         = 0x8D;          /* Timer/Counter 1 High                     */

sfr P1          = 0x90;          /* Port 1 Latch                             */
sfr EXIF        = 0x91;          /* External Interrupt Flag                  */
sfr CLKOFF      = 0x94;          /* Clock control                            */
sfr RINGCON     = 0x95;          /* Internal Ring Oscillator Tuning          */

sfr SCON        = 0x98;          /* UART0 Control                            */
sfr SBUF        = 0x99;          /* UART0 Data Buffer                        */

sfr P2          = 0xA0;          /* Port 2 Latch                             */

sfr IE          = 0xA8;          /* Interrupt Enable                         */

sfr I2CST0      = 0xB0;          /* I2C Unit 0 Status                        */
sfr I2CCON0     = 0xB3;          /* I2C Unit 0 Control                       */
sfr I2CCFG0     = 0xB4;          /* I2C Unit 0 Configuration                 */
sfr I2CSLA0     = 0xB5;          /* I2C Unit 0 Slave Address                 */
sfr I2CDAT0     = 0xB6;          /* I2C Unit 0 Data                          */
sfr I2CI2C0_CL  = 0xB7;          /* I2C Unit 0 SCL Clock Scaler              */

sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr OSCICN      = 0xBE;          /* Internal Ring Oscillator Control         */
sfr OSC2ICN     = 0xBF;          /* Internal Ring 2 Oscillator Control       */

sfr PMR         = 0xC4;          /* Power Management Control                 */
sfr STATUS      = 0xC5;          /* Status register                          */

sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr WDMOD       = 0xD1;          /* Watchdog Mode register                   */

sfr P0TYPE      = 0xD4;          /* Port0 Pull-Up control register           */
sfr P1TYPE      = 0xD5;          /* Port1 Pull-Up control register           */
sfr P2TYPE      = 0xD6;          /* Port2 Pull-Up control register           */

sfr WDCON       = 0xD8;          /* Watchdog Timer & Power Status            */
sfr ADCHSEL     = 0xDB;          /* ADC High Channel Selection Register      */
sfr PWMCON      = 0xDC;          /* PWM Control                              */
sfr PWMIF       = 0xDD;          /* PWM Interrup Flag                        */
sfr PWMD        = 0xDE;          /* PWM Duyt Data                            */

sfr ACC         = 0xE0;          /* Accumulator                              */
sfr ADCSELH     = 0xE1;          /* ADC Channel Selection High register      */
sfr ADCSEL      = 0xE2;          /* ADC High Channel Selection register      */
sfr ALTSEL      = 0xE3;          /* Alternative Function Control register    */
sfr P0SEL       = 0xE4;          /* Port 0 Pull-up Control                   */
sfr P1SEL       = 0xE5;          /* Port 1 Pull-up Control                   */
sfr P2SEL       = 0xE5;          /* Port 2 Pull-up Control                   */

sfr EIE         = 0xE8;          /* Extended Interrupt Enable                */
sfr ADCR        = 0xEE;          /* ADC Result High                          */
sfr ADCON       = 0xEF;          /* ADC Control & ADC Result Low             */

sfr B           = 0xF0;          /* B Register                               */
sfr P0DIR       = 0xF4;          /* Port 0 Input/Output Control              */
sfr P1DIR       = 0xF5;          /* Port 1 Input/Output Control              */
sfr P2DIR       = 0xF6;          /* Port 2 Input/Output Control              */

sfr EIP         = 0xF8;          /* Extended Interrupt Priority              */
sfr EECNTLD     = 0xF9;          /* EEPROM Erase/Program Time Count Loading  */
sfr EECNTL      = 0xFA;          /* EEPROM Erase/Program Time Count Low      */
sfr EECNTM      = 0xFB;          /* EEPROM Erase/Program Time Count Middle   */
sfr EECNTH      = 0xFC;          /* EEPROM Erase/Program Time Count High     */
sfr EEAEN       = 0xFF;          /* IAP Routine Access Enable Register       */


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
                                   /* Bit 6 unused                           */
sbit ET2      = IE^5;              /* Timer 2 Interrupt Enable               */
sbit ES       = IE^4;              /* UART0 Interrupt Enable                 */
sbit ET1      = IE^3;              /* Timer 1 Interrupt Enable               */
sbit EX1      = IE^2;              /* External Interrupt 1 Enable            */
sbit ET0      = IE^1;              /* Timer 0 Interrupt Enable               */
sbit EX0      = IE^0;              /* External Interrupt 0 Enable            */

/* IP 0xB8 Interrupt Priority */
                                   /* Bit 7 unused                           */
                                   /* Bit 6 unused                           */
sbit PT2      = IP^5;              /* Timer 2 Priority                       */
sbit PS       = IP^4;              /* UART0 Priority                         */
sbit PT1      = IP^3;              /* Timer 1 Priority                       */
sbit PX1      = IP^2;              /* External Interrupt 1 Priority          */
sbit PT0      = IP^1;              /* Timer 0 Priority                       */
sbit PX0      = IP^0;              /* External Interrupt 0 Priority          */

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
sbit WD1      = WDCON^7;           /* WDT WDT Clock Divide bit 1             */
sbit WD0      = WDCON^6;           /* WDT WDT Clock Divide bit 2             */
sbit EPFI     = WDCON^5;           /* Enable power fail interrupt            */
sbit PFI      = WDCON^4;           /* Power fail interrupt flag              */
sbit WDIF     = WDCON^3;           /* Watchdog Timer interrupt flag          */
sbit WTRF     = WDCON^2;           /* Watchdog Timer reset flag              */
sbit EWT      = WDCON^1;           /* Watchdog Timer reset enable            */
sbit RWT      = WDCON^0;           /* Restart Watchdog timer                 */

/* EIE 0xE8 Extended Interrupt Enable register */
                                   /* Bit 7 unused                           */
                                   /* Bit 6 unused                           */
sbit EPWM     = EIE^5;             /* Enable PWM interrupt                   */
sbit EWDT     = EIE^4;             /* Enable WDT interrupt                   */
                                   /* Bit 3 unused                           */
sbit EI2C0    = EIE^2;             /* Enable I2C 0 Interrupt                 */
sbit EX3      = EIE^1;             /* Enable external interrupt 3            */
sbit EX2      = EIE^0;             /* Enable external interrupt 2            */

/* EIP 0xF8 Extended interrupt priority */
                                   /* Bit 7 unused                           */
                                   /* Bit 6 unused                           */
sbit PPWM     = EIP^5;             /* PWM Interrupt priority                 */
sbit PWDT     = EIP^4;             /* WDT Interrupt priority                 */
                                   /* Bit 3 unused                           */
sbit PI2C0    = EIP^2;             /* I2C0 Interrupt priority                */
sbit PX3      = EIP^1;             /* External Interrupt 3 priority          */
sbit PX2      = EIP^0;             /* External Interrupt 2 priority          */


#endif                           /* __HALLCR110_H__                          */