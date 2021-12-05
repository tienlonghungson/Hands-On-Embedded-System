/*------------------------------------------------------------------------------
upsd3400_hardware.h

Version:
February 22, 2005 Version 2.4 - Added the uPS3422.
October 1, 2004 Version 2.3 - Set the device's default voltage operation to 3V.
Added memory sizes for all parts in 3400 family and updated comments.

August 2004 Version 2.0 - Updated to follow basic memory map template.


Dependencies: None

Description:
This header file contains the hardware specific defines for the uPSD3400
processor being used.

*******************************************************************************
Important Note: These values must be modified for the specific target hardware.
Some of the parameters may be used in the uPSD initialization code (see
the startup file) and may be used by drivers to set up timers, prescalers, etc. 
*******************************************************************************


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

// uPSD34xx Part Number -- this is used to define the memory size settings
// Note: Only the target device part number should be defined.  All others
//       should be commented out.
//#define uPSD3422
//#define uPSD3433
#define uPSD3434


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


// Optional hardware definitions used for DK3400 boards
// Customer would need to add their own hardware definitions here

#define LCD_BASE_ADDR           0x7E00  // LCD base address 
                                        // (PSDsoft CSIOP value)


// Memory size settings:
// The size of the SRAM and the flash must match the target device.
// Settings for each of the devices has been included below.  Uncomment the 
// uPSD34xx part number for the device being used (see above) and the
// compiler will compile the options for that device.


// uPSD3422 memory size settings
#ifdef uPSD3422
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x1000  // XDATA length 4KB

#define uPSD_MAIN_SECTOR_SIZE   0x4000  // Main Sector size = 16KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x04    // Number of Main sectors = 4
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif


// uPSD3433 memory size settings
#ifdef uPSD3433
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x2000  // XDATA length 8KB

#define uPSD_MAIN_SECTOR_SIZE   0x4000  // Main Sector size = 16KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x08    // Number of Main sectors = 8
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif


// uPSD3434 memory size settings
#ifdef uPSD3434
#define XMEM_BASE_ADDR          0x0000  // XDATA base address (PSDsoft RS0 value)
#define XMEM_LENGTH             0x2000  // XDATA length 8KB

#define uPSD_MAIN_SECTOR_SIZE   0x8000  // Main Sector size = 32KB
#define uPSD_BOOT_SECTOR_SIZE   0x2000  // Boot Sector size = 8KB
#define uPSD_MAIN_SECTORS       0x08    // Number of Main sectors = 8
#define uPSD_BOOT_SECTORS       0x04    // Number of Boot sectors = 4
#endif
