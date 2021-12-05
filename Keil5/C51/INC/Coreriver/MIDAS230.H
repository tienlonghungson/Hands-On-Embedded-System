/*-----------------------------------------------------------------------------
MIDAS230.H

Header file for CoreRiver GC230 device.
Copyright (c) 2011 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/


#ifndef __MIDAS230_H__
#define __MIDAS230_H__

sfr P0          = 0x80;          /* Port 0 Latch                             */
sfr SP          = 0x81;          /* Stack Pointer                            */
sfr DPL         = 0x82;          /* Data Pointer Low                         */
sfr DPH         = 0x83;          /* Data Pointer High                        */
sfr PCON        = 0x87;          /* Power Control                            */

sfr TCON        = 0x88;          /* Timer/Counter Control                    */
sfr TMOD        = 0x89;          /* Timer/Counter Mode                       */
sfr TL0         = 0x8A;          /* Timer/Counter 0 Low                      */
sfr TL1         = 0x8B;          /* Timer/Counter 1 Low                      */
sfr TH0         = 0x8C;          /* Timer/Counter 0 High                     */
sfr TH1         = 0x8D;          /* Timer/Counter 1 High                     */

sfr P1          = 0x90;          /* Port 1 Latch                             */
sfr EXIF        = 0x91;          /* External Interrupt Flag                  */
sfr RINGCON     = 0x95;          /* Internal Oscillator Frequency Tuning     */
sfr OSCBIAS     = 0x96;          /* Internal Oscillator Bias Current Tuning  */
sfr OSCREF      = 0x97;          /* Internal Oscillator Reference Tuning     */

sfr P2          = 0xA0;          /* Port 2 Latch                             */

sfr IE          = 0xA8;          /* Interrupt Enable                         */

sfr IP          = 0xB8;          /* Interrupt Priority                       */
sfr OSCIN       = 0xBE;          /* Internal Oscillator Control              */

sfr PMR         = 0xC4;          /* Power Management Control                 */
sfr STATUS      = 0xC5;          /* Crystal Status                           */
sfr LVDCFG      = 0xC6;          /* LVD Configuration                        */

sfr PSW         = 0xD0;          /* Program Status Word                      */
sfr P0TYPE      = 0xD4;          /* Port0 type control register              */
sfr P1TYPE      = 0xD5;          /* Port1 type control register              */
sfr P2TYPE      = 0xD6;          /* Port2 type control register              */

sfr WDCON       = 0xD8;          /* Watchdog Timer & Power Status            */
sfr PWMCON      = 0xD9;          /* PWM Control                              */
sfr PWMD        = 0xDA;          /* PWM Duty Data Register                   */

sfr ACC         = 0xE0;          /* Accumulator                              */
sfr ADCSELH     = 0xE1;          /* ADC High Channel Selection               */
sfr ADCSEL      = 0xE2;          /* ADC Channel Low and MUX selection        */
sfr ALTSEL      = 0xE3;          /* Alternative Function Control Register    */
sfr P0SEL       = 0xE4;          /* Port 0 Pull-up Control                   */
sfr P1SEL       = 0xE5;          /* Port 1 Pull-up Control                   */
sfr P2SEL       = 0xE6;          /* Port 2 Pull-up Control                   */

sfr ADCR        = 0xEE;          /* ADC Result High                          */
sfr ADCON       = 0xEF;          /* ADC Control & ADC Result Low             */

sfr B           = 0xF0;          /* B Register                               */
sfr P0DIR       = 0xF4;          /* Port 0 Input/Output Control              */
sfr P1DIR       = 0xF5;          /* Port 1 Input/Output Control              */
sfr P2DIR       = 0xF6;          /* Port 2 Input/Output Control              */

sfr IAPWEN      = 0xFC;          /* IAP Write Enable                         */
sfr IAPCON      = 0xFD;          /* IAP Control                              */
sfr IAPDAT      = 0xFE;          /* IAP Data                                 */


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

/* IE 0xA8 Interrupt Enable */
sbit EA       = IE^7;              /* Global interrupt enable                */
sbit EADC     = IE^6;              /* ADC interrupt enable                   */
sbit EPWM     = IE^5;              /* PWM interrupt enable                   */
sbit EWDT     = IE^4;              /* WDT interrupt enable                   */
sbit ET1      = IE^3;              /* Timer 1 interrupt enable               */
sbit EX1      = IE^2;              /* External interrupt 1 enable            */
sbit ET0      = IE^1;              /* Timer 0 interrupt enable               */
sbit EX0      = IE^0;              /* External interrupt 0 enable            */

/* IP 0xB8 Interrupt Priority */
                                   /* Bit 7 unused                           */
sbit PADC     = IP^6;              /* ADC interrupt priority                 */
sbit PPWM     = IP^5;              /* PWM interrupt priority                 */
sbit PWDT     = IP^4;              /* WDT interrupt priority                 */
sbit PT1      = IP^3;              /* Timer 1 interrupt priority             */
sbit PX1      = IP^2;              /* External interrupt 1 priority          */
sbit PT0      = IP^1;              /* Timer 0 interrup priority              */
sbit PX0      = IP^0;              /* External interrupt 0 priority          */

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
sbit WD1      = WDCON^7;           /* WDT mode selection                     */
sbit WD0      = WDCON^6;           /* WDT mode selection                     */
sbit WDM      = WDCON^5;           /* WDT mode selection                     */
                                   /* Bit 4 unused                           */
sbit WDIF     = WDCON^3;           /* Watchdog Timer interrupt flag          */
sbit WTRF     = WDCON^2;           /* Watchdog Timer reset flag              */
sbit EWT      = WDCON^1;           /* Watchdog Timer reset enable            */
sbit RWT      = WDCON^0;           /* Restart Watchdog timer                 */


#endif                           /* __MIDAS230_H__                           */