/*------------------------------------------------------------------------------
bank3.c

Version:
August 2004 Version 2.0 - Updated include file names, modified comments.

Description:
This code is part of the banking demo for the Turbo uPSD family.
This file is part of the banked pages of code that is managed by
the compiler and linker tools.


Copyright (c) 2005 STMicroelectronics Inc.

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


#include "uPSD3300.h"
#include "uPSD3300_hardware.h"
#include "uPSD3300_LCD.h"
#include "uPSD3300_timer.h"


void fct_PAGE4();
void fct_PAGE3()
{
    delay_1sec();
    lcd_clear();
    printfLCD("Bank switching:");
    printfLCD("\nBANK #03       ");
    delay_1sec();
    delay_1sec();
    lcd_clear();
    printfLCD("We are going to");
    printfLCD("\ncall B4 from B3");
    delay_1sec();
    delay_1sec();
    fct_PAGE4();
    delay_1sec();
    delay_1sec();
    lcd_clear();
    printfLCD("and we are now");
    printfLCD("\nback in BANK 3      ");
    delay_1sec();
    delay_1sec();
}

