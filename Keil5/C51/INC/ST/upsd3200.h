/*--------------------------------------------------------------------------
upsd3200.h

Version:
February 23, 2005 Version 2.1 - Corrected PSD VM register bit names.  
September 9, 2004 Version 2.0 - Updated to support multiple compilers 
                                (Raisonance and Keil) with the same file.

Dependencies: None.

Description:
Header file for uPSD3200 microcontroller.

Compilers:
Raisonance, Keil

Copyright (c) 2005 ST Microelectronics

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD product (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
--------------------------------------------------------------------------*/

// Check for previous defines
#ifndef _uPSD3200h_
#define _uPSD3200h_


//Specify the SFR and bit definition macros for the specific compiler used.

#ifdef __RC51__                        //Compiler: Raisonance

#define DEFINE_SFR(REG,ADR) \
	    at ADR sfr REG;

#define DEFINE_SFR_BIT(SFR_BIT,ADR) \
        at ADR sbit SFR_BIT;

#else
    #ifdef __C51__                     //Compiler: Keil
       #define DEFINE_SFR(REG,ADR) \
	           sfr  REG = ADR;

       #define DEFINE_SFR_BIT(SFR_BIT,ADR) \
               sbit SFR_BIT = ADR;

    #else                              //Compiler: Other

// User would need to add definitions for other compilers here...

    #endif

#endif


typedef struct	// general structure of 8 bit register allowing bit access 
	{
	unsigned char bit0 : 1;
	unsigned char bit1 : 1;
	unsigned char bit2 : 1;
	unsigned char bit3 : 1;
	unsigned char bit4 : 1;
 	unsigned char bit5 : 1;
	unsigned char bit6 : 1;
	unsigned char bit7 : 1;
	} Register;    

typedef union	// allow bit or byte access to registers 
	{
	char byte;
	Register bits;
	} Mix_Reg;

typedef union	// allow bit or byte access to registers 
	{
	char byte;
	Register bits;
	} SFR_Reg;


/* ------------------------------ */
/*      Standard PSD Registers    */
/* ------------------------------ */

typedef struct REG_PSD_struct {
        unsigned char DATAIN_A;         // PSD_REG_BASE +0x00
        unsigned char DATAIN_B;         //              +0x01
        unsigned char CONTROL_A;        //              +0x02
        unsigned char CONTROL_B;        //              +0x03
        unsigned char DATAOUT_A;        //              +0x04
        unsigned char DATAOUT_B;        //              +0x05
        unsigned char DIRECTION_A;      //              +0x06
        unsigned char DIRECTION_B;      //              +0x07
        unsigned char DRIVE_A;          //              +0x08
        unsigned char DRIVE_B;          //              +0x09
        unsigned char IMC_A;            //              +0x0A
        unsigned char IMC_B;            //              +0x0B
        unsigned char OUTENABLE_A;      //              +0x0C
        unsigned char OUTENABLE_B;      //              +0x0D
        unsigned char res2[2];          //      spacer
        unsigned char DATAIN_C;         //              +0x10
        unsigned char DATAIN_D;         //              +0x11
        unsigned char DATAOUT_C;        //              +0x12 
        unsigned char DATAOUT_D;        //              +0x13
        unsigned char DIRECTION_C;      //              +0x14
        unsigned char DIRECTION_D;      //              +0x15
        unsigned char DRIVE_C;          //              +0x16
        unsigned char DRIVE_D;          //              +0x17
        unsigned char IMC_C;            //              +0x18
        unsigned char res1a;            //      spacer
        unsigned char OUTENABLE_C;      //              +0x1A
        unsigned char OUTENABLE_D;      //              +0x1B
        unsigned char res4[4];          //      spacer
        unsigned char OMC_AB;           //              +0x20
        unsigned char OMC_BC;           //              +0x21
        unsigned char OMCMASK_AB;       //              +0x22
        unsigned char OMCMASK_BC;       //              +0x23
        unsigned char res8c[0x8C];      //      spacer
        unsigned char PMMR0;            //              +0xB0
        unsigned char res1[3];          //      spacer
        unsigned char PMMR2;            //              +0xB4
        unsigned char res0B[0x0B];      //      spacer
        unsigned char MAINPROTECT;      //              +0xC0
        unsigned char res1b;            //      spacer
        unsigned char ALTPROTECT;       //              +0xC2
        unsigned char res1d[0x1D];      //      spacer
        unsigned char PAGE;             //              +0xE0
        unsigned char res1c;            //      spacer
        unsigned char VM;               //              +0xE2
        unsigned char res29[0x1D];      //    	spacer
} PSD_REGS;




