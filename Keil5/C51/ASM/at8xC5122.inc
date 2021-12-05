;*INC*************************************************************************
; NAME: AT8XC5122.inc           
;----------------------------------------------------------------------------
; PURPOSE: SFR definition - include file for KEIL
;*****************************************************************************

;----------------------------- C51 CORE -----------------------------------

SP      DATA    081H			;Stack Pointer
DPL     DATA    082H			;Data Pointer Low byte
DPH     DATA    083H			;Data Pointer High Byte

PSW     DATA    0D0H            ;Program Status Word
CY      BIT     0D7H		    ;Carry Flag
AC      BIT     0D6H		    ;Auxilary Carry Flag
F0      BIT     0D5H		    ;Flag 0 available to the user for general purpose
RS1     BIT     0D4H		    ;Register Bank Selector bit 1
RS0     BIT     0D3H		    ;Register Bank Selector bit 0
OV      BIT     0D2H		    ;Overflow Bit
F1      BIT     0D1H		    ;General Purpose Flag
P       BIT     0D0H		    ;Parity Bit

ACC     DATA    0E0H            ;Accumulator
B       DATA    0F0H            ;B register

;----------------------- SYSTEM CONFIGURATION -----------------------------

CKSEL   DATA    085H            ;Clock Selection
PCON    DATA    087H            ;Power Control
AUXR    DATA    08EH            ;Auxilary Register 0
CKCON0  DATA    08FH            ;Clock Control Register 0
CKRL    DATA    097H            ;Clock Reload
AUXR1   DATA    0A2H            ;Auxilary Register 1
PLLCON  DATA    0A3H            ;Phase Lock Loop Control
PLLDIV  DATA    0A4H            ;Phase Lock Loop Divider
CKCON1  DATA    0AFH            ;Clock Control Register 0
RCON    DATA    0D1H            ;Memory Selection

;---------------------------- INTERRUPTS ----------------------------------

ISEL    DATA    0A1H            ;Interrupt Enable Control

IEN0    DATA    0A8H            ;Interrupt Enable Control 0
EA      BIT     0AFH            ;Global Interrupts Enable/Disable Bit		 
ES      BIT     0ACH            ;Serial Port Interrupt Enable/Disable Bit		 
ET1     BIT     0ABH            ;Timer 1 Overflow Interrupt Enable/Disable Bit		 
EX1     BIT     0AAH            ;External Interrupt 1 Enable/Disable Bit		 
ET0     BIT     0A9H            ;Timer 0 Overflow Interrupt Enable/Disable Bit		 
EX0     BIT     0A8H            ;External Interrupt 0 Enable/Disable Bit		 

IPH0    DATA    0B7H            ;Interrupt Priority Control High 0

IPL0    DATA    0B8H            ;Interrupt Priority Control Low  0
PSL     BIT     0BCH            ;Serial Port Interrupt Priority LSB		 
PT1L    BIT     0BBH            ;Timer 1 Overflow Interrupt Priority LSB		 
PX1L    BIT     0BAH            ;External Interrupt 1 Priority LSB		 
PT0L    BIT     0B9H            ;Timer 0 Overflow Interrupt Priority LSB		 
PX0L    BIT     0B8H            ;External Interrupt 0 Priority LSB		 

IEN1    DATA    0B1H            ;Interrupt Enable Control 1
IPL1    DATA    0B2H            ;Interrupt Priority Control Low  1
IPH1    DATA    0B3H            ;Interrupt Priority Control High 1

;------------------------------- PORTS -----------------------------------

P0      DATA    080H            ;Port 0
P0_7    BIT     087H            ;
P0_6    BIT     086H            ;
P0_5    BIT     085H            ;
P0_4    BIT     084H            ;
P0_3    BIT     083H            ;
P0_2    BIT     082H            ;
P0_1    BIT     081H            ;
P0_0    BIT     080H            ;

PMOD1   DATA    084H            ;Port Mode Register 1

P1      DATA    090H            ;Port 1
P1_7    BIT     097H            ;
P1_6    BIT     096H            ;
P1_5    BIT     095H            ;
P1_4    BIT     094H            ;
P1_3    BIT     093H            ;
P1_2    BIT     092H            ;
P1_1    BIT     091H            ;
P1_0    BIT     090H            ;
CCLK1   BIT     097H            ;Alternate Card Clock         ;	 
CPRES   BIT     092H            ;Smart Card Presence

PMOD0   DATA    091H            ;Port Mode Register 0

P2      DATA    0A0H            ;Port 2
P2_7    BIT     0A7H            ;
P2_6    BIT     0A6H            ;
P2_5    BIT     0A5H            ;
P2_4    BIT     0A4H            ;
P2_3    BIT     0A3H            ;
P2_2    BIT     0A2H            ;
P2_1    BIT     0A1H            ;
P2_0    BIT     0A0H            ;

