/*------------------------------------------------------------------------------
upsd3300_hardware.h

Version:
October 1, 2004 Version 2.3 - Set the device's default voltage operation to 3V.
Added memory sizes for all parts in 3300 family and updated comments.

August 2004 Version 2.0 - Updated to follow basic memory map template.

Dependencies: None

Description:
This header file contains the hardware specific defines for the uPSD3300
processor being used.

*******************************************************************************
Important Note: These values must be modified for the specific target hardware.
Some of the parameters may be used in the uPSD initialization code (see
the startup file) and may be used by drivers to set up timers, prescalers, etc. 
*******************************************************************************


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

// uPSD33xx Part Number -- this is used to define the memory size settings
// Note: Only the target device part number should be defined.  All others
//       should be commented out.
//#define uPSD3312
//#define uPSD3333
#define uPSD3334
//#define uPSD3354


// Hardware MCU specific settings
#define FREQ_OSC        40000       // uPSD MCU Oscillator Freq. in KHz (not MHz)
#define uPSD_5V         0           // uPSD_5V = 1  --> 5V device
                                    // uPSD_5V = 0  --> 3V device
// Important Note: FREQ_OSC and uPSD_5V are used in the startup code to set the
//  BUSCON register appropriately to maximize the performance of the device.
//  Make sure these settings match the target device.  Leaving uPSD_5V set to 0
//  for a 5V device will result in less than maximum performance.


// Memory map settings:
// These settings must match up with the settings in the associated PSDsoft
// project for proper execution of the code as well as the Physical Hardware.
// Note: Also the settings in the Complier IDE tool must match as well.


// The base address for the CSIOP registers.

#define PSD_REG_ADDR            0x7F00  // uPSD PSD Register I/O base addr


// Optional hardware definitions used for DK3300 boards
// Customer would need to add their own hardware definitions here

#define LCD_BASE_ADDR           0x7E00  // LCD base address 
                                        // (PSDsoft CSIOP value)


// Memory size settings:
// The size of the SRAM and the flash must match the target device.
// Settings for each of the devices has been included below.  Uncomment the 
// settings for the device being used and comment out the settings for the 
// devices not being used.


// uPSD3312 memory size settings
#ifdef uPSD3312
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x0800  // XDATA length 2KB

#define uPSD_MAIN_SECTOR_SIZE   0x4000  // Main Sector size = 16KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x04    // Number of Main sectors = 4
#define uPSD_BOOT_SECTORS       0x02    // Number of Boot sectors = 2
#endif


// uPSD3333 memory size settings
#ifdef uPSD3333
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x2000  // XDATA length 8KB

#define uPSD_MAIN_SECTOR_SIZE   0x4000  // Main Sector size = 16KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x08    // Number of Main sectors = 8
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif


// uPSD3334 memory size settings
#ifdef uPSD3334
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x2000  // XDATA length 8KB

#define uPSD_MAIN_SECTOR_SIZE   0x8000  // Main Sector size = 32KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x08    // Number of Main sectors = 8
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif


// uPSD3354 memory size settings
#ifdef uPSD3354
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x7F00  // XDATA length 32KB - 256 bytes
                                        // Note: 256 bytes of address space 
                                        //       reserved for the CSIOP 
                                        //       registers (PSD_REG_ADDR)

#define uPSD_MAIN_SECTOR_SIZE   0x8000  // Main Sector size = 32KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x08    // Number of Main sectors = 8
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif

