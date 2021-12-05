$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Infineon TLE983x devices 
;  Copyright (c) 2012 ARM Ltd and ARM Germany GmbH. All rights reserved.
;  Version 1.06
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  STARTUP.A51:  This code is executed after processor reset.
;
;  To translate this file use A51 with the following invocation:
;
;     A51 START_TLE983x.A51
;
;  To link the modified START_TLE983x.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, START_TLE983x.OBJ  controls
;
;------------------------------------------------------------------------------
;
;<e> Use off-chip XTAL
;<i> TLE983x start from on-chip oscillator by default.
;<i> optionally you may use a off-chip XTAL
;
XTAL           EQU     0   ; set to 1 for off-chip XTAL

;<q> Normal Mode: Use locked PLL
;<i> Normal mode means with locked PLL (no freerunning mode).
NORMAL_MODE    EQU     1   ; set to 1 for Normal mode

;<q> Prescaler Mode: Use K1 Prescaler
;<i> Use K1 Prescaler.
PRESCALER_MODE EQU     0   ; set to 1 for Prescaler mode
;
;---------------------------------------------------------------------
;
; <o> PLL N-Divider
; <0=> N=8
; <1=> N=9
; <2=> N=10
; <3=> N=12
; <4=> N=14
; <5=> N=15
; <6=> N=16 (default)
; <7=> N=18
; <8=> N=20
; <9=> N=21
; <10=> N=22
; <11=> N=24
; <12=> N=25
; <13=> N=26
; <14=> N=27
; <15=> N=28
NDIV           EQU  11   ; default 6 => N=16

; <o> PLL K2-Divider
; <0=> K2=2 (default)
; <1=> K2=3
; <2=> K2=4
; <3=> K2=5
K2DIV          EQU   3   ; default 0 => K2=2

; <o> PLL K1-Divider
; <0=> K2=2 (default)
; <1=> K2=1
K1DIV          EQU   0   ; default 0 => K1=2

;</e>
;---------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
; <o> IDATALEN: IDATA memory size <0x0-0x100>
;     <i> Note: The absolute start-address of IDATA memory is always 0
;     <i>       The IDATA space overlaps physically the DATA and BIT areas.
IDATALEN        EQU     0x100
;
; <o> XDATASTART: XDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of XDATA memory
XDATASTART      EQU     0xF000     
;
; <o> XDATALEN: XDATA memory size <0x0-0xFFFF> 
;     <i> The length of XDATA memory in bytes.
XDATALEN        EQU     0xC00
;
; <o> PDATASTART: PDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of PDATA memory
PDATASTART      EQU     0xF000
;
; <o> PDATALEN: PDATA memory size <0x0-0xFF> 
;     <i> The length of PDATA memory in bytes.
;     <i> PDATA usually points to the XSFR area for the .
PDATALEN        EQU     0x00
;
; </h>
;------------------------------------------------------------------------------
;
; <h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialize it:
;
; <h> Stack Space for reentrant functions in the SMALL model.
;  <q> IBPSTACK: Enable SMALL model reentrant stack
;     <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
;  <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;     <i> Set the top of the stack to the highest location.
IBPSTACKTOP     EQU     0xFF +1     ; default 0FFH+1  
; </h>
;
; <h> Stack Space for reentrant functions in the LARGE model.
;  <q> XBPSTACK: Enable LARGE model reentrant stack
;     <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
;  <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0xFFFF>
;     <i> Set the top of the stack to the highest location.
XBPSTACKTOP     EQU     0xFFFF +1   ; default 0FFFFH+1 
; </h>
;
; <h> Stack Space for reentrant functions in the COMPACT model.
;  <q> PBPSTACK: Enable COMPACT model reentrant stack
;     <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
;
;   <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFFFF>
;     <i> Set the top of the stack to the highest location.
PBPSTACKTOP     EQU     0xFF +1     ; default 0FFH+1  
; </h>
; </h>
;------------------------------------------------------------------------------
;
;  Memory Page for Using the Compact Model with 64 KByte xdata RAM
;  <e>Compact Model Page Definition
;
;  <i>Define the XDATA page used for PDATA variables. 
;  <i>PPAGE must conform with the PPAGE set in the linker invocation.
;
; Enable pdata memory page initalization
PPAGEENABLE     EQU     1       ; set to 1 if pdata object are used.
;
; <o> PPAGE number <0x0-0xFF> 
; <i> XSFRs can be addressed effectively via PDATA variables on a TLE983x.
; <i> Therefore, PPAGE needs to be set to 0.
PPAGE           EQU     0x00
;
; </e>
;------------------------------------------------------------------------------

