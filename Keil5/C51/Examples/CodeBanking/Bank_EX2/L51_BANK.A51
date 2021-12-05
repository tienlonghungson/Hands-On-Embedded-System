;------------------------------------------------------------------------------
;  This file is part of the BL51 Banked Linker/Locater package
;  Copyright (c) 1988-2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 1.4c
;------------------------------------------------------------------------------
;************************ Configuration Section *******************************
?B_NBANKS       SET     2        ; Define max. Number of Banks                *
;                                ; the max. value for ?B_BANKS is 32          *
; Note: Valid numbers for ?B_NBANKS are 2, 4, 8, 16, or 32.  If you have      *
;       a application with 3 banks you must define ?B_NBANKS to 4!            *
;                                                                             *
?B_MODE         EQU     0        ; 0 for Bank-Switching via 8051 Port         *
;                                ; 1 for Bank-Switching via XDATA Port        *
;                                                                             *
?B_RTX          EQU     0        ; 0 for applications without RTX-51 FULL     *
;                                ; 1 for applications using RTX-51 FULL       *
;                                                                             *
IF  ?B_MODE = 0;                                                              *
;-----------------------------------------------------------------------------*
; if ?BANK?MODE is 0 define the following values                              *
; For Bank-Switching via 8051 Port define Port Address / Bits                 *
?B_PORT         EQU     P1       ; default is P1                              *
?B_FIRSTBIT     EQU     3        ; default is Bit 3                           *
;-----------------------------------------------------------------------------*
ENDIF;                                                                        *
;                                                                             *
IF  ?B_MODE = 1;                                                              *
;-----------------------------------------------------------------------------*
; if ?BANK?MODE is 1 define the following values                              *
; For Bank-Switching via XDATA Port define XDATA Port Address / Bits          *
?B_XDATAPORT    EQU     0FFFFH   ; default is XDATA Port Address 0FFFFH       *
?B_FIRSTBIT     EQU     0        ; default is Bit 0                           *
;-----------------------------------------------------------------------------*
ENDIF;                                                                        *
;                                                                             *
;******************************************************************************

                NAME    ?BANK?SWITCHING

                PUBLIC  ?B_NBANKS, ?B_MODE, ?B_CURRENTBANK, ?B_MASK
                PUBLIC  ?B_FACTOR
                PUBLIC  _SWITCHBANK

?B_FACTOR       EQU     1 SHL ?B_FIRSTBIT

IF  ?B_MODE = 0
?B_CURRENTBANK  EQU     ?B_PORT
ENDIF

IF  ?B_MODE = 1

?C_INITSEG      SEGMENT   CODE          ; Segment zur Initialisierung
                RSEG    ?C_INITSEG
                DB      01H             ; IData
                DB      ?B_CURRENTBANK  ; Init Current Bank
                DB      0               ; Set to Zero
                DB      41H             ; XData
                DW      ?B_XDATAPORT    ; Init XDATA Port
                DB      0               ; Set to Zero

                PUBLIC  ?B_XDATAPORT

?BANK?DATA      SEGMENT DATA
                RSEG    ?BANK?DATA
?B_CURRENTBANK: DS      1
ENDIF

; generate Mask and Bank Number Information
IF      ?B_NBANKS <= 2
  MASK          EQU     00000001B
ELSEIF  ?B_NBANKS <= 4
  MASK          EQU     00000011B
ELSEIF  ?B_NBANKS <= 8
  MASK          EQU     00000111B
ELSEIF  ?B_NBANKS <= 16
  MASK          EQU     00001111B
ELSE
  MASK          EQU     00011111B
ENDIF     

; make sure that ?B_NBANKS is 2, 4, 8, 16, or 32
?B_NBANKS       SET     (?B_NBANKS + MASK) AND (NOT MASK)


?B_MASK         EQU     MASK SHL ?B_FIRSTBIT

BANKN           MACRO   N
BANK&N           EQU     N SHL ?B_FIRSTBIT
                ENDM

CNT             SET     0

                REPT    ?B_NBANKS
                BANKN   %CNT
CNT             SET     CNT+1
                ENDM

IF ?B_MODE = 0 OR ?B_RTX = 1 OR ?B_NBANKS > 16
  ; Convert Bank No in Accu to Address * 8

  IF  ?B_FIRSTBIT = 0
  CONVBANKNO    MACRO
                SWAP    A
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 1
  CONVBANKNO    MACRO
                RL      A
                RL      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 2
  CONVBANKNO    MACRO
                RL      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 3
  CONVBANKNO    MACRO
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 4
  CONVBANKNO    MACRO
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 5
  CONVBANKNO    MACRO
                RR      A
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 6
  CONVBANKNO    MACRO
                SWAP    A
                RL      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 7
  CONVBANKNO    MACRO
                SWAP    A
                ENDM
  ENDIF
ENDIF


