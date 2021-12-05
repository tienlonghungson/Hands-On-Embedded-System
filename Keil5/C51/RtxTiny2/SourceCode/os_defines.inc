;------------------------------------------------------------------------------
;
;  OS_DEFINES.INC:  Defines  (a)  External References for OS routines
;                            (b)  Bits in TaskState
;
;  RTX51 TINY VERSION 2.0
;
;------------------------------------------------------------------------------

EXTRN	NUMBER (?RTX_MAXTASKN)		; max Task Number
EXTRN   NUMBER (?RTX_RAMTOP)            ; top of RAM for stack
EXTRN   DATA   (?RTX_CURRENTTASK)       ; current running task
EXTRN   CODE   (os_switch_task)         ; perform a task switch
?RTX?TASKSTATE?S  SEGMENT IDATA         ; table of task states
?RTX?TASKSP?S     SEGMENT IDATA         ; table of task stack pointers
?RTX?TASKENT?S    SEGMENT CODE          ; table of task entry addresses


; Internal Status Bits of Task State
; Bits in TaskState:
;  TaskState.0  = Wait for Signal
;  TaskState.1  = Wait for TimeOut
;  TaskState.2  = Signal Flag
;  TaskState.3  = TimeOut Flag
;  TaskState.4  = Task Ready (Wait for Running)
;  TaskState.5  = Task Active (enabled with os_create)
;  TaskState.6  = Round Robin Time Out
;  TaskState.7  = Run Flag

; byte mask definitions
K_SIG	        EQU	1
K_TMO	        EQU	2
SIG_EVENT	EQU	4
TMO_EVENT	EQU	8
K_READY		EQU	16
K_ACTIVE	EQU	32
K_ROBIN		EQU	64
K_IVL           EQU     128  ; not a task state bit; only used in os_wait
RDY_EVENT       EQU     128  ; READY status flag
K_RDY           EQU     128  ; READY status flag

; bit position definitions
B_WAITSIG	EQU	0
B_WAITTIM	EQU	1
B_SIGNAL	EQU	2
B_TIMEOUT	EQU	3
B_READY		EQU	4
B_ACTIVE	EQU	5
B_ROBIN		EQU	6
B_IVL           EQU     7    ; not a task state bit; only used in os_wait
B_RDY           EQU     7    ; READY status flag

