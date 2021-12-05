;--------------------------------------------------------------------------
;   N76E885.inc
;   Header file for Nuvoton N76E885 
;   2017/10/16
;--------------------------------------------------------------------------


P0          DATA    080H
SP          DATA    081H
DPL         DATA    082H
DPH         DATA    083H
RWK         DATA    086H
PCON        DATA    087H

TCON        DATA    088H
TMOD        DATA    089H
TL0         DATA    08AH
TL1         DATA    08BH
TH0         DATA    08CH
TH1         DATA    08DH
CKCON       DATA    08EH
WKCON       DATA    08FH

P1          DATA    090H
SFRS        DATA    091H
CAPCON0     DATA    092H
CAPCON1     DATA    093H
CAPCON2     DATA    094H
CKDIV       DATA    095H
CKSWT       DATA    096H
CKEN        DATA    097H

SCON        DATA    098H
SBUF        DATA    099H
SBUF_1      DATA    09AH
EIE         DATA    09BH
EIE1        DATA    09CH
CHPCON      DATA    09FH

P2          DATA    0A0H
AUXR1       DATA    0A2H
BODCON0     DATA    0A3H
IAPTRG      DATA    0A4H
IAPUEN      DATA    0A5H
IAPAL       DATA    0A6H
IAPAH       DATA    0A7H

IE          DATA    0A8H
SADDR       DATA    0A9H
WDCON       DATA    0AAH
BODCON1     DATA    0ABH
P3M1        DATA    0ACH
P3S         DATA    0ACH
P3M2        DATA    0ADH
P3SR        DATA    0ADH
IAPFD       DATA    0AEH
IAPCN       DATA    0AFH

P3          DATA    0B0H
P0M1        DATA    0B1H
P0S         DATA    0B1H
P0M2        DATA    0B2H
P0SR        DATA    0B2H
P1M1        DATA    0B3H
P1S         DATA    0B3H
P1M2        DATA    0B4H
P1SR        DATA    0B4H
P2M1        DATA    0B5H
P2S         DATA    0B5H
P2M2        DATA    0B6H
P2SR        DATA    0B6H
IPH         DATA    0B7H

IP          DATA    0B8H
SADEN       DATA    0B9H
SADEN_1     DATA    0BAH
SADDR_1     DATA    0BBH
I2DAT       DATA    0BCH
I2STAT      DATA    0BDH
I2CLK       DATA    0BEH
I2TOC       DATA    0BFH

I2CON       DATA    0C0H
I2ADDR      DATA    0C1H
ADCRL       DATA    0C2H
ADCRH       DATA    0C3H
T3CON       DATA    0C4H
RL3         DATA    0C5H
RH3         DATA    0C6H
TA          DATA    0C7H

T2CON       DATA    0C8H
T2MOD       DATA    0C9H
RCMP2L      DATA    0CAH
RCMP2H      DATA    0CBH
TL2         DATA    0CCH
TH2         DATA    0CDH
ADCMPL      DATA    0CEH
ADCMPH      DATA    0CFH

PSW         DATA    0D0H
PWMPH       DATA    0D1H
PWM01H      DATA    0D2H
PWM23H      DATA    0D3H
PWM67H      DATA    0D4H
PWM45H      DATA    0D5H
PNP         DATA    0D6H
FBD         DATA    0D7H

PWMCON0     DATA    0D8H
PWMPL       DATA    0D9H
PWM01L      DATA    0DAH
PWM23L      DATA    0DBH
PWM67L      DATA    0DCH
PWM45L      DATA    0DDH
PIO         DATA    0DEH
PWMCON1     DATA    0DFH

ACC         DATA    0E0H
ADCCON1     DATA    0E1H
ADCCON2     DATA    0E2H
ADCDLY      DATA    0E3H
C0L         DATA    0E4H
C0H         DATA    0E5H
C1L         DATA    0E6H
C1H         DATA    0E7H

ADCCON0     DATA    0E8H
PICON       DATA    0E9H
PINEN       DATA    0EAH
PIPEN       DATA    0EBH
PIF         DATA    0ECH
C2L         DATA    0EDH
C2H         DATA    0EEH
EIP         DATA    0EFH

B           DATA    0F0H
ADCAQT      DATA    0F2H
SPCR        DATA    0F3H
SPSR        DATA    0F4H
SPDR        DATA    0F5H
P0DIDS      DATA    0F6H
EIPH        DATA    0F7H

SCON_1      DATA    0F8H
PDTEN       DATA    0F9H
PDTCNT      DATA    0FAH
PMEN        DATA    0FBH
PMD         DATA    0FCH
EIP1        DATA    0FEH
EIPH1       DATA    0FFH


