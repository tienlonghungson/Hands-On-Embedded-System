/**************************************************************************
* File:    VRS51L3074_Keil.h
* Version: 2.1
* Target:  Keil µVision3 C51 compiler
* Date:    1/19/2007 
***************************************************************************
*
* This file provides all of the SFR definitions described in the device
* datsheet.
*             
* DO NOT ACCESS REGISTER VALUES NOT ON THIS LIST
* Make sure that the page selected contains the SFR being accessed
*                 
* Copyright (C) 2007 Ramtron International Corporation
*
* µVision3 Copyright (c) Keil Elektronik GmbH / Keil Software, Inc.
* 1995 - 2005
**************************************************************************/

#ifndef __VRS51L3074_KEIL_H__
#define __VRS51L3074_KEIL_H__

// SFRs that can be accessed on either page

sfr P0             = 0x80;     // Port 0                                                                    
sfr SP             = 0x81;     // Stack pointer                                                             
sfr DPL0           = 0x82;     // Data Pointer 0 lower byte                                                 
sfr DPH0           = 0x83;     // Data Pointer 0 upper byte                                                 
sfr DPL1           = 0x84;     // Data Pointer 1 lower byte                                                 
sfr DPH1           = 0x85;     // Data Pointer 1 upper byte                                                 
sfr DPS            = 0x86;     // Data Pointer select                                                       
sfr PCON           = 0x87;     // Power control                                                             
sfr INTEN1         = 0x88;     // Interrupt enable 1                                                        
sfr T0T1CFG        = 0x89;     // Timer 0 and Timer 1 configuration                                         
sfr TL0            = 0x8A;     // Timer 0 lower byte                                                        
sfr TH0            = 0x8B;     // Timer 0 upper byte                                                        
sfr TL1            = 0x8C;     // Timer 1 lower byte                                                        
sfr TH1            = 0x8D;     // Timer 1 upper byte                                                        
sfr TL2            = 0x8E;     // Timer 2 lower byte                                                        
sfr TH2            = 0x8F;     // Timer 2 upper byte                                                        
sfr P1             = 0x90;     // Port 1                                                                    
sfr WDTCFG         = 0x91;     // Watchdog timer configuration                                              
sfr RCAP0L         = 0x92;     // Reload / Capture for Timer 0: lower byte                                  
sfr RCAP0H         = 0x93;     // Reload / Capture for Timer 0: upper byte                                  
sfr RCAP1L         = 0x94;     // Reload / Capture for Timer 1: lower byte                                  
sfr RCAP1H         = 0x95;     // Reload / Capture for Timer 1: upper byte                                  
sfr RCAP2L         = 0x96;     // Reload / Capture for Timer 2: lower byte                                  
sfr RCAP2H         = 0x97;     // Reload / Capture for Timer 2: upper byte                                  
sfr P5             = 0x98;     // Port 5                                                                    
sfr T0T1CLKCFG     = 0x99;     // Timer 0 and Timer 1 input clock configurations                            
sfr T0CON          = 0x9A;     // Timer 0 configuration register                                            
sfr T1CON          = 0x9B;     // Timer 1 configuration register                                            
sfr T2CON          = 0x9C;     // Timer 2 configuration register                                            
sfr T2CLKCFG       = 0x9D;     // Timer 2 input clock configuration                                         

sfr P2             = 0xA0;     // Port 2                                                                    

sfr INTEN2         = 0xA8;     // Interrupt enable 2                                                        

sfr P3             = 0xB0;     // Port 3                                                                    

sfr IPINFLAG1      = 0xB8;     // Interrupt pin flags 1                                                     
sfr PORTCHG        = 0xB9;     // Interrupt port change                                                     

sfr P4             = 0xC0;     // Port 4                                                                    

sfr P6             = 0xC8;     // Port 6                                                                    

sfr PSW            = 0xD0;     // Program Status Word                                                       

sfr IPININV1       = 0xD6;     // Interrupt pin inversion 1                                                 
sfr IPININV2       = 0xD7;     // Interrupt pin inversion 2                                                 
sfr IPINFLAG2      = 0xD8;     // Interrupt pin flags 2                                                     
sfr XMEMCTRL       = 0xD9;     // Off-chip external memory control                                          

