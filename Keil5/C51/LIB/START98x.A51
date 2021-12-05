;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Philips P89LPC97x/98x devices 
;  Copyright (c) 2009 Tools by Keil, An ARM Company
;  Version 1.0
;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  START98x.A51:  This code is executed after processor reset.
;  You may add this file to a uVision4 project.
;
;  To translate this file use Ax51 with the following invocation:
;
;     Ax51 START98x.A51 "your options"
;
;  To link the modified START97x.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, START98x.OBJ  controls
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
;      <i>        LPC97x/98x device.
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
;
;------------------------------------------------------------------------------
;   
;   <h> P89LPC97x/98x (LPC970, LPC971, LPC972, LPC980, LPC982, LPC983, LPC985)
;     <i> Configuration bytes for P89LPC97x/98x device family
;     <h> Flash User Configuration Byte 1 (UCFG1)
;         Oscillator Configuration (UCFG1.0 .. UCFG1.2)
;       <o0.0..2> FOSC: (UCFG1.0 .. UCFG1.2)
;         FOCS Val  Description
;         --------  -----------
;         <0=>   High frequency crystal or resonator (4MHz .. 20MHz)
;         <1=>   Medium frequency crystal or resonator (100kHz .. 4MHz)
;         <2=>   Low frequency crystal (20kHz .. 100kHz)
;         <3=>   Internal RC oscillator (7.373MHz +/- 2.5 percent) (default)
;         <4=>   Watchdog oscillator (400kHz/25kHz )
;         <7=>   External clock input on XTAL1
;                <i> Oscillator Configuration
;
;       <o0.3..5> BOE: (UCFG1.3 .. UCFG1.5)
;          BOE Val   Description
;          -------   -----------
;		  <0=>    Reserved
;		  <1=>    Reserved
;		  <2=>    BOD Reset Rise 2.40V Fall 2.25V (default)
;		  <3=>    BOD Reset Rise 2.70V Fall 2.55V
;		  <4=>    BOD Reset Rise 3.00V Fall 2.85V
;		  <5=>    BOD Reset Rise 3.30V Fall 3.15V
;		  <6=>    BOD Reset Rise 4.00V Fall 3.85V
;		  <7=>    BOD Reset Rise 4.20V Fall 4.05V
;         <i> Brownout detection and setup (BOD Reset Rise 2.40V Fall 2.25V is default)     
;
;       <o0.6> RPE: (UCFG1.6) Reset Pin (P1.5) Enable
;		  <0=> Disable Reset Pin P1.5
;         <1=> Enable Reset Pin	 P1.5 (default)
;         <i> Reset PIN (P1.5) enable (Reset Pin Enabled = Default )
;
;       <o0.7> CLKDBL: (UCFG1.7) Clock Doubler Enable   
;		  <0=> Clock Doubler Disable (default)
;         <1=> Clock Doubler Enabled
;	      <i> Clock Doubler Configuration ( Disabled = Default)
;
;     </h>
;
;     <h> Flash User Configuration Byte 2 (UCFG2)
;
;
;       <o1.1> WDSE: (UCFG2.1) Watchdog Safety Enable   
;		  <0=> Watchdog Safety Disabled (default)
;         <1=> Watchdog Safety Enabled
;         <i> Watchdog Timer Reset Enable (0 = default on unprogrammed part)
;
;       <o1.7> WDTE: (UCFG2.7) Watchdog Timer Reset Enable   
;		  <0=> Watchdog Timer Reset Disable (default)
;         <1=> Watchdog Timer Reset Enable
;         <i> Watchdog Timer Reset Enable (0 = default on unprogrammed part)
;
;     </h>
;
;             
;     <h> Boot Vector (BOOTVEC)
;       <o2> Boot Vector: (BOOTVEC0..4) <0x0-0x1F> 
;             <i> points to ISP entry point (default 0x1F on unprogrammed part)
;     </h>
;
;     <h> Boot status (BOOTSTAT)
;       <o3.0> BSB: (BOOTSTAT.0) Boot Status bit enable
;             <i> Boot Status bit enable (1 = default on unprogrammed part)
;       <o3.5> AWP: (BOOTSTAT.5) Active Write Protection bit enable
;             <i> Active Write Protection bit enable (0 = default on unprogrammed part)
;       <o3.6> CWP: (BOOTSTAT.6) Configuration Write Protect bit enable
;             <i> Configuration Write Protect bit enable (0 = default on unprogrammed part)
;       <o3.7> DCCP: (BOOTSTAT.7) Disable Clear Configuration Protection command enable
;             <i> Disable Clear Configuration Protection command enable (0 = default on unprogrammed part)
;     </h>
;   </h>
;
;
;
UCFG1    EQU 0x53
UCFG2    EQU 0x00
BOOTVEC  EQU 0x1F
BOOTSTAT EQU 0x00
;
;------------------------------------------------------------------------------
;
;
; <h> Flash Security Configuration
;  <h> SECO: (SEC0.0 .. SEC0.2)
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
;           <i> Flash Security Configuration sector 0 (c:0x0400 - c:0x07FF)
SEC1 EQU 0  
;  </h>

;  <h> SEC2: (SEC2.0 .. SEC2.2)
; SEC2 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x0800 - c:0x0BFF)
SEC2 EQU 0  
;  </h>

;  <h> SEC3: (SEC3.0 .. SEC3.2)
; SEC3 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x0C00 - c:0x0FFF)
SEC3 EQU 0 
;  </h>

;  <h> SEC4: (SEC4.0 .. SEC4.2)
; SEC4 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x1000 - c:0x13FF)
SEC4 EQU 0  
;  </h>

;  <h> SEC5: (SEC5.0 .. SEC5.2)
; SEC5 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x1400 - c:0x17FF)
SEC5 EQU 0  
;  </h>

;  <h> SEC6: (SEC6.0 .. SEC6.2)
; SEC6 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x1800 - c:0x1BFF)
SEC6 EQU 0  
;  </h>

;  <h> SEC7: (SEC7.0 .. SEC7.2)
; SEC7 Bit  Description
; --------  -----------
;    <q.0>  Disable reading with MOVC
;    <q.1>  Disable program/erase
;    <q.2>  Disable IAP/ISP global erase
;           <i> Flash Security Configuration sector 0 (c:0x1C00 - c:0x1FFF)
SEC7 EQU 0  
;  </h> 
; </h> 

;------------------------------------------------------------------------------


                NAME    ?C_STARTUP


                CSEG    AT      0FFF0H
                DB      UCFG1           ; place UCFG Bytes in hex file
                DB      UCFG2           ; reserved for future use
                DB      BOOTVEC
                DB      BOOTSTAT
                CSEG    AT      0FFF8H                
                DB      SEC0
                DB      SEC1
                DB      SEC2
                DB      SEC3
                DB      SEC4
                DB      SEC5
                DB      SEC6
                DB      SEC7

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



