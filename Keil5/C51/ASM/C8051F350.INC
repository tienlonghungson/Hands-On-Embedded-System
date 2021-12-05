;------------------------------------------------------------------------------
; Copyright (C) 2010 ARM Ltd and ARM Germany GmbH. All rights reserved.
; Declarations for Silabs C8051F35x based microcontroller.
;
; Devices:         C8051F350/1/2/3
;------------------------------------------------------------------------------

$SAVE
$NOLIST


;-----------------------------------------------------------------------------
; Byte Registers
;-----------------------------------------------------------------------------
P0           DATA 080H                 ; PORT 0 LATCH
SP           DATA 081H                 ; STACK POINTER
DPL          DATA 082H                 ; DATA POINTER LOW
DPH          DATA 083H                 ; DATA POINTER HIGH
PCON         DATA 087H                 ; POWER CONTROL
TCON         DATA 088H                 ; TIMER/COUNTER CONTROL
TMOD         DATA 089H                 ; TIMER/COUNTER MODE
TL0          DATA 08AH                 ; TIMER/COUNTER 0 LOW
TL1          DATA 08BH                 ; TIMER/COUNTER 1 LOW
TH0          DATA 08CH                 ; TIMER/COUNTER 0 HIGH
TH1          DATA 08DH                 ; TIMER/COUNTER 1 HIGH
CKCON        DATA 08EH                 ; CLOCK CONTROL
PSCTL        DATA 08FH                 ; PROGRAM STORE R/W CONTROL
P1           DATA 090H                 ; PORT 1 LATCH
TMR3CN       DATA 091H                 ; TIMER/COUNTER 3CONTROL
TMR3RLL      DATA 092H                 ; TIMER/COUNTER 3 RELOAD LOW
TMR3RLH      DATA 093H                 ; TIMER/COUNTER 3 RELOAD HIGH
TMR3L        DATA 094H                 ; TIMER/COUNTER 3 LOW
TMR3H        DATA 095H                 ; TIMER/COUNTER 3 HIGH
IDA0         DATA 096H                 ; CURRENT MODE DAC0 LOW
SCON0        DATA 098H                 ; UART0 CONTROL
SBUF0        DATA 099H                 ; UART0 DATA BUFFER
ADC0DECL     DATA 09AH                 ; ADC0 DECIMATION LOW
ADC0DECH     DATA 09BH                 ; ADC0 DECIMATION HIGH
CPT0CN       DATA 09CH                 ; COMPARATOR0 CONTROL
CPT0MD       DATA 09DH                 ; COMPARATOR0 MODE SELECTION
CPT0MX       DATA 09FH                 ; COMPARATOR0 MUX SELECTION
P2           DATA 0A0H                 ; PORT 2 LATCH
SPI0CFG      DATA 0A1H                 ; SPI CONFIGURATION
SPI0CKR      DATA 0A2H                 ; SPI CLOCK RATE CONTROL
SPI0DAT      DATA 0A3H                 ; SPI DATA
P0MDOUT      DATA 0A4H                 ; PORT 0 OUTPUT MODE CONFIGURATION
P1MDOUT      DATA 0A5H                 ; PORT 1 OUTPUT MODE CONFIGURATION
P2MDOUT      DATA 0A6H                 ; PORT 2 OUTPUT MODE CONFIGURATION
IE           DATA 0A8H                 ; INTERRUPT ENABLE
CLKSEL       DATA 0A9H                 ; CLOCK SELECT
EMI0CN       DATA 0AAH                 ; EXTERNAL MEMORY INTERFACE CONTROL
ADC0CGL      DATA 0ABH                 ; ADC0 GAIN CALIBRATION LOW
ADC0CGM      DATA 0ACH                 ; ADC0 GAIN CALIBRATION MIDDLE
ADC0CGH      DATA 0ADH                 ; ADC0 GAIN CALIBRATION HIGH
OSCXCN       DATA 0B1H                 ; EXTERNAL OSCILLATOR CONTROL
OSCICN       DATA 0B2H                 ; INTERNAL OSCILLATOR CONTROL
OSCICL       DATA 0B3H                 ; INTERNAL OSCILLATOR CALIBRATION
FLSCL        DATA 0B6H                 ; FLASH SCALE
FLKEY        DATA 0B7H                 ; FLASH LOCK AND KEY
IP           DATA 0B8H                 ; INTERRUPT PRIORITY
IDA0CN       DATA 0B9H                 ; CURRENT MODE DAC0 CONTROL
ADC0COL      DATA 0BAH                 ; ADC0 OFFSET CALIBRATION LOW
ADC0COM      DATA 0BBH                 ; ADC0 OFFSET CALIBRATION MIDDLE
ADC0COH      DATA 0BCH                 ; ADC0 OFFSET CALIBRATION HIGH
ADC0BUF      DATA 0BDH                 ; ADC0 BUFFER CONTROL
CLKMUL       DATA 0BEH                 ; CLOCK MULTIPLIER
ADC0DAC      DATA 0BFH                 ; ADC0 OFFSET DAC
SMB0CN       DATA 0C0H                 ; SMBUS CONTROL
SMB0CF       DATA 0C1H                 ; SMBUS CONFIGURATION
SMB0DAT      DATA 0C2H                 ; SMBUS DATA
ADC0L        DATA 0C3H                 ; ADC0 OUTPUT LOW
ADC0M        DATA 0C4H                 ; ADC0 OUTPUT MIDDLE
ADC0H        DATA 0C5H                 ; ADC0 OUTPUT HIGH
ADC0MUX      DATA 0C6H                 ; ADC0 MULTIPLEXER
TMR2CN       DATA 0C8H                 ; TIMER/COUNTER 2 CONTROL
TMR2RLL      DATA 0CAH                 ; TIMER/COUNTER 2 RELOAD LOW
TMR2RLH      DATA 0CBH                 ; TIMER/COUNTER 2 RELOAD HIGH
TMR2L        DATA 0CCH                 ; TIMER/COUNTER 2 LOW
TMR2H        DATA 0CDH                 ; TIMER/COUNTER 2 HIGH
PSW          DATA 0D0H                 ; PROGRAM STATUS WORD
REF0CN       DATA 0D1H                 ; VOLTAGE REFERENCE CONTROL
P0SKIP       DATA 0D4H                 ; PORT 0 SKIP
P1SKIP       DATA 0D5H                 ; PORT 1 SKIP
IDA1CN       DATA 0D7H                 ; CURRENT MODE DAC1 CONTROL
PCA0CN       DATA 0D8H                 ; PCA CONTROL
PCA0MD       DATA 0D9H                 ; PCA MODE
PCA0CPM0     DATA 0DAH                 ; PCA MODULE 0 MODE
PCA0CPM1     DATA 0DBH                 ; PCA MODULE 1 MODE
PCA0CPM2     DATA 0DCH                 ; PCA MODULE 2 MODE
IDA1         DATA 0DDH                 ; CURRENT MODE DAC1 LOW
ACC          DATA 0E0H                 ; ACCUMULATOR
XBR0         DATA 0E1H                 ; PORT I/O CROSSBAR CONTROL 0
XBR1         DATA 0E2H                 ; PORT I/O CROSSBAR CONTROL 1
PFE0CN       DATA 0E3H                 ; PREFETCH ENGINE CONTROL
IT01CF       DATA 0E4H                 ; INT0/INT1 CONFIGURATION
EIE1         DATA 0E6H                 ; EXTENDED INTERRUPT ENABLE 1
ADC0STA      DATA 0E8H                 ; ADC0 STATUS
PCA0CPL0     DATA 0E9H                 ; PCA CAPTURE 0 LOW
PCA0CPH0     DATA 0EAH                 ; PCA CAPTURE 0 HIGH
PCA0CPL1     DATA 0EBH                 ; PCA CAPTURE 1 LOW
PCA0CPH1     DATA 0ECH                 ; PCA CAPTURE 1 HIGH
PCA0CPL2     DATA 0EDH                 ; PCA CAPTURE 2 LOW
PCA0CPH2     DATA 0EEH                 ; PCA CAPTURE 2 HIGH
B            DATA 0F0H                 ; B REGISTER
RSTSRC       DATA 0EFH                 ; RESET SOURCE CONFIGURATION/STATUS
P0MDIN       DATA 0F1H                 ; PORT 0 INPUT MODE CONFIGURATION
P1MDIN       DATA 0F2H                 ; PORT 1 INPUT MODE CONFIGURATION
ADC0MD       DATA 0F3H                 ; ADC0 MODE
ADC0CN       DATA 0F4H                 ; ADC0 CONTROL
EIP1         DATA 0F6H                 ; EXTENDED INTERRUPT PRIORITY 1
ADC0CLK      DATA 0F7H                 ; ADC0 CLOCK
SPI0CN       DATA 0F8H                 ; SPI CONTROL
PCA0L        DATA 0F9H                 ; PCA COUNTER LOW
PCA0H        DATA 0FAH                 ; PCA COUNTER HIGH
ADC0CF       DATA 0FBH                 ; ADC0 CONFIGURATION
ADC0FL       DATA 0FCH                 ; ADC0 FAST FILTER OUTPUT LOW
ADC0FM       DATA 0FDH                 ; ADC0 FAST FILTER OUTPUT MIDDLE
ADC0FH       DATA 0FEH                 ; ADC0 FAST FILTER OUTPUT HIGH
VDM0CN       DATA 0FFH                 ; VDD MONITOR CONTROL


