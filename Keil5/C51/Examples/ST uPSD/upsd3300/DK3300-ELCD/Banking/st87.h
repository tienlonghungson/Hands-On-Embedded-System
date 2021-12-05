/*------------------------------------------------------------------------------
st87.h

Version:
October 11, 2004 Version 1.0 - Initial release.

Dependencies: None

Description:
This header file contains the function prototypes for those used in the ST87
RTC device driver (st87.c).


Copyright (c) 2004 STMicroelectronics Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD product (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
------------------------------------------------------------------------------*/

#ifndef _UPSD_ST87_H_
#define _UPSD_ST87_H_

void ST87_write (void);
void ST87_read (void);
void Adjust_time(char m_Menu_Index, char event);
void Show_time(char k);
unsigned char Conv_Int_to_BCD(char integ);
char Conv_BCD_to_Int(unsigned char BCD);
void ST87_config (void);
void ST87_tamper_init();
void ST87_tamper_Reset();
unsigned char ST87_tamper_check();
void ST87_tamper_save();
void ST87_tamper_Show(unsigned char Tamper_index);
void ST87_tamper_clear();

typedef struct 
{
    unsigned char second;
    unsigned char minute;
    unsigned char hour;
    unsigned char day;
    unsigned char month;
    unsigned char year;
} Time;

#endif

