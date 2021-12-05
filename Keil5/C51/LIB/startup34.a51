$NOMOD51
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  startup34.a51
;
;  Version:
;  September 2004 Ver 0.1 - JK mod of startup33.a51 - has not been tested.
;  March 2005 Version 0.2 - Added comments for Keil Configuration Wizard
;
;  Dependencies:
;  uPSD_5V and FREQ_OSC are used as input parameters to set up the BUSCON 
;  register appropriately for proper uPSD3400 operation.  They are set in the
;  header file, upsd3400_hardware.h, for the target processor.
;
;  Description:
;  This code is executed after a reset.  Besides the usual C51 startup 
;  settings, specific uPSD3400 initializations are done here such as the
;  BUSCON register.  Other uPSD3400 initializations can be added here.  When
;  the startup code execution is complete, this code jumps to ?C_START that 
;  is typically the main() function in the C code.
;  
;
;  Copyright (c) 2004 STMicroelectronics Inc.
;
;  This example demo code is provided as is and has no warranty,
;  implied or otherwise.  You are free to use/modify any of the provided
;  code at your own risk in your applications with the expressed limitation
;  of liability (see below) so long as your product using the code contains
;  at least one uPSD product (device).
;
;  LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
;  AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
;  INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
;  CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
;  OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
;------------------------------------------------------------------------------

#include "upsd3400_hardware.h"

;  User-defined <h> Power-On Initialization of Memory (Clear Memory)
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:

;               ; the absolute start-address of IDATA memory is always 0
; <o> IDATA memory size <0x0-0x1FF>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space overlaps physically the DATA and BIT areas.
IDATALEN        EQU     100H    ; the length of IDATA memory in bytes.

; NOTE: The length equates for XDATALEN and PDATALEN should be changed to 
;       non-zero values indicating the amount of XDATA and/or PDATA
;       memory to be initialized to 0x00.  The start address equates 
;       (XDATASTART and PDATASTART) must be set to the respective starting
;       addresses as mapped in PSDsoft if the memory is to be initialized.

; <o> XDATASTART: XDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of XDATA memory
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
XDATASTART      EQU     0H      ; the absolute start-address of XDATA memory
; <o> XDATALEN: XDATA memory size <0x0-0xFFFF> 
;     <i> The length of XDATA memory in bytes.
;     <i> NOTE: The length equates for XDATALEN and PDATALEN should be changed to 
;     <i>       non-zero values indicating the amount of XDATA and/or PDATA
;     <i>       memory to be initialized to 0x00.  The start address equates 
;     <i>       (XDATASTART and PDATASTART) must be set to the respective starting
;     <i>       addresses as mapped in PSDsoft if the memory is to be initialized.
XDATALEN        EQU     0H      ; the length of XDATA memory in bytes.

; <o> PDATASTART: PDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of PDATA memory
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
PDATASTART      EQU     0H      ; the absolute start-address of PDATA memory
; <o> PDATALEN: PDATA memory size <0x0-0xFF> 
;     <i> The length of PDATA memory in bytes.
;     <i> NOTE: The length equates for XDATALEN and PDATALEN should be changed to 
;     <i>       non-zero values indicating the amount of XDATA and/or PDATA
;     <i>       memory to be initialized to 0x00.  The start address equates 
;     <i>       (XDATASTART and PDATASTART) must be set to the respective starting
;     <i>       addresses as mapped in PSDsoft if the memory is to be initialized.
PDATALEN        EQU     0H      ; the length of PDATA memory in bytes.

;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.