P3      DATA    0B0H            ;Port 3
P3_7    BIT     0B7H            ;
P3_6    BIT     0B6H            ;
P3_5    BIT     0B5H            ;
P3_4    BIT     0B4H            ;
P3_3    BIT     0B3H            ;
P3_2    BIT     0B2H            ;
P3_1    BIT     0B1H            ;
P3_0    BIT     0B0H            ;
T1      BIT     0B5H            ;External Event 1		 
T0      BIT     0B4H            ;External Event 0			 
INT1    BIT     0B3H            ;External Interrupt 1
INT0    BIT     0B2H            ;External Interrupt 0
TXD     BIT     0B1H            ;UART Transmit Port		 
RXD     BIT     0B0H            ;UART Receive Port		 
CRST1   BIT     0B5H            ;Alternate Card Reset
CIO1    BIT     0B4H            ;Alternate Card I/O
LED3    BIT     0B7H            ;Led Number 3
LED2    BIT     0B6H            ;Led Number 2
LED1    BIT     0B4H            ;Led Number 1
LED0    BIT     0B2H            ;Led Number 0

P4      DATA    0C0H            ;Port 4
P4_7    BIT     0C7H            ;
P4_6    BIT     0C6H            ;
P4_5    BIT     0C5H            ;
P4_4    BIT     0C4H            ;
P4_3    BIT     0C3H            ;
P4_2    BIT     0C2H            ;
P4_1    BIT     0C1H            ;
P4_0    BIT     0C0H            ;
LED5    BIT     0C4H            ;Led Number 5
LED4    BIT     0C3H            ;Led Number 4

P5      DATA    0E8H            ;Port 5
P5_7    BIT     0EFH            ;
P5_6    BIT     0EEH            ;
P5_5    BIT     0EDH            ;
P5_4    BIT     0ECH            ;
P5_3    BIT     0EBH            ;
P5_2    BIT     0EAH            ;
P5_1    BIT     0E9H            ;
P5_0    BIT     0E8H            ;
KB7     BIT     0EFH            ;Keyboard Input Line 7
KB6     BIT     0EEH            ;Keyboard Input Line 6
KB5     BIT     0EDH            ;Keyboard Input Line 5
KB4     BIT     0ECH            ;Keyboard Input Line 4
KB3     BIT     0EBH            ;Keyboard Input Line 3
KB2     BIT     0EAH            ;Keyboard Input Line 2
KB1     BIT     0E9H            ;Keyboard Input Line 1
KB0     BIT     0E8H            ;Keyboard Input Line 0

;------------------------------- TIMERS -----------------------------------

TCON    DATA    088H            ;Timer-Counter 0 and 1 Control
TF1     BIT     08FH            ;Timer 1 Overflow Flag		 
TR1     BIT     08EH            ;Timer 1 Run Control Bit		 
TF0     BIT     08DH            ;Timer 0 Overflow Flag		 
TR0     BIT     08CH            ;Timer 0 Run Control Bit		 
IE1     BIT     08BH            ;Interrupt 1 Edge Flag		 
IT1     BIT     08AH            ;Interrupt 1 Type Control Bit		 
IE0     BIT     089H            ;Interrupt 0 Edge Flag		 
IT0     BIT     088H            ;Interrupt 0 Type Control Bit		    

TMOD    DATA    089H            ;Timer-Counter 0 and 1 Configuration
TL0     DATA    08AH            ;Timer-Counter 0 Low Byte
TL1     DATA    08BH            ;Timer-Counter 1 Low Byte
TH0     DATA    08CH            ;Timer-Counter 0 High Byte
TH1     DATA    08DH            ;Timer-Counter 1 High Byte

;------------------------------ WATCHDOG --------------------------------

WDTRST  DATA    0A6H            ;WatchDog Timer Reset
WDTPRG  DATA    0A7H            ;WatchDog Timer Program

;--------------------------- USB CONTROLLER -----------------------------

UFNUML  DATA    0BAH            ;USB Frame Number Low
UFNUMH  DATA    0BBH            ;USB Frame Number Low
USBCON  DATA    0BCH            ;USB Global Control
USBINT  DATA    0BDH            ;USB Global Interrupt
USBIEN  DATA    0BEH            ;USB Global Interrupt Enable
UEPIEN  DATA    0C2H            ;USB Endpoint Interrupt Enable
USBADDR DATA    0C6H            ;USB Address
UEPNUM  DATA    0C7H            ;USB Endpoint Number
UEPSTAX DATA    0CEH            ;USB Endpoint X Status
UEPDATX DATA    0CFH            ;USB Endpoint X Fifo Data
UEPCONX DATA    0D4H            ;USB Endpoint X Control
UEPRST  DATA    0D5H            ;USB Endpoint Reset
UBYCTX  DATA    0E2H            ;USB Byte Counter Low (EPX)
UEPINT  DATA    0F8H            ;USB Endpoint Interrupt
EP6INT  BIT     0FEH            ;		
EP5INT  BIT     0FDH            ;		
EP4INT  BIT     0FCH            ;		
EP3INT  BIT     0FBH            ;		
EP2INT  BIT     0FAH            ;		
EP1INT  BIT     0F9H            ;		
EP0INT  BIT     0F8H            ;		

