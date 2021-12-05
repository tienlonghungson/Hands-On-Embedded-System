$MOD_MX51
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  This file is part of the PK51 Professional Developers Kit
;  Startup Code for the Philips 80C51MX architecture
;  Copyright (c) 2000-2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 1.04
;------------------------------------------------------------------------------
;  START_MX.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;
;  To translate this file manually use AX51 with the following invocation:
;
;     AX51 START_MX.A51  
;
;  To link the modified START_MX.OBJ file to your application use the
;  following LX51 invocation:
;
;     LX51 START_MX.OBJ, your object file list controls
;
;------------------------------------------------------------------------------
;
;<h> Setup 80C51MX Configuration Register (MXCON)
;
; <o> ECRM: Extended Call/Return Mode
;           <0=> Classic 2-byte CALL/RET
;           <1=> 3-byte CALL/RET
;               <i> Extended Call Return Mode (intermixed subroutine call with ECALL/LCALL/ACALL)
;               <i> NOTE: ECRM is only available on some devices, check your chip specifications.
; ECRM       Val  Description
; ---        ---  -----------
ECRM EQU 0  ; 0 = classic CALL/RET instructions with 2-byte stack frame
;           ; 1 = CALL/RET save and restore the full 3-byte program counter
; NOTE: ECRM is only available on some devices, check your chip specification
;
; <q> EAM: Enable A16..A22 multiplex on Port 2
; <i> Extended Addressing Mode enables the upper address (A16..A22) multiplex on Port 2.
; EAM        Val  Description
; ---        ---  -----------
EAM EQU  0  ; 0 = do not change configuration state of the CPU
;           ; 1 = enable extended addressing mode (multiplex A16..A22 on Port 2)
;
; <e> ESSM: Extended 16-bit stack pointer addressing EDATA space
; ESMM       Val  Description
; ----       ---  -----------
ESMM EQU 0  ; 0 = classic 8051 stack pointer (8-bit) addressing IDATA space
;           ; 1 = extended 16-bit stack pointer addressing EDATA space
;
;  CPU Stack Size Definition 
;
;  The following EQU statement defines the stack space available in extended
;  stack mode (ESMM set to 1) for the application program.  It should be noted
;  that the stack space must be adjusted according the actual requirements of 
;  the application.
;
;   <o> STACKSIZE: Size of extended XRAM stack <0x0-0xFFFF>
STACKSIZE	EQU	100H	; set to 100H Bytes.
;
; </e>
;
; <q> EIF: Enable 3 byte PUSH on interrupt
; <i> Extended Interrupt Frame -- Classic (2-byte) ot Extended (3-byte) PUSH on interrupts.
; EIFM       Val  Description
; --         ---  -----------
EIFM EQU 0  ; 0 = classic 8051 interrupt frame (16-bit address pushed)
;           ; 1 = extended 24-bit interrupt frame (3 bytes pushed on interrupt)
;</h>
;
;
;  <h> Setup Additional Features (AUXR, AUXR1)
;
; <q> EXTRAM: Enable on-chip XDATA RAM
; <i> When disabled, off-chip XDATA space is accessed
; XDATA access (External XDATA space)
; EXTRAM     Val  Description
; ---        ---  -----------
EXTRAM EQU 0; 0 = access on-chip XDATA RAM 
;           ; 1 = disable on-chip XDATA and access off-chip XDATA space
;
; <o> AO: ALE (Address Latch Enable) signal output
;             <0=> Continuous
;             <1=> Only during MOVX or MOVC
; <i> When enabled, ALE signal is active only during a MOVX or MOVC instruction.
;  
; AO         Val  Description
; --         ---  -----------
AO   EQU 0  ; 0 = ALE signal is generated at a constant rate 
;           ; 1 = ALE signal is active only during a MOVX or MOVC instruction
;
; <q> LPEP: Chip supply voltage (Vcc) less than 4V
; LPEP       Val  Description
; ----       ---  -----------
LPEP EQU 0  ; 0 = chip supply voltage (Vcc) is above 4V
;           ; 1 = chip supply voltage (Vcc) is below 4V
;</h>
;------------------------------------------------------------------------------
;
;  <h> User-defined Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
;<o> IDATALEN: IDATA memory size <0x0-0x100>
;<i> Note: The absolute start address of IDATA memory is always 0
;<i>       The IDATA space physically overlaps the DATA and BIT areas.
IDATALEN	EQU	0FFH	; the length of IDATA memory in bytes.
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
;          80C51MX CPU.
;</h>
;------------------------------------------------------------------------------
;
;<h>Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
; <h> Stack Space for reentrant functions in the SMALL model.
;  <q> IBPSTACK: Enable SMALL model reentrant stack
;      <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK	EQU	0	; set to 1 if small reentrant is used.
;   <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
IBPSTACKTOP	EQU	0FFH+1	; set top of stack to highest location+1.
; </h>
;
; <h> Stack Space for reentrant functions in the LARGE model.	
;  <q> XBPSTACK: Enable LARGE model reentrant stack
;      <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK	EQU	0	; set to 1 if large reentrant is used.
;  <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0xFFFF>
XBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
; </h>
;
; <h> Stack Space for reentrant functions in the COMPACT model.	
;  <q> PBPSTACK: Enable COMPACT model reentrant stack
;    <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK	EQU	0	; set to 1 if compact reentrant is used.
; <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFFFF>
PBPSTACKTOP	EQU	0FFFFH+1; set top of stack to highest location+1.
;
; </h>
;</h>
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
PPAGEENABLE	EQU	0	; set to 1 if pdata object are used.
; <o> PPAGE: XDATA page number <0x0-0xff>
;   <i> NOTE: This must agree with the PPAGE control used in the linker.
PPAGE		EQU	0	; define PPAGE number.
;
;</h>
;------------------------------------------------------------------------------

