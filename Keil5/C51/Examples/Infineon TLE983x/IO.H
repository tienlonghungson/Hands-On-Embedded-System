//****************************************************************************
// @Module        GPIO
// @Filename      IO.H
//----------------------------------------------------------------------------
// @Controller    Infineon XC8xx
// @Compiler      Keil
// @Description:  This file contains all function prototypes and macros for 
//                the IO module.
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************

#ifndef _IO_H_
#define _IO_H_


void IO_Init(void);


//   Port 0
sbit P0_0       = 0x80;    
sbit P0_1       = 0x81;    
sbit P0_2       = 0x82;    
sbit P0_3       = 0x83;    
sbit P0_4       = 0x84;    
sbit P0_5       = 0x85;    

//   Port 1
sbit P1_0       = 0x90;    
sbit P1_1       = 0x91;    
sbit P1_2       = 0x92;    
sbit P1_3       = 0x93;    
sbit P1_4       = 0x94;    

//   Port 2
sbit P2_0       = 0xC8;    
sbit P2_1       = 0xC9;    
sbit P2_3       = 0xCB;    
sbit P2_4       = 0xCC;    
sbit P2_5       = 0xCD;    
sbit P2_6       = 0xCE;    
sbit P2_7       = 0xCF;    


//****************************************************************************
// @Macro         IO_TogglePin(PinName) 
//----------------------------------------------------------------------------
// @Description   The chosen portpin will be toggled. 
//                Note:
//                'PinName' identifies the pin of a bit-addressable port. The 
//                default names can be changed in the port configuration 
//                dialog. 
//----------------------------------------------------------------------------
// @Returnvalue   None
//----------------------------------------------------------------------------
// @Parameters    PinName	Pin to be toggled 
//----------------------------------------------------------------------------
// @Date          12.07.2010
//****************************************************************************
#define IO_TogglePin(PinName) PinName ^= 1


#endif  // ifndef _IO_H_