;-----------------------------------------------------------------------------
; Bit Definitions
;-----------------------------------------------------------------------------
; TCON 088H
TF1        BIT TCON.7                  ; Timer 1 overflow flag
TF1        BIT TCON.7                  ; TIMER 1 OVERFLOW FLAG
TR1        BIT TCON.6                  ; TIMER 1 ON/OFF CONTROL
TF0        BIT TCON.5                  ; TIMER 0 OVERFLOW FLAG
TR0        BIT TCON.4                  ; TIMER 0 ON/OFF CONTROL
IE1        BIT TCON.3                  ; EXT. INTERRUPT 1 EDGE FLAG
IT1        BIT TCON.2                  ; EXT. INTERRUPT 1 TYPE
IE0        BIT TCON.1                  ; EXT. INTERRUPT 0 EDGE FLAG
IT0        BIT TCON.0                  ; EXT. INTERRUPT 0 TYPE

; SCON0 098H
S0MODE     BIT SCON0.7                 ; UART 0 MODE
                                       ; Unused
MCE0       BIT SCON0.5                 ; UART 0 MCE
REN0       BIT SCON0.4                 ; UART 0 RX ENABLE
TB80       BIT SCON0.3                 ; UART 0 TX BIT 8
RB80       BIT SCON0.2                 ; UART 0 RX BIT 8
TI0        BIT SCON0.1                 ; UART 0 TX INTERRUPT FLAG
RI0        BIT SCON0.0                 ; UART 0 RX INTERRUPT FLAG

