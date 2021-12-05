/*------------------------------------------------------------------------------
eeprom_emul_DEMO.c

Version:
9/08/2004 - Ver 1.0 - Initial release.

Description:
Simple EEPROM Emulation Demo code for uPSD33xx.  This demo loops forever 
writing an incrementing value to the emulated EEPROM contents.  Upon reset, the
flash is checked to see if it was previously set up for emulating an EEPROM.  If
it was not, the flash is initialized and formated for EEPROM emulation.  If
it was, the current value is read from the record in the emulated EEPROM and is
displayed on the LCD.  This value plus 1 becomes the starting value that is
incrementally written to the emulated EEPROM.

Hardware Platform:
DK3300-ELCD

Note: 
The first time this demo code is executed, it will initialize the flash for 
EEPROM emulation.  While the demo is running, take note of the value that was 
just written to the emulated EEPROM.  Press the reset switch or cycle the power 
and then observe that the demo detects that the flash was previously initialized
for EEPROM emulation.  It will then retrieve and display the value that was last
written to the EEPROM.

********************************************************************************
Important Notes:
(1) EEPROM record size is set in eeprom.h.
(2) This demo requires XDATA to be initialized to 0 for the EEPROM Emulation 
driver to work properly.  This is currently handled in the startup file.
(3) This demo doesn't handle error processing.  In most cases if an error
occurs, the demo stops.
********************************************************************************

Copyright (c) 2005 STMicroelectronics

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
------------------------------------------------------------------------------*/

#include "upsd3300_hardware.h"	   // environment hardware specific defines
#include "upsd3300.h"			   // special function register declarations for UPSD
#include "upsd3300_lcd.h"		   // prototype declarations and defines for uPSD IP drivers
#include "upsd3300_timer.h"
#include "eeprom.h"

xdata PSD_REGS PSD_reg _at_ PSD_REG_ADDR;  // Define PSD registers at address "csiop" space

   	  
void main (void) 
{
	unsigned char EEPROM_write_value;	  // Counter - value to write to record
	unsigned char status;

    unsigned char flash_previously_init;  // Flag to indicate if the flash was
                                          //  previously (before reset) initialized 
										  //  for EEPROM emulation.

	BYTE xdata buf[1];          //Buffer that holds data to write  
    BYTE xdata tmpbuf[1];       //Buffer which holds data read back from the flash
   	
	PSD_reg.VM |= 0x80;         // enable peripheral I/O mode for LCD display

    timer0_init();   		 	// initialize timer0 interrupt 
	lcd_init();	  				// initialize LCD. 8 bits, 2 lines, 5x7 font,
     				  			// no blink, cursor off, clear 

	printfLCD("EEPROM Emulation\n");		//display on LCD
	printfLCD("demo on uPSD3300\n");
	delay_2sec();

    flash_previously_init = TRUE;          // Flag set to previously initialized.
  
   	status = Eeprom_Init();     // Determines if the flash was previously 
                                //  initialized for EEPROM emulation.  Also does
								//  some recovery if contents corrupted due to 
                                //  power failure.
    if (status != 0)            // Flash was not previously initialized.
    {  
        lcd_clear();
        printfLCD("Flash not init\n");
		printfLCD("for EEPROM Emul.\n");
		delay_2sec();

        lcd_clear();
        printfLCD("Formatting flash\n");
        printfLCD("for EEPROM Emul.\n");
  	    delay_2sec();

        flash_previously_init = FALSE;    // Flag to indicate the flash was not
		                                  //  previously initialized for EEPROM
                                          //  emulation.

   	    status = EEPROM_Format(0x0001);   // Initializes flash for EEPROM
		                                  //  emulation.  Format the flash
                                          //  for one record.
        switch (status)                   // Check for format errors and process.
        {
		case ILLEGAL_RECORD_NUMBER:
           lcd_clear();
           printfLCD("Illegal records\n");
	 	   printfLCD("reduce number\n");
		   delay_2sec();
	       while(1);                      // Process the error.

		case FORMAT_FAILED:
           lcd_clear();
    	   printfLCD("Format Failed\n");
		   printfLCD("Reset\n");
		   delay_1sec();
	       while(1);                      // Process the error.

		case SECTOR_ERASE_ERROR:
           lcd_clear();
    	   printfLCD("Sector Erase\n");
		   printfLCD("Error-Reset\n");
		   delay_1sec();
	       while(1);                      // Process the error.
        }
    }

    if (flash_previously_init == TRUE)    // Flash was init for EEPROM Emul prior
                                          //  to reset.
    {
       lcd_clear();                       // Indicate on display it was init.
       printfLCD("Previously init\n");
       printfLCD("for EEPROM Emul.\n");
       delay_2sec();

       lcd_clear();
       printfLCD("Reading Rec# 0\n");     // Indicate that Rec# 0 will be read
       printfLCD("contents...\n");        //  and displayed.
       delay_2sec();

       status = Read_Record(0,&tmpbuf[0]); // Read the previously stored record.
       if (status)                         // Check for read errors.
	   {
	      lcd_clear();
	      printfLCD("RD Error =%x\n",status);
	      while(1);                            // Process the error.
	   }
       lcd_clear();
       printfLCD("Rec# 0 contains\n");            // Display contents of record.
       printfLCD("the value: 0x%x\n",tmpbuf[0]);
       delay_2sec();
       delay_2sec();

	   EEPROM_write_value = ++tmpbuf[0];   // Set next value to write to EEPROM 
    }
    else
    {
       EEPROM_write_value = 0;    // EEPROM was not previously initialized so
                                  //  use this value as the starting value to 
                                  //  to write to EEPROM.
    }

    lcd_clear();                        // Describe operation of demo with
    printfLCD("Now going to    \n");    //  messages on LCD display.
    printfLCD("update Rec# 0 w/\n");
	delay_2sec();
    lcd_clear();
    printfLCD("incrementing val\n");
    printfLCD("every 2 seconds.\n");
    delay_2sec();

	while (1)
	{		
        buf[0] = EEPROM_write_value++;
	    status = Update_Record(0, &buf);  // Write record with the content in buf[0] 
	    if (status)
		{
			lcd_clear();
			printfLCD("WR Error =%x\n",status);
            printfLCD("writing: 0x%x\n",buf[0]);
			while(1);                             // Process the error.
		}

        status = Read_Record(0,&tmpbuf[0]);    // read the record
		if (status)
		{
			lcd_clear();
			printfLCD("RD Error =%x\n",status);
			while(1);                             // Process the error.
		}

	    if (tmpbuf[0] == buf[0])              // Verify the record was written
                                              //  correctly.
	    {        
           lcd_clear();                       // Display the written value.
           printfLCD("Wrote Rec# 0\n");       
           printfLCD("with value: 0x%x\n",tmpbuf[0]);
		   delay_2sec();
        } 
	    else 
        {
            lcd_clear();
	        printfLCD("Read & Compare.\n");
	        printfLCD("Miscompared!\n");
			while(1);                        // Process the error.

	    }
     }
}  


