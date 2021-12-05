//****************************************************************************
// @Module        LED and Touch-Sense Controller
// @Filename      LTS.H
// @Project       Boost1.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC822M-1F
//
// @Compiler      Keil
//
// @Codegenerator 0.08
//
// @Description:  This file contains all function prototypes and macros for 
//                the LEDTS module.
//
//----------------------------------------------------------------------------
// @Date          08.01.2010 22:23:03
//
//****************************************************************************

// USER CODE BEGIN (LTS_Header,1)

// USER CODE END



#ifndef _LTS_H_
#define _LTS_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (LTS_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (LTS_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (LTS_Header,4)

// USER CODE END

#define LED_EN              1
#define LED_DIS             0
#define TS_EN               1
#define TS_DIS              0
#define LTS_PRESCALER       0x08

//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (LTS_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (LTS_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

extern unsigned char idata LDLINE_VALUE[3];
extern unsigned char idata TSCOMPARE[6];
extern unsigned char idata PADERROR;
extern unsigned char idata PADRESULT;
extern unsigned char idata PADFLAG;
extern unsigned char idata ACCUMULATORCOUNTER;
extern unsigned char idata SHORTCOUNT;
extern unsigned char idata SUBTRACTIONM;
extern unsigned char idata DIVISORN;
extern unsigned char xdata TOUCH_SENSE_RESULT[19];
extern unsigned char xdata ubPDC;
extern unsigned char idata SUB_PAD[3];

// USER CODE BEGIN (LTS_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void LTS_vInit(void);
void LTS_vROMLIB_Init(void);

//****************************************************************************
// @Function      void SET_LDLINE_CMP(char idata *ptrLDLINE, char idata 
//                *ptrCOMPARE) 
//
//----------------------------------------------------------------------------
// @Description   This function programs sfrs LTS_LDLINE and LTS_COMPARE for 
//                LED and/or Touch Sense, based on the user-defined input 
//                parameters. The function takes sfr bit FNCOL value direct 
//                from the sfr LTS_GLOBCTL1 to synchronize which data is to 
//                be programmed into the sfr LTS_LDLINE for implementing an 
//                LED display. Likewise, the function also updates the sfr 
//                LTS_COMPARE for individual LED or Touch Sense PADTurn 
//                number.
//                
//                Note: This function can be called at every either time 
//                slice or time frame, depending on whether Touch Sense 
//                or/and LED is/are enabled.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    *ptrLDLINE: 
//                Start IRAM address of LDLINE parameters
// @Parameters    *ptrCOMPARE: 
//                Start IRAM address of COMPARE parameters
//
//----------------------------------------------------------------------------
// @Date          08.01.2010
//
//****************************************************************************

void SET_LDLINE_CMP(char idata *ptrLDLINE, char idata *ptrCOMPARE);

//****************************************************************************
// @Function      void FINDTOUCHEDPAD(void) 
//
//----------------------------------------------------------------------------
// @Description   This function calculates a running average for each Pad 
//                Turn to eliminate any spurious peaks and troughs in the pad 
//                frequencies and to create a stable value from which the 
//                trip points can be calculated. The average is derived from 
//                the AccumulatorCounter times of SFR LTS_TSCTR value. It 
//                then takes the stored average and calculates a trip point 
//                by subtracting a value (input, subtraction m) from the 
//                average. This low trip value will be the determining factor 
//                if the key has been touched. Finding average and low trip 
//                values are skipped when at least one of the pad flags is 
//                set (PADFLAG Status!= 0x00).
//                
//                Common or different subtraction m for each PADT can be 
//                chosen and is determined by the Subtraction Option at IRAM 
//                address 0x32. If Subtraction Option is 0x00, common 
//                subtraction m value is initialized at IRAM address 0x34. If 
//                different subtraction m values are selected, Subtraction 
//                Option is programmed as the start IRAM address of these 
//                subtraction m values.
//                
//                Note: 
//                1) This function uses fixed IRAM address 0x2D to 0x34, and 
//                XRAM address 0xF0EC - 0xF0FF. These addressees are not to 
//                be destroyed by users at all time. 
//                2) To use this function, user needs to disable the hardware 
//                control (LTS_TSCTL.PADTSW=0). The function will control the 
//                padt and configure it in LTS_TSCTL.PADT SFR field.
//                3) The number of Touch-Sense Pad Turns enabled must be 
//                sequential, e.g. PADT0, PADT1 etc. for the software round 
//                robin of the function to work properly. Users cannot enable 
//                3 PADTx and defined them as PADT0, PADT4 and PADT6 for 
//                example, it has to be PADT0, PADT1 and PADT2.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          08.01.2010
//
//****************************************************************************

void FINDTOUCHEDPAD(void);
void LTS_vInitCalculation(void);

// USER CODE BEGIN (LTS_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

//   Shared interrupt vector definitions are defined in SHARED_INT.H


// USER CODE BEGIN (LTS_Header,9)

// USER CODE END

#endif  // ifndef _LTS_H_
