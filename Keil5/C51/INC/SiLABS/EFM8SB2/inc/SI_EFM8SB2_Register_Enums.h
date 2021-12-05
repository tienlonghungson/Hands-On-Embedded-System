//------------------------------------------------------------------------------
// Copyright 2014 Silicon Laboratories, Inc.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
// Original content and implementation provided by Silicon Laboratories.
//------------------------------------------------------------------------------
//Supported Devices:
//  EFM8SB20F16G
//  EFM8SB20F32G
//  EFM8SB20F32G
//  EFM8SB20F32G
//  EFM8SB20F64G
//  EFM8SB20F64G
//  EFM8SB20F64G

#ifndef SI_EFM8SB2_REGISTER_ENUMS_H
#define SI_EFM8SB2_REGISTER_ENUMS_H

//Standard device includes
#include "SI_EFM8SB2_Defs.h"
//------------------------------------------------------------------------------
// ADC0AC Enums (ADC0 Accumulator Configuration @ 0xBA)
//------------------------------------------------------------------------------
#define ADC0AC_ADRPT__FMASK           0x07 ///< Repeat Count                                      
#define ADC0AC_ADRPT__SHIFT           0x00 ///< Repeat Count                                      
#define ADC0AC_ADRPT__ACC_1           0x00 ///< Perform and Accumulate 1 conversion.              
#define ADC0AC_ADRPT__ACC_4           0x01 ///< Perform and Accumulate 4 conversions.             
#define ADC0AC_ADRPT__ACC_8           0x02 ///< Perform and Accumulate 8 conversions.             
#define ADC0AC_ADRPT__ACC_16          0x03 ///< Perform and Accumulate 16 conversions.            
#define ADC0AC_ADRPT__ACC_32          0x04 ///< Perform and Accumulate 32 conversions.            
#define ADC0AC_ADRPT__ACC_64          0x05 ///< Perform and Accumulate 64 conversions.            
                                                                                                  
#define ADC0AC_ADSJST__FMASK          0x38 ///< Accumulator Shift and Justify                     
#define ADC0AC_ADSJST__SHIFT          0x03 ///< Accumulator Shift and Justify                     
#define ADC0AC_ADSJST__RIGHT_NO_SHIFT 0x00 ///< Right justified. No shifting applied.             
#define ADC0AC_ADSJST__RIGHT_SHIFT_1  0x08 ///< Right justified. Shifted right by 1 bit.          
#define ADC0AC_ADSJST__RIGHT_SHIFT_2  0x10 ///< Right justified. Shifted right by 2 bits.         
#define ADC0AC_ADSJST__RIGHT_SHIFT_3  0x18 ///< Right justified. Shifted right by 3 bits.         
#define ADC0AC_ADSJST__LEFT_NO_SHIFT  0x20 ///< Left justified. No shifting applied.              
                                                                                                  
#define ADC0AC_ADAE__BMASK            0x40 ///< Accumulate Enable                                 
#define ADC0AC_ADAE__SHIFT            0x06 ///< Accumulate Enable                                 
#define ADC0AC_ADAE__ACC_DISABLED     0x00 ///< ADC0H:ADC0L contain the result of the latest      
                                           ///< conversion when Burst Mode is disabled.           
#define ADC0AC_ADAE__ACC_ENABLED      0x40 ///< ADC0H:ADC0L contain the accumulated conversion    
                                           ///< results when Burst Mode is disabled. Firmware must
                                           ///< write 0x0000 to ADC0H:ADC0L to clear the          
                                           ///< accumulated result.                               
                                                                                                  
//------------------------------------------------------------------------------
// ADC0CF Enums (ADC0 Configuration @ 0xBC)
//------------------------------------------------------------------------------
#define ADC0CF_ADGN__BMASK         0x01 ///< Gain Control                                      
#define ADC0CF_ADGN__SHIFT         0x00 ///< Gain Control                                      
#define ADC0CF_ADGN__GAIN_0P5      0x00 ///< The on-chip PGA gain is 0.5.                      
#define ADC0CF_ADGN__GAIN_1        0x01 ///< The on-chip PGA gain is 1.                        
                                                                                               
#define ADC0CF_ADTM__BMASK         0x02 ///< Track Mode                                        
#define ADC0CF_ADTM__SHIFT         0x01 ///< Track Mode                                        
#define ADC0CF_ADTM__TRACK_NORMAL  0x00 ///< Normal Track Mode. When ADC0 is enabled,          
                                        ///< conversion begins immediately following the start-
                                        ///< of-conversion signal.                             
#define ADC0CF_ADTM__TRACK_DELAYED 0x02 ///< Delayed Track Mode. When ADC0 is enabled,         
                                        ///< conversion begins 3 SAR clock cycles following the
                                        ///< start-of-conversion signal. The ADC is allowed to 
                                        ///< track during this time.                           
                                                                                               
#define ADC0CF_AD8BE__BMASK        0x04 ///< 8-Bit Mode Enable                                 
#define ADC0CF_AD8BE__SHIFT        0x02 ///< 8-Bit Mode Enable                                 
#define ADC0CF_AD8BE__NORMAL       0x00 ///< ADC0 operates in 10-bit mode (normal operation).  
#define ADC0CF_AD8BE__8_BIT        0x04 ///< ADC0 operates in 8-bit mode.                      
                                                                                               
#define ADC0CF_ADSC__FMASK         0xF8 ///< SAR Clock Divider                                 
#define ADC0CF_ADSC__SHIFT         0x03 ///< SAR Clock Divider                                 
                                                                                               
//------------------------------------------------------------------------------
// ADC0CN0 Enums (ADC0 Control 0 @ 0xE8)
//------------------------------------------------------------------------------
#define ADC0CN0_ADCM__FMASK            0x07 ///< Start of Conversion Mode Select                   
#define ADC0CN0_ADCM__SHIFT            0x00 ///< Start of Conversion Mode Select                   
#define ADC0CN0_ADCM__ADBUSY           0x00 ///< ADC0 conversion initiated on write of 1 to ADBUSY.
#define ADC0CN0_ADCM__TIMER0           0x01 ///< ADC0 conversion initiated on overflow of Timer 0. 
#define ADC0CN0_ADCM__TIMER2           0x02 ///< ADC0 conversion initiated on overflow of Timer 2. 
#define ADC0CN0_ADCM__TIMER3           0x03 ///< ADC0 conversion initiated on overflow of Timer 3. 
#define ADC0CN0_ADCM__CNVSTR           0x04 ///< ADC0 conversion initiated on rising edge of       
                                            ///< CNVSTR.                                           
                                                                                                   
#define ADC0CN0_ADWINT__BMASK          0x08 ///< Window Compare Interrupt Flag                     
#define ADC0CN0_ADWINT__SHIFT          0x03 ///< Window Compare Interrupt Flag                     
#define ADC0CN0_ADWINT__NOT_SET        0x00 ///< An ADC window compare event did not occur.        
#define ADC0CN0_ADWINT__SET            0x08 ///< An ADC window compare event occurred.             
                                                                                                   
#define ADC0CN0_ADBUSY__BMASK          0x10 ///< ADC Busy                                          
#define ADC0CN0_ADBUSY__SHIFT          0x04 ///< ADC Busy                                          
#define ADC0CN0_ADBUSY__NOT_SET        0x00 ///< An ADC0 conversion is not currently in progress.  
#define ADC0CN0_ADBUSY__SET            0x10 ///< ADC0 conversion is in progress or start an ADC0   
                                            ///< conversion.                                       
                                                                                                   
#define ADC0CN0_ADINT__BMASK           0x20 ///< Conversion Complete Interrupt Flag                
#define ADC0CN0_ADINT__SHIFT           0x05 ///< Conversion Complete Interrupt Flag                
#define ADC0CN0_ADINT__NOT_SET         0x00 ///< ADC0 has not completed a conversion since the last
                                            ///< time ADINT was cleared.                           
#define ADC0CN0_ADINT__SET             0x20 ///< ADC0 completed a data conversion.                 
                                                                                                   
#define ADC0CN0_ADBMEN__BMASK          0x40 ///< Burst Mode Enable                                 
#define ADC0CN0_ADBMEN__SHIFT          0x06 ///< Burst Mode Enable                                 
#define ADC0CN0_ADBMEN__BURST_DISABLED 0x00 ///< Disable ADC0 burst mode.                          
#define ADC0CN0_ADBMEN__BURST_ENABLED  0x40 ///< Enable ADC0 burst mode.                           
                                                                                                   
#define ADC0CN0_ADEN__BMASK            0x80 ///< ADC Enable                                        
#define ADC0CN0_ADEN__SHIFT            0x07 ///< ADC Enable                                        
#define ADC0CN0_ADEN__DISABLED         0x00 ///< Disable ADC0 (low-power shutdown).                
#define ADC0CN0_ADEN__ENABLED          0x80 ///< Enable ADC0 (active and ready for data            
                                            ///< conversions).                                     
                                                                                                   
//------------------------------------------------------------------------------
// ADC0GTH Enums (ADC0 Greater-Than High Byte @ 0xC4)
//------------------------------------------------------------------------------
#define ADC0GTH_ADC0GTH__FMASK 0xFF ///< Greater-Than High Byte
#define ADC0GTH_ADC0GTH__SHIFT 0x00 ///< Greater-Than High Byte
                                                               
//------------------------------------------------------------------------------
// ADC0GTL Enums (ADC0 Greater-Than Low Byte @ 0xC3)
//------------------------------------------------------------------------------
#define ADC0GTL_ADC0GTL__FMASK 0xFF ///< Greater-Than Low Byte
#define ADC0GTL_ADC0GTL__SHIFT 0x00 ///< Greater-Than Low Byte
                                                              
//------------------------------------------------------------------------------
// ADC0H Enums (ADC0 Data Word High Byte @ 0xBE)
//------------------------------------------------------------------------------
#define ADC0H_ADC0H__FMASK 0xFF ///< Data Word High Byte
#define ADC0H_ADC0H__SHIFT 0x00 ///< Data Word High Byte
                                                        
//------------------------------------------------------------------------------
// ADC0L Enums (ADC0 Data Word Low Byte @ 0xBD)
//------------------------------------------------------------------------------
#define ADC0L_ADC0L__FMASK 0xFF ///< Data Word Low Byte
#define ADC0L_ADC0L__SHIFT 0x00 ///< Data Word Low Byte
                                                       
//------------------------------------------------------------------------------
// ADC0LTH Enums (ADC0 Less-Than High Byte @ 0xC6)
//------------------------------------------------------------------------------
#define ADC0LTH_ADC0LTH__FMASK 0xFF ///< Less-Than High Byte
#define ADC0LTH_ADC0LTH__SHIFT 0x00 ///< Less-Than High Byte
                                                            
//------------------------------------------------------------------------------
// ADC0LTL Enums (ADC0 Less-Than Low Byte @ 0xC5)
//------------------------------------------------------------------------------
#define ADC0LTL_ADC0LTL__FMASK 0xFF ///< Less-Than Low Byte
#define ADC0LTL_ADC0LTL__SHIFT 0x00 ///< Less-Than Low Byte
                                                           
//------------------------------------------------------------------------------
// ADC0MX Enums (ADC0 Multiplexer Selection @ 0xBB)
//------------------------------------------------------------------------------
#define ADC0MX_ADC0MX__FMASK   0x1F ///< AMUX0 Positive Input Selection
#define ADC0MX_ADC0MX__SHIFT   0x00 ///< AMUX0 Positive Input Selection
#define ADC0MX_ADC0MX__ADC0P0  0x00 ///< Select channel ADC0.0.        
#define ADC0MX_ADC0MX__ADC0P1  0x01 ///< Select channel ADC0.1.        
#define ADC0MX_ADC0MX__ADC0P2  0x02 ///< Select channel ADC0.2.        
#define ADC0MX_ADC0MX__ADC0P3  0x03 ///< Select channel ADC0.3.        
#define ADC0MX_ADC0MX__ADC0P4  0x04 ///< Select channel ADC0.4.        
#define ADC0MX_ADC0MX__ADC0P5  0x05 ///< Select channel ADC0.5.        
#define ADC0MX_ADC0MX__ADC0P6  0x06 ///< Select channel ADC0.6.        
#define ADC0MX_ADC0MX__ADC0P7  0x07 ///< Select channel ADC0.7.        
#define ADC0MX_ADC0MX__ADC0P8  0x08 ///< Select channel ADC0.8.        
#define ADC0MX_ADC0MX__ADC0P9  0x09 ///< Select channel ADC0.9.        
#define ADC0MX_ADC0MX__ADC0P10 0x0A ///< Select channel ADC0.10.       
#define ADC0MX_ADC0MX__ADC0P11 0x0B ///< Select channel ADC0.11.       
#define ADC0MX_ADC0MX__ADC0P12 0x0C ///< Select channel ADC0.12.       
#define ADC0MX_ADC0MX__ADC0P13 0x0D ///< Select channel ADC0.13.       
#define ADC0MX_ADC0MX__ADC0P14 0x0E ///< Select channel ADC0.14.       
#define ADC0MX_ADC0MX__ADC0P15 0x0F ///< Select channel ADC0.15.       
#define ADC0MX_ADC0MX__ADC0P16 0x10 ///< Select channel ADC0.16.       
#define ADC0MX_ADC0MX__ADC0P17 0x11 ///< Select channel ADC0.17.       
#define ADC0MX_ADC0MX__ADC0P18 0x12 ///< Select channel ADC0.18.       
#define ADC0MX_ADC0MX__ADC0P19 0x13 ///< Select channel ADC0.19.       
#define ADC0MX_ADC0MX__ADC0P20 0x14 ///< Select channel ADC0.20.       
#define ADC0MX_ADC0MX__ADC0P21 0x15 ///< Select channel ADC0.21.       
#define ADC0MX_ADC0MX__ADC0P22 0x16 ///< Select channel ADC0.22.       
#define ADC0MX_ADC0MX__TEMP    0x1B ///< Temperature Sensor.           
#define ADC0MX_ADC0MX__VDD     0x1C ///< VDD Supply Voltage.           
#define ADC0MX_ADC0MX__LDO_OUT 0x1D ///< Internal LDO regulator output.
#define ADC0MX_ADC0MX__VDD2    0x1E ///< VDD Supply Voltage.           
#define ADC0MX_ADC0MX__GND     0x1F ///< Ground.                       
                                                                       
//------------------------------------------------------------------------------
// ADC0PWR Enums (ADC0 Power Control @ 0xBA)
//------------------------------------------------------------------------------
#define ADC0PWR_ADPWR__FMASK 0x0F ///< Burst Mode Power Up Time
#define ADC0PWR_ADPWR__SHIFT 0x00 ///< Burst Mode Power Up Time
                                                               
//------------------------------------------------------------------------------
// ADC0TK Enums (ADC0 Burst Mode Track Time @ 0xBD)
//------------------------------------------------------------------------------
#define ADC0TK_ADTK__FMASK 0x3F ///< Burst Mode Tracking Time
#define ADC0TK_ADTK__SHIFT 0x00 ///< Burst Mode Tracking Time
                                                             
//------------------------------------------------------------------------------
// ACC Enums (Accumulator @ 0xE0)
//------------------------------------------------------------------------------
#define ACC_ACC__FMASK 0xFF ///< Accumulator
#define ACC_ACC__SHIFT 0x00 ///< Accumulator
                                            
//------------------------------------------------------------------------------
// B Enums (B Register @ 0xF0)
//------------------------------------------------------------------------------
#define B_B__FMASK 0xFF ///< B Register
#define B_B__SHIFT 0x00 ///< B Register
                                       
//------------------------------------------------------------------------------
// DPH Enums (Data Pointer High @ 0x83)
//------------------------------------------------------------------------------
#define DPH_DPH__FMASK 0xFF ///< Data Pointer High
#define DPH_DPH__SHIFT 0x00 ///< Data Pointer High
                                                  
//------------------------------------------------------------------------------
// DPL Enums (Data Pointer Low @ 0x82)
//------------------------------------------------------------------------------
#define DPL_DPL__FMASK 0xFF ///< Data Pointer Low
#define DPL_DPL__SHIFT 0x00 ///< Data Pointer Low
                                                 
//------------------------------------------------------------------------------
// PSW Enums (Program Status Word @ 0xD0)
//------------------------------------------------------------------------------
#define PSW_PARITY__BMASK   0x01 ///< Parity Flag                                       
#define PSW_PARITY__SHIFT   0x00 ///< Parity Flag                                       
#define PSW_PARITY__NOT_SET 0x00 ///< The sum of the 8 bits in the accumulator is even. 
#define PSW_PARITY__SET     0x01 ///< The sum of the 8 bits in the accumulator is odd.  
                                                                                        
#define PSW_F1__BMASK       0x02 ///< User Flag 1                                       
#define PSW_F1__SHIFT       0x01 ///< User Flag 1                                       
#define PSW_F1__NOT_SET     0x00 ///< Flag is not set.                                  
#define PSW_F1__SET         0x02 ///< Flag is set.                                      
                                                                                        
#define PSW_OV__BMASK       0x04 ///< Overflow Flag                                     
#define PSW_OV__SHIFT       0x02 ///< Overflow Flag                                     
#define PSW_OV__NOT_SET     0x00 ///< An overflow did not occur.                        
#define PSW_OV__SET         0x04 ///< An overflow occurred.                             
                                                                                        
#define PSW_RS__FMASK       0x18 ///< Register Bank Select                              
#define PSW_RS__SHIFT       0x03 ///< Register Bank Select                              
#define PSW_RS__BANK0       0x00 ///< Bank 0, Addresses 0x00-0x07                       
#define PSW_RS__BANK1       0x08 ///< Bank 1, Addresses 0x08-0x0F                       
#define PSW_RS__BANK2       0x10 ///< Bank 2, Addresses 0x10-0x17                       
#define PSW_RS__BANK3       0x18 ///< Bank 3, Addresses 0x18-0x1F                       
                                                                                        
#define PSW_F0__BMASK       0x20 ///< User Flag 0                                       
#define PSW_F0__SHIFT       0x05 ///< User Flag 0                                       
#define PSW_F0__NOT_SET     0x00 ///< Flag is not set.                                  
#define PSW_F0__SET         0x20 ///< Flag is set.                                      
                                                                                        
#define PSW_AC__BMASK       0x40 ///< Auxiliary Carry Flag                              
#define PSW_AC__SHIFT       0x06 ///< Auxiliary Carry Flag                              
#define PSW_AC__NOT_SET     0x00 ///< A carry into (addition) or borrow from            
                                 ///< (subtraction) the high order nibble did not occur.
#define PSW_AC__SET         0x40 ///< A carry into (addition) or borrow from            
                                 ///< (subtraction) the high order nibble occurred.     
                                                                                        
#define PSW_CY__BMASK       0x80 ///< Carry Flag                                        
#define PSW_CY__SHIFT       0x07 ///< Carry Flag                                        
#define PSW_CY__NOT_SET     0x00 ///< A carry (addition) or borrow (subtraction) did not
                                 ///< occur.                                            
#define PSW_CY__SET         0x80 ///< A carry (addition) or borrow (subtraction)        
                                 ///< occurred.                                         
                                                                                        
//------------------------------------------------------------------------------
// SP Enums (Stack Pointer @ 0x81)
//------------------------------------------------------------------------------
#define SP_SP__FMASK 0xFF ///< Stack Pointer
#define SP_SP__SHIFT 0x00 ///< Stack Pointer
                                            
//------------------------------------------------------------------------------
// CLKSEL Enums (Clock Select @ 0xA9)
//------------------------------------------------------------------------------
#define CLKSEL_CLKSL__FMASK           0x07 ///< Clock Source Select                               
#define CLKSEL_CLKSL__SHIFT           0x00 ///< Clock Source Select                               
#define CLKSEL_CLKSL__HFOSC           0x00 ///< Clock derived from the internal precision High-   
                                           ///< Frequency Oscillator.                             
#define CLKSEL_CLKSL__EXTOSC          0x01 ///< Clock derived from the External Oscillator        
                                           ///< circuit.                                          
#define CLKSEL_CLKSL__RTC             0x03 ///< Clock derived from the RTC.                       
#define CLKSEL_CLKSL__LPOSC           0x04 ///< Clock derived from the Internal Low Power         
                                           ///< Oscillator.                                       
                                                                                                  
#define CLKSEL_CLKDIV__FMASK          0x70 ///< Clock Source Divider                              
#define CLKSEL_CLKDIV__SHIFT          0x04 ///< Clock Source Divider                              
#define CLKSEL_CLKDIV__SYSCLK_DIV_1   0x00 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 1.                                             
#define CLKSEL_CLKDIV__SYSCLK_DIV_2   0x10 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 2.                                             
#define CLKSEL_CLKDIV__SYSCLK_DIV_4   0x20 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 4.                                             
#define CLKSEL_CLKDIV__SYSCLK_DIV_8   0x30 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 8.                                             
#define CLKSEL_CLKDIV__SYSCLK_DIV_16  0x40 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 16.                                            
#define CLKSEL_CLKDIV__SYSCLK_DIV_32  0x50 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 32.                                            
#define CLKSEL_CLKDIV__SYSCLK_DIV_64  0x60 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 64.                                            
#define CLKSEL_CLKDIV__SYSCLK_DIV_128 0x70 ///< SYSCLK is equal to selected clock source divided  
                                           ///< by 128.                                           
                                                                                                  
#define CLKSEL_CLKRDY__BMASK          0x80 ///< System Clock Divider Clock Ready Flag             
#define CLKSEL_CLKRDY__SHIFT          0x07 ///< System Clock Divider Clock Ready Flag             
#define CLKSEL_CLKRDY__NOT_SET        0x00 ///< The selected clock divide setting has not been    
                                           ///< applied to the system clock.                      
#define CLKSEL_CLKRDY__SET            0x80 ///< The selected clock divide setting has been applied
                                           ///< to the system clock.                              
                                                                                                  
//------------------------------------------------------------------------------
// CMP0CN0 Enums (Comparator 0 Control 0 @ 0x9B)
//------------------------------------------------------------------------------
#define CMP0CN0_CPHYN__FMASK                0x03 ///< Comparator Negative Hysteresis Control            
#define CMP0CN0_CPHYN__SHIFT                0x00 ///< Comparator Negative Hysteresis Control            
#define CMP0CN0_CPHYN__DISABLED             0x00 ///< Negative Hysteresis disabled.                     
#define CMP0CN0_CPHYN__ENABLED_MODE1        0x01 ///< Negative Hysteresis = Hysteresis 1.               
#define CMP0CN0_CPHYN__ENABLED_MODE2        0x02 ///< Negative Hysteresis = Hysteresis 2.               
#define CMP0CN0_CPHYN__ENABLED_MODE3        0x03 ///< Negative Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                        
#define CMP0CN0_CPHYP__FMASK                0x0C ///< Comparator Positive Hysteresis Control            
#define CMP0CN0_CPHYP__SHIFT                0x02 ///< Comparator Positive Hysteresis Control            
#define CMP0CN0_CPHYP__DISABLED             0x00 ///< Positive Hysteresis disabled.                     
#define CMP0CN0_CPHYP__ENABLED_MODE1        0x04 ///< Positive Hysteresis = Hysteresis 1.               
#define CMP0CN0_CPHYP__ENABLED_MODE2        0x08 ///< Positive Hysteresis = Hysteresis 2.               
#define CMP0CN0_CPHYP__ENABLED_MODE3        0x0C ///< Positive Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                        
#define CMP0CN0_CPFIF__BMASK                0x10 ///< Comparator Falling-Edge Flag                      
#define CMP0CN0_CPFIF__SHIFT                0x04 ///< Comparator Falling-Edge Flag                      
#define CMP0CN0_CPFIF__NOT_SET              0x00 ///< No comparator falling edge has occurred since this
                                                 ///< flag was last cleared.                            
#define CMP0CN0_CPFIF__FALLING_EDGE         0x10 ///< Comparator falling edge has occurred.             
                                                                                                        
#define CMP0CN0_CPRIF__BMASK                0x20 ///< Comparator Rising-Edge Flag                       
#define CMP0CN0_CPRIF__SHIFT                0x05 ///< Comparator Rising-Edge Flag                       
#define CMP0CN0_CPRIF__NOT_SET              0x00 ///< No comparator rising edge has occurred since this 
                                                 ///< flag was last cleared.                            
#define CMP0CN0_CPRIF__RISING_EDGE          0x20 ///< Comparator rising edge has occurred.              
                                                                                                        
#define CMP0CN0_CPOUT__BMASK                0x40 ///< Comparator Output State Flag                      
#define CMP0CN0_CPOUT__SHIFT                0x06 ///< Comparator Output State Flag                      
#define CMP0CN0_CPOUT__POS_LESS_THAN_NEG    0x00 ///< Voltage on CP0P < CP0N.                           
#define CMP0CN0_CPOUT__POS_GREATER_THAN_NEG 0x40 ///< Voltage on CP0P > CP0N.                           
                                                                                                        
#define CMP0CN0_CPEN__BMASK                 0x80 ///< Comparator Enable                                 
#define CMP0CN0_CPEN__SHIFT                 0x07 ///< Comparator Enable                                 
#define CMP0CN0_CPEN__DISABLED              0x00 ///< Comparator disabled.                              
#define CMP0CN0_CPEN__ENABLED               0x80 ///< Comparator enabled.                               
                                                                                                        
//------------------------------------------------------------------------------
// CMP0MD Enums (Comparator 0 Mode @ 0x9D)
//------------------------------------------------------------------------------
#define CMP0MD_CPMD__FMASK              0x03 ///< Comparator Mode Select                      
#define CMP0MD_CPMD__SHIFT              0x00 ///< Comparator Mode Select                      
#define CMP0MD_CPMD__MODE0              0x00 ///< Mode 0 (Fastest Response Time, Highest Power
                                             ///< Consumption)                                
#define CMP0MD_CPMD__MODE1              0x01 ///< Mode 1                                      
#define CMP0MD_CPMD__MODE2              0x02 ///< Mode 2                                      
#define CMP0MD_CPMD__MODE3              0x03 ///< Mode 3 (Slowest Response Time, Lowest Power 
                                             ///< Consumption)                                
                                                                                              
#define CMP0MD_CPFIE__BMASK             0x10 ///< Comparator Falling-Edge Interrupt Enable    
#define CMP0MD_CPFIE__SHIFT             0x04 ///< Comparator Falling-Edge Interrupt Enable    
#define CMP0MD_CPFIE__FALL_INT_DISABLED 0x00 ///< Comparator falling-edge interrupt disabled. 
#define CMP0MD_CPFIE__FALL_INT_ENABLED  0x10 ///< Comparator falling-edge interrupt enabled.  
                                                                                              
#define CMP0MD_CPRIE__BMASK             0x20 ///< Comparator Rising-Edge Interrupt Enable     
#define CMP0MD_CPRIE__SHIFT             0x05 ///< Comparator Rising-Edge Interrupt Enable     
#define CMP0MD_CPRIE__RISE_INT_DISABLED 0x00 ///< Comparator rising-edge interrupt disabled.  
#define CMP0MD_CPRIE__RISE_INT_ENABLED  0x20 ///< Comparator rising-edge interrupt enabled.   
                                                                                              
//------------------------------------------------------------------------------
// CMP0MX Enums (Comparator 0 Multiplexer Selection @ 0x9F)
//------------------------------------------------------------------------------
#define CMP0MX_CMXP__FMASK      0x0F ///< Comparator Positive Input MUX Selection
#define CMP0MX_CMXP__SHIFT      0x00 ///< Comparator Positive Input MUX Selection
#define CMP0MX_CMXP__CMP0P0     0x00 ///< External pin CMP0P.0.                  
#define CMP0MX_CMXP__CMP0P1     0x01 ///< External pin CMP0P.1.                  
#define CMP0MX_CMXP__CMP0P2     0x02 ///< External pin CMP0P.2.                  
#define CMP0MX_CMXP__CMP0P3     0x03 ///< External pin CMP0P.3.                  
#define CMP0MX_CMXP__CMP0P4     0x04 ///< External pin CMP0P.4.                  
#define CMP0MX_CMXP__CMP0P5     0x05 ///< External pin CMP0P.5.                  
#define CMP0MX_CMXP__CMP0P6     0x06 ///< External pin CMP0P.6.                  
#define CMP0MX_CMXP__CMP0P7     0x07 ///< External pin CMP0P.7.                  
#define CMP0MX_CMXP__CMP0P8     0x08 ///< External pin CMP0P.8.                  
#define CMP0MX_CMXP__CMP0P9     0x09 ///< External pin CMP0P.9.                  
#define CMP0MX_CMXP__CMP0P10    0x0A ///< External pin CMP0P.10.                 
#define CMP0MX_CMXP__CMP0P11    0x0B ///< External pin CMP0P.11.                 
#define CMP0MX_CMXP__CS_COMPARE 0x0C ///< Capacitive Sense Compare.              
#define CMP0MX_CMXP__VDD_DIV_2  0x0D ///< VDD divided by 2.                      
#define CMP0MX_CMXP__VDD        0x0E ///< VDD Supply Voltage.                    
#define CMP0MX_CMXP__VDD2       0x0F ///< VDD Supply Voltage.                    
                                                                                 
#define CMP0MX_CMXN__FMASK      0xF0 ///< Comparator Negative Input MUX Selection
#define CMP0MX_CMXN__SHIFT      0x04 ///< Comparator Negative Input MUX Selection
#define CMP0MX_CMXN__CMP0N0     0x00 ///< External pin CMP0N.0.                  
#define CMP0MX_CMXN__CMP0N1     0x10 ///< External pin CMP0N.1.                  
#define CMP0MX_CMXN__CMP0N2     0x20 ///< External pin CMP0N.2.                  
#define CMP0MX_CMXN__CMP0N3     0x30 ///< External pin CMP0N.3.                  
#define CMP0MX_CMXN__CMP0N4     0x40 ///< External pin CMP0N.4.                  
#define CMP0MX_CMXN__CMP0N5     0x50 ///< External pin CMP0N.5.                  
#define CMP0MX_CMXN__CMP0N6     0x60 ///< External pin CMP0N.6.                  
#define CMP0MX_CMXN__CMP0N7     0x70 ///< External pin CMP0N.7.                  
#define CMP0MX_CMXN__CMP0N8     0x80 ///< External pin CMP0N.8.                  
#define CMP0MX_CMXN__CMP0N9     0x90 ///< External pin CMP0N.9.                  
#define CMP0MX_CMXN__CMP0N10    0xA0 ///< External pin CMP0N.10.                 
#define CMP0MX_CMXN__CS_COMPARE 0xC0 ///< Capacitive Sense Compare.              
#define CMP0MX_CMXN__VDD_DIV_2  0xD0 ///< VDD divided by 2.                      
#define CMP0MX_CMXN__LDO_OUT    0xE0 ///< Internal LDO output.                   
#define CMP0MX_CMXN__GND        0xF0 ///< Ground.                                
                                                                                 
//------------------------------------------------------------------------------
// CMP1CN0 Enums (Comparator 1 Control 0 @ 0x9A)
//------------------------------------------------------------------------------
#define CMP1CN0_CPHYN__FMASK                0x03 ///< Comparator Negative Hysteresis Control            
#define CMP1CN0_CPHYN__SHIFT                0x00 ///< Comparator Negative Hysteresis Control            
#define CMP1CN0_CPHYN__DISABLED             0x00 ///< Negative Hysteresis disabled.                     
#define CMP1CN0_CPHYN__ENABLED_MODE1        0x01 ///< Negative Hysteresis = Hysteresis 1.               
#define CMP1CN0_CPHYN__ENABLED_MODE2        0x02 ///< Negative Hysteresis = Hysteresis 2.               
#define CMP1CN0_CPHYN__ENABLED_MODE3        0x03 ///< Negative Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                        
#define CMP1CN0_CPHYP__FMASK                0x0C ///< Comparator Positive Hysteresis Control            
#define CMP1CN0_CPHYP__SHIFT                0x02 ///< Comparator Positive Hysteresis Control            
#define CMP1CN0_CPHYP__DISABLED             0x00 ///< Positive Hysteresis disabled.                     
#define CMP1CN0_CPHYP__ENABLED_MODE1        0x04 ///< Positive Hysteresis = Hysteresis 1.               
#define CMP1CN0_CPHYP__ENABLED_MODE2        0x08 ///< Positive Hysteresis = Hysteresis 2.               
#define CMP1CN0_CPHYP__ENABLED_MODE3        0x0C ///< Positive Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                        
#define CMP1CN0_CPFIF__BMASK                0x10 ///< Comparator Falling-Edge Flag                      
#define CMP1CN0_CPFIF__SHIFT                0x04 ///< Comparator Falling-Edge Flag                      
#define CMP1CN0_CPFIF__NOT_SET              0x00 ///< No comparator falling edge has occurred since this
                                                 ///< flag was last cleared.                            
#define CMP1CN0_CPFIF__FALLING_EDGE         0x10 ///< Comparator falling edge has occurred.             
                                                                                                        
#define CMP1CN0_CPRIF__BMASK                0x20 ///< Comparator Rising-Edge Flag                       
#define CMP1CN0_CPRIF__SHIFT                0x05 ///< Comparator Rising-Edge Flag                       
#define CMP1CN0_CPRIF__NOT_SET              0x00 ///< No comparator rising edge has occurred since this 
                                                 ///< flag was last cleared.                            
#define CMP1CN0_CPRIF__RISING_EDGE          0x20 ///< Comparator rising edge has occurred.              
                                                                                                        
#define CMP1CN0_CPOUT__BMASK                0x40 ///< Comparator Output State Flag                      
#define CMP1CN0_CPOUT__SHIFT                0x06 ///< Comparator Output State Flag                      
#define CMP1CN0_CPOUT__POS_LESS_THAN_NEG    0x00 ///< Voltage on CP1P < CP1N.                           
#define CMP1CN0_CPOUT__POS_GREATER_THAN_NEG 0x40 ///< Voltage on CP1P > CP1N.                           
                                                                                                        
