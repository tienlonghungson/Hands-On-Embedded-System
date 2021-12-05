;--------------------------------------------------------------------------
;   N76E003.inc
;   Header file for Nuvoton N76E003 
;   2017/10/16
;--------------------------------------------------------------------------

P0              DATA    080H
SP              DATA    081H
DPL             DATA    082H
DPH             DATA    083H
RCTRIM0         DATA    084H
RCTRIM1         DATA    085H
RWK             DATA    086H
PCON            DATA    087H

TCON            DATA    088H
TMOD            DATA    089H
TL0             DATA    08AH
TL1             DATA    08BH
TH0             DATA    08CH
TH1             DATA    08DH
CKCON           DATA    08EH
WKCON           DATA    08FH

P1              DATA    090H
SFRS            DATA    091H ;TA Protection
CAPCON0         DATA    092H
CAPCON1         DATA    093H
CAPCON2         DATA    094H
CKDIV           DATA    095H
CKSWT           DATA    096H ;TA Protection
CKEN            DATA    097H ;TA Protection

SCON            DATA    098H
SBUF            DATA    099H
SBUF_1          DATA    09AH
EIE             DATA    09BH
EIE1            DATA    09CH
CHPCON          DATA    09FH ;TA Protection

P2              DATA    0A0H
AUXR1           DATA    0A2H
BODCON0         DATA    0A3H ;TA Protection
IAPTRG          DATA    0A4H ;TA Protection
IAPUEN          DATA    0A5H ;TA Protection
IAPAL           DATA    0A6H
IAPAH           DATA    0A7H

IE              DATA    0A8H
SADDR           DATA    0A9H
WDCON           DATA    0AAH ;TA Protection
BODCON1         DATA    0ABH ;TA Protection
P3M1            DATA    0ACH
P3S             DATA    0ACH ;Page1
P3M2            DATA    0ADH
P3SR            DATA    0ADH ;Page1
IAPFD           DATA    0AEH
IAPCN           DATA    0AFH

P3              DATA    0B0H
P0M1            DATA    0B1H
P0S             DATA    0B1H ;Page1
P0M2            DATA    0B2H
P0SR            DATA    0B2H ;Page1
P1M1            DATA    0B3H
P1S             DATA    0B3H ;Page1
P1M2            DATA    0B4H
P1SR            DATA    0B4H ;Page1
P2S             DATA    0B5H 
IPH             DATA    0B7H
PWMINTC         DATA    0B7H ;Page1

IP              DATA    0B8H
SADEN           DATA    0B9H
SADEN_1         DATA    0BAH
SADDR_1         DATA    0BBH
I2DAT           DATA    0BCH
I2STAT          DATA    0BDH
I2CLK           DATA    0BEH
I2TOC           DATA    0BFH

I2CON           DATA    0C0H
I2ADDR          DATA    0C1H
ADCRL           DATA    0C2H
ADCRH           DATA    0C3H
T3CON           DATA    0C4H
PWM4H           DATA    0C4H ;Page1
RL3             DATA    0C5H
PWM5H           DATA    0C5H ;Page1
RH3             DATA    0C6H
PIOCON1         DATA    0C6H ;Page1
TA              DATA    0C7H

T2CON           DATA    0C8H
T2MOD           DATA    0C9H
RCMP2L          DATA    0CAH
RCMP2H          DATA    0CBH
TL2             DATA    0CCH
PWM4L           DATA    0CCH ;Page1
TH2             DATA    0CDH
PWM5L           DATA    0CDH ;Page1
ADCMPL          DATA    0CEH
ADCMPH          DATA    0CFH

PSW             DATA    0D0H
PWMPH           DATA    0D1H
PWM0H           DATA    0D2H
PWM1H           DATA    0D3H
PWM2H           DATA    0D4H
PWM3H           DATA    0D5H
PNP             DATA    0D6H
FBD             DATA    0D7H

PWMCON0         DATA    0D8H
PWMPL           DATA    0D9H
PWM0L           DATA    0DAH
PWM1L           DATA    0DBH
PWM2L           DATA    0DCH
PWM3L           DATA    0DDH
PIOCON0         DATA    0DEH
PWMCON1         DATA    0DFH

ACC             DATA    0E0H
ADCCON1         DATA    0E1H
ADCCON2         DATA    0E2H
ADCDLY          DATA    0E3H
C0L             DATA    0E4H
C0H             DATA    0E5H
C1L             DATA    0E6H
C1H             DATA    0E7H