; Standard SFR Symbols 
ACC     DATA    0E0H
B       DATA    0F0H
SP      DATA    81H
DPL     DATA    82H
DPH     DATA    83H

; TLE9832 specific SFR Symbols used in STARTUP code
sfr  SCU_PAGE = 0xF1
sfr  PLL_CON  = 0xF4
sfr  CMCON    = 0xF5
sfr  OSC_CON  = 0xF4
sfr  PASSWD   = 0xF2
sfr  MEX3     = 0x96
sfr  XADDRH   = 0xF2


                NAME    ?C_STARTUP

?C_C51STARTUP   SEGMENT   CODE
?STACK          SEGMENT   IDATA

                RSEG    ?STACK
                DS      1

                EXTRN CODE (?C_START)
                PUBLIC  ?C_STARTUP

                CSEG    AT      0
?C_STARTUP:     LJMP    STARTUP1

                RSEG    ?C_C51STARTUP

STARTUP1:
IF XTAL <> 0                                 ;---enter prescalar mode----------
                MOV     SCU_PAGE , #2        ;
                ORL     PLL_CON  , #0x08     ; Set VCOBYP = 1  Bypass VCO
                ANL     PLL_CON  , #0xFB     ; Set OSCDISC = 0 By default it is
                                             ; set to 1 upon Power-On RESET
                MOV     PASSWD   , #0x98     ; open access to write protected
                                             ;------- switch to Ext OSC-----------
                MOV     SCU_PAGE , #6        ;
                ORL     OSC_CON ,  #0x01     ; OSCSS = 01B
                ANL     OSC_CON ,  #0x8F     ; XPD = 0
                MOV     SCU_PAGE , #2        ;
IF NORMAL_MODE <> 0                          ;---Chk  Normal mode----------
                                             ;------- switch NDIV--------------
                                             ; bit
                ANL     PLL_CON  , #0x0F     ; Clear previous NDIV value
                ORL     PLL_CON  , #NDIV*16  ; modify NDIV
                                             ;--------switch K2DIV-------------
                ANL     CMCON    , #0xCF     ; clear K2DIV
                ORL     CMCON    , #K2DIV*16 ; Range for K2DIV <0-3>
                                             ;-----restart detection of lock---
                ORL     PLL_CON  , #0x02     ; set RESLD bit
                MOV     PASSWD   , #0xC3     ;-enable password protection again
WAIT_LOCK:
                MOV     A        , PLL_CON   ;-wait untill PLL is locked-------
                JNB     ACC.0    , WAIT_LOCK ;
                                             ;--------reconnect to PLL---------
                ANL     PLL_CON  , #0xF7     ; Set VCOBYP = 0
ENDIF
IF PRESCALER_MODE <> 0                       ;---Chk  Prescalar mode----------
                                             ;------- switch K1DIV--------------
                ANL     CMCON    , #0xBF     ; clear K1DIV
                ORL     CMCON    , #K1DIV*64 ; Range for K1DIV <1-2>
                                             ;-----restart detection of lock---
WAIT_LOCK_1:
                MOV     A        , OSC_CON   ;-wait untill PLL is locked-------
                JB      ACC.3    , WAIT_LOCK_1;
                                             ;--------reconnect to PLL---------
                MOV     PASSWD   , #0xC3     ;-enable password protection again
ENDIF
                MOV     SCU_PAGE , #0
ENDIF

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
                MOV     SCU_PAGE,#3 
                MOV     XADDRH,#PPAGE
                MOV     SCU_PAGE,#0 
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

                MOV     SP,#?STACK-1

                LJMP    ?C_START

; Overwrite ?C?DPSEL address for TLE983x Device
PUBLIC ?C?DPSEL
?C?DPSEL        DATA    0A2H   ; DPSEL address for Mentor M8051EW

                END