#define CMP1CN0_CPEN__BMASK                 0x80 ///< Comparator Enable                                 
#define CMP1CN0_CPEN__SHIFT                 0x07 ///< Comparator Enable                                 
#define CMP1CN0_CPEN__DISABLED              0x00 ///< Comparator disabled.                              
#define CMP1CN0_CPEN__ENABLED               0x80 ///< Comparator enabled.                               
                                                                                                        
//------------------------------------------------------------------------------
// CMP1MD Enums (Comparator 1 Mode @ 0x9C)
//------------------------------------------------------------------------------
#define CMP1MD_CPMD__FMASK              0x03 ///< Comparator Mode Select                      
#define CMP1MD_CPMD__SHIFT              0x00 ///< Comparator Mode Select                      
#define CMP1MD_CPMD__MODE0              0x00 ///< Mode 0 (Fastest Response Time, Highest Power
                                             ///< Consumption)                                
#define CMP1MD_CPMD__MODE1              0x01 ///< Mode 1                                      
#define CMP1MD_CPMD__MODE2              0x02 ///< Mode 2                                      
#define CMP1MD_CPMD__MODE3              0x03 ///< Mode 3 (Slowest Response Time, Lowest Power 
                                             ///< Consumption)                                
                                                                                              
#define CMP1MD_CPFIE__BMASK             0x10 ///< Comparator Falling-Edge Interrupt Enable    
#define CMP1MD_CPFIE__SHIFT             0x04 ///< Comparator Falling-Edge Interrupt Enable    
#define CMP1MD_CPFIE__FALL_INT_DISABLED 0x00 ///< Comparator falling-edge interrupt disabled. 
#define CMP1MD_CPFIE__FALL_INT_ENABLED  0x10 ///< Comparator falling-edge interrupt enabled.  
                                                                                              
#define CMP1MD_CPRIE__BMASK             0x20 ///< Comparator Rising-Edge Interrupt Enable     
#define CMP1MD_CPRIE__SHIFT             0x05 ///< Comparator Rising-Edge Interrupt Enable     
#define CMP1MD_CPRIE__RISE_INT_DISABLED 0x00 ///< Comparator rising-edge interrupt disabled.  
#define CMP1MD_CPRIE__RISE_INT_ENABLED  0x20 ///< Comparator rising-edge interrupt enabled.   
                                                                                              
//------------------------------------------------------------------------------
// CMP1MX Enums (Comparator 1 Multiplexer Selection @ 0x9E)
//------------------------------------------------------------------------------
#define CMP1MX_CMXP__FMASK      0x0F ///< Comparator Positive Input MUX Selection
#define CMP1MX_CMXP__SHIFT      0x00 ///< Comparator Positive Input MUX Selection
#define CMP1MX_CMXP__CMP1P0     0x00 ///< External pin CMP1P.0.                  
#define CMP1MX_CMXP__CMP1P1     0x01 ///< External pin CMP1P.1.                  
#define CMP1MX_CMXP__CMP1P2     0x02 ///< External pin CMP1P.2.                  
#define CMP1MX_CMXP__CMP1P3     0x03 ///< External pin CMP1P.3.                  
#define CMP1MX_CMXP__CMP1P4     0x04 ///< External pin CMP1P.4.                  
#define CMP1MX_CMXP__CMP1P5     0x05 ///< External pin CMP1P.5.                  
#define CMP1MX_CMXP__CMP1P6     0x06 ///< External pin CMP1P.6.                  
#define CMP1MX_CMXP__CMP1P7     0x07 ///< External pin CMP1P.7.                  
#define CMP1MX_CMXP__CMP1P8     0x08 ///< External pin CMP1P.8.                  
#define CMP1MX_CMXP__CMP1P9     0x09 ///< External pin CMP1P.9.                  
#define CMP1MX_CMXP__CMP1P10    0x0A ///< External pin CMP1P.10.                 
#define CMP1MX_CMXP__CMP1P11    0x0B ///< External pin CMP1P.11.                 
#define CMP1MX_CMXP__CS_COMPARE 0x0C ///< Capacitive Sense Compare.              
#define CMP1MX_CMXP__VDD_DIV_2  0x0D ///< VDD divided by 2.                      
#define CMP1MX_CMXP__VDD        0x0E ///< VDD Supply Voltage.                    
#define CMP1MX_CMXP__VDD2       0x0F ///< VDD Supply Voltage.                    
                                                                                 
#define CMP1MX_CMXN__FMASK      0xF0 ///< Comparator Negative Input MUX Selection
#define CMP1MX_CMXN__SHIFT      0x04 ///< Comparator Negative Input MUX Selection
#define CMP1MX_CMXN__CMP1N0     0x00 ///< External pin CMP1N.0.                  
#define CMP1MX_CMXN__CMP1N1     0x10 ///< External pin CMP1N.1.                  
#define CMP1MX_CMXN__CMP1N2     0x20 ///< External pin CMP1N.2.                  
#define CMP1MX_CMXN__CMP1N3     0x30 ///< External pin CMP1N.3.                  
#define CMP1MX_CMXN__CMP1N4     0x40 ///< External pin CMP1N.4.                  
#define CMP1MX_CMXN__CMP1N5     0x50 ///< External pin CMP1N.5.                  
#define CMP1MX_CMXN__CMP1N6     0x60 ///< External pin CMP1N.6.                  
#define CMP1MX_CMXN__CMP1N7     0x70 ///< External pin CMP1N.7.                  
#define CMP1MX_CMXN__CMP1N8     0x80 ///< External pin CMP1N.8.                  
#define CMP1MX_CMXN__CMP1N9     0x90 ///< External pin CMP1N.9.                  
#define CMP1MX_CMXN__CMP1N10    0xA0 ///< External pin CMP1N.10.                 
#define CMP1MX_CMXN__CS_COMPARE 0xC0 ///< Capacitive Sense Compare.              
#define CMP1MX_CMXN__VDD_DIV_2  0xD0 ///< VDD divided by 2.                      
#define CMP1MX_CMXN__LDO_OUT    0xE0 ///< Internal LDO output.                   
#define CMP1MX_CMXN__GND        0xF0 ///< Ground.                                
                                                                                 
//------------------------------------------------------------------------------
// CRC0AUTO Enums (CRC0 Automatic Control @ 0x96)
//------------------------------------------------------------------------------
#define CRC0AUTO_CRCST__FMASK     0x3F ///< Automatic CRC Calculation Starting Block  
#define CRC0AUTO_CRCST__SHIFT     0x00 ///< Automatic CRC Calculation Starting Block  
                                                                                      
#define CRC0AUTO_CRCDN__BMASK     0x40 ///< Automatic CRC Calculation Complete        
#define CRC0AUTO_CRCDN__SHIFT     0x06 ///< Automatic CRC Calculation Complete        
#define CRC0AUTO_CRCDN__NOT_SET   0x00 ///< A CRC calculation is in progress.         
#define CRC0AUTO_CRCDN__SET       0x40 ///< A CRC calculation is not in progress.     
                                                                                      
#define CRC0AUTO_AUTOEN__BMASK    0x80 ///< Automatic CRC Calculation Enable          
#define CRC0AUTO_AUTOEN__SHIFT    0x07 ///< Automatic CRC Calculation Enable          
#define CRC0AUTO_AUTOEN__DISABLED 0x00 ///< Disable automatic CRC operations on flash.
#define CRC0AUTO_AUTOEN__ENABLED  0x80 ///< Enable automatic CRC operations on flash. 
                                                                                      
//------------------------------------------------------------------------------
// CRC0CN0 Enums (CRC0 Control 0 @ 0x92)
//------------------------------------------------------------------------------
#define CRC0CN0_CRCPNT__FMASK        0x03 ///< CRC Result Pointer                                
#define CRC0CN0_CRCPNT__SHIFT        0x00 ///< CRC Result Pointer                                
#define CRC0CN0_CRCPNT__ACCESS_B0    0x00 ///< CRC0DAT accesses bits 7-0 of the 16-bit or 32-bit 
                                          ///< CRC result.                                       
#define CRC0CN0_CRCPNT__ACCESS_B1    0x01 ///< CRC0DAT accesses bits 15-8 of the 16-bit or 32-bit
                                          ///< CRC result.                                       
#define CRC0CN0_CRCPNT__ACCESS_B2    0x02 ///< CRC0DAT accesses bits 7-0 of the 16-bit or bits   
                                          ///< 23-15 of the 32-bit CRC result.                   
#define CRC0CN0_CRCPNT__ACCESS_B3    0x03 ///< CRC0DAT accesses bits 15-8 of the 16-bit or bits  
                                          ///< 31-24 of the 32-bit CRC result.                   
                                                                                                 
#define CRC0CN0_CRCVAL__BMASK        0x04 ///< CRC Initialization Value                          
#define CRC0CN0_CRCVAL__SHIFT        0x02 ///< CRC Initialization Value                          
#define CRC0CN0_CRCVAL__SET_ZEROES   0x00 ///< CRC result is set to 0x00000000 on write of 1 to  
                                          ///< CRCINIT.                                          
#define CRC0CN0_CRCVAL__SET_ONES     0x04 ///< CRC result is set to 0xFFFFFFFF on write of 1 to  
                                          ///< CRCINIT.                                          
                                                                                                 
#define CRC0CN0_CRCINIT__BMASK       0x08 ///< CRC Initialization Enable                         
#define CRC0CN0_CRCINIT__SHIFT       0x03 ///< CRC Initialization Enable                         
#define CRC0CN0_CRCINIT__DO_NOT_INIT 0x00 ///< Do not initialize the CRC result.                 
#define CRC0CN0_CRCINIT__INIT        0x08 ///< Initialize the CRC result to ones or zeroes vased 
                                          ///< on the value of CRCVAL.                           
                                                                                                 
#define CRC0CN0_POLYSEL__BMASK       0x10 ///< CRC Polynomial Select Bit                         
#define CRC0CN0_POLYSEL__SHIFT       0x04 ///< CRC Polynomial Select Bit                         
#define CRC0CN0_POLYSEL__32_BIT      0x00 ///< Use the 32-bit polynomial 0x04C11DB7 for          
                                          ///< calculating the CRC result.                       
#define CRC0CN0_POLYSEL__16_BIT      0x10 ///< Use the 16-bit polynomial 0x1021 for calculating  
                                          ///< the CRC result.                                   
                                                                                                 
//------------------------------------------------------------------------------
// CRC0CNT Enums (CRC0 Automatic Flash Sector Count @ 0x97)
//------------------------------------------------------------------------------
#define CRC0CNT_CRCCNT__FMASK 0x3F ///< Automatic CRC Calculation Block Count
#define CRC0CNT_CRCCNT__SHIFT 0x00 ///< Automatic CRC Calculation Block Count
                                                                             
//------------------------------------------------------------------------------
// CRC0DAT Enums (CRC0 Data Output @ 0x91)
//------------------------------------------------------------------------------
#define CRC0DAT_CRC0DAT__FMASK 0xFF ///< CRC Data Output
#define CRC0DAT_CRC0DAT__SHIFT 0x00 ///< CRC Data Output
                                                        
//------------------------------------------------------------------------------
// CRC0FLIP Enums (CRC0 Bit Flip @ 0x95)
//------------------------------------------------------------------------------
#define CRC0FLIP_CRC0FLIP__FMASK 0xFF ///< CRC0 Bit Flip
#define CRC0FLIP_CRC0FLIP__SHIFT 0x00 ///< CRC0 Bit Flip
                                                        
//------------------------------------------------------------------------------
// CRC0IN Enums (CRC0 Data Input @ 0x93)
//------------------------------------------------------------------------------
#define CRC0IN_CRC0IN__FMASK 0xFF ///< CRC Data Input
#define CRC0IN_CRC0IN__SHIFT 0x00 ///< CRC Data Input
                                                     
//------------------------------------------------------------------------------
// IT01CF Enums (INT0/INT1 Configuration @ 0xE4)
//------------------------------------------------------------------------------
#define IT01CF_IN0SL__FMASK       0x07 ///< INT0 Port Pin Selection   
#define IT01CF_IN0SL__SHIFT       0x00 ///< INT0 Port Pin Selection   
#define IT01CF_IN0SL__P0_0        0x00 ///< Select P0.0.              
#define IT01CF_IN0SL__P0_1        0x01 ///< Select P0.1.              
#define IT01CF_IN0SL__P0_2        0x02 ///< Select P0.2.              
#define IT01CF_IN0SL__P0_3        0x03 ///< Select P0.3.              
#define IT01CF_IN0SL__P0_4        0x04 ///< Select P0.4.              
#define IT01CF_IN0SL__P0_5        0x05 ///< Select P0.5.              
#define IT01CF_IN0SL__P0_6        0x06 ///< Select P0.6.              
#define IT01CF_IN0SL__P0_7        0x07 ///< Select P0.7.              
                                                                      
#define IT01CF_IN0PL__BMASK       0x08 ///< INT0 Polarity             
#define IT01CF_IN0PL__SHIFT       0x03 ///< INT0 Polarity             
#define IT01CF_IN0PL__ACTIVE_LOW  0x00 ///< INT0 input is active low. 
#define IT01CF_IN0PL__ACTIVE_HIGH 0x08 ///< INT0 input is active high.
                                                                      
#define IT01CF_IN1SL__FMASK       0x70 ///< INT1 Port Pin Selection   
#define IT01CF_IN1SL__SHIFT       0x04 ///< INT1 Port Pin Selection   
#define IT01CF_IN1SL__P0_0        0x00 ///< Select P0.0.              
#define IT01CF_IN1SL__P0_1        0x10 ///< Select P0.1.              
#define IT01CF_IN1SL__P0_2        0x20 ///< Select P0.2.              
#define IT01CF_IN1SL__P0_3        0x30 ///< Select P0.3.              
#define IT01CF_IN1SL__P0_4        0x40 ///< Select P0.4.              
#define IT01CF_IN1SL__P0_5        0x50 ///< Select P0.5.              
#define IT01CF_IN1SL__P0_6        0x60 ///< Select P0.6.              
#define IT01CF_IN1SL__P0_7        0x70 ///< Select P0.7.              
                                                                      
#define IT01CF_IN1PL__BMASK       0x80 ///< INT1 Polarity             
#define IT01CF_IN1PL__SHIFT       0x07 ///< INT1 Polarity             
#define IT01CF_IN1PL__ACTIVE_LOW  0x00 ///< INT1 input is active low. 
#define IT01CF_IN1PL__ACTIVE_HIGH 0x80 ///< INT1 input is active high.
                                                                      
//------------------------------------------------------------------------------
// XOSC0CN Enums (External Oscillator Control @ 0xB1)
//------------------------------------------------------------------------------
#define XOSC0CN_XFCN__FMASK           0x07 ///< External Oscillator Frequency Control           
#define XOSC0CN_XFCN__SHIFT           0x00 ///< External Oscillator Frequency Control           
#define XOSC0CN_XFCN__MODE0           0x00 ///< Select external oscillator mode 0: Crystal      
                                           ///< frequency <= 20 kHz, RC/C frequency <= 25 kHz, C
                                           ///< mode K factor = 0.87.                           
#define XOSC0CN_XFCN__MODE1           0x01 ///< Select external oscillator mode 1: 20 kHz <     
                                           ///< Crystal frequency <= 58 kHz, 25 kHz < RC/C      
                                           ///< frequency <= 50 kHz, C mode K factor = 2.6.     
#define XOSC0CN_XFCN__MODE2           0x02 ///< Select external oscillator mode 2: 58 kHz <     
                                           ///< Crystal frequency <= 155 kHz, 50 kHz < RC/C     
                                           ///< frequency <= 100 kHz, C mode K factor = 7.7.    
#define XOSC0CN_XFCN__MODE3           0x03 ///< Select external oscillator mode 3: 155 kHz <    
                                           ///< Crystal frequency <= 415 kHz, 100 kHz < RC/C    
                                           ///< frequency <= 200 kHz, C mode K factor = 22.     
#define XOSC0CN_XFCN__MODE4           0x04 ///< Select external oscillator mode 4: 415 kHz <    
                                           ///< Crystal frequency <= 1.1 MHz, 200 kHz < RC/C    
                                           ///< frequency <= 400 kHz, C mode K factor = 65.     
#define XOSC0CN_XFCN__MODE5           0x05 ///< Select external oscillator mode 5: 1.1 MHz <    
                                           ///< Crystal frequency <= 3.1 MHz, 400 kHz < RC/C    
                                           ///< frequency <= 800 kHz, C mode K factor = 180.    
#define XOSC0CN_XFCN__MODE6           0x06 ///< Select external oscillator mode 6: 3.1 MHz <    
                                           ///< Crystal frequency <= 8.2 kHz, 800 kHz < RC/C    
                                           ///< frequency <= 1.6 MHz, C mode K factor = 664.    
#define XOSC0CN_XFCN__MODE7           0x07 ///< Select external oscillator mode 7: 8.2 MHz <    
                                           ///< Crystal frequency <= 25 MHz, 1.6 MHz < RC/C     
                                           ///< frequency <= 3.2 MHz, C mode K factor = 1590.   
                                                                                                
#define XOSC0CN_XOSCMD__FMASK         0x70 ///< External Oscillator Mode                        
#define XOSC0CN_XOSCMD__SHIFT         0x04 ///< External Oscillator Mode                        
#define XOSC0CN_XOSCMD__DISABLED      0x00 ///< External Oscillator circuit disabled.           
#define XOSC0CN_XOSCMD__CMOS          0x20 ///< External CMOS Clock Mode.                       
#define XOSC0CN_XOSCMD__CMOS_DIV_2    0x30 ///< External CMOS Clock Mode with divide by 2 stage.
#define XOSC0CN_XOSCMD__RC            0x40 ///< RC Oscillator Mode.                             
#define XOSC0CN_XOSCMD__C             0x50 ///< Capacitor Oscillator Mode.                      
#define XOSC0CN_XOSCMD__CRYSTAL       0x60 ///< Crystal Oscillator Mode.                        
#define XOSC0CN_XOSCMD__CRYSTAL_DIV_2 0x70 ///< Crystal Oscillator Mode with divide by 2 stage. 
                                                                                                
#define XOSC0CN_XCLKVLD__BMASK        0x80 ///< External Oscillator Valid Flag                  
#define XOSC0CN_XCLKVLD__SHIFT        0x07 ///< External Oscillator Valid Flag                  
#define XOSC0CN_XCLKVLD__NOT_SET      0x00 ///< External Oscillator is unused or not yet stable.
#define XOSC0CN_XCLKVLD__SET          0x80 ///< External Oscillator is running and stable.      
                                                                                                
//------------------------------------------------------------------------------
// FLKEY Enums (Flash Lock and Key @ 0xB7)
//------------------------------------------------------------------------------
#define FLKEY_FLKEY__FMASK    0xFF ///< Flash Lock and Key Register                       
#define FLKEY_FLKEY__SHIFT    0x00 ///< Flash Lock and Key Register                       
#define FLKEY_FLKEY__LOCKED   0x00 ///< Flash is write/erase locked.                      
#define FLKEY_FLKEY__FIRST    0x01 ///< The first key code has been written (0xA5).       
#define FLKEY_FLKEY__UNLOCKED 0x02 ///< Flash is unlocked (writes/erases allowed).        
#define FLKEY_FLKEY__DISABLED 0x03 ///< Flash writes/erases disabled until the next reset.
#define FLKEY_FLKEY__KEY1     0xA5 ///< Flash writes and erases are enabled by writing    
                                   ///< 0xA5 followed by 0xF1 to the FLKEY register.      
#define FLKEY_FLKEY__KEY2     0xF1 ///< Flash writes and erases are enabled by writing    
                                   ///< 0xA5 followed by 0xF1 to the FLKEY register.      
                                                                                          
//------------------------------------------------------------------------------
// FLSCL Enums (Flash Scale @ 0xB6)
//------------------------------------------------------------------------------
#define FLSCL_BYPASS__BMASK    0x40 ///< Flash Read Timing One-Shot Bypass                
#define FLSCL_BYPASS__SHIFT    0x06 ///< Flash Read Timing One-Shot Bypass                
#define FLSCL_BYPASS__ONE_SHOT 0x00 ///< The one-shot determines the flash read time. This
                                    ///< setting should be used for operating frequencies 
                                    ///< less than 14 MHz.                                
#define FLSCL_BYPASS__SYSCLK   0x40 ///< The system clock determines the flash read time. 
                                    ///< This setting should be used for frequencies      
                                    ///< greater than 14 MHz.                             
                                                                                          
//------------------------------------------------------------------------------
// PSCTL Enums (Program Store Control @ 0x8F)
//------------------------------------------------------------------------------
#define PSCTL_PSWE__BMASK               0x01 ///< Program Store Write Enable                      
#define PSCTL_PSWE__SHIFT               0x00 ///< Program Store Write Enable                      
#define PSCTL_PSWE__WRITE_DISABLED      0x00 ///< Writes to flash program memory disabled.        
#define PSCTL_PSWE__WRITE_ENABLED       0x01 ///< Writes to flash program memory enabled; the MOVX
                                             ///< write instruction targets flash memory.         
                                                                                                  
#define PSCTL_PSEE__BMASK               0x02 ///< Program Store Erase Enable                      
#define PSCTL_PSEE__SHIFT               0x01 ///< Program Store Erase Enable                      
#define PSCTL_PSEE__ERASE_DISABLED      0x00 ///< Flash program memory erasure disabled.          
#define PSCTL_PSEE__ERASE_ENABLED       0x02 ///< Flash program memory erasure enabled.           
                                                                                                  
#define PSCTL_SFLE__BMASK               0x04 ///< Scratchpad Flash Memory Access Enable           
#define PSCTL_SFLE__SHIFT               0x02 ///< Scratchpad Flash Memory Access Enable           
#define PSCTL_SFLE__SCRATCHPAD_DISABLED 0x00 ///< Flash access from user software directed to the 
                                             ///< Program/Data Flash sector.                      
#define PSCTL_SFLE__SCRATCHPAD_ENABLED  0x04 ///< Flash access from user software directed to the 
                                             ///< Scratchpad sector.                              
                                                                                                  
//------------------------------------------------------------------------------
// HFO0CAL Enums (High Frequency Oscillator Calibration @ 0xB3)
//------------------------------------------------------------------------------
#define HFO0CAL_HFO0CAL__FMASK 0x7F ///< Oscillator Calibration                   
#define HFO0CAL_HFO0CAL__SHIFT 0x00 ///< Oscillator Calibration                   
                                                                                  
#define HFO0CAL_SSE__BMASK     0x80 ///< Spread Spectrum Enable                   
#define HFO0CAL_SSE__SHIFT     0x07 ///< Spread Spectrum Enable                   
#define HFO0CAL_SSE__DISABLED  0x00 ///< Spread Spectrum clock dithering disabled.
#define HFO0CAL_SSE__ENABLED   0x80 ///< Spread Spectrum clock dithering enabled. 
                                                                                  
//------------------------------------------------------------------------------
// HFO0CN Enums (High Frequency Oscillator Control @ 0xB2)
//------------------------------------------------------------------------------
#define HFO0CN_IFRDY__BMASK     0x40 ///< Internal Oscillator Frequency Ready Flag       
#define HFO0CN_IFRDY__SHIFT     0x06 ///< Internal Oscillator Frequency Ready Flag       
#define HFO0CN_IFRDY__NOT_SET   0x00 ///< High Frequency Oscillator is not running at its
                                     ///< programmed frequency.                          
#define HFO0CN_IFRDY__SET       0x40 ///< High Frequency Oscillator is running at its    
                                     ///< programmed frequency.                          
                                                                                         
#define HFO0CN_IOSCEN__BMASK    0x80 ///< High Frequency Oscillator Enable               
#define HFO0CN_IOSCEN__SHIFT    0x07 ///< High Frequency Oscillator Enable               
#define HFO0CN_IOSCEN__DISABLED 0x00 ///< High Frequency Oscillator disabled.            
#define HFO0CN_IOSCEN__ENABLED  0x80 ///< High Frequency Oscillator enabled.             
                                                                                         
//------------------------------------------------------------------------------
// EIE1 Enums (Extended Interrupt Enable 1 @ 0xE6)
//------------------------------------------------------------------------------
#define EIE1_ESMB0__BMASK     0x01 ///< SMBus (SMB0) Interrupt Enable                     
#define EIE1_ESMB0__SHIFT     0x00 ///< SMBus (SMB0) Interrupt Enable                     
#define EIE1_ESMB0__DISABLED  0x00 ///< Disable all SMB0 interrupts.                      
#define EIE1_ESMB0__ENABLED   0x01 ///< Enable interrupt requests generated by SMB0.      
                                                                                          
#define EIE1_ERTC0A__BMASK    0x02 ///< RTC Alarm Interrupt Enable                        
#define EIE1_ERTC0A__SHIFT    0x01 ///< RTC Alarm Interrupt Enable                        
#define EIE1_ERTC0A__DISABLED 0x00 ///< Disable RTC Alarm interrupts.                     
#define EIE1_ERTC0A__ENABLED  0x02 ///< Enable interrupt requests generated by a RTC      
                                   ///< Alarm.                                            
                                                                                          
#define EIE1_EWADC0__BMASK    0x04 ///< ADC0 Window Comparison Interrupt Enable           
#define EIE1_EWADC0__SHIFT    0x02 ///< ADC0 Window Comparison Interrupt Enable           
#define EIE1_EWADC0__DISABLED 0x00 ///< Disable ADC0 Window Comparison interrupt.         
#define EIE1_EWADC0__ENABLED  0x04 ///< Enable interrupt requests generated by ADC0 Window
                                   ///< Compare flag (ADWINT).                            
                                                                                          
#define EIE1_EADC0__BMASK     0x08 ///< ADC0 Conversion Complete Interrupt Enable         
#define EIE1_EADC0__SHIFT     0x03 ///< ADC0 Conversion Complete Interrupt Enable         
#define EIE1_EADC0__DISABLED  0x00 ///< Disable ADC0 Conversion Complete interrupt.       
#define EIE1_EADC0__ENABLED   0x08 ///< Enable interrupt requests generated by the ADINT  
                                   ///< flag.                                             
                                                                                          
#define EIE1_EPCA0__BMASK     0x10 ///< Programmable Counter Array (PCA0) Interrupt Enable
#define EIE1_EPCA0__SHIFT     0x04 ///< Programmable Counter Array (PCA0) Interrupt Enable
#define EIE1_EPCA0__DISABLED  0x00 ///< Disable all PCA0 interrupts.                      
#define EIE1_EPCA0__ENABLED   0x10 ///< Enable interrupt requests generated by PCA0.      
                                                                                          
#define EIE1_ECP0__BMASK      0x20 ///< Comparator0 (CP0) Interrupt Enable                
#define EIE1_ECP0__SHIFT      0x05 ///< Comparator0 (CP0) Interrupt Enable                
#define EIE1_ECP0__DISABLED   0x00 ///< Disable CP0 interrupts.                           
#define EIE1_ECP0__ENABLED    0x20 ///< Enable interrupt requests generated by the        
                                   ///< comparator 0 CPRIF or CPFIF flags.                
                                                                                          
#define EIE1_ECP1__BMASK      0x40 ///< Comparator1 (CP1) Interrupt Enable                
#define EIE1_ECP1__SHIFT      0x06 ///< Comparator1 (CP1) Interrupt Enable                
#define EIE1_ECP1__DISABLED   0x00 ///< Disable CP1 interrupts.                           
#define EIE1_ECP1__ENABLED    0x40 ///< Enable interrupt requests generated by the        
                                   ///< comparator 1 CPRIF or CPFIF flags.                
                                                                                          
#define EIE1_ET3__BMASK       0x80 ///< Timer 3 Interrupt Enable                          
#define EIE1_ET3__SHIFT       0x07 ///< Timer 3 Interrupt Enable                          
#define EIE1_ET3__DISABLED    0x00 ///< Disable Timer 3 interrupts.                       
#define EIE1_ET3__ENABLED     0x80 ///< Enable interrupt requests generated by the TF3L or
                                   ///< TF3H flags.                                       
                                                                                          
//------------------------------------------------------------------------------
// EIE2 Enums (Extended Interrupt Enable 2 @ 0xE7)
//------------------------------------------------------------------------------
#define EIE2_EWARN__BMASK     0x01 ///< VDD Supply Monitor Early Warning Interrupt Enable  
#define EIE2_EWARN__SHIFT     0x00 ///< VDD Supply Monitor Early Warning Interrupt Enable  
#define EIE2_EWARN__DISABLED  0x00 ///< Disable the Supply Monitor Early Warning           
                                   ///< interrupt.                                         
#define EIE2_EWARN__ENABLED   0x01 ///< Enable interrupt requests generated by the Supply  
                                   ///< Monitors.                                          
                                                                                           
#define EIE2_EMAT__BMASK      0x02 ///< Port Match Interrupts Enable                       
#define EIE2_EMAT__SHIFT      0x01 ///< Port Match Interrupts Enable                       
#define EIE2_EMAT__DISABLED   0x00 ///< Disable all Port Match interrupts.                 
#define EIE2_EMAT__ENABLED    0x02 ///< Enable interrupt requests generated by a Port      
                                   ///< Match.                                             
                                                                                           
#define EIE2_ERTC0F__BMASK    0x04 ///< RTC Oscillator Fail Interrupt Enable               
#define EIE2_ERTC0F__SHIFT    0x02 ///< RTC Oscillator Fail Interrupt Enable               
#define EIE2_ERTC0F__DISABLED 0x00 ///< Disable RTC Oscillator Fail interrupts.            
#define EIE2_ERTC0F__ENABLED  0x04 ///< Enable interrupt requests generated by the RTC     
                                   ///< Oscillator Fail event.                             
                                                                                           
#define EIE2_ESPI1__BMASK     0x08 ///< Serial Peripheral Interface (SPI1) Interrupt Enable
#define EIE2_ESPI1__SHIFT     0x03 ///< Serial Peripheral Interface (SPI1) Interrupt Enable
#define EIE2_ESPI1__DISABLED  0x00 ///< Disable all SPI1 interrupts.                       
#define EIE2_ESPI1__ENABLED   0x08 ///< Enable interrupt requests generated by SPI1.       
                                                                                           
//------------------------------------------------------------------------------
// EIP1 Enums (Extended Interrupt Priority 1 @ 0xF6)
//------------------------------------------------------------------------------
#define EIP1_PSMB0__BMASK  0x01 ///< SMBus (SMB0) Interrupt Priority Control                     
#define EIP1_PSMB0__SHIFT  0x00 ///< SMBus (SMB0) Interrupt Priority Control                     
#define EIP1_PSMB0__LOW    0x00 ///< SMB0 interrupt set to low priority level.                   
#define EIP1_PSMB0__HIGH   0x01 ///< SMB0 interrupt set to high priority level.                  
                                                                                                 
#define EIP1_PRTC0A__BMASK 0x02 ///< RTC Alarm Interrupt Priority Control                        
#define EIP1_PRTC0A__SHIFT 0x01 ///< RTC Alarm Interrupt Priority Control                        
#define EIP1_PRTC0A__LOW   0x00 ///< RTC Alarm interrupt set to low priority level.              
#define EIP1_PRTC0A__HIGH  0x02 ///< RTC Alarm interrupt set to high priority level.             
                                                                                                 
#define EIP1_PWADC0__BMASK 0x04 ///< ADC0 Window Comparator Interrupt Priority Control           
#define EIP1_PWADC0__SHIFT 0x02 ///< ADC0 Window Comparator Interrupt Priority Control           
#define EIP1_PWADC0__LOW   0x00 ///< ADC0 Window interrupt set to low priority level.            
#define EIP1_PWADC0__HIGH  0x04 ///< ADC0 Window interrupt set to high priority level.           
                                                                                                 
#define EIP1_PADC0__BMASK  0x08 ///< ADC0 Conversion Complete Interrupt Priority Control         
#define EIP1_PADC0__SHIFT  0x03 ///< ADC0 Conversion Complete Interrupt Priority Control         
#define EIP1_PADC0__LOW    0x00 ///< ADC0 Conversion Complete interrupt set to low               
                                ///< priority level.                                             
#define EIP1_PADC0__HIGH   0x08 ///< ADC0 Conversion Complete interrupt set to high              
                                ///< priority level.                                             
                                                                                                 
#define EIP1_PPCA0__BMASK  0x10 ///< Programmable Counter Array (PCA0) Interrupt Priority Control
#define EIP1_PPCA0__SHIFT  0x04 ///< Programmable Counter Array (PCA0) Interrupt Priority Control
#define EIP1_PPCA0__LOW    0x00 ///< PCA0 interrupt set to low priority level.                   
#define EIP1_PPCA0__HIGH   0x10 ///< PCA0 interrupt set to high priority level.                  
                                                                                                 
#define EIP1_PCP0__BMASK   0x20 ///< Comparator0 (CP0) Interrupt Priority Control                
#define EIP1_PCP0__SHIFT   0x05 ///< Comparator0 (CP0) Interrupt Priority Control                
#define EIP1_PCP0__LOW     0x00 ///< CP0 interrupt set to low priority level.                    
#define EIP1_PCP0__HIGH    0x20 ///< CP0 interrupt set to high priority level.                   
                                                                                                 
#define EIP1_PCP1__BMASK   0x40 ///< Comparator1 (CP1) Interrupt Priority Control                
#define EIP1_PCP1__SHIFT   0x06 ///< Comparator1 (CP1) Interrupt Priority Control                
#define EIP1_PCP1__LOW     0x00 ///< CP1 interrupt set to low priority level.                    
#define EIP1_PCP1__HIGH    0x40 ///< CP1 interrupt set to high priority level.                   
                                                                                                 
