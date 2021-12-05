/*------------------------------------------------------------------------------
Title: upsd3300_spi.c
Date: 4, 2003
Author: Shao Qing

uPSD3300 SPI Device Driver Functions
04/2003 Ver 0.1 - Initial Version

Copyright (c) 2005 STMicroelectrons Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD products (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
------------------------------------------------------------------------------*/

#include <intrins.h>

#include "uPSD3300.h"
#include "uPSD3300_hardware.h"
#include "uPSD3300_timer.h"
#include "uPSD3300_LCD.h"
#include "uPSD3300_SPI.h"


#define SPI_BUSY_FLAG 0x10
#define SPI_TI_FLAG 0x02
#define SPI_TRANSMIT_END_FLAG 0x08
#define SPI_RI_FLAG 0x01
#define SPI_RO_FLAG 0x04


#define SPI_COMM_WREN 0x06
#define SPI_COMM_WRDI 0x04
#define SPI_COMM_RDSR 0x05
#define SPI_COMM_WRSR 0x01
#define SPI_COMM_READ 0x03
#define SPI_COMM_WRITE 0x02

#define SPI_Dummy 0xff
/*-------------------------------------------------------------------------------------
    void Turbo_SPI_Init(void);
    
    Setup 4-wires in SPI mode; MSB first; Sampling at rising edge; 
    Disable SPI interrupt;
    Configurate SPI clock rate;     
--------------------------------------------------------------------------------------*/
void Turbo_SPI_Init(void)
{
    P4SFS0 |= 0x70;
    P4SFS1 |= 0x70; // Setup P4[4..6] Port as SPI function
                    // P4.7 works on GPIO mode as Slave Select signal

    SPICON1=0x00;   //bit3:TEIE=0.  SPI transmission end interrupt disable
                    //bit2:RORIE=0. SPI receive overrun interrupt disable
                    //bit1:TIE=0.   SPI transmission interrupt disable
                    //bit0:RIE=0    SPI receiption interrupt disable

    SPICLKD=0x2C;   //select frequency divider=0x2C

    SPICON0=0x52;   //bit6:TE=1.    SPI Transmitter enable
                    //bit5:RE=0.    SPI Receiver disable
                    //bit4:SPIEN=1. SPI enable
                    //bit3:SSEL=0.  SPI Slave select output is disable,use P1.7 as SS signal
                    //bit2:FLSB=0.  SPI Transfer the MSB first according to requirement of M95080W
                    //bit1:SPO=1.   SPI Sample data at rising edge of clock
}
/*---------------------------------------------------------
    Write a byet m_data to SPI EEPROM at address m_addr.
----------------------------------------------------------*/
void Turbo_SPI_WriteByte(unsigned int m_addr, unsigned char m_data)
{
    unsigned char m_ha,m_la;                //Define high and low 8-bit address
    P4_7=0;
    m_ha=m_addr>>8;                         //generate high 8-bit address
    m_la=m_addr;                            //generate low 8-bit address

    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPITDR=SPI_COMM_WRITE;                  //send WRITE command to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full   
    SPITDR=m_ha;                            //Send high 8-bit address
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full
    SPITDR=m_la;                            //Send low 8-bit address
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full   
    SPITDR=m_data;                          //Send data to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full   
    delay_10ms();                           //Delay 10ms for write EEPROM
    P4_7=1;
    delay_10ms();   
}
/*---------------------------------------------------------
    Read a byet from SPI EEPROM , return value at address m_addr.
----------------------------------------------------------*/
unsigned char Turbo_SPI_ReadByte(unsigned int m_addr)
{
    unsigned char m_data;                   
    unsigned char m_ha,m_la;                //Define high and low 8-bit address
    P4_7=0; 
    m_ha=m_addr>>8;                         //generate high 8-bit address
    m_la=m_addr;                            //generate low 8-bit address
    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPICON0|=RE;
    SPITDR=SPI_COMM_READ;                   //Send READ command to EEPROM
    //while (!(SPISTAT & SPI_TI_FLAG));     //Waiting if SPI transfer is full   
    while (!(SPISTAT & SPI_TRANSMIT_END_FLAG)); 
    while (!(SPISTAT & SPI_RI_FLAG));
    m_data=SPIRDR;
    //printfLCD("data1=%x\n",m_data);
    //delay_1sec();
    SPITDR=m_ha;                            //Send high 8-bit address
    while (!(SPISTAT & SPI_TRANSMIT_END_FLAG)); 
    while (!(SPISTAT & SPI_RI_FLAG));
    m_data=SPIRDR;
    //printfLCD("data2=%x\n",m_data);
    //delay_1sec();
    SPITDR=m_la;                            //Send low 8-bit address
    while (!(SPISTAT & SPI_TRANSMIT_END_FLAG));     //Waiting if SPI transfer is full
    while (!(SPISTAT & SPI_RI_FLAG));
    m_data=SPIRDR;
    //printfLCD("data3=%x\n",m_data);
    //delay_1sec();
    
    SPITDR=SPI_Dummy;                       //Provide read clock by sending a dummy byte
    while (!(SPISTAT & SPI_TRANSMIT_END_FLAG));     //Waiting if SPI transfer is full
    while (!(SPISTAT & SPI_RI_FLAG));       //Waiting if SPI receiver is empty
    m_data=SPIRDR;                          //Read data from SPIRDR register
    //printfLCD("data4=%x\n",m_data);
    //delay_1sec();
    SPICON0&=(~RE);                         //Disable SPI receiver
    P4_7=1;
    return(m_data);                         //Return data received
}
/*---------------------------------------------------------
    Enalbe write action.
----------------------------------------------------------*/
void Turbo_SPI_WriteEnable()
{
    P4_7=0;
    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPITDR=SPI_COMM_WREN;                   //Send WREN(write enable) command to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full   
    delay_10ms();                           //Delay 10ms for write EEPROM
    P4_7=1;
    delay_10ms();
}
/*---------------------------------------------------------
    Disable write action
----------------------------------------------------------*/
/*
void Turbo_SPI_WriteDisable()
{
    P4_7=0;
    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPITDR=SPI_COMM_WRDI;                   //Send WRDI(write disable) command to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full   
    delay_10ms();                           //Delay 10ms for write EEPROM
    P4_7=1;
}
*/
/*--------------------------------------------------------- 
    Write status register in EEPROM
----------------------------------------------------------*/
/*
void Turbo_SPI_WriteSR(unsigned char m_data)
{
    P4_7=0;
    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPITDR=SPI_COMM_WRSR;                   //Send WRSR(write status register) to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full
    SPITDR=m_data;                          //Send config value to status register at EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full
    delay_10ms();                           //Delay 10ms for write EEPROM
    P4_7=1;
}
*/
/*---------------------------------------------------------
    Read status register in EEPROM
----------------------------------------------------------*/
/*
unsigned char Turbo_SPI_ReadSR(void)
{
    unsigned char m_SR;
    P4_7=0;
    while (SPISTAT & SPI_BUSY_FLAG);        //Waiting if SPI is busy
    SPITDR=SPI_COMM_RDSR;                   //Send RDSR(Read status register) command to EEPROM
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full
    SPITDR=SPI_Dummy;                       //Provide read clock by sending a dummy byte 
    while (!(SPISTAT & SPI_TI_FLAG));       //Waiting if SPI transfer is full
    SPICON0|=RE;                            //Enable SPI receiver
    while (!(SPISTAT & SPI_RI_FLAG));       //Waiting if SPI receiver is empty
    m_SR=SPIRDR;                            //Read data from SPIRDR register
    SPICON0&=(~RE);                         //Disable SPI receiver
    P4_7=1;
    return(m_SR);                           //Return value of status register
}
*/
