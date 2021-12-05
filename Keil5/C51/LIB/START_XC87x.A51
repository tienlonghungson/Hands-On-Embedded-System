$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Infineon XC87x and XC85x devices 
;  Copyright (C) 2010 ARM Limited. All rights reserved.
;  Version 1.06
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  STARTUP.A51:  This code is executed after processor reset.
;
;  To translate this file use A51 with the following invocation:
;
;     A51 START_XC87x.A51
;
;  To link the modified START_XC87x.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, START_XC87x.OBJ  controls
;
;------------------------------------------------------------------------------
;
;<e> Use off-chip XTAL
;<i> XC8xx series runs by default from on-chip oscillator.
;<i> optionally you may use a off-chip XTAL
;
XTAL          EQU   0     ; set to 0 On-chip oscillator/ not used for XC82x devices
;---------------------------------------------------------------------
;
; <o> PLL NDIV-Divider  <2-513>
; <i> typical values for fsys = 144 MHz are
; <i> 4 MHz XTAL: NDIV = 72  PDIV = 2  KDIV = 1
; <i> 6 MHz XTAL: NDIV = 72  PDIV = 3  KDIV = 1
; <i> 8 MHz XTAL: NDIV = 72  PDIV = 4  KDIV = 1
;
NDIV            EQU    72      ; default 72
;
; <o> PLL PDIV-Divider  <2-33>
; <i> typical values for fsys = 144 MHz are
; <i> 4 MHz XTAL: NDIV = 72  PDIV = 2  KDIV = 1
; <i> 6 MHz XTAL: NDIV = 72  PDIV = 3  KDIV = 1
; <i> 8 MHz XTAL: NDIV = 72  PDIV = 4  KDIV = 1
;
PDIV            EQU     2      ; default 2
;
; <o> PLL KDIV-Divider  <1-4>
; <i> typical values for fsys = 144 MHz are
; <i> 4 MHz XTAL: NDIV = 72  PDIV = 2  KDIV = 1
; <i> 6 MHz XTAL: NDIV = 72  PDIV = 3  KDIV = 1
; <i> 8 MHz XTAL: NDIV = 72  PDIV = 4  KDIV = 1
;
KDIV            EQU     1      ; default 1

NDIV_XC87x_PLL_CON    EQU       LOW(((NDIV - 2) SHL 2))
NDIV_XC87x_PLL_CON1   EQU       (((NDIV - 2) SHR 1) AND 0E0H)
PDIV_XC87x_PLL_CON1   EQU       ((PDIV - 2) AND 01FH)
KDIV_XC87x_PLL_CMCON  EQU       ((KDIV - 1) SHL 6)

;</e>
;------------------------------------------------------------------------------
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
PDATALEN        EQU     0
;
; <o> XSTACKLEN: Extended stack size (XC878 only)<0x0-0xFF> 
;     <i> The length of the extended stack memory in bytes.
;     <i> The size of the extended stack of a XC878 device is 0x80.
;     <i> Set this to 0x80 if you are using RTX Tiny!
XSTACKLEN       EQU     0x00
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
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
; <o> PPAGE number <0x0-0xFF> 
; <i> uppermost 256-byte address of the page used for PDATA variables.
PPAGE           EQU     0xF0
;
; </e>
;------------------------------------------------------------------------------

; Standard SFR Symbols 
ACC     DATA    0E0H
B       DATA    0F0H
SP      DATA    81H
DPL     DATA    82H
DPH     DATA    83H

; XC8xx specific SFR Symbols used in STARTUP code
sfr  SCU_PAGE = 0xBF
sfr  PLL_CON  = 0xB7
sfr  PLL_CON1 = 0xEA;//SCU,RMAP=0,Page=1
sfr  CMCON    = 0xBA
sfr  OSC_CON  = 0xB6
sfr  PASSWD   = 0xBB
sfr  XADDRH   = 0xB3
sfr  MEX1     = 0x94
sfr  MEX2     = 0x95
sfr  MEX3     = 0x96
sfr  MEXSP    = 0x97

