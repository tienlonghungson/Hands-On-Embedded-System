/*------------------------------------------------------------------------------
st85.c

Version:
September 30, 2004 Version 2.1 - Removed #pragma CODE.
August 2004 Version 2.0 - Updated include file names, modified comments.

Description:
This code is part of the banking demo for the Turbo uPSD family.
This file is used to access the ST87 RTC Chip.


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
#include "uPSD3300_ADC.h"
#include "uPSD3300_timer.h"
#include "uPSD3300_LCD.h"
#include "uPSD3300_I2C.h"
#include "st85.h"
#include "uPSD3300_SPI.h"


Time st85;
extern xdata unsigned char i2c_xmit_buf[256];        // message xmit buffer
extern xdata unsigned char i2c_rcv_buf[256];         // message rcv buffer




/******************************************************************************/
/* function:     Conv_Int_to_BCD                                              */ 
/* descripition: Convers an integer number to timekeeper BCD format           */  
/* input:        int integ                                                    */
/* output:       unsigned char                                                */
/******************************************************************************/
unsigned char Conv_Int_to_BCD(char integ)
{
    char tmph, tmpl;
    tmph = integ / 10;  // get 10's units
    tmpl = integ - (tmph * 10);  // get 1's remainder
    if (tmph > 9) tmph = 9;
    return ((tmph<<4) | tmpl);   // form BCD number
    
}

/******************************************************************************/
/* function:     Conv_BCD_to_Int                                             */ 
/* descripition: Convers BCD format to an integer number                      */  
/* input:        unsigned char BCD                                            */
/* output:       integer                                                    */
/******************************************************************************/
char Conv_BCD_to_Int(unsigned char BCD)
{
    char tmph, tmpl;
    tmpl = BCD & 0x0f;  // Get LSD
    if (tmpl > 9) tmpl = 9;   // fix bad char out of range
    tmph = ((BCD & 0xf0)>>4);
    if (tmph >9) tmph = 9;
    return ((tmph*10)+tmpl);
}

//--------------------------------
//   Test M41ST85 I2C interface
//--------------------------------
void ST85_write (void){                                         // set up xmit buffer, and send chars via i2c
    i2c_xmit_buf[0] = 0x00;                                     // Set up ST85 start address
    i2c_xmit_buf[1] = 0x00;                                     // ST85 msecs=00
    //i2c_xmit_buf[2] = 0x02;                                     // ST85 secs=00
    //i2c_xmit_buf[3] = 0x53;                                     // ST85 mins
    //i2c_xmit_buf[4] = 0x11;                                     // ST85 hours
    i2c_xmit_buf[5] = 0x03;                                     // ST85 dow
    //i2c_xmit_buf[6] = 0x15;                                     // ST85 date
    //i2c_xmit_buf[7] = 0x10;                                     // ST85 month
    //i2c_xmit_buf[8] = 0x02;                                     // ST85 year
    i2c_xmit_buf[9] = 0x00;                                     // ST85 control=00
    i2c_xmit_buf[10] = 0x00;                                    // ST85 watchdog=0x00
    i2c_xmit_buf[11] = 0x1f;                                    // ST85 alm month=0x1f (enable alarm int.)
    i2c_xmit_buf[12] = 0xff;                                    // ST85 alm date=0x3f
    i2c_xmit_buf[13] = 0x3f;                                    // ST85 alm hour=0x3f (clr HT bit)
    i2c_xmit_buf[14] = 0x7f;                                    // ST85 alm min=0x7f
    i2c_xmit_buf[15] = 0x7f;                                    // ST85 alm sec=0x7f
    Turbo_i2c_MX (0xD0,16);                                     // send 16 bytes for st85: addr 0xD0, @ 0x00-0x0E
    }
    