sfr ACC            = 0xE0;     // Accumulator                                                               
sfr DEVIOMAP       = 0xE1;     // Device input/output mapping                                               
sfr INTPRI1        = 0xE2;     // Interrupt priority configuration 1                                        
sfr INTPRI2        = 0xE3;     // Interrupt priority configuration 2                                        
sfr INTSRC1        = 0xE4;     // Interrupt source configuration 1                                          
sfr INTSRC2        = 0xE5;     // Interrupt source configuration 2                                          
sfr IPINSENS1      = 0xE6;     // Interrupt pin sensitivity configuration 1                                   
sfr IPINSENS2      = 0xE7;     // Interrupt pin sensitivity configuration 2                                   
sfr GENINTEN       = 0xE8;     // General interrupt control                                                 
sfr FPICONFIG      = 0xE9;     // Flash programming interface configuration                                 
sfr FPIADDRL       = 0xEA;     // Flash programming address lower byte                                      
sfr FPIADDRH       = 0xEB;     // Flash programming address upper byte                                      
sfr FPIDATAL       = 0xEC;     // Flash programming data lower byte                                         
sfr FPIDATAH       = 0xED;     // Flash programming data upper byte                                         
sfr FPICLKSPD      = 0xEE;     // Flash programming clock speed                                             

sfr B              = 0xF0;     // B                                                                         
sfr MPAGE          = 0xF1;     // External memory page select                                               
sfr DEVCLKCFG1     = 0xF2;     // Clock configuration 1                                                     
sfr DEVCLKCFG2     = 0xF3;     // Clock configuration 2                                                     
sfr PERIPHEN1      = 0xF4;     // Perhipheral enable 1                                                      
sfr PERIPHEN2      = 0xF5;     // Perhipheral enable 2                                                      
sfr DEVMEMCFG      = 0xF6;     // Memory control                                                            
sfr PORTINEN       = 0xF7;     // Port input logic enable                                                   
sfr USERFLAGS      = 0xF8;     // Additional software flags                                                 
sfr P0PINCFG       = 0xF9;     // Port 0 pin configuration                                                  
sfr P1PINCFG       = 0xFA;     // Port 1 pin configuration                                                  
sfr P2PINCFG       = 0xFB;     // Port 2 pin configuration                                                  
sfr P3PINCFG       = 0xFC;     // Port 3 pin configuration                                                  
sfr P4PINCFG       = 0xFD;     // Port 4 pin configuration                                                  
sfr P5PINCFG       = 0xFE;     // Port 5 pin configuration                                                  
sfr P6PINCFG       = 0xFF;     // Port 6 pin configuration                                                  

// SFRs that can be only be accessed on PAGE 0
// When DEVMEMCFG bit 0 = 0

sfr PWC0CFG        = 0x9E;     // Pulse Width Counter 0 configuration                                       
sfr PWC1CFG        = 0x9F;     // Pulse Width Counter 1 configuration                                       

sfr UART0INT       = 0xA1;     // UART 0 Interrupt                                                          
sfr UART0CFG       = 0xA2;     // UART 0 Configure                                                          
sfr UART0BUF       = 0xA3;     // UART 0 buffer                                                             
sfr UART0BRL       = 0xA4;     // UART 0 baud rate lower byte                                               
sfr UART0BRH       = 0xA5;     // UART 0 baud rate upper byte                                               
sfr UART0EXT       = 0xA6;     // UART 0 extentions                                                         

sfr PWMCFG         = 0xA9;     // Pulse Width Modulator configurations                                      
sfr PWMEN          = 0xAA;     // Pulse Width Modulator enable                                              
sfr PWMLDPOL       = 0xAB;     // / Pulse Width Modulator polarity                                          
sfr PWMDATA        = 0xAC;     // Pulse Width Modulator data                                                
sfr PWMTMREN       = 0xAD;     // Pulse Width Modulator timer enable                                        
sfr PWMTMRF        = 0xAE;     // Pulse Width Modulator timer overflow flags                                
sfr PWMCLKCFG      = 0xAF;     // Pulse Width Modulator clock config                                        

sfr UART1INT       = 0xB1;     // UART 1 Interrupt                                                          
sfr UART1CFG       = 0xB2;     // UART 1 Configure                                                          
sfr UART1BUF       = 0xB3;     // UART 1 buffer                                                             
sfr UART1BRL       = 0xB4;     // UART 1 baud rate lower byte                                               
sfr UART1BRH       = 0xB5;     // UART 1 baud rate upper byte                                               
sfr UART1EXT       = 0xB6;     // UART 1 extentions                                                         

sfr SPICTRL        = 0xC1;     // SPI (Serial Perhipheral Interface) control                                
sfr SPICONFIG      = 0xC2;     // SPI configurations                                                        
sfr SPISIZE        = 0xC3;     // SPI transaction size                                                      
sfr SPIRXTX0       = 0xC4;     // SPI recieve / transmit register 0 [Data  7: 0]                            
sfr SPIRXTX1       = 0xC5;     // SPI recieve / transmit register 0 [Data 15: 8]                            
sfr SPIRXTX2       = 0xC6;     // SPI recieve / transmit register 0 [Data 23:16]                            
sfr SPIRXTX3       = 0xC7;     // SPI recieve / transmit register 0 [Data 32:24]                            

sfr SPISTATUS      = 0xC9;     // SPI status                                                                