; IE 0A8H
EA         BIT IE.7                    ; GLOBAL INTERRUPT ENABLE
ESPI0      BIT IE.6                    ; SPI0 INTERRUPT ENABLE
ET2        BIT IE.5                    ; TIMER 2 INTERRUPT ENABLE
ES0        BIT IE.4                    ; UART0 INTERRUPT ENABLE
ET1        BIT IE.3                    ; TIMER 1 INTERRUPT ENABLE
EX1        BIT IE.2                    ; EXTERNAL INTERRUPT 1 ENABLE
ET0        BIT IE.1                    ; TIMER 0 INTERRUPT ENABLE
EX0        BIT IE.0                    ; EXTERNAL INTERRUPT 0 ENABLE

; IP 0B8H
                                       ; Unused
PSPI0      BIT IP.6                    ; SPI0 PRIORITY
PT2        BIT IP.5                    ; TIMER 2 PRIORITY
PS0        BIT IP.4                    ; UART0 PRIORITY
PT1        BIT IP.3                    ; TIMER 1 PRIORITY
PX1        BIT IP.2                    ; EXTERNAL INTERRUPT 1 PRIORITY
PT0        BIT IP.1                    ; TIMER 0 PRIORITY
PX0        BIT IP.0                    ; EXTERNAL INTERRUPT 0 PRIORITY