#define EIP1_PT3__BMASK    0x80 ///< Timer 3 Interrupt Priority Control                          
#define EIP1_PT3__SHIFT    0x07 ///< Timer 3 Interrupt Priority Control                          
#define EIP1_PT3__LOW      0x00 ///< Timer 3 interrupts set to low priority level.               
#define EIP1_PT3__HIGH     0x80 ///< Timer 3 interrupts set to high priority level.              
                                                                                                 
//------------------------------------------------------------------------------
// EIP2 Enums (Extended Interrupt Priority 2 @ 0xF7)
//------------------------------------------------------------------------------
#define EIP2_PWARN__BMASK  0x01 ///< Supply Monitor Early Warning Interrupt Priority Control      
#define EIP2_PWARN__SHIFT  0x00 ///< Supply Monitor Early Warning Interrupt Priority Control      
#define EIP2_PWARN__LOW    0x00 ///< Supply Monitor Early Warning interrupt set to low            
                                ///< priority level.                                              
#define EIP2_PWARN__HIGH   0x01 ///< Supply Monitor Early Warning interrupt set to high           
                                ///< priority level.                                              
                                                                                                  
#define EIP2_PMAT__BMASK   0x02 ///< Port Match Interrupt Priority Control                        
#define EIP2_PMAT__SHIFT   0x01 ///< Port Match Interrupt Priority Control                        
#define EIP2_PMAT__LOW     0x00 ///< Port Match interrupt set to low priority level.              
#define EIP2_PMAT__HIGH    0x02 ///< Port Match interrupt set to high priority level.             
                                                                                                  
#define EIP2_PRTC0F__BMASK 0x04 ///< RTC Oscillator Fail Interrupt Priority Control               
#define EIP2_PRTC0F__SHIFT 0x02 ///< RTC Oscillator Fail Interrupt Priority Control               
#define EIP2_PRTC0F__LOW   0x00 ///< RTC Oscillator Fail interrupt set to low priority            
                                ///< level.                                                       
#define EIP2_PRTC0F__HIGH  0x04 ///< RTC Oscillator Fail interrupt set to high priority           
                                ///< level.                                                       
                                                                                                  
#define EIP2_PSPI1__BMASK  0x08 ///< Serial Peripheral Interface (SPI1) Interrupt Priority Control
#define EIP2_PSPI1__SHIFT  0x03 ///< Serial Peripheral Interface (SPI1) Interrupt Priority Control
#define EIP2_PSPI1__LOW    0x00 ///< SP1 interrupt set to low priority level.                     
#define EIP2_PSPI1__HIGH   0x08 ///< SPI1 interrupt set to high priority level.                   
                                                                                                  
//------------------------------------------------------------------------------
// IE Enums (Interrupt Enable @ 0xA8)
//------------------------------------------------------------------------------
#define IE_EX0__BMASK      0x01 ///< External Interrupt 0 Enable                       
#define IE_EX0__SHIFT      0x00 ///< External Interrupt 0 Enable                       
#define IE_EX0__DISABLED   0x00 ///< Disable external interrupt 0.                     
#define IE_EX0__ENABLED    0x01 ///< Enable interrupt requests generated by the INT0   
                                ///< input.                                            
                                                                                       
#define IE_ET0__BMASK      0x02 ///< Timer 0 Interrupt Enable                          
#define IE_ET0__SHIFT      0x01 ///< Timer 0 Interrupt Enable                          
#define IE_ET0__DISABLED   0x00 ///< Disable all Timer 0 interrupt.                    
#define IE_ET0__ENABLED    0x02 ///< Enable interrupt requests generated by the TF0    
                                ///< flag.                                             
                                                                                       
#define IE_EX1__BMASK      0x04 ///< External Interrupt 1 Enable                       
#define IE_EX1__SHIFT      0x02 ///< External Interrupt 1 Enable                       
#define IE_EX1__DISABLED   0x00 ///< Disable external interrupt 1.                     
#define IE_EX1__ENABLED    0x04 ///< Enable interrupt requests generated by the INT1   
                                ///< input.                                            
                                                                                       
#define IE_ET1__BMASK      0x08 ///< Timer 1 Interrupt Enable                          
#define IE_ET1__SHIFT      0x03 ///< Timer 1 Interrupt Enable                          
#define IE_ET1__DISABLED   0x00 ///< Disable all Timer 1 interrupt.                    
#define IE_ET1__ENABLED    0x08 ///< Enable interrupt requests generated by the TF1    
                                ///< flag.                                             
                                                                                       
#define IE_ES0__BMASK      0x10 ///< UART0 Interrupt Enable                            
#define IE_ES0__SHIFT      0x04 ///< UART0 Interrupt Enable                            
#define IE_ES0__DISABLED   0x00 ///< Disable UART0 interrupt.                          
#define IE_ES0__ENABLED    0x10 ///< Enable UART0 interrupt.                           
                                                                                       
#define IE_ET2__BMASK      0x20 ///< Timer 2 Interrupt Enable                          
#define IE_ET2__SHIFT      0x05 ///< Timer 2 Interrupt Enable                          
#define IE_ET2__DISABLED   0x00 ///< Disable Timer 2 interrupt.                        
#define IE_ET2__ENABLED    0x20 ///< Enable interrupt requests generated by the TF2L or
                                ///< TF2H flags.                                       
                                                                                       
#define IE_ESPI0__BMASK    0x40 ///< SPI0 Interrupt Enable                             
#define IE_ESPI0__SHIFT    0x06 ///< SPI0 Interrupt Enable                             
#define IE_ESPI0__DISABLED 0x00 ///< Disable all SPI0 interrupts.                      
#define IE_ESPI0__ENABLED  0x40 ///< Enable interrupt requests generated by SPI0.      
                                                                                       
#define IE_EA__BMASK       0x80 ///< All Interrupts Enable                             
#define IE_EA__SHIFT       0x07 ///< All Interrupts Enable                             
#define IE_EA__DISABLED    0x00 ///< Disable all interrupt sources.                    
#define IE_EA__ENABLED     0x80 ///< Enable each interrupt according to its individual 
                                ///< mask setting.                                     
                                                                                       
//------------------------------------------------------------------------------
// IP Enums (Interrupt Priority @ 0xB8)
//------------------------------------------------------------------------------
#define IP_PX0__BMASK   0x01 ///< External Interrupt 0 Priority Control                        
#define IP_PX0__SHIFT   0x00 ///< External Interrupt 0 Priority Control                        
#define IP_PX0__LOW     0x00 ///< External Interrupt 0 set to low priority level.              
#define IP_PX0__HIGH    0x01 ///< External Interrupt 0 set to high priority level.             
                                                                                               
#define IP_PT0__BMASK   0x02 ///< Timer 0 Interrupt Priority Control                           
#define IP_PT0__SHIFT   0x01 ///< Timer 0 Interrupt Priority Control                           
#define IP_PT0__LOW     0x00 ///< Timer 0 interrupt set to low priority level.                 
#define IP_PT0__HIGH    0x02 ///< Timer 0 interrupt set to high priority level.                
                                                                                               
#define IP_PX1__BMASK   0x04 ///< External Interrupt 1 Priority Control                        
#define IP_PX1__SHIFT   0x02 ///< External Interrupt 1 Priority Control                        
#define IP_PX1__LOW     0x00 ///< External Interrupt 1 set to low priority level.              
#define IP_PX1__HIGH    0x04 ///< External Interrupt 1 set to high priority level.             
                                                                                               
#define IP_PT1__BMASK   0x08 ///< Timer 1 Interrupt Priority Control                           
#define IP_PT1__SHIFT   0x03 ///< Timer 1 Interrupt Priority Control                           
#define IP_PT1__LOW     0x00 ///< Timer 1 interrupt set to low priority level.                 
#define IP_PT1__HIGH    0x08 ///< Timer 1 interrupt set to high priority level.                
                                                                                               
#define IP_PS0__BMASK   0x10 ///< UART0 Interrupt Priority Control                             
#define IP_PS0__SHIFT   0x04 ///< UART0 Interrupt Priority Control                             
#define IP_PS0__LOW     0x00 ///< UART0 interrupt set to low priority level.                   
#define IP_PS0__HIGH    0x10 ///< UART0 interrupt set to high priority level.                  
                                                                                               
#define IP_PT2__BMASK   0x20 ///< Timer 2 Interrupt Priority Control                           
#define IP_PT2__SHIFT   0x05 ///< Timer 2 Interrupt Priority Control                           
#define IP_PT2__LOW     0x00 ///< Timer 2 interrupt set to low priority level.                 
#define IP_PT2__HIGH    0x20 ///< Timer 2 interrupt set to high priority level.                
                                                                                               
#define IP_PSPI0__BMASK 0x40 ///< Serial Peripheral Interface (SPI0) Interrupt Priority Control
#define IP_PSPI0__SHIFT 0x06 ///< Serial Peripheral Interface (SPI0) Interrupt Priority Control
#define IP_PSPI0__LOW   0x00 ///< SPI0 interrupt set to low priority level.                    
#define IP_PSPI0__HIGH  0x40 ///< SPI0 interrupt set to high priority level.                   
                                                                                               
//------------------------------------------------------------------------------
// IREF0CN0 Enums (Current Reference Control 0 @ 0xB9)
//------------------------------------------------------------------------------
#define IREF0CN0_IREF0DAT__FMASK     0x3F ///< IREF0 Data Word                                  
#define IREF0CN0_IREF0DAT__SHIFT     0x00 ///< IREF0 Data Word                                  
                                                                                                
#define IREF0CN0_MDSEL__BMASK        0x40 ///< IREF0 Output Mode Select                         
#define IREF0CN0_MDSEL__SHIFT        0x06 ///< IREF0 Output Mode Select                         
#define IREF0CN0_MDSEL__LOW_POWER    0x00 ///< Low Current Mode is selected (step size = 1 uA). 
#define IREF0CN0_MDSEL__HIGH_CURRENT 0x40 ///< High Current Mode is selected (step size = 8 uA).
                                                                                                
#define IREF0CN0_SINK__BMASK         0x80 ///< IREF0 Current Sink Enable                        
#define IREF0CN0_SINK__SHIFT         0x07 ///< IREF0 Current Sink Enable                        
#define IREF0CN0_SINK__DISABLED      0x00 ///< IREF0 is a current source.                       
#define IREF0CN0_SINK__ENABLED       0x80 ///< IREF0 is a current sink.                         
                                                                                                
//------------------------------------------------------------------------------
// XBR0 Enums (Port I/O Crossbar 0 @ 0xE1)
//------------------------------------------------------------------------------
#define XBR0_URT0E__BMASK     0x01 ///< UART I/O Output Enable                        
#define XBR0_URT0E__SHIFT     0x00 ///< UART I/O Output Enable                        
#define XBR0_URT0E__DISABLED  0x00 ///< UART I/O unavailable at Port pin.             
#define XBR0_URT0E__ENABLED   0x01 ///< UART TX, RX routed to Port pins P0.4 and P0.5.
                                                                                      
#define XBR0_SPI0E__BMASK     0x02 ///< SPI I/O Enable                                
#define XBR0_SPI0E__SHIFT     0x01 ///< SPI I/O Enable                                
#define XBR0_SPI0E__DISABLED  0x00 ///< SPI I/O unavailable at Port pins.             
#define XBR0_SPI0E__ENABLED   0x02 ///< SPI I/O routed to Port pins. The SPI can be   
                                   ///< assigned either 3 or 4 GPIO pins.             
                                                                                      
#define XBR0_SMB0E__BMASK     0x04 ///< SMBus0 I/O Enable                             
#define XBR0_SMB0E__SHIFT     0x02 ///< SMBus0 I/O Enable                             
#define XBR0_SMB0E__DISABLED  0x00 ///< SMBus0 I/O unavailable at Port pins.          
#define XBR0_SMB0E__ENABLED   0x04 ///< SMBus0 I/O routed to Port pins.               
                                                                                      
#define XBR0_SYSCKE__BMASK    0x08 ///< SYSCLK Output Enable                          
#define XBR0_SYSCKE__SHIFT    0x03 ///< SYSCLK Output Enable                          
#define XBR0_SYSCKE__DISABLED 0x00 ///< SYSCLK unavailable at Port pin.               
#define XBR0_SYSCKE__ENABLED  0x08 ///< SYSCLK output routed to Port pin.             
                                                                                      
#define XBR0_CP0E__BMASK      0x10 ///< Comparator0 Output Enable                     
#define XBR0_CP0E__SHIFT      0x04 ///< Comparator0 Output Enable                     
#define XBR0_CP0E__DISABLED   0x00 ///< CP0 unavailable at Port pin.                  
#define XBR0_CP0E__ENABLED    0x10 ///< CP0 routed to Port pin.                       
                                                                                      
#define XBR0_CP0AE__BMASK     0x20 ///< Comparator0 Asynchronous Output Enable        
#define XBR0_CP0AE__SHIFT     0x05 ///< Comparator0 Asynchronous Output Enable        
#define XBR0_CP0AE__DISABLED  0x00 ///< Asynchronous CP0 unavailable at Port pin.     
#define XBR0_CP0AE__ENABLED   0x20 ///< Asynchronous CP0 routed to Port pin.          
                                                                                      
#define XBR0_CP1E__BMASK      0x40 ///< Comparator1 Output Enable                     
#define XBR0_CP1E__SHIFT      0x06 ///< Comparator1 Output Enable                     
#define XBR0_CP1E__DISABLED   0x00 ///< CP1 unavailable at Port pin.                  
#define XBR0_CP1E__ENABLED    0x40 ///< CP1 routed to Port pin.                       
                                                                                      
#define XBR0_CP1AE__BMASK     0x80 ///< Comparator1 Asynchronous Output Enable        
#define XBR0_CP1AE__SHIFT     0x07 ///< Comparator1 Asynchronous Output Enable        
#define XBR0_CP1AE__DISABLED  0x00 ///< Asynchronous CP1 unavailable at Port pin.     
#define XBR0_CP1AE__ENABLED   0x80 ///< Asynchronous CP1 routed to Port pin.          
                                                                                      
//------------------------------------------------------------------------------
// XBR1 Enums (Port I/O Crossbar 1 @ 0xE2)
//------------------------------------------------------------------------------
#define XBR1_PCA0ME__FMASK                         0x07 ///< PCA Module I/O Enable                            
#define XBR1_PCA0ME__SHIFT                         0x00 ///< PCA Module I/O Enable                            
#define XBR1_PCA0ME__DISABLED                      0x00 ///< All PCA I/O unavailable at Port pins.            
#define XBR1_PCA0ME__CEX0                          0x01 ///< CEX0 routed to Port pin.                         
#define XBR1_PCA0ME__CEX0_CEX1                     0x02 ///< CEX0, CEX1 routed to Port pins.                  
#define XBR1_PCA0ME__CEX0_CEX1_CEX2                0x03 ///< CEX0, CEX1, CEX2 routed to Port pins.            
#define XBR1_PCA0ME__CEX0_CEX1_CEX2_CEX3           0x04 ///< CEX0, CEX1, CEX2, CEX3 routed to Port pin.       
#define XBR1_PCA0ME__CEX0_CEX1_CEX2_CEX3_CEX4      0x05 ///< CEX0, CEX1, CEX2, CEX3, CEX4 routed to Port pins.
#define XBR1_PCA0ME__CEX0_CEX1_CEX2_CEX3_CEX4_CEX5 0x06 ///< CEX0, CEX1, CEX2, CEX3, CEX4, CEX5 routed to Port
                                                        ///< pins.                                            
                                                                                                              
#define XBR1_ECIE__BMASK                           0x08 ///< PCA0 External Counter Input Enable               
#define XBR1_ECIE__SHIFT                           0x03 ///< PCA0 External Counter Input Enable               
#define XBR1_ECIE__DISABLED                        0x00 ///< ECI unavailable at Port pin.                     
#define XBR1_ECIE__ENABLED                         0x08 ///< ECI routed to Port pin.                          
                                                                                                              
#define XBR1_T0E__BMASK                            0x10 ///< T0 Enable                                        
#define XBR1_T0E__SHIFT                            0x04 ///< T0 Enable                                        
#define XBR1_T0E__DISABLED                         0x00 ///< T0 unavailable at Port pin.                      
#define XBR1_T0E__ENABLED                          0x10 ///< T0 routed to Port pin.                           
                                                                                                              
#define XBR1_T1E__BMASK                            0x20 ///< T1 Enable                                        
#define XBR1_T1E__SHIFT                            0x05 ///< T1 Enable                                        
#define XBR1_T1E__DISABLED                         0x00 ///< T1 unavailable at Port pin.                      
#define XBR1_T1E__ENABLED                          0x20 ///< T1 routed to Port pin.                           
                                                                                                              
#define XBR1_SPI1E__BMASK                          0x40 ///< SPI1 I/O Enable                                  
#define XBR1_SPI1E__SHIFT                          0x06 ///< SPI1 I/O Enable                                  
#define XBR1_SPI1E__DISABLED                       0x00 ///< SPI1 I/O unavailable at Port pin.                
#define XBR1_SPI1E__ENABLED                        0x40 ///< SPI1 I/O routed to Port pins.                    
                                                                                                              
//------------------------------------------------------------------------------
// XBR2 Enums (Port I/O Crossbar 2 @ 0xE3)
//------------------------------------------------------------------------------
#define XBR2_XBARE__BMASK               0x40 ///< Crossbar Enable                                 
#define XBR2_XBARE__SHIFT               0x06 ///< Crossbar Enable                                 
#define XBR2_XBARE__DISABLED            0x00 ///< Crossbar disabled.                              
#define XBR2_XBARE__ENABLED             0x40 ///< Crossbar enabled.                               
                                                                                                  
#define XBR2_WEAKPUD__BMASK             0x80 ///< Port I/O Weak Pullup Disable                    
#define XBR2_WEAKPUD__SHIFT             0x07 ///< Port I/O Weak Pullup Disable                    
#define XBR2_WEAKPUD__PULL_UPS_ENABLED  0x00 ///< Weak Pullups enabled (except for Ports whose I/O
                                             ///< are configured for analog mode).                
#define XBR2_WEAKPUD__PULL_UPS_DISABLED 0x80 ///< Weak Pullups disabled.                          
                                                                                                  
//------------------------------------------------------------------------------
// PCA0CPH0 Enums (PCA Channel 0 Capture Module High Byte @ 0xFC)
//------------------------------------------------------------------------------
#define PCA0CPH0_PCA0CPH0__FMASK 0xFF ///< PCA Channel 0 Capture Module High Byte
#define PCA0CPH0_PCA0CPH0__SHIFT 0x00 ///< PCA Channel 0 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL0 Enums (PCA Channel 0 Capture Module Low Byte @ 0xFB)
//------------------------------------------------------------------------------
#define PCA0CPL0_PCA0CPL0__FMASK 0xFF ///< PCA Channel 0 Capture Module Low Byte
#define PCA0CPL0_PCA0CPL0__SHIFT 0x00 ///< PCA Channel 0 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM0 Enums (PCA Channel 0 Capture/Compare Mode @ 0xDA)
//------------------------------------------------------------------------------
#define PCA0CPM0_ECCF__BMASK    0x01 ///< Channel 0 Capture/Compare Flag Interrupt Enable
#define PCA0CPM0_ECCF__SHIFT    0x00 ///< Channel 0 Capture/Compare Flag Interrupt Enable
#define PCA0CPM0_ECCF__DISABLED 0x00 ///< Disable CCF0 interrupts.                       
#define PCA0CPM0_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF0 is set.                              
                                                                                         
#define PCA0CPM0_PWM__BMASK     0x02 ///< Channel 0 Pulse Width Modulation Mode Enable   
#define PCA0CPM0_PWM__SHIFT     0x01 ///< Channel 0 Pulse Width Modulation Mode Enable   
#define PCA0CPM0_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM0_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM0_TOG__BMASK     0x04 ///< Channel 0 Toggle Function Enable               
#define PCA0CPM0_TOG__SHIFT     0x02 ///< Channel 0 Toggle Function Enable               
#define PCA0CPM0_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM0_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM0_MAT__BMASK     0x08 ///< Channel 0 Match Function Enable                
#define PCA0CPM0_MAT__SHIFT     0x03 ///< Channel 0 Match Function Enable                
#define PCA0CPM0_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM0_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM0_CAPN__BMASK    0x10 ///< Channel 0 Capture Negative Function Enable     
#define PCA0CPM0_CAPN__SHIFT    0x04 ///< Channel 0 Capture Negative Function Enable     
#define PCA0CPM0_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM0_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM0_CAPP__BMASK    0x20 ///< Channel 0 Capture Positive Function Enable     
#define PCA0CPM0_CAPP__SHIFT    0x05 ///< Channel 0 Capture Positive Function Enable     
#define PCA0CPM0_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM0_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM0_ECOM__BMASK    0x40 ///< Channel 0 Comparator Function Enable           
#define PCA0CPM0_ECOM__SHIFT    0x06 ///< Channel 0 Comparator Function Enable           
#define PCA0CPM0_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM0_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM0_PWM16__BMASK   0x80 ///< Channel 0 16-bit Pulse Width Modulation Enable 
#define PCA0CPM0_PWM16__SHIFT   0x07 ///< Channel 0 16-bit Pulse Width Modulation Enable 
#define PCA0CPM0_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM0_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPH1 Enums (PCA Channel 1 Capture Module High Byte @ 0xEA)
//------------------------------------------------------------------------------
#define PCA0CPH1_PCA0CPH1__FMASK 0xFF ///< PCA Channel 1 Capture Module High Byte
#define PCA0CPH1_PCA0CPH1__SHIFT 0x00 ///< PCA Channel 1 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL1 Enums (PCA Channel 1 Capture Module Low Byte @ 0xE9)
//------------------------------------------------------------------------------
#define PCA0CPL1_PCA0CPL1__FMASK 0xFF ///< PCA Channel 1 Capture Module Low Byte
#define PCA0CPL1_PCA0CPL1__SHIFT 0x00 ///< PCA Channel 1 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM1 Enums (PCA Channel 1 Capture/Compare Mode @ 0xDB)
//------------------------------------------------------------------------------
#define PCA0CPM1_ECCF__BMASK    0x01 ///< Channel 1 Capture/Compare Flag Interrupt Enable
#define PCA0CPM1_ECCF__SHIFT    0x00 ///< Channel 1 Capture/Compare Flag Interrupt Enable
#define PCA0CPM1_ECCF__DISABLED 0x00 ///< Disable CCF1 interrupts.                       
#define PCA0CPM1_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF1 is set.                              
                                                                                         
#define PCA0CPM1_PWM__BMASK     0x02 ///< Channel 1 Pulse Width Modulation Mode Enable   
#define PCA0CPM1_PWM__SHIFT     0x01 ///< Channel 1 Pulse Width Modulation Mode Enable   
#define PCA0CPM1_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM1_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM1_TOG__BMASK     0x04 ///< Channel 1 Toggle Function Enable               
#define PCA0CPM1_TOG__SHIFT     0x02 ///< Channel 1 Toggle Function Enable               
#define PCA0CPM1_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM1_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM1_MAT__BMASK     0x08 ///< Channel 1 Match Function Enable                
#define PCA0CPM1_MAT__SHIFT     0x03 ///< Channel 1 Match Function Enable                
#define PCA0CPM1_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM1_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM1_CAPN__BMASK    0x10 ///< Channel 1 Capture Negative Function Enable     
#define PCA0CPM1_CAPN__SHIFT    0x04 ///< Channel 1 Capture Negative Function Enable     
#define PCA0CPM1_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM1_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM1_CAPP__BMASK    0x20 ///< Channel 1 Capture Positive Function Enable     
#define PCA0CPM1_CAPP__SHIFT    0x05 ///< Channel 1 Capture Positive Function Enable     
#define PCA0CPM1_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM1_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM1_ECOM__BMASK    0x40 ///< Channel 1 Comparator Function Enable           
#define PCA0CPM1_ECOM__SHIFT    0x06 ///< Channel 1 Comparator Function Enable           
#define PCA0CPM1_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM1_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM1_PWM16__BMASK   0x80 ///< Channel 1 16-bit Pulse Width Modulation Enable 
#define PCA0CPM1_PWM16__SHIFT   0x07 ///< Channel 1 16-bit Pulse Width Modulation Enable 
#define PCA0CPM1_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM1_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPH2 Enums (PCA Channel 2 Capture Module High Byte @ 0xEC)
//------------------------------------------------------------------------------
#define PCA0CPH2_PCA0CPH2__FMASK 0xFF ///< PCA Channel 2 Capture Module High Byte
#define PCA0CPH2_PCA0CPH2__SHIFT 0x00 ///< PCA Channel 2 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL2 Enums (PCA Channel 2 Capture Module Low Byte @ 0xEB)
//------------------------------------------------------------------------------
#define PCA0CPL2_PCA0CPL2__FMASK 0xFF ///< PCA Channel 2 Capture Module Low Byte
#define PCA0CPL2_PCA0CPL2__SHIFT 0x00 ///< PCA Channel 2 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM2 Enums (PCA Channel 2 Capture/Compare Mode @ 0xDC)
//------------------------------------------------------------------------------
#define PCA0CPM2_ECCF__BMASK    0x01 ///< Channel 2 Capture/Compare Flag Interrupt Enable
#define PCA0CPM2_ECCF__SHIFT    0x00 ///< Channel 2 Capture/Compare Flag Interrupt Enable
#define PCA0CPM2_ECCF__DISABLED 0x00 ///< Disable CCF2 interrupts.                       
#define PCA0CPM2_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF2 is set.                              
                                                                                         
#define PCA0CPM2_PWM__BMASK     0x02 ///< Channel 2 Pulse Width Modulation Mode Enable   
#define PCA0CPM2_PWM__SHIFT     0x01 ///< Channel 2 Pulse Width Modulation Mode Enable   
#define PCA0CPM2_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM2_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM2_TOG__BMASK     0x04 ///< Channel 2 Toggle Function Enable               
#define PCA0CPM2_TOG__SHIFT     0x02 ///< Channel 2 Toggle Function Enable               
#define PCA0CPM2_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM2_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM2_MAT__BMASK     0x08 ///< Channel 2 Match Function Enable                
#define PCA0CPM2_MAT__SHIFT     0x03 ///< Channel 2 Match Function Enable                
#define PCA0CPM2_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM2_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM2_CAPN__BMASK    0x10 ///< Channel 2 Capture Negative Function Enable     
#define PCA0CPM2_CAPN__SHIFT    0x04 ///< Channel 2 Capture Negative Function Enable     
#define PCA0CPM2_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM2_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM2_CAPP__BMASK    0x20 ///< Channel 2 Capture Positive Function Enable     
#define PCA0CPM2_CAPP__SHIFT    0x05 ///< Channel 2 Capture Positive Function Enable     
#define PCA0CPM2_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM2_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM2_ECOM__BMASK    0x40 ///< Channel 2 Comparator Function Enable           
#define PCA0CPM2_ECOM__SHIFT    0x06 ///< Channel 2 Comparator Function Enable           
#define PCA0CPM2_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM2_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM2_PWM16__BMASK   0x80 ///< Channel 2 16-bit Pulse Width Modulation Enable 
#define PCA0CPM2_PWM16__SHIFT   0x07 ///< Channel 2 16-bit Pulse Width Modulation Enable 
#define PCA0CPM2_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM2_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPH3 Enums (PCA Channel 3 Capture Module High Byte @ 0xEE)
//------------------------------------------------------------------------------
#define PCA0CPH3_PCA0CPH3__FMASK 0xFF ///< PCA Channel 3 Capture Module High Byte
#define PCA0CPH3_PCA0CPH3__SHIFT 0x00 ///< PCA Channel 3 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL3 Enums (PCA Channel 3 Capture Module Low Byte @ 0xED)
//------------------------------------------------------------------------------
#define PCA0CPL3_PCA0CPL3__FMASK 0xFF ///< PCA Channel 3 Capture Module Low Byte
#define PCA0CPL3_PCA0CPL3__SHIFT 0x00 ///< PCA Channel 3 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM3 Enums (PCA Channel 3 Capture/Compare Mode @ 0xDD)
//------------------------------------------------------------------------------
#define PCA0CPM3_ECCF__BMASK    0x01 ///< Channel 3 Capture/Compare Flag Interrupt Enable
#define PCA0CPM3_ECCF__SHIFT    0x00 ///< Channel 3 Capture/Compare Flag Interrupt Enable
#define PCA0CPM3_ECCF__DISABLED 0x00 ///< Disable CCF3 interrupts.                       
#define PCA0CPM3_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF3 is set.                              
                                                                                         
#define PCA0CPM3_PWM__BMASK     0x02 ///< Channel 3 Pulse Width Modulation Mode Enable   
#define PCA0CPM3_PWM__SHIFT     0x01 ///< Channel 3 Pulse Width Modulation Mode Enable   
#define PCA0CPM3_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM3_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM3_TOG__BMASK     0x04 ///< Channel 3 Toggle Function Enable               
#define PCA0CPM3_TOG__SHIFT     0x02 ///< Channel 3 Toggle Function Enable               
#define PCA0CPM3_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM3_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM3_MAT__BMASK     0x08 ///< Channel 3 Match Function Enable                
#define PCA0CPM3_MAT__SHIFT     0x03 ///< Channel 3 Match Function Enable                
#define PCA0CPM3_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM3_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM3_CAPN__BMASK    0x10 ///< Channel 3 Capture Negative Function Enable     
#define PCA0CPM3_CAPN__SHIFT    0x04 ///< Channel 3 Capture Negative Function Enable     
#define PCA0CPM3_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM3_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM3_CAPP__BMASK    0x20 ///< Channel 3 Capture Positive Function Enable     
#define PCA0CPM3_CAPP__SHIFT    0x05 ///< Channel 3 Capture Positive Function Enable     
#define PCA0CPM3_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM3_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM3_ECOM__BMASK    0x40 ///< Channel 3 Comparator Function Enable           
#define PCA0CPM3_ECOM__SHIFT    0x06 ///< Channel 3 Comparator Function Enable           
#define PCA0CPM3_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM3_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM3_PWM16__BMASK   0x80 ///< Channel 3 16-bit Pulse Width Modulation Enable 
#define PCA0CPM3_PWM16__SHIFT   0x07 ///< Channel 3 16-bit Pulse Width Modulation Enable 
#define PCA0CPM3_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM3_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPH4 Enums (PCA Channel 4 Capture Module High Byte @ 0xFE)
//------------------------------------------------------------------------------
#define PCA0CPH4_PCA0CPH4__FMASK 0xFF ///< PCA Channel 4 Capture Module High Byte
#define PCA0CPH4_PCA0CPH4__SHIFT 0x00 ///< PCA Channel 4 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL4 Enums (PCA Channel 4 Capture Module Low Byte @ 0xFD)
//------------------------------------------------------------------------------
#define PCA0CPL4_PCA0CPL4__FMASK 0xFF ///< PCA Channel 4 Capture Module Low Byte
#define PCA0CPL4_PCA0CPL4__SHIFT 0x00 ///< PCA Channel 4 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM4 Enums (PCA Channel 4 Capture/Compare Mode @ 0xDE)
//------------------------------------------------------------------------------
#define PCA0CPM4_ECCF__BMASK    0x01 ///< Channel 4 Capture/Compare Flag Interrupt Enable
#define PCA0CPM4_ECCF__SHIFT    0x00 ///< Channel 4 Capture/Compare Flag Interrupt Enable
#define PCA0CPM4_ECCF__DISABLED 0x00 ///< Disable CCF4 interrupts.                       
#define PCA0CPM4_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF4 is set.                              
                                                                                         
#define PCA0CPM4_PWM__BMASK     0x02 ///< Channel 4 Pulse Width Modulation Mode Enable   
#define PCA0CPM4_PWM__SHIFT     0x01 ///< Channel 4 Pulse Width Modulation Mode Enable   
#define PCA0CPM4_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM4_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM4_TOG__BMASK     0x04 ///< Channel 4 Toggle Function Enable               
#define PCA0CPM4_TOG__SHIFT     0x02 ///< Channel 4 Toggle Function Enable               
#define PCA0CPM4_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM4_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM4_MAT__BMASK     0x08 ///< Channel 4 Match Function Enable                
#define PCA0CPM4_MAT__SHIFT     0x03 ///< Channel 4 Match Function Enable                
#define PCA0CPM4_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM4_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM4_CAPN__BMASK    0x10 ///< Channel 4 Capture Negative Function Enable     
#define PCA0CPM4_CAPN__SHIFT    0x04 ///< Channel 4 Capture Negative Function Enable     
#define PCA0CPM4_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM4_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM4_CAPP__BMASK    0x20 ///< Channel 4 Capture Positive Function Enable     
#define PCA0CPM4_CAPP__SHIFT    0x05 ///< Channel 4 Capture Positive Function Enable     
#define PCA0CPM4_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM4_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM4_ECOM__BMASK    0x40 ///< Channel 4 Comparator Function Enable           
#define PCA0CPM4_ECOM__SHIFT    0x06 ///< Channel 4 Comparator Function Enable           
#define PCA0CPM4_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM4_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM4_PWM16__BMASK   0x80 ///< Channel 4 16-bit Pulse Width Modulation Enable 
#define PCA0CPM4_PWM16__SHIFT   0x07 ///< Channel 4 16-bit Pulse Width Modulation Enable 
#define PCA0CPM4_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM4_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPH5 Enums (PCA Channel 5 Capture Module High Byte @ 0xD3)
//------------------------------------------------------------------------------
#define PCA0CPH5_PCA0CPH5__FMASK 0xFF ///< PCA Channel 5 Capture Module High Byte
#define PCA0CPH5_PCA0CPH5__SHIFT 0x00 ///< PCA Channel 5 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL5 Enums (PCA Channel 5 Capture Module Low Byte @ 0xD2)
//------------------------------------------------------------------------------
#define PCA0CPL5_PCA0CPL5__FMASK 0xFF ///< PCA Channel 5 Capture Module Low Byte
#define PCA0CPL5_PCA0CPL5__SHIFT 0x00 ///< PCA Channel 5 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM5 Enums (PCA Channel 5 Capture/Compare Mode @ 0xCE)
//------------------------------------------------------------------------------
#define PCA0CPM5_ECCF__BMASK    0x01 ///< Channel 5 Capture/Compare Flag Interrupt Enable
#define PCA0CPM5_ECCF__SHIFT    0x00 ///< Channel 5 Capture/Compare Flag Interrupt Enable
#define PCA0CPM5_ECCF__DISABLED 0x00 ///< Disable CCF5 interrupts.                       
#define PCA0CPM5_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF5 is set.                              
                                                                                         
