/*------------------------------------------------------------------------------
upsd3200_lcd.c

Change Note:
Uncalled functions commented out to avoid compiler warnings.

Version:
September 28, 2004 Version 2.1 - 
Removed unreference local variable in the BusyCheck() function.  Updated include
file names.

September 2004 Version 2.0 -
Updated the include file names and modified comments.  Added support for 
the Raisonance compiler.  Corrected the printfLCD() for the "w" format.  Removed
functions not typically used with the basic demos.


Dependencies:
upsd3200_timer.c - needed for delays used in functions that write data to the LCD.

Description:
The uPSD3200 LCD device driver is intended to provide a standard programmed 
I/O set of functions for driving a 16 x 2 line dot matrix LCD module that
is part of the DK3200 boards.  See the functions below for their description.


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

#include "upsd3200.h"
#include "upsd3200_hardware.h"
#include "upsd3200_lcd.h"
#include "upsd3200_timer.h"

#ifdef __RC51__      // If Raisonance compiler, need this include file for the 
                     //  printfLCD() function.
#include "stdarg.h"
#endif


typedef struct LCD_display_st {
    unsigned char LCD_CMD_WR;        // LCD_BASE+0x00
    unsigned char LCD_CMD_RD;        //         +0x01
    unsigned char LCD_RAM_WR;        //         +0x02
    unsigned char LCD_RAM_RD;        //         +0x03
}  LCD_DISPLAY;

// XDATA address for display 
xdata LCD_DISPLAY LCD_reg _at_ LCD_BASE_ADDR;

static unsigned char Cursor_LCD;
static char orig_buscon;


/*------------------------------------------------------------------------------
lcd_init()

This function is used to initialize the LCD module per the specs.
------------------------------------------------------------------------------*/
void lcd_init(void)
{
    delay_10ms();
    LCD_reg.LCD_CMD_WR = 0x30;
    delay_10ms();
    LCD_reg.LCD_CMD_WR = 0x30;
    delay_10ms();
    LCD_reg.LCD_CMD_WR = 0x30;
    delay_10ms();

    LCD_reg.LCD_CMD_WR = 0x38;   // 8 bits, 2 lines, 5 x 7 font
    delay_10ms();                // delay 10 ms
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x0C;   //Display on, Cursor off, Non-Blink
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x01;   //Clear display
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x02;   //Cursor home
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x06;   //Cursor inc, no shift/cursor move

    Cursor_LCD = DD_ADDR;        //Display from 1st row, 1st column
    BusyCheck();
    LCD_reg.LCD_CMD_WR = Cursor_LCD;
    BusyCheck();
}

/*------------------------------------------------------------------------------
BusyCheck()

This function is used to wait until the LCD module's busy flag (BF) is cleared.
------------------------------------------------------------------------------*/
void BusyCheck(void)
{
    while (LCD_reg.LCD_CMD_RD & BF_BIT);  // Loop while busy
}