sfr I2CCONFIG      = 0xD1;     // I2C (Inter Chip Communication) configuration                              
sfr I2CTIMING      = 0xD2;     // I2C timing                                                                
sfr I2CIDCFG       = 0xD3;     // I2C indentification                                                       
sfr I2CSTATUS      = 0xD4;     // I2C status                                                                
sfr I2CRXTX        = 0xD5;     // I2C recieve / transmit buffer                                             

sfr FRAMCFG1       = 0xDC;     // FRAM configuration 1
sfr FRAMCFG2       = 0xDD;     // FRAM configuration 2

// SFRs that can be only be accessed on PAGE 1
// When DEVMEMCFG bit 0 = 1

sfr AUA0           = 0xA2;     // Arithmetic Unit A [ 7: 0]                                                 
sfr AUA1           = 0xA3;     // Arithmetic Unit A [15: 8]                                                 
sfr AUC0           = 0xA4;     // Arithmetic Unit C [ 7: 0]                                                 
sfr AUC1           = 0xA5;     // Arithmetic Unit C [15: 8]                                                 
sfr AUC2           = 0xA6;     // Arithmetic Unit C [23:16]                                                 
sfr AUC3           = 0xA7;     // Arithmetic Unit C [32:24]                                                 

sfr AUB0DIV        = 0xB1;     // Arithmetic Unit B Divide [ 7: 0]                                          
sfr AUB0           = 0xB2;     // Arithmetic Unit B Multiply [ 7: 0]                                        
sfr AUB1           = 0xB3;     // Arithmetic Unit B [15: 8]                                                 
sfr AURES0         = 0xB4;     // Arithmetic Unit Result 0                                                  
sfr AURES1         = 0xB5;     // Arithmetic Unit Result 1                                                  
sfr AURES2         = 0xB6;     // Arithmetic Unit Result 2                                                  
sfr AURES3         = 0xB7;     // Arithmetic Unit Result 3                                                  

sfr AUSHIFTCFG     = 0xC1;     // Arithmetic Unit shift configuration                                       
sfr AUCONFIG1      = 0xC2;     // Arithmetic Unit configuration 1                                           
sfr AUCONFIG2      = 0xC3;     // Arithmetic Unit configuration 2                                           
sfr AUPREV0        = 0xC4;     // Arithmetic Unit previous result 0                                         
sfr AUPREV1        = 0xC5;     // Arithmetic Unit previous result 1                                         
sfr AUPREV2        = 0xC6;     // Arithmetic Unit previous result 2                                         
sfr AUPREV3        = 0xC7;     // Arithmetic Unit previous result 3                                         

// SBIT definitions for bit addressable registers

// P0 (Address 0x80)
sbit P0_0          = 0x80;
sbit P0_1          = 0x81;
sbit P0_2          = 0x82;
sbit P0_3          = 0x83;
sbit P0_4          = 0x84;
sbit P0_5          = 0x85;
sbit P0_6          = 0x86;
sbit P0_7          = 0x87;

// INTEN1 (Address 0x88)
sbit SPITXEIEN     = 0x89;     // SPI TX Empty Interrupt Enable
sbit SPIRXOVIEN    = 0x8A;     // SPI Interrupt Enable / Rx Available / Rx Overrun
sbit T0IEN         = 0x8B;     // Timer 0 Interrupt Enable
sbit PCHGIEN0      = 0x8C;     // Port Change Interrupt Module 0 Enable
sbit U0IEN         = 0x8D;     // UART 0 Interrupt Enable
sbit U1IEN         = 0x8E;     // UART 1 Interrupt Enable
sbit T1IEN         = 0x8F;     // Timer 1 Interrupt Enable

// P1 (Address 0x90)
sbit P1_0          = 0x90;
sbit P1_1          = 0x91;
sbit P1_2          = 0x92;
sbit P1_3          = 0x93;
sbit P1_4          = 0x94;
sbit P1_5          = 0x95;
sbit P1_6          = 0x96;
sbit P1_7          = 0x97;

// P5 (Address 0x98)
sbit P5_0          = 0x98;
sbit P5_1          = 0x99;
sbit P5_2          = 0x9A;
sbit P5_3          = 0x9B;
sbit P5_4          = 0x9C;
sbit P5_5          = 0x9D;
sbit P5_6          = 0x9E;
sbit P5_7          = 0x9F;

// P2 (Address 0xA0)
sbit P2_0          = 0xA0;
sbit P2_1          = 0xA1;
sbit P2_2          = 0xA2;
sbit P2_3          = 0xA3;
sbit P2_4          = 0xA4;
sbit P2_5          = 0xA5;
sbit P2_6          = 0xA6;
sbit P2_7          = 0xA7;

