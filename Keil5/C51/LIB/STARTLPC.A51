;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Philips LPC700 series
;  Copyright (c) 1988-2005 Keil Elektronik GmbH and Keil Software, Inc.
;------------------------------------------------------------------------------
;  STARTLPC.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;
;  To translate this file use Ax51 with the following invocation:
;
;     Ax51 STARTLPC.A51
;
;  To link the modified STARTLPC.OBJ file to your application use the following
;  Lx51 invocation:
;
;     Lx51 your object file list, STARTLPC.OBJ controls
;
;------------------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
;               ; the absolute start-address of IDATA memory is always 0
;  <o> IDATALEN: IDATA memory size <0x0-0x100>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space physically overlaps the DATA and BIT areas.
IDATALEN        EQU     80H     ; the length of IDATA memory in bytes.
;
;
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.
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
IBPSTACKTOP     EQU     07FH+1  ; set top of stack to highest location+1.
;  </h>
; </h>
;
;------------------------------------------------------------------------------
;
;  <h> Setup LPC Configuration Register (UCFG1, UCFG2)
;
; <o> FOSC: Oscillator configuration (UCFG1.0..UCFG1.2)
;           <0=> High frequency crystal/resonator (4MHz .. 20MHz)
;           <1=> Medium frequency crystal/resonator (100kHz .. 4MHz)
;           <2=> Low frequency crystal (20kHz .. 100kHz)
;           <3=> Internal RC oscillator (6MHz +/- 25 percent)
;           <7=> External clock input on X1 (default)
; FOSC       Val  Description
; ----       ---  -----------
FOSC EQU 7  ; 0 = high frequency crystal or resonator (4MHz .. 20MHz)
;           ; 1 = medium frequency crystal or resonator (100kHz .. 4MHz)
;           ; 2 = low frequency crystal (20kHz .. 100kHz)
;           ; 3 = internal RC oscillator (6MHz +/- 25 percent)
;           ; 7 = (default on unprogrammed part) external clock input on X1
;
; <o> CLKR: Clock rate select (UCFG1.3)
;           <0=> 12 clocks/cycle
;           <1=>  6 clocks/cycle
;                <i> Standard 8051 is 12 clocks/cycle. Default for the 
;                <i> inprogrammed part is 6 clocks/cycle.
; CLKR       Val  Description
; ----       ---  -----------
CLKR EQU 1  ; 0 = CPU clock divided by 2 (results in 12 CPU clocks like on 8051)
;           ; 1 = (default on unprogrammed part) fast CPU clock (6 CPU clocks)
;
; <o> BOV: Brownout voltage select (UCFG1.4)
;           <0=> 3.8 volts
;           <1=> 2.5 volts
; BOV        Val  Description
; ----       ---  -----------
BOV  EQU 1  ; 0 = Brownout detect voltage = 3.8V 
;           ; 1 = Brownout detect voltage = 2.5V 
;
; <o> PRHI: Port reset state (UCFG1.5)
;           <0=> Low
;           <1=> High
;                <i> Ports reset to high state by default.
; PRHI       Val  Description
; ----       ---  -----------
PRHI EQU 1  ; 0 = Ports reset to a low state
;           ; 1 = (default on unprogrammed part) Ports reset to a high state
;
; <o> RDP: Reset PIN disable (UCFG1.6)
;           <0=> P1.5 is the reset pin (low active)
;           <1=> P1.5 may be used for input
; RPD        Val  Description
; ---        ---  -----------
RPD  EQU 1  ; 0 = P1.5 will act as reset pin (low active)
;           ; 1 = (default on unprogrammed part) P1.5 can be used as input PIN
;           
; <q> WDTE: Enable Watchdog timer (UCFG1.7)
;     <i>If disabled, the WDT can still be a timer to generate 
;     <i>interrupts. The WDT is enabled by default.
; WDTE       Val  Description
; ----       ---  -----------
WDTE EQU 1  ; 0 = watchdog disabled (watch can still be a timer to generate interrupts)
;           ; 1 = (default on unprogrammed part) watchdog enabled
;
;
; <o> SB: EPROM Security (UCFG2.6 .. UCFG2.7)
;           <0=> EPROM verification and programming disabled
;           <2=> Further EPROM programming is disabled
;           <3=> No security features enabled
; SB         Val  Description
; --         ---  -----------
SB   EQU 3  ; 0 = EPROM verification and programming disabled
;           ; 2 = further EPROM programming is disabled
;           ; 3 = no security features enabled; EPROM is programmable and verifiable.
;
; </h>
;------------------------------------------------------------------------------

                NAME    ?C_STARTUP

_UCFG1 EQU FOSC OR (CLKR SHL 3) OR (BOV SHL 4) OR (PRHI SHL 5) OR (RPD SHL 6) OR (WDTE SHL 7)
_UCFG2 EQU (SB SHL 6) OR 0x3F

                CSEG    AT      0FD00H
                DB      _UCFG1          ; place UCFG Bytes in ROM
                DB      _UCFG2


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


IF IBPSTACK <> 0
EXTRN DATA (?C_IBP)

                MOV     ?C_IBP,#LOW IBPSTACKTOP
ENDIF

                MOV     SP,#?STACK-1
                JMP     ?C_START

                END