#define PCA0CPM5_PWM__BMASK     0x02 ///< Channel 5 Pulse Width Modulation Mode Enable   
#define PCA0CPM5_PWM__SHIFT     0x01 ///< Channel 5 Pulse Width Modulation Mode Enable   
#define PCA0CPM5_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM5_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM5_TOG__BMASK     0x04 ///< Channel 5 Toggle Function Enable               
#define PCA0CPM5_TOG__SHIFT     0x02 ///< Channel 5 Toggle Function Enable               
#define PCA0CPM5_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM5_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM5_MAT__BMASK     0x08 ///< Channel 5 Match Function Enable                
#define PCA0CPM5_MAT__SHIFT     0x03 ///< Channel 5 Match Function Enable                
#define PCA0CPM5_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM5_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM5_CAPN__BMASK    0x10 ///< Channel 5 Capture Negative Function Enable     
#define PCA0CPM5_CAPN__SHIFT    0x04 ///< Channel 5 Capture Negative Function Enable     
#define PCA0CPM5_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM5_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM5_CAPP__BMASK    0x20 ///< Channel 5 Capture Positive Function Enable     
#define PCA0CPM5_CAPP__SHIFT    0x05 ///< Channel 5 Capture Positive Function Enable     
#define PCA0CPM5_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM5_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM5_ECOM__BMASK    0x40 ///< Channel 5 Comparator Function Enable           
#define PCA0CPM5_ECOM__SHIFT    0x06 ///< Channel 5 Comparator Function Enable           
#define PCA0CPM5_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM5_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM5_PWM16__BMASK   0x80 ///< Channel 5 16-bit Pulse Width Modulation Enable 
#define PCA0CPM5_PWM16__SHIFT   0x07 ///< Channel 5 16-bit Pulse Width Modulation Enable 
#define PCA0CPM5_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM5_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CN0 Enums (PCA Control 0 @ 0xD8)
//------------------------------------------------------------------------------
#define PCA0CN0_CCF0__BMASK   0x01 ///< PCA Module 0 Capture/Compare Flag             
#define PCA0CN0_CCF0__SHIFT   0x00 ///< PCA Module 0 Capture/Compare Flag             
#define PCA0CN0_CCF0__NOT_SET 0x00 ///< A match or capture did not occur on channel 0.
#define PCA0CN0_CCF0__SET     0x01 ///< A match or capture occurred on channel 0.     
                                                                                      
#define PCA0CN0_CCF1__BMASK   0x02 ///< PCA Module 1 Capture/Compare Flag             
#define PCA0CN0_CCF1__SHIFT   0x01 ///< PCA Module 1 Capture/Compare Flag             
#define PCA0CN0_CCF1__NOT_SET 0x00 ///< A match or capture did not occur on channel 1.
#define PCA0CN0_CCF1__SET     0x02 ///< A match or capture occurred on channel 1.     
                                                                                      
#define PCA0CN0_CCF2__BMASK   0x04 ///< PCA Module 2 Capture/Compare Flag             
#define PCA0CN0_CCF2__SHIFT   0x02 ///< PCA Module 2 Capture/Compare Flag             
#define PCA0CN0_CCF2__NOT_SET 0x00 ///< A match or capture did not occur on channel 2.
#define PCA0CN0_CCF2__SET     0x04 ///< A match or capture occurred on channel 2.     
                                                                                      
#define PCA0CN0_CCF3__BMASK   0x08 ///< PCA Module 3 Capture/Compare Flag             
#define PCA0CN0_CCF3__SHIFT   0x03 ///< PCA Module 3 Capture/Compare Flag             
#define PCA0CN0_CCF3__NOT_SET 0x00 ///< A match or capture did not occur on channel 3.
#define PCA0CN0_CCF3__SET     0x08 ///< A match or capture occurred on channel 3.     
                                                                                      
#define PCA0CN0_CCF4__BMASK   0x10 ///< PCA Module 4 Capture/Compare Flag             
#define PCA0CN0_CCF4__SHIFT   0x04 ///< PCA Module 4 Capture/Compare Flag             
#define PCA0CN0_CCF4__NOT_SET 0x00 ///< A match or capture did not occur on channel 4.
#define PCA0CN0_CCF4__SET     0x10 ///< A match or capture occurred on channel 4.     
                                                                                      
#define PCA0CN0_CCF5__BMASK   0x20 ///< PCA Module 5 Capture/Compare Flag             
#define PCA0CN0_CCF5__SHIFT   0x05 ///< PCA Module 5 Capture/Compare Flag             
#define PCA0CN0_CCF5__NOT_SET 0x00 ///< A match or capture did not occur on channel 5.
#define PCA0CN0_CCF5__SET     0x20 ///< A match or capture occurred on channel 5.     
                                                                                      
#define PCA0CN0_CR__BMASK     0x40 ///< PCA Counter/Timer Run Control                 
#define PCA0CN0_CR__SHIFT     0x06 ///< PCA Counter/Timer Run Control                 
#define PCA0CN0_CR__STOP      0x00 ///< Stop the PCA Counter/Timer.                   
#define PCA0CN0_CR__RUN       0x40 ///< Start the PCA Counter/Timer running.          
                                                                                      
#define PCA0CN0_CF__BMASK     0x80 ///< PCA Counter/Timer Overflow Flag               
#define PCA0CN0_CF__SHIFT     0x07 ///< PCA Counter/Timer Overflow Flag               
#define PCA0CN0_CF__NOT_SET   0x00 ///< The PCA counter/timer did not overflow.       
#define PCA0CN0_CF__SET       0x80 ///< The PCA counter/timer overflowed.             
                                                                                      
//------------------------------------------------------------------------------
// PCA0H Enums (PCA Counter/Timer High Byte @ 0xFA)
//------------------------------------------------------------------------------
#define PCA0H_PCA0H__FMASK 0xFF ///< PCA Counter/Timer High Byte
#define PCA0H_PCA0H__SHIFT 0x00 ///< PCA Counter/Timer High Byte
                                                                
//------------------------------------------------------------------------------
// PCA0L Enums (PCA Counter/Timer Low Byte @ 0xF9)
//------------------------------------------------------------------------------
#define PCA0L_PCA0L__FMASK 0xFF ///< PCA Counter/Timer Low Byte
#define PCA0L_PCA0L__SHIFT 0x00 ///< PCA Counter/Timer Low Byte
                                                               
//------------------------------------------------------------------------------
// PCA0MD Enums (PCA Mode @ 0xD9)
//------------------------------------------------------------------------------
#define PCA0MD_ECF__BMASK            0x01 ///< PCA Counter/Timer Overflow Interrupt Enable       
#define PCA0MD_ECF__SHIFT            0x00 ///< PCA Counter/Timer Overflow Interrupt Enable       
#define PCA0MD_ECF__OVF_INT_DISABLED 0x00 ///< Disable the CF interrupt.                         
#define PCA0MD_ECF__OVF_INT_ENABLED  0x01 ///< Enable a PCA Counter/Timer Overflow interrupt     
                                          ///< request when CF is set.                           
                                                                                                 
#define PCA0MD_CPS__FMASK            0x0E ///< PCA Counter/Timer Pulse Select                    
#define PCA0MD_CPS__SHIFT            0x01 ///< PCA Counter/Timer Pulse Select                    
#define PCA0MD_CPS__SYSCLK_DIV_12    0x00 ///< System clock divided by 12.                       
#define PCA0MD_CPS__SYSCLK_DIV_4     0x02 ///< System clock divided by 4.                        
#define PCA0MD_CPS__T0_OVERFLOW      0x04 ///< Timer 0 overflow.                                 
#define PCA0MD_CPS__ECI              0x06 ///< High-to-low transitions on ECI (max rate = system 
                                          ///< clock divided by 4).                              
#define PCA0MD_CPS__SYSCLK           0x08 ///< System clock.                                     
#define PCA0MD_CPS__EXTOSC_DIV_8     0x0A ///< External clock divided by 8 (synchronized with the
                                          ///< system clock).                                    
                                                                                                 
#define PCA0MD_WDLCK__BMASK          0x20 ///< Watchdog Timer Lock                               
#define PCA0MD_WDLCK__SHIFT          0x05 ///< Watchdog Timer Lock                               
#define PCA0MD_WDLCK__UNLOCKED       0x00 ///< Watchdog Timer Enable unlocked.                   
#define PCA0MD_WDLCK__LOCKED         0x20 ///< Watchdog Timer Enable locked.                     
                                                                                                 
#define PCA0MD_WDTE__BMASK           0x40 ///< Watchdog Timer Enable                             
#define PCA0MD_WDTE__SHIFT           0x06 ///< Watchdog Timer Enable                             
#define PCA0MD_WDTE__DISABLED        0x00 ///< Disable Watchdog Timer.                           
#define PCA0MD_WDTE__ENABLED         0x40 ///< Enable PCA Module 5 as the Watchdog Timer.        
                                                                                                 
#define PCA0MD_CIDL__BMASK           0x80 ///< PCA Counter/Timer Idle Control                    
#define PCA0MD_CIDL__SHIFT           0x07 ///< PCA Counter/Timer Idle Control                    
#define PCA0MD_CIDL__NORMAL          0x00 ///< PCA continues to function normally while the      
                                          ///< system controller is in Idle Mode.                
#define PCA0MD_CIDL__SUSPEND         0x80 ///< PCA operation is suspended while the system       
                                          ///< controller is in Idle Mode.                       
                                                                                                 
//------------------------------------------------------------------------------
// PCA0PWM Enums (PCA PWM Configuration @ 0xDF)
//------------------------------------------------------------------------------
#define PCA0PWM_CLSEL__FMASK             0x03 ///< Cycle Length Select                              
#define PCA0PWM_CLSEL__SHIFT             0x00 ///< Cycle Length Select                              
#define PCA0PWM_CLSEL__8_BITS            0x00 ///< 8 bits.                                          
#define PCA0PWM_CLSEL__9_BITS            0x01 ///< 9 bits.                                          
#define PCA0PWM_CLSEL__10_BITS           0x02 ///< 10 bits.                                         
#define PCA0PWM_CLSEL__11_BITS           0x03 ///< 11 bits.                                         
                                                                                                    
#define PCA0PWM_COVF__BMASK              0x20 ///< Cycle Overflow Flag                              
#define PCA0PWM_COVF__SHIFT              0x05 ///< Cycle Overflow Flag                              
#define PCA0PWM_COVF__NO_OVERFLOW        0x00 ///< No overflow has occurred since the last time this
                                              ///< bit was cleared.                                 
#define PCA0PWM_COVF__OVERFLOW           0x20 ///< An overflow has occurred since the last time this
                                              ///< bit was cleared.                                 
                                                                                                    
#define PCA0PWM_ECOV__BMASK              0x40 ///< Cycle Overflow Interrupt Enable                  
#define PCA0PWM_ECOV__SHIFT              0x06 ///< Cycle Overflow Interrupt Enable                  
#define PCA0PWM_ECOV__COVF_MASK_DISABLED 0x00 ///< COVF will not generate PCA interrupts.           
#define PCA0PWM_ECOV__COVF_MASK_ENABLED  0x40 ///< A PCA interrupt will be generated when COVF is   
                                              ///< set.                                             
                                                                                                    
#define PCA0PWM_ARSEL__BMASK             0x80 ///< Auto-Reload Register Select                      
#define PCA0PWM_ARSEL__SHIFT             0x07 ///< Auto-Reload Register Select                      
#define PCA0PWM_ARSEL__CAPTURE_COMPARE   0x00 ///< Read/Write Capture/Compare Registers at PCA0CPHn 
                                              ///< and PCA0CPLn.                                    
#define PCA0PWM_ARSEL__AUTORELOAD        0x80 ///< Read/Write Auto-Reload Registers at PCA0CPHn and 
                                              ///< PCA0CPLn.                                        
                                                                                                    
//------------------------------------------------------------------------------
// PCON0 Enums (Power Control 0 @ 0x87)
//------------------------------------------------------------------------------
#define PCON0_IDLE__BMASK  0x01 ///< Idle Mode Select                                
#define PCON0_IDLE__SHIFT  0x00 ///< Idle Mode Select                                
#define PCON0_IDLE__NORMAL 0x00 ///< Idle mode not activated.                        
#define PCON0_IDLE__IDLE   0x01 ///< CPU goes into Idle mode (shuts off clock to CPU,
                                ///< but clocks to enabled peripherals are still     
                                ///< active).                                        
                                                                                     
#define PCON0_STOP__BMASK  0x02 ///< Stop Mode Select                                
#define PCON0_STOP__SHIFT  0x01 ///< Stop Mode Select                                
#define PCON0_STOP__NORMAL 0x00 ///< Stop mode not activated.                        
#define PCON0_STOP__STOP   0x02 ///< CPU goes into Stop mode (internal oscillator    
                                ///< stopped).                                       
                                                                                     
#define PCON0_GF0__BMASK   0x04 ///< General Purpose Flag 0                          
#define PCON0_GF0__SHIFT   0x02 ///< General Purpose Flag 0                          
#define PCON0_GF0__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF0__SET     0x04 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
#define PCON0_GF1__BMASK   0x08 ///< General Purpose Flag 1                          
#define PCON0_GF1__SHIFT   0x03 ///< General Purpose Flag 1                          
#define PCON0_GF1__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF1__SET     0x08 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
#define PCON0_GF2__BMASK   0x10 ///< General Purpose Flag 2                          
#define PCON0_GF2__SHIFT   0x04 ///< General Purpose Flag 2                          
#define PCON0_GF2__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF2__SET     0x10 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
#define PCON0_GF3__BMASK   0x20 ///< General Purpose Flag 3                          
#define PCON0_GF3__SHIFT   0x05 ///< General Purpose Flag 3                          
#define PCON0_GF3__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF3__SET     0x20 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
#define PCON0_GF4__BMASK   0x40 ///< General Purpose Flag 4                          
#define PCON0_GF4__SHIFT   0x06 ///< General Purpose Flag 4                          
#define PCON0_GF4__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF4__SET     0x40 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
#define PCON0_GF5__BMASK   0x80 ///< General Purpose Flag 5                          
#define PCON0_GF5__SHIFT   0x07 ///< General Purpose Flag 5                          
#define PCON0_GF5__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON0_GF5__SET     0x80 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                     
//------------------------------------------------------------------------------
// PMU0CF Enums (Power Management Unit Configuration @ 0xB5)
//------------------------------------------------------------------------------
#define PMU0CF_CPT0WK__BMASK    0x01 ///< Comparator0 Wake-up Source Enable and Flag        
#define PMU0CF_CPT0WK__SHIFT    0x00 ///< Comparator0 Wake-up Source Enable and Flag        
#define PMU0CF_CPT0WK__NOT_SET  0x00 ///< Comparator 0 rising edge did not cause the last   
                                     ///< wake-up.                                          
#define PMU0CF_CPT0WK__SET      0x01 ///< Comparator 0 rising edge caused the last wake-up. 
                                                                                            
#define PMU0CF_PMATWK__BMASK    0x02 ///< Port Match Wake-up Source Enable and Flag         
#define PMU0CF_PMATWK__SHIFT    0x01 ///< Port Match Wake-up Source Enable and Flag         
#define PMU0CF_PMATWK__NOT_SET  0x00 ///< A Port Match event did not cause the last wake-up.
#define PMU0CF_PMATWK__SET      0x02 ///< A Port Match event caused the last wake-up.       
                                                                                            
#define PMU0CF_RTCAWK__BMASK    0x04 ///< RTC Alarm Wake-up Source Enable and Flag          
#define PMU0CF_RTCAWK__SHIFT    0x02 ///< RTC Alarm Wake-up Source Enable and Flag          
#define PMU0CF_RTCAWK__NOT_SET  0x00 ///< A RTC Alarm did not cause the last wake-up.       
#define PMU0CF_RTCAWK__SET      0x04 ///< A RTC Alarm caused the last wake-up.              
                                                                                            
#define PMU0CF_RTCFWK__BMASK    0x08 ///< RTC Oscillator Fail Wake-up Source Enable and Flag
#define PMU0CF_RTCFWK__SHIFT    0x03 ///< RTC Oscillator Fail Wake-up Source Enable and Flag
#define PMU0CF_RTCFWK__NOT_SET  0x00 ///< An RTC oscillator fail event did not cause the    
                                     ///< last wake-up.                                     
#define PMU0CF_RTCFWK__SET      0x08 ///< An RTC oscillator fail event caused the last wake-
                                     ///< up.                                               
                                                                                            
#define PMU0CF_RSTWK__BMASK     0x10 ///< Reset Pin Wake-up Flag                            
#define PMU0CF_RSTWK__SHIFT     0x04 ///< Reset Pin Wake-up Flag                            
#define PMU0CF_RSTWK__NOT_SET   0x00 ///< No glitch detected on RSTb.                       
#define PMU0CF_RSTWK__SET       0x10 ///< Glitch detected on RSTb.                          
                                                                                            
#define PMU0CF_CLEAR__BMASK     0x20 ///< Wake-up Flag Clear                                
#define PMU0CF_CLEAR__SHIFT     0x05 ///< Wake-up Flag Clear                                
#define PMU0CF_CLEAR__ALL_FLAGS 0x20 ///< Clear all wake-up flags.                          
                                                                                            
#define PMU0CF_SUSPEND__BMASK   0x40 ///< Suspend Mode Select                               
#define PMU0CF_SUSPEND__SHIFT   0x06 ///< Suspend Mode Select                               
#define PMU0CF_SUSPEND__NORMAL  0x00 ///< Suspend mode not activated.                       
#define PMU0CF_SUSPEND__START   0x40 ///< Place the device in Suspend mode.                 
                                                                                            
#define PMU0CF_SLEEP__BMASK     0x80 ///< Sleep Mode Select                                 
#define PMU0CF_SLEEP__SHIFT     0x07 ///< Sleep Mode Select                                 
#define PMU0CF_SLEEP__NORMAL    0x00 ///< Sleep mode not activated.                         
#define PMU0CF_SLEEP__START     0x80 ///< Place the device in Sleep mode.                   
                                                                                            
//------------------------------------------------------------------------------
// P0 Enums (Port 0 Pin Latch @ 0x80)
//------------------------------------------------------------------------------
#define P0_B0__BMASK 0x01 ///< Port 0 Bit 0 Latch                            
#define P0_B0__SHIFT 0x00 ///< Port 0 Bit 0 Latch                            
#define P0_B0__LOW   0x00 ///< P0.0 is low. Set P0.0 to drive low.           
#define P0_B0__HIGH  0x01 ///< P0.0 is high. Set P0.0 to drive or float high.
                                                                             
#define P0_B1__BMASK 0x02 ///< Port 0 Bit 1 Latch                            
#define P0_B1__SHIFT 0x01 ///< Port 0 Bit 1 Latch                            
#define P0_B1__LOW   0x00 ///< P0.1 is low. Set P0.1 to drive low.           
#define P0_B1__HIGH  0x02 ///< P0.1 is high. Set P0.1 to drive or float high.
                                                                             
#define P0_B2__BMASK 0x04 ///< Port 0 Bit 2 Latch                            
#define P0_B2__SHIFT 0x02 ///< Port 0 Bit 2 Latch                            
#define P0_B2__LOW   0x00 ///< P0.2 is low. Set P0.2 to drive low.           
#define P0_B2__HIGH  0x04 ///< P0.2 is high. Set P0.2 to drive or float high.
                                                                             
#define P0_B3__BMASK 0x08 ///< Port 0 Bit 3 Latch                            
#define P0_B3__SHIFT 0x03 ///< Port 0 Bit 3 Latch                            
#define P0_B3__LOW   0x00 ///< P0.3 is low. Set P0.3 to drive low.           
#define P0_B3__HIGH  0x08 ///< P0.3 is high. Set P0.3 to drive or float high.
                                                                             
#define P0_B4__BMASK 0x10 ///< Port 0 Bit 4 Latch                            
#define P0_B4__SHIFT 0x04 ///< Port 0 Bit 4 Latch                            
#define P0_B4__LOW   0x00 ///< P0.4 is low. Set P0.4 to drive low.           
#define P0_B4__HIGH  0x10 ///< P0.4 is high. Set P0.4 to drive or float high.
                                                                             
#define P0_B5__BMASK 0x20 ///< Port 0 Bit 5 Latch                            
#define P0_B5__SHIFT 0x05 ///< Port 0 Bit 5 Latch                            
#define P0_B5__LOW   0x00 ///< P0.5 is low. Set P0.5 to drive low.           
#define P0_B5__HIGH  0x20 ///< P0.5 is high. Set P0.5 to drive or float high.
                                                                             
#define P0_B6__BMASK 0x40 ///< Port 0 Bit 6 Latch                            
#define P0_B6__SHIFT 0x06 ///< Port 0 Bit 6 Latch                            
#define P0_B6__LOW   0x00 ///< P0.6 is low. Set P0.6 to drive low.           
#define P0_B6__HIGH  0x40 ///< P0.6 is high. Set P0.6 to drive or float high.
                                                                             
#define P0_B7__BMASK 0x80 ///< Port 0 Bit 7 Latch                            
#define P0_B7__SHIFT 0x07 ///< Port 0 Bit 7 Latch                            
#define P0_B7__LOW   0x00 ///< P0.7 is low. Set P0.7 to drive low.           
#define P0_B7__HIGH  0x80 ///< P0.7 is high. Set P0.7 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P0DRV Enums (Port 0 Drive Strength @ 0xA4)
//------------------------------------------------------------------------------
#define P0DRV_B0__BMASK      0x01 ///< Port 0 Bit 0 Drive Strength                
#define P0DRV_B0__SHIFT      0x00 ///< Port 0 Bit 0 Drive Strength                
#define P0DRV_B0__LOW_DRIVE  0x00 ///< P0.0 output has low output drive strength. 
#define P0DRV_B0__HIGH_DRIVE 0x01 ///< P0.0 output has high output drive strength.
                                                                                  
#define P0DRV_B1__BMASK      0x02 ///< Port 0 Bit 1 Drive Strength                
#define P0DRV_B1__SHIFT      0x01 ///< Port 0 Bit 1 Drive Strength                
#define P0DRV_B1__LOW_DRIVE  0x00 ///< P0.1 output has low output drive strength. 
#define P0DRV_B1__HIGH_DRIVE 0x02 ///< P0.1 output has high output drive strength.
                                                                                  
#define P0DRV_B2__BMASK      0x04 ///< Port 0 Bit 2 Drive Strength                
#define P0DRV_B2__SHIFT      0x02 ///< Port 0 Bit 2 Drive Strength                
#define P0DRV_B2__LOW_DRIVE  0x00 ///< P0.2 output has low output drive strength. 
#define P0DRV_B2__HIGH_DRIVE 0x04 ///< P0.2 output has high output drive strength.
                                                                                  
#define P0DRV_B3__BMASK      0x08 ///< Port 0 Bit 3 Drive Strength                
#define P0DRV_B3__SHIFT      0x03 ///< Port 0 Bit 3 Drive Strength                
#define P0DRV_B3__LOW_DRIVE  0x00 ///< P0.3 output has low output drive strength. 
#define P0DRV_B3__HIGH_DRIVE 0x08 ///< P0.3 output has high output drive strength.
                                                                                  
#define P0DRV_B4__BMASK      0x10 ///< Port 0 Bit 4 Drive Strength                
#define P0DRV_B4__SHIFT      0x04 ///< Port 0 Bit 4 Drive Strength                
#define P0DRV_B4__LOW_DRIVE  0x00 ///< P0.4 output has low output drive strength. 
#define P0DRV_B4__HIGH_DRIVE 0x10 ///< P0.4 output has high output drive strength.
                                                                                  
#define P0DRV_B5__BMASK      0x20 ///< Port 0 Bit 5 Drive Strength                
#define P0DRV_B5__SHIFT      0x05 ///< Port 0 Bit 5 Drive Strength                
#define P0DRV_B5__LOW_DRIVE  0x00 ///< P0.5 output has low output drive strength. 
#define P0DRV_B5__HIGH_DRIVE 0x20 ///< P0.5 output has high output drive strength.
                                                                                  
#define P0DRV_B6__BMASK      0x40 ///< Port 0 Bit 6 Drive Strength                
#define P0DRV_B6__SHIFT      0x06 ///< Port 0 Bit 6 Drive Strength                
#define P0DRV_B6__LOW_DRIVE  0x00 ///< P0.6 output has low output drive strength. 
#define P0DRV_B6__HIGH_DRIVE 0x40 ///< P0.6 output has high output drive strength.
                                                                                  
#define P0DRV_B7__BMASK      0x80 ///< Port 0 Bit 7 Drive Strength                
#define P0DRV_B7__SHIFT      0x07 ///< Port 0 Bit 7 Drive Strength                
#define P0DRV_B7__LOW_DRIVE  0x00 ///< P0.7 output has low output drive strength. 
#define P0DRV_B7__HIGH_DRIVE 0x80 ///< P0.7 output has high output drive strength.
                                                                                  
//------------------------------------------------------------------------------
// P0MASK Enums (Port 0 Mask @ 0xC7)
//------------------------------------------------------------------------------
#define P0MASK_B0__BMASK    0x01 ///< Port 0 Bit 0 Mask Value                           
#define P0MASK_B0__SHIFT    0x00 ///< Port 0 Bit 0 Mask Value                           
#define P0MASK_B0__IGNORED  0x00 ///< P0.0 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B0__COMPARED 0x01 ///< P0.0 pin logic value is compared to P0MAT.0.      
                                                                                        
#define P0MASK_B1__BMASK    0x02 ///< Port 0 Bit 1 Mask Value                           
#define P0MASK_B1__SHIFT    0x01 ///< Port 0 Bit 1 Mask Value                           
#define P0MASK_B1__IGNORED  0x00 ///< P0.1 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B1__COMPARED 0x02 ///< P0.1 pin logic value is compared to P0MAT.1.      
                                                                                        
#define P0MASK_B2__BMASK    0x04 ///< Port 0 Bit 2 Mask Value                           
#define P0MASK_B2__SHIFT    0x02 ///< Port 0 Bit 2 Mask Value                           
#define P0MASK_B2__IGNORED  0x00 ///< P0.2 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B2__COMPARED 0x04 ///< P0.2 pin logic value is compared to P0MAT.2.      
                                                                                        
#define P0MASK_B3__BMASK    0x08 ///< Port 0 Bit 3 Mask Value                           
#define P0MASK_B3__SHIFT    0x03 ///< Port 0 Bit 3 Mask Value                           
#define P0MASK_B3__IGNORED  0x00 ///< P0.3 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B3__COMPARED 0x08 ///< P0.3 pin logic value is compared to P0MAT.3.      
                                                                                        
#define P0MASK_B4__BMASK    0x10 ///< Port 0 Bit 4 Mask Value                           
#define P0MASK_B4__SHIFT    0x04 ///< Port 0 Bit 4 Mask Value                           
#define P0MASK_B4__IGNORED  0x00 ///< P0.4 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B4__COMPARED 0x10 ///< P0.4 pin logic value is compared to P0MAT.4.      
                                                                                        
#define P0MASK_B5__BMASK    0x20 ///< Port 0 Bit 5 Mask Value                           
#define P0MASK_B5__SHIFT    0x05 ///< Port 0 Bit 5 Mask Value                           
#define P0MASK_B5__IGNORED  0x00 ///< P0.5 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B5__COMPARED 0x20 ///< P0.5 pin logic value is compared to P0MAT.5.      
                                                                                        
#define P0MASK_B6__BMASK    0x40 ///< Port 0 Bit 6 Mask Value                           
#define P0MASK_B6__SHIFT    0x06 ///< Port 0 Bit 6 Mask Value                           
#define P0MASK_B6__IGNORED  0x00 ///< P0.6 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B6__COMPARED 0x40 ///< P0.6 pin logic value is compared to P0MAT.6.      
                                                                                        
#define P0MASK_B7__BMASK    0x80 ///< Port 0 Bit 7 Mask Value                           
#define P0MASK_B7__SHIFT    0x07 ///< Port 0 Bit 7 Mask Value                           
#define P0MASK_B7__IGNORED  0x00 ///< P0.7 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B7__COMPARED 0x80 ///< P0.7 pin logic value is compared to P0MAT.7.      
                                                                                        
//------------------------------------------------------------------------------
// P0MAT Enums (Port 0 Match @ 0xD7)
//------------------------------------------------------------------------------
#define P0MAT_B0__BMASK 0x01 ///< Port 0 Bit 0 Match Value                         
#define P0MAT_B0__SHIFT 0x00 ///< Port 0 Bit 0 Match Value                         
#define P0MAT_B0__LOW   0x00 ///< P0.0 pin logic value is compared with logic LOW. 
#define P0MAT_B0__HIGH  0x01 ///< P0.0 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B1__BMASK 0x02 ///< Port 0 Bit 1 Match Value                         
#define P0MAT_B1__SHIFT 0x01 ///< Port 0 Bit 1 Match Value                         
#define P0MAT_B1__LOW   0x00 ///< P0.1 pin logic value is compared with logic LOW. 
#define P0MAT_B1__HIGH  0x02 ///< P0.1 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B2__BMASK 0x04 ///< Port 0 Bit 2 Match Value                         
#define P0MAT_B2__SHIFT 0x02 ///< Port 0 Bit 2 Match Value                         
#define P0MAT_B2__LOW   0x00 ///< P0.2 pin logic value is compared with logic LOW. 
#define P0MAT_B2__HIGH  0x04 ///< P0.2 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B3__BMASK 0x08 ///< Port 0 Bit 3 Match Value                         
#define P0MAT_B3__SHIFT 0x03 ///< Port 0 Bit 3 Match Value                         
#define P0MAT_B3__LOW   0x00 ///< P0.3 pin logic value is compared with logic LOW. 
#define P0MAT_B3__HIGH  0x08 ///< P0.3 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B4__BMASK 0x10 ///< Port 0 Bit 4 Match Value                         
#define P0MAT_B4__SHIFT 0x04 ///< Port 0 Bit 4 Match Value                         
#define P0MAT_B4__LOW   0x00 ///< P0.4 pin logic value is compared with logic LOW. 
#define P0MAT_B4__HIGH  0x10 ///< P0.4 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B5__BMASK 0x20 ///< Port 0 Bit 5 Match Value                         
#define P0MAT_B5__SHIFT 0x05 ///< Port 0 Bit 5 Match Value                         
#define P0MAT_B5__LOW   0x00 ///< P0.5 pin logic value is compared with logic LOW. 
#define P0MAT_B5__HIGH  0x20 ///< P0.5 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B6__BMASK 0x40 ///< Port 0 Bit 6 Match Value                         
#define P0MAT_B6__SHIFT 0x06 ///< Port 0 Bit 6 Match Value                         
#define P0MAT_B6__LOW   0x00 ///< P0.6 pin logic value is compared with logic LOW. 
#define P0MAT_B6__HIGH  0x40 ///< P0.6 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B7__BMASK 0x80 ///< Port 0 Bit 7 Match Value                         
#define P0MAT_B7__SHIFT 0x07 ///< Port 0 Bit 7 Match Value                         
#define P0MAT_B7__LOW   0x00 ///< P0.7 pin logic value is compared with logic LOW. 
#define P0MAT_B7__HIGH  0x80 ///< P0.7 pin logic value is compared with logic HIGH.
                                                                                   
//------------------------------------------------------------------------------
// P0MDIN Enums (Port 0 Input Mode @ 0xF1)
//------------------------------------------------------------------------------
#define P0MDIN_B0__BMASK   0x01 ///< Port 0 Bit 0 Input Mode                 
#define P0MDIN_B0__SHIFT   0x00 ///< Port 0 Bit 0 Input Mode                 
#define P0MDIN_B0__ANALOG  0x00 ///< P0.0 pin is configured for analog mode. 
#define P0MDIN_B0__DIGITAL 0x01 ///< P0.0 pin is configured for digital mode.
                                                                             
#define P0MDIN_B1__BMASK   0x02 ///< Port 0 Bit 1 Input Mode                 
#define P0MDIN_B1__SHIFT   0x01 ///< Port 0 Bit 1 Input Mode                 
#define P0MDIN_B1__ANALOG  0x00 ///< P0.1 pin is configured for analog mode. 
#define P0MDIN_B1__DIGITAL 0x02 ///< P0.1 pin is configured for digital mode.
                                                                             
#define P0MDIN_B2__BMASK   0x04 ///< Port 0 Bit 2 Input Mode                 
#define P0MDIN_B2__SHIFT   0x02 ///< Port 0 Bit 2 Input Mode                 
#define P0MDIN_B2__ANALOG  0x00 ///< P0.2 pin is configured for analog mode. 
#define P0MDIN_B2__DIGITAL 0x04 ///< P0.2 pin is configured for digital mode.
                                                                             
#define P0MDIN_B3__BMASK   0x08 ///< Port 0 Bit 3 Input Mode                 
#define P0MDIN_B3__SHIFT   0x03 ///< Port 0 Bit 3 Input Mode                 
#define P0MDIN_B3__ANALOG  0x00 ///< P0.3 pin is configured for analog mode. 
#define P0MDIN_B3__DIGITAL 0x08 ///< P0.3 pin is configured for digital mode.
                                                                             
