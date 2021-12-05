/*-----------------------------------------------------------------------------
REG_IS208x.H

Header file for Microchip IS208x. [Based on datasheet revision 0.6]
-----------------------------------------------------------------------------*/

#ifndef __IS208x_H__
#define __IS208x_H__

/* Byte Registers */
sfr P0            = 0x80;        /* Port 0                                         */
sfr P1            = 0x90;        /* Port 1                                         */
sfr P2            = 0xA0;        /* Port 2                                         */
sfr P3            = 0xB0;        /* Port 3                                         */
sfr PSW           = 0xD0;        /* Program Status Word                            */
sfr ACC           = 0xE0;        /* Accumulator                                    */
sfr B             = 0xF0;        /* B Register                                     */
sfr SP            = 0x81;        /* Stack Pointer                                  */

sfr ACON          = 0x9D;        /* Addressing Mode Control register               */
sfr DPL           = 0x82;        /* Data Pointer 0 - Low byte                      */
sfr DPH           = 0x83;        /* Data Pointer 0 - High byte                     */
sfr DPL1          = 0x84;        /* Data Pointer 1 - Low byte                      */
sfr DPH1          = 0x85;        /* Data Pointer 1 - High byte                     */
sfr DPS           = 0x86;        /* Data pointer selection                         */
sfr DPX           = 0x93;        /* Data pointer 0 byte no 3                       */
sfr DPX1          = 0x95;        /* Data pointer 1 byte no 3                       */

sfr PCON          = 0x87;        /* Power Control                                  */
sfr TCON          = 0x88;        /* Timer Control                                  */
sfr TMOD          = 0x89;        /* Timer Mode                                     */
sfr TL0           = 0x8A;        /* Timer 0 - Low byte                             */
sfr TL1           = 0x8B;        /* Timer 1 - Low byte                             */
sfr TH0           = 0x8C;        /* Timer 0 - High byte                            */
sfr TH1           = 0x8D;        /* Timer 1 - High byte                            */

sfr IEN0          = 0xA8;        /* Interrupt Enable 0                             */
sfr IEN1          = 0xB8;        /* Interrupt Enable register 1                    */
sfr IEN2          = 0x9A;        /* Interrupt Enable register 2                    */
sfr IP0           = 0xA9;        /* Interrupt Priority 0                           */
sfr IP1           = 0xB9;        /* Interrupt Priority 1                           */
sfr IRCON         = 0xC0;        /* Interrupt control register                     */

sfr S0CON         = 0x98;        /* UART0 Control register                         */
sfr S0BUF         = 0x99;        /* UART0 Buffer                                   */
sfr S1CON         = 0x9B;        /* UART1 Control register                         */
sfr S1BUF         = 0x9C;        /* UART1 Buffer                                   */

sfr WDTREL        = 0x92;        /* Watchdog configuration                         */
sfr CKCON         = 0x8E;        /* Clock Control                                  */

sfr PCSTKCON      = 0x96;        /* Program Counter Stack control Register         */
sfr PCSTK         = 0x97;        /* Program Counter Stack Register                 */

sfr P0EN          = 0xA3;        /* Port 0 enable register                         */
sfr P1EN          = 0xA2;        /* Port 1 enable register                         */
sfr P2EN          = 0xA1;        /* Port 2 enable register                         */
sfr P3EN          = 0xAF;        /* Port 3 enable register                         */

sfr SYSCON        = 0xA4;        /* System control register                        */
sfr OCI_DEBUG     = 0xA6;        /* On Chip Instrumentation debug register         */
sfr P6            = 0xA7;        /* MEMADDR [15:8]                                 */

sfr PDCTL         = 0xB5;        /* Power Down control Register                    */
sfr PDCTL2        = 0xBC;        /* Power Down control Register 2                  */
sfr PDCRELL       = 0xB1;        /* Power Down Control Reload Register low byte    */
sfr PDCRELH       = 0xB2;        /* Power Down Control Reload Register high byte   */
sfr PDCRDL        = 0xB3;        /* Power Down Read Out Register low byte          */
sfr PDCRDH        = 0xB4;        /* Power Down Read Out Register high byte         */

sfr S0RELL        = 0xAA;        /* Serial Interface 0 Reload Register low byte    */
sfr S0RELH        = 0xBA;        /* Serial Interface 0 Reload Register high byte   */
sfr S1RELL        = 0x94;        /* Serial Interface 1 Reload Register low byte    */
sfr S1RELH        = 0xBB;        /* Serial Interface 1 Reload Register high byte   */

sfr CCEN          = 0xC1;        /* Capture\Compare enable register                */
sfr CCL1          = 0xC2;        /* Capture\Compare register 1 low byte            */
sfr CCH1          = 0xC3;        /* Capture\Compare register 1 high byte           */
sfr CCL2          = 0xC4;        /* Capture\Compare register 2 low byte            */
sfr CCH2          = 0xC5;        /* Capture\Compare register 2 high byte           */
sfr CCL3          = 0xC6;        /* Capture\Compare register 3 low byte            */
sfr CCH3          = 0xC7;        /* Capture\Compare register 3 high byte           */