//****************** PSD control register bit definitions *********

//PSD PORTA
#define PA0     bit0
#define PA1     bit1	
#define PA2     bit2	
#define PA3     bit3	
#define PA4     bit4	
#define PA5     bit5	
#define PA6     bit6	
#define PA7     bit7	

//PSD PORTB
#define PB0     bit0
#define PB1     bit1	
#define PB2     bit2	
#define PB3     bit3	
#define PB4     bit4	
#define PB5     bit5	
#define PB6     bit6	
#define PB7     bit7	

//PSD PORTC
#define PC0     bit0
#define PC1     bit1	
#define PC2     bit2	
#define PC3     bit3	
#define PC4     bit4	
#define PC5     bit5	
#define PC6     bit6	
#define PC7     bit7	

//PSD PORTD
#define PD1     bit1	
#define PD2     bit2	

//PSD PMMR0
#define APD_ENABLE      bit1
#define PLD_TURBO       bit3
#define PLD_ARRAY_CLK   bit4
#define PLD_MCELL_CLK   bit5

//PSD PMMR2
#define PLD_CNTL0       bit2
#define PLD_CNTL1       bit3
#define PLD_CNTL2       bit4
#define PLD_ALE         bit5
#define PLD_DBE         bit6

//PSD VM
#define SRAM_CODE       bit0
#define SFL_CODE        bit1
#define MFL_CODE        bit2
#define SFL_DATA        bit3
#define MFL_DATA        bit4
#define PIO_EN          bit7

// Common Misc. Defines...
#ifndef TRUE
  #define TRUE 0x01
#endif 
#ifndef FALSE
  #define FALSE 0x00
#endif 
#ifndef ON
  #define ON 0x01
#endif 
#ifndef OFF
  #define OFF 0x00
#endif 
#ifndef NULL
  #define NULL 0x00
#endif 



/* ------------------------------ */
/* Standard 8051 MCU Registers    */
/* ------------------------------ */

//DEFINE_SFR(P0,0x80)       // Port 0 - Always used for External Memory Access (no access)
DEFINE_SFR(P1,0x90)	    // Port 1
//DEFINE_SFR(P2,0xA0)       // Port 2 - Always used for External Memory Access (no access)
DEFINE_SFR(P3,0xB0)         // Port 3
DEFINE_SFR(PSW,0xD0)        // Program Status Word
DEFINE_SFR(ACC,0xE0)        // Accumulator
DEFINE_SFR(B,0xF0)          // Register B
DEFINE_SFR(SP,0x81)         // Stack Pointer
DEFINE_SFR(DPL,0x82)        // Data Pointer low byte
DEFINE_SFR(DPH,0x83)        // Data Pointer high byte
DEFINE_SFR(PCON,0x87)       // MCU Power Control Register
DEFINE_SFR(TCON,0x88)       // Timer / Counter Control
DEFINE_SFR(TMOD,0x89)       // Timer / Counter Mode
DEFINE_SFR(TL0,0x8A)        // Timer 0 low byte
DEFINE_SFR(TL1,0x8B)        // Timer 1 low byte
DEFINE_SFR(TH0,0x8C)        // Timer 0 high byte
DEFINE_SFR(TH1,0x8D)        // Timer 1 high byte
DEFINE_SFR(IE,0xA8)         // Interrupt Enable (main)
DEFINE_SFR(IP,0xB8)         // Interrupt Priority (main) 
DEFINE_SFR(SCON,0x98)  	    // UART 0 Serial Control
DEFINE_SFR(SBUF,0x99)  	    // UART 0 Serial Buffer

/* ------------------------ */
/*  Common 8052 Extensions  */
/* ------------------------ */
DEFINE_SFR(T2CON,0xC8)      // Timer 2 Control
DEFINE_SFR(T2MOD,0xC9)      // Timer 2 Mode
DEFINE_SFR(RCAP2L,0xCA)	    // Timer 2 Reload low byte
DEFINE_SFR(RCAP2H,0xCB)	    // Timer 2 Reload high byte
DEFINE_SFR(TL2,0xCC)        // Timer 2 low byte
DEFINE_SFR(TH2,0xCD)        // Timer 2 high byte

