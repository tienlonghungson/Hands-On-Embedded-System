;--------------------------------------------------------------------------
;   N76E616.inc
;   Header file for Nuvoton N76E616 
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
IAPFD       DATA    0AEH
IAPCN       DATA    0AFH

P3          DATA    0B0H
P0M1        DATA    0B1H
P0S         DATA    0B1H
P0M2        DATA    0B2H
P1M1        DATA    0B3H
P1S         DATA    0B3H
P1M2        DATA    0B4H
P2M1        DATA    0B5H
P2S         DATA    0B5H
P2M2        DATA    0B6H
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
R3L         DATA    0C5H
R3H         DATA    0C6H
TA          DATA    0C7H

T2CON       DATA    0C8H
T2MOD0      DATA    0C9H
T2MOD1      DATA    0CAH
T2OE        DATA    0CBH
R2AL        DATA    0CCH
R2AH        DATA    0CDH
R2BL        DATA    0CEH
R2BH        DATA    0CFH

PSW         DATA    0D0H
R2CL        DATA    0D4H
R2CH        DATA    0D5H
R2DL        DATA    0D6H
R2DH        DATA    0D7H

P5          DATA    0D8H
P4          DATA    0D9H
P4M1        DATA    0DAH
P4S         DATA    0DAH
P4M2        DATA    0DBH
P5M1        DATA    0DCH
P5S         DATA    0DCH
P5M2        DATA    0DDH

ACC         DATA    0E0H
ADCCON1     DATA    0E1H
ADCCON2     DATA    0E2H
ADCMPL      DATA    0E3H
ADCMPH      DATA    0E4H
LCDSEG0     DATA    0E5H
LCDSEG1     DATA    0E6H
LCDSEG2     DATA    0E7H

ADCCON0     DATA    0E8H
PICON       DATA    0E9H
PINEN       DATA    0EAH
PIPEN       DATA    0EBH
PIF         DATA    0ECH
PITYP       DATA    0EDH
LCDSEG3     DATA    0EEH
EIP         DATA    0EFH

B           DATA    0F0H
ADCAQT      DATA    0F2H
P0DIDS      DATA    0F6H
EIPH        DATA    0F7H

SCON_1      DATA    0F8H
LCDCON      DATA    0F9H
LCDCLK      DATA    0FAH
LCDPTR      DATA    0FBH
LCDDAT      DATA    0FCH
EIP1        DATA    0FEH
EIPH1       DATA    0FFH

;-----------------
; BIT Registers 
;----------------- 

TF1        BIT    TCON.7
TR1        BIT    TCON.6
TF0        BIT    TCON.5
TR0        BIT    TCON.4
IE1        BIT    TCON.3
IT1        BIT    TCON.2
IE0        BIT    TCON.1
IT0        BIT    TCON.0

SM0        BIT    SCON.7
FE         BIT    SCON.7
SM1        BIT    SCON.6
SM2        BIT    SCON.5
REN        BIT    SCON.4
TB8        BIT    SCON.3
RB8        BIT    SCON.2
TI         BIT    SCON.1
RI         BIT    SCON.0

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

I2CEN      BIT    I2CON.6
STA        BIT    I2CON.5
STO        BIT    I2CON.4
SI         BIT    I2CON.3
AA         BIT    I2CON.2

TF2D       BIT    T2CON.7
TF2C       BIT    T2CON.6
TF2B       BIT    T2CON.5
TF2A       BIT    T2CON.4
TR2D       BIT    T2CON.3
TR2C       BIT    T2CON.2
TR2B       BIT    T2CON.1
TR2A       BIT    T2CON.0

CY         BIT    PSW.7
AC         BIT    PSW.6
F0         BIT    PSW.5
RS1        BIT    PSW.4
RS0        BIT    PSW.3
OV         BIT    PSW.2
P          BIT    PSW.0

ADCF       BIT    ADCCON0.7
ADCS       BIT    ADCCON0.6
ADCHS3     BIT    ADCCON0.3
ADCHS2     BIT    ADCCON0.2
ADCHS1     BIT    ADCCON0.1
ADCHS0     BIT    ADCCON0.0

SM0_1      BIT    SCON_1.7
FE_1       BIT    SCON_1.7
SM1_1      BIT    SCON_1.6
SM2_1      BIT    SCON_1.5
REN_1      BIT    SCON_1.4
TB8_1      BIT    SCON_1.3
RB8_1      BIT    SCON_1.2
TI_1       BIT    SCON_1.1
RI_1       BIT    SCON_1.0

P00        BIT    P0.0
AIN0       BIT    P0.0
T0         BIT    P0.0
P01        BIT    P0.1
AIN1       BIT    P0.1
INT0       BIT    P0.1
P02        BIT    P0.2
AIN2       BIT    P0.2
P03        BIT    P0.3
AIN3       BIT    P0.3
P04        BIT    P0.4
AIN4       BIT    P0.4
P05        BIT    P0.5
AIN5       BIT    P0.5
P06        BIT    P0.6
AIN6       BIT    P0.6
P07        BIT    P0.7
AIN7       BIT    P0.7
CLO        BIT    P0.7

P10        BIT    P1.0
P11        BIT    P1.1
P12        BIT    P1.2
P13        BIT    P1.3
INT1       BIT    P1.3
P14        BIT    P1.4
T1         BIT    P1.4
P15        BIT    P1.5
T2AO1      BIT    P1.5
P16        BIT    P1.6
T2AO2      BIT    P1.6
P17        BIT    P1.7
T2BO1      BIT    P1.7

P20        BIT    P2.0
T2BO2      BIT    P2.0
P21        BIT    P2.1
RXD        BIT    P2.1
P22        BIT    P2.2
TXD        BIT    P2.2
P23        BIT    P2.3
SDA        BIT    P2.3
P24        BIT    P2.4
SCL        BIT    P2.4
P25        BIT    P2.5
P26        BIT    P2.6
T2CO1      BIT    P2.6
P27        BIT    P2.7
T2CO2      BIT    P2.7

P30        BIT    P3.0
T2DO1      BIT    P3.0
P31        BIT    P3.1
T2DO2      BIT    P3.1
P32        BIT    P3.2
P33        BIT    P3.3
P34        BIT    P3.4
P35        BIT    P3.5
P36        BIT    P3.6
P37        BIT    P3.7

P50        BIT    P5.0
STADC      BIT    P5.0
P51        BIT    P5.1
P52        BIT    P5.2
P53        BIT    P5.3
P54        BIT    P5.4
P55        BIT    P5.5
P56        BIT    P5.6
RXD_1      BIT    P5.6
P57        BIT    P5.7
TXD_1      BIT    P5.7