/*------------------------------------------------------------------------------
printfLCD(chr_ptr) 

This function is used to display a string of characters on the LCD display.

chr_ptr - unsigned char*
        - pointer to string to display on LCD.
------------------------------------------------------------------------------*/
void printfLCD(unsigned char *chr_ptr, ...)
{
    unsigned char var;
    #ifdef __RC51__ // If Raisonance compiler, use ANSI stdarg
        va_list var_ptr;
        va_start(var_ptr,0);
    #else   
        unsigned char *var_ptr=&chr_ptr+1;
    #endif

    while (*chr_ptr != NULL) {

        BusyCheck();

        if (*chr_ptr == '\r') {
            chr_ptr++;
            Cursor_LCD &= 0xC0;                 //return to position 0 at current line
            LCD_reg.LCD_CMD_WR = Cursor_LCD;
        }
        else
        if (*chr_ptr == '\n') {
            chr_ptr++;
            Cursor_LCD ^= 0x40;                 //goto next line
            Cursor_LCD &= 0xC0;                 //return to position 0
            LCD_reg.LCD_CMD_WR = Cursor_LCD;
        }
        else
        if (*chr_ptr == '%') {
            chr_ptr++;
            if (*chr_ptr == 'd') {          // display 1 digit decimal 0-9
                chr_ptr++;

                var = *var_ptr++;
                LCD_reg.LCD_RAM_WR = (var & 0x0F)+'0';
            }
            else
            if (*chr_ptr == 'x') {              // display 1 byte hex 00-FF
                chr_ptr++;

                var = *var_ptr++;
                LCD_reg.LCD_RAM_WR = htoa_hi(var);
                BusyCheck();
                LCD_reg.LCD_RAM_WR = htoa_lo(var);
            }
            else
            if (*chr_ptr == 'w') {          // display 1 word hex 0000-FFFF
                chr_ptr++;
                var = *var_ptr--;       // back up 1 char                
                var = *var_ptr++;       // get integer
                LCD_reg.LCD_RAM_WR = htoa_hi(var);
                BusyCheck();
                LCD_reg.LCD_RAM_WR = htoa_lo(var);
                BusyCheck();
                var = *var_ptr++;      // get low byte
                LCD_reg.LCD_RAM_WR = htoa_hi(var);
                BusyCheck();
                LCD_reg.LCD_RAM_WR = htoa_lo(var);
            }
            else {
                LCD_reg.LCD_RAM_WR = *chr_ptr++;    //write character to LCD Display RAM
            }
        }
        else
        {
            LCD_reg.LCD_RAM_WR = *chr_ptr++;        //write character to LCD Display RAM
        }
    }
}

/*------------------------------------------------------------------------------
lcd_clear()

This function is used to clear the LCD.
------------------------------------------------------------------------------*/
/*
void lcd_clear(void)
{
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x01;
    Cursor_LCD = DD_ADDR;
}
*/

/*------------------------------------------------------------------------------
MoveCursor(m_direction, m_step)

This function is used to move the cursor on the LCD.

m_direction - char
            - the direction to move the cursor from the current location. 
m_step      - unsigned char 
            - the number of character positions to the move the cursor in the
                direction specified by m_direction.
------------------------------------------------------------------------------*/
/*
void MoveCursor(char m_direction, unsigned char m_step)
{
    unsigned char i;

    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x0C;              //Close cursor
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x02;              //Cursor home
    
    if(m_step>=16)
    {
        m_step=m_step-16;
        printfLCD("\n");
    }
    for(i=0;i<m_step;i++)
    {
        BusyCheck();
        if(m_direction==1)LCD_reg.LCD_CMD_WR = 0x10;//Left shift
        else LCD_reg.LCD_CMD_WR = 0x14;             //Right shift
    }
    BusyCheck();
    LCD_reg.LCD_CMD_WR = 0x0E;                      //Open Cursor
}
*/

    
/* The following conversion functions are used in conjunction with the
 displaying data on the LCD. */

/*------------------------------------------------------------------------------
htoa_lo(byte)

This function is used to convert the low nibble of an unsigned byte (0-F hex)
to ASCII.

byte    - byte 
        - byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_lo(unsigned char byte)
{
    byte = byte & 0x0F;         // keep lower nibble only   
    if (byte <= 0x09)
        return(byte + 0x30);
    else
        return (byte + 0x37);
}

/*------------------------------------------------------------------------------
htoa_hi(byte)

This function is used to convert the hi nibble of an unsigned byte (0-F hex)
to ASCII.

byte    - byte 
        - byte to convert to ASCII.

Returns:
ASCII value result of the conversion.
------------------------------------------------------------------------------*/
char htoa_hi(unsigned char byte)
{
    byte = byte & 0xF0;         // keep upper nibble only   
    byte = byte >> 4;
    if (byte <= 0x09)
        return(byte + 0x30);
    else
        return (byte + 0x37);
}



