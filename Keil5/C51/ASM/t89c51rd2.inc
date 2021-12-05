
;/* (c) Copyright KEIL ELEKTRONIK GmbH.  1995, All rights reserved. */
;/* 89C51RD2 Processor Declarations */
;
; BYTE Registers
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
CKCON   DATA    08FH
P1      DATA    090H
SCON    DATA    098H
SBUF    DATA    099H
P2      DATA    0A0H
AUXR1   DATA    0A2H
WDTRST	DATA	0A6H
WDTPRG  DATA    0A7H
IE      DATA    0A8H
SADDR   DATA    0A9H
P3      DATA    0B0H
IPH	DATA	0B7H

IP      DATA    0B8H

SADEN   DATA    0B9H
P4      DATA    0C0H
P5	DATA	0C7H
T2CON   DATA    0C8H
T2MOD   DATA    0C9H
RCAP2L  DATA    0CAH
RCAP2H  DATA    0CBH
TL2     DATA    0CCH
TH2     DATA    0CDH
PSW     DATA    0D0H
FCON	DATA	0D1H
EECON	DATA	0D2H
EETIM	DATA	0D3H
CCON    DATA    0D8H
CMOD    DATA    0D9H
CCAPM0  DATA    0DAH
CCAPM1  DATA    0DBH
CCAPM2  DATA    0DCH
CCAPM3  DATA    0DDH
CCAPM4  DATA    0DEH
ACC     DATA    0E0H
CL      DATA    0E9H
CCAP0L  DATA    0EAH
CCAP1L  DATA    0EBH
CCAP2L  DATA    0ECH
CCAP3L  DATA    0EDH
CCAP4L  DATA    0EEH
B       DATA    0F0H
CH      DATA    0F9H
CCAP0H  DATA    0FAH
CCAP1H  DATA    0FBH
CCAP2H  DATA    0FCH
CCAP3H  DATA    0FDH
CCAP4H  DATA    0FEH


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
; IE
EA      BIT     0AFH
EC      BIT     0AEH
ET2     BIT     0ADH
ES      BIT     0ACH
ET1     BIT     0ABH
EX1     BIT     0AAH
ET0     BIT     0A9H
EX0     BIT     0A8H
; IPL0
PPC     BIT     0BEH
PT2     BIT     0BDH
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
; P1
CEX4    BIT     97H
CEX3    BIT     96H
CEX2    BIT     95H
CEX1    BIT     94H
CEX0    BIT     93H
ECI     BIT     92H
T2EX    BIT     91H
T2      BIT     90H
; T2CON
TF2     BIT     0CFH
EXF2    BIT     0CEH
RCLK    BIT     0CDH
TCLK    BIT     0CCH
EXEN2   BIT     0CBH
TR2     BIT     0CAH
CT2    BIT     0C9H
CPRL2  BIT     0C8H
; CCON
CF      BIT     0DFH
CR      BIT     0DEH
CCF4    BIT     0DCH
CCF3    BIT     0DBH
CCF2    BIT     0DAH
CCF1    BIT     0D9H
CCF0    BIT     0D8H
                                                                               
