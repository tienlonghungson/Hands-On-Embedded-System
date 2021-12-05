$NOMOD51
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Copyright (c) 1988-2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Startup code for Dallas 390/5240 CPU, Contiguous Mode
;------------------------------------------------------------------------------
;  STARTIS208x.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;
;  To translate this file use A51 with the following invocation:
;
;     AX51 START390.A51 MOD_CONT
;
;  To link the modified STARTUP.OBJ file to your application use the following
;  LX51 invocation:
;
;     LX51 your object file list, START390.OBJ controls
;
;------------------------------------------------------------------------------
;
;<h> Chip Specific Options 
;
; <q> SA: Use 1KB stack in on-chip XDATA space
;    <i> Extend Stack Address Mode Enable (ACON.2)
SA   EQU 0  ; 0 = 8051 compatible stack in IDATA memory
;           ; 1 = Use 1KB stack in on-chip XDATA space
;
; <h> Memory Control Register (MCON)
;
;  <o> IDM1..0: Select 4KB on-chip SRAM location (MCON.7..6)
;            <0=> XDATA 0x00F000-0x00FFFF
;            <1=> XDATA 0x000000-0x000FFF
;            <2=> XDATA 0x400000-0x400FFF
;            <3=> XDATA and CODE 0x400000-0x400FFF
;                 <i> Defines the location and configuration of internal data memory. 
IDM  EQU 0  ; 0 = 4KB on-chip SRAM location X:0x00F000 - X:0x00FFFF
;           ; 1 = 4KB on-chip SRAM location X:0x000000 - X:0x000FFF
;           ; 2 = 4KB on-chip SRAM location X:0x400000 - X:0x400FFF
;           ; 3 = 4KB on-chip SRAM location X:0x400000 - X:0x400FFF
;                 and code memory C:0x400000 - C:0x400FFF
;
;  <o> CMA: Select CAN XDATA memory location (MCON.5)
;            <0=> CAN0=0x00EE00-0x00EEFF, CAN1=0x00EF00-0x00EFFF
;            <1=> CAN0=0x401000-0x4010FF, CAN1=0x401100-0x4011FF
;                 <i> Defines the location of CAN data memory.
CMA  EQU 0  ; 0 = CAN0 X:0x00EE00 - X:0x00EEFF, CAN1 X:0x00EF00 - X:0x00EFFF
            ; 1 = CAN0 X:0x401000 - X:0x4010FF, CAN1 X:0x401100 - X:0x4011FF
;
; PDCE3 .. PDCE0: Program/Data Chip Enable (MCON.3, MCON.2, MCON.1, MCON.0)
; Program/Data Chip Enable selects whether the CEx signal functions as the chip 
; enable for external program memory only (PDCE=0), or as a merged chip enable 
; for program and data memory (PDCE=1).

;  <o> PDCE3: Chip Enable signal function (MCON.3)
;            <0=> Standard: program memory only
;            <1=> Von Neumann: program and data memory
;                 <i> Program/Data Chip Enable selects whether the CE3 signal functions as the chip 
;                 <i> enable for external program memory only (PDCE3=0), or as a merged chip enable 
;                 <i> for program and data memory (PDCE3=1).
PDCE3 EQU 0 ; PDCE3=0: standard:      RD signal for MOVX
            ; PDCE3=1: von-Neumann: PSEN signal for MOVX
;  <o> PDCE2: Chip Enable signal function (MCON.2)
;            <0=> Standard: program memory only
;            <1=> Von Neumann: program and data memory
;                 <i> Program/Data Chip Enable selects whether the CE2 signal functions as the chip 
;                 <i> enable for external program memory only (PDCE2=0), or as a merged chip enable 
;                 <i> for program and data memory (PDCE2=1).
PDCE2 EQU 0 ; PDCE2=0: standard:      RD signal for MOVX
            ; PDCE2=1: von-Neumann: PSEN signal for MOVX
;  <o> PDCE1: Chip Enable signal function (MCON.1)
;            <0=> Standard: program memory only
;            <1=> Von Neumann: program and data memory
;                 <i> Program/Data Chip Enable selects whether the CE1 signal functions as the chip 
;                 <i> enable for external program memory only (PDCE1=0), or as a merged chip enable 
;                 <i> for program and data memory (PDCE1=1).
PDCE1 EQU 0 ; PDCE1=0: standard:      RD signal for MOVX
            ; PDCE1=1: von-Neumann: PSEN signal for MOVX
;  <o> PDCE0: Chip Enable signal function (MCON.0)
;            <0=> Standard: program memory only
;            <1=> Von Neumann: program and data memory
;                 <i> Program/Data Chip Enable selects whether the CE0 signal functions as the chip 
;                 <i> enable for external program memory only (PDCE0=0), or as a merged chip enable 
;                 <i> for program and data memory (PDCE0=1).
PDCE0 EQU 0 ; PDCE0=0: standard:      RD signal for MOVX
            ; PDCE0=1: von-Neumann: PSEN signal for MOVX
; </h>

