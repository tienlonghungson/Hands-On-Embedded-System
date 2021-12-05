$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Infineon XC866/XC864 devices 
;  Copyright (C) 2011 ARM Limited. All rights reserved.
;  Version 1.06
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  STARTUP.A51:  This code is executed after processor reset.
;
;  To translate this file use A51 with the following invocation:
;
;     A51 START_XC86x.A51
;
;  To link the modified START_XC86x.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, START_XC86x.OBJ  controls
;
;------------------------------------------------------------------------------
;
;<e> Use off-chip XTAL
;<i> XC86x series runs by default from on-chip oscillator.
;<i> optionally you may use a off-chip XTAL
;
XTAL          EQU   0     ; set to 0 for on-chip oscillator, 1 for external clock
;
;---------------------------------------------------------------------
;
; <o> PLL N-Divider
; <i> PLL N-Divider must result in fsys = 80MHz for 'NON-SAL' (e.g. SAK, SAF, SAA) devices
; <i> PLL N-Divider must result in fsys = 75MHz for 'SAL' devices
; <0=>  N=14
; <1=>  N=15 (10 MHz XTAL 'SAL')
; <2=>  N=16 (10 MHz XTAL 'NON-SAL')
; <3=>  N=17
; <4=>  N=18
; <5=>  N=19
; <6=>  N=20 (8 MHz XTAL 'NON-SAL')
; <7=>  N=21
; <8=>  N=24
; <9=>  N=28
; <10=> N=30 (5 MHz XTAL 'SAL')
; <11=> N=32 (5 MHz XTAL 'NON-SAL')
; <12=> N=40
; <13=> N=42
; <14=> N=45
; <15=> N=50
;
NDIV            EQU     11   ; default 11 for 5 MHz XTAL for 'NON-SAL' device, fosc = 80 MHz
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
XDATALEN        EQU     0x200
;
; <o> PDATASTART: PDATA memory start address <0x0-0xFFFF> 
;     <i> The absolute start address of PDATA memory
PDATASTART      EQU     0xF000
;
; <o> PDATALEN: PDATA memory size <0x0-0xFF> 
;     <i> The length of PDATA memory in bytes.
PDATALEN        EQU     0
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
;
;  <e>Parameters for LIN Boostrap Loader (XC864 only)
;  <i>When these values are not defined, an XC864 device stays in 
;  <i>LIN-BSL mode and does not start the user application 
;
; Enable LIN BSL parameter initialization
LIN_BSL         EQU     0           ; set to 1 if LIN BSL parameters should be generated in flash table
;
; <o> NAC: No. Activity Count <0x00-0xFF> 
; <i> specifies the delay (n * 5ms) before jumping to user mode.
; <i> 0x01:  0 ms delay. Jump to User Mode immediately
; <i> 0x02:  5 ms delay before jumping to User Mode
; <i> 0x03: 10 ms delay before jumping to User Mode
; <i> 0x04 - 0x0C: 15 - 55 ms delay before jumping to User Mode
; <i> 0x0D - 0xFF, 0x00: Enter LIN BSL Mode (Invalid NAC)
LIN_NAC         EQU     0x01
;
; <o> NAD: Node Address for Diagnostic <0x00-0xFF> 
; <i> specifies the address of the active slave node.
LIN_NAD         EQU     0x01
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
sfr     SCU_PAGE = 0xBF
sfr     PLL_CON  = 0xB7
sfr     PLL_CON1 = 0xEA;//SCU,RMAP=0,Page=1
sfr     CMCON    = 0xBA
sfr     OSC_CON  = 0xB6
sfr     PASSWD   = 0xBB
sfr     XADDRH   = 0xB3
sfr     MEX3     = 0x96

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
                MOV     SCU_PAGE,#1
                ORL     PLL_CON, #0x08  ; VCOBYP = 1 
                ORL     PLL_CON, #0x04  ; OSCDISC = 1   _ _ _ NDIV, VCOBYP, OSCDISC, RESLD, LOCK
                ANL     OSC_CON, #0xF7  ; XPD = 0       power xtal
                ORL     OSC_CON, #0x04  ; OSCSS = 1     0, 0, 0, OSCPD, XPD, OSCSS, ORDRES, OSCR
                ;all calculations are based on no wait state
                MOV     R1,#0
DelayXTAL0:
                MOV     R0,#10         ; delay necssary for external clock to stablise (amplitude >= 0.4 * VDDC - refer to product data sheet)
DelayXTAL:      ; delay time should be adjusted according to different external osciallators
                DJNZ    R1,$
                DJNZ    R0,DelayXTAL
                
                ; redetection of osc
OSCR_NOTSET:	
                MOV	R0, #86
                ORL    	OSC_CON, #0x02  ; ORDRES = 1    ;restart oscillator run detection
		;assume no wait state, K = 2, 
		;Apollo requires to wait for 256 clock cycles -> 2048 vco cycles
		;Elektra requires to wait for 342 clock cycles -> 2048 vco cycles 
		;djnz = 4 cc
                DJNZ	R0, $
                MOV     A,OSC_CON
                JNB     ACC.0, OSCR_NOTSET  

                ;reprogram the NDIV factor to required value
                ;ORL     PLL_CON, #0x08      ; VCOBYP = 1 to change N-Divider
                MOV     PASSWD,  #0x98      ; open access to writing protected bit
                ANL     PLL_CON, #0x0F
                ORL     PLL_CON, #NDIV*16
                ANL     PLL_CON, #0xFB      ; OSCDISC = 0, reconnect oscillator to the PLL

                ;PLL lock detection
                ORL     PLL_CON, #0x02     ; detect PLL lock
                MOV     R0, #100           ; LOCK flag should be set within 200us, user need to adapt accordingly
                                            ; assume a 10MHz XTAL for XC866/XC864 device
                                            ; device is in prescaler mode, k = 2 therefore fsys = 5MHz
                                            ; ## 1cclk = 1/(5MHz/3) = 600 ns
                                            ; DJNZ requires 4 x 600ns = 2.4 us therefore 100 DJNZ -> 240us
                                            ; for XC88x, the factor 3 (##) is changed to 4 then the calculated value is 
                                            ; 320 us based on a 10MHz XTAL
WAIT_LOCK:
                DJNZ    R0, $
                MOV     A, PLL_CON
                JNB     ACC.0, OSCR_NOTSET
                ; reconnect to PLL
                ANL     PLL_CON, #0xF7   ; VCOBYP = 0
                MOV     SCU_PAGE,#0	   
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

; Overwrite ?C?DPSEL address for XC8xx Device
PUBLIC ?C?DPSEL
?C?DPSEL        DATA    0A2H   ; DPSEL address for Mentor M8051EW

; Optional ROM-table for XC864 LIN-BSL
IF LIN_BSL <> 0
                CSEG    AT      0FFCH
                DB      LIN_NAC
                DB      NOT(LIN_NAC)
                DB      LIN_NAD
                DB      NOT(LIN_NAD)
ENDIF

                END
