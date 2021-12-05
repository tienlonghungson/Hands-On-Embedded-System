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
	MOV A, #0C0h ;
	MOV P0,A
LOOP:
	LJMP LOOP 			; end loop 
;==================================================================
; ISR0 
;==================================================================
ISR0:
	SETB P0.7 			; LED OFF
	RETI 				; return from interrupt
;==================================================================
; ISR1 
;==================================================================
ISR1:
	CLR P0.7 			; LED ON
	RETI 				; return from interrupt
;==================================================================
END 					; end of program