#define P0MDIN_B4__BMASK   0x10 ///< Port 0 Bit 4 Input Mode                 
#define P0MDIN_B4__SHIFT   0x04 ///< Port 0 Bit 4 Input Mode                 
#define P0MDIN_B4__ANALOG  0x00 ///< P0.4 pin is configured for analog mode. 
#define P0MDIN_B4__DIGITAL 0x10 ///< P0.4 pin is configured for digital mode.
                                                                             
#define P0MDIN_B5__BMASK   0x20 ///< Port 0 Bit 5 Input Mode                 
#define P0MDIN_B5__SHIFT   0x05 ///< Port 0 Bit 5 Input Mode                 
#define P0MDIN_B5__ANALOG  0x00 ///< P0.5 pin is configured for analog mode. 
#define P0MDIN_B5__DIGITAL 0x20 ///< P0.5 pin is configured for digital mode.
                                                                             
#define P0MDIN_B6__BMASK   0x40 ///< Port 0 Bit 6 Input Mode                 
#define P0MDIN_B6__SHIFT   0x06 ///< Port 0 Bit 6 Input Mode                 
#define P0MDIN_B6__ANALOG  0x00 ///< P0.6 pin is configured for analog mode. 
#define P0MDIN_B6__DIGITAL 0x40 ///< P0.6 pin is configured for digital mode.
                                                                             
#define P0MDIN_B7__BMASK   0x80 ///< Port 0 Bit 7 Input Mode                 
#define P0MDIN_B7__SHIFT   0x07 ///< Port 0 Bit 7 Input Mode                 
#define P0MDIN_B7__ANALOG  0x00 ///< P0.7 pin is configured for analog mode. 
#define P0MDIN_B7__DIGITAL 0x80 ///< P0.7 pin is configured for digital mode.
                                                                             
//------------------------------------------------------------------------------
// P0MDOUT Enums (Port 0 Output Mode @ 0xA4)
//------------------------------------------------------------------------------
#define P0MDOUT_B0__BMASK      0x01 ///< Port 0 Bit 0 Output Mode  
#define P0MDOUT_B0__SHIFT      0x00 ///< Port 0 Bit 0 Output Mode  
#define P0MDOUT_B0__OPEN_DRAIN 0x00 ///< P0.0 output is open-drain.
#define P0MDOUT_B0__PUSH_PULL  0x01 ///< P0.0 output is push-pull. 
                                                                   
#define P0MDOUT_B1__BMASK      0x02 ///< Port 0 Bit 1 Output Mode  
#define P0MDOUT_B1__SHIFT      0x01 ///< Port 0 Bit 1 Output Mode  
#define P0MDOUT_B1__OPEN_DRAIN 0x00 ///< P0.1 output is open-drain.
#define P0MDOUT_B1__PUSH_PULL  0x02 ///< P0.1 output is push-pull. 
                                                                   
#define P0MDOUT_B2__BMASK      0x04 ///< Port 0 Bit 2 Output Mode  
#define P0MDOUT_B2__SHIFT      0x02 ///< Port 0 Bit 2 Output Mode  
#define P0MDOUT_B2__OPEN_DRAIN 0x00 ///< P0.2 output is open-drain.
#define P0MDOUT_B2__PUSH_PULL  0x04 ///< P0.2 output is push-pull. 
                                                                   
#define P0MDOUT_B3__BMASK      0x08 ///< Port 0 Bit 3 Output Mode  
#define P0MDOUT_B3__SHIFT      0x03 ///< Port 0 Bit 3 Output Mode  
#define P0MDOUT_B3__OPEN_DRAIN 0x00 ///< P0.3 output is open-drain.
#define P0MDOUT_B3__PUSH_PULL  0x08 ///< P0.3 output is push-pull. 
                                                                   
#define P0MDOUT_B4__BMASK      0x10 ///< Port 0 Bit 4 Output Mode  
#define P0MDOUT_B4__SHIFT      0x04 ///< Port 0 Bit 4 Output Mode  
#define P0MDOUT_B4__OPEN_DRAIN 0x00 ///< P0.4 output is open-drain.
#define P0MDOUT_B4__PUSH_PULL  0x10 ///< P0.4 output is push-pull. 
                                                                   
#define P0MDOUT_B5__BMASK      0x20 ///< Port 0 Bit 5 Output Mode  
#define P0MDOUT_B5__SHIFT      0x05 ///< Port 0 Bit 5 Output Mode  
#define P0MDOUT_B5__OPEN_DRAIN 0x00 ///< P0.5 output is open-drain.
#define P0MDOUT_B5__PUSH_PULL  0x20 ///< P0.5 output is push-pull. 
                                                                   
#define P0MDOUT_B6__BMASK      0x40 ///< Port 0 Bit 6 Output Mode  
#define P0MDOUT_B6__SHIFT      0x06 ///< Port 0 Bit 6 Output Mode  
#define P0MDOUT_B6__OPEN_DRAIN 0x00 ///< P0.6 output is open-drain.
#define P0MDOUT_B6__PUSH_PULL  0x40 ///< P0.6 output is push-pull. 
                                                                   
#define P0MDOUT_B7__BMASK      0x80 ///< Port 0 Bit 7 Output Mode  
#define P0MDOUT_B7__SHIFT      0x07 ///< Port 0 Bit 7 Output Mode  
#define P0MDOUT_B7__OPEN_DRAIN 0x00 ///< P0.7 output is open-drain.
#define P0MDOUT_B7__PUSH_PULL  0x80 ///< P0.7 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// P0SKIP Enums (Port 0 Skip @ 0xD4)
//------------------------------------------------------------------------------
#define P0SKIP_B0__BMASK       0x01 ///< Port 0 Bit 0 Skip                       
#define P0SKIP_B0__SHIFT       0x00 ///< Port 0 Bit 0 Skip                       
#define P0SKIP_B0__NOT_SKIPPED 0x00 ///< P0.0 pin is not skipped by the crossbar.
#define P0SKIP_B0__SKIPPED     0x01 ///< P0.0 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B1__BMASK       0x02 ///< Port 0 Bit 1 Skip                       
#define P0SKIP_B1__SHIFT       0x01 ///< Port 0 Bit 1 Skip                       
#define P0SKIP_B1__NOT_SKIPPED 0x00 ///< P0.1 pin is not skipped by the crossbar.
#define P0SKIP_B1__SKIPPED     0x02 ///< P0.1 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B2__BMASK       0x04 ///< Port 0 Bit 2 Skip                       
#define P0SKIP_B2__SHIFT       0x02 ///< Port 0 Bit 2 Skip                       
#define P0SKIP_B2__NOT_SKIPPED 0x00 ///< P0.2 pin is not skipped by the crossbar.
#define P0SKIP_B2__SKIPPED     0x04 ///< P0.2 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B3__BMASK       0x08 ///< Port 0 Bit 3 Skip                       
#define P0SKIP_B3__SHIFT       0x03 ///< Port 0 Bit 3 Skip                       
#define P0SKIP_B3__NOT_SKIPPED 0x00 ///< P0.3 pin is not skipped by the crossbar.
#define P0SKIP_B3__SKIPPED     0x08 ///< P0.3 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B4__BMASK       0x10 ///< Port 0 Bit 4 Skip                       
#define P0SKIP_B4__SHIFT       0x04 ///< Port 0 Bit 4 Skip                       
#define P0SKIP_B4__NOT_SKIPPED 0x00 ///< P0.4 pin is not skipped by the crossbar.
#define P0SKIP_B4__SKIPPED     0x10 ///< P0.4 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B5__BMASK       0x20 ///< Port 0 Bit 5 Skip                       
#define P0SKIP_B5__SHIFT       0x05 ///< Port 0 Bit 5 Skip                       
#define P0SKIP_B5__NOT_SKIPPED 0x00 ///< P0.5 pin is not skipped by the crossbar.
#define P0SKIP_B5__SKIPPED     0x20 ///< P0.5 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B6__BMASK       0x40 ///< Port 0 Bit 6 Skip                       
#define P0SKIP_B6__SHIFT       0x06 ///< Port 0 Bit 6 Skip                       
#define P0SKIP_B6__NOT_SKIPPED 0x00 ///< P0.6 pin is not skipped by the crossbar.
#define P0SKIP_B6__SKIPPED     0x40 ///< P0.6 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B7__BMASK       0x80 ///< Port 0 Bit 7 Skip                       
#define P0SKIP_B7__SHIFT       0x07 ///< Port 0 Bit 7 Skip                       
#define P0SKIP_B7__NOT_SKIPPED 0x00 ///< P0.7 pin is not skipped by the crossbar.
#define P0SKIP_B7__SKIPPED     0x80 ///< P0.7 pin is skipped by the crossbar.    
                                                                                 
//------------------------------------------------------------------------------
// P1 Enums (Port 1 Pin Latch @ 0x90)
//------------------------------------------------------------------------------
#define P1_B0__BMASK 0x01 ///< Port 1 Bit 0 Latch                            
#define P1_B0__SHIFT 0x00 ///< Port 1 Bit 0 Latch                            
#define P1_B0__LOW   0x00 ///< P1.0 is low. Set P1.0 to drive low.           
#define P1_B0__HIGH  0x01 ///< P1.0 is high. Set P1.0 to drive or float high.
                                                                             
#define P1_B1__BMASK 0x02 ///< Port 1 Bit 1 Latch                            
#define P1_B1__SHIFT 0x01 ///< Port 1 Bit 1 Latch                            
#define P1_B1__LOW   0x00 ///< P1.1 is low. Set P1.1 to drive low.           
#define P1_B1__HIGH  0x02 ///< P1.1 is high. Set P1.1 to drive or float high.
                                                                             
#define P1_B2__BMASK 0x04 ///< Port 1 Bit 2 Latch                            
#define P1_B2__SHIFT 0x02 ///< Port 1 Bit 2 Latch                            
#define P1_B2__LOW   0x00 ///< P1.2 is low. Set P1.2 to drive low.           
#define P1_B2__HIGH  0x04 ///< P1.2 is high. Set P1.2 to drive or float high.
                                                                             
#define P1_B3__BMASK 0x08 ///< Port 1 Bit 3 Latch                            
#define P1_B3__SHIFT 0x03 ///< Port 1 Bit 3 Latch                            
#define P1_B3__LOW   0x00 ///< P1.3 is low. Set P1.3 to drive low.           
#define P1_B3__HIGH  0x08 ///< P1.3 is high. Set P1.3 to drive or float high.
                                                                             
#define P1_B4__BMASK 0x10 ///< Port 1 Bit 4 Latch                            
#define P1_B4__SHIFT 0x04 ///< Port 1 Bit 4 Latch                            
#define P1_B4__LOW   0x00 ///< P1.4 is low. Set P1.4 to drive low.           
#define P1_B4__HIGH  0x10 ///< P1.4 is high. Set P1.4 to drive or float high.
                                                                             
#define P1_B5__BMASK 0x20 ///< Port 1 Bit 5 Latch                            
#define P1_B5__SHIFT 0x05 ///< Port 1 Bit 5 Latch                            
#define P1_B5__LOW   0x00 ///< P1.5 is low. Set P1.5 to drive low.           
#define P1_B5__HIGH  0x20 ///< P1.5 is high. Set P1.5 to drive or float high.
                                                                             
#define P1_B6__BMASK 0x40 ///< Port 1 Bit 6 Latch                            
#define P1_B6__SHIFT 0x06 ///< Port 1 Bit 6 Latch                            
#define P1_B6__LOW   0x00 ///< P1.6 is low. Set P1.6 to drive low.           
#define P1_B6__HIGH  0x40 ///< P1.6 is high. Set P1.6 to drive or float high.
                                                                             
#define P1_B7__BMASK 0x80 ///< Port 1 Bit 7 Latch                            
#define P1_B7__SHIFT 0x07 ///< Port 1 Bit 7 Latch                            
#define P1_B7__LOW   0x00 ///< P1.7 is low. Set P1.7 to drive low.           
#define P1_B7__HIGH  0x80 ///< P1.7 is high. Set P1.7 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P1DRV Enums (Port 1 Drive Strength @ 0xA5)
//------------------------------------------------------------------------------
#define P1DRV_B0__BMASK      0x01 ///< Port 1 Bit 0 Drive Strength                
#define P1DRV_B0__SHIFT      0x00 ///< Port 1 Bit 0 Drive Strength                
#define P1DRV_B0__LOW_DRIVE  0x00 ///< P1.0 output has low output drive strength. 
#define P1DRV_B0__HIGH_DRIVE 0x01 ///< P1.0 output has high output drive strength.
                                                                                  
#define P1DRV_B1__BMASK      0x02 ///< Port 1 Bit 1 Drive Strength                
#define P1DRV_B1__SHIFT      0x01 ///< Port 1 Bit 1 Drive Strength                
#define P1DRV_B1__LOW_DRIVE  0x00 ///< P1.1 output has low output drive strength. 
#define P1DRV_B1__HIGH_DRIVE 0x02 ///< P1.1 output has high output drive strength.
                                                                                  
#define P1DRV_B2__BMASK      0x04 ///< Port 1 Bit 2 Drive Strength                
#define P1DRV_B2__SHIFT      0x02 ///< Port 1 Bit 2 Drive Strength                
#define P1DRV_B2__LOW_DRIVE  0x00 ///< P1.2 output has low output drive strength. 
#define P1DRV_B2__HIGH_DRIVE 0x04 ///< P1.2 output has high output drive strength.
                                                                                  
#define P1DRV_B3__BMASK      0x08 ///< Port 1 Bit 3 Drive Strength                
#define P1DRV_B3__SHIFT      0x03 ///< Port 1 Bit 3 Drive Strength                
#define P1DRV_B3__LOW_DRIVE  0x00 ///< P1.3 output has low output drive strength. 
#define P1DRV_B3__HIGH_DRIVE 0x08 ///< P1.3 output has high output drive strength.
                                                                                  
#define P1DRV_B4__BMASK      0x10 ///< Port 1 Bit 4 Drive Strength                
#define P1DRV_B4__SHIFT      0x04 ///< Port 1 Bit 4 Drive Strength                
#define P1DRV_B4__LOW_DRIVE  0x00 ///< P1.4 output has low output drive strength. 
#define P1DRV_B4__HIGH_DRIVE 0x10 ///< P1.4 output has high output drive strength.
                                                                                  
#define P1DRV_B5__BMASK      0x20 ///< Port 1 Bit 5 Drive Strength                
#define P1DRV_B5__SHIFT      0x05 ///< Port 1 Bit 5 Drive Strength                
#define P1DRV_B5__LOW_DRIVE  0x00 ///< P1.5 output has low output drive strength. 
#define P1DRV_B5__HIGH_DRIVE 0x20 ///< P1.5 output has high output drive strength.
                                                                                  
#define P1DRV_B6__BMASK      0x40 ///< Port 1 Bit 6 Drive Strength                
#define P1DRV_B6__SHIFT      0x06 ///< Port 1 Bit 6 Drive Strength                
#define P1DRV_B6__LOW_DRIVE  0x00 ///< P1.6 output has low output drive strength. 
#define P1DRV_B6__HIGH_DRIVE 0x40 ///< P1.6 output has high output drive strength.
                                                                                  
#define P1DRV_B7__BMASK      0x80 ///< Port 1 Bit 7 Drive Strength                
#define P1DRV_B7__SHIFT      0x07 ///< Port 1 Bit 7 Drive Strength                
#define P1DRV_B7__LOW_DRIVE  0x00 ///< P1.7 output has low output drive strength. 
#define P1DRV_B7__HIGH_DRIVE 0x80 ///< P1.7 output has high output drive strength.
                                                                                  
//------------------------------------------------------------------------------
// P1MASK Enums (Port 1 Mask @ 0xBF)
//------------------------------------------------------------------------------
#define P1MASK_B0__BMASK    0x01 ///< Port 1 Bit 0 Mask Value                           
#define P1MASK_B0__SHIFT    0x00 ///< Port 1 Bit 0 Mask Value                           
#define P1MASK_B0__IGNORED  0x00 ///< P1.0 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B0__COMPARED 0x01 ///< P1.0 pin logic value is compared to P1MAT.0.      
                                                                                        
#define P1MASK_B1__BMASK    0x02 ///< Port 1 Bit 1 Mask Value                           
#define P1MASK_B1__SHIFT    0x01 ///< Port 1 Bit 1 Mask Value                           
#define P1MASK_B1__IGNORED  0x00 ///< P1.1 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B1__COMPARED 0x02 ///< P1.1 pin logic value is compared to P1MAT.1.      
                                                                                        
#define P1MASK_B2__BMASK    0x04 ///< Port 1 Bit 2 Mask Value                           
#define P1MASK_B2__SHIFT    0x02 ///< Port 1 Bit 2 Mask Value                           
#define P1MASK_B2__IGNORED  0x00 ///< P1.2 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B2__COMPARED 0x04 ///< P1.2 pin logic value is compared to P1MAT.2.      
                                                                                        
#define P1MASK_B3__BMASK    0x08 ///< Port 1 Bit 3 Mask Value                           
#define P1MASK_B3__SHIFT    0x03 ///< Port 1 Bit 3 Mask Value                           
#define P1MASK_B3__IGNORED  0x00 ///< P1.3 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B3__COMPARED 0x08 ///< P1.3 pin logic value is compared to P1MAT.3.      
                                                                                        
#define P1MASK_B4__BMASK    0x10 ///< Port 1 Bit 4 Mask Value                           
#define P1MASK_B4__SHIFT    0x04 ///< Port 1 Bit 4 Mask Value                           
#define P1MASK_B4__IGNORED  0x00 ///< P1.4 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B4__COMPARED 0x10 ///< P1.4 pin logic value is compared to P1MAT.4.      
                                                                                        
#define P1MASK_B5__BMASK    0x20 ///< Port 1 Bit 5 Mask Value                           
#define P1MASK_B5__SHIFT    0x05 ///< Port 1 Bit 5 Mask Value                           
#define P1MASK_B5__IGNORED  0x00 ///< P1.5 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B5__COMPARED 0x20 ///< P1.5 pin logic value is compared to P1MAT.5.      
                                                                                        
#define P1MASK_B6__BMASK    0x40 ///< Port 1 Bit 6 Mask Value                           
#define P1MASK_B6__SHIFT    0x06 ///< Port 1 Bit 6 Mask Value                           
#define P1MASK_B6__IGNORED  0x00 ///< P1.6 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B6__COMPARED 0x40 ///< P1.6 pin logic value is compared to P1MAT.6.      
                                                                                        
#define P1MASK_B7__BMASK    0x80 ///< Port 1 Bit 7 Mask Value                           
#define P1MASK_B7__SHIFT    0x07 ///< Port 1 Bit 7 Mask Value                           
#define P1MASK_B7__IGNORED  0x00 ///< P1.7 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B7__COMPARED 0x80 ///< P1.7 pin logic value is compared to P1MAT.7.      
                                                                                        
//------------------------------------------------------------------------------
// P1MAT Enums (Port 1 Match @ 0xCF)
//------------------------------------------------------------------------------
#define P1MAT_B0__BMASK 0x01 ///< Port 1 Bit 0 Match Value                         
#define P1MAT_B0__SHIFT 0x00 ///< Port 1 Bit 0 Match Value                         
#define P1MAT_B0__LOW   0x00 ///< P1.0 pin logic value is compared with logic LOW. 
#define P1MAT_B0__HIGH  0x01 ///< P1.0 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B1__BMASK 0x02 ///< Port 1 Bit 1 Match Value                         
#define P1MAT_B1__SHIFT 0x01 ///< Port 1 Bit 1 Match Value                         
#define P1MAT_B1__LOW   0x00 ///< P1.1 pin logic value is compared with logic LOW. 
#define P1MAT_B1__HIGH  0x02 ///< P1.1 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B2__BMASK 0x04 ///< Port 1 Bit 2 Match Value                         
#define P1MAT_B2__SHIFT 0x02 ///< Port 1 Bit 2 Match Value                         
#define P1MAT_B2__LOW   0x00 ///< P1.2 pin logic value is compared with logic LOW. 
#define P1MAT_B2__HIGH  0x04 ///< P1.2 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B3__BMASK 0x08 ///< Port 1 Bit 3 Match Value                         
#define P1MAT_B3__SHIFT 0x03 ///< Port 1 Bit 3 Match Value                         
#define P1MAT_B3__LOW   0x00 ///< P1.3 pin logic value is compared with logic LOW. 
#define P1MAT_B3__HIGH  0x08 ///< P1.3 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B4__BMASK 0x10 ///< Port 1 Bit 4 Match Value                         
#define P1MAT_B4__SHIFT 0x04 ///< Port 1 Bit 4 Match Value                         
#define P1MAT_B4__LOW   0x00 ///< P1.4 pin logic value is compared with logic LOW. 
#define P1MAT_B4__HIGH  0x10 ///< P1.4 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B5__BMASK 0x20 ///< Port 1 Bit 5 Match Value                         
#define P1MAT_B5__SHIFT 0x05 ///< Port 1 Bit 5 Match Value                         
#define P1MAT_B5__LOW   0x00 ///< P1.5 pin logic value is compared with logic LOW. 
#define P1MAT_B5__HIGH  0x20 ///< P1.5 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B6__BMASK 0x40 ///< Port 1 Bit 6 Match Value                         
#define P1MAT_B6__SHIFT 0x06 ///< Port 1 Bit 6 Match Value                         
#define P1MAT_B6__LOW   0x00 ///< P1.6 pin logic value is compared with logic LOW. 
#define P1MAT_B6__HIGH  0x40 ///< P1.6 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B7__BMASK 0x80 ///< Port 1 Bit 7 Match Value                         
#define P1MAT_B7__SHIFT 0x07 ///< Port 1 Bit 7 Match Value                         
#define P1MAT_B7__LOW   0x00 ///< P1.7 pin logic value is compared with logic LOW. 
#define P1MAT_B7__HIGH  0x80 ///< P1.7 pin logic value is compared with logic HIGH.
                                                                                   
//------------------------------------------------------------------------------
// P1MDIN Enums (Port 1 Input Mode @ 0xF2)
//------------------------------------------------------------------------------
#define P1MDIN_B0__BMASK   0x01 ///< Port 1 Bit 0 Input Mode                 
#define P1MDIN_B0__SHIFT   0x00 ///< Port 1 Bit 0 Input Mode                 
#define P1MDIN_B0__ANALOG  0x00 ///< P1.0 pin is configured for analog mode. 
#define P1MDIN_B0__DIGITAL 0x01 ///< P1.0 pin is configured for digital mode.
                                                                             
#define P1MDIN_B1__BMASK   0x02 ///< Port 1 Bit 1 Input Mode                 
#define P1MDIN_B1__SHIFT   0x01 ///< Port 1 Bit 1 Input Mode                 
#define P1MDIN_B1__ANALOG  0x00 ///< P1.1 pin is configured for analog mode. 
#define P1MDIN_B1__DIGITAL 0x02 ///< P1.1 pin is configured for digital mode.
                                                                             
#define P1MDIN_B2__BMASK   0x04 ///< Port 1 Bit 2 Input Mode                 
#define P1MDIN_B2__SHIFT   0x02 ///< Port 1 Bit 2 Input Mode                 
#define P1MDIN_B2__ANALOG  0x00 ///< P1.2 pin is configured for analog mode. 
#define P1MDIN_B2__DIGITAL 0x04 ///< P1.2 pin is configured for digital mode.
                                                                             
#define P1MDIN_B3__BMASK   0x08 ///< Port 1 Bit 3 Input Mode                 
#define P1MDIN_B3__SHIFT   0x03 ///< Port 1 Bit 3 Input Mode                 
#define P1MDIN_B3__ANALOG  0x00 ///< P1.3 pin is configured for analog mode. 
#define P1MDIN_B3__DIGITAL 0x08 ///< P1.3 pin is configured for digital mode.
                                                                             
#define P1MDIN_B4__BMASK   0x10 ///< Port 1 Bit 4 Input Mode                 
#define P1MDIN_B4__SHIFT   0x04 ///< Port 1 Bit 4 Input Mode                 
#define P1MDIN_B4__ANALOG  0x00 ///< P1.4 pin is configured for analog mode. 
#define P1MDIN_B4__DIGITAL 0x10 ///< P1.4 pin is configured for digital mode.
                                                                             
#define P1MDIN_B5__BMASK   0x20 ///< Port 1 Bit 5 Input Mode                 
#define P1MDIN_B5__SHIFT   0x05 ///< Port 1 Bit 5 Input Mode                 
#define P1MDIN_B5__ANALOG  0x00 ///< P1.5 pin is configured for analog mode. 
#define P1MDIN_B5__DIGITAL 0x20 ///< P1.5 pin is configured for digital mode.
                                                                             
#define P1MDIN_B6__BMASK   0x40 ///< Port 1 Bit 6 Input Mode                 
#define P1MDIN_B6__SHIFT   0x06 ///< Port 1 Bit 6 Input Mode                 
#define P1MDIN_B6__ANALOG  0x00 ///< P1.6 pin is configured for analog mode. 
#define P1MDIN_B6__DIGITAL 0x40 ///< P1.6 pin is configured for digital mode.
                                                                             
#define P1MDIN_B7__BMASK   0x80 ///< Port 1 Bit 7 Input Mode                 
#define P1MDIN_B7__SHIFT   0x07 ///< Port 1 Bit 7 Input Mode                 
#define P1MDIN_B7__ANALOG  0x00 ///< P1.7 pin is configured for analog mode. 
#define P1MDIN_B7__DIGITAL 0x80 ///< P1.7 pin is configured for digital mode.
                                                                             
//------------------------------------------------------------------------------
// P1MDOUT Enums (Port 1 Output Mode @ 0xA5)
//------------------------------------------------------------------------------
#define P1MDOUT_B0__BMASK      0x01 ///< Port 1 Bit 0 Output Mode  
#define P1MDOUT_B0__SHIFT      0x00 ///< Port 1 Bit 0 Output Mode  
#define P1MDOUT_B0__OPEN_DRAIN 0x00 ///< P1.0 output is open-drain.
#define P1MDOUT_B0__PUSH_PULL  0x01 ///< P1.0 output is push-pull. 
                                                                   
#define P1MDOUT_B1__BMASK      0x02 ///< Port 1 Bit 1 Output Mode  
#define P1MDOUT_B1__SHIFT      0x01 ///< Port 1 Bit 1 Output Mode  
#define P1MDOUT_B1__OPEN_DRAIN 0x00 ///< P1.1 output is open-drain.
#define P1MDOUT_B1__PUSH_PULL  0x02 ///< P1.1 output is push-pull. 
                                                                   
#define P1MDOUT_B2__BMASK      0x04 ///< Port 1 Bit 2 Output Mode  
#define P1MDOUT_B2__SHIFT      0x02 ///< Port 1 Bit 2 Output Mode  
#define P1MDOUT_B2__OPEN_DRAIN 0x00 ///< P1.2 output is open-drain.
#define P1MDOUT_B2__PUSH_PULL  0x04 ///< P1.2 output is push-pull. 
                                                                   
#define P1MDOUT_B3__BMASK      0x08 ///< Port 1 Bit 3 Output Mode  
#define P1MDOUT_B3__SHIFT      0x03 ///< Port 1 Bit 3 Output Mode  
#define P1MDOUT_B3__OPEN_DRAIN 0x00 ///< P1.3 output is open-drain.
#define P1MDOUT_B3__PUSH_PULL  0x08 ///< P1.3 output is push-pull. 
                                                                   
#define P1MDOUT_B4__BMASK      0x10 ///< Port 1 Bit 4 Output Mode  
#define P1MDOUT_B4__SHIFT      0x04 ///< Port 1 Bit 4 Output Mode  
#define P1MDOUT_B4__OPEN_DRAIN 0x00 ///< P1.4 output is open-drain.
#define P1MDOUT_B4__PUSH_PULL  0x10 ///< P1.4 output is push-pull. 
                                                                   
#define P1MDOUT_B5__BMASK      0x20 ///< Port 1 Bit 5 Output Mode  
#define P1MDOUT_B5__SHIFT      0x05 ///< Port 1 Bit 5 Output Mode  
#define P1MDOUT_B5__OPEN_DRAIN 0x00 ///< P1.5 output is open-drain.
#define P1MDOUT_B5__PUSH_PULL  0x20 ///< P1.5 output is push-pull. 
                                                                   
#define P1MDOUT_B6__BMASK      0x40 ///< Port 1 Bit 6 Output Mode  
#define P1MDOUT_B6__SHIFT      0x06 ///< Port 1 Bit 6 Output Mode  
#define P1MDOUT_B6__OPEN_DRAIN 0x00 ///< P1.6 output is open-drain.
#define P1MDOUT_B6__PUSH_PULL  0x40 ///< P1.6 output is push-pull. 
                                                                   
#define P1MDOUT_B7__BMASK      0x80 ///< Port 1 Bit 7 Output Mode  
#define P1MDOUT_B7__SHIFT      0x07 ///< Port 1 Bit 7 Output Mode  
#define P1MDOUT_B7__OPEN_DRAIN 0x00 ///< P1.7 output is open-drain.
#define P1MDOUT_B7__PUSH_PULL  0x80 ///< P1.7 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// P1SKIP Enums (Port 1 Skip @ 0xD5)
//------------------------------------------------------------------------------
#define P1SKIP_B0__BMASK       0x01 ///< Port 1 Bit 0 Skip                       
#define P1SKIP_B0__SHIFT       0x00 ///< Port 1 Bit 0 Skip                       
#define P1SKIP_B0__NOT_SKIPPED 0x00 ///< P1.0 pin is not skipped by the crossbar.
#define P1SKIP_B0__SKIPPED     0x01 ///< P1.0 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B1__BMASK       0x02 ///< Port 1 Bit 1 Skip                       
#define P1SKIP_B1__SHIFT       0x01 ///< Port 1 Bit 1 Skip                       
#define P1SKIP_B1__NOT_SKIPPED 0x00 ///< P1.1 pin is not skipped by the crossbar.
#define P1SKIP_B1__SKIPPED     0x02 ///< P1.1 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B2__BMASK       0x04 ///< Port 1 Bit 2 Skip                       
#define P1SKIP_B2__SHIFT       0x02 ///< Port 1 Bit 2 Skip                       
#define P1SKIP_B2__NOT_SKIPPED 0x00 ///< P1.2 pin is not skipped by the crossbar.
#define P1SKIP_B2__SKIPPED     0x04 ///< P1.2 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B3__BMASK       0x08 ///< Port 1 Bit 3 Skip                       
#define P1SKIP_B3__SHIFT       0x03 ///< Port 1 Bit 3 Skip                       
#define P1SKIP_B3__NOT_SKIPPED 0x00 ///< P1.3 pin is not skipped by the crossbar.
#define P1SKIP_B3__SKIPPED     0x08 ///< P1.3 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B4__BMASK       0x10 ///< Port 1 Bit 4 Skip                       
#define P1SKIP_B4__SHIFT       0x04 ///< Port 1 Bit 4 Skip                       
#define P1SKIP_B4__NOT_SKIPPED 0x00 ///< P1.4 pin is not skipped by the crossbar.
#define P1SKIP_B4__SKIPPED     0x10 ///< P1.4 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B5__BMASK       0x20 ///< Port 1 Bit 5 Skip                       
#define P1SKIP_B5__SHIFT       0x05 ///< Port 1 Bit 5 Skip                       
#define P1SKIP_B5__NOT_SKIPPED 0x00 ///< P1.5 pin is not skipped by the crossbar.
#define P1SKIP_B5__SKIPPED     0x20 ///< P1.5 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B6__BMASK       0x40 ///< Port 1 Bit 6 Skip                       
#define P1SKIP_B6__SHIFT       0x06 ///< Port 1 Bit 6 Skip                       
#define P1SKIP_B6__NOT_SKIPPED 0x00 ///< P1.6 pin is not skipped by the crossbar.
#define P1SKIP_B6__SKIPPED     0x40 ///< P1.6 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B7__BMASK       0x80 ///< Port 1 Bit 7 Skip                       
#define P1SKIP_B7__SHIFT       0x07 ///< Port 1 Bit 7 Skip                       
#define P1SKIP_B7__NOT_SKIPPED 0x00 ///< P1.7 pin is not skipped by the crossbar.
#define P1SKIP_B7__SKIPPED     0x80 ///< P1.7 pin is skipped by the crossbar.    
                                                                                 
//------------------------------------------------------------------------------
// P2 Enums (Port 2 Pin Latch @ 0xA0)
//------------------------------------------------------------------------------
#define P2_B0__BMASK 0x01 ///< Port 2 Bit 0 Latch                            
#define P2_B0__SHIFT 0x00 ///< Port 2 Bit 0 Latch                            
#define P2_B0__LOW   0x00 ///< P2.0 is low. Set P2.0 to drive low.           
#define P2_B0__HIGH  0x01 ///< P2.0 is high. Set P2.0 to drive or float high.
                                                                             
#define P2_B1__BMASK 0x02 ///< Port 2 Bit 1 Latch                            
#define P2_B1__SHIFT 0x01 ///< Port 2 Bit 1 Latch                            
#define P2_B1__LOW   0x00 ///< P2.1 is low. Set P2.1 to drive low.           
#define P2_B1__HIGH  0x02 ///< P2.1 is high. Set P2.1 to drive or float high.
                                                                             
#define P2_B2__BMASK 0x04 ///< Port 2 Bit 2 Latch                            
#define P2_B2__SHIFT 0x02 ///< Port 2 Bit 2 Latch                            
#define P2_B2__LOW   0x00 ///< P2.2 is low. Set P2.2 to drive low.           
#define P2_B2__HIGH  0x04 ///< P2.2 is high. Set P2.2 to drive or float high.
                                                                             