sfr  PORT_PAGE = 0xB2
sfr  P3_PUDEN  = 0xB1
sfr  P4_PUDEN  = 0xC9

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

IF (XTAL <> 0)       
                    ; switch to external XTAL
                MOV     SCU_PAGE,#1;
                MOV     PASSWD, #11000000B     ;Disable Bit-Protection
                ANL     OSC_CON, #~(0x01 << 2) ;OSCSS = 0
                ORL     OSC_CON, #(0x01 << 6)  ;Bypass PLL Output ( PLLBYP = 1 )
                ORL     OSC_CON, #(0x01 << 5)  ;Set PLL Power Down Mode ( PLLPD = 1)
                ANL     OSC_CON, #~(0x01 << 3) ;XPD = 0, XTAL not powered down
                          
                          
WAIT_XTAL_STABLE:                  ; delay necssary for external clock to stablise
                MOV     R2,#0x1E   ; wait about 1.5 ms ( varies with oscillator freq )
LOOP:
                MOV     R3,#0x64
                DJNZ    R3, $
                DJNZ    R2, LOOP
OSC_WDT:
                ORL     OSC_CON, #(0x01 << 1)  ;Restart external oscillator watchdog
                MOV     R0,#0x41               ;Wait for 65 cycles
                DJNZ    R0, $
                                   ;user may want to add an error counter for oscillator detection
CHECK_EXTOSCR:
                MOV     A, OSC_CON
                JNB     ACC.0, OSC_WDT        
                ORL     OSC_CON, #(0x01 << 2)  ;Select external oscillator 
                MOV     PLL_CON,  #NDIV_XC87x_PLL_CON      ; NDIV value 
                MOV     PLL_CON1, #NDIV_XC87x_PLL_CON1     ; NDIV Value 
                MOV     A, #PDIV_XC87x_PLL_CON1            ; PDIV Value 
                ORL     PLL_CON1, A                                     
                MOV     A, #KDIV_XC87x_PLL_CMCON           ; KDIV Value 
                ORL     CMCON,    A                                     
                ANL     OSC_CON, #~(0x01 << 5)  ;Change to PLL Normal Mode ( PLLPD = 0) 
                ORL     OSC_CON, #(0x01 << 7)   ;Restart the PLL watchdog ( PLLRDRES = 1) 

                                   ;user may want to add an error counter for PLL lock detection
PLLNOTRUN:
                MOV     A, PLL_CON
                JNB     ACC.1, PLLNOTRUN           ;PLL_Run Status

PLLNOTLOCKED:
                MOV     A, PLL_CON
                JNB     ACC.0, PLLNOTLOCKED        ;PLL_Lock Status

                ANL     OSC_CON, #~(0x01 << 6)     ;Disable bypass PLL output 
                MOV     PASSWD, #11000011B         ;Enable Bit-Protection
                MOV     SCU_PAGE,#0

ENDIF

IF IDATALEN <> 0
                MOV     R0,#IDATALEN - 1
                CLR     A
IDATALOOP:      MOV     @R0,A
                DJNZ    R0,IDATALOOP
ENDIF

; Set memory extension register for XC878_16FF devices
                MOV     MEX1, #0x00                ; Select current bank 0 and next bank 0
                MOV     MEX2, #0x00                ; Select interrupt bank 0, constant bank 0 and memory constant mode to 0
                MOV     MEX3, #0x1F                ; Select bank address 0xFxxxx for XDATA accesses

IF XSTACKLEN <> 0
; Initialize extended Stack. This is absolutely necessary when RTX Tiny is used
                MOV     R0,#XSTACKLEN - 1          ; size of extended stack area
XSTACK_LOOP:    LCALL   XSTACK1                    ; dummy call to next instruction to push the current bank 0 
                                                   ; onto the extended stack
XSTACK1:        POP     ACC                        ; remove return address from normal stack
                POP     ACC
                DJNZ    R0,XSTACK_LOOP
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

; Overwrite ?C?DPSEL address for XC8xx Device
PUBLIC ?C?DPSEL
?C?DPSEL        DATA    0A2H   ; DPSEL address for Mentor M8051EW

                END
