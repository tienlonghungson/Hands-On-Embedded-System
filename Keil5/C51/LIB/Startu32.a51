$NOMOD51
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  Startu32.a51
;
;  Version:
;  September 2004 Version 0.7 - Removed code that disables the DDC SRAM as it is
;                                disabled by default upon reset.
;  July 2004 Version 0.6 - Comments edited, added note about DDC SRAM related to
;                           date code.
;  June 2004 Version 0.5 - Comments edited, code to disable DDC SRAM corrected.
;  March 2005 Version 0.6 - Added comments for Keil Configuration Wizard
;  Dependencies: None
;
;
;  Description:
;  This code is executed after a reset.  Besides the usual C51 startup 
;  settings, other uPSD Turbo initializations can be added here.  When
;  the startup code execution is complete, this code jumps to C_START that is 
;  typically the main() function in the C code.
;
;  Notes:
;   - Watchdog timer is disabled - should be enabled at beginning of user's code
;   - DDC and its RAM is disabled
;   - Various IP prescalers are set to large values (lowers power consumption)
;     The IP device drivers must initialize the prescalers appropriately.
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


;  User-defined <h> Power-On Initialization of Memory (Clear Memory)
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:

;               ; the absolute start-address of IDATA memory is always 0
; <o> IDATALEN: IDATA memory size <0x0-0x1FF>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space overlaps physically the DATA and BIT areas.
IDATALEN        EQU     100H    ; the length of IDATA memory in bytes.

; *** NOTE: uPSD users need to fill in the following based on where SRAM memory mapped.

; <o> XDATASTART: XDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of XDATA memory
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
XDATASTART      EQU     0     
;
; <o> XDATALEN: XDATA memory size <0x0-0xFFFF> 
;     <i> The length of XDATA memory in bytes.
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
XDATALEN        EQU     0      
;
; <o> PDATASTART: PDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of PDATA memory
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
PDATASTART      EQU     0H
;
; <o> PDATALEN: PDATA memory size <0x0-0xFF> 
;     <i> The length of PDATA memory in bytes.
;     <i> *** NOTE: uPSD users need to fill this in based on where SRAM memory mapped.
PDATALEN        EQU     0H
;
;</h>
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.


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
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
;<e> PPAGEENABLE: Compact Model Page Definition
;    <i>Define the XDATA page used for PDATA variables. 
;    <i>PPAGE must conform with the PPAGE set in the linker invocation.
;
; Enable pdata memory page initalization
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
; <o> PPAGE: PDATA Page number <0x0-0xFF> 
;     <i> Uppermost 256-byte address of the page used for pdata variables.
PPAGE           EQU     0       ; define PPAGE number.
;
; <o> PPAGE_SFR: SFR address containing PPAGE value <0x0-0xFF> 
;     <i> NOTE: Most 8051 variants use P2 as uppermost address byte.
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
WDKEY   DATA    0AEH
ASCL    DATA    095H
PSCL0L  DATA    0B1H
PSCL0H  DATA    0B2H
PSCL1L  DATA    0B3H
PSCL1H  DATA    0B4H
USCL    DATA    0E1H
DDCCON  DATA    0D7H
S1CON   DATA    0D8H

                NAME    ?C_STARTUP


?C_C51STARTUP   SEGMENT   CODE
?STACK          SEGMENT   IDATA

                RSEG    ?STACK
                DS      1

                EXTRN CODE (?C_START)
                PUBLIC  ?C_STARTUP

                CSEG    AT      0
?C_STARTUP:     LJMP    STARTUP1

                RSEG    ?C_C51STARTUP

STARTUP1:

; uPSD specific initialization

                MOV     A, #0FEH          ; Load pre-scalars with large value
                MOV     ASCL, A           ; Slow down ADC Logic
                MOV     PSCL0L, A         ; Slow down PWM Logic
                MOV     PSCL0H, A
                MOV     PSCL1L, A
                MOV     PSCL1H, A
                MOV     USCL, A           ; Slow down USB Logic

                MOV     A, #055H          ; Disable Watch Dog Reset
                MOV     WDKEY, A

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