;-----------------
; BIT Registers   
;-----------------
CY         BIT    PSW.7
AC         BIT    PSW.6
F0         BIT    PSW.5
RS1        BIT    PSW.4
RS0        BIT    PSW.3
OV         BIT    PSW.2
P          BIT    PSW.0

ADCF       BIT    ADCCON0.7
ADCS       BIT    ADCCON0.6
PTRGSEL1   BIT    ADCCON0.5
PTRGSEL0   BIT    ADCCON0.4
ADCHS3     BIT    ADCCON0.3
ADCHS2     BIT    ADCCON0.2
ADCHS1     BIT    ADCCON0.1
ADCHS0     BIT    ADCCON0.0

PWMRUN     BIT    PWMCON0.7
LOAD       BIT    PWMCON0.6
PWMF       BIT    PWMCON0.5
CLRPWM     BIT    PWMCON0.4
INTTYP1    BIT    PWMCON0.3
INTTYP0    BIT    PWMCON0.2
INTSEL1    BIT    PWMCON0.1
INTSEL0    BIT    PWMCON0.0

TF1        BIT    TCON.7
TR1        BIT    TCON.6
TF0        BIT    TCON.5
TR0        BIT    TCON.4
IE1        BIT    TCON.3
IT1        BIT    TCON.2
IE0        BIT    TCON.1
IT0        BIT    TCON.0

TF2        BIT    T2CON^7
TR2        BIT    T2CON^2
CM_RL2     BIT    T2CON^0

EA         BIT    IE.7
EADC       BIT    IE.6
EBOD       BIT    IE.5
ES         BIT    IE.4
ET1        BIT    IE.3
EX1        BIT    IE.2
ET0        BIT    IE.1
EX0        BIT    IE.0

PADC       BIT    IP.6
PBOD       BIT    IP.5
PS         BIT    IP.4
PT1        BIT    IP.3
PX1        BIT    IP.2
PT0        BIT    IP.1
PX0        BIT    IP.0

SM0        BIT    SCON.7
FE         BIT    SCON.7
SM1        BIT    SCON.6
SM2        BIT    SCON.5
REN        BIT    SCON.4
TB8        BIT    SCON.3
RB8        BIT    SCON.2
TI         BIT    SCON.1
RI         BIT    SCON.0

SM0_1      BIT    SCON_1.7
FE_1       BIT    SCON_1.7
SM1_1      BIT    SCON_1.6
SM2_1      BIT    SCON_1.5
REN_1      BIT    SCON_1.4
TB8_1      BIT    SCON_1.3
RB8_1      BIT    SCON_1.2
TI_1       BIT    SCON_1.1
RI_1       BIT    SCON_1.0

I2CEN      BIT    I2CON.6
STA        BIT    I2CON.5
STO        BIT    I2CON.4
SI         BIT    I2CON.3
AA         BIT    I2CON.2

P00        BIT    P0.0
INT0       BIT    P0.0
AIN0       BIT    P0.0
P01        BIT    P0.1
INT1       BIT    P0.1
AIN1       BIT    P0.1
P02        BIT    P0.2
PWM2       BIT    P0.2
AIN2       BIT    P0.2
P03        BIT    P0.3
PWM3       BIT    P0.3
TXD        BIT    P0.3
AIN3       BIT    P0.3
P04        BIT    P0.4
SS         BIT    P0.4
AIN4       BIT    P0.4
P05        BIT    P0.5
PWM4       BIT    P0.5
SPCLK      BIT    P0.5
AIN5       BIT    P0.5
P06        BIT    P0.6
SCL        BIT    P0.6
AIN6       BIT    P0.6
P07        BIT    P0.7
AIN7       BIT    P0.7
PWM6       BIT    P0.7

P10        BIT    P1.0
PWM0       BIT    P1.0
P11        BIT    P1.1
PWM1       BIT    P1.1
P12        BIT    P1.2

P20        BIT    P2.0
RXD        BIT    P2.0
T0         BIT    P2.0
IC0        BIT    P2.0
AIN9       BIT    P2.0
P21        BIT    P2.1
MOSI       BIT    P2.1
T1         BIT    P2.1
IC1        BIT    P2.1
P22        BIT    P2.2
MISO       BIT    P2.2
IC2        BIT    P2.2
P23        BIT    P2.3
SDA        BIT    P2.3
BK         BIT    P2.3
P24        BIT    P2.4
RXD_1      BIT    P2.4
P25        BIT    P2.5
TXD_1      BIT    P2.5
P26        BIT    P2.6
CLO        BIT    P2.6
AIN8       BIT    P2.6
PWM7       BIT    P2.6

P30        BIT    P3.0
P31        BIT    P3.1
P32        BIT    P3.2
P33        BIT    P3.3
P34        BIT    P3.4
P35        BIT    P3.5
P36        BIT    P3.6
P37        BIT    P3.7

