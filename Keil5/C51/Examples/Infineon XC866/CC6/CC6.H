//****************************************************************************
// @Module        Capture / Compare Unit 6 (CCU6)
// @Filename      CC6.H
// @Project       DaveTest.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866-4FR
//
// @Compiler      Keil
//
// @Codegenerator 1.1
//
// @Description   This file contains all function prototypes and macros for 
//                the CCU6 module.
//
//----------------------------------------------------------------------------
// @Date          09.02.2005 00:47:37
//
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,1)

// USER CODE END



#ifndef _CC6_H_
#define _CC6_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

//   This parameter identifies CC6 timer 12
#define CC6_TIMER_12 12

//   This parameter identifies CC6 timer 13
#define CC6_TIMER_13 13

//   This parameter identifies CC6 channel 0
#define CC6_CHANNEL_0 0

//   This parameter identifies CC6 channel 1
#define CC6_CHANNEL_1 1

//   This parameter identifies CC6 channel 2
#define CC6_CHANNEL_2 2

//   This parameter identifies CC6 channel 3
#define CC6_CHANNEL_3 3


// USER CODE BEGIN (CCU6_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (CCU6_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void CC6_vInit(void);
void CC6_vStartTmr(ubyte TimerNr);
void CC6_vStopTmr(ubyte TimerNr);
void CC6_vResetTmr(ubyte TimerNr);
void CC6_vSetTmrPeriod(ubyte TimerNr, uword Value);
void CC6_vSetDeadTimePeriod(ubyte ubValue);
void CC6_vEnableShadowTransfer(ubyte TimerNr);
void CC6_vLoadChannelShadowRegister(ubyte ChName, uword Value);
uword CC6_uwGetChannelShadowRegister(ubyte ChName);
uword CC6_uwGetChannelRegister(ubyte ChName);
uword CC6_uwGetTmrCounter(ubyte TimerNr);
void CC6_uwSetTmrCounter(ubyte TimerNr, uword Value);
void CC6_vSetStatusBit(ubyte ChName);
void CC6_vResetStatusBit(ubyte ChName);


// USER CODE BEGIN (CCU6_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

#define CCU6_NodeI0_INT 10


// USER CODE BEGIN (CCU6_Header,10)

// USER CODE END


#endif  // ifndef _CC6_H_
