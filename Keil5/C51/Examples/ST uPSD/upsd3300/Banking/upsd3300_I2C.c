/*---------------------------------------------------------------------------- 
September 30, 2004
Note: This is an early version of the I2C device driver.  Refer to the website
(www.st.com/psm) for the latest copy of the 3300 I2C device driver.  

Title: upsd3300_i2c.c

For I2C test based on interrupt mode on uPSD3300.
Date: 5, 2003


Description: I2C Routines for DK3300 Board

Copyright (c) 2005 ST Microelectronics
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
----------------------------------------------------------------------------*/ 

#include "uPSD3300.h"
#include "uPSD3300_hardware.h"
#include "uPSD3300_timer.h"
#include "uPSD3300_LCD.h"
#include "uPSD3300_I2C.h"



xdata unsigned char i2c_xmit_buf[256];                          // message xmit buffer
xdata unsigned char i2c_rcv_buf[256];                           // message rcv buffer
unsigned int i;                                                 // array pointer
unsigned char dummybyte, i2c_timeout;                           // dummy byte to rcv, timeout cntr
static unsigned char i2c_data_len,data_index;                   // the data length and data-pointer in communication
bit i2c_init_flag, i2cwait, i2c_master, i2c_xmitr;              // callable status flag bits
bit bus_lost_flag, slave_nack_flag, i2c_timeout_flag;           // error flag bits
unsigned char i2c_Mx_end,i2c_Mr_end;

//-------------------------------------------------- 
//  I2C Initialization Routine
//--------------------------------------------------

void Turbo_i2c_init (void){
    P3SFS |= 0xC0;                      // Enable P3.7 for SCL, P3.6 for SDA    
    S1CON |= 0x83;                      // Setup I2C for 83KHz (40MHz XTAL)
    S1SETUP=0x80;                       // set start and stop hold time for 25ns
    i2c_init_flag = 1;                  // set init done flag
    i2c_timeout_flag = 0;               // clear timeout error flag
    IPA |= 0x02;                        // set high priority for EI2C
    IEA |= 0x02;                        // set EI2C I2C Int. Enable bit
    data_index=0;                       // Initialize data-pointer
}

//-------------------------------------------------- 
//  I2C Transmit Data in Master mode
//--------------------------------------------------

void Turbo_i2c_MX (unsigned char i2c_address, unsigned char data_len){
    int i;
    EA=0;
    while ((S1STA & BBUSY) != 0);       // wait for BBUSY to be clear
    i2c_data_len=data_len;              //Initialize i2c_data_len to specify communicated data length
    i2c_master = 1;
    i2c_xmitr = 1;                      // set up for master transmitter
    i2c_Mx_end=0;   

    S1DAT = i2c_address;                // set up i2c address
    S1CON |= ENI;                       // Set ENI (Enable I2C-2)
    S1CON &= ~STO;                      // Clr STO in S1CON
    S1CON |= STA;                       // Set STA (Send start bit)
    S1CON &= ~AA;                       // Clr AA in S1CON, because acknowledge should be provided by receiver
    for(i=0;i<20000;i++);
    
    while ((S1STA & BLOST) != 0)            // wait for BBUSY to be clear
    { 
        S1DAT = i2c_address;                // set up i2c address
        S1CON |= ENI;                       // Set ENI (Enable I2C-2)
        S1CON &= ~STO;                      // Clr STO in S1CON
        S1CON |= STA;                       // Set STA (Send start bit)
        S1CON &= ~AA;                       // Clr AA in S1CON, because acknowledge should be provided by receiver
        for(i=0;i<20000;i++);
    }
    EA=1;
    while(i2c_Mx_end==0);
}                                        



//-------------------------------------------------- 
//  I2C Receive Data in Master mode
//--------------------------------------------------