/* ------------------------ */
/*  uPSD3200 Extensions     */
/* ------------------------ */
DEFINE_SFR(P4,0xC0)         // New port 4
DEFINE_SFR(P1SFS,0x91)      // Port 1 I/O select
DEFINE_SFR(P3SFS,0x93)      // Port 3 I/O select
DEFINE_SFR(P4SFS,0x94)      // Port 4 I/O select

// --- ADC SFRs ---
DEFINE_SFR(ASCL,0x95)       // ADC Clock Prescalar
DEFINE_SFR(ADAT,0x96)       // ADC Data Register
DEFINE_SFR(ACON,0x97)       // ADC Control Register

// --- DDC SFRs ---
DEFINE_SFR(S1SETUP,0xD1)    // DDC I2C (S1) Setup
DEFINE_SFR(RAMBUF,0xD4)     // DDC RAM Buffer
DEFINE_SFR(DDCDAT,0xD5)     // DDC Data Transmit Register
DEFINE_SFR(DDCADR,0xD6)     // DDC Address Pointer Register
DEFINE_SFR(DDCCON,0xD7)     // DDC Control Register 
DEFINE_SFR(S1CON,0xD8)      // DDC I2C Control Register
DEFINE_SFR(S1STA,0xD9)      // DDC I2C Status
DEFINE_SFR(S1DAT,0xDA)      // DDC Data Hold Register
DEFINE_SFR(S1ADR,0xDB)      // DDC I2C Address

// --- UART 1 SFRs ---
DEFINE_SFR(SCON2,0x9A)      // UART 1 Serial Control
DEFINE_SFR(SBUF2,0x9B)      // UART 1 Serial Buffer

// --- PWM SFRs -----
DEFINE_SFR(PWMCON,0xA1)     // PWM Polarity Control
DEFINE_SFR(PWM0,0xA2)       // PWM0 Duty Cycle
DEFINE_SFR(PWM1,0xA3)       // PWM1 Duty Cycle
DEFINE_SFR(PWM2,0xA4)       // PWM2 Duty Cycle
DEFINE_SFR(PWM3,0xA5)       // PWM3 Duty Cycle
DEFINE_SFR(PWM4P,0xAA)      // PWM4 Period
DEFINE_SFR(PWM4W,0xAB)      // PWM4 Pulse Width
DEFINE_SFR(PSCL0L,0xB1)     // 8-bit PWM0 Prescaler low
DEFINE_SFR(PSCL0H,0xB2)     // 8-bit PWM0 Prescaler high
DEFINE_SFR(PSCL1L,0xB3)     // 8-bit PWM1 Prescaler low
DEFINE_SFR(PSCL1H,0xB4)     // 8-bit PWM1 Prescaler high

// --- WDT SFRs ---
DEFINE_SFR(WDRST,0xA6)      // Watch Dog Reset
DEFINE_SFR(WDKEY,0xAE)      // Watch Dog Key Enable

// --- INTERRUPT 2 SFRs ---
DEFINE_SFR(IEA,0xA7)        // Interrupt Enable (2nd)
DEFINE_SFR(IPA,0xB7)        // Interrupt Priority (2nd)

// --- I2C SFRs ---
DEFINE_SFR(S2SETUP,0xD2)    // I2C (S2) Setup
DEFINE_SFR(S2CON,0xDC)      // I2C Bus Control Register
DEFINE_SFR(S2STA,0xDD)      // I2C Bus Status
DEFINE_SFR(S2DAT,0xDE)      // I2C Data Hold Register
DEFINE_SFR(S2ADR,0xDF)      // I2C Bus Address

