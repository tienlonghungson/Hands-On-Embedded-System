;--------------------------------------------------------------------------
;uPSD3300.inc
;
;Version:
;July 2004 Version 2.0 - Initial Version. 
;
;Description:
;Header file for uPSD3300 Turbo microcontroller.
;
;Assembler: Ride
;
;Copyright (c) 2004 ST Microelectronics
;
;This example demo code is provided as is and has no warranty,
;implied or otherwise.  You are free to use/modify any of the provided
;code at your own risk in your applications with the expressed limitation
;of liability (see below) so long as your product using the code contains
;at least one uPSD product (device).
;
;LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
;AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
;INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
;CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
;OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
;--------------------------------------------------------------------------

;  Standard Registers  	
$include (reg51.inc) ; Include standard 8051 Equates

;  8052 Extensions  	
T2CON   data 0C8H	   ; // Timer 2 Control
RCAP2L  data 0CAH    ; // Timer 2 Reload low byte
RCAP2H  data 0CBH    ; // Timer 2 Reload high byte
TL2     data 0CCH    ; // Timer 2 low byte
TH2     data 0CDH    ; // Timer 2 high byte

;  UPSD Extensions 	
P4      data 0C0H    ; // Port 4
P1SFS0  data 08EH    ; // Port 1 I/O select Register 0
P1SFS1  data 08FH    ; // Port 1 I/O select Register 1
P3SFS   data 091H    ; // Port 3 I/O select
P4SFS0  data 092H    ; // Port 4 I/O select Register 0
P4SFS1  data 093H    ; // Port 4 I/O select Register 1

; ADC SFRs          
ADCPS   data 094H    ; // ADC Clock Control Register
ADAT0   data 095H    ; // ADC Data Register1 ADAT[9:8]
ADAT1   data 096H    ; // ADC Data Register0 ADAT[7:0]
ACON    data 097H    ; // ADC Control Register

; UART1HS        
SCON1   data 0D8H    ; // UART1 Serial Control
SBUF1   data 0D9H    ; // UART1 Serial Buffer

;  PCAHs          
PCACL0  data 0A2H    ; // PCA0 Counter Low
PCACH0  data 0A3H    ; // PCA0 Counter High
PCACON0 data 0A4H    ; // PCA0 Configuration Register
PCASTA  data 0A5H    ; // PCA0, PCA1 Status Register
PCACL1  data 0BAH    ; // PCA1 Counter Low
PCACH1  data 0BBH    ; // PCA1 Counter High
PCACON1 data 0BCH    ; // PCA1 Configuration Register 
PWMF0   data 0B4H    ; // PCA0 PWM Frequency
PWMF1   data 0C7H    ; // PCA1 PWM Frequency

;  TCMHs          
TCMMODE0 data 0A9H   ; // TCM0 Mode Register   
TCMMODE1 data 0AAH   ; // TCM1 Mode Register   
TCMMODE2 data 0ABH   ; // TCM2 Mode Register
TCMMODE3 data 0BDH   ; // TCM3 Mode Register
TCMMODE4 data 0BEH   ; // TCM4 Mode Register
TCMMODE5 data 0BFH   ; // TCM5 Mode Register
CAPCOML0 data 0ACH   ; // TCM0 Capture/Compare Register Low  
CAPCOMH0 data 0ADH   ; // TCM0 Capture/Compare Register High  
CAPCOML1 data 0AFH   ; // TCM1 Capture/Compare Register Low  
CAPCOMH1 data 0B1H   ; // TCM1 Capture/Compare Register High  
CAPCOML2 data 0B2H   ; // TCM2 Capture/Compare Register Low  
CAPCOMH2 data 0B3H   ; // TCM2 Capture/Compare Register High 
CAPCOML3 data 0C1H   ; // TCM3 Capture/Compare Register Low  
CAPCOMH3 data 0C2H   ; // TCM3 Capture/Compare Register High 
CAPCOML4 data 0C3H   ; // TCM4 Capture/Compare Register Low  
CAPCOMH4 data 0C4H   ; // TCM4 Capture/Compare Register High 
CAPCOML5 data 0C5H   ; // TCM5 Capture/Compare Register Low  
CAPCOMH5 data 0C6H   ; // TCM5 Capture/Compare Register High 

;  WDTHs          
WDRST    data 0A6H   ; // Watch Dog Reset
WDKEY    data 0AEH   ; // Watch Dog Key Enable

; INTERRUPT 2Hs  
IEA      data 0A7H   ; // Interrupt Enable (2nd)
IPA      data 0B7H   ; // Interrupt Priority (2nd)

; --- I2CHs ---
S1SETUP  data 0DBH   ; // I2C S1 Setup
S1CON    data 0DCH   ; // I2C Bus Control Register
S1STA    data 0DDH   ; // I2C Bus Status
S1DAT    data 0DEH   ; // I2C Data Hold Register
S1ADR    data 0DFH   ; // I2C Bus Address

;  --- SPIHs ----
SPICLKD   data 0D2H  ; // SPI Clock Divisor
SPISTAT   data 0D3H  ; // SPI Status Reg.
SPITDR    data 0D4H  ; // SPI Transmit Reg.
SPIRDR    data 0D5H  ; // SPI Receive Reg.
SPICON0   data 0D6H  ; // SPI Control0 Reg.
SPICON1   data 0D7H  ; // SPI Control1 Reg.

;  --- IrDAHs ----
IRDACON   data 0CEH  ; // IrDA Configuration Register

;  --- Clock ControlHs ----
CCON0     data 0F9H  ; // PLL, Debugber, CPU Clock Control
CCON2     data 0FBH  ; // PCA0 Clock Control
CCON3     data 0FCH  ; // PCA1 Clock Control

;  --- XDATA PointerHs ----
DPTC      data 085H  ; // XData Pointer Control
DPTM      data 086H  ; // XData Pointer Mode

;  --- Bus controlHs -----
BUSCON    data 09DH  ; // Bus control


; *****  BIT Registers  (the 8051 standard bits are included by reg51.inc)
;   IE  
EDB  BIT 0AEH 		; // Enable debug
ET2  BIT 0ADH     ; // Timer 2
             
;   T2CON  
TF2  BIT 0CFH     ;
EXF2 BIT 0CEH     ;
RCLK BIT 0CDH     ;
TCLK BIT 0CCH     ;
EXEN2 BIT 0CBH    ;
TR2  BIT 0CAH     ;
C_T2 BIT 0C9H     ;
CP_RL2 BIT 0C8H   ;

;    P4 GPIO   
P4_7 BIT 0C7H     ; // bit 7 of P4
P4_6 BIT 0C6H     ; // bit 6 of P4
P4_5 BIT 0C5H     ; // bit 5 of P4
P4_4 BIT 0C4H     ; // bit 4 of P4
P4_3 BIT 0C3H     ; // bit 3 of P4
P4_2 BIT 0C2H     ; // bit 2 of P4
P4_1 BIT 0C1H     ; // bit 1 of P4
P4_0 BIT 0C0H     ; // bit 0 of P4

;   SCON1   
SM01 BIT 0DFH     ;
SM11 BIT 0DEH     ;
SM21 BIT 0DDH     ;
REN1 BIT 0DCH     ;
TB81 BIT 0DBH     ;
RB81 BIT 0DAH     ;
TI1  BIT 0D9H     ;
RI1  BIT 0D8H     ;

;   IP  
PDB  BIT 0BEH     ; // Debug
PT2  BIT 0BDH     ; // Timer 2