void ST85_config (void){                                        // set up xmit buffer, and send chars via i2c
    i2c_xmit_buf[0] = 0x08;                                     // Set up ST85 start address 0x08
    i2c_xmit_buf[1] = 0x00;                                     // ST85 control=00
    i2c_xmit_buf[2] = 0x00;                                     // ST85 watchdog=0x00
    i2c_xmit_buf[3] = 0x1f;                                     // ST85 alm month=0x1f (enable alarm int.)
    i2c_xmit_buf[4] = 0xff;                                     // ST85 alm date=0x3f
    i2c_xmit_buf[5] = 0x3f;                                     // ST85 alm hour=0x3f (clr HT bit)
    i2c_xmit_buf[6] = 0x7f;                                     // ST85 alm min=0x7f
    i2c_xmit_buf[7] = 0x7f;                                     // ST85 alm sec=0x7f
    Turbo_i2c_MX (0xD0,8);                                      // send 8 bytes for st85: addr 0xD0, @ 0x00-0x0E
    }
    
void ST85_read (void){
    i2c_xmit_buf[0] = 0x00;                                     // Set up ST85 start address
    Turbo_i2c_MX (0xD0,1);                                      // send 1 bytes for st85: addr 0xD0, @ 0x00
    Turbo_i2c_MR (0xD0,10);
}


// This routine is used to set the RTC time and date 
void Adjust_time(char Index, char direction)
{
    unsigned char temp;
    switch (Index)
    {
    case 3:
        temp=Conv_BCD_to_Int(st85.hour);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=24)temp=0;
        st85.hour=Conv_Int_to_BCD(temp);
    break;
    case 4:
        temp=Conv_BCD_to_Int(st85.minute);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=60)temp=0;
        st85.minute=Conv_Int_to_BCD(temp);
    break;
    case 5:
        temp=Conv_BCD_to_Int(st85.second);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=60)temp=0;
        st85.second=Conv_Int_to_BCD(temp);
    break;
    case 0:
        temp=Conv_BCD_to_Int(st85.day);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=32)temp=1;
        if(temp==0) temp=1;
        st85.day=Conv_Int_to_BCD(temp);
    break;
    case 1:
        temp=Conv_BCD_to_Int(st85.month);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=13)temp=1;
        if(temp==0) temp=1;
        st85.month=Conv_Int_to_BCD(temp);
    break;
    case 2:
        temp=Conv_BCD_to_Int(st85.year);
        if (direction==2) temp++;  
        else temp--;
        if(temp>=100)temp=0;
        st85.year=Conv_Int_to_BCD(temp);
    break;
    }
}

// Display the RTC time located in the data structure
// and is called during set RTC time and date
void Show_time(char k)
{
    lcd_clear();
    printfLCD("DMY %x",st85.day);
   printfLCD(":%x",st85.month);
    printfLCD(":%x set\n",st85.year);
    printfLCD("HMS %x",st85.hour);
   printfLCD(":%x",st85.minute);
    printfLCD(":%x ",st85.second);
    if (k==0) printfLCD("Day");
    if (k==1) printfLCD("Mth");
    if (k==2) printfLCD("Yr ");
    if (k==3) printfLCD("Hr ");
    if (k==4) printfLCD("Min");
    if (k==5) printfLCD("Sec"); 
}

//-------------------------------------------------------------------------------
//  Tamper control register define:
//  Address 14H:{TEB1,TIE1,TCM1,TPM1,TDS1,TCHI/TCLO1,CLR1ext,CLR1}
//  Address 15H:{TEB2,TIE2,TCM2,TPM2,TDS2,TCHI/TCLO2,CLR2ext,CLR2}
//  Address 0FH:{,,,,,,TB1,TB2} 
//-------------------------------------------------------------------------------

void ST87_tamper_init()
{

    i2c_xmit_buf[0] = 0x14;     // Set up ST87 start address
    i2c_xmit_buf[1] = 0x84;     // Tamper_1 configuration
                                // Address 14H=[10110100] for Nornmally open
                                // or Address 14H=[10000100] for Nornmally close
    i2c_xmit_buf[2] = 0xA4;     // Tamper_2 configuration
                                // Address 15H=[10100100] for Nornmally open
                                // or Address 15H=[10010100] for Nornmally close
    Turbo_i2c_MX (0xD0,3);      // send 16 bytes for st85: addr 0xD0, @ 0x00-0x0E   
}