// --- USB SFRs ---
DEFINE_SFR(USCL,0xE1)       // USB Clock 8bit prescaler register
DEFINE_SFR(UDT1,0xE6)       // USB End Point 1 Data Register
DEFINE_SFR(UDT0,0xE7)       // USB End Point 0 Data register
DEFINE_SFR(UISTA,0xE8)      // USB Interrupt Status
DEFINE_SFR(UIEN,0xE9)       // USB Interrupt Enable
DEFINE_SFR(UCON0,0xEA)      // USB End Point 0 Control
DEFINE_SFR(UCON1,0xEB)      // USB End Point 1 Control
DEFINE_SFR(UCON2,0xEC)      // USB End Point 2 Control
DEFINE_SFR(USTA,0xED)       // USB End Point 0 Status
DEFINE_SFR(UADR,0xEE)       // USB Address Register
DEFINE_SFR(UDR0,0xEF)       // USB Endpoint 0 Data Receive

/* --------------------------- */
/*  Common 8051 BIT Registers  */
/* --------------------------- */
/*  PSW  */
DEFINE_SFR_BIT(CY,PSW^7)
DEFINE_SFR_BIT(AC,PSW^6)
DEFINE_SFR_BIT(F0,PSW^5)
DEFINE_SFR_BIT(RS1,PSW^4)
DEFINE_SFR_BIT(RS0,PSW^3)
DEFINE_SFR_BIT(OV,PSW^2)
DEFINE_SFR_BIT(P,PSW^0) 	 

/*  TCON  */
DEFINE_SFR_BIT(TF1,TCON^7)	// Standard 8051 timer control
DEFINE_SFR_BIT(TR1,TCON^6)
DEFINE_SFR_BIT(TF0,TCON^5)
DEFINE_SFR_BIT(TR0,TCON^4)
DEFINE_SFR_BIT(IE1,TCON^3)
DEFINE_SFR_BIT(IT1,TCON^2)
DEFINE_SFR_BIT(IE0,TCON^1)
DEFINE_SFR_BIT(IT0,TCON^0)

/*  IE  */
DEFINE_SFR_BIT(EA,IE^7)     // Enable All interrupts
DEFINE_SFR_BIT(EDB,IE^6)    // Enable Debug
DEFINE_SFR_BIT(ET2,IE^5)    // Timer 2
DEFINE_SFR_BIT(ES,IE^4)	    // Usart 0	
DEFINE_SFR_BIT(ET1,IE^3)    // Timer 1
DEFINE_SFR_BIT(EX1,IE^2)    // External Int1
DEFINE_SFR_BIT(ET0,IE^1)    // Timer 0
DEFINE_SFR_BIT(EX0,IE^0)    // External Int0
           
/*  T2CON  */
DEFINE_SFR_BIT(TF2 ,T2CON^7)
DEFINE_SFR_BIT(EXF2,T2CON^6)
DEFINE_SFR_BIT(RCLK,T2CON^5)
DEFINE_SFR_BIT(TCLK,T2CON^4)
DEFINE_SFR_BIT(EXEN2,T2CON^3)
DEFINE_SFR_BIT(TR2,T2CON^2)
DEFINE_SFR_BIT(C_T2,T2CON^1)
DEFINE_SFR_BIT(CP_RL2,T2CON^0)

/*    P1 GPIO   */
DEFINE_SFR_BIT(P1_7,P1^7)   // bit 7 of P1
DEFINE_SFR_BIT(P1_6,P1^6)   // bit 6 of P1
DEFINE_SFR_BIT(P1_5,P1^5)   // bit 5 of P1
DEFINE_SFR_BIT(P1_4,P1^4)   // bit 4 of P1
DEFINE_SFR_BIT(P1_3,P1^3)   // bit 3 of P1
DEFINE_SFR_BIT(P1_2,P1^2)   // bit 2 of P1
DEFINE_SFR_BIT(P1_1,P1^1)   // bit 1 of P1
DEFINE_SFR_BIT(P1_0,P1^0)   // bit 0 of P1

/*    P3 GPIO   */
DEFINE_SFR_BIT(P3_7,P3^7)   // bit 7 of P3
DEFINE_SFR_BIT(P3_6,P3^6)   // bit 6 of P3
DEFINE_SFR_BIT(P3_5,P3^5)   // bit 5 of P3
DEFINE_SFR_BIT(P3_4,P3^4)   // bit 4 of P3
DEFINE_SFR_BIT(P3_3,P3^3)   // bit 3 of P3
DEFINE_SFR_BIT(P3_2,P3^2)   // bit 2 of P3
DEFINE_SFR_BIT(P3_1,P3^1)   // bit 1 of P3
DEFINE_SFR_BIT(P3_0,P3^0)   // bit 0 of P3