;</h>
;------------------------------------------------------------------------------
;
;<h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
; <h> Stack Space for reentrant functions in the SMALL model.
;  <q> IBPSTACK: Enable SMALL model reentrant stack
;      <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
;  <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;      <i> Set the top of the stack to the highest location. 
IBPSTACKTOP     EQU     0xFF +1     ; default 0FFH+1  
; </h>
;
; <h> Stack Space for reentrant functions in the LARGE model.      
;  <q> XBPSTACK: Enable LARGE model reentrant stack
;      <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
;  <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0xFFFF>
;      <i> Set the top of the stack to the highest location. 
XBPSTACKTOP     EQU     0xFFFF +1   ; default 0FFFFH+1 
; </h>
;
; <h> Stack Space for reentrant functions in the COMPACT model.    
;  <q> PBPSTACK: Enable COMPACT model reentrant stack
;      <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
;
;  <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFFFF>
;      <i> Set the top of the stack to the highest location.
PBPSTACKTOP     EQU     0xFF +1     ; default 0FFH+1  
; </h>
;</h>
;
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
;<e> PPAGEENABLE: Compact Model Page Definition
;      <i>Define the xdata page used for pdata variables. 
;      <i>PPAGE must conform with the PPAGE set in the linker invocation.
;
; Enable pdata memory page initalization
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
; <o> PPAGE number <0x0-0xFF> 
;     <i> Uppermost 256-byte address of the page used for pdata variables.
PPAGE           EQU     0       ; define PPAGE number.
;
; <o> PPAGE_SFR: SFR address containing PPAGE value <0x0-0xFF> 
;     <i> Most 8051 variants use P2 as uppermost address byte
PPAGE_SFR       DATA    0A0H
;
;</e>
;------------------------------------------------------------------------------

; Standard SFR Symbols 
ACC     DATA    0E0H
B       DATA    0F0H
SP      DATA    81H
DPL     DATA    82H
DPH     DATA    83H
BUSCON  DATA    9DH
IE      DATA    0A8H


                NAME    ?C_STARTUP


?C_C51STARTUP   SEGMENT   CODE
?STACK          SEGMENT   IDATA

                RSEG    ?STACK
                DS      1

                EXTRN CODE (?C_START)
                PUBLIC  ?C_STARTUP

                CSEG    AT      0
?C_STARTUP:     LJMP    STARTUP1    ; This is the POR reset vector

; Turbo Debug Interrupt Service routine - Do Not Remove

                CSEG    AT  063H    ; debug interrupt vector
                ANL     0CFH,#0FDH  ; clear debug interrupt request flag
                nop
                RETI



                RSEG    ?C_C51STARTUP
STARTUP1:

; Turbo uPSD specific initialization - Set up BUSCON based on FREQ_OSC

IF (uPSD_5V) > 0                        ; Check if a 5V or 3V Turbo uPSD device

SETUP_BUSCON_5V:
IF (FREQ_OSC ) > 24000                  ; PFQ CLK Frequence 25-40MHz   
                MOV     A, #0C1H        ; Initialize the BUSCON register 
                MOV     BUSCON, A       ; BUSCON.7 = 1, Prefetch Queue is Enabled 
                                        ; BUSCON.6 = 1, Branch Cache is Enabled
                                        ; BUSCON.5, BUSCON.4= 00B - 4 PFQCLK for Xdata Write bus cycle
                                        ; BUSCON.3, BUSCON.2= 00B - 4 PFQCLK for Xdata Read bus cycle
                                        ; BUSCON.1, BUSCON.0= 01B - 4 PFQCLK for Code Fetch bus cycle
ELSE                                    ; PFQ CLK Frequence 8-24MHz 
                MOV     A, #0C0H        ; Initialize the BUSCON register 
                MOV     BUSCON, A       ; BUSCON.7 = 1, Prefetch Queue is Enabled 
                                        ; BUSCON.6 = 1, Branch Cache is Enabled
                                        ; BUSCON.5, BUSCON.4= 00B - 4 PFQCLK for Xdata Write bus cycle
                                        ; BUSCON.3, BUSCON.2= 00B - 4 PFQCLK for Xdata Read bus cycle
                                        ; BUSCON.1, BUSCON.0= 00B - 3 PFQCLK for Code Fetch bus cycle
