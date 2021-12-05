/*---------------------------------------------------------------------------- 
Title: Turbo_I2C.h
Date: 4, 2003
Author: Shao Qing

Description:
Function prototypes for Turbo_i2c.c   I2C Routines

Copyright 2003  ST Microelectronics
----------------------------------------------------------------------------*/ 

#ifndef _TURBO_I2C_H_
#define _TURBO_I2C_H_

void Turbo_i2c_init (void);
void Turbo_i2c_MX (unsigned char i2c_address, unsigned char data_len);
void Turbo_i2c_MR (unsigned char i2c_address, unsigned char data_len);
void Turbo_i2c_SXR (unsigned char i2c_address, unsigned char data_len);

void i2c_wait_for_int (void);


// S1STA equates:
#define  GCALL      0x80       // Gen. Call flag
#define  STOP       0x40       // Stop cond. flag
#define  INTR       0x20       // Interrupt cond flag
#define  TX_MODE    0x10       // I2C Tx mode flag
#define  BBUSY      0x08       // Bus Busy flag
#define  BLOST      0x04       // Bus Lost flag
#define  _ACKREP    0x02       // ACK response flag
#define  SLV        0x01       // Slave Mode flag

// S1CON Equates:
#define  CR2        0x80        // 
#define  ENI        0x40        // 
#define  STA        0x20        // 
#define  STO        0x10        // 
#define  ADDR       0x08        // 
#define  AA         0x04        // 
#define  CR1        0x02        // 
#define  CR0        0x01        // 

#define  dummy      0xff        // dummy byte to send - needs to be FFH

#endif



