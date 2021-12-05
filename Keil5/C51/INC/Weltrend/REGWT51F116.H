/* -------------------------------------------------------------------------
REGWT51F116.H

Header file for Weltrend WT51F104/WT51F108/WT51F116
-------------------------------------------------------------------------- */


#ifndef __REG_WT51F116_H__
#define __REG_WT51F116_H__


/* -------------------------------------------------------------------------
Byte register
-------------------------------------------------------------------------- */
sfr B         = 0xF0;     /* B Register                                    */
sfr ACC       = 0xE0;     /* Accumulator                                   */


/* SFR 0xD0 ~ 0xD7 */
sfr PSW       = 0xD0;     /* Program Status Word                           */


/* SFR 0xC0 ~ 0xCF */
sfr XICON     = 0xC0;     /* Interrupt Enable Register (INT2/INT3)         */
sfr T2CON     = 0xC8;     /* Timer 2 Control                               */
sfr RCAP2L    = 0xCA;     /* Compare/Reload/Capture Register, low byte     */
sfr RCAP2H    = 0xCB;     /* Compare/Reload/Capture Register, high byte    */
sfr TL2       = 0xCC;     /* Timer 2, low byte                             */
sfr TH2       = 0xCD;     /* Timer 2, high byte                            */


/* SFR 0xB8 ~ 0xBF */
sfr IP        = 0xB8;     /* Interrupt Priority Register 1                 */


/* SFR 0xA8 ~ 0xAF */
sfr IE        = 0xA8;     /* Interrupt Enable Register                     */


/* SFR 0x98 ~ 0x9F */
sfr SCON0     = 0x98;     /* Serial Port 0, Control Register               */
sfr SBUF0     = 0x99;     /* Serial Port 0, Data Buffer                    */
sfr rSBRG0H   = 0x9A;     /* Serial Baud rate Generator, high byte         */
sfr rSBRG0L   = 0x9B;     /* Serial Baud rate Generator, low byte          */


/* SFR 0x88 ~ 0x8F */
sfr TCON      = 0x88;     /* Timer 0/1 Counter Control                     */
sfr TMOD      = 0x89;     /* Timer 0/1 Mode Control                        */
sfr TL0       = 0x8A;     /* Timer 0, low byte                             */
sfr TL1       = 0x8B;     /* Timer 1, low byte                             */
sfr TH0       = 0x8C;     /* Timer 0, high byte                            */
sfr TH1       = 0x8D;     /* Timer 1, high byte                            */



/* SFR 0x80 ~ 0x87 */
sfr P0        = 0x80;     /* Port 0                                        */
sfr SP        = 0x81;     /* Stack Pointer                                 */
sfr DPL       = 0x82;     /* Data Pointer 0 Low Byte                       */
sfr DPH       = 0x83;     /* Data Pointer 0 High Byte                      */
sfr DPL1      = 0x84;     /* Data Pointer 1 Low Byte                       */
sfr DPH1      = 0x85;     /* Data Pointer 1 High Byte                      */
sfr DPS       = 0x86;     /* Data Pointer selection register               */
sfr PCON      = 0x87;     /* Power Control Register                        */



/* -------------------------------------------------------------------------
Bit register
-------------------------------------------------------------------------- */


/*  Port 0      */
sbit P07      = P0^7;     /* Port 0 bit 7, GPIOC3D or PWM3C                */
sbit P06      = P0^6;     /* Port 0 bit 6, GPIOC2D or PWM2C                */ 
sbit P05      = P0^5;     /* Port 0 bit 5, GPIOC1D or PWM1C                */ 
sbit P04      = P0^4;     /* Port 0 bit 4, GPIOC0D or PWM0C                */ 
sbit P03      = P0^3;     /* Port 0 bit 3, GPIOB4D, PWM1D, TX0A, ADC11, or IRQ11          */
sbit P02      = P0^2;     /* Port 0 bit 2, GPIOB5D, PWM1A, RX0A, ADC12, or IRQ12          */
sbit P01      = P0^1;     /* Port 0 bit 1, GPIOA4DH, T1, PWM0B, OSCO, ADC14, or IRQ14     */
sbit P00      = P0^0;     /* Port 0 bit 0, GPIOA5DH, ETMIA, PWM1B, OSCI, ADC15, or IRQ15  */


