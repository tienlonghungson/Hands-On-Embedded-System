$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the LX51 Extended Linker/Locater package
;  Copyright (c) 2000 - 2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 1.04a, Variable Banking: 'far' & 'far const' C51 memory type support
;  Version 1.04a: added register usage description
;  Version 1.04b: Added Configuration Wizard support
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;
;************************ Configuration Section *******************************
;                                                                             *
; If the CPU provides an extended DPTR register for addressing HDATA, the     *
; following settings must be defined:                                         *
;
; <h> Extended DPTR for Addressing HDATA
;     <i> If the CPU provides an extended DPTR register for addressing 
;     <i> HDATA, the following settings must be defined:                                         
;  <o> ?C?XPAGE1SFR: SFR Address of XPAGE1 register <0x0-0xFF>
?C?XPAGE1SFR  DATA  0x95  ; SFR Address of XPAGE1 register                    *
;                                                                             *
; The C51 Compiler must be used with the VARBANKING directive.  This          *
; configuration allows XDATA variable accesses in interrupt routines with     *
; compiler directive VARBANKING because the common area is not part of an     *
; xdata bank. However, if far variables are used in interrupt routines, the   *
; project must be translated with VARBANKING(1). With VARBANKING(1) the C51   *
; compiler saves and restores the register defined with ?C?XPAGE1SFR.          *
;                                                                             *
;-----------------------------------------------------------------------------*
;
XMEM EQU 0x02000000       ; LX51 xdata symbol offset: do not change!
CMEM EQU 0x01000000       ; LX51 code  symbol offset: do not change!
?C?XPAGE1RST  EQU   1     ; Reset value of bank switch register
;
; </h>
;-----------------------------------------------------------------------------*
;
;******************************************************************************
;                                                                             *
; THEORY OF OPERATION                                                         *
; -------------------                                                         *
; This section describes how the extended LX51 linker/locater manages the     *
; extended address spaces that are addressed with the new C51 memory types    *
; 'far' and 'far const'.  The C51 Compiler uses 3 byte pointer generic        *
; pointer to access these memory areas.  'far' variables are placed in the    *
; memory class HDATA and 'far const' variables get the memory class 'HCONST'. *
; The LX51 linker/locater allows you to locate these memory classes in the    *
; logical 16 MBYTE CODE or 16 MBYTE XDATA spaces.                             *
;                                                                             *
; The memory access itself is performed via eight different subroutines that  *
; can be configured in this assembler module.  These routines are:            *
;    ?C?CLDXPTR, ?C?CSTXPTR  ; load/store BYTE (char)  in extended memory     *
;    ?C?ILDXPTR, ?C?ISTXPTR  ; load/store WORD (int)   in extended memory     *
;    ?C?PLDXPTR, ?C?PSTXPTR  ; load/store 3-BYTE PTR   in extended memory     *
;    ?C?LLDXPTR, ?C?LSTXPTR  ; load/store DWORD (long) in extended memory     *
;                                                                             *
; Each function gets as a parameter the memory address with 3 BYTE POINTER    *
; representation in the CPU registers R1/R2/R3.  The register R3 holds the    *
; memory type.  The C51 compiler uses the following memory types:             *
;                                                                             *
; R3 Value | Memory Type | Memory Class | Address Range                       *
; -----------------------+--------------+--------------------------           *
;    00    | data/idata  | DATA/IDATA   | I:0x00     .. I:0xFF                *
;    01    | xdata       | XDATA        | X:0x0000   .. X:0xFFFF              *
;  02..7F  | far         | HDATA        | X:0x010000 .. X:0x7E0000            *
;  81..FD  | far const   | HCONST       | C:0x800000 .. C:0xFC0000 (see note) *
;    FE    | pdata       | XDATA        | one 256-byte page in XDATA memory   *
;    FF    | code        | CODE         | C:0x0000   .. C:0xFFFF              *
;                                                                             *
; Note: the far const memory area is mapped into the banked memory areas.     *
;                                                                             *
; The R3 values 00, 01, FE and FF are already handled within the C51 run-time *
; library.  Only the values 02..FE are passed to the XPTR access functions    *
; described below.  The AX51 macro assembler provides the MBYTE operator      *
; that calculates the R3 value that needs to be passed to the XPTR access     *
; function.   AX51 Assembler example for using XPTR access functions:         *
;     MOV  R1,#LOW   (variable)   ; gives LSB address byte of variable        *
;     MOV  R2,#HIGH  (variable)   ; gives MSB address byte of variable        *
;     MOV  R3,#MBYTE (variable)   ; gives memory type byte of variable        *
;     CALL ?C?CLDXPTR             ; load BYTE variable into A                 *
;******************************************************************************


		NAME	?C?XBANKING	; 'far' Memory Access Support