;------------------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
; <o> IDATALEN: IDATA memory size <0x0-0x200>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space physically overlaps the DATA and BIT areas.
IDATALEN	EQU	100H	; the length of IDATA memory in bytes.
;
; <o> XDATASTART: XDATA memory start <0x0-0xFFFF> 
;     <i> The absolute start address of XDATA memory.
XDATASTART	EQU	0H	; the absolute start-address of XDATA memory
; <o> XDATALEN: XDATA memory size <0x0-0xFFFF> 
;     <i> The length of XDATA memory in bytes.
XDATALEN	EQU	0H	; the length of XDATA memory in bytes.
;
; <o> PDATASTART: PDATA memory start <0x0-0xFFFF> 
;     <i> The absolute start address of PDATA memory.
PDATASTART	EQU	0H	; the absolute start-address of PDATA memory
; <o> PDATALEN: PDATA memory size <0x0-0xFFFF> 
;     <i> The length of PDATA memory in bytes.
PDATALEN	EQU	0H	; the length of PDATA memory in bytes.
;
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.
; </h>
;------------------------------------------------------------------------------
;
; <h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialize it:
;
;  <h>Stack Space for reentrant functions in the SMALL model.
;   <q> IBPSTACK: Enable SMALL model reentrant stack
;       <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK	EQU	0	; set to 1 if small reentrant is used.
;   <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;       <i> Set the top of the stack to the highest location.
IBPSTACKTOP	EQU	0FFH+1	; set top of stack to highest location+1.
; </h>
;
;  <h>Stack space for reentrant functions in the LARGE model.
;   <q> XBPSTACK: Enable LARGE model reentrant stack
;       <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK	EQU	0	; set to 1 if large reentrant is used.
;   <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0xFFFF>
;       <i> Set the top of the stack to the highest location.
XBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
; </h>
;
; <h> Stack space for reentrant functions in the COMPACT model.
;  <q> PBPSTACK: Enable COMPACT model reentrant stack
;      <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK	EQU	0	; set to 1 if compact reentrant is used.
;  <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFFFF>
;      <i> Set the top of the stack to the highest location.
PBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
; </h>
;</h>
;
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
; <h> Compact Model Page Definition
;   <i> Defines the XDATA page used for PDATA variables.
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
; <q> PPAGEENABLE: Enable PDATA objects
PPAGEENABLE	EQU	0	; set to 1 if pdata objects are used.
; <o> PPAGE: XDATA page number <0x0-0xff>
;   <i> NOTE: This must agree with the PPAGE control used in the linker.
PPAGE		EQU	0	; define PPAGE number.
; </h>
;
;------------------------------------------------------------------------------

#include <REG_IS208x.H>

		NAME	?C_STARTUP

?C_C51STARTUP	SEGMENT   CODE

		EXTRN CODE (?C_START)
		PUBLIC	?C_STARTUP

?C_CPURESET?0	SEGMENT CODE OFFS 0
		RSEG	?C_CPURESET?0

?C_STARTUP 	LABEL	NEAR
		DB	02H	; LJMP in Classic 8051 Mode
		DW	WORD0 STARTUP1

		RSEG	?C_C51STARTUP
STARTUP1:

ACON_VAL EQU 2 ; 24-bit contigious mode
        MOV     ACON,#ACON_VAL

IF IDATALEN <> 0
		MOV	R0,#IDATALEN - 1
		CLR	A
IDATALOOP:	MOV	@R0,A
		DJNZ	R0,IDATALOOP
ENDIF

IF XDATALEN <> 0
		MOV	DPTR,#XDATASTART
		MOV	R7,#BYTE0 (XDATALEN)
  IF (BYTE0 (XDATALEN)) <> 0
		MOV	R6,#(BYTE1 XDATALEN) +1
  ELSE
		MOV	R6,#BYTE1 (XDATALEN)
  ENDIF
  IF (BYTE1 (XDATALEN)) <> 0
		MOV	R5,#(BYTE2 XDATALEN) +1
  ELSE
		MOV	R5,#BYTE2 (XDATALEN)
  ENDIF
		CLR	A
XDATALOOP:	MOVX	@DPTR,A
		INC	DPTR
		DJNZ	R7,XDATALOOP
		DJNZ	R6,XDATALOOP
		DJNZ	R5,XDATALOOP
ENDIF

IF PPAGEENABLE <> 0
		MOV	P2,#PPAGE
        MOV     MXAX,#0
ENDIF

IF PDATALEN <> 0
		MOV	R0,#PDATASTART
		MOV	R7,#LOW (PDATALEN)
		CLR	A
PDATALOOP:	MOVX	@R0,A
		INC	R0
		DJNZ	R7,PDATALOOP
ENDIF

IF IBPSTACK <> 0
EXTRN DATA (?C_IBP)

		MOV	?C_IBP,#LOW IBPSTACKTOP
ENDIF

IF XBPSTACK <> 0
EXTRN DATA (?C_XBP)

		MOV	?C_XBP,#HIGH XBPSTACKTOP
		MOV	?C_XBP+1,#LOW XBPSTACKTOP
ENDIF

IF PBPSTACK <> 0
EXTRN DATA (?C_PBP)
		MOV	?C_PBP,#LOW PBPSTACKTOP
ENDIF

		MOV	SP,#0	;?STACK
		DB	02H	; LJMP in 24 bit Mode
		DB BYTE2 ?C_START
		DW	WORD0 ?C_START
;		LJMP	?C_START

		END
