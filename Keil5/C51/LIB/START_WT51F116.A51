$NOMOD51
;------------------------------------------------------------------------------
;	This startup.A51 is for WT51F116/108 
;	[ ICE-Driver: WT51F116/108_AGDI.DLL Require version 1.0.4.0 above]
;------------------------------------------------------------------------------
;
;	Version: 1.01 >>@2014-01-03, 	available for released
;
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Copyright (c) 1988-2002 Keil Elektronik GmbH and Keil Software, Inc.
;------------------------------------------------------------------------------
;  STARTUP.A51:  This code is executed after processor reset.
;
;  To translate this file use A51 with the following invocation:
;
;     A51 STARTUP.A51
;
;  To link the modified STARTUP.OBJ file to your application use the following
;  BL51 invocation:
;
;     BL51 <your object file list>, STARTUP.OBJ <controls>
;
;------------------------------------------------------------------------------
;
;  User-defined Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
;               ; the absolute start-address of IDATA memory is always 0
IDATALEN        EQU     080H     ; the length of IDATA memory in bytes.
;
XDATASTART      EQU     0100H 	 ; the absolute start-address of XDATA memory
XDATALEN        EQU     100H   	 ; the length of XDATA memory in bytes.
;
PDATASTART      EQU     0H      ; the absolute start-address of PDATA memory
PDATALEN        EQU     0H      ; the length of PDATA memory in bytes.
;
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51
;          run-time routines must be set to zero.
;------------------------------------------------------------------------------
;
;  Reentrant Stack Initilization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
;  Stack Space for reentrant functions in the SMALL model.
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
IBPSTACKTOP     EQU     0FFH+1  ; set top of stack to highest location+1.
;
;  Stack Space for reentrant functions in the LARGE model.
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
XBPSTACKTOP     EQU     0FFFFH+1; set top of stack to highest location+1.
;
;  Stack Space for reentrant functions in the COMPACT model.
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
PBPSTACKTOP     EQU     0FFFFH+1; set top of stack to highest location+1.
;
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
PPAGE           EQU     0       ; define PPAGE number.
;
PPAGE_SFR       DATA    0A0H    ; SFR that supplies uppermost address byte
;               (most 8051 variants use P2 as uppermost address byte)
;
;------------------------------------------------------------------------------
ICE_ENABLE 	EQU     1	; [0/1] disable / Enalbe ICE function
;------------------------------------------------------------------------------
; Standard SFR Symbols
ACC         DATA    0E0H
B           DATA    0F0H
SP          DATA    81H
DPL         DATA    82H
DPH         DATA    83H
TCON	    DATA    88H
P2          data    0A0H
IE          DATA    0A8H
PSW         DATA    0D0H
IP          DATA    0B8H
ICE_PCL     DATA    0FDH
ICE_PCH     DATA    0F5H
ICE_ISRL    DATA    0FCH
ICE_ISRH    DATA    0F4H
PCL_STACK   DATA    0FAh
PCH_STACK   DATA    0F2h
ICE_CTL     DATA    0F8H
ICE_DAT     DATA    0F9H
;
;T2CON	    	EQU    C8H
sfr T2CON   = 0xC8;
SYS_CTL1        EQU 05H
WD_TIMER        EQU 78H
;
IF ICE_ENABLE <> 0
; ICE Status bits
FB              EQU 07H
RD              EQU 06H
WR              EQU 05H
EXIT            EQU 04H
RY              EQU 03H
ENTICE          EQU 02H
; ICE routine start-address
ICE_ISR_STRAT   EQU 200H	//1000H
ENDIF

                NAME    ?C_STARTUP
?C_C51STARTUP   SEGMENT   CODE
?STACK          SEGMENT   IDATA

                RSEG    ?STACK
                DS      1

                EXTRN CODE (?C_START)
                PUBLIC  ?C_STARTUP

                CSEG    AT 00H
?C_STARTUP:
                LJMP    STARTUP1
                ;CSEG    AT 7BH
                ;LJMP    ICE_ROUTINE
                
                RSEG    ?C_C51STARTUP
STARTUP1:
                MOV     P2,#00H
                MOV     ICE_ISRL,#00H
                MOV     ICE_ISRH,#02H	//#10H

                ;Init System Clock
                MOV     DPTR,#SYS_CTL1
                MOVX    A,@DPTR
                ANL     A,#10100000B        ; IRC 12Mhz
                MOVX    @DPTR,A

                ;WatchDog
                ;;MOV     DPTR,#WD_TIMER      ;Stop WatchDog
                ;;MOV     A,#80H
                ;;MOVX    @DPTR,A
                ;stack point
                MOV     SP,#?STACK-1

