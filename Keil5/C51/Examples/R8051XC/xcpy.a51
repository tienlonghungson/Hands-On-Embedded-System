;------------------------------------------------------------------------------------
; xcpy function for R8051XC: 
;
; memcpy variant for xdata to xdata memory copy using the DPC feature of the
; R8051XC devices
;
; Prototype:
; void xcpy (void xdata *dest, void xdata *src, unsigned int sz);
;
;------------------------------------------------------------------------------------

NAME	XCPY

PUBLIC _xcpy

?PR?_xcpy?XCPY       SEGMENT CODE 
DPSEL   DATA    092H
DPC     DATA    093H

	RSEG  ?PR?_xcpy?XCPY
_xcpy:
	USING	0
		MOV	A,R3
		JZ	NoINCR2
		INC	R2
NoINCR2:	ORL	A,R2
		JZ	RETURN
movexx:		MOV	DPL,R5
		MOV	DPH,R4
                ORL     DPC,#1
                XRL     DPC,#8
		XRL	DPSEL,#01H
		MOV	DPL,R7
		MOV	DPH,R6
                ORL     DPC,#1
                XRL     DPC,#8
		XRL	DPSEL,#01H
loopxx:		MOVX	A,@DPTR
		MOVX	@DPTR,A
		DJNZ	R3,loopxx
		DJNZ	R2,loopxx

; restore orignal DPC values
                ANL     DPC,#0FEH
                XRL     DPC,#8
		XRL	DPSEL,#01H
                ANL     DPC,#0FEH
                XRL     DPC,#8
		XRL	DPSEL,#01H

RETURN: 	RET

	END