PUBLIC ?C?XPAGE1SFR, ?C?XPAGE1RST
PUBLIC ?C?CLDXPTR, ?C?CSTXPTR, ?C?ILDXPTR, ?C?ISTXPTR
PUBLIC ?C?PLDXPTR, ?C?PSTXPTR, ?C?LLDXPTR, ?C?LSTXPTR

?C?LIB_CODE	SEGMENT	CODE
		RSEG	?C?LIB_CODE

LOAD_BANK	MACRO
LOCAL lab
		MOV	DPL,R1
		MOV	DPH,R2
		MOV	?C?XPAGE1SFR,R3	
		DEC	?C?XPAGE1SFR
		ANL	?C?XPAGE1SFR,#07FH
		CJNE	R3,#80H,lab
lab:
		ENDM

; Standard SFR Symbols required in XBANKING.A51
ACC     DATA    0E0H
B       DATA    0F0H
DPL     DATA    82H
DPH     DATA    83H



;-----------------------------------------------------------------------------
; CLDXPTR: Load   BYTE in A             via Address given in R1/R2/R3
; Registers which can be used without saving:  DPTR, CY, A
;
?C?CLDXPTR:	LOAD_BANK
                JNC	CLDCODE
		MOVX	A,@DPTR
		RET
CLDCODE:	CLR	A
		MOVC	A,@A+DPTR
		RET

;-----------------------------------------------------------------------------
; CSTXPTR: Store  BYTE in A             via Address given in R1/R2/R3
; Registers which can be used without saving:  DPTR, CY
;
?C?CSTXPTR:	LOAD_BANK
                JNC	CSTCODE
		MOVX	@DPTR,A
CSTCODE:	RET


;-----------------------------------------------------------------------------
; ILDXPTR: Load   WORD in A(LSB)/B(HSB) via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, B
;
?C?ILDXPTR:	LOAD_BANK
                JNC	ILDCODE
		MOVX	A,@DPTR
		MOV	B,A
		INC	DPTR
		MOVX	A,@DPTR
		RET
ILDCODE:	CLR	A
		MOVC	A,@A+DPTR
		MOV	B,A
		MOV	A,#1
		MOVC	A,@A+DPTR
		RET

;-----------------------------------------------------------------------------
; ISTXPTR: Store  WORD in A(HSB)/B(LSB) via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?ISTXPTR:	LOAD_BANK
                JNC	ISTCODE
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,B
		MOVX	@DPTR,A
ISTCODE:	RET

;-----------------------------------------------------------------------------
; PLDXPTR: Load    PTR in R1/R2/R3      via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, R1, R2, R3
;
?C?PLDXPTR:	LOAD_BANK
                JNC	PLDCODE
		MOVX	A,@DPTR
		MOV	R3,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R2,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R1,A
		RET
PLDCODE:	CLR	A
		MOVC	A,@A+DPTR
		MOV	R3,A
		MOV	A,#1
		MOVC	A,@A+DPTR
		MOV	R2,A
		MOV	A,#2
		MOVC	A,@A+DPTR
		MOV	R1,A
		RET

;-----------------------------------------------------------------------------
; PSTXPTR: Store   PTR in R0/A/B        via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?PSTXPTR:	LOAD_BANK
                JNC	PSTCODE
		XCH	A,B
		MOVX	@DPTR,A
		INC	DPTR
		XCH	A,B
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R0
		MOVX	@DPTR,A
PSTCODE:	RET

;-----------------------------------------------------------------------------
; LLDXPTR: Load  DWORD in R4/R5/R6/R7   via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, R4, R5, R6, R7
;
?C?LLDXPTR:	LOAD_BANK
                JNC	LLDCODE
		MOVX	A,@DPTR
		MOV	R4,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R5,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R6,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R7,A
		RET
LLDCODE:	CLR	A
		MOVC	A,@A+DPTR
		MOV	R4,A
		MOV	A,#1
		MOVC	A,@A+DPTR
		MOV	R5,A
		MOV	A,#2
		MOVC	A,@A+DPTR
		MOV	R6,A
		MOV	A,#3
		MOVC	A,@A+DPTR
		MOV	R7,A
		RET

;-----------------------------------------------------------------------------
; LSTXPTR: Store DWORD in R4/R5/R6/R7   via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?LSTXPTR:	LOAD_BANK
                JNC	LSTCODE
		MOV	A,R4
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R5
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R6
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R7
		MOVX	@DPTR,A
LSTCODE:	RET

		END

