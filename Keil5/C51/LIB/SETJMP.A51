$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Copyright (c) 1988-2003 Keil Elektronik GmbH and Keil Software, Inc.
;------------------------------------------------------------------------------
;  SETJMP.A51: setjmp / longjmp ANSI C library functions
;              configureable version for code banking
;------------------------------------------------------------------------------
;
BANKING  EQU 1     ; when banking is set to 1, the setjmp stores the current 
                   ; bank number instead of the ?C_PBP value.  Therefore compact 
                   ; reentrant functions cannot be used in this configuration.
;
;------------------------------------------------------------------------------


		NAME	setjmp

if BANKING
?BANK?SWITCH    SEGMENT  CODE  PAGE
EXTRN DATA (?B_CURRENTBANK)
endif

		PUBLIC	_setjmp, _longjmp

?PR?SETJMP?SETJMP	SEGMENT CODE


EXTRN DATA (?C_IBP, ?C_PBP, ?C_XBP)

; Standard SFR Symbols
ACC     DATA    0E0H
B       DATA    0F0H
SP      DATA    81H
DPL     DATA    82H
DPH     DATA    83H

		RSEG	?PR?SETJMP?SETJMP
EXTRN CODE (?C?ISTPTR, ?C?ILDPTR, ?C?CSTPTR, ?C?CLDPTR)

; C-Function prototype
; int  setjmp (jmp_buf);

_setjmp:	POP	ACC		; Return address
		MOV	B,A
		MOV	R4,A
		POP	ACC		
		MOV	R5,A
		CALL	?C?ISTPTR	; save return address
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
		MOV	B,?C_IBP	; Save IDATA stack pointer
		MOV	A,SP		; Save CPU SP register
		CALL	?C?ISTPTR
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
		MOV	B,?C_XBP+1	; Save XDATA stack pointer
		MOV	A,?C_XBP	
		CALL	?C?ISTPTR
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
if BANKING <> 0
		MOV	A,?B_CURRENTBANK; Current Bank 
		MOV	R7,A
		CALL	?C?CSTPTR
		MOV	A,R5		; Return address
		PUSH	ACC
		MOV	A,R4
		PUSH	ACC
		CLR	A
		MOV	R6,A		; Return value 0
		XCH	A,R7		; Current Bank
		MOV	DPTR,#?BANK?SWITCH
		JMP	@A+DPTR		; Return to user via bank switch code
else
		MOV	A,?C_PBP        ; Save PDATA stack pointer
		CALL	?C?CSTPTR
		MOV	DPL,R5		; Return address
		MOV	DPH,R4
		CLR	A
		MOV	R6,A		; Return value 0
		MOV 	R7,A
		JMP	@A+DPTR		; Return to user program
endif

_longjmp:       MOV	A,R5            ; place input Parameter to R6|R7
		MOV	R7,A
		MOV	A,R4
		MOV	R6,A
		CALL	?C?ILDPTR
		MOV	R4,A            ; restore return address
		MOV	R5,B
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
		CALL	?C?ILDPTR
		MOV	SP,B            ; restore CPU SP register
		MOV	?C_IBP,A        ; restore IDATA stack pointer
		MOV	DPTR,#4
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
		CALL	?C?ILDPTR       
		MOV	?C_XBP+1,A      ; restore xdata stack pointer
		MOV	?C_XBP,B
                MOV     A,R1
		ADD	A,#2
		MOV	R1,A
		CLR	A
		ADDC	A,R2
		MOV	R2,A
		CALL	?C?CLDPTR
if BANKING <> 0
		XCH	A,R5		; Return address
		PUSH	ACC
		MOV	A,R4
		PUSH	ACC
		XCH	A,R5		; Current Bank
		MOV	DPTR,#?BANK?SWITCH
		JMP	@A+DPTR		; Return to user via bank switch code
else
		MOV	?C_PBP,A
		MOV	DPL,R5
		MOV	DPH,R4
		CLR	A
		JMP	@A+DPTR
endif

		END