void Turbo_i2c_MR (unsigned char i2c_address, unsigned char data_len){
    while ((S1STA & BBUSY) != 0);       // wait for BBUSY to be clear
    i2c_data_len=data_len;              //Initialize i2c_data_len to specify communicated data length
    i2c_master = 1;
    i2c_xmitr = 0;                      // set flags for master receiver
    S1DAT = (i2c_address | 0x01);       // set up i2c address (set R/W bit)
    S1CON |= ENI;                       // Set ENI (Enable I2C-2)
    S1CON &= ~STO;                      // Clr STO in S1CON
    S1CON |= STA;                       // Set STA (Send start bit)
    S1CON &= ~AA;                       // Clr AA in S1CON
    i2c_Mr_end=0;
    while(i2c_Mr_end==0);
}

//-------------------------------------------------- 
//  I2C Transmit and receive Data in Slave mode
//--------------------------------------------------
/*
void Turbo_i2c_SXR (unsigned char i2c_address, unsigned char data_len){
    while ((S1STA & BBUSY) != 0);       // wait for BBUSY to be clear
    i2c_data_len=data_len;              //Initialize i2c_data_len to specify communicated data length
    i2c_master = 0;                     // set up for slave
    S1ADR = i2c_address;                // set up i2c address
    S1CON |= ENI;                       // Set ENI (Enable I2C-2)
    S1CON |= AA;                        // 
    i2c_data_len=data_len;
}                                        
*/
void i2c_delay(unsigned int time)
{
    unsigned int i;
    for(i=0;i<time;i++){};
}

/*-------------------------------------------------- 
    I2C Interrupt Service Routine
--------------------------------------------------*/ 

void i2c_isr (void) interrupt I2C_VECTOR using 2 {  


    //------Master transmit operation--------------------------------------------
    if (i2c_master & i2c_xmitr){                        // mstr transmitter mode
        S1STA &= ~INTR;                             // Clear INTR flag
        if ((S1STA & BLOST) !=0){
            dummybyte=S1DAT;
            data_index=0;
            return;
        }   
        else if ((S1STA & _ACKREP) !=0){
            S1CON |=STO;
            S1DAT=dummy;
            data_index=0;
            i2c_delay(1000);                            // 1 Sec timeout
            return;                                     // if not slave ACK, cancel transmit 
                                                        // May be should add  some code to end the communication?
        }
        if((data_index)<i2c_data_len)
        {
            S1STA &= ~INTR;                             // Clear INTR flag
                                                        //STA start flag already have been cleared by i2c hardware according to spec.
            S1DAT = i2c_xmit_buf[data_index];           //send data from Master
            data_index++;                               //increment data-pointer
        }
        else if((data_index)==i2c_data_len)
        {
            S1CON |= STO;                               // set STO (stop bit) for lase one data byte to send
            S1DAT = dummy;                              // send dummy byte
            data_index=0;                               // reset data-pointer
            i2c_Mx_end=1;
        }
    
    }
    //------Master receive operation--------------------------------------------
    if (i2c_master & ~i2c_xmitr){                           // mstr receiver mode
        S1STA &= ~INTR;                             // Clear INTR flag
        if(data_index<i2c_data_len)
        {
            if((S1CON&AA)==0){S1CON |= AA;dummybyte = S1DAT;return;}        //if this is TR_INT (address information send completely), allow ACK to prepare receive data 
            else{
                                                            //Begin reveive data
                                                            //STA start flag already have been cleared by i2c hardware according to spec.
                P1_7=1;                                     //generate a squarewave at P1.7 for confirmation I2C interrupt function at Master receive mode
                i2c_rcv_buf[data_index] = S1DAT;            //receive data
                data_index++;                               //increment data-pointer
                P1_7=0;
                if((data_index)==i2c_data_len){S1CON&=~AA;S1CON|=STO;}  //disable ACK to prepare receive lase one data byte
            }
            if((S1STA&STOP)!=0){data_index=0;return;}
        }
        else if(data_index==i2c_data_len)               //receive last one data
        {
            P1_7=1;
            dummybyte = S1DAT;                          // dummy read
            data_index=0;                               // reset data-pointer                   
            i2c_Mr_end=1;
            P1_7=0;
        }   
    }
}