; Define CPU Symbols
sfr SP     = 0x81;
sfr SPE    = 0x1FB;
sfr AUXR   = 0x8E;
sfr AUXR1  = 0xA2;
sfr MXCON  = 0x1FF;

		NAME	?C_STARTUP

?C_C51STARTUP	SEGMENT   CODE

IF ESMM == 1

?STACK		SEGMENT   EDATA
		RSEG	?STACK
		DS	STACKSIZE	; Stack Space 100H Bytes

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


IF ECRM               ; Define Symbols for LX51 Linker/Locater
PUBLIC ?L?_CALL3_
?L?_CALL3_  EQU  1    ; 3 bytes stack frame for CALL/RET
ENDIF

; Init MXCON
_VMXCON EQU (ECRM SHL 4) OR (EAM SHL 2) OR (ESMM SHL 1) OR (EIFM)
IF _VMXCON
                MOV     MXCON,#_VMXCON
ENDIF

; Init AUXR
_VAUXR  EQU (EXTRAM SHL 1) OR (AO)
IF _VAUXR
                MOV     AUXR,#_VAUXR
ENDIF

; Init AUXR1
_VAUXR1 EQU (LPEP SHL 4)
IF _VAUXR1
               MOV     AUXR1,#_VAUXR1
ENDIF

IF IDATALEN <> 0
		MOV	R0,#IDATALEN - 1
		CLR	A
IDATALOOP:	MOV	@R0,A
		DJNZ	R0,IDATALOOP
ENDIF

IF XDATALEN <> 0
		MOV	R1,#BYTE0 XDATASTART
		MOV	R2,#BYTE1 XDATASTART
		MOV	R3,#BYTE2 XDATASTART
		MOV	R7,#BYTE0 (XDATALEN)
  IF (BYTE0 (XDATALEN)) <> 0
		MOV	R6,#(BYTE1 (XDATALEN)) +1
  ELSE
		MOV	R6,#BYTE1 (XDATALEN)
  ENDIF
  IF (WORD0 (XDATALEN)) <> 0
                MOV     R5,#(BYTE2 (XDATALEN)) + 1
  ELSE
                MOV     R5,#BYTE2 (XDATALEN)
  ENDIF
		CLR	A
XDATALOOP:	EMOV	@PR0,A
		ADD	PR0,#1
		DJNZ	R7,XDATALOOP
		DJNZ	R6,XDATALOOP
		DJNZ	R5,XDATALOOP
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

IF (ESMM)
		MOV	SP,#BYTE0 (?STACK-1)    ; Initilize Extended Stack Pointer
		MOV     SPE,#BYTE1 (?STACK-1)
ELSE
		MOV	SP,#?STACK-1            ; Initilize Classic 8051 Stack
ENDIF

IF (EIFM)
		EJMP	?C_START
ELSE
		LJMP	?C_START
ENDIF


		END
