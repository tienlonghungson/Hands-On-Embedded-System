$NOMOD51
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Analog Devices ADuC83x and ADuC84x series
;  Copyright (c) 2001-2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 1.03
;------------------------------------------------------------------------------
;  START_AD.A51:  This code is executed after processor reset.
;
;  To translate this file use Ax51 with the following invocation:
;
;     Ax51 STARTUP.A51
;
;  To link the modified STARTUP.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, STARTUP.OBJ controls
;
;------------------------------------------------------------------------------
;
;<h> Setup Extended Data RAM
;
; <q> XRAMEN: Enable on-chip XDATA RAM
;     <i> When disabled, off-chip XDATA space is accessed
XRAMEN EQU 0  ; 0 = Disable on-chip XDATA RAM
              ; 1 = Enable  on-chip XDATA RAM
;
; <e> EXSP: Enable extended XRAM stack (16-bit Stack Pointer)
;           <i> NOTE: The Extended Stack Mode works only with enabled on-chip XDATA RAM!
EXSP EQU 0  ; 0 = 8-bit stack pointer in IDATA
;             1 = 16-bit stack pointer in XDATA
;
; CPU Stack Size Definition in Extended Stack Mode:
; The following EQU statements defines the stack space available in extended
; stack mode (EXSP set to 1) for the application program.  It should be noted
; that the stack space must be adjusted according the actual requirements of 
; the application.  This STARTUP file allocates the stack in extended stack
; mode in XDATA memory beginning at XSTACKSTART.  The extended stack must
; be within the on-chip XDATA memory and XSTACKSTART must be not less than
; 100H. 
;
;   <o> STACKSIZE: Size of extended XRAM stack <0x0-0xFFFF>
STACKSIZE   EQU 200H             ; set to 200H Bytes.
;   <o> XSTACKSTART: End address of extended XRAM stack <0x0100-0xFFFF>
;       <i> Must be at least 0x100 larger than STACKSIZE value.
XSTACKSTART EQU 0x800 - STACKSIZE ; 800H is top of on-chip XRAM.
; </e>
;</h>
;-----------------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
; <o> IDATALEN: IDATA memory size <0x0-0x100>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space physically overlaps the DATA and BIT areas.
IDATALEN	EQU	80H	; the length of IDATA memory in bytes.
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
;</h>
;------------------------------------------------------------------------------
;
;<h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialize it:
;
; <h>  Stack Space for reentrant functions in the SMALL model.
;  <q> IBPSTACK: Enable SMALL model reentrant stack
;     <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK	EQU	0	; set to 1 if small reentrant is used.
;  <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;     <i> Set the top of the stack to the highest location.
IBPSTACKTOP	EQU	0FFH+1	; set top of stack to highest location+1.
; </h>
;
; <h>  Stack space for reentrant functions in the LARGE model.	
;  <q> XBPSTACK: Enable LARGE model reentrant stack
;     <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK	EQU	0	; set to 1 if large reentrant is used.
;  <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0xFFFF>
;     <i> Set the top of the stack to the highest location.
XBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
; </h>
;
; <h>  Stack space for reentrant functions in the COMPACT model.	
;  <q> PBPSTACK: Enable COMPACT model reentrant stack
;     <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK	EQU	0	; set to 1 if compact reentrant is used.
;  <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFFFF>
;     <i> Set the top of the stack to the highest location.
PBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
; </h>
;</h>
;
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;<h> Compact Model Page Definition
;     <i> Defines the XDATA page used for PDATA variables.
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
; <q> PPAGEENABLE: Enable PDATA objects
PPAGEENABLE	EQU	1	; set to 1 if pdata objects are used.
; <o> PPAGE: XDATA page number <0x0-0xff>
;     <i> NOTE: This must agree with the PPAGE control used in the linker.
PPAGE		EQU	0	; define PPAGE number.
;</h>
;
;------------------------------------------------------------------------------

; Define CPU Symbols
sfr SP     = 0x81;
sfr SPH    = 0xB7;
sfr CFG8xx = 0xAF;    ; Chip Configuration SFR
sfr P2     = 0xA0;

IF (EXSP = 1) AND (XRAMEN = 0)
  __error__ "Extended Stack Mode requires enabled on-chip XDATA RAM"
ENDIF

IF (EXSP = 1) AND (XSTACKSTART < 100H)
  __error__ "Extended Stack must start in XRAM above address 100H"
ENDIF

		NAME	?C_STARTUP


?C_C51STARTUP	SEGMENT   CODE

IF (EXSP = 1)
		XSEG	AT XSTACKSTART
		DS	STACKSIZE	; Stack Space 200H Bytes
ELSE
?STACK		SEGMENT   IDATA
		RSEG	?STACK
		DS	1
ENDIF

		EXTRN CODE (?C_START)
		PUBLIC	?C_STARTUP

		CSEG	AT	0
?C_STARTUP:	LJMP	STARTUP1

		RSEG	?C_C51STARTUP

STARTUP1:

_CFG8xx EQU (EXSP SHL 7) OR (XRAMEN)

IF _CFG8xx
		ORL     CFG8xx,#_CFG8xx    ; set extended memory modes
ENDIF

IF IDATALEN <> 0
		MOV	R0,#IDATALEN - 1
		CLR	A
IDATALOOP:	MOV	@R0,A
		DJNZ	R0,IDATALOOP
ENDIF

IF XDATALEN <> 0
		MOV	DPTR,#XDATASTART
		MOV	R7,#LOW (XDATALEN)
  IF (LOW (XDATALEN)) <> 0
		MOV	R6,#(HIGH (XDATALEN)) +1
  ELSE
		MOV	R6,#HIGH (XDATALEN)
  ENDIF
		CLR	A
XDATALOOP:	MOVX	@DPTR,A
		INC	DPTR
		DJNZ	R7,XDATALOOP
		DJNZ	R6,XDATALOOP
ENDIF

IF PPAGEENABLE <> 0
		MOV	P2,#PPAGE
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

IF EXSP = 1
                MOV     SP,#LOW (XSTACKSTART-1)
                MOV     SPH,#HIGH (XSTACKSTART-1)
ELSE
		MOV	SP,#?STACK-1
ENDIF

; This code is required if you use L51_BANK.A51 with Banking Mode 4
;<h> Code Banking
; <q> Select Bank 0 for L51_BANK.A51 Mode 4
#if 0   
;     <i> Initialize bank mechanism to code bank 0 when using L51_BANK.A51 with Banking Mode 4.
EXTRN CODE (?B_SWITCH0)
               CALL    ?B_SWITCH0      ; init bank mechanism to code bank 0
#endif
;</h>
                LJMP	?C_START

		END