// INTEN2 (Address 0xA8)
sbit T2IEN         = 0xA8;     // Timer 2 Interrupt Enable
sbit I2CIEN        = 0xA9;     // I2C Interrupt Enable
sbit I2CUARTCI     = 0xAA;
sbit PWCIEN        = 0xAB;     // Pulse Width Counter Interrupt Enable
sbit PWMT03IEN     = 0xAC;     // PWM as Timer 0-3 Overflow Interrupt Enable
sbit PWMT47IEN     = 0xAD;     // PWM as Timer 4-7 Overflow Interrupt Enable
sbit AUWDTIEN      = 0xAE;     // Watchdog Timer / Arithmatic Unit Interrupt Enable
sbit PCHGIEN1      = 0xAF;     // Port Change Interrupt Module 1 Enable

// P3 (Address 0xB0)
sbit P3_0          = 0xB0;
sbit P3_1          = 0xB1;
sbit P3_2          = 0xB2;
sbit P3_3          = 0xB3;
sbit P3_4          = 0xB4;
sbit P3_5          = 0xB5;
sbit P3_6          = 0xB6;
sbit P3_7          = 0xB7;

// IPINFLAG1 (Address 0xB8)
sbit INT0IF        = 0xB8;     // Interrupt 0 Flag
sbit INT1IF        = 0xB9;     // Interrupt 1 Flag
sbit P30IF         = 0xBA;     // P3.0 Interrupt Flag
sbit P31IF         = 0xBB;     // P3.1 Interrupt Flag
sbit P34IF         = 0xBC;     // P3.4 Interrupt Flag
sbit P35IF         = 0xBD;     // P3.5 Interrupt Flag
sbit P36IF         = 0xBE;     // P3.6 Interrupt Flag
sbit P37IF         = 0xBF;     // P3.7 Interrupt Flag

// P4 (Address 0xC0)
sbit P4_0          = 0xC0;
sbit P4_1          = 0xC1;
sbit P4_2          = 0xC2;
sbit P4_3          = 0xC3;
sbit P4_4          = 0xC4;
sbit P4_5          = 0xC5;
sbit P4_6          = 0xC6;
sbit P4_7          = 0xC7;

// P6 (Address 0xC8)
sbit P6_0          = 0xC8;
sbit P6_1          = 0xC9;
sbit P6_2          = 0xCA;
sbit P6_3          = 0xCB;
sbit P6_4          = 0xCC;
sbit P6_5          = 0xCD;
sbit P6_6          = 0xCE;
sbit P6_7          = 0xCF;

// PSW (Address 0xD0)
sbit P             = 0xD0;     // Parity Flag
sbit F1            = 0xD1;     // General Purpose Flag 1
sbit OV            = 0xD2;     // Overflow Flag
sbit RS0           = 0xD3;     // Register Bank Select 0
sbit RS1           = 0xD4;     // Register Bank Select 1
sbit F0            = 0xD5;     // General Purpose Flag 0
sbit AC            = 0xD6;     // Auxiliary Carry Bit Flag
sbit CY            = 0xD7;     // Carry Bit Flag

// IPINFLAG2 (Address 0xD8)
sbit P00IF         = 0xD8;     // P0.0 Interrupt Flag
sbit P01IF         = 0xD9;     // P0.1 Interrupt Flag
sbit P02IF         = 0xDA;     // P0.2 Interrupt Flag
sbit P03IF         = 0xDB;     // P0.3 Interrupt Flag
sbit P04IF         = 0xDC;     // P0.4 Interrupt Flag
sbit P05IF         = 0xDD;     // P0.5 Interrupt Flag
sbit P06IF         = 0xDE;     // P0.6 Interrupt Flag
sbit P07IF         = 0xDF;     // P0.7 Interrupt Flag

// ACC (Address 0xE0)
sbit ACC_0         = 0xE0;
sbit ACC_1         = 0xE1;
sbit ACC_2         = 0xE2;
sbit ACC_3         = 0xE3;
sbit ACC_4         = 0xE4;
sbit ACC_5         = 0xE5;
sbit ACC_6         = 0xE6;
sbit ACC_7         = 0xE7;

// B (Address 0xF0)
sbit B_0           = 0xF0;
sbit B_1           = 0xF1;
sbit B_2           = 0xF2;
sbit B_3           = 0xF3;
sbit B_4           = 0xF4;
sbit B_5           = 0xF5;
sbit B_6           = 0xF6;
sbit B_7           = 0xF7;

// USERFLAGS (Address 0xF8)
sbit UF_0          = 0xF8;
sbit UF_1          = 0xF9;
sbit UF_2          = 0xFA;
sbit UF_3          = 0xFB;
sbit UF_4          = 0xFC;
sbit UF_5          = 0xFD;
sbit UF_6          = 0xFE;
sbit UF_7          = 0xFF;

#endif
/**************************************************************************
* Copyright (C) 2007 Ramtron International Corporation
**************************************************************************/
