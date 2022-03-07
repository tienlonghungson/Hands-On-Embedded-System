;=================================================================
;NGO LAM TRUNG 2020
;Skeleton code for external interrupts ISR
;=================================================================
;Common Anode 7SEG-LED numbers
NUM_0 EQU 40h ; code to display 0 on 7 segment
NUM_1 EQU 79h ; code to display 1 on 7 segment
NUM_2 EQU 24h ; code to display 2 on 7 segment
NUM_3 EQU 30h ; code to display 3 on 7 segment
NUM_4 EQU 19h ; code to display 4 on 7 segment
NUM_5 EQU 12h ; code to display 0 on 7 segment
NUM_6 EQU 02h ; code to display 1 on 7 segment
NUM_7 EQU 78h ; code to display 2 on 7 segment
NUM_8 EQU 00h ; code to display 3 on 7 segment
NUM_9 EQU 10h ; code to display 4 on 7 segment
;Variable
LED_DATA EQU 0x40
;Interrupt table
ORG 0000h 		; entry address for 8051 RESET
	LJMP MAIN 	; move MAIN away from interrupt vector table
ORG 0003h 		; vector address for interrupt 0
	LJMP ISR0 	; jump to ISR0
ORG 0013h 		; vector address for interrupt 1
	LJMP ISR1 	; jump to ISR1
;=================================================================
;Code segment
;=================================================================
ORG 0100h 				; MAIN starts here
MAIN:
	MOV IE, #10000101B 	; enable external interrupts IE0, IE1
	SETB IT0 			; negative edge trigger for interrupt 0
	SETB IT1 			; negative edge trigger for interrupt 1
	MOV R0, #0
	MOV 40h, #NUM_0
	MOV 41h, #NUM_1
	MOV 42h, #NUM_2
	MOV 43h, #NUM_3
	MOV 44h, #NUM_4
	MOV 45h, #NUM_5
	MOV 46h, #NUM_6
	MOV 47h, #NUM_7
	MOV 48h, #NUM_8
	MOV 49h, #NUM_9
LOOP:
	MOV A, R0			; move data to A
	RLC A				
	JNC BIGGER10		; continue check bigger than 10
	MOV R0, #0			; reset if smaller than 0
	JMP DISPLAY
BIGGER10:
	MOV A, R0			; move data to A
	CLR C
	SUBB A, #10
	JC DISPLAY			; display if in range 0-9
	MOV R0, #9			; reset to 9
DISPLAY:
	MOV A, R0
	ORL A, #40h
	MOV R1, A
	MOV P0, @R1
	CALL DELAY_1MS
	LJMP LOOP 				; end loop 
;============================================================
; ONE_MILLI_SUB
; Subroutine to delay ONE millisecond
; Uses and preserves R7
;============================================================
DELAY_1MS:
	PUSH 07h 				; save R7 to stack
	MOV R7, #250d 			; 
LOOP_1_MILLI: 				; loops 250 times
	NOP 					; two NOPs
	NOP 					;
	DJNZ R7, LOOP_1_MILLI 	; loop until zero
	POP 07h 				; restore R7 
	RET 					; return to caller
;==================================================================
; ISR0 
;==================================================================
ISR0:
	INC  R0					; Increase data
	RETI 					; return from interrupt
;==================================================================
; ISR1 
;==================================================================
ISR1:
	DEC R0					; decrease value
	RETI 					; return from interrupt
;==================================================================
END 						; end of program