void ST87_tamper_Reset()
{

    i2c_xmit_buf[0] = 0x14;     // Set up ST87 start address
    i2c_xmit_buf[1] = 0x34;     // Tamper_1 configuration
                                // Address 14H=[00110100] for Nornmally open
                                // or Address 14H=[00000100] for Nornmally close
    i2c_xmit_buf[2] = 0x24;     // Tamper_2 configuration
                                // Address 15H=[00100100] for Nornmally open
                                // or Address 15H=[00010100] for Nornmally close
    Turbo_i2c_MX (0xD0,3);      // send 16 bytes for st85: addr 0xD0, @ 0x00-0x0E   
}



unsigned char ST87_tamper_check()
{
    i2c_xmit_buf[0] = 0x0F;     // Setup ST87 start address
    Turbo_i2c_MX (0xD0,1);      // send 1 bytes for st85: addr 0xD0, @ 0x00
    Turbo_i2c_MR (0xD0,1);      // Read address 0x0F for check TB1 and TB2 bits
    if((i2c_rcv_buf[0]&0x03)!=0)return(1);
    else return(0);
}

void ST87_tamper_save()
{
    unsigned char Tamper_sum,Tamper_No;

    i2c_xmit_buf[0] = 0x00;     // Setup ST87 start address
    Turbo_i2c_MX (0xD0,1);      // send 1 bytes for st85: addr 0xD0, @ 0x00
    Turbo_i2c_MR (0xD0,10);     // Read address 0x0F for check TB1 and TB2 bits
    Tamper_sum=Turbo_SPI_ReadByte(0x0000);
    Tamper_No=Turbo_SPI_ReadByte(0x0001);
    Tamper_sum++;
    if(Tamper_sum>=10)Tamper_sum=10;
    Tamper_No++;
    if(Tamper_No>9)Tamper_No=0;
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0000, Tamper_sum);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0001, Tamper_No);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0002+Tamper_No*6, i2c_rcv_buf[1]); 
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0003+Tamper_No*6, i2c_rcv_buf[2]);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0004+Tamper_No*6, i2c_rcv_buf[3]);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0005+Tamper_No*6, i2c_rcv_buf[5]);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0006+Tamper_No*6, i2c_rcv_buf[6]);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0007+Tamper_No*6, i2c_rcv_buf[7]);
    delay_1sec();
    ST87_tamper_Reset();
    ST87_tamper_init();
}

void ST87_tamper_Show(unsigned char Tamper_index)
{
    Time ST87_tamper_time;
    unsigned char Tamper_No;
    char temp; 
    Tamper_No=Turbo_SPI_ReadByte(0x0001);
    temp=Tamper_No-Tamper_index;
    if(temp<0)temp=temp+10;
    ST87_tamper_time.second=Turbo_SPI_ReadByte(0x0002+temp*6);
    ST87_tamper_time.minute=Turbo_SPI_ReadByte(0x0003+temp*6);
    ST87_tamper_time.hour=Turbo_SPI_ReadByte(0x0004+temp*6);    
    ST87_tamper_time.day=Turbo_SPI_ReadByte(0x0005+temp*6);
    ST87_tamper_time.month=Turbo_SPI_ReadByte(0x0006+temp*6);
    ST87_tamper_time.year=Turbo_SPI_ReadByte(0x0007+temp*6);

    lcd_clear();
    printfLCD("Tamp%x ",Tamper_index);
    printfLCD("%x",ST87_tamper_time.day);
    printfLCD(":%x",ST87_tamper_time.month);
    printfLCD(":%x\n",ST87_tamper_time.year);
    printfLCD("       %x",ST87_tamper_time.hour);
    printfLCD(":%x",ST87_tamper_time.minute);
    printfLCD(":%x\n",ST87_tamper_time.second);
}


void ST87_tamper_clear()
{
    unsigned char Tamper_sum,Tamper_No;
    Tamper_sum=0;
    Tamper_No=0;
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0000, Tamper_sum);
    Turbo_SPI_WriteEnable();
    Turbo_SPI_WriteByte(0x0001, Tamper_No);
}



