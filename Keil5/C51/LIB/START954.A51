;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the NXP LPC954 devices 
;  Copyright (c) 1988-2008 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 2.3
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  START954.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;
;  To translate this file use Ax51 with the following invocation:
;
;     Ax51 START954.A51 "your options"
;
;  To link the modified START954.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, START954.OBJ  controls
;
;------------------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
; With the following statements the initialization of memory
; at processor reset can be defined:
;
;  <o> IDATALEN: IDATA memory length <0x0-0x100>
;      <i> Notes: The absolute start-address of IDATA memory is always 0
;      <i>        The IDATA space overlaps physically the DATA and BIT areas of the
;      <i>        LPC9xx device.
IDATALEN        EQU     0x100    ; the length of IDATA memory in bytes.
;
;  <o> XDATASTART: XDATA memory start address <0x0-0xFFFF> 
;      <i>the absolute start-address of XDATA memory
XDATASTART      EQU     0     
;
;  <o> XDATALEN: XDATA memory length <0x0-0xFFFF> 
;      <i>the length of XDATA memory in bytes.
XDATALEN        EQU     0      
;
; </h>
;------------------------------------------------------------------------------
;
; <h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
;  <h> Stack Space for reentrant functions in the SMALL model.
;   <q> IBPSTACK: Enable SMALL model reentrant stack
;       <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK        EQU     0       ; set to 1 if small reentrant is used.
;   <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;       <i> Set the top of the stack to the highest location. 
IBPSTACKTOP     EQU     0xFF +1   ; default 0FFH+1  
;  </h>
;
;  <h> Stack Space for reentrant functions in the LARGE model.      
;   <q> XBPSTACK: Enable LARGE model reentrant stack
;       <i> Stack space for reentrant functions in the LARGE model.
XBPSTACK        EQU     0       ; set to 1 if large reentrant is used.
;   <o> XBPSTACKTOP: End address of LARGE model stack <0x0-0x1FF>
;       <i> Set the top of the stack to the highest location. 
XBPSTACKTOP     EQU     0x1FF +1   ; default 01FFH+1 
;  </h>
;
;  <h> Stack Space for reentrant functions in the COMPACT model.    
;   <q> PBPSTACK: Enable COMPACT model reentrant stack
;       <i> Stack space for reentrant functions in the COMPACT model.
PBPSTACK        EQU     0       ; set to 1 if compact reentrant is used.
;   <o> PBPSTACKTOP: End address of COMPACT model stack <0x0-0xFF>
;       <i> Set the top of the stack to the highest location.
PBPSTACKTOP     EQU     0xFF +1   ; default 0FFH+1  
;  </h>
; </h>
;------------------------------------------------------------------------------
;
;  Setup LPC9xx Configuration Register (UCFG1, UCFG2, BOOTVEC, BOOTSTAT, SEC0..SEC7)
;
; <h> Reset Pin Mode (P1.5/RST)
; <o> RPE1(UCFG2.0), RPE(UCFG1.6)
;     <0=> General purpose input
;     <1=> Reset input with pullup
;     <2=> Bidirectional reset input/output (open drain with pullup)
;     <3=> Reset ouput
RPE  EQU 1
; </h>
;
;
; <h> Device Configuration UCFG1
; Oscillator Configuration (UCFG1.0 .. UCFG1.2)
;  <o> FOSC: (UCFG1.0 .. UCFG1.2)
; FOCS Val  Description
; --------  -----------
;    <0=>   high frequency crystal or resonator (4MHz .. 20MHz)
;    <1=>   medium frequency crystal or resonator (100kHz .. 4MHz)
;    <2=>   low frequency crystal (20kHz .. 100kHz)
;    <3=>   internal RC oscillator (7.373MHz +/- 2.5 percent)
;    <4=>   internal Watchdog oscillator (400kHz +20/-30 percent)
;    <7=>   external clock input on X1
;           <i> Oscillator Configuration
FOSC EQU 3  ; default on unprogrammed parts: 3 = internal RC oscillator
;
;  <o> IRCDBL: (UCFG1.3) 
; IRCDBL Val  Description
; ----------  -----------
;     <0=>  7.373 MHz  standard RC oscillator clock
;     <1=>  14.745 MHz double RC oscillator clock
;           <i> clock doubling mode (0 = default on unprogrammed part)
IRCDBL EQU 0  ; default on unprogrammed parts: 0 standard clock 
;
;  <o> WDSE: (UCFG1.4) 
; WDSE Val  Description
; --------  -----------
;     <0=>  User can set WDT-Osc. as clock source
;     <1=>  WDT is running with WDT-Osc.
;           <i> Watchdog Saftey Enable (0 = default on unprogrammed part)
WDSE EQU 0  ; 0 = user can set WDCLK to select clock source(default on unprogrammed part) 
;           
;  <o> BOE: (UCFG1.5)
; BOE Val  Description
; -------  -----------
;    <0=>  Disable
;    <1=>  Enable
;          <i> Brownout Detect Enable (1 = default on unprogrammed part)
BOE EQU 1  
;
;  <o> WDTE: (UCFG1.7)   
; WDTE Val  Description
; --------  -----------
;     <0=>  Disable (WDSE has no effect)
;     <1=>  Enable 
;           <i> Watchdog timer enable (0 = default on unprogrammed part)
WDTE EQU 0  
; </h>
;
; <h> Device Configuration UCFG2
;  <q> Enable Debug Interface (UCFG2.5)
DBGENA EQU 1  ; enable debug interface
; </h>
;
; <h> Boot Program
;  <o> BSB: (BOOTSTAT.0)
; BSB Val  Description
; -------  -----------
;    <0=>  Disable ISP entry on power-up
;    <1=>  Enable ISP entry on power-up
;          <i> enables In-System Programming (ISP) power-up
BOOTSTAT EQU 0
;             
;
; BOOTVECTOR (BOOTVEC)
; --------------------
;  <o> ISP entry point <0x0-0x3F00:0x100> <# /0x100> 
;      <i> points to ISP entry point (default c:0x3F00 on unprogrammed part)
BOOTVEC EQU 0x3F
; </h>
;
; <h> Flash Security Configuration
;  <h> SEC0: (SEC0.0 .. SEC0.2)
; SEC0 Val  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x0000 - c:0x03FF)
SEC0 EQU 0  
;  </h>

