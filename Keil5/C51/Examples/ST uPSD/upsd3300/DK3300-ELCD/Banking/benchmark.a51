;-------------------------------------------------------------------------------
; Simple 8032 Benchmark assembly code
;
; Version:
;  August 2004 - Version 1.0 - Initial Release.
;
; Copyright (c) 2005 STMicroelectronics Inc.
;
; This example demo code is provided as is and has no warranty,
; implied or otherwise.  You are free to use/modify any of the provided
; code at your own risk in your applications with the expressed limitation
; of liability (see below) so long as your product using the code contains
; at least one uPSD products (device).

; LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
; AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
; INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
; CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
; OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
; ------------------------------------------------------------------------------


benchmrk   SEGMENT  CODE

   RSEG    benchmrk

   PUBLIC  benchmark    ; Public entry point


;     r4 = Loop 1 counter (10..0)
;     r5 = loop 2 counter (93..0)
;     r6 = msb of return value - number of instrucions executed
;               r7 = lsb of return value

benchmark:
      mov   R6, #0         ; Set the instruction count = 6 (setup overhead instructions)
      mov   R7, #6

; Begin Bench mark here...
      
      mov   R4, #0Ah       ; Loop 10 to 0 times (2511 + 2 = 2513 * 10 loops = 25130 instructions)
loop1:
      mov   R5, #05Dh      ; Loop 93 to 0 times (27 instruction * 93 loops = 2511 instructions)
loop2:
      mov   A, R5          ; Inner loop = 27 instructions (approx 70% 1 & 2 byte Instructions, 30% 3 byte)
      add   A, R4
      mov   DPTR, #1234
      nop
      mov   A, 082h        ; DPL
      add   A, 083h        ; DPH
      add   A, R4
      mov   082h, #0
      mov   083h, #0
      mov   DPTR, #1234
      mov   A, R5
      add   A, R4
      anl   A, #01
      jz    here           ; non sequential jump on even values
      nop 
here: mov   A, 082h
      add   A, 083h
      add   A, R4
      mov   082h, #0
      mov   083h, #0
      nop
      mov   A, R7
      add   A, #27         ; add in 27 instructions for loop 2
      mov   R7, A
      mov   A, R6          ; cary flad not cleared
      addc  A, #0
      mov   R6, A 
      djnz  r5, loop2
      
      mov   A, R7
      add   A, #8          ; Add in 8 instructions for loop 1
      mov   R7, A
      mov   A, R6
      addc  A, #0
      mov   R6, A 
      djnz  r4, loop1 
      
      ret                  ; Return R6:R7 count of instr executed
      
   END                     ; End of module


