$NOMOD51
;------------------------------------------------------------------------------
;  Startu32.a51
;
;  Version:
;  September 2004 Version 0.7 - Removed code that disables the DDC SRAM as it is
;                                disabled by default upon reset.
;  July 2004 Version 0.6 - Comments edited, added note about DDC SRAM related to
;                           date code.
;  June 2004 Version 0.5 - Comments edited, code to disable DDC SRAM corrected.
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
;  Copyright (c) 2005 STMicroelectronics Inc.
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


;  User-defined Power-On Initialization of Memory (Clear Memory)
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:

;               ; the absolute start-address of IDATA memory is always 0
IDATALEN        EQU     100H    ; the length of IDATA memory in bytes.

; *** NOTE: uPSD users need to fill in the following based on where SRAM memory mapped.

XDATASTART      EQU     0H      ; the absolute start-address of XDATA memory
XDATALEN        EQU     0H      ; the length of XDATA memory in bytes.

PDATASTART      EQU     0H      ; the absolute start-address of PDATA memory
PDATALEN        EQU     0H      ; the length of PDATA memory in bytes.

;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.


;------------------------------------------------------------------------------
;
;  Reentrant Stack Initilization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
;  Stack Space for reentrant functions in the SMALL model.
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
IBPSTACKTOP     EQU     0FFH+1  ; set top of stack to highest location+1.
;
;  Stack Space for reentrant functions in the LARGE model.      
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
XBPSTACKTOP     EQU     0FFFFH+1; set top of stack to highest location+1.
;
;  Stack Space for reentrant functions in the COMPACT model.    
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
PBPSTACKTOP     EQU     0FFFFH+1; set top of stack to highest location+1.
;
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
PPAGE           EQU     0       ; define PPAGE number.
;
PPAGE_SFR       DATA    0A0H    ; SFR that supplies uppermost address byte
;               (most 8051 variants use P2 as uppermost address byte)
;
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
; EXTRN CODE (?B_SWITCH0)
;               CALL    ?B_SWITCH0      ; init bank mechanism to code bank 0
                LJMP    ?C_START

                END
