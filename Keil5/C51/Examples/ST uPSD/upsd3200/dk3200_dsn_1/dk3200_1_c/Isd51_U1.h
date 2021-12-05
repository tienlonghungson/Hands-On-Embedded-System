//
//  ISD51  In-System Debugger for 8051 based microcontrollers
//  Copyright KEIL ELEKTRONIK GmbH and Keil Software, Inc. 2000 - 2002
//  Version 1.00 Beta 0
//------------------------------------------------------------------------------
//  ISD51.H:  This header file allows the configuration of the ISD51
//            In-System Monitor
//
//
//  Copy this file to your project folder and add the copy to your uVision2
//  project.  You can customize several parameters of the ISD51 In-System 
//  Monitor within this configuration file.
//
//------------------------------------------------------------------------------
//  ISD51 Memory Space
//  ==================
//
//  The following define specifies the size of the on-chip DATA/IDATA RAM.
//  Most 8051 devices have 256 bytes IDATA RAM.  Some devices offer just
//  128 Bytes.  ISD51 uses 1 Byte in this IDATA.  In addition each software
//  breakpoint requires another 2 Bytes IDATA space.  For example, if two
//  breakpoints are defined, ISD51 uses the IDATA locations 0xFB .. 0xFF.

#define RAMSIZE  0x100   // default is 0x100 => 256 bytes IDATA RAM

//------------------------------------------------------------------------------
//
//  ISD51 UART Interface
//  ====================
//
//  ISD51 uses a standard on-chip 8051 UART as communication interface.  The
//  following assembler macros allow you to change the UART interface used by 
//  ISD51.

#ifndef __C51__

/* 8051 SFR Register addresses for on-chip 8051 UART */
sfr  SCON = 0x98;
sfr  SBUF = 0x99;
sfr  IEN  = 0xA8;
//sfr  SCON2 = 0x9A; 

/*  SCON  Bits */
sbit TI   = SCON^1;
sbit RI   = SCON^0;

/* IEN Bits */
sbit ES   = IEN^4;

CLR_TI   MACRO             ; Clear Transmit Interrupt Flag 
         CLR     TI        ; No CPU register may be changed here
         ENDM

SET_TI   MACRO             ; Set   Transmit Interrupt Flag
         SETB    TI        ; No CPU register may be changed here
         ENDM

SBYTE    MACRO             ; Transmit Byte in ACC via serial UART
         JNB    TI,$       ; PSW may be modified without saving it
         CLR    TI
         MOV    SBUF,A
         ENDM

JB_RI    MACRO   label     ; Jump if Receiver Interrupt Flag set
         JB      RI,label  ; ACC and PSW may be modified without saving it
         ENDM

JNB_RI   MACRO   label     ; Jump if Receiver Interrupt Flag not set
         JNB     RI,label  ; ACC and PSW may be modified without saving it
         ENDM

RBYTE    MACRO             ; Read one Byte from serial UART to ACC
         MOV    A,SBUF     ; ACC and PSW may be modified without saving it
         CLR    RI
         ENDM

SET_ES   MACRO             ; Enable Serial Interrupt
         SETB   ES         ; No CPU register may be changed here
         ENDM

SINTRVEC EQU    0x23       ; Interrupt Vector Address of UART interrupt

#endif
//------------------------------------------------------------------------------
//
//  ISD51 Functions
//  ===============
//
//  The following C Macro define the IDS51 functions

#ifdef __C51__

#include <absacc.h>

extern void __isd_init (void);   // ISD51 core init function

#define ISDinit()                                                      \
  if (ES == 0)  {        /* Is ISD51 UART already initialized?     */  \
    __isd_init ();       /* Init ISD51 core & enable ISD interrupt */  \
  }

#define ISDwait()                                                      \
  while (1)  {                                                         \
    if (RI)  {           /* wait until Debugger sends 0xA5 */          \
      if (SBUF == 0xA5)  break;                                        \    
      RI = 0;                                                          \
    }                                                                  \
  }                                                                    \
  __isd_init ();         /* Init ISD51 core & enable ISD interrupt */


#define ISDcheck()                                                     \
  if (ES == 0)  {        /* Is ISD51 UART already initialized?     */  \
    if (RI)  {           /* wait until Debugger sends 0xA5 */          \
      if (SBUF != 0xA5) RI = 0;                                        \
      else  __isd_init (); /* Init core & ISD interrupt */             \
    }                                                                  \
  }                                                                    \

#define ISDdisable()     /* Disable ISD Interrupt                  */  \
    ES = 0;

#define ISDenable()      /* Disable ISD Interrupt                  */  \
    ES = 1;

#define ISDbreak()       /* hard-code program stop (breakpoint) */     \
    TI = 1;              /* Enter ISD Interrupt function */            \
    _nop_ ();

#endif


//-----------------------------------------------------------------------------
//---------------- !!! End of User Configuration Part    !!! ------------------
//-----------------------------------------------------------------------------