/*    P4 GPIO   */
DEFINE_SFR_BIT(P4_7,P4^7)   // bit 7 of P4
DEFINE_SFR_BIT(P4_6,P4^6)   // bit 6 of P4
DEFINE_SFR_BIT(P4_5,P4^5)   // bit 5 of P4
DEFINE_SFR_BIT(P4_4,P4^4)   // bit 4 of P4
DEFINE_SFR_BIT(P4_3,P4^3)   // bit 3 of P4
DEFINE_SFR_BIT(P4_2,P4^2)   // bit 2 of P4
DEFINE_SFR_BIT(P4_1,P4^1)   // bit 1 of P4
DEFINE_SFR_BIT(P4_0,P4^0)   // bit 0 of P4

/*  IP  */
DEFINE_SFR_BIT(PT2,IP^5)    // Timer 2
DEFINE_SFR_BIT(PS,IP^4)     // Usart 0
DEFINE_SFR_BIT(PT1,IP^3)    // Timer 1
DEFINE_SFR_BIT(PX1,IP^2)    // Ext Int1
DEFINE_SFR_BIT(PT0,IP^1)    // Timer 0
DEFINE_SFR_BIT(PX0,IP^0)    // Ext Int 0

/*  SCON  */
DEFINE_SFR_BIT(SM0,SCON^7) // Standard 8051 Uart Control
DEFINE_SFR_BIT(SM1,SCON^6)
DEFINE_SFR_BIT(SM2,SCON^5)
DEFINE_SFR_BIT(REN,SCON^4)
DEFINE_SFR_BIT(TB8,SCON^3)
DEFINE_SFR_BIT(RB8,SCON^2)
DEFINE_SFR_BIT(TI,SCON^1)
DEFINE_SFR_BIT(RI,SCON^0)

/*  S1CON  */
DEFINE_SFR_BIT(CR2,S1CON^7)
DEFINE_SFR_BIT(ENI1,S1CON^6) 
DEFINE_SFR_BIT(STA,S1CON^5) 
DEFINE_SFR_BIT(STO,S1CON^4)
DEFINE_SFR_BIT(ADDR,S1CON^3)
DEFINE_SFR_BIT(AA,S1CON^2)
DEFINE_SFR_BIT(CR1,S1CON^1)
DEFINE_SFR_BIT(CR0,S1CON^0)

/*  UISTA  */
DEFINE_SFR_BIT(SUSPND,UISTA^7)
DEFINE_SFR_BIT(RSTF,UISTA^5) 
DEFINE_SFR_BIT(TXD0F,UISTA^4)
DEFINE_SFR_BIT(RXD0F,UISTA^3)
DEFINE_SFR_BIT(RXD1F,UISTA^2)
DEFINE_SFR_BIT(EOPF,UISTA^1)
DEFINE_SFR_BIT(RESUMF,UISTA^0)


/* -----------------------------------
Interrupt Vectors:
Interrupt Address = (Number * 8) + 3
------------------------------------ */ 
#define RESET_VECTOR_ADDR		0		// Reset Address = 0
#define IE0_VECTOR		0	     		// 0x03 External Interrupt 0
#define IEO_VECTOR_ADDR         	0x03
#define TF0_VECTOR		1			//0x0B Timer 0
#define TF0_VECTOR_ADDR			0x0B
#define IE1_VECTOR		2			//0x13 External Interrupt 1
#define IE1_VECTOR_ADDR			0x13
#define TF1_VECTOR		3			//0x1B Timer 1
#define TF1_VECTOR_ADDR			0x1B
#define SIO_VECTOR		4			//0x23 UART 0
#define SIO_VECTOR_ADDR			0x23
#define TF2_VECTOR		5			//0x2B Timer 2
#define TF2_VECTOR_ADDR			0x2B	
#define USB_VECTOR		6			//0x33 USB
#define USB_VECTOR_ADDR			0x33
#define DDC_VECTOR		7			//0x3B DDC
#define DDC_VECTOR_ADDR			0x3B
#define I2C_VECTOR		8			//0x43 I2C
#define I2C_VECTOR_ADDR			0x43	
#define SIO1_VECTOR   		9			//0x4B UART 1
#define SIO1_VECTOR_ADDR		0x4B
/* ---------------------------------- */

#endif
