$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Copyright (c) 1988-2004 Keil Elektronik GmbH and Keil Software, Inc.
;  Startup code for Dallas DS89C420/430/440/450
;------------------------------------------------------------------------------
;  START4XX.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;  To translate this file use A51 with the following invocation:
;
;     AX51 START4XX.A51 MOD_CONT
;
;  To link the modified STARTUP.OBJ file to your application use the following
;  LX51 invocation:
;
;     LX51 your object file list, START4XX.OBJ [controls]

;
;------------------------------------------------------------------------------
;
; <h>Chip Specific Options 
;
;  <h>ACON - Page Mode Enable and External Memory Cycle Control
;  <q.7>  PAGEEE: Page Mode Enable (ACON.7)
;      0 => Disable Page Mode
;      1 => Enable Page Mode
;
;  <o.5..6> PAGES: Page Mode Multiplex on Port 2 & Timing Select (ACON.6, ACON.5)
;   <0=> Multiplex address MSB/LSB,  page hit: 1 cycle,  page miss: 2 cycles
;   <1=> Multiplex address MSB/LSB,  page hit: 2 cycles, page miss: 4 cycles
;   <2=> Multiplex address MSB/LSB,  page hit: 4 cycles, page miss: 8 cycles
;   <3=> Multiplex address MSB/data, page hit: 2 cycles, page miss: 4 cycles
ACONVAL EQU 0xA0
;  </h>
;
;  <e> PMR - Power Management Register
CLOCKADJUST EQU 1
;   <o> CD: Clock Divide Control (PMR.7, PMR.6, PMR.3)
;           <0x08=> x4 Mode (Crystal multiplier 4)
;           <0x00=> x2 Mode (Crystal multiplier 2)
;           <0x80=> Direct Mode (Crystal = clock, default)
;           <0xC0=> /1024 Mode (Crystal divided by 1024)
_CKMODE  EQU 0x08
;   <q.2>    ALEON: ALE Enable
;   <i> When set this bit enables the ALE signal output during on-chip program
;   <i> and data memory accesses.
;   <o.0..1> DME: Data Memory Enable (PMR.0, PMR.1)
;        <0=> 0000h–FFFFh External Data Memory (default)
;        <1=> 0000h–03FFh Internal Data Memory / 0400h–FFFFh External Data Memory
_PMR     EQU  5
;  </e>
; </h>
;------------------------------------------------------------------------------
;
; <h> User-defined Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
;  <o> IDATALEN: The length of IDATA memory in bytes.
;      <i> The absolute start-address of IDATA memory is always 0
IDATALEN        EQU     80H     
;
;  <o> XDATASTART: The length of XDATA memory in bytes.
XDATASTART      EQU     0x0      ; the absolute start-address of XDATA memory
;  <o> XDATALEN: The absolute start-address of XDATA memory
XDATALEN        EQU     0H      ; the length of XDATA memory in bytes.

;  <o> PDATASTART: The length of PDATA memory in bytes.
PDATASTART      EQU     0H      ; the absolute start-address of PDATA memory
;  <o> PDATALEN: The absolute start-address of PDATA memory
PDATALEN        EQU     0H      ; the length of PDATA memory in bytes.
; </h>
;
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.
;------------------------------------------------------------------------------
;
; <h>Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
;  <h>Stack Space for reentrant functions in the SMALL model.
;   <q>IBPSTACK: Enable reentrant Stack for SMALL model
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
;   <o>IBPSTACKTOP: Stack Top  <0x0-0xFF>
IBPSTACKTOP     EQU     0xFF+1  ; set top of stack to highest location+1.
;  </h>
;
;  <h>Stack Space for reentrant functions in the LARGE model.
;   <q>XBPSTACK: Enable reentrant Stack for LARGE model      
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
;   <o>XBPSTACKTOP: Stack Top  <0x0-0xFFFF>
XBPSTACKTOP     EQU     0xFFFF+1; set top of stack to highest location+1.
;  </h>
;
;  <h>Stack Space for reentrant functions in the COMPACT model.
;   <q>PBPSTACK: Enable reentrant Stack for COMPACT model    
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
;   <o>PBPSTACKTOP: Stack Top  <0x0-0xFFFF>
PBPSTACKTOP     EQU     0FFFFH+1; set top of stack to highest location+1.
;
;  </h>
;------------------------------------------------------------------------------
;
;  Page Definition for Using the Compact Model with 64 KByte xdata RAM
;
;  The following EQU statements define the xdata page used for pdata
;  variables. The EQU PPAGE must conform with the PPAGE control used
;  in the linker invocation.
;  
;  <e> PPAGEENABLE: Compact Model Page Definition
;      <i>Define the xdata page used for pdata variables. 
;      <i>PPAGE must conform with the PPAGE set in the linker invocation.
;
; Enable pdata memory page initalization
PPAGEENABLE     EQU     0       ; set to 1 if pdata object are used.
;
;   <o> PPAGE: Page number <0x0-0xFF> 
;       <i> Uppermost 256-byte address of the page used for pdata variables.
PPAGE           EQU     0       ; define PPAGE number.
;
;   <o> PPAGE_SFR: SFR address containing the uppermost address byte <0x0-0xFF> 
;       <i> Most 8051 variants use P2 as uppermost address byte
PPAGE_SFR       DATA    0A0H
;
;  </e>
; </h>

;------------------------------------------------------------------------------

#include <REG420.H>

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

                MOV     ACON, ACONVAL                   

IF CLOCKADJUST <> 0
                MOV     PMR,#0x80                        ; Clock direct
                ANL     EXIF,#NOT 0x04                   ; Clear RGMG
                MOV     PMR,#(_PMR OR _CKMODE OR 0x90)   ; put new clock value
NOT_STABLE:
                MOV     A,EXIF
                JNB     ACC.3,NOT_STABLE                 ; wait until stable
                ANL     PMR,#03FH                        ; Clear clock direct
$ENDIF

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

                MOV     SP,#?STACK-1
; This code is required if you use L51_BANK.A51 with Banking Mode 4
;<h> Code Banking
; <q> Select Bank 0 for L51_BANK.A51 Mode 4
#if 0   
; <i> Initialize bank mechanism to code bank 0 when using L51_BANK.A51 with Banking Mode 4.
 EXTRN CODE (?B_SWITCH0)
                CALL    ?B_SWITCH0      ; init bank mechanism to code bank 0
#endif
;</h>
                LJMP    ?C_START

                END
