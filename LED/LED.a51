ORG 000h
	MOV R2, #01h
	MOV R3, #80h

// left to right
//BLINK:
//	MOV P0, A
//	LCALL ONE_MILLI_SUB
//	RL A
//	JMP BLINK 

//bumping 
BLINK:
	MOV A,#00h
	ADD A,R2
	ADD A,R3
	MOV P0,A
	LCALL ONE_MILLI_SUB
	MOV A,#00h
	ADD A,R2
	RL A
	MOV R2,A
	MOV A,#00h
	ADD A,R3
	RR A
	MOV R3,A
	ADD A,R2
	ADD A,R3
	MOV P0,A
	JMP BLINK
LOOP:
	JMP LOOP

;================
; ONE_MILLI_SUB
; Subroutine to delay 1ms
; Use and preserve R7
;================
ONE_MILLI_SUB:
	PUSH 07h					; save R7 to stack
	MOV R7, #250d
LOOP_1_MILLI:					; loop for 250 times
	NOP
	NOP
	DJNZ R7, LOOP_1_MILLI 
	POP 07h						; restore
	RET

END