sfr T2CON         = 0xC8;        /* Timer 2 Capture\Compare control register       */
sfr CRCL          = 0xCA;        /* Capture\Compare reload register low byte       */
sfr CRCH          = 0xCB;        /* Capture\Compare reload register high byte      */
sfr TL2           = 0xCC;        /* Timer 2 low byte                               */
sfr TH2           = 0xCD;        /* Timer 2 high byte                              */

sfr HWJMP_PTRL    = 0xD1;        /* Hardware jump return address low byte          */
sfr HWJMP_PTRH    = 0xD2;        /* Hardware jump return address high byte         */
sfr HWJUMP_EN     = 0xD3;        /* Hardware jump enable register                  */
sfr HWJMP_PTRX    = 0xD4;        /* Hardware jump return address byte no 3         */

sfr WDCON         = 0xD8;        /* Baudrate selection                             */
sfr P8EN          = 0xD9;        /* Port 8 enable                                  */
sfr P8            = 0xDA;        /* Port 8                                         */

sfr MD0           = 0xE9;        /* Multiply\Divide Operand\Result register 0      */
sfr MD1           = 0xEA;        /* Multiply\Divide Operand\Result register 1      */
sfr MD2           = 0xEB;        /* Multiply\Divide Operand\Result register 2      */
sfr MD3           = 0xEC;        /* Multiply\Divide Operand\Result register 3      */
sfr MD4           = 0xED;        /* Multiply\Divide Operand\Result register 4      */
sfr MD5           = 0xEE;        /* Multiply\Divide Operand\Result register 5      */
sfr ARCON         = 0xEF;        /* Arithmetic Control register                    */


/*  BIT Registers  */
/*  P0 - 0x80 */
sbit P0_7         = P0^7;
sbit P0_6         = P0^6;
sbit P0_5         = P0^5;
sbit P0_4         = P0^4;
sbit P0_3         = P0^3;
sbit P0_2         = P0^2;
sbit P0_1         = P0^1;
sbit P0_0         = P0^0;


/*  P1 - 0x90 */
sbit P1_7         = P1^7;
sbit P1_6         = P1^6;
sbit P1_5         = P1^5;
sbit P1_4         = P1^4;
sbit P1_3         = P1^3;
sbit P1_2         = P1^2;
sbit P1_1         = P1^1;
sbit P1_0         = P1^0;


/*  P2 - 0xA0 */
sbit P2_7         = P2^7;
sbit P2_6         = P2^6;
sbit P2_5         = P2^5;
sbit P2_4         = P2^4;
sbit P2_3         = P2^3;
sbit P2_2         = P2^2;
sbit P2_1         = P2^1;
sbit P2_0         = P2^0;


/*  P3 - 0xB0 */
sbit P3_7         = P3^7;
sbit P3_6         = P3^6;
sbit P3_5         = P3^5;
sbit P3_4         = P3^4;
sbit P3_3         = P3^3;
sbit P3_2         = P3^2;
sbit P3_1         = P3^1;
sbit P3_0         = P3^0;


/*  PSW  - 0xD0 */
sbit CARRYF       = PSW^7;       /* Carry flag                                     */
sbit AUXCF        = PSW^6;       /* Auxiliary flag                                 */

sbit RBANKSEL1    = PSW^4;       /* Register bank location bits                    */
sbit RBANKSEL0    = PSW^3;       /* Register bank location bits                    */
sbit OVFW         = PSW^2;       /* Overflow flag                                  */

sbit PARITY       = PSW^0;       /* CPU Parity flag                                */


/*  WDCON - 0xD8 */
sbit S0BDSEL      = WDCON^7;      /* Serial Port 0 Baud Rate select bit            */


/*  TCON  - 0x88 */
sbit TF1           = TCON^7;       /* Timer/Counter 1 Overflow Flag bit             */
sbit TR1           = TCON^6;       /* Timer/Counter 1 Run Control bit               */
sbit TF0           = TCON^5;       /* Timer/Counter 0 Overflow Flag bit             */
sbit TR0           = TCON^4;       /* Timer/Counter 0 Run Control bit               */
sbit IE1           = TCON^3;       /* Interrupt 1 Edge Flag bit			            */
sbit IT1           = TCON^2;       /* Interrupt 1 Type Control bit	                */
sbit IE0           = TCON^1;       /* Interrupt 0 Edge Flag bit			            */
sbit IT0           = TCON^0;       /* Interrupt 0 Type Control bit	                */


