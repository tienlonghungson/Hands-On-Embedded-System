//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.C
// @Project       test2.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC866
//
// @Compiler      Keil
//
// @Codegenerator 1.0
//
// @Description   This file contains the Project initialization function.
//
//----------------------------------------------------------------------------
// @Date          2/3/2005 11:33:35 AM
//
//****************************************************************************

// USER CODE BEGIN (MAIN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (MAIN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (MAIN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (MAIN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (MAIN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,6)
unsigned char			result;

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (MAIN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (MAIN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void MAIN_vUnlockProtecReg(void) 
//
//----------------------------------------------------------------------------
// @Description   This function makes it possible to write one protected 
//                register. After calling of this function and write on the 
//                protected register is the security level set to low 
//                protected mode.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2/3/2005
//
//****************************************************************************

// USER CODE BEGIN (UnlockProtecReg,1)

// USER CODE END

void MAIN_vUnlockProtecReg(void)
{

  ubyte ubMODE;

  SCU_PAGE      =  0x01;         //  switch to page 1

  ubMODE = SCU_PASSWD;

  if((ubMODE & 0x03) == 0x03)      // if Bit-Protection Scheme is Enabled 
  {

    SCU_PASSWD = 0x9B; //Opens access to writing of all protected bits

  }  // end if Bit-Protection Scheme

  SCU_PAGE      =  0x00;         //  switch to page 0

} //  End of function MAIN_vUnlockProtecReg


//****************************************************************************
// @Function      void MAIN_vlockProtecReg(void) 
//
//----------------------------------------------------------------------------
// @Description   This function makes lock to protected register. After 
//                calling of this function and write on the protected 
//                register is the security level set to low protected mode.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2/3/2005
//
//****************************************************************************

// USER CODE BEGIN (lockProtecReg,1)

// USER CODE END

void MAIN_vlockProtecReg(void)
{

  ubyte ubMODE;

  SCU_PAGE      =  0x01;         //  switch to page 1

  ubMODE =SCU_PASSWD;

  if((ubMODE & 0x03) == 0x03)      // if Bit-Protection Scheme is Enabled 
  {

    SCU_PASSWD = 0xAB; //Closes access to writing of all protected bits

  }  // end if Bit-Protection Scheme

  SCU_PAGE      =  0x00;         //  switch to page 0

} //  End of function MAIN_vlockProtecReg


//****************************************************************************
// @Function      void MAIN_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This function initializes the microcontroller. It is 
//                assumed that the SFRs are in their reset state.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2/3/2005
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Init,1)

// USER CODE END

void MAIN_vInit(void)
{
  // USER CODE BEGIN (MAIN_Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the System Clock:
  ///  -----------------------------------------------------------------------
  ///  - On Chip Osc is Selected
  ///  - PLL Mode
  ///  - input frequency is 10.00 MHz



  SCU_PAGE      =  0x02;        //  switch to Page 2 
  SCU_TSCON0   &=  0xF8;         // trim freq

    MAIN_vUnlockProtecReg();       // unlock write security

  SCU_PAGE      =  0x01;         //  switch to page 1

  SCU_PLL_CON  |= (ubyte)  0x20; //  Program desired NDIV value

    MAIN_vlockProtecReg();       // lock write security

  SCU_PAGE      =  0x00;         //  switch to page 0


  ///  Initialization of module 'GPIO'
  IO_vInit();

  ///  Initialization of module 'Analog / Digital Converter (ADC)'
  ADC_vInit();

  //   Interrupt Priority

  CPU_IP        =  0x00;         // load Interrupt Priority Register
  CPU_IPH       =  0x00;         // load Interrupt Priority High Register
  CPU_IP1       =  0x00;         // load Interrupt Priority 1 Register
  CPU_IPH1      =  0x00;         // load Interrupt Priority 1 High Register


  // USER CODE BEGIN (MAIN_Init,3)

  // USER CODE END

  //   globally enable interrupts
  EA            =  1;           

} //  End of function MAIN_vInit


//****************************************************************************
// @Function      void main(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the main function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2/3/2005
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Main,1)

// USER CODE END

void main(void)
{
  // USER CODE BEGIN (MAIN_Main,2)

  // USER CODE END

  MAIN_vInit();


  // USER CODE BEGIN (MAIN_Main,3)
  	
	// -----------------------------------------------------------
	// write operation with LDEV=1 to the request source mode reg.
	// -----------------------------------------------------------

  while(1)
  {
	ADC_PAGE = 0x06;
	ADC_CRCR1 |= 0x40;			//	write channel information to be converted
	ADC_CRMR1 |= 0x40; 			//  generate load event

	while(ADC_bBusy());			//  wait until conversion complete

	ADC_PAGE = 0x02;
	if(ADC_RESR2L & 0x10)		//  check whether the result is valid
  	{
		result = ADC_RESR2H;	//	read 8-bit result 
	}

	PORT_PAGE = 0x00;
	P3_DATA	= result;			//  use port3 to show ADC result
  }
  // USER CODE END

} //  End of function main


// USER CODE BEGIN (MAIN_General,10)

// USER CODE END