#define P2_B3__BMASK 0x08 ///< Port 2 Bit 3 Latch                            
#define P2_B3__SHIFT 0x03 ///< Port 2 Bit 3 Latch                            
#define P2_B3__LOW   0x00 ///< P2.3 is low. Set P2.3 to drive low.           
#define P2_B3__HIGH  0x08 ///< P2.3 is high. Set P2.3 to drive or float high.
                                                                             
#define P2_B4__BMASK 0x10 ///< Port 2 Bit 4 Latch                            
#define P2_B4__SHIFT 0x04 ///< Port 2 Bit 4 Latch                            
#define P2_B4__LOW   0x00 ///< P2.4 is low. Set P2.4 to drive low.           
#define P2_B4__HIGH  0x10 ///< P2.4 is high. Set P2.4 to drive or float high.
                                                                             
#define P2_B5__BMASK 0x20 ///< Port 2 Bit 5 Latch                            
#define P2_B5__SHIFT 0x05 ///< Port 2 Bit 5 Latch                            
#define P2_B5__LOW   0x00 ///< P2.5 is low. Set P2.5 to drive low.           
#define P2_B5__HIGH  0x20 ///< P2.5 is high. Set P2.5 to drive or float high.
                                                                             
#define P2_B6__BMASK 0x40 ///< Port 2 Bit 6 Latch                            
#define P2_B6__SHIFT 0x06 ///< Port 2 Bit 6 Latch                            
#define P2_B6__LOW   0x00 ///< P2.6 is low. Set P2.6 to drive low.           
#define P2_B6__HIGH  0x40 ///< P2.6 is high. Set P2.6 to drive or float high.
                                                                             
#define P2_B7__BMASK 0x80 ///< Port 2 Bit 7 Latch                            
#define P2_B7__SHIFT 0x07 ///< Port 2 Bit 7 Latch                            
#define P2_B7__LOW   0x00 ///< P2.7 is low. Set P2.7 to drive low.           
#define P2_B7__HIGH  0x80 ///< P2.7 is high. Set P2.7 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P2DRV Enums (Port 2 Drive Strength @ 0xA6)
//------------------------------------------------------------------------------
#define P2DRV_B0__BMASK      0x01 ///< Port 2 Bit 0 Drive Strength                
#define P2DRV_B0__SHIFT      0x00 ///< Port 2 Bit 0 Drive Strength                
#define P2DRV_B0__LOW_DRIVE  0x00 ///< P2.0 output has low output drive strength. 
#define P2DRV_B0__HIGH_DRIVE 0x01 ///< P2.0 output has high output drive strength.
                                                                                  
#define P2DRV_B1__BMASK      0x02 ///< Port 2 Bit 1 Drive Strength                
#define P2DRV_B1__SHIFT      0x01 ///< Port 2 Bit 1 Drive Strength                
#define P2DRV_B1__LOW_DRIVE  0x00 ///< P2.1 output has low output drive strength. 
#define P2DRV_B1__HIGH_DRIVE 0x02 ///< P2.1 output has high output drive strength.
                                                                                  
#define P2DRV_B2__BMASK      0x04 ///< Port 2 Bit 2 Drive Strength                
#define P2DRV_B2__SHIFT      0x02 ///< Port 2 Bit 2 Drive Strength                
#define P2DRV_B2__LOW_DRIVE  0x00 ///< P2.2 output has low output drive strength. 
#define P2DRV_B2__HIGH_DRIVE 0x04 ///< P2.2 output has high output drive strength.
                                                                                  
#define P2DRV_B3__BMASK      0x08 ///< Port 2 Bit 3 Drive Strength                
#define P2DRV_B3__SHIFT      0x03 ///< Port 2 Bit 3 Drive Strength                
#define P2DRV_B3__LOW_DRIVE  0x00 ///< P2.3 output has low output drive strength. 
#define P2DRV_B3__HIGH_DRIVE 0x08 ///< P2.3 output has high output drive strength.
                                                                                  
#define P2DRV_B4__BMASK      0x10 ///< Port 2 Bit 4 Drive Strength                
#define P2DRV_B4__SHIFT      0x04 ///< Port 2 Bit 4 Drive Strength                
#define P2DRV_B4__LOW_DRIVE  0x00 ///< P2.4 output has low output drive strength. 
#define P2DRV_B4__HIGH_DRIVE 0x10 ///< P2.4 output has high output drive strength.
                                                                                  
#define P2DRV_B5__BMASK      0x20 ///< Port 2 Bit 5 Drive Strength                
#define P2DRV_B5__SHIFT      0x05 ///< Port 2 Bit 5 Drive Strength                
#define P2DRV_B5__LOW_DRIVE  0x00 ///< P2.5 output has low output drive strength. 
#define P2DRV_B5__HIGH_DRIVE 0x20 ///< P2.5 output has high output drive strength.
                                                                                  
#define P2DRV_B6__BMASK      0x40 ///< Port 2 Bit 6 Drive Strength                
#define P2DRV_B6__SHIFT      0x06 ///< Port 2 Bit 6 Drive Strength                
#define P2DRV_B6__LOW_DRIVE  0x00 ///< P2.6 output has low output drive strength. 
#define P2DRV_B6__HIGH_DRIVE 0x40 ///< P2.6 output has high output drive strength.
                                                                                  
#define P2DRV_B7__BMASK      0x80 ///< Port 2 Bit 7 Drive Strength                
#define P2DRV_B7__SHIFT      0x07 ///< Port 2 Bit 7 Drive Strength                
#define P2DRV_B7__LOW_DRIVE  0x00 ///< P2.7 output has low output drive strength. 
#define P2DRV_B7__HIGH_DRIVE 0x80 ///< P2.7 output has high output drive strength.
                                                                                  
//------------------------------------------------------------------------------
// P2MDIN Enums (Port 2 Input Mode @ 0xF3)
//------------------------------------------------------------------------------
#define P2MDIN_B0__BMASK   0x01 ///< Port 2 Bit 0 Input Mode                 
#define P2MDIN_B0__SHIFT   0x00 ///< Port 2 Bit 0 Input Mode                 
#define P2MDIN_B0__ANALOG  0x00 ///< P2.0 pin is configured for analog mode. 
#define P2MDIN_B0__DIGITAL 0x01 ///< P2.0 pin is configured for digital mode.
                                                                             
#define P2MDIN_B1__BMASK   0x02 ///< Port 2 Bit 1 Input Mode                 
#define P2MDIN_B1__SHIFT   0x01 ///< Port 2 Bit 1 Input Mode                 
#define P2MDIN_B1__ANALOG  0x00 ///< P2.1 pin is configured for analog mode. 
#define P2MDIN_B1__DIGITAL 0x02 ///< P2.1 pin is configured for digital mode.
                                                                             
#define P2MDIN_B2__BMASK   0x04 ///< Port 2 Bit 2 Input Mode                 
#define P2MDIN_B2__SHIFT   0x02 ///< Port 2 Bit 2 Input Mode                 
#define P2MDIN_B2__ANALOG  0x00 ///< P2.2 pin is configured for analog mode. 
#define P2MDIN_B2__DIGITAL 0x04 ///< P2.2 pin is configured for digital mode.
                                                                             
#define P2MDIN_B3__BMASK   0x08 ///< Port 2 Bit 3 Input Mode                 
#define P2MDIN_B3__SHIFT   0x03 ///< Port 2 Bit 3 Input Mode                 
#define P2MDIN_B3__ANALOG  0x00 ///< P2.3 pin is configured for analog mode. 
#define P2MDIN_B3__DIGITAL 0x08 ///< P2.3 pin is configured for digital mode.
                                                                             
#define P2MDIN_B4__BMASK   0x10 ///< Port 2 Bit 4 Input Mode                 
#define P2MDIN_B4__SHIFT   0x04 ///< Port 2 Bit 4 Input Mode                 
#define P2MDIN_B4__ANALOG  0x00 ///< P2.4 pin is configured for analog mode. 
#define P2MDIN_B4__DIGITAL 0x10 ///< P2.4 pin is configured for digital mode.
                                                                             
#define P2MDIN_B5__BMASK   0x20 ///< Port 2 Bit 5 Input Mode                 
#define P2MDIN_B5__SHIFT   0x05 ///< Port 2 Bit 5 Input Mode                 
#define P2MDIN_B5__ANALOG  0x00 ///< P2.5 pin is configured for analog mode. 
#define P2MDIN_B5__DIGITAL 0x20 ///< P2.5 pin is configured for digital mode.
                                                                             
#define P2MDIN_B6__BMASK   0x40 ///< Port 2 Bit 6 Input Mode                 
#define P2MDIN_B6__SHIFT   0x06 ///< Port 2 Bit 6 Input Mode                 
#define P2MDIN_B6__ANALOG  0x00 ///< P2.6 pin is configured for analog mode. 
#define P2MDIN_B6__DIGITAL 0x40 ///< P2.6 pin is configured for digital mode.
                                                                             
#define P2MDIN_B7__BMASK   0x80 ///< Port 2 Bit 7 Input Mode                 
#define P2MDIN_B7__SHIFT   0x07 ///< Port 2 Bit 7 Input Mode                 
#define P2MDIN_B7__ANALOG  0x00 ///< P2.7 pin is configured for analog mode. 
#define P2MDIN_B7__DIGITAL 0x80 ///< P2.7 pin is configured for digital mode.
                                                                             
//------------------------------------------------------------------------------
// P2MDOUT Enums (Port 2 Output Mode @ 0xA6)
//------------------------------------------------------------------------------
#define P2MDOUT_B0__BMASK      0x01 ///< Port 2 Bit 0 Output Mode  
#define P2MDOUT_B0__SHIFT      0x00 ///< Port 2 Bit 0 Output Mode  
#define P2MDOUT_B0__OPEN_DRAIN 0x00 ///< P2.0 output is open-drain.
#define P2MDOUT_B0__PUSH_PULL  0x01 ///< P2.0 output is push-pull. 
                                                                   
#define P2MDOUT_B1__BMASK      0x02 ///< Port 2 Bit 1 Output Mode  
#define P2MDOUT_B1__SHIFT      0x01 ///< Port 2 Bit 1 Output Mode  
#define P2MDOUT_B1__OPEN_DRAIN 0x00 ///< P2.1 output is open-drain.
#define P2MDOUT_B1__PUSH_PULL  0x02 ///< P2.1 output is push-pull. 
                                                                   
#define P2MDOUT_B2__BMASK      0x04 ///< Port 2 Bit 2 Output Mode  
#define P2MDOUT_B2__SHIFT      0x02 ///< Port 2 Bit 2 Output Mode  
#define P2MDOUT_B2__OPEN_DRAIN 0x00 ///< P2.2 output is open-drain.
#define P2MDOUT_B2__PUSH_PULL  0x04 ///< P2.2 output is push-pull. 
                                                                   
#define P2MDOUT_B3__BMASK      0x08 ///< Port 2 Bit 3 Output Mode  
#define P2MDOUT_B3__SHIFT      0x03 ///< Port 2 Bit 3 Output Mode  
#define P2MDOUT_B3__OPEN_DRAIN 0x00 ///< P2.3 output is open-drain.
#define P2MDOUT_B3__PUSH_PULL  0x08 ///< P2.3 output is push-pull. 
                                                                   
#define P2MDOUT_B4__BMASK      0x10 ///< Port 2 Bit 4 Output Mode  
#define P2MDOUT_B4__SHIFT      0x04 ///< Port 2 Bit 4 Output Mode  
#define P2MDOUT_B4__OPEN_DRAIN 0x00 ///< P2.4 output is open-drain.
#define P2MDOUT_B4__PUSH_PULL  0x10 ///< P2.4 output is push-pull. 
                                                                   
#define P2MDOUT_B5__BMASK      0x20 ///< Port 2 Bit 5 Output Mode  
#define P2MDOUT_B5__SHIFT      0x05 ///< Port 2 Bit 5 Output Mode  
#define P2MDOUT_B5__OPEN_DRAIN 0x00 ///< P2.5 output is open-drain.
#define P2MDOUT_B5__PUSH_PULL  0x20 ///< P2.5 output is push-pull. 
                                                                   
#define P2MDOUT_B6__BMASK      0x40 ///< Port 2 Bit 6 Output Mode  
#define P2MDOUT_B6__SHIFT      0x06 ///< Port 2 Bit 6 Output Mode  
#define P2MDOUT_B6__OPEN_DRAIN 0x00 ///< P2.6 output is open-drain.
#define P2MDOUT_B6__PUSH_PULL  0x40 ///< P2.6 output is push-pull. 
                                                                   
#define P2MDOUT_B7__BMASK      0x80 ///< Port 2 Bit 7 Output Mode  
#define P2MDOUT_B7__SHIFT      0x07 ///< Port 2 Bit 7 Output Mode  
#define P2MDOUT_B7__OPEN_DRAIN 0x00 ///< P2.7 output is open-drain.
#define P2MDOUT_B7__PUSH_PULL  0x80 ///< P2.7 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// P2SKIP Enums (Port 2 Skip @ 0xD6)
//------------------------------------------------------------------------------
#define P2SKIP_B0__BMASK       0x01 ///< Port 2 Bit 0 Skip                       
#define P2SKIP_B0__SHIFT       0x00 ///< Port 2 Bit 0 Skip                       
#define P2SKIP_B0__NOT_SKIPPED 0x00 ///< P2.0 pin is not skipped by the crossbar.
#define P2SKIP_B0__SKIPPED     0x01 ///< P2.0 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B1__BMASK       0x02 ///< Port 2 Bit 1 Skip                       
#define P2SKIP_B1__SHIFT       0x01 ///< Port 2 Bit 1 Skip                       
#define P2SKIP_B1__NOT_SKIPPED 0x00 ///< P2.1 pin is not skipped by the crossbar.
#define P2SKIP_B1__SKIPPED     0x02 ///< P2.1 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B2__BMASK       0x04 ///< Port 2 Bit 2 Skip                       
#define P2SKIP_B2__SHIFT       0x02 ///< Port 2 Bit 2 Skip                       
#define P2SKIP_B2__NOT_SKIPPED 0x00 ///< P2.2 pin is not skipped by the crossbar.
#define P2SKIP_B2__SKIPPED     0x04 ///< P2.2 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B3__BMASK       0x08 ///< Port 2 Bit 3 Skip                       
#define P2SKIP_B3__SHIFT       0x03 ///< Port 2 Bit 3 Skip                       
#define P2SKIP_B3__NOT_SKIPPED 0x00 ///< P2.3 pin is not skipped by the crossbar.
#define P2SKIP_B3__SKIPPED     0x08 ///< P2.3 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B4__BMASK       0x10 ///< Port 2 Bit 4 Skip                       
#define P2SKIP_B4__SHIFT       0x04 ///< Port 2 Bit 4 Skip                       
#define P2SKIP_B4__NOT_SKIPPED 0x00 ///< P2.4 pin is not skipped by the crossbar.
#define P2SKIP_B4__SKIPPED     0x10 ///< P2.4 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B5__BMASK       0x20 ///< Port 2 Bit 5 Skip                       
#define P2SKIP_B5__SHIFT       0x05 ///< Port 2 Bit 5 Skip                       
#define P2SKIP_B5__NOT_SKIPPED 0x00 ///< P2.5 pin is not skipped by the crossbar.
#define P2SKIP_B5__SKIPPED     0x20 ///< P2.5 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B6__BMASK       0x40 ///< Port 2 Bit 6 Skip                       
#define P2SKIP_B6__SHIFT       0x06 ///< Port 2 Bit 6 Skip                       
#define P2SKIP_B6__NOT_SKIPPED 0x00 ///< P2.6 pin is not skipped by the crossbar.
#define P2SKIP_B6__SKIPPED     0x40 ///< P2.6 pin is skipped by the crossbar.    
                                                                                 
#define P2SKIP_B7__BMASK       0x80 ///< Port 2 Bit 7 Skip                       
#define P2SKIP_B7__SHIFT       0x07 ///< Port 2 Bit 7 Skip                       
#define P2SKIP_B7__NOT_SKIPPED 0x00 ///< P2.7 pin is not skipped by the crossbar.
#define P2SKIP_B7__SKIPPED     0x80 ///< P2.7 pin is skipped by the crossbar.    
                                                                                 
//------------------------------------------------------------------------------
// RSTSRC Enums (Reset Source @ 0xEF)
//------------------------------------------------------------------------------
#define RSTSRC_PINRSF__BMASK   0x01 ///< HW Pin Reset Flag                                                    
#define RSTSRC_PINRSF__SHIFT   0x00 ///< HW Pin Reset Flag                                                    
#define RSTSRC_PINRSF__NOT_SET 0x00 ///< The RSTb pin did not cause the last reset.                           
#define RSTSRC_PINRSF__SET     0x01 ///< The RSTb pin caused the last reset.                                  
                                                                                                              
#define RSTSRC_PORSF__BMASK    0x02 ///< Power-On / Supply Monitor Reset Flag, and Supply Monitor Reset Enable
#define RSTSRC_PORSF__SHIFT    0x01 ///< Power-On / Supply Monitor Reset Flag, and Supply Monitor Reset Enable
#define RSTSRC_PORSF__NOT_SET  0x00 ///< A power-on or supply monitor reset did not occur.                    
#define RSTSRC_PORSF__SET      0x02 ///< A power-on or supply monitor reset occurred.                         
                                                                                                              
#define RSTSRC_MCDRSF__BMASK   0x04 ///< Missing Clock Detector Enable and Flag                               
#define RSTSRC_MCDRSF__SHIFT   0x02 ///< Missing Clock Detector Enable and Flag                               
#define RSTSRC_MCDRSF__NOT_SET 0x00 ///< A missing clock detector reset did not occur.                        
#define RSTSRC_MCDRSF__SET     0x04 ///< A missing clock detector reset occurred.                             
                                                                                                              
#define RSTSRC_WDTRSF__BMASK   0x08 ///< Watchdog Timer Reset Flag                                            
#define RSTSRC_WDTRSF__SHIFT   0x03 ///< Watchdog Timer Reset Flag                                            
#define RSTSRC_WDTRSF__NOT_SET 0x00 ///< A watchdog timer overflow reset did not occur.                       
#define RSTSRC_WDTRSF__SET     0x08 ///< A watchdog timer overflow reset occurred.                            
                                                                                                              
#define RSTSRC_SWRSF__BMASK    0x10 ///< Software Reset Force and Flag                                        
#define RSTSRC_SWRSF__SHIFT    0x04 ///< Software Reset Force and Flag                                        
#define RSTSRC_SWRSF__NOT_SET  0x00 ///< A software reset did not occur.                                      
#define RSTSRC_SWRSF__SET      0x10 ///< A software reset occurred.                                           
                                                                                                              
#define RSTSRC_C0RSEF__BMASK   0x20 ///< Comparator0 Reset Enable and Flag                                    
#define RSTSRC_C0RSEF__SHIFT   0x05 ///< Comparator0 Reset Enable and Flag                                    
#define RSTSRC_C0RSEF__NOT_SET 0x00 ///< A Comparator 0 reset did not occur.                                  
#define RSTSRC_C0RSEF__SET     0x20 ///< A Comparator 0 reset occurred.                                       
                                                                                                              
#define RSTSRC_FERROR__BMASK   0x40 ///< Flash Error Reset Flag                                               
#define RSTSRC_FERROR__SHIFT   0x06 ///< Flash Error Reset Flag                                               
#define RSTSRC_FERROR__NOT_SET 0x00 ///< A flash error reset did not occur.                                   
#define RSTSRC_FERROR__SET     0x40 ///< A flash error reset occurred.                                        
                                                                                                              
#define RSTSRC_RTC0RE__BMASK   0x80 ///< RTC Reset Enable and Flag                                            
#define RSTSRC_RTC0RE__SHIFT   0x07 ///< RTC Reset Enable and Flag                                            
#define RSTSRC_RTC0RE__NOT_SET 0x00 ///< A RTC alarm or oscillator fail reset did not                         
                                    ///< occur.                                                               
#define RSTSRC_RTC0RE__SET     0x80 ///< A RTC alarm or oscillator fail reset occurred.                       
                                                                                                              
//------------------------------------------------------------------------------
// ALARM0 Enums (RTC Alarm Programmed Value 0 @ 0x08)
//------------------------------------------------------------------------------
#define ALARM0_ALARM0__FMASK 0xFF ///< RTC Alarm Programmed Value 0
#define ALARM0_ALARM0__SHIFT 0x00 ///< RTC Alarm Programmed Value 0
                                                                   
//------------------------------------------------------------------------------
// ALARM1 Enums (RTC Alarm Programmed Value 1 @ 0x09)
//------------------------------------------------------------------------------
#define ALARM1_ALARM1__FMASK 0xFF ///< RTC Alarm Programmed Value 1
#define ALARM1_ALARM1__SHIFT 0x00 ///< RTC Alarm Programmed Value 1
                                                                   
//------------------------------------------------------------------------------
// ALARM2 Enums (RTC Alarm Programmed Value 2 @ 0x0A)
//------------------------------------------------------------------------------
#define ALARM2_ALARM2__FMASK 0xFF ///< RTC Alarm Programmed Value 2
#define ALARM2_ALARM2__SHIFT 0x00 ///< RTC Alarm Programmed Value 2
                                                                   
//------------------------------------------------------------------------------
// ALARM3 Enums (RTC Alarm Programmed Value 3 @ 0x0B)
//------------------------------------------------------------------------------
#define ALARM3_ALARM3__FMASK 0xFF ///< RTC Alarm Programmed Value 3
#define ALARM3_ALARM3__SHIFT 0x00 ///< RTC Alarm Programmed Value 3
                                                                   
//------------------------------------------------------------------------------
// CAPTURE0 Enums (RTC Timer Capture 0 @ 0x00)
//------------------------------------------------------------------------------
#define CAPTURE0_CAPTURE0__FMASK 0xFF ///< RTC Timer Capture 0
#define CAPTURE0_CAPTURE0__SHIFT 0x00 ///< RTC Timer Capture 0
                                                              
//------------------------------------------------------------------------------
// CAPTURE1 Enums (RTC Timer Capture 1 @ 0x01)
//------------------------------------------------------------------------------
#define CAPTURE1_CAPTURE1__FMASK 0xFF ///< RTC Timer Capture 1
#define CAPTURE1_CAPTURE1__SHIFT 0x00 ///< RTC Timer Capture 1
                                                              
//------------------------------------------------------------------------------
// CAPTURE2 Enums (RTC Timer Capture 2 @ 0x02)
//------------------------------------------------------------------------------
#define CAPTURE2_CAPTURE2__FMASK 0xFF ///< RTC Timer Capture 2
#define CAPTURE2_CAPTURE2__SHIFT 0x00 ///< RTC Timer Capture 2
                                                              
//------------------------------------------------------------------------------
// CAPTURE3 Enums (RTC Timer Capture 3 @ 0x03)
//------------------------------------------------------------------------------
#define CAPTURE3_CAPTURE3__FMASK 0xFF ///< RTC Timer Capture 3
#define CAPTURE3_CAPTURE3__SHIFT 0x00 ///< RTC Timer Capture 3
                                                              
//------------------------------------------------------------------------------
// RTC0ADR Enums (RTC Address @ 0xAC)
//------------------------------------------------------------------------------
#define RTC0ADR_ADDR__FMASK      0x0F ///< RTC Indirect Register Address                     
#define RTC0ADR_ADDR__SHIFT      0x00 ///< RTC Indirect Register Address                     
#define RTC0ADR_ADDR__CAPTURE0   0x00 ///< Select the CAPTURE0 register.                     
#define RTC0ADR_ADDR__CAPTURE1   0x01 ///< Select the CAPTURE1 register.                     
#define RTC0ADR_ADDR__CAPTURE2   0x02 ///< Select the CAPTURE2 register.                     
#define RTC0ADR_ADDR__CAPTURE3   0x03 ///< Select the CAPTURE3 register.                     
#define RTC0ADR_ADDR__RTC0CN0    0x04 ///< Select the RTC0CN register.                       
#define RTC0ADR_ADDR__RTC0XCN0   0x05 ///< Select the RTC0XCN register.                      
#define RTC0ADR_ADDR__RTC0XCF    0x06 ///< Select the RTC0XCF register.                      
#define RTC0ADR_ADDR__ALARM0     0x08 ///< Select the ALARM0 register.                       
#define RTC0ADR_ADDR__ALARM1     0x09 ///< Select the ALARM1 register.                       
#define RTC0ADR_ADDR__ALARM2     0x0A ///< Select the ALARM2 register.                       
#define RTC0ADR_ADDR__ALARM3     0x0B ///< Select the ALARM3 register.                       
                                                                                             
#define RTC0ADR_SHORT__BMASK     0x10 ///< Short Strobe Enable                               
#define RTC0ADR_SHORT__SHIFT     0x04 ///< Short Strobe Enable                               
#define RTC0ADR_SHORT__DISABLED  0x00 ///< Disable short strobe.                             
#define RTC0ADR_SHORT__ENABLED   0x10 ///< Enable short strobe.                              
                                                                                             
#define RTC0ADR_AUTORD__BMASK    0x40 ///< RTC Interface Autoread Enable                     
#define RTC0ADR_AUTORD__SHIFT    0x06 ///< RTC Interface Autoread Enable                     
#define RTC0ADR_AUTORD__DISABLED 0x00 ///< Disable autoread. Firmware must write the BUSY bit
                                      ///< for each RTC indirect read operation.             
#define RTC0ADR_AUTORD__ENABLED  0x40 ///< Enable autoread. The next RTC indirect read       
                                      ///< operation is initiated when firmware reads the    
                                      ///< RTC0DAT register.                                 
                                                                                             
#define RTC0ADR_BUSY__BMASK      0x80 ///< RTC Interface Busy Indicator                      
#define RTC0ADR_BUSY__SHIFT      0x07 ///< RTC Interface Busy Indicator                      
#define RTC0ADR_BUSY__NOT_SET    0x00 ///< The RTC interface is not busy.                    
#define RTC0ADR_BUSY__SET        0x80 ///< The RTC interface is busy.                        
                                                                                             
//------------------------------------------------------------------------------
// RTC0CN0 Enums (RTC Control 0 @ 0x04)
//------------------------------------------------------------------------------
#define RTC0CN0_RTC0CAP__BMASK    0x01 ///< RTC Timer Capture                               
#define RTC0CN0_RTC0CAP__SHIFT    0x00 ///< RTC Timer Capture                               
#define RTC0CN0_RTC0CAP__NOT_SET  0x00 ///< Do not start a capture operation.               
#define RTC0CN0_RTC0CAP__SET      0x01 ///< Start a capture operation.                      
                                                                                            
#define RTC0CN0_RTC0SET__BMASK    0x02 ///< RTC Timer Set                                   
#define RTC0CN0_RTC0SET__SHIFT    0x01 ///< RTC Timer Set                                   
#define RTC0CN0_RTC0SET__NOT_SET  0x00 ///< Do not start a set operation.                   
#define RTC0CN0_RTC0SET__SET      0x02 ///< Start a set operation.                          
                                                                                            
#define RTC0CN0_ALRM__BMASK       0x04 ///< RTC Alarm Event Flag and Auto Reset Enable      
#define RTC0CN0_ALRM__SHIFT       0x02 ///< RTC Alarm Event Flag and Auto Reset Enable      
#define RTC0CN0_ALRM__NOT_SET     0x00 ///< Alarm event flag is not set or disable the auto 
                                       ///< reset function.                                 
#define RTC0CN0_ALRM__SET         0x04 ///< Alarm event flag is set or enable the auto reset
                                       ///< function.                                       
                                                                                            
#define RTC0CN0_RTC0AEN__BMASK    0x08 ///< RTC Alarm Enable                                
#define RTC0CN0_RTC0AEN__SHIFT    0x03 ///< RTC Alarm Enable                                
#define RTC0CN0_RTC0AEN__DISABLED 0x00 ///< Disable RTC alarm.                              
#define RTC0CN0_RTC0AEN__ENABLED  0x08 ///< Enable RTC alarm.                               
                                                                                            
#define RTC0CN0_RTC0TR__BMASK     0x10 ///< RTC Timer Run Control                           
#define RTC0CN0_RTC0TR__SHIFT     0x04 ///< RTC Timer Run Control                           
#define RTC0CN0_RTC0TR__STOP      0x00 ///< RTC timer is stopped.                           
#define RTC0CN0_RTC0TR__RUN       0x10 ///< RTC timer is running.                           
                                                                                            
#define RTC0CN0_OSCFAIL__BMASK    0x20 ///< RTC Oscillator Fail Event Flag                  
#define RTC0CN0_OSCFAIL__SHIFT    0x05 ///< RTC Oscillator Fail Event Flag                  
#define RTC0CN0_OSCFAIL__NOT_SET  0x00 ///< Missing RTC detector timeout did not occur.     
#define RTC0CN0_OSCFAIL__SET      0x20 ///< Missing RTC detector timeout occurred.          
                                                                                            
#define RTC0CN0_MCLKEN__BMASK     0x40 ///< Missing RTC Detector Enable                     
#define RTC0CN0_MCLKEN__SHIFT     0x06 ///< Missing RTC Detector Enable                     
#define RTC0CN0_MCLKEN__DISABLED  0x00 ///< Disable missing RTC detector.                   
#define RTC0CN0_MCLKEN__ENABLED   0x40 ///< Enable missing RTC detector.                    
                                                                                            
#define RTC0CN0_RTC0EN__BMASK     0x80 ///< RTC Enable                                      
#define RTC0CN0_RTC0EN__SHIFT     0x07 ///< RTC Enable                                      
#define RTC0CN0_RTC0EN__DISABLED  0x00 ///< Disable RTC oscillator.                         
#define RTC0CN0_RTC0EN__ENABLED   0x80 ///< Enable RTC oscillator.                          
                                                                                            
//------------------------------------------------------------------------------
// RTC0DAT Enums (RTC Data @ 0xAD)
//------------------------------------------------------------------------------
#define RTC0DAT_RTC0DAT__FMASK 0xFF ///< RTC Data
#define RTC0DAT_RTC0DAT__SHIFT 0x00 ///< RTC Data
                                                 
//------------------------------------------------------------------------------
// RTC0KEY Enums (RTC Lock and Key @ 0xAE)
//------------------------------------------------------------------------------
#define RTC0KEY_RTC0ST__FMASK           0xFF ///< RTC Interface Lock/Key and Status                 
#define RTC0KEY_RTC0ST__SHIFT           0x00 ///< RTC Interface Lock/Key and Status                 
#define RTC0KEY_RTC0ST__LOCKED          0x00 ///< RTC Interface is locked. Writing 0xA5 followed by 
                                             ///< 0xF1 unlocks the RTC interface.                   
#define RTC0KEY_RTC0ST__FIRST           0x01 ///< RTC Interface is locked, but 0xA5 has already been
                                             ///< written. Writing any value other than the second  
                                             ///< key code (0xF1) will change this field to 3 and   
                                             ///< disable the RTC interface until the next system   
                                             ///< reset.                                            
#define RTC0KEY_RTC0ST__UNLOCKED        0x02 ///< RTC Interface is unlocked. Any write to the       
                                             ///< RTC0KEY register will lock the RTC Interface.     
#define RTC0KEY_RTC0ST__DISABLED        0x03 ///< RTC Interface is disabled until the next system   
                                             ///< reset. Any writes to RTC0KEY have no effect.      
#define RTC0KEY_RTC0ST__DISABLE_OR_LOCK 0x0A ///< Writing any value other than 0xF1 for the second  
                                             ///< byte will disable the interface. Writing any value
                                             ///< when the interface is unlocked will lock the      
                                             ///< interface.                                        
#define RTC0KEY_RTC0ST__KEY1            0xA5 ///< Writing 0xA5 followed by 0xF1 unlocks the RTC     
                                             ///< interface.                                        
#define RTC0KEY_RTC0ST__KEY2            0xF1 ///< Writing 0xA5 followed by 0xF1 unlocks the RTC     
                                             ///< interface.                                        
                                                                                                    
//------------------------------------------------------------------------------
// RTC0PIN Enums (RTC Pin Configuration @ 0x07)
//------------------------------------------------------------------------------
#define RTC0PIN_RTCPIN__FMASK          0xFF ///< RTC Pin Configuration                             
#define RTC0PIN_RTCPIN__SHIFT          0x00 ///< RTC Pin Configuration                             
#define RTC0PIN_RTCPIN__NORMAL         0x67 ///< XTAL3 and XTAL4 are in their normal configuration.
#define RTC0PIN_RTCPIN__SELF_OSCILLATE 0xE7 ///< XTAL3 and XTAL4 are internally shorted for use    
                                            ///< with self-oscillate mode.                         
                                                                                                   
//------------------------------------------------------------------------------
// RTC0XCF Enums (RTC Oscillator Configuration @ 0x06)
//------------------------------------------------------------------------------
#define RTC0XCF_LOADCAP__FMASK    0x0F ///< Load Capacitance Programmed Value                
#define RTC0XCF_LOADCAP__SHIFT    0x00 ///< Load Capacitance Programmed Value                
                                                                                             
#define RTC0XCF_LOADRDY__BMASK    0x40 ///< Load Capacitance Ready Indicator                 
#define RTC0XCF_LOADRDY__SHIFT    0x06 ///< Load Capacitance Ready Indicator                 
#define RTC0XCF_LOADRDY__NOT_SET  0x00 ///< Load capacitance is currently stepping.          
#define RTC0XCF_LOADRDY__SET      0x40 ///< Load capacitance has reached it programmed value.
                                                                                             
