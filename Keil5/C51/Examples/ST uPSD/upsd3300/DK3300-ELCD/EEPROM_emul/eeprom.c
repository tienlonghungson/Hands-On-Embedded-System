/*--------------------------------------------------------------------------
eeprom.c

Version:
12/2004 Ver 0.3 - Corrected Update_Record and Read_Recort_Data_Structure
                  for record sizes > 0xFF bytes.
10/2004 Ver 0.2 - Corrected Eeprom_Sector_Swap to properly handle smaller
                  sized records.
11/2002 Ver 0.1 - Initial Version

Description:
Device driver for EEPROM emulation using boot (secondary) flash.

*****************************************************************************
Important Note:
XDATA must be initialized to 0 in the startup file for this driver to work
properly.  This will be investigated and corrected in future releases.
*****************************************************************************


Copyright (c) 2005 STMicroelectronics, Inc.

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


#include "eeprom.h"
#include "upsd3300.h"			// special function register declarations for UPSD


/***** EEPROM_Format *****/
// Formats sectors 0 and 1 to accept record data
// Accepts maximum number of records allowed.
// Returns 0 on success. If error, returns 1.
// ********** WARNING ********** // 
// This function erases any existing data in both sectors
// ********** WARNING ********** // 
BYTE EEPROM_Format(WORD max_records)
{
	xdata struct record_entry xdata record;

	// Verify data will fit into half of sector
	if  ( (sizeof(record) * max_records)  > (SECTOR_SIZE/2) )
		return ILLEGAL_RECORD_NUMBER;

	// Format sector 0
	if ( E_andF_Sector(SECTOR_0, max_records) ) return FORMAT_FAILED;
	// Erase sector 1
	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;

	return 0;
}