/*  T2CON  - 0xC8 */
sbit T2PS         = T2CON^7;      /* Timer 2\CC Prescaler Select bit                */
sbit I3FR         = T2CON^6;      /* INT3 Active Edge Select bit                    */
sbit I2FR         = T2CON^5;      /* INT2 Active Edge Select bit                    */
sbit T2RMODE1     = T2CON^4;      /* Timer 2\CC Reload Mode bit 1                   */
sbit T2RMODE0     = T2CON^3;      /* Timer 2\CC Reload Mode bit 0                   */
sbit T2CM         = T2CON^2;      /* Timer 2\CC Compare Mode Select bit             */
sbit T2INSEL1     = T2CON^1;      /* Timer 2\CC Input selection bit 1               */
sbit T2INSEL0     = T2CON^0;      /* Timer 2\CC Input selection bit 0               */


/*  S0CON  - 0x98 */
sbit S0MODE1      = S0CON^7;      /* Serial Interface 0 Mode bit 1                  */
sbit S0MODE0      = S0CON^6;      /* Serial Interface 0 Mode bit 0                  */
sbit S0MPEN       = S0CON^5;      /* Serial Interface 0 Multi-Processor Enable      */
sbit S0RXEN       = S0CON^4;      /* Serial Interface 0 RX Enable                   */
sbit S0TX8        = S0CON^3;      /* Serial Interface 0 9th TX bit                  */
sbit S0RX8        = S0CON^2;      /* Serial Interface 0 9th RX bit                  */
sbit S0TXIF       = S0CON^1;      /* Serial Interface 0 TX Interrupt Flag           */
sbit S0RXIF       = S0CON^0;      /* Serial Interface 0 RX Interrupt Flag           */


/*  IEN0  - 0xA8 */
sbit IRQEN        = IEN0^7;       /* Interrupt Enable                               */
sbit WDT          = IEN0^6;       /* Watchdog Timer Refresh Flag                    */
sbit T2OVIEN      = IEN0^5;       /* Timer 2 Overflow Interrupt Enable              */
sbit S0IEN        = IEN0^4;       /* Serial Interface 0 Interrupt Enable            */
sbit T1OVIEN      = IEN0^3;       /* Timer 1 Overflow Interrupt Enable              */
sbit EX1IEN       = IEN0^2;       /* External Interrupt 1 Interrupt Enable          */
sbit T0OVIEN      = IEN0^1;       /* Timer 0 Overflow Interrupt Enable              */
sbit EX0IEN       = IEN0^0;       /* External Interrupt 0 Interrupt Enable          */


/*  IEN1  - 0xB8 */
sbit T2ERLIEN     = IEN1^7;       /* Timer 2 Reload Interrupt Enable                */
sbit SWDT         = IEN1^6;       /* Watchdog Timer Start/Refresh Flag              */
sbit INT6IEN      = IEN1^5;       /* External Interrupt 6 Interrupt Enable          */
sbit INT5IEN      = IEN1^4;       /* External Interrupt 5 Interrupt Enable          */
sbit INT4IEN      = IEN1^3;       /* External Interrupt 4 Interrupt Enable          */
sbit INT3IEN      = IEN1^2;       /* External Interrupt 3 Interrupt Enable          */
sbit INT2IEN      = IEN1^1;       /* External Interrupt 2 Interrupt Enable          */
sbit EADCIEN      = IEN1^0;       /* ADC Interrupt Enable bit                       */


/*  IRCON  - 0xC0 */
sbit T2ERLF       = IRCON^7;      /* Counter\Timer 2 Reload flag                    */
sbit T2OVF        = IRCON^6;      /* Counter\Timer 2 Overflow flag                  */
sbit INT6F        = IRCON^5;      /* External Interrupt 6 Edge Flag                 */
sbit INT5F        = IRCON^4;      /* External Interrupt 5 Edge Flag                 */
sbit INT4F        = IRCON^3;      /* External Interrupt 4 Edge Flag                 */
sbit INT3F        = IRCON^2;      /* External Interrupt 3 Edge Flag                 */
sbit INT2F        = IRCON^1;      /* External Interrupt 2 Edge Flag                 */
sbit IADC         = IRCON^0;      /* ADC Interrupt Edge Flag                        */


/*  ACC  - 0xE0 */
sbit ACC7         = ACC^7;        /* Accumulator                                    */
sbit ACC6         = ACC^6;        /* Accumulator                                    */
sbit ACC5         = ACC^5;        /* Accumulator                                    */
sbit ACC4         = ACC^4;        /* Accumulator                                    */
sbit ACC3         = ACC^3;        /* Accumulator                                    */
sbit ACC2         = ACC^2;        /* Accumulator                                    */
sbit ACC1         = ACC^1;        /* Accumulator                                    */
sbit ACC0         = ACC^0;        /* Accumulator                                    */


/*  B  - 0xF0 */
sbit B7           = B^7;          /* Scratch Pad                                    */
sbit B6           = B^6;          /* Scratch Pad                                    */
sbit B5           = B^5;          /* Scratch Pad                                    */
sbit B4           = B^4;          /* Scratch Pad                                    */
sbit B3           = B^3;          /* Scratch Pad                                    */
sbit B2           = B^2;          /* Scratch Pad                                    */
sbit B1           = B^1;          /* Scratch Pad                                    */
sbit B0           = B^0;          /* Scratch Pad                                    */


#endif
