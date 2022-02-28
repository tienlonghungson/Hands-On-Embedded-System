;=================================================================
;NGO LAM TRUNG 2020
;Skeleton code for external interrupts ISR
;=================================================================
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
	MOV  IE, #10000101B ; enable external interrupts IE0, IE1
	SETB IT0 			; negative edge trigger for interrupt 0
	SETB IT1 			; negative edge trigger for interrupt 1
	MOV R2,#00h
	MOV A, #0C0h 
	MOV P0,A
LOOP:
	LJMP LOOP 			; end loop 
;==================================================================
; ISR0 
;==================================================================
ISR0:
	CJNE R2,#09h,INCR
	RETI 				; return from interrupt

INCR:
	INC R2
	LJMP DISPLAY0
;==================================================================
; ISR1 
;==================================================================
ISR1:
	CJNE R2,#00h,DECR
	RETI 				; return from interrupt
DECR:
	DEC R2
	LJMP DISPLAY0
;==================================================================

DISPLAY0:
	CJNE R2,#00h,DISPLAY1
	MOV P0,#0C0h
	RETI
DISPLAY1:
	CJNE R2,#01h,DISPLAY2
	MOV P0,#0F9h
	RETI
DISPLAY2:
	CJNE R2,#02h,DISPLAY3
	MOV P0,#0A4h
	RETI
DISPLAY3:
	CJNE R2,#03h,DISPLAY4
	MOV P0,#0B0h
	RETI
DISPLAY4:
	CJNE R2,#04h,DISPLAY5
	MOV P0,#99h
	RETI
DISPLAY5:
	CJNE R2,#05h,DISPLAY6
	MOV P0,#92h
	RETI
DISPLAY6:
	CJNE R2,#06h,DISPLAY7
	MOV P0,#82h
	RETI
DISPLAY7:
	CJNE R2,#07h,DISPLAY8
	MOV P0,#0F8h
	RETI
DISPLAY8:
	CJNE R2,#08h,DISPLAY9
	MOV P0,#80h
	RETI
DISPLAY9:
	MOV P0,#90h
	RETI
	
END 					; end of program
