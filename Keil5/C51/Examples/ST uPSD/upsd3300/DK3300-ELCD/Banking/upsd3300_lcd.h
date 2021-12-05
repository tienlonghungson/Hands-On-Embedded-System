/*------------------------------------------------------------------------------
upsd3300_lcd.h

Version:
October 7, 2004 Version 1.1 - Updated comments and clean up.

Dependencies: None

Description:
This header file contains the function prototypes for those used in the enhanced
LCD driver (upsd3300_lcd.c).


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

#ifndef _ELCD_H_
#define _ELCD_H_


// Read Only from Command register
#define  BF_BIT  0x80       // Busy flag

// Write Only to Command register
#define DD_ADDR 0x80        // set DDRAM address
#define CG_ADDR 0x40        // set CGRAM address

#define LCD_LINE_LENGTH  0x000F		// length of single line on LCD display

extern unsigned char ucol ;     //ucol is a global variable, this point is very important.
extern unsigned char ulayer ;   //ulayer is also a global variable, this point is very important.
extern unsigned char mode ;  
extern xdata unsigned char STlogo[32];


/*------------------------------------------------------------------------------
lcd_init()

This function is used to initialize the LCD module per the specs.
------------------------------------------------------------------------------*/
void lcd_init(void);


/*------------------------------------------------------------------------------
printfLCD(chr_ptr) 

This function is used to display a string of characters on the LCD display.

chr_ptr - unsigned char*
		- pointer to string to display on LCD.
------------------------------------------------------------------------------*/
void printfLCD(unsigned char*,...);
void LcdConfig ( void ) ; //lcd initialization	
void font_detection(void) ;
int crcxmodem_upload();
unsigned char putchar (unsigned char c);
void DrawSTlogo (unsigned char *bmp);  
void DrawPic ( unsigned char x0,unsigned char y0,unsigned char width,unsigned char length,unsigned char *bmp);
 
/*------------------------------------------------------------------------------
lcd_clear()

This function is used to clear the LCD.
------------------------------------------------------------------------------*/
void lcd_clear(void);


/*------------------------------------------------------------------------------
htoa_lo(byte)

This function is used to convert the low nibble of an unsigned byte (0-F hex)
to ASCII.

byte	- byte 
		- byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_lo(unsigned char byte);


/*------------------------------------------------------------------------------
htoa_hi(byte)

This function is used to convert the hi nibble of an unsigned byte (0-F hex)
to ASCII.

byte 	- byte 
		- byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_hi(unsigned char byte);

#endif
