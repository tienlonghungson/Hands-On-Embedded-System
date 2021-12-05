/*--------------------------------------------------------------------------
eeprom.h

Header file for eeprom emulation using boot (secondary) flash
11/2002 Ver 0.1 - Initial Version


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


//#define PSD_REG_BASE (unsigned int) 0x0000	// base address of PSD8XXFX control registers. This area is
                                               // 256 bytes.

// Data type definitions
#define BYTE unsigned char
#define WORD unsigned int

// EEPROM Initialization Data
// Modify these values for your application.

// 								***** NOTE *****
// 						EEPROM Sector size is 8192 bytes
// 		EEPROM_RECORD_SIZE and max_records (entered by application programmer)
// 							must be defined such that
// 		(max_records * EEPROM_RECORD_SIZE) + header size (7 bytes) <= 8192/2
// 								***** NOTE *****

#define EEPROM_RECORD_SIZE 0x0080 	// size in bytes of each record (128 Bytes)

#define SECTOR_SIZE	0x2000	        // number of bytes per sector


// Addresses to use to invoke embedded algorithm in FLASH memory. Modify for your memory map.	
#define	BOOT_FLASH_SECTOR_0_XAAA (volatile unsigned char xdata *) 0x8AAA
#define	BOOT_FLASH_SECTOR_1_XAAA (volatile unsigned char xdata *) 0xAAAA 
#define	BOOT_FLASH_SECTOR_2_XAAA (volatile unsigned char xdata *) 0xCAAA
#define	BOOT_FLASH_SECTOR_3_XAAA (volatile unsigned char xdata *) 0xEAAA

#define	BOOT_FLASH_SECTOR_0_X555 (volatile unsigned char xdata *) 0x8555 
#define	BOOT_FLASH_SECTOR_1_X555 (volatile unsigned char xdata *) 0xA555 
#define	BOOT_FLASH_SECTOR_2_X555 (volatile unsigned char xdata *) 0xC555 
#define	BOOT_FLASH_SECTOR_3_X555 (volatile unsigned char xdata *) 0xE555 

// Sector base addresses. Modify for your memory map.
#define SECTOR_0_BASE_ADDRESS 0x8000
#define SECTOR_1_BASE_ADDRESS 0xA000
#define SECTOR_2_BASE_ADDRESS 0xC000
#define SECTOR_3_BASE_ADDRESS 0xE000


// Sector status definitions
#define ERASED				0xFF
#define RECEIVE_DATA 		0xFE
#define	VALID__SECTOR		0xFC
#define TRANSFER_COMPLETE	0xF8

// Record status definitions
#define UNINITIALIZED	0xFF
#define VALID_DATA		0xFE
#define UPDATE_DATA		0xFC
#define SUPERSEDED		0xF8

// Secondary flash sector definitions
#define SECTOR_0	0x00
#define SECTOR_1	0x01
#define SECTOR_2	0x02
#define SECTOR_3	0x03

// EEPROM error codes
#define SECTOR_FULL				0x80
#define FORMAT_FAILED			0x81
#define ILLEGAL_RECORD_NUMBER	0x82
#define INVALID_COMMAND			0x83
#define INVALID_STATUS			0x84
#define SECTOR_ID_ERROR			0x85
#define EEPROM_INIT_FAILED		0x86
#define SECTOR_ERASE_ERROR		0x87
#define FLASH_WRITE_ERROR		0x88
#define ADDRESS_ERROR			0x89
#define INVALID_SECTOR_STATE	0x8A
#define FLASH_ACCESS_ERROR		0x8B

// Flash parameters
#define NVM_DATA_POLL     0x80		// flash status "data poll" bit at DQ7   
#define NVM_DATA_TOGGLE   0x40		// flash status "toggle poll" bit at DQ6
#define NVM_ERROR         0x20 		// flash status "error" bit at DQ5   

// Direction indicators for sector swap
#define F_READ	0x00
#define F_WRITE  0x01

// Miscellaneous definitions
#ifndef TRUE
  #define TRUE 0x01
#endif 
#ifndef FALSE
  #define FALSE 0x00
#endif 

// Data Structures for EEPROM Emulation

struct record_entry
{
	BYTE status;
	BYTE record_data[EEPROM_RECORD_SIZE];	// data record byte
	struct record_entry xdata *last_record_update;	// Pointer to next update. If 0xFFFF, this is the valid record.
};

// The parameter table holds the data record information for the active sector.
// Only one sector can be active at a time.
struct sector_header 	
{
	BYTE sector_status;		// see sector status definitions for usage of this byte
							// this must be the first byte in the sector to facilitate erase checking
	BYTE sector;			// sector number
	BYTE sector_checksum;	// complement of sector - used to verify block is not corrupted
	WORD max_records;		// set by application programmer when calling Init.
	WORD rec_length;		// number of data bytes in each record (set to EEPROM_RECORD_SIZE in Init)
};


// ******** User API Function Prototypes ********//