IF ?B_MODE = 1 AND ?B_RTX = 0 AND ?B_NBANKS <= 16
  ; Convert Bank No in Accu to Address * 16
  IF  ?B_FIRSTBIT = 0
  CONVBANKNO    MACRO
                SWAP    A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 1
  CONVBANKNO    MACRO
                SWAP    A
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 2
  CONVBANKNO    MACRO
                RL      A
                RL      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 3
  CONVBANKNO    MACRO
                RL      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 4
  CONVBANKNO    MACRO
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 5
  CONVBANKNO    MACRO
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 6
  CONVBANKNO    MACRO
                RR      A
                RR      A
                ENDM
  ENDIF

  IF  ?B_FIRSTBIT = 7
  CONVBANKNO    MACRO
                SWAP    A
                RL      A
                ENDM
  ENDIF
ENDIF


SELECT          MACRO   N
LOCAL           XLABEL, YLABEL

                PUBLIC  ?B_BANK&N
?B_BANK&N:      
                MOV     A,?B_CURRENTBANK
                ANL     A,#?B_MASK
                CJNE    A,#BANK&N,XLABEL

IF ?B_MODE = 0
                CLR     A
                JMP     @A+DPTR
ENDIF

IF ?B_MODE = 1
                SJMP    YLABEL
ENDIF

XLABEL:         CONVBANKNO         ; Convert Bank Number to Address
                PUSH    ACC
                MOV     A,#HIGH ?BANK?SWITCH
                PUSH    ACC
YLABEL:         PUSH    DPL
                PUSH    DPH
                LJMP    ?B_SWITCH&N

                ENDM


?BANK?SELECT    SEGMENT  CODE

                RSEG    ?BANK?SELECT
CNT             SET     0

                REPT    ?B_NBANKS
                SELECT  %CNT
CNT             SET     CNT+1

                ENDM


SWITCH          MACRO   N
  IF  ?B_MODE = 0
                ORG     N * 8
                PUBLIC  ?B_SWITCH&N
    ?B_SWITCH&N:
    IF ?B_RTX = 0
                ORL     ?B_CURRENTBANK,#?B_MASK
       IF  N <> (?B_NBANKS-1)
                ANL     ?B_CURRENTBANK,#(BANK&N OR NOT ?B_MASK) 
       ENDIF
                RET
    ELSE
       IF  N <> (?B_NBANKS-1)
                MOV     R0, A
                MOV     A, #(BANK&N OR NOT ?B_MASK) 
                LJMP    SWITCHBNK
       ELSE
                ORL     ?B_CURRENTBANK,#?B_MASK
                RET
       ENDIF
    ENDIF                
  ENDIF


  IF  ?B_MODE = 1 AND ?B_RTX = 0 AND ?B_NBANKS <= 16
                ORG     N * 16
                PUBLIC  ?B_SWITCH&N
    ?B_SWITCH&N:
                MOV     R0,A
                MOV     A,#BANK&N
                MOV     DPTR,#?B_XDATAPORT
                MOV     ?B_CURRENTBANK,A
                MOVX    @DPTR,A
                MOV     A,R0
                RET
  ENDIF

  IF  ?B_MODE = 1 AND (?B_RTX = 1 OR ?B_NBANKS > 16)
                ORG     N * 8
                PUBLIC  ?B_SWITCH&N
    ?B_SWITCH&N:
                MOV     R0,A
                MOV     A,#BANK&N
                LJMP    SWITCHNOW
  ENDIF

                ENDM


?BANK?SWITCH    SEGMENT  CODE  PAGE

                RSEG    ?BANK?SWITCH
CNT             SET     0

                REPT    ?B_NBANKS
                SWITCH  %CNT

CNT             SET     CNT+1
                ENDM


  IF  ?B_MODE = 1 AND (?B_RTX = 1 OR ?B_NBANKS > 16)
    SWITCHNOW:  MOV     DPTR,#?B_XDATAPORT
    IF ?B_RTX = 0
                MOV     ?B_CURRENTBANK,A
                MOVX    @DPTR,A
    ELSE
                PUSH    IE
                CLR     EA
                MOV     ?B_CURRENTBANK,A
                MOVX    @DPTR,A
                POP     IE
    ENDIF
                MOV     A,R0
                RET
  ENDIF

  IF ?B_MODE = 0 AND ?B_RTX = 1
    SWITCHBNK:  PUSH    IE
                CLR     EA
                ORL     ?B_CURRENTBANK, #?B_MASK
                ANL     ?B_CURRENTBANK, A
                POP     IE
                MOV     A, R0
                RET
  ENDIF

RSEG            ?BANK?SELECT

;************************  SWITCHBANK FUNCTION  *******************************
;                                                                             *
; SWITCHBANK allows use of bank-switching for C programs                      *
;                                                                             *
; prototype:   extern switchbank (unsigned char bank_number);                 *
;                                                                             *
;******************************************************************************

_SWITCHBANK:    MOV     A,R7
IF ?B_MODE = 0  OR  ?B_NBANKS > 16 OR ?B_RTX = 1
                SWAP    A
                RR      A
ENDIF

IF ?B_MODE = 1  AND  ?B_NBANKS <= 16 AND ?B_RTX = 0
                SWAP    A
ENDIF
                MOV     DPTR,#?BANK?SWITCH
                JMP     @A+DPTR


                END