#define RTC0XCF_AUTOSTP__BMASK    0x80 ///< Automatic Load Capacitance Stepping Enable       
#define RTC0XCF_AUTOSTP__SHIFT    0x07 ///< Automatic Load Capacitance Stepping Enable       
#define RTC0XCF_AUTOSTP__DISABLED 0x00 ///< Disable load capacitance stepping.               
#define RTC0XCF_AUTOSTP__ENABLED  0x80 ///< Enable load capacitance stepping.                
                                                                                             
//------------------------------------------------------------------------------
// RTC0XCN0 Enums (RTC Oscillator Control 0 @ 0x05)
//------------------------------------------------------------------------------
#define RTC0XCN0_CLKVLD__BMASK         0x10 ///< RTC Oscillator Crystal Valid Indicator            
#define RTC0XCN0_CLKVLD__SHIFT         0x04 ///< RTC Oscillator Crystal Valid Indicator            
#define RTC0XCN0_CLKVLD__NOT_SET       0x00 ///< Oscillation has not started or oscillation        
                                            ///< amplitude is too low to maintain oscillation.     
#define RTC0XCN0_CLKVLD__SET           0x10 ///< Sufficient oscillation amplitude detected.        
                                                                                                   
#define RTC0XCN0_BIASX2__BMASK         0x20 ///< RTC Oscillator Bias Double Enable                 
#define RTC0XCN0_BIASX2__SHIFT         0x05 ///< RTC Oscillator Bias Double Enable                 
#define RTC0XCN0_BIASX2__DISABLED      0x00 ///< Disable the Bias Double feature.                  
#define RTC0XCN0_BIASX2__ENABLED       0x20 ///< Enable the Bias Double feature.                   
                                                                                                   
#define RTC0XCN0_XMODE__BMASK          0x40 ///< RTC Oscillator Mode                               
#define RTC0XCN0_XMODE__SHIFT          0x06 ///< RTC Oscillator Mode                               
#define RTC0XCN0_XMODE__SELF_OSCILLATE 0x00 ///< Self-Oscillate Mode selected.                     
#define RTC0XCN0_XMODE__CRYSTAL        0x40 ///< Crystal Mode selected.                            
                                                                                                   
#define RTC0XCN0_AGCEN__BMASK          0x80 ///< RTC Oscillator Automatic Gain Control (AGC) Enable
#define RTC0XCN0_AGCEN__SHIFT          0x07 ///< RTC Oscillator Automatic Gain Control (AGC) Enable
#define RTC0XCN0_AGCEN__DISABLED       0x00 ///< Disable AGC.                                      
#define RTC0XCN0_AGCEN__ENABLED        0x80 ///< Enable AGC.                                       
                                                                                                   
//------------------------------------------------------------------------------
// SFRPAGE Enums (SFR Page @ 0xA7)
//------------------------------------------------------------------------------
#define SFRPAGE_SFRPAGE__FMASK 0xFF ///< SFR Page
#define SFRPAGE_SFRPAGE__SHIFT 0x00 ///< SFR Page
                                                 
//------------------------------------------------------------------------------
// SMB0ADM Enums (SMBus 0 Slave Address Mask @ 0xF5)
//------------------------------------------------------------------------------
#define SMB0ADM_EHACK__BMASK             0x01 ///< Hardware Acknowledge Enable                     
#define SMB0ADM_EHACK__SHIFT             0x00 ///< Hardware Acknowledge Enable                     
#define SMB0ADM_EHACK__ADR_ACK_MANUAL    0x00 ///< Firmware must manually acknowledge all incoming 
                                              ///< address and data bytes.                         
#define SMB0ADM_EHACK__ADR_ACK_AUTOMATIC 0x01 ///< Automatic slave address recognition and hardware
                                              ///< acknowledge is enabled.                         
                                                                                                   
#define SMB0ADM_SLVM__FMASK              0xFE ///< SMBus Slave Address Mask                        
#define SMB0ADM_SLVM__SHIFT              0x01 ///< SMBus Slave Address Mask                        
                                                                                                   
//------------------------------------------------------------------------------
// SMB0ADR Enums (SMBus 0 Slave Address @ 0xF4)
//------------------------------------------------------------------------------
#define SMB0ADR_GC__BMASK      0x01 ///< General Call Address Enable        
#define SMB0ADR_GC__SHIFT      0x00 ///< General Call Address Enable        
#define SMB0ADR_GC__IGNORED    0x00 ///< General Call Address is ignored.   
#define SMB0ADR_GC__RECOGNIZED 0x01 ///< General Call Address is recognized.
                                                                            
#define SMB0ADR_SLV__FMASK     0xFE ///< SMBus Hardware Slave Address       
#define SMB0ADR_SLV__SHIFT     0x01 ///< SMBus Hardware Slave Address       
                                                                            
//------------------------------------------------------------------------------
// SMB0CF Enums (SMBus 0 Configuration @ 0xC1)
//------------------------------------------------------------------------------
#define SMB0CF_SMBCS__FMASK             0x03 ///< SMBus Clock Source Selection                     
#define SMB0CF_SMBCS__SHIFT             0x00 ///< SMBus Clock Source Selection                     
#define SMB0CF_SMBCS__TIMER0            0x00 ///< Timer 0 Overflow.                                
#define SMB0CF_SMBCS__TIMER1            0x01 ///< Timer 1 Overflow.                                
#define SMB0CF_SMBCS__TIMER2_HIGH       0x02 ///< Timer 2 High Byte Overflow.                      
#define SMB0CF_SMBCS__TIMER2_LOW        0x03 ///< Timer 2 Low Byte Overflow.                       
                                                                                                   
#define SMB0CF_SMBFTE__BMASK            0x04 ///< SMBus Free Timeout Detection Enable              
#define SMB0CF_SMBFTE__SHIFT            0x02 ///< SMBus Free Timeout Detection Enable              
#define SMB0CF_SMBFTE__FREE_TO_DISABLED 0x00 ///< Disable bus free timeouts.                       
#define SMB0CF_SMBFTE__FREE_TO_ENABLED  0x04 ///< Enable bus free timeouts. The bus the bus will be
                                             ///< considered free if SCL and SDA remain high for   
                                             ///< more than 10 SMBus clock source periods.         
                                                                                                   
#define SMB0CF_SMBTOE__BMASK            0x08 ///< SMBus SCL Timeout Detection Enable               
#define SMB0CF_SMBTOE__SHIFT            0x03 ///< SMBus SCL Timeout Detection Enable               
#define SMB0CF_SMBTOE__SCL_TO_DISABLED  0x00 ///< Disable SCL low timeouts.                        
#define SMB0CF_SMBTOE__SCL_TO_ENABLED   0x08 ///< Enable SCL low timeouts.                         
                                                                                                   
#define SMB0CF_EXTHOLD__BMASK           0x10 ///< SMBus Setup and Hold Time Extension Enable       
#define SMB0CF_EXTHOLD__SHIFT           0x04 ///< SMBus Setup and Hold Time Extension Enable       
#define SMB0CF_EXTHOLD__DISABLED        0x00 ///< Disable SDA extended setup and hold times.       
#define SMB0CF_EXTHOLD__ENABLED         0x10 ///< Enable SDA extended setup and hold times.        
                                                                                                   
#define SMB0CF_BUSY__BMASK              0x20 ///< SMBus Busy Indicator                             
#define SMB0CF_BUSY__SHIFT              0x05 ///< SMBus Busy Indicator                             
#define SMB0CF_BUSY__NOT_SET            0x00 ///< The bus is not busy.                             
#define SMB0CF_BUSY__SET                0x20 ///< The bus is busy and a transfer is currently in   
                                             ///< progress.                                        
                                                                                                   
#define SMB0CF_INH__BMASK               0x40 ///< SMBus Slave Inhibit                              
#define SMB0CF_INH__SHIFT               0x06 ///< SMBus Slave Inhibit                              
#define SMB0CF_INH__SLAVE_ENABLED       0x00 ///< Slave states are enabled.                        
#define SMB0CF_INH__SLAVE_DISABLED      0x40 ///< Slave states are inhibited.                      
                                                                                                   
#define SMB0CF_ENSMB__BMASK             0x80 ///< SMBus Enable                                     
#define SMB0CF_ENSMB__SHIFT             0x07 ///< SMBus Enable                                     
#define SMB0CF_ENSMB__DISABLED          0x00 ///< Disable the SMBus module.                        
#define SMB0CF_ENSMB__ENABLED           0x80 ///< Enable the SMBus module.                         
                                                                                                   
//------------------------------------------------------------------------------
// SMB0CN0 Enums (SMBus 0 Control @ 0xC0)
//------------------------------------------------------------------------------
#define SMB0CN0_SI__BMASK           0x01 ///< SMBus Interrupt Flag                           
#define SMB0CN0_SI__SHIFT           0x00 ///< SMBus Interrupt Flag                           
#define SMB0CN0_SI__NOT_SET         0x00 ///<                                                
#define SMB0CN0_SI__SET             0x01 ///<                                                
                                                                                             
#define SMB0CN0_ACK__BMASK          0x02 ///< SMBus Acknowledge                              
#define SMB0CN0_ACK__SHIFT          0x01 ///< SMBus Acknowledge                              
#define SMB0CN0_ACK__NOT_SET        0x00 ///< Generate a NACK, or the response was a NACK.   
#define SMB0CN0_ACK__SET            0x02 ///< Generate an ACK, or the response was an ACK.   
                                                                                             
#define SMB0CN0_ARBLOST__BMASK      0x04 ///< SMBus Arbitration Lost Indicator               
#define SMB0CN0_ARBLOST__SHIFT      0x02 ///< SMBus Arbitration Lost Indicator               
#define SMB0CN0_ARBLOST__NOT_SET    0x00 ///< No arbitration error.                          
#define SMB0CN0_ARBLOST__ERROR      0x04 ///< Arbitration error occurred.                    
                                                                                             
#define SMB0CN0_ACKRQ__BMASK        0x08 ///< SMBus Acknowledge Request                      
#define SMB0CN0_ACKRQ__SHIFT        0x03 ///< SMBus Acknowledge Request                      
#define SMB0CN0_ACKRQ__NOT_SET      0x00 ///< No ACK requested.                              
#define SMB0CN0_ACKRQ__REQUESTED    0x08 ///< ACK requested.                                 
                                                                                             
#define SMB0CN0_STO__BMASK          0x10 ///< SMBus Stop Flag                                
#define SMB0CN0_STO__SHIFT          0x04 ///< SMBus Stop Flag                                
#define SMB0CN0_STO__NOT_SET        0x00 ///< A STOP is not pending.                         
#define SMB0CN0_STO__SET            0x10 ///< Generate a STOP or a STOP is currently pending.
                                                                                             
#define SMB0CN0_STA__BMASK          0x20 ///< SMBus Start Flag                               
#define SMB0CN0_STA__SHIFT          0x05 ///< SMBus Start Flag                               
#define SMB0CN0_STA__NOT_SET        0x00 ///< A START was not detected.                      
#define SMB0CN0_STA__SET            0x20 ///< Generate a START, repeated START, or a START is
                                         ///< currently pending.                             
                                                                                             
#define SMB0CN0_TXMODE__BMASK       0x40 ///< SMBus Transmit Mode Indicator                  
#define SMB0CN0_TXMODE__SHIFT       0x06 ///< SMBus Transmit Mode Indicator                  
#define SMB0CN0_TXMODE__RECEIVER    0x00 ///< SMBus in Receiver Mode.                        
#define SMB0CN0_TXMODE__TRANSMITTER 0x40 ///< SMBus in Transmitter Mode.                     
                                                                                             
#define SMB0CN0_MASTER__BMASK       0x80 ///< SMBus Master/Slave Indicator                   
#define SMB0CN0_MASTER__SHIFT       0x07 ///< SMBus Master/Slave Indicator                   
#define SMB0CN0_MASTER__SLAVE       0x00 ///< SMBus operating in slave mode.                 
#define SMB0CN0_MASTER__MASTER      0x80 ///< SMBus operating in master mode.                
                                                                                             
//------------------------------------------------------------------------------
// SMB0DAT Enums (SMBus 0 Data @ 0xC2)
//------------------------------------------------------------------------------
#define SMB0DAT_SMB0DAT__FMASK 0xFF ///< SMBus 0 Data
#define SMB0DAT_SMB0DAT__SHIFT 0x00 ///< SMBus 0 Data
                                                     
//------------------------------------------------------------------------------
// SPI0CFG Enums (SPI0 Configuration @ 0xA1)
//------------------------------------------------------------------------------
#define SPI0CFG_RXBMT__BMASK                0x01 ///< Receive Buffer Empty                              
#define SPI0CFG_RXBMT__SHIFT                0x00 ///< Receive Buffer Empty                              
#define SPI0CFG_RXBMT__NOT_SET              0x00 ///< New data is available in the receive buffer (Slave
                                                 ///< mode).                                            
#define SPI0CFG_RXBMT__SET                  0x01 ///< No new data in the receive buffer (Slave mode).   
                                                                                                        
#define SPI0CFG_SRMT__BMASK                 0x02 ///< Shift Register Empty                              
#define SPI0CFG_SRMT__SHIFT                 0x01 ///< Shift Register Empty                              
#define SPI0CFG_SRMT__NOT_SET               0x00 ///< The shift register is not empty.                  
#define SPI0CFG_SRMT__SET                   0x02 ///< The shift register is empty.                      
                                                                                                        
#define SPI0CFG_NSSIN__BMASK                0x04 ///< NSS Instantaneous Pin Input                       
#define SPI0CFG_NSSIN__SHIFT                0x02 ///< NSS Instantaneous Pin Input                       
#define SPI0CFG_NSSIN__LOW                  0x00 ///< The NSS pin is low.                               
#define SPI0CFG_NSSIN__HIGH                 0x04 ///< The NSS pin is high.                              
                                                                                                        
#define SPI0CFG_SLVSEL__BMASK               0x08 ///< Slave Selected Flag                               
#define SPI0CFG_SLVSEL__SHIFT               0x03 ///< Slave Selected Flag                               
#define SPI0CFG_SLVSEL__NOT_SELECTED        0x00 ///< The Slave is not selected (NSS is high).          
#define SPI0CFG_SLVSEL__SELECTED            0x08 ///< The Slave is selected (NSS is low).               
                                                                                                        
#define SPI0CFG_CKPOL__BMASK                0x10 ///< SPI0 Clock Polarity                               
#define SPI0CFG_CKPOL__SHIFT                0x04 ///< SPI0 Clock Polarity                               
#define SPI0CFG_CKPOL__IDLE_LOW             0x00 ///< SCK line low in idle state.                       
#define SPI0CFG_CKPOL__IDLE_HIGH            0x10 ///< SCK line high in idle state.                      
                                                                                                        
#define SPI0CFG_CKPHA__BMASK                0x20 ///< SPI0 Clock Phase                                  
#define SPI0CFG_CKPHA__SHIFT                0x05 ///< SPI0 Clock Phase                                  
#define SPI0CFG_CKPHA__DATA_CENTERED_FIRST  0x00 ///< Data centered on first edge of SCK period.        
#define SPI0CFG_CKPHA__DATA_CENTERED_SECOND 0x20 ///< Data centered on second edge of SCK period.       
                                                                                                        
#define SPI0CFG_MSTEN__BMASK                0x40 ///< Master Mode Enable                                
#define SPI0CFG_MSTEN__SHIFT                0x06 ///< Master Mode Enable                                
#define SPI0CFG_MSTEN__MASTER_DISABLED      0x00 ///< Disable master mode. Operate in slave mode.       
#define SPI0CFG_MSTEN__MASTER_ENABLED       0x40 ///< Enable master mode. Operate as a master.          
                                                                                                        
#define SPI0CFG_SPIBSY__BMASK               0x80 ///< SPI Busy                                          
#define SPI0CFG_SPIBSY__SHIFT               0x07 ///< SPI Busy                                          
#define SPI0CFG_SPIBSY__NOT_SET             0x00 ///< A SPI transfer is not in progress.                
#define SPI0CFG_SPIBSY__SET                 0x80 ///< A SPI transfer is in progress.                    
                                                                                                        
//------------------------------------------------------------------------------
// SPI0CKR Enums (SPI0 Clock Rate @ 0xA2)
//------------------------------------------------------------------------------
#define SPI0CKR_SPI0CKR__FMASK 0xFF ///< SPI0 Clock Rate
#define SPI0CKR_SPI0CKR__SHIFT 0x00 ///< SPI0 Clock Rate
                                                        
//------------------------------------------------------------------------------
// SPI0CN0 Enums (SPI0 Control @ 0xF8)
//------------------------------------------------------------------------------
#define SPI0CN0_SPIEN__BMASK                  0x01 ///< SPI0 Enable                                       
#define SPI0CN0_SPIEN__SHIFT                  0x00 ///< SPI0 Enable                                       
#define SPI0CN0_SPIEN__DISABLED               0x00 ///< Disable the SPI module.                           
#define SPI0CN0_SPIEN__ENABLED                0x01 ///< Enable the SPI module.                            
                                                                                                          
#define SPI0CN0_TXBMT__BMASK                  0x02 ///< Transmit Buffer Empty                             
#define SPI0CN0_TXBMT__SHIFT                  0x01 ///< Transmit Buffer Empty                             
#define SPI0CN0_TXBMT__NOT_SET                0x00 ///< The transmit buffer is not empty.                 
#define SPI0CN0_TXBMT__SET                    0x02 ///< The transmit buffer is empty.                     
                                                                                                          
#define SPI0CN0_NSSMD__FMASK                  0x0C ///< Slave Select Mode                                 
#define SPI0CN0_NSSMD__SHIFT                  0x02 ///< Slave Select Mode                                 
#define SPI0CN0_NSSMD__3_WIRE                 0x00 ///< 3-Wire Slave or 3-Wire Master Mode. NSS signal is 
                                                   ///< not routed to a port pin.                         
#define SPI0CN0_NSSMD__4_WIRE_SLAVE           0x04 ///< 4-Wire Slave or Multi-Master Mode. NSS is an input
                                                   ///< to the device.                                    
#define SPI0CN0_NSSMD__4_WIRE_MASTER_NSS_LOW  0x08 ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                   ///< logic low.                                        
#define SPI0CN0_NSSMD__4_WIRE_MASTER_NSS_HIGH 0x0C ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                   ///< logic high.                                       
                                                                                                          
#define SPI0CN0_RXOVRN__BMASK                 0x10 ///< Receive Overrun Flag                              
#define SPI0CN0_RXOVRN__SHIFT                 0x04 ///< Receive Overrun Flag                              
#define SPI0CN0_RXOVRN__NOT_SET               0x00 ///< A receive overrun did not occur.                  
#define SPI0CN0_RXOVRN__SET                   0x10 ///< A receive overrun occurred.                       
                                                                                                          
#define SPI0CN0_MODF__BMASK                   0x20 ///< Mode Fault Flag                                   
#define SPI0CN0_MODF__SHIFT                   0x05 ///< Mode Fault Flag                                   
#define SPI0CN0_MODF__NOT_SET                 0x00 ///< A master collision did not occur.                 
#define SPI0CN0_MODF__SET                     0x20 ///< A master collision occurred.                      
                                                                                                          
#define SPI0CN0_WCOL__BMASK                   0x40 ///< Write Collision Flag                              
#define SPI0CN0_WCOL__SHIFT                   0x06 ///< Write Collision Flag                              
#define SPI0CN0_WCOL__NOT_SET                 0x00 ///< A write collision did not occur.                  
#define SPI0CN0_WCOL__SET                     0x40 ///< A write collision occurred.                       
                                                                                                          
#define SPI0CN0_SPIF__BMASK                   0x80 ///< SPI0 Interrupt Flag                               
#define SPI0CN0_SPIF__SHIFT                   0x07 ///< SPI0 Interrupt Flag                               
#define SPI0CN0_SPIF__NOT_SET                 0x00 ///< A data transfer has not completed since the last  
                                                   ///< time SPIF was cleared.                            
#define SPI0CN0_SPIF__SET                     0x80 ///< A data transfer completed.                        
                                                                                                          
//------------------------------------------------------------------------------
// SPI0DAT Enums (SPI0 Data @ 0xA3)
//------------------------------------------------------------------------------
#define SPI0DAT_SPI0DAT__FMASK 0xFF ///< SPI0 Transmit and Receive Data
#define SPI0DAT_SPI0DAT__SHIFT 0x00 ///< SPI0 Transmit and Receive Data
                                                                       
//------------------------------------------------------------------------------
// SPI1CFG Enums (SPI1 Configuration @ 0x84)
//------------------------------------------------------------------------------
#define SPI1CFG_RXBMT__BMASK                0x01 ///< Receive Buffer Empty                              
#define SPI1CFG_RXBMT__SHIFT                0x00 ///< Receive Buffer Empty                              
#define SPI1CFG_RXBMT__NOT_SET              0x00 ///< New data is available in the receive buffer (Slave
                                                 ///< mode).                                            
#define SPI1CFG_RXBMT__SET                  0x01 ///< No new data in the receive buffer (Slave mode).   
                                                                                                        
#define SPI1CFG_SRMT__BMASK                 0x02 ///< Shift Register Empty                              
#define SPI1CFG_SRMT__SHIFT                 0x01 ///< Shift Register Empty                              
#define SPI1CFG_SRMT__NOT_SET               0x00 ///< The shift register is not empty.                  
#define SPI1CFG_SRMT__SET                   0x02 ///< The shift register is empty.                      
                                                                                                        
#define SPI1CFG_NSSIN__BMASK                0x04 ///< NSS Instantaneous Pin Input                       
#define SPI1CFG_NSSIN__SHIFT                0x02 ///< NSS Instantaneous Pin Input                       
#define SPI1CFG_NSSIN__LOW                  0x00 ///< The NSS pin is low.                               
#define SPI1CFG_NSSIN__HIGH                 0x04 ///< The NSS pin is high.                              
                                                                                                        
#define SPI1CFG_SLVSEL__BMASK               0x08 ///< Slave Selected Flag                               
#define SPI1CFG_SLVSEL__SHIFT               0x03 ///< Slave Selected Flag                               
#define SPI1CFG_SLVSEL__NOT_SELECTED        0x00 ///< The Slave is not selected (NSS is high).          
#define SPI1CFG_SLVSEL__SELECTED            0x08 ///< The Slave is selected (NSS is low).               
                                                                                                        
#define SPI1CFG_CKPOL__BMASK                0x10 ///< SPI1 Clock Polarity                               
#define SPI1CFG_CKPOL__SHIFT                0x04 ///< SPI1 Clock Polarity                               
#define SPI1CFG_CKPOL__IDLE_LOW             0x00 ///< SCK line low in idle state.                       
#define SPI1CFG_CKPOL__IDLE_HIGH            0x10 ///< SCK line high in idle state.                      
                                                                                                        
#define SPI1CFG_CKPHA__BMASK                0x20 ///< SPI1 Clock Phase                                  
#define SPI1CFG_CKPHA__SHIFT                0x05 ///< SPI1 Clock Phase                                  
#define SPI1CFG_CKPHA__DATA_CENTERED_FIRST  0x00 ///< Data centered on first edge of SCK period.        
#define SPI1CFG_CKPHA__DATA_CENTERED_SECOND 0x20 ///< Data centered on second edge of SCK period.       
                                                                                                        
#define SPI1CFG_MSTEN__BMASK                0x40 ///< Master Mode Enable                                
#define SPI1CFG_MSTEN__SHIFT                0x06 ///< Master Mode Enable                                
#define SPI1CFG_MSTEN__MASTER_DISABLED      0x00 ///< Disable master mode. Operate in slave mode.       
#define SPI1CFG_MSTEN__MASTER_ENABLED       0x40 ///< Enable master mode. Operate as a master.          
                                                                                                        
#define SPI1CFG_SPIBSY__BMASK               0x80 ///< SPI Busy                                          
#define SPI1CFG_SPIBSY__SHIFT               0x07 ///< SPI Busy                                          
#define SPI1CFG_SPIBSY__NOT_SET             0x00 ///< A SPI transfer is not in progress.                
#define SPI1CFG_SPIBSY__SET                 0x80 ///< A SPI transfer is in progress.                    
                                                                                                        
//------------------------------------------------------------------------------
// SPI1CKR Enums (SPI1 Clock Rate @ 0x85)
//------------------------------------------------------------------------------
#define SPI1CKR_SPI1CKR__FMASK 0xFF ///< SPI1 Clock Rate
#define SPI1CKR_SPI1CKR__SHIFT 0x00 ///< SPI1 Clock Rate
                                                        
//------------------------------------------------------------------------------
// SPI1CN0 Enums (SPI1 Control @ 0xB0)
//------------------------------------------------------------------------------
#define SPI1CN0_SPIEN__BMASK                  0x01 ///< SPI1 Enable                                       
#define SPI1CN0_SPIEN__SHIFT                  0x00 ///< SPI1 Enable                                       
#define SPI1CN0_SPIEN__DISABLED               0x00 ///< Disable the SPI module.                           
#define SPI1CN0_SPIEN__ENABLED                0x01 ///< Enable the SPI module.                            
                                                                                                          
#define SPI1CN0_TXBMT__BMASK                  0x02 ///< Transmit Buffer Empty                             
#define SPI1CN0_TXBMT__SHIFT                  0x01 ///< Transmit Buffer Empty                             
#define SPI1CN0_TXBMT__NOT_SET                0x00 ///< The transmit buffer is not empty.                 
#define SPI1CN0_TXBMT__SET                    0x02 ///< The transmit buffer is empty.                     
                                                                                                          
#define SPI1CN0_NSSMD__FMASK                  0x0C ///< Slave Select Mode                                 
#define SPI1CN0_NSSMD__SHIFT                  0x02 ///< Slave Select Mode                                 
#define SPI1CN0_NSSMD__3_WIRE                 0x00 ///< 3-Wire Slave or 3-Wire Master Mode. NSS signal is 
                                                   ///< not routed to a port pin.                         
#define SPI1CN0_NSSMD__4_WIRE_SLAVE           0x04 ///< 4-Wire Slave or Multi-Master Mode. NSS is an input
                                                   ///< to the device.                                    
#define SPI1CN0_NSSMD__4_WIRE_MASTER_NSS_LOW  0x08 ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                   ///< logic low.                                        
#define SPI1CN0_NSSMD__4_WIRE_MASTER_NSS_HIGH 0x0C ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                   ///< logic high.                                       
                                                                                                          
#define SPI1CN0_RXOVRN__BMASK                 0x10 ///< Receive Overrun Flag                              
#define SPI1CN0_RXOVRN__SHIFT                 0x04 ///< Receive Overrun Flag                              
#define SPI1CN0_RXOVRN__NOT_SET               0x00 ///< A receive overrun did not occur.                  
#define SPI1CN0_RXOVRN__SET                   0x10 ///< A receive overrun occurred.                       
                                                                                                          
#define SPI1CN0_MODF__BMASK                   0x20 ///< Mode Fault Flag                                   
#define SPI1CN0_MODF__SHIFT                   0x05 ///< Mode Fault Flag                                   
#define SPI1CN0_MODF__NOT_SET                 0x00 ///< A master collision did not occur.                 
#define SPI1CN0_MODF__SET                     0x20 ///< A master collision occurred.                      
                                                                                                          
#define SPI1CN0_WCOL__BMASK                   0x40 ///< Write Collision Flag                              
#define SPI1CN0_WCOL__SHIFT                   0x06 ///< Write Collision Flag                              
#define SPI1CN0_WCOL__NOT_SET                 0x00 ///< A write collision did not occur.                  
#define SPI1CN0_WCOL__SET                     0x40 ///< A write collision occurred.                       
                                                                                                          
#define SPI1CN0_SPIF__BMASK                   0x80 ///< SPI1 Interrupt Flag                               
#define SPI1CN0_SPIF__SHIFT                   0x07 ///< SPI1 Interrupt Flag                               
#define SPI1CN0_SPIF__NOT_SET                 0x00 ///< A data transfer has not completed since the last  
                                                   ///< time SPIF was cleared.                            
#define SPI1CN0_SPIF__SET                     0x80 ///< A data transfer completed.                        
                                                                                                          
//------------------------------------------------------------------------------
// SPI1DAT Enums (SPI1 Data @ 0x86)
//------------------------------------------------------------------------------
#define SPI1DAT_SPI1DAT__FMASK 0xFF ///< SPI1 Transmit and Receive Data
#define SPI1DAT_SPI1DAT__SHIFT 0x00 ///< SPI1 Transmit and Receive Data
                                                                       
//------------------------------------------------------------------------------
// TOFFH Enums (Temperature Sensor Offset High @ 0x86)
//------------------------------------------------------------------------------
#define TOFFH_TOFF__FMASK 0xFF ///< Temperature Sensor Offset High
#define TOFFH_TOFF__SHIFT 0x00 ///< Temperature Sensor Offset High
                                                                  
//------------------------------------------------------------------------------
// TOFFL Enums (Temperature Sensor Offset Low @ 0x85)
//------------------------------------------------------------------------------
#define TOFFL_TOFF__FMASK 0xC0 ///< Temperature Sensor Offset Low
#define TOFFL_TOFF__SHIFT 0x06 ///< Temperature Sensor Offset Low
                                                                 
//------------------------------------------------------------------------------
// TH0 Enums (Timer 0 High Byte @ 0x8C)
//------------------------------------------------------------------------------
#define TH0_TH0__FMASK 0xFF ///< Timer 0 High Byte
#define TH0_TH0__SHIFT 0x00 ///< Timer 0 High Byte
                                                  
//------------------------------------------------------------------------------
// TH1 Enums (Timer 1 High Byte @ 0x8D)
//------------------------------------------------------------------------------
#define TH1_TH1__FMASK 0xFF ///< Timer 1 High Byte
#define TH1_TH1__SHIFT 0x00 ///< Timer 1 High Byte
                                                  
//------------------------------------------------------------------------------
// TL0 Enums (Timer 0 Low Byte @ 0x8A)
//------------------------------------------------------------------------------
#define TL0_TL0__FMASK 0xFF ///< Timer 0 Low Byte
#define TL0_TL0__SHIFT 0x00 ///< Timer 0 Low Byte
                                                 
//------------------------------------------------------------------------------
// TL1 Enums (Timer 1 Low Byte @ 0x8B)
//------------------------------------------------------------------------------
#define TL1_TL1__FMASK 0xFF ///< Timer 1 Low Byte
#define TL1_TL1__SHIFT 0x00 ///< Timer 1 Low Byte
                                                 
//------------------------------------------------------------------------------
// TMR2CN0 Enums (Timer 2 Control 0 @ 0xC8)
//------------------------------------------------------------------------------
#define TMR2CN0_T2XCLK__FMASK                  0x03 ///< Timer 2 External Clock Select                     
#define TMR2CN0_T2XCLK__SHIFT                  0x00 ///< Timer 2 External Clock Select                     
#define TMR2CN0_T2XCLK__SYSCLK_DIV_12_CAP_RTC  0x00 ///< External Clock is SYSCLK/12. Capture trigger is   
                                                    ///< RTC/8.                                            
#define TMR2CN0_T2XCLK__CMP_0_CAP_RTC          0x01 ///< External Clock is Comparator 0. Capture trigger is
                                                    ///< RTC/8.                                            
#define TMR2CN0_T2XCLK__SYSCLK_DIV_12_CAP_CMP0 0x02 ///< External Clock is SYSCLK/12. Capture trigger is   
                                                    ///< Comparator 0.                                     
#define TMR2CN0_T2XCLK__RTC_DIV_8_CAP_CMP0     0x03 ///< External Clock is RTC/8. Capture trigger is       
                                                    ///< Comparator 0.                                     
                                                                                                           
#define TMR2CN0_TR2__BMASK                     0x04 ///< Timer 2 Run Control                               
#define TMR2CN0_TR2__SHIFT                     0x02 ///< Timer 2 Run Control                               
#define TMR2CN0_TR2__STOP                      0x00 ///< Stop Timer 2.                                     
#define TMR2CN0_TR2__RUN                       0x04 ///< Start Timer 2 running.                            
                                                                                                           
#define TMR2CN0_T2SPLIT__BMASK                 0x08 ///< Timer 2 Split Mode Enable                         
#define TMR2CN0_T2SPLIT__SHIFT                 0x03 ///< Timer 2 Split Mode Enable                         
#define TMR2CN0_T2SPLIT__16_BIT_RELOAD         0x00 ///< Timer 2 operates in 16-bit auto-reload mode.      
#define TMR2CN0_T2SPLIT__8_BIT_RELOAD          0x08 ///< Timer 2 operates as two 8-bit auto-reload timers. 
                                                                                                           
#define TMR2CN0_TF2CEN__BMASK                  0x10 ///< Timer 2 Capture Enable                            
#define TMR2CN0_TF2CEN__SHIFT                  0x04 ///< Timer 2 Capture Enable                            
#define TMR2CN0_TF2CEN__DISABLED               0x00 ///< Disable capture mode.                             
#define TMR2CN0_TF2CEN__ENABLED                0x10 ///< Enable capture mode.                              
                                                                                                           
#define TMR2CN0_TF2LEN__BMASK                  0x20 ///< Timer 2 Low Byte Interrupt Enable                 
#define TMR2CN0_TF2LEN__SHIFT                  0x05 ///< Timer 2 Low Byte Interrupt Enable                 
#define TMR2CN0_TF2LEN__DISABLED               0x00 ///< Disable low byte interrupts.                      
#define TMR2CN0_TF2LEN__ENABLED                0x20 ///< Enable low byte interrupts.                       
                                                                                                           
#define TMR2CN0_TF2L__BMASK                    0x40 ///< Timer 2 Low Byte Overflow Flag                    
#define TMR2CN0_TF2L__SHIFT                    0x06 ///< Timer 2 Low Byte Overflow Flag                    
#define TMR2CN0_TF2L__NOT_SET                  0x00 ///< Timer 2 low byte did not overflow.                
#define TMR2CN0_TF2L__SET                      0x40 ///< Timer 2 low byte overflowed.                      
                                                                                                           
