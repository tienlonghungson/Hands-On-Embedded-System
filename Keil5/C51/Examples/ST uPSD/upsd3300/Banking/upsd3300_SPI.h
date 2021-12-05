/*--------------------------------------------------------------------------
Title: Turbo_SPI.H
Date: 4, 2003
Author: Shao Qing

Header file for Turbo Lite SPI Device Driver
04/2003 Ver 0.1 - Initial Version

Copyright (c) 2002 ST Microelectronics
This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD products (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
--------------------------------------------------------------------------*/

#ifndef _Turbo_SPI_H_
#define _Turbo_SPI_H_

// SPICON0 Equates:
#define  TE     0x40        // 
#define  RE     0x20        // 
#define  SPIEN  0x10        // 
#define  SSEL   0x08        // 
#define  FLSB   0x04        // 
#define  SPO    0x02        // 

// SPICON1 Equates:
#define  TEIE   0x08        // 
#define  RORIE  0x04        // 
#define  TIE    0x02        // 
#define  RIE    0x01        // 

// SPISTAT Equates:
#define  BUSY   0x10        // 
#define  TEISF  0x08        // 
#define  RORISF 0x04        // 
#define  TISF   0x02        // 
#define  RISF   0x01        // 

void Turbo_SPI_Init(void);
void Turbo_SPI_WriteByte(unsigned int m_addr, unsigned char m_data);
unsigned char Turbo_SPI_ReadByte(unsigned int m_addr);
void Turbo_SPI_WriteEnable();
void Turbo_SPI_WriteDisable();
void Turbo_SPI_WriteSR(unsigned char m_data);
unsigned char Turbo_SPI_ReadSR(void);

#endif