/***** EEPROM_Format *****/
// Formats sectors 0 and 1 to accept record data
// Accepts maximum number of records allowed.
// Returns 0 on success. If error, returns 1.
// ********** WARNING ********** // 
// This function erases any existing data in both sectors
// ********** WARNING ********** // 
BYTE EEPROM_Format(WORD max_records);

/***** Eeprom_Init *****/
// Polls secondary flash for valid sector status byte and 
// Initializes boot flash sector containing data records after power up.
// Restores any incomplete operations to last known good status.
// Returns 0 on success. If error, returns 1.
BYTE Eeprom_Init(void);

/***** Update_Record *****/
// Update record in EEPROM.
// Accepts record id and new record data.
// Returns 0 on success. If error, returns 1.
// Will swap parameters to new sector when full.
BYTE Update_Record(WORD id, BYTE xdata *buf);

/***** Read_Record_Data *****/
// Reads record data into a buffer.
// Accepts record id number and buffer pointer.
// Returns 0 on success. If error, returns 1.
BYTE Read_Record(WORD id_number, BYTE* buffer);



// ******** Low Level Function Prototypes ********//


// Flash write routines

/***** Write_Record *****/
// Update record in EEPROM.
// Accepts record id and new record data.
// Returns 0 on success. If error, returns 1.
BYTE Write_Record(WORD id, BYTE xdata *buffer);

/***** Boot_Flash_Write *****/
// Writes data to secondary flash.
// Accepts address in flash to write, data byte.
// Returns 0 for successful write. If error, returns 1. 
BYTE Boot_Flash_Write(WORD address, BYTE data_byte);

//Flash read routines

/***** Read_Record_Data_Structure *****/
// Reads an entire record structure from memory.
// Accepts record id number.
// Returns 0 on valid read. If error, returns 1.
WORD Read_Record_Data_Structure(WORD id_number, BYTE* buffer);

/***** Boot_Flash_Read *****/
// Reads data from secondary flash.
// Accepts flash address to read from.
// Returns data. 
BYTE Boot_Flash_Read(WORD address);

// Flash erase routines

/***** Eeprom_Sector_Erase *****/
// Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase(BYTE sector);

/***** Eeprom_Sector_Erase_Start*****/
// Start Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Start(BYTE sector);

/***** Eeprom_Sector_Erase_Suspend*****/
// Susupend Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for success. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Suspend(BYTE sector);

/***** Eeprom_Sector_Erase Resume*****/
// Resume Erases one boot flash sector.
// Accepts sector number (0-3).
// Returns 0 for successful erasure. If error, returns 1. 
BYTE Eeprom_Sector_Erase_Resume(BYTE sector);

/***** Eeprom_Sector_Erase_Status *****/
// Gets status of sector erase.
// Accepts sector number (0-3).
// Returns 1 for erase in progress. If OK, returns 0. 
BYTE Eeprom_Sector_Erase_Status(BYTE sector);

// Database management routines

/***** Find_Next_Address *****/
// Finds next available address for data record.
// Returns address. If error, returns error code. 
WORD Find_Next_Address(void);

/***** Find_Active_Sector *****/
// Finds active sector.
// Returns sector number. 
// If error, returns error code. 
BYTE Find_Active_Sector(BYTE io);

/***** Eeprom_Sector_Swap *****/
// Transfers data from full sector to empty one. 
BYTE Eeprom_Sector_Swap(WORD inn, BYTE xdata *buf);

/***** ERASE and FORMAT SECTOR *****/
// Update record in EEPROM.
// Accepts sector id, command, and max record size.
// If error, returns error code.
BYTE E_andF_Sector(BYTE sector, WORD max_rec);

/***** Get_Sector_Status *****/
// Returns sector status.
// If error, returns INVALID_STATUS. 
BYTE Get_Sector_Status(BYTE sector);