/*  TCON           */
sbit TF1      = TCON^7;      /*  Timer/Counter 1 overflow flag             */
sbit TR1      = TCON^6;      /*  Timer/Counter 1 enable bit                */
sbit TF0      = TCON^5;      /*  Timer/Counter 0 overflow flag             */
sbit TR0      = TCON^4;      /*  Timer/Counter 0 enable bit                */


/*  SCON           */
sbit SM0      = SCON0^7;     /*  UART0 mode selection                      */
sbit SM1      = SCON0^6;     /*  UART0 mode selection                      */
sbit SM2      = SCON0^5;     /*  Multi-processor communication enable      */
sbit REN      = SCON0^4;     /*  UART receive enable bit                   */
sbit TB8      = SCON0^3;     /*  The 9th transmit bit                      */
sbit RB8      = SCON0^2;     /*  Stop bit or 9th bit was received          */
sbit TI       = SCON0^1;     /*  Transmit interrup flag                    */
sbit RI       = SCON0^0;     /*  Receive interrup flag                     */


/*  IE             */
sbit EA       = IE^7;        /*  Enable/Disable interrupt system           */
sbit ES1      = IE^6;        /*  Enable UART 1 interrupt                   */
sbit ET2      = IE^5;        /*  Enable Timer/Counter 2 interrupt          */
sbit ES       = IE^4;        /*  Enable UART 0 interrupt                   */
sbit ET1      = IE^3;        /*  Enable Timer/Counter 1 interrupt          */
sbit EX1      = IE^2;        /*  Enable external interrupt 1               */
sbit ET0      = IE^1;        /*  Enable Timer/Counter 0 interrupt          */
sbit EX0      = IE^0;        /*  Enable external interrupt 0               */


/*  IP             */
sbit PS1      = IP^6;        /*  Priority of UART 1 interrupt              */
sbit PT2      = IP^5;        /*  Priority of Timer 2 / Counter 2 interrupt */
sbit PS       = IP^4;        /*  Priority of UART 0 interrupt              */
sbit PT1      = IP^3;        /*  Priority of Timer 1 / Counter 1 interrupt */
sbit PX1      = IP^2;        /*  Priority of external 1 interrupt          */
sbit PT0      = IP^1;        /*  Priority of Timer 0 / Counter 0 interrupt */
sbit PX0      = IP^0;        /*  Priority of external 0 interrupt          */


/*  T2CON          */
sbit TF2      = T2CON^7;     /*  Timer 2 overflow flag                     */
sbit EXF2     = T2CON^6;     /*  Timer 2 external flag                     */
sbit RCLK     = T2CON^5;     /*  UART receive clock bit                    */
sbit TCLK     = T2CON^4;     /*  UART transmit clock bit                   */
sbit EXEN2    = T2CON^3;     /*  Timer 2 external enable control bit       */
sbit TR2      = T2CON^2;     /*  Start/Stop control for timer 2            */
sbit CT2      = T2CON^1;     /*  Timer2 or Counter2 select bit             */
sbit CPRL2    = T2CON^0;     /*  Capture/Reload flag                       */


/*  PSW            */
sbit CY       = PSW^7;       /*  Carry flag                                */
sbit AC       = PSW^6;       /*  Auxiliary-Carry flag                      */
sbit F0       = PSW^5;       /*  General purpose flag 0                    */
sbit RS1      = PSW^4;       /*  Register Bank Select bit 1                */
sbit RS0      = PSW^3;       /*  Register Bank Select bit 0                */
sbit OV       = PSW^2;       /*  Overflow flag                             */
sbit F1       = PSW^2;       /*  General purpose flag 1                    */
sbit P        = PSW^0;       /*  Parity flag                               */


/*  XICON          */
sbit PX3      = XICON^7;     /*  Priority of external interrupt 3          */
sbit EX3      = XICON^6;     /*  Enable external interrupt 3               */
sbit IE3      = XICON^5;     /*  External interrupt 3 flag                 */
sbit PX2      = XICON^3;     /*  Priority of external interrupt 2          */
sbit EX2      = XICON^2;     /*  Enable external interrupt 2               */
sbit IE2      = XICON^1;     /*  External interrupt 2 flag                 */


#endif