;------------------------------- SCIB ----------------------------------

SCTBUF  DATA    0AAH            ;Smart Card Transmit Buffer (Write Only)			
SCRBUF  DATA    0AAH            ;Smart Card Receive Buffer (read Only)
SCSR    DATA    0ABH            ;Smart Card Selection Register
SCCON   DATA    0ACH            ;Smart Card Interface Contacts
SCETU0  DATA    0ACH            ;Smart Card ETU Register 0
SCISR   DATA    0ADH            ;Smart Card UART Interface Status
SCETU1  DATA    0ADH            ;Smart Card ETU Register 1
SCIIR   DATA    0AEH            ;Smart Card UART Interrupt Identification
SCIER   DATA    0AEH            ;Smart Card UART Interrupt Enable
SCWT0   DATA    0B4H            ;Smart Card Character-Block Waiting Time Register 0
SCGT0   DATA    0B4H            ;Smart Card Transmit Guard Time Register 0
SCWT1   DATA    0B5H            ;Smart Card Character-Block Waiting Time Register 1
SCGT1   DATA    0B5H            ;Smart Card Transmit Guard Time Register 1
SCWT2   DATA    0B6H            ;Smart Card Character-Block Waiting Time Register 2
SCICR   DATA    0B6H            ;Smart Card Interface Control
DCCKPS  DATA    0BFH            ;DC/DC Converter Reload Register
SCWT3   DATA    0C1H            ;Smart Card Character-Block Waiting Time Register 3
SCICLK  DATA    0C1H            ;Smart Card Clock Prescaler

;------------------------------- UART ---------------------------------

SCON    DATA    098H            ;UART Interface Control
SM0     BIT     09FH            ;Serial Port Mode Bit 0 		
FE      BIT     09FH            ;Framing error Bit		 
SM1     BIT     09EH            ;Serial Port Mode Bit 1		 
SM2     BIT     09DH            ;Serial Port Mode Bit 2		 
REN     BIT     09CH            ;Reception Enable Bit		 
TB8     BIT     09BH            ;Transmitter bit 8		 
RB8     BIT     09AH            ;Receiver Bit 8		 
TI      BIT     099H            ;Transmit Interrupt Flag		 
RI      BIT     098H            ;Receive Interrupt Flag		 

SBUF    DATA    099H            ;UART Data Buffer
SADDR   DATA    0A9H            ;Slave Address
SADEN   DATA    0B9H            ;Slave Address Mask

;------------------------ BAUD RATE GENERATOR -------------------------

BRL     DATA    09AH            ;Baud Rate Relaod
BDRCON  DATA    09BH            ;Baud Rate Control

;----------------------------- KEYBOARD -------------------------------

KBF     DATA    09EH            ;Keyboard Flag Register
KBE     DATA    09DH            ;Keyboard Input Enable Register
KBLS    DATA    09CH            ;Keyboard Level Selector

;-------------------------- SPI CONTROLLER ----------------------------

SPCON   DATA    0C3H            ;Serial Peripheral Control
SPSTA   DATA    0C4H            ;Serial Peripheral Status-Control
SPDAT   DATA    0C5H            ;Serial Peripheral Data

;-------------------------------- LED ---------------------------------

LEDCON0 DATA    0F1H            ;LED control 0
LEDCON1 DATA    0E1H            ;LED control 1

;------------------------------ PCMCIA --------------------------------

PCMADDR DATA    0E4H            ;PCMCIA Interface Address
PCMDATA DATA    0E5H            ;PCMCIA Interface Data
PCMTYPE DATA    0E6H            ;PCMCIA Interface Configuration
PCMINT  DATA    0E7H            ;PCMCIA Interface Interrupt Enable

;------------------------------ DECODER -------------------------------

DECEN   DATA    0E4H            ;DECODER Interface Enable
DECPAG  DATA    0E5H            ;DECODER Interface Page
DECONF  DATA    0E6H            ;DECODER Interface Configuration

;------------------------- EMULATION INTERFACE ------------------------

EMUCON  DATA    0DFH            ;EMULATION Interface Control
BKPCL   DATA    0EFH            ;Breakpoint PC Address Low			 
BKPCH   DATA    0F7H            ;Breakpoint PC Address High			 
ICON    DATA    0FFH            ;ICE Control Register			   