#define TMR2CN0_TF2H__BMASK                    0x80 ///< Timer 2 High Byte Overflow Flag                   
#define TMR2CN0_TF2H__SHIFT                    0x07 ///< Timer 2 High Byte Overflow Flag                   
#define TMR2CN0_TF2H__NOT_SET                  0x00 ///< Timer 2 8-bit high byte or 16-bit value did not   
                                                    ///< overflow.                                         
#define TMR2CN0_TF2H__SET                      0x80 ///< Timer 2 8-bit high byte or 16-bit value           
                                                    ///< overflowed.                                       
                                                                                                           
//------------------------------------------------------------------------------
// TMR2H Enums (Timer 2 High Byte @ 0xCD)
//------------------------------------------------------------------------------
#define TMR2H_TMR2H__FMASK 0xFF ///< Timer 2 High Byte
#define TMR2H_TMR2H__SHIFT 0x00 ///< Timer 2 High Byte
                                                      
//------------------------------------------------------------------------------
// TMR2L Enums (Timer 2 Low Byte @ 0xCC)
//------------------------------------------------------------------------------
#define TMR2L_TMR2L__FMASK 0xFF ///< Timer 2 Low Byte
#define TMR2L_TMR2L__SHIFT 0x00 ///< Timer 2 Low Byte
                                                     
//------------------------------------------------------------------------------
// TMR2RLH Enums (Timer 2 Reload High Byte @ 0xCB)
//------------------------------------------------------------------------------
#define TMR2RLH_TMR2RLH__FMASK 0xFF ///< Timer 2 Reload High Byte
#define TMR2RLH_TMR2RLH__SHIFT 0x00 ///< Timer 2 Reload High Byte
                                                                 
//------------------------------------------------------------------------------
// TMR2RLL Enums (Timer 2 Reload Low Byte @ 0xCA)
//------------------------------------------------------------------------------
#define TMR2RLL_TMR2RLL__FMASK 0xFF ///< Timer 2 Reload Low Byte
#define TMR2RLL_TMR2RLL__SHIFT 0x00 ///< Timer 2 Reload Low Byte
                                                                
//------------------------------------------------------------------------------
// TMR3CN0 Enums (Timer 3 Control 0 @ 0x91)
//------------------------------------------------------------------------------
#define TMR3CN0_T3XCLK__FMASK                    0x03 ///< Timer 3 External Clock Select                     
#define TMR3CN0_T3XCLK__SHIFT                    0x00 ///< Timer 3 External Clock Select                     
#define TMR3CN0_T3XCLK__SYSCLK_DIV_12_CAP_CMP1   0x00 ///< External Clock is SYSCLK/12. Capture trigger is   
                                                      ///< Comparator 1.                                     
#define TMR3CN0_T3XCLK__EXTOSC_DIV_8_CAP_CMP1    0x01 ///< External Clock is External Oscillator/8. Capture  
                                                      ///< trigger is Comparator 1.                          
#define TMR3CN0_T3XCLK__SYSCLK_DIV_12_CAP_EXTOSC 0x02 ///< External Clock is SYSCLK/12. Capture trigger is   
                                                      ///< External Oscillator/8.                            
#define TMR3CN0_T3XCLK__CMP1_CAP_EXTOSC          0x03 ///< External Clock is Comparator 1. Capture trigger is
                                                      ///< External Oscillator/8.                            
                                                                                                             
#define TMR3CN0_TR3__BMASK                       0x04 ///< Timer 3 Run Control                               
#define TMR3CN0_TR3__SHIFT                       0x02 ///< Timer 3 Run Control                               
#define TMR3CN0_TR3__STOP                        0x00 ///< Stop Timer 3.                                     
#define TMR3CN0_TR3__RUN                         0x04 ///< Start Timer 3 running.                            
                                                                                                             
#define TMR3CN0_T3SPLIT__BMASK                   0x08 ///< Timer 3 Split Mode Enable                         
#define TMR3CN0_T3SPLIT__SHIFT                   0x03 ///< Timer 3 Split Mode Enable                         
#define TMR3CN0_T3SPLIT__16_BIT_RELOAD           0x00 ///< Timer 3 operates in 16-bit auto-reload mode.      
#define TMR3CN0_T3SPLIT__8_BIT_RELOAD            0x08 ///< Timer 3 operates as two 8-bit auto-reload timers. 
                                                                                                             
#define TMR3CN0_TF3CEN__BMASK                    0x10 ///< Timer 3 Capture Enable                            
#define TMR3CN0_TF3CEN__SHIFT                    0x04 ///< Timer 3 Capture Enable                            
#define TMR3CN0_TF3CEN__DISABLED                 0x00 ///< Disable capture mode.                             
#define TMR3CN0_TF3CEN__ENABLED                  0x10 ///< Enable capture mode.                              
                                                                                                             
#define TMR3CN0_TF3LEN__BMASK                    0x20 ///< Timer 3 Low Byte Interrupt Enable                 
#define TMR3CN0_TF3LEN__SHIFT                    0x05 ///< Timer 3 Low Byte Interrupt Enable                 
#define TMR3CN0_TF3LEN__DISABLED                 0x00 ///< Disable low byte interrupts.                      
#define TMR3CN0_TF3LEN__ENABLED                  0x20 ///< Enable low byte interrupts.                       
                                                                                                             
#define TMR3CN0_TF3L__BMASK                      0x40 ///< Timer 3 Low Byte Overflow Flag                    
#define TMR3CN0_TF3L__SHIFT                      0x06 ///< Timer 3 Low Byte Overflow Flag                    
#define TMR3CN0_TF3L__NOT_SET                    0x00 ///< Timer 3 low byte did not overflow.                
#define TMR3CN0_TF3L__SET                        0x40 ///< Timer 3 low byte overflowed.                      
                                                                                                             
#define TMR3CN0_TF3H__BMASK                      0x80 ///< Timer 3 High Byte Overflow Flag                   
#define TMR3CN0_TF3H__SHIFT                      0x07 ///< Timer 3 High Byte Overflow Flag                   
#define TMR3CN0_TF3H__NOT_SET                    0x00 ///< Timer 3 8-bit high byte or 16-bit value did not   
                                                      ///< overflow.                                         
#define TMR3CN0_TF3H__SET                        0x80 ///< Timer 3 8-bit high byte or 16-bit value           
                                                      ///< overflowed.                                       
                                                                                                             
//------------------------------------------------------------------------------
// TMR3H Enums (Timer 3 High Byte @ 0x95)
//------------------------------------------------------------------------------
#define TMR3H_TMR3H__FMASK 0xFF ///< Timer 3 High Byte
#define TMR3H_TMR3H__SHIFT 0x00 ///< Timer 3 High Byte
                                                      
//------------------------------------------------------------------------------
// TMR3L Enums (Timer 3 Low Byte @ 0x94)
//------------------------------------------------------------------------------
#define TMR3L_TMR3L__FMASK 0xFF ///< Timer 3 Low Byte
#define TMR3L_TMR3L__SHIFT 0x00 ///< Timer 3 Low Byte
                                                     
//------------------------------------------------------------------------------
// TMR3RLH Enums (Timer 3 Reload High Byte @ 0x93)
//------------------------------------------------------------------------------
#define TMR3RLH_TMR3RLH__FMASK 0xFF ///< Timer 3 Reload High Byte
#define TMR3RLH_TMR3RLH__SHIFT 0x00 ///< Timer 3 Reload High Byte
                                                                 
//------------------------------------------------------------------------------
// TMR3RLL Enums (Timer 3 Reload Low Byte @ 0x92)
//------------------------------------------------------------------------------
#define TMR3RLL_TMR3RLL__FMASK 0xFF ///< Timer 3 Reload Low Byte
#define TMR3RLL_TMR3RLL__SHIFT 0x00 ///< Timer 3 Reload Low Byte
                                                                
//------------------------------------------------------------------------------
// CKCON0 Enums (Clock Control 0 @ 0x8E)
//------------------------------------------------------------------------------
#define CKCON0_SCA__FMASK           0x03 ///< Timer 0/1 Prescale                                
#define CKCON0_SCA__SHIFT           0x00 ///< Timer 0/1 Prescale                                
#define CKCON0_SCA__SYSCLK_DIV_12   0x00 ///< System clock divided by 12.                       
#define CKCON0_SCA__SYSCLK_DIV_4    0x01 ///< System clock divided by 4.                        
#define CKCON0_SCA__SYSCLK_DIV_48   0x02 ///< System clock divided by 48.                       
#define CKCON0_SCA__EXTOSC_DIV_8    0x03 ///< External oscillator divided by 8 (synchronized    
                                         ///< with the system clock).                           
                                                                                                
#define CKCON0_T0M__BMASK           0x04 ///< Timer 0 Clock Select                              
#define CKCON0_T0M__SHIFT           0x02 ///< Timer 0 Clock Select                              
#define CKCON0_T0M__PRESCALE        0x00 ///< Counter/Timer 0 uses the clock defined by the     
                                         ///< prescale field, SCA.                              
#define CKCON0_T0M__SYSCLK          0x04 ///< Counter/Timer 0 uses the system clock.            
                                                                                                
#define CKCON0_T1M__BMASK           0x08 ///< Timer 1 Clock Select                              
#define CKCON0_T1M__SHIFT           0x03 ///< Timer 1 Clock Select                              
#define CKCON0_T1M__PRESCALE        0x00 ///< Timer 1 uses the clock defined by the prescale    
                                         ///< field, SCA.                                       
#define CKCON0_T1M__SYSCLK          0x08 ///< Timer 1 uses the system clock.                    
                                                                                                
#define CKCON0_T2ML__BMASK          0x10 ///< Timer 2 Low Byte Clock Select                     
#define CKCON0_T2ML__SHIFT          0x04 ///< Timer 2 Low Byte Clock Select                     
#define CKCON0_T2ML__EXTERNAL_CLOCK 0x00 ///< Timer 2 low byte uses the clock defined by T2XCLK 
                                         ///< in TMR2CN0.                                       
#define CKCON0_T2ML__SYSCLK         0x10 ///< Timer 2 low byte uses the system clock.           
                                                                                                
#define CKCON0_T2MH__BMASK          0x20 ///< Timer 2 High Byte Clock Select                    
#define CKCON0_T2MH__SHIFT          0x05 ///< Timer 2 High Byte Clock Select                    
#define CKCON0_T2MH__EXTERNAL_CLOCK 0x00 ///< Timer 2 high byte uses the clock defined by T2XCLK
                                         ///< in TMR2CN0.                                       
#define CKCON0_T2MH__SYSCLK         0x20 ///< Timer 2 high byte uses the system clock.          
                                                                                                
#define CKCON0_T3ML__BMASK          0x40 ///< Timer 3 Low Byte Clock Select                     
#define CKCON0_T3ML__SHIFT          0x06 ///< Timer 3 Low Byte Clock Select                     
#define CKCON0_T3ML__EXTERNAL_CLOCK 0x00 ///< Timer 3 low byte uses the clock defined by T3XCLK 
                                         ///< in TMR3CN0.                                       
#define CKCON0_T3ML__SYSCLK         0x40 ///< Timer 3 low byte uses the system clock.           
                                                                                                
#define CKCON0_T3MH__BMASK          0x80 ///< Timer 3 High Byte Clock Select                    
#define CKCON0_T3MH__SHIFT          0x07 ///< Timer 3 High Byte Clock Select                    
#define CKCON0_T3MH__EXTERNAL_CLOCK 0x00 ///< Timer 3 high byte uses the clock defined by T3XCLK
                                         ///< in TMR3CN0.                                       
#define CKCON0_T3MH__SYSCLK         0x80 ///< Timer 3 high byte uses the system clock.          
                                                                                                
//------------------------------------------------------------------------------
// TCON Enums (Timer 0/1 Control @ 0x88)
//------------------------------------------------------------------------------
#define TCON_IT0__BMASK   0x01 ///< Interrupt 0 Type Select  
#define TCON_IT0__SHIFT   0x00 ///< Interrupt 0 Type Select  
#define TCON_IT0__LEVEL   0x00 ///< INT0 is level triggered. 
#define TCON_IT0__EDGE    0x01 ///< INT0 is edge triggered.  
                                                             
#define TCON_IE0__BMASK   0x02 ///< External Interrupt 0     
#define TCON_IE0__SHIFT   0x01 ///< External Interrupt 0     
#define TCON_IE0__NOT_SET 0x00 ///< Edge/level not detected. 
#define TCON_IE0__SET     0x02 ///< Edge/level detected      
                                                             
#define TCON_IT1__BMASK   0x04 ///< Interrupt 1 Type Select  
#define TCON_IT1__SHIFT   0x02 ///< Interrupt 1 Type Select  
#define TCON_IT1__LEVEL   0x00 ///< INT1 is level triggered. 
#define TCON_IT1__EDGE    0x04 ///< INT1 is edge triggered.  
                                                             
#define TCON_IE1__BMASK   0x08 ///< External Interrupt 1     
#define TCON_IE1__SHIFT   0x03 ///< External Interrupt 1     
#define TCON_IE1__NOT_SET 0x00 ///< Edge/level not detected. 
#define TCON_IE1__SET     0x08 ///< Edge/level detected      
                                                             
#define TCON_TR0__BMASK   0x10 ///< Timer 0 Run Control      
#define TCON_TR0__SHIFT   0x04 ///< Timer 0 Run Control      
#define TCON_TR0__STOP    0x00 ///< Stop Timer 0.            
#define TCON_TR0__RUN     0x10 ///< Start Timer 0 running.   
                                                             
#define TCON_TF0__BMASK   0x20 ///< Timer 0 Overflow Flag    
#define TCON_TF0__SHIFT   0x05 ///< Timer 0 Overflow Flag    
#define TCON_TF0__NOT_SET 0x00 ///< Timer 0 did not overflow.
#define TCON_TF0__SET     0x20 ///< Timer 0 overflowed.      
                                                             
#define TCON_TR1__BMASK   0x40 ///< Timer 1 Run Control      
#define TCON_TR1__SHIFT   0x06 ///< Timer 1 Run Control      
#define TCON_TR1__STOP    0x00 ///< Stop Timer 1.            
#define TCON_TR1__RUN     0x40 ///< Start Timer 1 running.   
                                                             
#define TCON_TF1__BMASK   0x80 ///< Timer 1 Overflow Flag    
#define TCON_TF1__SHIFT   0x07 ///< Timer 1 Overflow Flag    
#define TCON_TF1__NOT_SET 0x00 ///< Timer 1 did not overflow.
#define TCON_TF1__SET     0x80 ///< Timer 1 overflowed.      
                                                             
//------------------------------------------------------------------------------
// TMOD Enums (Timer 0/1 Mode @ 0x89)
//------------------------------------------------------------------------------
#define TMOD_T0M__FMASK      0x03 ///< Timer 0 Mode Select                               
#define TMOD_T0M__SHIFT      0x00 ///< Timer 0 Mode Select                               
#define TMOD_T0M__MODE0      0x00 ///< Mode 0, 13-bit Counter/Timer                      
#define TMOD_T0M__MODE1      0x01 ///< Mode 1, 16-bit Counter/Timer                      
#define TMOD_T0M__MODE2      0x02 ///< Mode 2, 8-bit Counter/Timer with Auto-Reload      
#define TMOD_T0M__MODE3      0x03 ///< Mode 3, Two 8-bit Counter/Timers                  
                                                                                         
#define TMOD_CT0__BMASK      0x04 ///< Counter/Timer 0 Select                            
#define TMOD_CT0__SHIFT      0x02 ///< Counter/Timer 0 Select                            
#define TMOD_CT0__TIMER      0x00 ///< Timer Mode. Timer 0 increments on the clock       
                                  ///< defined by T0M in the CKCON0 register.            
#define TMOD_CT0__COUNTER    0x04 ///< Counter Mode. Timer 0 increments on high-to-low   
                                  ///< transitions of an external pin (T0).              
                                                                                         
#define TMOD_GATE0__BMASK    0x08 ///< Timer 0 Gate Control                              
#define TMOD_GATE0__SHIFT    0x03 ///< Timer 0 Gate Control                              
#define TMOD_GATE0__DISABLED 0x00 ///< Timer 0 enabled when TR0 = 1 irrespective of INT0 
                                  ///< logic level.                                      
#define TMOD_GATE0__ENABLED  0x08 ///< Timer 0 enabled only when TR0 = 1 and INT0 is     
                                  ///< active as defined by bit IN0PL in register IT01CF.
                                                                                         
#define TMOD_T1M__FMASK      0x30 ///< Timer 1 Mode Select                               
#define TMOD_T1M__SHIFT      0x04 ///< Timer 1 Mode Select                               
#define TMOD_T1M__MODE0      0x00 ///< Mode 0, 13-bit Counter/Timer                      
#define TMOD_T1M__MODE1      0x10 ///< Mode 1, 16-bit Counter/Timer                      
#define TMOD_T1M__MODE2      0x20 ///< Mode 2, 8-bit Counter/Timer with Auto-Reload      
#define TMOD_T1M__MODE3      0x30 ///< Mode 3, Timer 1 Inactive                          
                                                                                         
#define TMOD_CT1__BMASK      0x40 ///< Counter/Timer 1 Select                            
#define TMOD_CT1__SHIFT      0x06 ///< Counter/Timer 1 Select                            
#define TMOD_CT1__TIMER      0x00 ///< Timer Mode. Timer 1 increments on the clock       
                                  ///< defined by T1M in the CKCON0 register.            
#define TMOD_CT1__COUNTER    0x40 ///< Counter Mode. Timer 1 increments on high-to-low   
                                  ///< transitions of an external pin (T1).              
                                                                                         
#define TMOD_GATE1__BMASK    0x80 ///< Timer 1 Gate Control                              
#define TMOD_GATE1__SHIFT    0x07 ///< Timer 1 Gate Control                              
#define TMOD_GATE1__DISABLED 0x00 ///< Timer 1 enabled when TR1 = 1 irrespective of INT1 
                                  ///< logic level.                                      
#define TMOD_GATE1__ENABLED  0x80 ///< Timer 1 enabled only when TR1 = 1 and INT1 is     
                                  ///< active as defined by bit IN1PL in register IT01CF.
                                                                                         
//------------------------------------------------------------------------------
// SBUF0 Enums (UART0 Serial Port Data Buffer @ 0x99)
//------------------------------------------------------------------------------
#define SBUF0_SBUF0__FMASK 0xFF ///< Serial Data Buffer
#define SBUF0_SBUF0__SHIFT 0x00 ///< Serial Data Buffer
                                                       
//------------------------------------------------------------------------------
// SCON0 Enums (UART0 Serial Port Control @ 0x98)
//------------------------------------------------------------------------------
#define SCON0_RI__BMASK             0x01 ///< Receive Interrupt Flag                           
#define SCON0_RI__SHIFT             0x00 ///< Receive Interrupt Flag                           
#define SCON0_RI__NOT_SET           0x00 ///< A byte of data has not been received by UART0.   
#define SCON0_RI__SET               0x01 ///< UART0 received a byte of data.                   
                                                                                               
#define SCON0_TI__BMASK             0x02 ///< Transmit Interrupt Flag                          
#define SCON0_TI__SHIFT             0x01 ///< Transmit Interrupt Flag                          
#define SCON0_TI__NOT_SET           0x00 ///< A byte of data has not been transmitted by UART0.
#define SCON0_TI__SET               0x02 ///< UART0 transmitted a byte of data.                
                                                                                               
#define SCON0_RB8__BMASK            0x04 ///< Ninth Receive Bit                                
#define SCON0_RB8__SHIFT            0x02 ///< Ninth Receive Bit                                
#define SCON0_RB8__CLEARED_TO_0     0x00 ///< In Mode 0, the STOP bit was 0. In Mode 1, the 9th
                                         ///< bit was 0.                                       
#define SCON0_RB8__SET_TO_1         0x04 ///< In Mode 0, the STOP bit was 1. In Mode 1, the 9th
                                         ///< bit was 1.                                       
                                                                                               
#define SCON0_TB8__BMASK            0x08 ///< Ninth Transmission Bit                           
#define SCON0_TB8__SHIFT            0x03 ///< Ninth Transmission Bit                           
#define SCON0_TB8__CLEARED_TO_0     0x00 ///< In Mode 1, set the 9th transmission bit to 0.    
#define SCON0_TB8__SET_TO_1         0x08 ///< In Mode 1, set the 9th transmission bit to 1.    
                                                                                               
#define SCON0_REN__BMASK            0x10 ///< Receive Enable                                   
#define SCON0_REN__SHIFT            0x04 ///< Receive Enable                                   
#define SCON0_REN__RECEIVE_DISABLED 0x00 ///< UART0 reception disabled.                        
#define SCON0_REN__RECEIVE_ENABLED  0x10 ///< UART0 reception enabled.                         
                                                                                               
#define SCON0_MCE__BMASK            0x20 ///< Multiprocessor Communication Enable              
#define SCON0_MCE__SHIFT            0x05 ///< Multiprocessor Communication Enable              
#define SCON0_MCE__MULTI_DISABLED   0x00 ///< Ignore level of 9th bit / Stop bit.              
#define SCON0_MCE__MULTI_ENABLED    0x20 ///< RI is set and an interrupt is generated only when
                                         ///< the stop bit is logic 1 (Mode 0) or when the 9th 
                                         ///< bit is logic 1 (Mode 1).                         
                                                                                               
#define SCON0_SMODE__BMASK          0x80 ///< Serial Port 0 Operation Mode                     
#define SCON0_SMODE__SHIFT          0x07 ///< Serial Port 0 Operation Mode                     
#define SCON0_SMODE__8_BIT          0x00 ///< 8-bit UART with Variable Baud Rate (Mode 0).     
#define SCON0_SMODE__9_BIT          0x80 ///< 9-bit UART with Variable Baud Rate (Mode 1).     
                                                                                               
//------------------------------------------------------------------------------
// VDM0CN Enums (VDD Supply Monitor Control @ 0xFF)
//------------------------------------------------------------------------------
#define VDM0CN_VDDOK__BMASK             0x20 ///< VDD Supply Status (Early Warning)        
#define VDM0CN_VDDOK__SHIFT             0x05 ///< VDD Supply Status (Early Warning)        
#define VDM0CN_VDDOK__VDD_BELOW_VDDWARN 0x00 ///< VDD is at or below the VDDWARN threshold.
#define VDM0CN_VDDOK__VDD_ABOVE_VDDWARN 0x20 ///< VDD is above the VDDWARN threshold.      
                                                                                           
#define VDM0CN_VDDSTAT__BMASK           0x40 ///< VDD Supply Status                        
#define VDM0CN_VDDSTAT__SHIFT           0x06 ///< VDD Supply Status                        
#define VDM0CN_VDDSTAT__VDD_BELOW_VRST  0x00 ///< VDD is at or below the VRST threshold.   
#define VDM0CN_VDDSTAT__VDD_ABOVE_VRST  0x40 ///< VDD is above the VRST threshold.         
                                                                                           
#define VDM0CN_VDMEN__BMASK             0x80 ///< VDD Supply Monitor Enable                
#define VDM0CN_VDMEN__SHIFT             0x07 ///< VDD Supply Monitor Enable                
#define VDM0CN_VDMEN__DISABLED          0x00 ///< Disable the VDD supply monitor.          
#define VDM0CN_VDMEN__ENABLED           0x80 ///< Enable the VDD supply monitor.           
                                                                                           
//------------------------------------------------------------------------------
// REF0CN Enums (Voltage Reference Control @ 0xD1)
//------------------------------------------------------------------------------
#define REF0CN_REFOE__BMASK           0x01 ///< Internal Voltage Reference Output Enable         
#define REF0CN_REFOE__SHIFT           0x00 ///< Internal Voltage Reference Output Enable         
#define REF0CN_REFOE__DISABLED        0x00 ///< Internal 1.68 V Precision Voltage Reference      
                                           ///< disabled and not connected to VREF.              
#define REF0CN_REFOE__ENABLED         0x01 ///< Internal 1.68 V Precision Voltage Reference      
                                           ///< enabled and connected to VREF.                   
                                                                                                 
#define REF0CN_TEMPE__BMASK           0x04 ///< Temperature Sensor Enable                        
#define REF0CN_TEMPE__SHIFT           0x02 ///< Temperature Sensor Enable                        
#define REF0CN_TEMPE__TEMP_DISABLED   0x00 ///< Disable the Temperature Sensor.                  
#define REF0CN_TEMPE__TEMP_ENABLED    0x04 ///< Enable the Temperature Sensor.                   
                                                                                                 
#define REF0CN_REFSL__FMASK           0x18 ///< Voltage Reference Select                         
#define REF0CN_REFSL__SHIFT           0x03 ///< Voltage Reference Select                         
#define REF0CN_REFSL__VREF_PIN        0x00 ///< The ADC0 voltage reference is the P0.0/VREF pin. 
#define REF0CN_REFSL__VDD_PIN         0x08 ///< The ADC0 voltage reference is the VDD pin.       
#define REF0CN_REFSL__INTERNAL_LDO    0x10 ///< The ADC0 voltage reference is the internal 1.8 V 
                                           ///< digital supply voltage.                          
#define REF0CN_REFSL__HIGH_SPEED_VREF 0x18 ///< The ADC0 voltage reference is the internal 1.65 V
                                           ///< high speed voltage reference.                    
                                                                                                 
#define REF0CN_GNDSL__BMASK           0x20 ///< Analog Ground Reference                          
#define REF0CN_GNDSL__SHIFT           0x05 ///< Analog Ground Reference                          
#define REF0CN_GNDSL__GND_PIN         0x00 ///< The ADC0 ground reference is the GND pin.        
#define REF0CN_GNDSL__AGND_PIN        0x20 ///< The ADC0 ground reference is the P0.1/AGND pin.  
                                                                                                 
//------------------------------------------------------------------------------
// REG0CN Enums (Voltage Regulator Control @ 0xC9)
//------------------------------------------------------------------------------
#define REG0CN_OSCBIAS__BMASK              0x10 ///< High Frequency Oscillator Bias                    
#define REG0CN_OSCBIAS__SHIFT              0x04 ///< High Frequency Oscillator Bias                    
#define REG0CN_OSCBIAS__ENABLE_WHEN_NEEDED 0x00 ///< Allow the hardware to enable the precision High   
                                                ///< Frequency Oscillator bias whenever its needed.    
#define REG0CN_OSCBIAS__FORCE_ENABLED      0x10 ///< Force the precision High Frequency Oscillator bias
                                                ///< on.                                               
                                                                                                       
//------------------------------------------------------------------------------
// EMI0CF Enums (External Memory Configuration @ 0xAB)
//------------------------------------------------------------------------------
#define EMI0CF_EALE__FMASK                    0x03 ///< ALE Pulse-Width Select                            
#define EMI0CF_EALE__SHIFT                    0x00 ///< ALE Pulse-Width Select                            
#define EMI0CF_EALE__1_CLOCK                  0x00 ///< ALE high and ALE low pulse width = 1 SYSCLK cycle.
#define EMI0CF_EALE__2_CLOCKS                 0x01 ///< ALE high and ALE low pulse width = 2 SYSCLK       
                                                   ///< cycles.                                           
#define EMI0CF_EALE__3_CLOCKS                 0x02 ///< ALE high and ALE low pulse width = 3 SYSCLK       
                                                   ///< cycles.                                           
#define EMI0CF_EALE__4_CLOCKS                 0x03 ///< ALE high and ALE low pulse width = 4 SYSCLK       
                                                   ///< cycles.                                           
                                                                                                          
#define EMI0CF_EMD__FMASK                     0x0C ///< EMIF Operating Mode Select                        
#define EMI0CF_EMD__SHIFT                     0x02 ///< EMIF Operating Mode Select                        
#define EMI0CF_EMD__INTERNAL_ONLY             0x00 ///< Internal Only: MOVX accesses on-chip XRAM only.   
                                                   ///< All effective addresses alias to on-chip memory   
                                                   ///< space.                                            
#define EMI0CF_EMD__SPLIT_WITHOUT_BANK_SELECT 0x04 ///< Split Mode without Bank Select: Accesses below the
                                                   ///< internal XRAM boundary are directed on-chip.      
                                                   ///< Accesses above the internal XRAM boundary are     
                                                   ///< directed off-chip. 8-bit off-chip MOVX operations 
                                                   ///< use the current contents of the Address high port 
                                                   ///< latches to resolve the upper address byte. To     
                                                   ///< access off chip space, EMI0CN must be set to a    
                                                   ///< page that is not contained in the on-chip address 
                                                   ///< space.                                            
#define EMI0CF_EMD__SPLIT_WITH_BANK_SELECT    0x08 ///< Split Mode with Bank Select: Accesses below the   
                                                   ///< internal XRAM boundary are directed on-chip.      
                                                   ///< Accesses above the internal XRAM boundary are     
                                                   ///< directed off-chip. 8-bit off-chip MOVX operations 
                                                   ///< uses the contents of EMI0CN to determine the high-
                                                   ///< byte of the address.                              
#define EMI0CF_EMD__EXTERNAL_ONLY             0x0C ///< External Only: MOVX accesses off-chip XRAM only.  
                                                   ///< On-chip XRAM is not visible to the core.          
                                                                                                          
//------------------------------------------------------------------------------
// EMI0CN Enums (External Memory Interface Control @ 0xAA)
//------------------------------------------------------------------------------
#define EMI0CN_PGSEL__FMASK 0x1F ///< XRAM Page Select
#define EMI0CN_PGSEL__SHIFT 0x00 ///< XRAM Page Select
                                                      
//------------------------------------------------------------------------------
// EMI0TC Enums (External Memory Timing Control @ 0xAF)
//------------------------------------------------------------------------------
#define EMI0TC_AHOLD__FMASK      0x03 ///< EMIF Address Hold Time                      
#define EMI0TC_AHOLD__SHIFT      0x00 ///< EMIF Address Hold Time                      
#define EMI0TC_AHOLD__0_CLOCKS   0x00 ///< Address hold time = 0 SYSCLK cycles.        
#define EMI0TC_AHOLD__1_CLOCK    0x01 ///< Address hold time = 1 SYSCLK cycle.         
#define EMI0TC_AHOLD__2_CLOCKS   0x02 ///< Address hold time = 2 SYSCLK cycles.        
#define EMI0TC_AHOLD__3_CLOCKS   0x03 ///< Address hold time = 3 SYSCLK cycles.        
                                                                                       
#define EMI0TC_PWIDTH__FMASK     0x3C ///< EMIF /WR and /RD Pulse-Width Control        
#define EMI0TC_PWIDTH__SHIFT     0x02 ///< EMIF /WR and /RD Pulse-Width Control        
#define EMI0TC_PWIDTH__1_CLOCK   0x00 ///< /WR and /RD pulse width is 1 SYSCLK cycle.  
#define EMI0TC_PWIDTH__2_CLOCKS  0x04 ///< /WR and /RD pulse width is 2 SYSCLK cycles. 
#define EMI0TC_PWIDTH__3_CLOCKS  0x08 ///< /WR and /RD pulse width is 3 SYSCLK cycles. 
#define EMI0TC_PWIDTH__4_CLOCKS  0x0C ///< /WR and /RD pulse width is 4 SYSCLK cycles. 
#define EMI0TC_PWIDTH__5_CLOCKS  0x10 ///< /WR and /RD pulse width is 5 SYSCLK cycles. 
#define EMI0TC_PWIDTH__6_CLOCKS  0x14 ///< /WR and /RD pulse width is 6 SYSCLK cycles. 
#define EMI0TC_PWIDTH__7_CLOCKS  0x18 ///< /WR and /RD pulse width is 7 SYSCLK cycles. 
#define EMI0TC_PWIDTH__8_CLOCKS  0x1C ///< /WR and /RD pulse width is 8 SYSCLK cycles. 
#define EMI0TC_PWIDTH__9_CLOCKS  0x20 ///< /WR and /RD pulse width is 9 SYSCLK cycles. 
#define EMI0TC_PWIDTH__10_CLOCKS 0x24 ///< /WR and /RD pulse width is 10 SYSCLK cycles.
#define EMI0TC_PWIDTH__11_CLOCKS 0x28 ///< /WR and /RD pulse width is 11 SYSCLK cycles.
#define EMI0TC_PWIDTH__12_CLOCKS 0x2C ///< /WR and /RD pulse width is 12 SYSCLK cycles.
#define EMI0TC_PWIDTH__13_CLOCKS 0x30 ///< /WR and /RD pulse width is 13 SYSCLK cycles.
#define EMI0TC_PWIDTH__14_CLOCKS 0x34 ///< /WR and /RD pulse width is 14 SYSCLK cycles.
#define EMI0TC_PWIDTH__15_CLOCKS 0x38 ///< /WR and /RD pulse width is 15 SYSCLK cycles.
#define EMI0TC_PWIDTH__16_CLOCKS 0x3C ///< /WR and /RD pulse width is 16 SYSCLK cycles.
                                                                                       
#define EMI0TC_ASETUP__FMASK     0xC0 ///< EMIF Address Setup Time                     
#define EMI0TC_ASETUP__SHIFT     0x06 ///< EMIF Address Setup Time                     
#define EMI0TC_ASETUP__0_CLOCKS  0x00 ///< Address setup time = 0 SYSCLK cycles.       
#define EMI0TC_ASETUP__1_CLOCK   0x40 ///< Address setup time = 1 SYSCLK cycle.        
#define EMI0TC_ASETUP__2_CLOCKS  0x80 ///< Address setup time = 2 SYSCLK cycles.       
#define EMI0TC_ASETUP__3_CLOCKS  0xC0 ///< Address setup time = 3 SYSCLK cycles.       
                                                                                       
#endif // SI_EFM8SB2_REGISTER_ENUMS_H
//-eof--------------------------------------------------------------------------

