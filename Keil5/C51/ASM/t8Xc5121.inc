
;*INC*************************************************************************
; NAME: 8XC5121.inc           
;----------------------------------------------------------------------------
; PURPOSE: for Keil
;*****************************************************************************

;----------------------------------------
; Include file for 8051 SFR Definitions  
;----------------------------------------

;  BYTE Register 
P0      DATA    080H
SP      DATA    081H
DPL     DATA    082H
DPH     DATA    083H
PCON    DATA    087H
TCON    DATA    088H
TMOD    DATA    089H
TL0     DATA    08AH
TL1     DATA    08BH
TH0     DATA    08CH
TH1     DATA    08DH
AUXR    DATA    08EH
CKCON0  DATA    08FH
P1      DATA    090H
SIOCON	DATA	091H
CKRL	DATA	097H
SCON    DATA    098H
SBUF    DATA    099H
BRL	DATA	09AH
BDRCON	DATA	09BH
P2      DATA    0A0H
AUXR1   DATA    0A2H
WDRST	DATA	0A6H
WDTPRG  DATA    0A7H
IEN0     DATA    0A8H
SADDR   DATA    0A9H
SCTBUF	DATA	0AAH
SCRBUF	DATA	0AAH
SCSR	DATA	0ABH
SCCON	DATA	0ACH
SCETU0	DATA	0ACH
SCISR	DATA	0ADH
SCETU1	DATA	0ADH
SCIIR	DATA	0AEH
SCIER	DATA	0AEH
CKCON1	DATA	0AFH
P3      DATA    0B0H
IEN1	DATA	0B1H
IPL1	DATA	0B2H
IPH1	DATA	0B3H
SCWT0	DATA	0B4H
SCGT0	DATA	0B4H
SCWT1	DATA	0B5H
SCGT1	DATA	0B5H
SCWT2	DATA	0B6H
SCICR	DATA	0B6H
IPH0	DATA	0B7H
IPL0    DATA    0B8H
SADEN   DATA    0B9H
ISEL	DATA	0BAH
DCCKPS	DATA	0BFH
PSW     DATA    0D0H
RCON	DATA	0D1H
ACC     DATA    0E0H
B       DATA    0F0H
LEDCON	DATA	0F1H


; BIT Registers
; PSW
CY      BIT     0D7H
AC      BIT     0D6H
F0      BIT     0D5H
RS1     BIT     0D4H
RS0     BIT     0D3H
OV      BIT     0D2H
P       BIT     0D0H
; TCON
TF1     BIT     8FH
TR1     BIT     8EH
TF0     BIT     8DH
TR0     BIT     8CH
IE1     BIT     8BH
IT1     BIT     8AH
IE0     BIT     89H
IT0     BIT     88H
; IE0
EA      BIT     0AFH
ES      BIT     0ACH
ET1     BIT     0ABH
EX1     BIT     0AAH
ET0     BIT     0A9H
EX0     BIT     0A8H
; IPL0
PS      BIT     0BCH
PT1     BIT     0BBH
PX1     BIT     0BAH
PT0     BIT     0B9H
PX0     BIT     0B8H
; P3
RD      BIT     0B7H
WR      BIT     0B6H
T1      BIT     0B5H
T0      BIT     0B4H
INT1    BIT     0B3H
INT0    BIT     0B2H
TXD     BIT     0B1H
RXD     BIT     0B0H
; SCON
FE      BIT     9FH
SM0     BIT     9FH
SM1     BIT     9EH
SM2     BIT     9DH
REN     BIT     9CH
TB8     BIT     9BH
RB8     BIT     9AH
TI      BIT     99H
RI      BIT     98H

                                                                               