IF IDATALEN <> 0
                MOV     R0,#IDATALEN - 1
                CLR     A
IDATALOOP:      MOV     @R0,A
                DJNZ    R0,IDATALOOP
ENDIF

IF XDATALEN <> 0
                MOV     DPTR,#XDATASTART
                MOV     R7,#LOW (XDATALEN)
  IF (LOW (XDATALEN)) <> 0
                MOV     R6,#(HIGH (XDATALEN)) +1
  ELSE
                MOV     R6,#HIGH (XDATALEN)
  ENDIF
                CLR     A
XDATALOOP:      MOVX    @DPTR,A
                INC     DPTR
                DJNZ    R7,XDATALOOP
                DJNZ    R6,XDATALOOP
ENDIF

IF PPAGEENABLE <> 0
                MOV     PPAGE_SFR,#PPAGE
ENDIF

IF PDATALEN <> 0
                MOV     R0,#LOW (PDATASTART)
                MOV     R7,#LOW (PDATALEN)
                CLR     A
PDATALOOP:      MOVX    @R0,A
                INC     R0
                DJNZ    R7,PDATALOOP
ENDIF

IF IBPSTACK <> 0
EXTRN DATA (?C_IBP)
                MOV     ?C_IBP,#LOW IBPSTACKTOP
ENDIF

IF XBPSTACK <> 0
EXTRN DATA (?C_XBP)
                MOV     ?C_XBP,#HIGH XBPSTACKTOP
                MOV     ?C_XBP+1,#LOW XBPSTACKTOP
ENDIF

IF PBPSTACK <> 0
EXTRN DATA (?C_PBP)
                MOV     ?C_PBP,#LOW PBPSTACKTOP
ENDIF
                ORL     IP,#00H
                MOV     IE,#00H
                LJMP    ?C_START
;;====================================================================================
IF ICE_ENABLE <> 0
                CSEG    AT ICE_ISR_STRAT
ICE_ROUTINE:
                NOP
                NOP
                PUSH    ACC
                NOP
                PUSH    B
                PUSH    DPH
                PUSH    DPL
                PUSH    PSW
                PUSH    00H
PUSHED_REG_SIZE EQU ($ - ICE_ROUTINE) / 2
                MOV     PSW,#00H                ; select register bank0
                ;restore PCL
                CLR      C
                MOV      A,ICE_PCL
                SUBB     A,#01
                MOV      PCL_STACK,A 
                ;restore PCH
                MOV      A,ICE_PCH
                SUBB     A,#00
                MOV      PCH_STACK,A               
                ;Stop WatchDog
                MOV     DPTR,#WD_TIMER
                MOV     A,#10100011B
                MOVX    @DPTR,A
                ; Set ICE READY
                SETB    ICE_CTL.RY  
                ; Wait for ICE Command   
                main_loop: 	
                ; check FB & WR bits 
                MOV     A, #10100000b
                ANL     A, ICE_CTL
                CJNE    A, #10100000b, main_loop

                ;decoder commands
                MOV     A, ICE_DAT
                cjne    A, #000h, ICE_command_is_not_00
                jmp     go_end

                ICE_command_is_not_00: 
                cjne    A, #001h, ICE_command_is_not_01
	        jmp     do_command_01 
	        
                ICE_command_is_not_01:  
                cjne    A, #002h, ICE_command_is_not_02
	        jmp     do_command_02 	

                ICE_command_is_not_02:  
                cjne    A, #003h, ICE_command_is_not_03
                jmp     do_command_03 
                
                ICE_command_is_not_03:
                cjne    A, #004h, ICE_command_is_not_04
                jmp     do_command_04 
                
                ICE_command_is_not_04:
                cjne    A, #005h, ICE_command_is_not_05
                jmp	do_command_05
                
                ICE_command_is_not_05:
                cjne    A, #006h, ICE_command_is_not_06
                jmp     do_command_06 
                
                ICE_command_is_not_06:
                cjne    A, #007h, ICE_command_is_not_07
                jmp     do_command_07 
                
                ICE_command_is_not_07:
                cjne    A, #016h, ICE_command_is_not_16
                jmp     do_command_16 	
                
                ICE_command_is_not_16:
                cjne 	A, #017h, ICE_command_is_not_17     
                jmp	do_command_17 	
                
                ICE_command_is_not_17:
                jmp	main_loop
		