ENDIF

ELSE 
SETUP_BUSCON_3V:
IF (FREQ_OSC ) >  24000                 ; PFQ CLK Frequence 25-40MHz     
                MOV     A, #0D6H        ; Initialize the BUSCON register 
                MOV     BUSCON, A       ; BUSCON.7 = 1, Prefetch Queue is Enabled 
                                        ; BUSCON.6 = 1, Branch Cache is Enabled
                                        ; BUSCON.5, BUSCON.4= 01B - 5 PFQCLK for Xdata Write bus cycle
                                        ; BUSCON.3, BUSCON.2= 01B - 5 PFQCLK for Xdata Read bus cycle
                                        ; BUSCON.1, BUSCON.0= 10B - 5 PFQCLK for Code Fetch bus cycle
ELSE                                    ; PFQ CLK Frequence 8-24MHz
                MOV     A, #0C0H        ; Initialize the BUSCON register 
                MOV     BUSCON, A       ; BUSCON.7 = 1, Prefetch Queue is Enabled 
                                        ; BUSCON.6 = 1, Branch Cache is Enabled
                                        ; BUSCON.5, BUSCON.4= 00B - 4 PFQCLK for Xdata Write bus cycle
                                        ; BUSCON.3, BUSCON.2= 00B - 4 PFQCLK for Xdata Read bus cycle
                                        ; BUSCON.1, BUSCON.0= 00B - 3 PFQCLK for Code Fetch bus cycle
ENDIF
ENDIF


; Other Turbo Init code goes here...

                MOV     IE, #0xC0       ; Enable Debug Interrupt

IF IDATALEN <> 0
                MOV     R0,#IDATALEN - 1
                CLR     A
IDATALOOP:      MOV     @R0,A
                DJNZ    R0,IDATALOOP
ENDIF

IF XDATALEN <> 0
                MOV     DPTR,#XDATASTART
                MOV     R7,#LOW (XDATALEN)
  IF (LOW (XDATALEN)) <> 0
                MOV     R6,#(HIGH (XDATALEN)) +1
  ELSE
                MOV     R6,#HIGH (XDATALEN)
  ENDIF
                CLR     A
XDATALOOP:      MOVX    @DPTR,A
                INC     DPTR
                DJNZ    R7,XDATALOOP
                DJNZ    R6,XDATALOOP
ENDIF

IF PPAGEENABLE <> 0
                MOV     PPAGE_SFR,#PPAGE
ENDIF

IF PDATALEN <> 0
                MOV     R0,#LOW (PDATASTART)
                MOV     R7,#LOW (PDATALEN)
                CLR     A
PDATALOOP:      MOVX    @R0,A
                INC     R0
                DJNZ    R7,PDATALOOP
ENDIF

IF IBPSTACK <> 0
EXTRN DATA (?C_IBP)

                MOV     ?C_IBP,#LOW IBPSTACKTOP
ENDIF

IF XBPSTACK <> 0
EXTRN DATA (?C_XBP)

                MOV     ?C_XBP,#HIGH XBPSTACKTOP
                MOV     ?C_XBP+1,#LOW XBPSTACKTOP
ENDIF

IF PBPSTACK <> 0
EXTRN DATA (?C_PBP)
                MOV     ?C_PBP,#LOW PBPSTACKTOP
ENDIF

                MOV     SP,#?STACK-1
; This code is required if you use L51_BANK.A51 with Banking Mode 4
;<h> Code Banking
; <q> Select Bank 0 for L51_BANK.A51 Mode 4
#if 0   
;     <i> Initialize bank mechanism to code bank 0 when using L51_BANK.A51 with Banking Mode 4.
EXTRN CODE (?B_SWITCH0)
                CALL    ?B_SWITCH0      ; init bank mechanism to code bank 0
#endif
;</h>
                LJMP    ?C_START



                END