; SMB0CN 0C0H
MASTER     BIT SMB0CN.7                ; SMBUS 0 MASTER/SLAVE
TXMODE     BIT SMB0CN.6                ; SMBUS 0 TRANSMIT MODE
STA        BIT SMB0CN.5                ; SMBUS 0 START FLAG
STO        BIT SMB0CN.4                ; SMBUS 0 STOP FLAG
ACKRQ      BIT SMB0CN.3                ; SMBUS 0 ACKNOWLEDGE REQUEST
ARBLOST    BIT SMB0CN.2                ; SMBUS 0 ARBITRATION LOST
ACK        BIT SMB0CN.1                ; SMBUS 0 ACKNOWLEDGE FLAG
SI         BIT SMB0CN.0                ; SMBUS 0 INTERRUPT PENDING FLAG

; TMR2CN 0C8H
TF2H       BIT TMR2CN.7                ; TIMER 2 HIGH BYTE OVERFLOW FLAG
TF2L       BIT TMR2CN.6                ; TIMER 2 LOW BYTE OVERFLOW FLAG
TF2LEN     BIT TMR2CN.5                ; TIMER 2 LOW BYTE INTERRUPT ENABLE
                                       ; Unused
T2SPLIT    BIT TMR2CN.3                ; TIMER 2 SPLIT MODE ENABLE
TR2        BIT TMR2CN.2                ; TIMER 2 ON/OFF CONTROL
T2XCLK     BIT TMR2CN.0                ; TIMER 2 EXTERNAL CLOCK SELECT

; PSW 0D0H
CY         BIT PSW.7                   ; CARRY FLAG
AC         BIT PSW.6                   ; AUXILIARY CARRY FLAG
F0         BIT PSW.5                   ; USER FLAG 0
RS1        BIT PSW.4                   ; REGISTER BANK SELECT 1
RS0        BIT PSW.3                   ; REGISTER BANK SELECT 0
OV         BIT PSW.2                   ; OVERFLOW FLAG
F1         BIT PSW.1                   ; USER FLAG 1
P          BIT PSW.0                   ; ACCUMULATOR PARITY FLAG

; PCA0CN 0D8H
CF         BIT PCA0CN.7                ; PCA 0 COUNTER OVERFLOW FLAG
CR         BIT PCA0CN.6                ; PCA 0 COUNTER RUN CONTROL BIT
                                       ; Unused
                                       ; Unused
                                       ; Unused
CCF2       BIT PCA0CN.2                ; PCA 0 MODULE 2 INTERRUPT FLAG
CCF1       BIT PCA0CN.1                ; PCA 0 MODULE 1 INTERRUPT FLAG
CCF0       BIT PCA0CN.0                ; PCA 0 MODULE 0 INTERRUPT FLAG

; ADC0STA 0E8H
AD0BUSY    BIT ADC0STA.7               ; ADC 0 CONVERSION IN PROGRESS FLAG
AD0CBSY    BIT ADC0STA.6               ; ADC 0 CALIBRATION IN PROGRESS FLAG
AD0INT     BIT ADC0STA.5               ; ADC 0 CONVERSION COMPLETE FLAG
AD0S3C     BIT ADC0STA.4               ; ADC 0 SINC3 FILTER ERROR FLAG
AD0FFC     BIT ADC0STA.3               ; ADC 0 FAST FILTER ERROR FLAG
AD0CALC    BIT ADC0STA.2               ; ADC 0 CALIBRATION COMPLETE FLAG
AD0ERR     BIT ADC0STA.1               ; ADC 0 ERROR FLAG
AD0OVR     BIT ADC0STA.0               ; ADC 0 OVERRUN FLAG

; SPI0CN 0F8H
SPIF       BIT SPI0CN.7                ; SPI 0 INTERRUPT FLAG
WCOL       BIT SPI0CN.6                ; SPI 0 WRITE COLLISION FLAG
MODF       BIT SPI0CN.5                ; SPI 0 MODE FAULT FLAG
RXOVRN     BIT SPI0CN.4                ; SPI 0 RX OVERRUN FLAG
NSSMD1     BIT SPI0CN.3                ; SPI 0 SLAVE SELECT MODE 1
NSSMD0     BIT SPI0CN.2                ; SPI 0 SLAVE SELECT MODE 0
TXBMT      BIT SPI0CN.1                ; SPI 0 TX BUFFER EMPTY FLAG
SPIEN      BIT SPI0CN.0                ; SPI 0 SPI ENABLE


$RESTORE