ADCCON0         DATA    0E8H
PICON           DATA    0E9H
PINEN           DATA    0EAH
PIPEN           DATA    0EBH
PIF             DATA    0ECH
C2L             DATA    0EDH
C2H             DATA    0EEH
EIP             DATA    0EFH

B               DATA    0F0H
CAPCON3         DATA    0F1H
CAPCON4         DATA    0F2H
SPCR            DATA    0F3H
SPCR2           DATA    0F3H ;Page1
SPSR            DATA    0F4H
SPDR            DATA    0F5H
AINDIDS         DATA    0F6H
EIPH            DATA    0F7H

SCON_1          DATA    0F8H
PDTEN           DATA    0F9H ;TA Protection
PDTCNT          DATA    0FAH ;TA Protection
PMEN            DATA    0FBH
PMD             DATA    0FCH
EIP1            DATA    0FEH
EIPH1           DATA    0FFH

;-----------------
; BIT Registers   
;-----------------
SM0_1          BIT    SCON_1.7
FE_1           BIT    SCON_1.7
SM1_1          BIT    SCON_1.6
SM2_1          BIT    SCON_1.5
REN_1          BIT    SCON_1.4
TB8_1          BIT    SCON_1.3
RB8_1          BIT    SCON_1.2
TI_1           BIT    SCON_1.1
RI_1           BIT    SCON_1.0

ADCF           BIT    ADCCON0.7
ADCS           BIT    ADCCON0.6
ETGSEL1        BIT    ADCCON0.5
ETGSEL0        BIT    ADCCON0.4
ADCHS3         BIT    ADCCON0.3
ADCHS2         BIT    ADCCON0.2
ADCHS1         BIT    ADCCON0.1
ADCHS0         BIT    ADCCON0.0

PWMRUN         BIT    PWMCON0.7
LOAD           BIT    PWMCON0.6
PWMF           BIT    PWMCON0.5
CLRPWM         BIT    PWMCON0.4


CY             BIT    PSW.7
AC             BIT    PSW.6
F0             BIT    PSW.5
RS1            BIT    PSW.4
RS0            BIT    PSW.3
OV             BIT    PSW.2
P              BIT    PSW.0

TF2            BIT    T2CON.7
TR2            BIT    T2CON.2
CM_RL2         BIT    T2CON.0

I2CEN          BIT    I2CON.6
STA            BIT    I2CON.5
STO            BIT    I2CON.4
SI             BIT    I2CON.3
AA             BIT    I2CON.2
I2CPX          BIT    I2CON.0

PADC           BIT    IP.6
PBOD           BIT    IP.5
PS             BIT    IP.4
PT1            BIT    IP.3
PX1            BIT    IP.2
PT0            BIT    IP.1
PX0            BIT    IP.0

P30            BIT    P3.0

EA             BIT    IE.7
EADC           BIT    IE.6
EBOD           BIT    IE.5
ES             BIT    IE.4
ET1            BIT    IE.3
EX1            BIT    IE.2
ET0            BIT    IE.1
EX0            BIT    IE.0

P20            BIT    P2^0

SM0            BIT    SCON.7
FE             BIT    SCON.7
SM1            BIT    SCON.6
SM2            BIT    SCON.5
REN            BIT    SCON.4
TB8            BIT    SCON.3
RB8            BIT    SCON.2
TI             BIT    SCON.1
RI             BIT    SCON.0

P17            BIT    P1.7
P16            BIT    P1.6
TXD_1          BIT    P1.6
P15            BIT    P1.5
P14            BIT    P1.4
SDA            BIT    P1.4
P13            BIT    P1.3
SCL            BIT    P1.3
P12            BIT    P1.2
P11            BIT    P1.1
P10            BIT    P1.0

TF1            BIT    TCON.7
TR1            BIT    TCON.6
TF0            BIT    TCON.5
TR0            BIT    TCON.4
IE1            BIT    TCON.3
IT1            BIT    TCON.2
IE0            BIT    TCON.1
IT0            BIT    TCON.0

P07            BIT    P0.7
RXD            BIT    P0.7
P06            BIT    P0.6
TXD            BIT    P0.6
P05            BIT    P0.5
P04            BIT    P0.4
STADC          BIT    P0.4
P03            BIT    P0.3
P02            BIT    P0.2
RXD_1          BIT    P0.2
P01            BIT    P0.1
MISO           BIT    P0.1
P00            BIT    P0.0
MOSI           BIT    P0.0