;  <h> SEC1: (SEC1.0 .. SEC1.2)
; SEC1 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 1 (c:0x0400 - c:0x07FF)
SEC1 EQU 0  
;  </h>

;  <h> SEC2: (SEC2.0 .. SEC2.2)
; SEC2 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 2 (c:0x0800 - c:0x0BFF)
SEC2 EQU 0  
;  </h>

;  <h> SEC3: (SEC3.0 .. SEC3.2)
; SEC3 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 3 (c:0x0C00 - c:0x0FFF)
SEC3 EQU 0 
;  </h>

;  <h> SEC4: (SEC4.0 .. SEC4.2)
; SEC4 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 4 (c:0x1000 - c:0x13FF)
SEC4 EQU 0  
;  </h>

;  <h> SEC5: (SEC5.0 .. SEC5.2)
; SEC5 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 5 (c:0x1400 - c:0x17FF)
SEC5 EQU 0  
;  </h>

;  <h> SEC6: (SEC6.0 .. SEC6.2)
; SEC6 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 6 (c:0x1800 - c:0x1BFF)
SEC6 EQU 0  
;  </h>

;  <h> SEC7: (SEC7.0 .. SEC7.2)
; SEC7 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 7 (c:0x1C00 - c:0x1FFF)
SEC7 EQU 0  
;  </h> 

;  <h> SEC8: (SEC8.0 .. SEC8.2)
; SEC8 Val  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 8 (c:0x2000 - c:0x23FF)
SEC8 EQU 0  
;  </h>

;  <h> SEC9: (SEC9.0 .. SEC9.2)
; SEC9 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 9 (c:0x2400 - c:0x27FF)
SEC9 EQU 0  
;  </h>

;  <h> SECA: (SECA.0 .. SECA.2)
; SECA Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector A (c:0x2800 - c:0x2BFF)
SECA EQU 0  
;  </h>

;  <h> SECB: (SECB.0 .. SECB.2)
; SECB Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector B (c:0x2C00 - c:0x2FFF)
SECB EQU 0 
;  </h>

;  <h> SECC: (SECC.0 .. SECC.2)
; SECC Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector C (c:0x3000 - c:0x33FF)
SECC EQU 0  
;  </h>

;  <h> SECD: (SECD.0 .. SECD.2)
; SECD Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector D (c:0x3400 - c:0x37FF)
SECD EQU 0  
;  </h>

;  <h> SECE: (SECE.0 .. SECE.2)
; SECE Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector E (c:0x3800 - c:0x3BFF)
SECE EQU 0  
;  </h>

;  <h> SECF: (SECF.0 .. SECF.2)
; SECF Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector F (c:0x3C00 - c:0x3FFF)
SECF EQU 0  
;  </h> 
; </h> 

;------------------------------------------------------------------------------


                NAME    ?C_STARTUP

_UCFG1 EQU FOSC OR (IRCDBL SHL 3) OR (WDSE SHL 4) OR (BOE SHL 5) OR ( ( RPE AND 1 ) SHL 6) OR (WDTE SHL 7)
_UCFG2 EQU ( ( RPE SHR 1 ) AND 1 ) OR (DBGENA SHL 5)


                CSEG    AT      0FFD8H
                DB      _UCFG1          ; place UCFG Bytes in hex file
                DB      _UCFG2
                DB      BOOTVEC
                DB      BOOTSTAT

                CSEG    AT      0FFE0H                
                DB      SEC0
                DB      SEC1
                DB      SEC2
                DB      SEC3
                DB      SEC4
                DB      SEC5
                DB      SEC6
                DB      SEC7

                DB      SEC8
                DB      SEC9
                DB      SECA
                DB      SECB
                DB      SECC
                DB      SECD
                DB      SECE
                DB      SECF

?C_C51STARTUP   SEGMENT   CODE
?STACK          SEGMENT   IDATA

                RSEG    ?STACK
                DS      1

                EXTRN CODE (?C_START)
                PUBLIC  ?C_STARTUP

                CSEG    AT      0
?C_STARTUP:     JMP     STARTUP1

                RSEG    ?C_C51STARTUP

STARTUP1:

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
                JMP     ?C_START

                END