;;====================================================================================
                ; Do commands	
                do_command_16:
                ; do block read XDATA
                jnb 	ICE_CTL.WR, $
                MOV	DPH, ICE_DAT		; set DPH
                jnb 	ICE_CTL.WR, $
                MOV	DPL, ICE_DAT		; set DPL 
                do_command_16_call:            				
                MOVX	A, @DPTR
                MOV	ICE_DAT, A
                INC	DPTR
                do_command_16_chk_rd:        
                jb 	ICE_CTL.RD, do_command_16_ckh_exit
                sjmp	do_command_16_call
                do_command_16_ckh_exit:	 
                jb	ICE_CTL.EXIT, do_command_exit 
                sjmp	do_command_16_chk_rd     

                do_command_17:
                ; do block write XDATA
                jnb 	ICE_CTL.WR, $
                MOV	DPH, ICE_DAT		; set DPH
                jnb 	ICE_CTL.WR, $
                MOV	DPL, ICE_DAT		; set DPL  
                do_command_17_chk_wr:        
                jnb 	ICE_CTL.WR, do_command_17_chk_exit
                MOV	A, ICE_DAT
                MOVX	@DPTR, A
                INC	DPTR
                sjmp	do_command_17_chk_wr
                do_command_17_chk_exit:    
                jb	ICE_CTL.EXIT, do_command_exit
                sjmp	do_command_17_chk_wr
                
                do_command_exit:
                jmp	main_loop
        
                do_command_01:
                ; do read PDATA
                jnb 	ICE_CTL.WR, $
                MOV	DPH, ICE_DAT		; set DPH
                jnb 	ICE_CTL.WR, $
                MOV	DPL, ICE_DAT		; set DPL  
                MOV	A, #000h
                MOVC	A, @A+DPTR					      
                MOV	ICE_DAT, A
                jmp	main_loop                   

                do_command_02:
                ; do read IDATA
                jnb 	ICE_CTL.WR, $
                MOV	R0, ICE_DAT
                MOV	ICE_DAT, @R0
                jmp	main_loop        

                do_command_03:
                ; do write IDATA
                jnb 	ICE_CTL.WR, $
                MOV	R0, ICE_DAT
                jnb 	ICE_CTL.WR, $
                MOV	@R0, ICE_DAT
                jmp	main_loop            	                 
                
                do_command_04:
                ; do read SFR
                jnb 	ICE_CTL.WR, $
                e5_op_code:
                MOV	A, ICE_DAT	        ; get E5 operand, e5_op_code_adr = 0x10C1
                MOV	ICE_DAT, A	        ; get SFR data
                jmp	main_loop          

                do_command_05:
                ; do write SFR
                jnb 	ICE_CTL.WR, $
                
                MOV	A, ICE_DAT		; read data
                jnb 	ICE_CTL.WR, $        
                f5_op_code:
                MOV	ICE_DAT, A              ;get F5 operand, f5_op_code_adr = 0x10CF
                jmp	main_loop          
                
                do_command_06:
                ; do read XDATA
                jnb 	ICE_CTL.WR, $
                MOV	DPH, ICE_DAT		; set DPH
                jnb 	ICE_CTL.WR, $
                MOV	DPL, ICE_DAT		; set DPL  
                MOVX	A, @DPTR					      
                MOV	ICE_DAT, A
                jmp	main_loop           
                
                do_command_07:
                ; do write XDATA
                jnb 	ICE_CTL.WR, $
                MOV	DPH, ICE_DAT		; set DPH
                jnb 	ICE_CTL.WR, $
                MOV	DPL, ICE_DAT		; set DPL  
                jnb 	ICE_CTL.WR, $
                MOV	A, ICE_DAT					
                MOVX	@DPTR, A
                jmp	main_loop           
                
                go_end:
                MOV     A,TCON
                ANL     A,#01010101B
                MOV     TCON,A
                CLR	ICE_CTL.RY
                
                ;;clear Timer 0, 1, 2 and Enhance Timer
		ANL     TCON ,#01011111B           ;Clear TF0,TF1
	        ANL     T2CON  ,#00111111B           ;Clear TF2
	        mov     DPTR ,#007CH
	        MOVX    A    ,@DPTR
	        ORL     A    ,#00100000B           ;Clear WTM Interrupt
	        MOVX    @DPTR,A
	        mov     DPTR ,#00B2H
	        MOVX    A    ,@DPTR
	        ORL     A    ,#00010000B           ;Clear ETM Interrupt
	        MOVX    @DPTR,A
		
		;pop backup
                POP     00H
                POP     PSW
                POP     DPL
                POP     DPH
                POP     B
                POP     ACC

END_ICE_ROUTINE:
                RETI
                NOP
                NOP
                NOP
                NOP
                NOP
ENDIF
;====================================================
END