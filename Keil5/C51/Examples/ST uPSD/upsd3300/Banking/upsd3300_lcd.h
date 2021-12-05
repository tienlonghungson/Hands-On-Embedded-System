/*------------------------------------------------------------------------------
upsd3300_lcd.h

Version:
August 2004 Version 2.0 - Updated comments.

Dependencies: None

Description:
This header file contains the function prototypes for those used in the LCD
driver (upsd3300_lcd.c).


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


// Read Only from Command register
#define  BF_BIT  0x80       // Busy flag

// Write Only to Command register
#define DD_ADDR 0x80        // set DDRAM address
#define CG_ADDR 0x40        // set CGRAM address

#define LCD_LINE_LENGTH  0x000F     // length of single line on LCD display


/*------------------------------------------------------------------------------
lcd_init()

This function is used to initialize the LCD module per the specs.
------------------------------------------------------------------------------*/
void lcd_init(void);


/*------------------------------------------------------------------------------
BusyCheck()

This function is used to wait until the LCD module's busy flag (BF) is cleared.
------------------------------------------------------------------------------*/
void BusyCheck(void);


/*------------------------------------------------------------------------------
printfLCD(chr_ptr) 

This function is used to display a string of characters on the LCD display.

chr_ptr - unsigned char*
        - pointer to string to display on LCD.
------------------------------------------------------------------------------*/
void printfLCD(unsigned char*,...);


/*------------------------------------------------------------------------------
lcd_clear()

This function is used to clear the LCD.
------------------------------------------------------------------------------*/
void lcd_clear(void);


/*------------------------------------------------------------------------------
MoveCursor(m_direction, m_step)

This function is used to move the cursor on the LCD.

m_direction - char
            - the direction to move the cursor from the current location. 
m_step      - unsigned char 
            - the number of character positions to the move the cursor in the
                direction specified by m_direction.
------------------------------------------------------------------------------*/
void MoveCursor(char m_direction, unsigned char m_step);


/*------------------------------------------------------------------------------
htoa_lo(byte)

This function is used to convert the low nibble of an unsigned byte (0-F hex)
to ASCII.

byte    - byte 
        - byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_lo(unsigned char byte);


/*------------------------------------------------------------------------------
htoa_hi(byte)

This function is used to convert the hi nibble of an unsigned byte (0-F hex)
to ASCII.

byte    - byte 
        - byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_hi(unsigned char byte);