/***** Eeprom_Init *****/
// Verifies database integrity after power loss.
// Attempts to recover data corruption after power loss.
// Re-formats database if corrupted. 
BYTE Eeprom_Init(void)
{
	xdata struct sector_header xdata sector_header_0;
	xdata struct sector_header xdata sector_header_1;
	xdata struct record_entry xdata record;
	WORD i, j;
	BYTE *ptr;
	WORD xdata max_rec;
	WORD xdata last_address;
	WORD xdata base_address;
	WORD xdata new_address;
	BYTE xdata valid_sector;

	// Get both sector headers
	ptr = (BYTE*) (&sector_header_0);
	base_address = SECTOR_0_BASE_ADDRESS;
	for ( i=0; i < sizeof(sector_header_0); i++ )
	{
		ptr[i] = Boot_Flash_Read( base_address++ );
	}
	ptr = (BYTE*) (&sector_header_1);
	base_address = SECTOR_1_BASE_ADDRESS;
	for ( i=0; i < sizeof(sector_header_1); i++ )
	{
		ptr[i] = Boot_Flash_Read( base_address++ );
	}

	// Check for corrupted sectors
	// This would occur if a sector erase was interrupted by a power loss
	// In this case, the sector must be re-erased
	if ( ~(sector_header_0.sector ^ sector_header_0.sector_checksum) )
	{
		if ( Eeprom_Sector_Erase(SECTOR_0) ) return SECTOR_ERASE_ERROR;
		sector_header_0.sector_status = ERASED;
	}
	if ( ~(sector_header_1.sector ^ sector_header_1.sector_checksum) )
	{
		if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;
		sector_header_1.sector_status = ERASED;
	}

	// Get maximum number of records from header
	// If unable, return error
	if ( sector_header_0.max_records != 0xFFFF )
		max_rec = sector_header_0.max_records;
	else if ( sector_header_1.max_records != 0xFFFF )
		max_rec = sector_header_1.max_records;
	else
		return ILLEGAL_RECORD_NUMBER;

	// Check for invalid header states and repair
	switch(sector_header_0.sector_status)
	{
    case ERASED:
		if( sector_header_1.sector_status == VALID__SECTOR )  // sector 1 is valid
		{		    
          	if ( Eeprom_Sector_Erase(SECTOR_0) ) return SECTOR_ERASE_ERROR;			
		}     
		else  // invalid state re-format database
		{
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
			if ( E_andF_Sector(SECTOR_0, max_rec) ) return FORMAT_FAILED;
			return INVALID_SECTOR_STATE;
     	}
		break;
	case RECEIVE_DATA:	
       	if ( sector_header_1.sector_status == VALID__SECTOR ) // use sector 1
       	{
          	if ( Eeprom_Sector_Erase(SECTOR_0) ) return SECTOR_ERASE_ERROR;			
      	}
		else if(sector_header_1.sector_status == TRANSFER_COMPLETE) //use sector 0
		{
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;	
			// update sector 0 header to valid data 
			sector_header_0.sector_status = VALID__SECTOR;
			ptr = (BYTE*) (&sector_header_0);
			base_address = SECTOR_0_BASE_ADDRESS;
			for ( i=0; i < sizeof(sector_header_0); i++ )
			{
				if ( Boot_Flash_Write( base_address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
			}
		}
		else  // invalid state erase both sectors
		{
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
			if ( E_andF_Sector(SECTOR_0, max_rec) ) return FORMAT_FAILED;
			return INVALID_SECTOR_STATE;
     	}
		break;
	case VALID__SECTOR:	
		if ( sector_header_1.sector_status == VALID__SECTOR ) // invalid state erase both sectors
		{		    
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
			if ( E_andF_Sector(SECTOR_0, max_rec) ) return FORMAT_FAILED;
			return INVALID_SECTOR_STATE;
       	}
		else // sector 0 is valid sector, erase sector 1
       	{
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
		}
		break;
   	case TRANSFER_COMPLETE:
		if ( sector_header_1.sector_status == VALID__SECTOR ) // erase sector 0
		{		    
          	if ( Eeprom_Sector_Erase(SECTOR_0) ) return SECTOR_ERASE_ERROR;			
		}				
		else if (sector_header_1.sector_status == RECEIVE_DATA) // erase sector 0, use sector 1
		{
          	if ( Eeprom_Sector_Erase(SECTOR_0) ) return SECTOR_ERASE_ERROR;	
			// mark sector 1 as valid sector 
			sector_header_1.sector_status = VALID__SECTOR;
			ptr = (BYTE*) (&sector_header_1);
			base_address = SECTOR_1_BASE_ADDRESS;
			for ( i=0; i < sizeof(sector_header_1); i++ )
			{
				if ( Boot_Flash_Write( base_address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
			}
		}
		else // invalid state, format both sectors
		{
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
			if ( E_andF_Sector(SECTOR_0, max_rec) ) return FORMAT_FAILED;
			return INVALID_SECTOR_STATE;
 		}
		break;
	default:  // any other state, erase both sectors
 	
          	if ( Eeprom_Sector_Erase(SECTOR_1) ) return SECTOR_ERASE_ERROR;			
			if ( E_andF_Sector(SECTOR_0, max_rec) ) return FORMAT_FAILED;
			return INVALID_SECTOR_STATE;
		break;
	}

	// Check for corrupted data 
	// This would happen if a data write/update was interrupted by a power loss
	for ( i=0; i<max_rec; i++ )
	{
		// get address of last entry of each record
		last_address = Read_Record_Data_Structure( i, (BYTE*) (&record) );
		// repair record entry if necessary
		if ( record.status == UPDATE_DATA )
  		{
			// get sector	
			valid_sector = Find_Active_Sector(F_WRITE);
			if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;
			// get base address of sector
			base_address = 	SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE);
 	  		// get address for repaired entry
	   		new_address = Find_Next_Address();
			if( new_address == SECTOR_FULL ) return SECTOR_FULL; // abort if sector is full
			// set status and pointer to next data
			record.status = VALID_DATA;
			record.last_record_update = 0xFFFF;
			// write new record with old data
			ptr = (BYTE*) (&record);
			for ( j=0; j<sizeof(record); j++ )
			{
				 if ( Boot_Flash_Write(new_address++, ptr[j]) ) return FLASH_WRITE_ERROR;
			}
			// fix status and pointer of old record
			record.status = SUPERSEDED;
			record.last_record_update = new_address - sizeof(record);
			for ( j=0; j < sizeof(record); j++ )
			{
				if ( Boot_Flash_Write( last_address++, ptr[j] ) ) return FLASH_WRITE_ERROR;
			}
		}
	}

	return 0;
}

/***** Update_Record *****/
// Update record in EEPROM.
// Accepts record id and new record data.
// Swaps to empty sector if current sector is full
BYTE Update_Record(WORD id, BYTE xdata *buf)
{
    WORD i; 
    BYTE xdata status;
	BYTE xdata bufover[EEPROM_RECORD_SIZE];

	status = Write_Record(id, buf);
   
	// when the sector is full, save the new record to ram and transfer to a blank sector	
	if( status == SECTOR_FULL ) 
	{
		// store new data in temporary buffer
		for ( i=0; i < sizeof(bufover); i++ )
		{
			bufover[i] = buf[i];
		}
		// perform sector swap
		status = Eeprom_Sector_Swap(id, &bufover);
	}
	
	return status;	
}

/***** Read_Record *****/
// Reads a data element from EEPROM.
// Accepts record id number.
// Returns record data byte. If error, returns error code.
BYTE Read_Record(WORD id_number, BYTE* buffer)
{
	BYTE xdata valid_sector = 0xFF;
	xdata struct sector_header xdata header;
	xdata struct record_entry xdata record;
	WORD i;
	BYTE *ptr;
	BYTE xdata *data_buf;
	WORD xdata address;
	WORD xdata base_address;
	WORD xdata last_address;

	// get active sector
	valid_sector = Find_Active_Sector(F_READ);
	if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;

	// get pointer to data
	data_buf = buffer;

	// calculate base address of data
	base_address = 	SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE) + 
					(WORD)sizeof(header) + ( id_number * (WORD)sizeof(record) );

	// get base record
	ptr = (BYTE*) (&record);
	address = base_address;
	for ( i=0; i<sizeof(record); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}

	// get last record
	if ( record.last_record_update != 0xFFFF )
	{
		address = base_address;
		do	
		{
			ptr = (BYTE*) (&record);
			last_address = address;
			for ( i=0; i<sizeof(record); i++ )
			{
				ptr[i] = Boot_Flash_Read( address++ );
			}
			address = record.last_record_update;
		} while ( record.last_record_update != 0xFFFF );
	 }
	 else
	 {
	 	last_address = base_address;
	 }

	 if( record.status == UNINITIALIZED ) return UNINITIALIZED;

	// Set data buffer
	for ( i=0; i<EEPROM_RECORD_SIZE; i++ )
	{
		data_buf[i] = record.record_data[i];
	}

	return 0;
}

/***** Write_Record *****/
// Write or update record in EEPROM.
// Accepts record id and new record data.
// If error, returns error code.
BYTE Write_Record(WORD id, BYTE xdata *buffer)
{
	xdata struct sector_header xdata header;
	xdata struct record_entry xdata record;
	WORD i;
	BYTE xdata valid_sector;
	WORD xdata last_address;
	WORD xdata base_address;
	WORD xdata new_address;
	WORD address;
	BYTE *ptr;
	BYTE xdata *data_buf;

	// get active sector
	valid_sector = Find_Active_Sector(F_WRITE);
	if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;

	// get pointer to data
	data_buf = buffer;

	// calculate base address of data
	base_address = 	SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE) + 
					(WORD)sizeof(header) + ( id * (WORD)sizeof(record) );

	// get base record
	ptr = (BYTE*) (&record);
	address = base_address;
	for ( i=0; i<sizeof(record); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}

	// write data if record not initialized
	if ( record.status == UNINITIALIZED )
	{
		record.status = VALID_DATA;
		record.last_record_update = 0xFFFF;
		for ( i=0; i < EEPROM_RECORD_SIZE; i++ )
		{
			record.record_data[i] = data_buf[i];	// set data byte
		}

		// write record to flash
		ptr = (BYTE*) (&record);
		address = base_address;
		for ( i=0; i < sizeof(record); i++ )
		{
			if ( Boot_Flash_Write( address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
		}

		return 0;
	}
	
	// find last entry if record initialized	
	address = base_address;
	do
	{
		ptr = (BYTE*) (&record);
		for ( i=0; i<sizeof(record); i++ )
		{
			ptr[i] = Boot_Flash_Read( address++ );
		}
		if ( record.status == SUPERSEDED )
		{
			address = record.last_record_update;
		}
		
	} while ( record.status == SUPERSEDED );

	last_address = address - (WORD)sizeof(record);

	// get next available address
	new_address = Find_Next_Address();
	if( new_address == SECTOR_FULL ) return SECTOR_FULL; // abort if sector is full

	// set old record to update in progress
	address = last_address;
	for ( i=0; i<sizeof(record); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}
	record.status = UPDATE_DATA;
	address = last_address;
	for ( i=0; i < sizeof(record); i++ )
	{
		if ( Boot_Flash_Write( address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
	}

	// write data to new address
	address = new_address;
	record.status = VALID_DATA;
	record.last_record_update = 0xFFFF;
	for ( i=0; i < EEPROM_RECORD_SIZE; i++ )
	{
		record.record_data[i] = data_buf[i];	// set data byte
	}
	address = new_address;
	for ( i=0; i < sizeof(record); i++ )
	{
		if ( Boot_Flash_Write( address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
	}

	// update old record to superseded
	address = last_address;
	for ( i=0; i<sizeof(record); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}
	record.status = SUPERSEDED;
	record.last_record_update = (struct record_entry xdata *)new_address;
	address = last_address;
	for ( i=0; i < sizeof(record); i++ )
	{
		if ( Boot_Flash_Write( address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
	}

	return 0;
}

/***** Boot_Flash_Write *****/
// Writes data byte to secondary flash.
// Accepts address in flash; data (byte).
// Returns 0 for successful write. If error, returns 1. 
BYTE Boot_Flash_Write(WORD address, BYTE data_byte)
{
	BYTE xdata readback;
	BYTE xdata done;
	BYTE xdata error;
	BYTE xdata err;
	BYTE xdata poll;
	BYTE xdata erase_flag_0 = 0;
	BYTE xdata erase_flag_1 = 0;
	static BYTE reentry_flag;

	// check for re-entrant call to this function
	if ( reentry_flag ) return FLASH_ACCESS_ERROR;

	reentry_flag = 1;

	// un-comment for re-entrancy test
	//EA = 1;		/* enable interrupts */

	done = FALSE;
   	err = FALSE;

	// suspend any erase in progress		
	if ( Eeprom_Sector_Erase_Status(SECTOR_0) )
    {
		if ( Eeprom_Sector_Erase_Suspend(SECTOR_0) ) return SECTOR_ERASE_ERROR;
		erase_flag_0 = 1;
	}
	if ( Eeprom_Sector_Erase_Status(SECTOR_1) )
    {
		if ( Eeprom_Sector_Erase_Suspend(SECTOR_1) ) return SECTOR_ERASE_ERROR;
		erase_flag_1 = 1;
	}

	// disable interrupts during flash write sequence
	EA = 0;

	// write data byte
	*((char xdata *) (SECTOR_0_BASE_ADDRESS + 0x0555)) = 0xAA;
	*((char xdata *) (SECTOR_0_BASE_ADDRESS + 0x0AAA)) = 0x55;
	*((char xdata *) (SECTOR_0_BASE_ADDRESS + 0x0555)) = 0xA0;
	*((char xdata *) address) = data_byte;

	// enable interrupts following write
	EA = 1;

	// now use dat polling method to verify successful write
	do
    {  
   		poll = *((char xdata *) address);	// Read the location that was just programmed
		error = poll & NVM_ERROR;		// save timeout error bit at DQ5
		poll = poll & NVM_DATA_POLL;	// get DQ7 of poll byte read from flash  

		if ((data_byte & NVM_DATA_POLL) == poll)	// compare DQ7 
			done = TRUE;		// dat byte programmed into flash OK, indicate successful exit criteria
		else if (error == NVM_ERROR)	// check for timeout error   
			err = TRUE;					// indicate timeout error occurred

    } while((done == FALSE) && (err == FALSE));

	// make sure timeout error and dat poll didn't occur simultaneously
	if (err == TRUE)                
	{
   		poll = *((char xdata *) address);	// Read location in flash again
		poll = poll & NVM_DATA_POLL;   				// get DQ7 of poll byte read from flash  

		if ((data_byte & NVM_DATA_POLL) == poll)	// compare DQ7 
			done = TRUE;	// dat byte programmed into flash OK at the same time timout 
							//error occured, indicate successful exit criteria

		*((char xdata *) (SECTOR_0_BASE_ADDRESS + 0x0555)) = 0xF0;
		//*((char xdata *) 0x0555) = 0xF0;	// reset the flash array (short reset instruction) 
	}	        							// now delay 3 msec per dat sheet

	// verify successful write by reading back data and comparing with original	
	readback = *((char xdata *) address);	// readback data from flash

	// resume any suspended erase
	if ( erase_flag_0 )
	{
		if ( Eeprom_Sector_Erase_Resume(SECTOR_0) ) return SECTOR_ERASE_ERROR;
	}
	if ( erase_flag_1 )
	{
		if ( Eeprom_Sector_Erase_Resume(SECTOR_1) ) return SECTOR_ERASE_ERROR;
	}

	reentry_flag = 0;

	return !(readback == data_byte);	// if valid return success
}

/***** Read_Record_Data_Structure *****/
// Reads an entire record structure from memory.
// Accepts record id number.
// Returns address of last record. If error, returns error message.
WORD Read_Record_Data_Structure(WORD id_number, BYTE* buffer)
{
	BYTE xdata valid_sector = 0xFF;
	xdata struct sector_header xdata header;
	xdata struct record_entry xdata record;
	WORD i;
	BYTE *ptr;
	BYTE xdata *data_buf;
	WORD address;
	WORD xdata base_address;
	WORD xdata last_address;

	// get active sector
	valid_sector = Find_Active_Sector(F_READ);
	if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;

	// get pointer to data
	data_buf = buffer;

	// calculate base address of data
	base_address = 	SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE) + 
					(WORD)sizeof(header) + ( id_number * (WORD)sizeof(record) );

	// get base record
	ptr = (BYTE*) (&record);
	address = base_address;
	for ( i=0; i<sizeof(record); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}

	// get last record
	if ( record.last_record_update != 0xFFFF )
	{
		address = base_address;
		do	
		{
			ptr = (BYTE*) (&record);
			last_address = address;
			for ( i=0; i<sizeof(record); i++ )
			{
				ptr[i] = Boot_Flash_Read( address++ );
			}
			address = record.last_record_update;
		} while ( record.last_record_update != 0xFFFF );
	 }
	 else
	 {
	 	last_address = base_address;
	 }

	// Get last record
	for (i=0; i<sizeof(record); i++)
	{
		data_buf[i] = Boot_Flash_Read(last_address++);
	}

	// return address of last record
	return last_address - sizeof(record);
}

/***** Boot_Flash_Read *****/
// Reads data from secondary flash.
// Accepts address.
// Returns data at address. 
BYTE Boot_Flash_Read(WORD address)
{	
	BYTE xdata erase_flag_0 = 0;
	BYTE xdata erase_flag_1 = 0;
	BYTE data_byte;
	static BYTE xdata reentry_flag;

	// check for re-entrant call to this function
	if ( reentry_flag ) return FLASH_ACCESS_ERROR;

	reentry_flag = 1;

	// un-comment for re-entrancy test
	//EA = 1;		/* enable interrupts */

	// suspend any erase in progress		
	if ( Eeprom_Sector_Erase_Status(SECTOR_0) )
    {
		if ( Eeprom_Sector_Erase_Suspend(SECTOR_0) ) return SECTOR_ERASE_ERROR;
		erase_flag_0 = 1;
	}
	if ( Eeprom_Sector_Erase_Status(SECTOR_1) )
    {
		if ( Eeprom_Sector_Erase_Suspend(SECTOR_1) ) return SECTOR_ERASE_ERROR;
		erase_flag_1 = 1;
	}

	// read data byte from flash
	data_byte = *((char xdata *) address);

	// resume any suspended erase
	if ( erase_flag_0 )
	{
		if ( Eeprom_Sector_Erase_Resume(SECTOR_0) ) return SECTOR_ERASE_ERROR;
	}
	if ( erase_flag_1 )
	{
		if ( Eeprom_Sector_Erase_Resume(SECTOR_1) ) return SECTOR_ERASE_ERROR;
	}

	reentry_flag = 0;

	return data_byte;
}

/***** Eeprom_Sector_Erase *****/
// Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase(BYTE sector)
{
	BYTE xdata done;
 	BYTE xdata poll;
 	BYTE xdata error;
 	BYTE xdata err;

	done = FALSE;
   	err = FALSE;

	switch (sector)
	{
	case SECTOR_0:
		*(BOOT_FLASH_SECTOR_0_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_0_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_0_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_0_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_0_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS) = 0x30;// erase sector
		do		  			// now use dat polling method to verify successful erase
    	{  
			poll = *((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS); 	// read flash status from any address
			error = poll & NVM_ERROR;	// save timeout error bit at DQ5
			poll = poll & NVM_DATA_POLL;	// look at D7   
			if ( poll == NVM_DATA_POLL )	// compare DQ7 
				done = TRUE;		// bulk erase OK,
			else if (error == NVM_ERROR)	// check for timeout error   
				err = TRUE;		// indicate timeout error occurred
    	} while( (done == FALSE) && (err == FALSE) ); 
		if ( err == TRUE )			// make sure timeout error and dat poll didn't occur simultaneously
    	{
			poll = *((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS); 	// Read flash status again
			poll = poll & NVM_DATA_POLL;	// get DQ7 of poll byte read from flash  
			if (poll == NVM_DATA_POLL)		// compare DQ7 
				done = TRUE;				// the flash erased OK at the same time timout error occured
			*(BOOT_FLASH_SECTOR_0_X555) = 0xF0;  // reset the flash array (short reset instruction) 
    	}
		break;
	case SECTOR_1:
		*(BOOT_FLASH_SECTOR_1_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_1_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_1_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_1_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_1_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS) = 0x30;// erase sector
		do		  			// now use dat polling method to verify successful erase
    	{  
			poll = *((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS); 	// read flash status from any address
			error = poll & NVM_ERROR;	// save timeout error bit at DQ5
			poll = poll & NVM_DATA_POLL;	// look at D7   
			if ( poll == NVM_DATA_POLL )	// compare DQ7 
				done = TRUE;		// bulk erase OK,
			else if (error == NVM_ERROR)	// check for timeout error   
				err = TRUE;		// indicate timeout error occurred
    	} while( (done == FALSE) && (err == FALSE) ); 
		if ( err == TRUE )			// make sure timeout error and dat poll didn't occur simultaneously
    	{
			poll = *((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS); 	// Read flash status again
			poll = poll & NVM_DATA_POLL;	// get DQ7 of poll byte read from flash  
			if (poll == NVM_DATA_POLL)		// compare DQ7 
				done = TRUE;				// the flash erased OK at the same time timout error occured
			*(BOOT_FLASH_SECTOR_0_X555) = 0xF0;  // reset the flash array (short reset instruction) 
    	}
		break;
	case SECTOR_2:
		*(BOOT_FLASH_SECTOR_2_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_2_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_2_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_2_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_2_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS) = 0x30;// erase sector
		do		  			// now use dat polling method to verify successful erase
    	{  
			poll = *((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS); 	// read flash status from any address
			error = poll & NVM_ERROR;	// save timeout error bit at DQ5
			poll = poll & NVM_DATA_POLL;	// look at D7   
			if ( poll == NVM_DATA_POLL )	// compare DQ7 
				done = TRUE;		// bulk erase OK,
			else if (error == NVM_ERROR)	// check for timeout error   
				err = TRUE;		// indicate timeout error occurred
    	} while( (done == FALSE) && (err == FALSE) ); 
		if ( err == TRUE )			// make sure timeout error and dat poll didn't occur simultaneously
    	{
			poll = *((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS); 	// Read flash status again
			poll = poll & NVM_DATA_POLL;	// get DQ7 of poll byte read from flash  
			if (poll == NVM_DATA_POLL)		// compare DQ7 
				done = TRUE;				// the flash erased OK at the same time timout error occured
			*(BOOT_FLASH_SECTOR_0_X555) = 0xF0;  // reset the flash array (short reset instruction) 
    	}
		break;
	case SECTOR_3:
		*(BOOT_FLASH_SECTOR_3_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_3_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_3_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_3_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_3_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS) = 0x30;// erase sector
		do		  			// now use dat polling method to verify successful erase
    	{  
			poll = *((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS); 	// read flash status from any address
			error = poll & NVM_ERROR;	// save timeout error bit at DQ5
			poll = poll & NVM_DATA_POLL;	// look at D7   
			if ( poll == NVM_DATA_POLL )	// compare DQ7 
				done = TRUE;		// bulk erase OK,
			else if (error == NVM_ERROR)	// check for timeout error   
				err = TRUE;		// indicate timeout error occurred
    	} while( (done == FALSE) && (err == FALSE) ); 
		if ( err == TRUE )			// make sure timeout error and dat poll didn't occur simultaneously
    	{
			poll = *((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS); 	// Read flash status again
			poll = poll & NVM_DATA_POLL;	// get DQ7 of poll byte read from flash  
			if (poll == NVM_DATA_POLL)		// compare DQ7 
				done = TRUE;				// the flash erased OK at the same time timout error occured
			*(BOOT_FLASH_SECTOR_0_X555) = 0xF0;  // reset the flash array (short reset instruction) 
    	}
		break;
	default:
		return 1;
	}

   	return !(done);	
}

/***** Eeprom_Sector_Erase_Start*****/
// Start Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Start(BYTE sector)
{
	switch (sector)
	{
	case SECTOR_0:
		*(BOOT_FLASH_SECTOR_0_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_0_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_0_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_0_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_0_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS) = 0x30;// erase sector
		break;
	case SECTOR_1:
		*(BOOT_FLASH_SECTOR_1_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_1_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_1_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_1_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_1_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS) = 0x30;// erase sector
		break;
	case SECTOR_2:
		*(BOOT_FLASH_SECTOR_2_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_2_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_2_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_2_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_2_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS) = 0x30;// erase sector
		break;
	case SECTOR_3:
		*(BOOT_FLASH_SECTOR_3_X555) = 0xAA;		// unlock main flash, write 0xAA to addess 0xX555
		*(BOOT_FLASH_SECTOR_3_XAAA) = 0x55;		// unlock main flash, write 0x55 to addess 0xXAAA
		*(BOOT_FLASH_SECTOR_3_X555) = 0x80;		// write 0x80 command to erase entire chip
		*(BOOT_FLASH_SECTOR_3_X555) = 0xAA;     // continue unlock sequence
		*(BOOT_FLASH_SECTOR_3_XAAA) = 0x55;		// continue unlock sequence
		*((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS) = 0x30;// erase sector
		break;
	default:
		return 1;

	}
   	return 0;
}

/***** Eeprom_Sector_Erase_Suspend*****/
// Susupend Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Suspend(BYTE sector)
{
	switch (sector)
	{
	case SECTOR_0:
		*((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS) = 0xB0;// Suspend erase sector
		break;
	case SECTOR_1:
		*((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS) = 0xB0;// Suspend erase sector
		break;
	case SECTOR_2:
		*((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS) = 0xB0;// Suspend erase sector
		break;
	case SECTOR_3:
		*((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS) = 0xB0;// Suspend erase sector
		break;
	default:
		return 1;
	}


   	return 0;
}

/***** Eeprom_Sector_Erase_Resume*****/
// Resume Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Resume(BYTE sector)
{
	switch (sector)
	{
	case SECTOR_0:
		*((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS) = 0x30;// Resume erase sector
		break;
	case SECTOR_1:
		*((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS) = 0x30;// Resume erase sector
		break;
	case SECTOR_2:
		*((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS) = 0x30;// Resume erase sector
		break;
	case SECTOR_3:
		*((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS) = 0x30;// Resume erase sector
		break;
	default:
		return 1;
	}

   	return 0;
}

/***** Eeprom_Sector_Erase_Status *****/
// Gets status of sector erase.
// Accepts sector number (0-3).
// Returns 0 if erase cycle finished. Returns 1 if erase in progress. 
BYTE Eeprom_Sector_Erase_Status(BYTE sector)
{
	BYTE poll;

	switch (sector)
	{
	case SECTOR_0:
		poll = *((volatile unsigned char xdata *)SECTOR_0_BASE_ADDRESS);
		return !( poll & 0x80); 
	case SECTOR_1:
		poll = *((volatile unsigned char xdata *)SECTOR_1_BASE_ADDRESS);
		return !( poll & 0x80); 
	case SECTOR_2:
		poll = *((volatile unsigned char xdata *)SECTOR_2_BASE_ADDRESS);
		return !( poll & 0x80); 
	case SECTOR_3:
		poll = *((volatile unsigned char xdata *)SECTOR_3_BASE_ADDRESS);
		return !( poll & 0x80); 
	default:
		return 1;
	}
   	return 0;
}

/***** Find_Next_Address *****/
// Finds next available address for data record.
// Returns next available address. 
WORD Find_Next_Address(void)
{
	BYTE xdata valid_sector;
	xdata struct sector_header xdata header;
	xdata struct record_entry xdata record;
	WORD address;
	BYTE *ptr;
	WORD i;

	// Find valid sector
	valid_sector = Find_Active_Sector(F_WRITE);
	if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;

	// Get sector header
	ptr = (BYTE*) (&header);
	address = SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE);	
	for ( i=0; i<(WORD)sizeof(header); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}

	// Calculate address
	address = SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE) + 	// sector base address
	(WORD)sizeof(header) + 													// sector header
	(header.max_records * (WORD)sizeof(record));							// first instance of each record
	ptr = (BYTE*) (&record);
	for ( i=0; i < SECTOR_SIZE; i += sizeof(record) )
	{
		if ( Boot_Flash_Read( address ) == UNINITIALIZED ) return address;
		address += sizeof(record);
		if ( address >= (SECTOR_0_BASE_ADDRESS + ((WORD)valid_sector * SECTOR_SIZE) 
			+ SECTOR_SIZE - (WORD)sizeof(record)) ) return SECTOR_FULL;
	}
	return ADDRESS_ERROR;
}


/***** Find_Active_Sector *****/
// Finds active sector.
// Returns sector number. 
// If error, returns error code. 
BYTE Find_Active_Sector(BYTE io)
{
	xdata struct sector_header xdata header0;
	xdata struct sector_header xdata header1;
	WORD address;
	BYTE *ptr;
	BYTE i;

	// Check sector 0 for status	
	ptr = (BYTE*) (&header0);
	address = SECTOR_0_BASE_ADDRESS;
	for ( i=0; i < sizeof(header0); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}
	// Check sector 1 for status	
	ptr = (BYTE*) (&header1);
	address = SECTOR_1_BASE_ADDRESS;
	for ( i=0; i < sizeof(header1); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ ); 
	}	

	switch (io)
	{
	case F_WRITE: // write
		if( header0.sector_status == VALID__SECTOR )
		{
			if( header1.sector_status == RECEIVE_DATA )
			{
				return (SECTOR_1);
			} 
			else
			{
				return (SECTOR_0); 
			}
		}
		else if( header1.sector_status == VALID__SECTOR )			 
		{
			if( header0.sector_status == RECEIVE_DATA )
			{
				return (SECTOR_0);
			}
			else
			{
				return (SECTOR_1); 
			}
		}
	case F_READ:  // read  
		if( header0.sector_status == VALID__SECTOR )
		{	    
			return (SECTOR_0); 
		}
		else if( header1.sector_status == VALID__SECTOR )           
		{
			return (SECTOR_1); 
		}			 
	default: 
	        return (SECTOR_0); 		
	}
	return 1;
}


/***** Eeprom_Sector_Swap *****/
// Transfers data from full sector to empty one.
// Returns new sector number. 
 BYTE Eeprom_Sector_Swap(WORD inn, BYTE xdata *buf)
{
	xdata struct sector_header xdata sector_header_old;
	xdata struct sector_header xdata sector_header_new; 
	xdata struct record_entry xdata buffer; 		   	
	BYTE *ptr; 
	WORD xdata id;
	BYTE *ptr_old;
	BYTE *ptr_new;
	WORD address;
	BYTE xdata status;
	BYTE i;
	BYTE xdata valid_sector;
	WORD xdata new_sector; // place holder for the sector we are moving to
	WORD xdata old_sector; // place holder for the sector we are moving from
        
	// get active sector  (This is the sector we are moving from)
	valid_sector = Find_Active_Sector(F_READ);
		if ( valid_sector == SECTOR_ID_ERROR ) return SECTOR_ID_ERROR;

	if(valid_sector == SECTOR_1)
	{
		new_sector = SECTOR_0_BASE_ADDRESS;  // move data to this sector
		old_sector = SECTOR_1_BASE_ADDRESS;  // move data from this sector
		sector_header_new.sector = SECTOR_0;
	}
	else
	{
		new_sector = SECTOR_1_BASE_ADDRESS; // move data to this sector
		old_sector = SECTOR_0_BASE_ADDRESS; // move data from this sector
		sector_header_new.sector = SECTOR_1;
	}
		
	// Get old sector header
	ptr_old = (BYTE*) (&sector_header_old);
	address = old_sector;
	for ( i=0; i < sizeof(sector_header_old); i++ )
	{		
        ptr_old[i] = Boot_Flash_Read(address++);
	}

	// Verify new sector is erased
	if ( Eeprom_Sector_Erase(sector_header_new.sector) ) return SECTOR_ERASE_ERROR;

	sector_header_new.sector_checksum = ~(sector_header_new.sector);
	sector_header_new.max_records = sector_header_old.max_records;
	sector_header_new.rec_length = (WORD)EEPROM_RECORD_SIZE;
	sector_header_new.sector_status = RECEIVE_DATA;

	// mark receiving sector (new sector)      
	// mark new sector to receive 
	address = new_sector; 
	ptr_new = (BYTE*) (&sector_header_new);
	for ( i=0; i < sizeof(sector_header_new); i++ )
	{  
		if ( Boot_Flash_Write( address++, ptr_new[i] ) ) return FLASH_WRITE_ERROR;      
	}
                    
	for (id=0; id < sector_header_old.max_records; id++)
	{                       
		if(id == inn) 
		{ 
			ptr = buf; // add the new record as the data is swapped into the new sector 
			status = 0;
		}
		else
		{
			ptr = (BYTE*) (&buffer);
			status = Read_Record(id, ptr);
		}
		if( status != UNINITIALIZED ) Write_Record( id, ptr );			            
	}
      
	// mark good and bad sectors

	// mark old sector TRANSFER_COMPLETE BEFORE marking new sector ACTIVE 
	sector_header_old.sector_status =  TRANSFER_COMPLETE;                      
	address = old_sector; 
	for ( i=0; i < sizeof(sector_header_old); i++ )
	{  
		if ( Boot_Flash_Write( address++, ptr_old[i] ) ) return FLASH_WRITE_ERROR;      
	}

	// mark new sector ACTIVE AFTER marking old TRANSFER_COMPLETE   
	sector_header_new.sector_status =   VALID__SECTOR;      
	address = new_sector; 
	for ( i=0; i < sizeof(sector_header_new); i++ )
	{  
		if ( Boot_Flash_Write( address++, ptr_new[i] ) ) return FLASH_WRITE_ERROR;      
	}
	
	// Start erase of old sector
	if ( Eeprom_Sector_Erase_Start(valid_sector) ) return SECTOR_ERASE_ERROR;
			
	return 0;
}

/***** ERASE and FORMAT SECTOR *****/
// Erases and formats a sector.
// Accepts sector number, type of operation and max records allowed.
// Legal sectors are:
// 	SECTOR_0 for address 0x8000
//	SECTOR_1 for address 0xA000
// If error, returns error code.
BYTE E_andF_Sector(BYTE sector, WORD max_rec)
{                                          
	xdata struct sector_header xdata header;           
	BYTE i;
	WORD address;
	BYTE *ptr;

	header.sector_status = VALID__SECTOR;
	header.sector = sector;
	header.sector_checksum = ~(sector);
	header.max_records = max_rec;
	header.rec_length = (WORD)EEPROM_RECORD_SIZE;

	if(sector == SECTOR_0) address = SECTOR_0_BASE_ADDRESS;
	if(sector == SECTOR_1) address = SECTOR_1_BASE_ADDRESS;

	if ( Eeprom_Sector_Erase(sector) ) return SECTOR_ERASE_ERROR;

	ptr = (BYTE*) (&header);

	// write sector header		
	for ( i=0; i < sizeof( header ); i++ ) 
	{
		if ( Boot_Flash_Write( address++, ptr[i] ) ) return FLASH_WRITE_ERROR;
	}

	return 0;
}

/***** Get_Sector_Status *****/
// Returns sector status.
// If error, returns INVALID_STATUS. 
BYTE Get_Sector_Status(BYTE sector)
{
	xdata struct sector_header xdata header;
	WORD address;
	BYTE *ptr;
	BYTE i;

	// Get sector header	
	ptr = (BYTE*) (&header);
	address = SECTOR_0_BASE_ADDRESS + (sector * SECTOR_SIZE);
	for ( i=0; i < sizeof(header); i++ )
	{
		ptr[i] = Boot_Flash_Read( address++ );
	}
	
	switch (header.sector_status)
	{
		case ERASED:
			return ERASED;
		case RECEIVE_DATA:
			return RECEIVE_DATA;
		case VALID__SECTOR:
			return VALID__SECTOR;
		case TRANSFER_COMPLETE:
			return TRANSFER_COMPLETE;
		default:
			return INVALID_STATUS;			
	}
}

