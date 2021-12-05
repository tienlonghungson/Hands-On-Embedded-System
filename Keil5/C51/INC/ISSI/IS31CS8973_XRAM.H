/*-----------------------------------------------------------------------------
IS31CS8973_XRAM.H

Header file which includes XFR register definitions
for the IS31CS8973 microcontroller. 

Copyright (c) 2019 ARM Germany GmbH.
All rights reserved.
--------------------------------------------------------------------------------*/


#ifndef __IS31CS8973_XRAM_H__
#define __IS31CS8973_XRAM_H__

/*
The register address allocation is done by using "#define ALLOCATE_EXTERN".

i.e. when using:
EXTERN VOLATILE BYTE xdata  REGTRM        _AT_   0xA000;

you will get:
volatile BYTE  xdata  REGTRM  _at_   0xA000;

Incidently, these lines will not generate any space in the resulting hex 
file; They just bind the symbols to the addresses for compilation.

You just need to put "#define ALLOCATE_EXTERN" in your main program file
i.e. MyFoo.c or a stand-alone C source file. 

Without "#define ALLOCATE_EXTERN", you just get the external reference. 
i.e. when using:

EXTERN VOLATILE BYTE xdata  REGTRM        _AT_   0xA000;
extern          BYTE xdata  REGTRM        ;//    0xA000;

// This uses the concatenation operator "##" to insert a comment "//" 
// to cut off the end of the line, "_at_   0xA000;", which is not wanted.

*/

typedef    unsigned char           BYTE;

#ifdef ALLOCATE_EXTERN
    #define EXTERN
    #define _AT_        _at_
    #define VOLATILE    volatile
#else
    #define	EXTERN      extern
    #define _AT_        ;/ ## /
    #define VOLATILE
#endif


   EXTERN VOLATILE BYTE xdata  REGTRM        _AT_   0xA000;   /* Regulator Trim                                     */
   EXTERN VOLATILE BYTE xdata  IOSCITRM      _AT_   0xA001;   /* IOSC Coarse Trim                                   */
   EXTERN VOLATILE BYTE xdata  IOSCVTRM      _AT_   0xA002;   /* IOSC Fine Trim                                     */
   EXTERN VOLATILE BYTE xdata  T5CON         _AT_   0xA003;   /* Timer 5 Control and Status                         */
   EXTERN VOLATILE BYTE xdata  TL5           _AT_   0xA004;   /* Timer 5 Low Byte                                   */
   EXTERN VOLATILE BYTE xdata  TH5           _AT_   0xA005;   /* Timer 5 Medium Byte                                */
   EXTERN VOLATILE BYTE xdata  TT5           _AT_   0xA006;   /* Timer 5 High Byte                                  */
   EXTERN VOLATILE BYTE xdata  XOSCCFG       _AT_   0xA007;

   EXTERN VOLATILE BYTE xdata  LVDCFG        _AT_   0xA010;   /* Supply Low Voltage Detection Configuration         */
   EXTERN VOLATILE BYTE xdata  LVDTHD        _AT_   0xA011;   /* Supply Low Voltage Detection Threshold             */
   EXTERN VOLATILE BYTE xdata  FLSHADM       _AT_   0xA012;   /* Flash Controller MSB Address Data                  */
   EXTERN VOLATILE BYTE xdata  INTPCT1       _AT_   0xA013;   /* Internal Protection Enable                         */
   EXTERN VOLATILE BYTE xdata  INTPCT2       _AT_   0xA014;   /* Internal Protection Enable                         */
   EXTERN VOLATILE BYTE xdata  LVDHYS        _AT_   0xA016;   /* Supply Low Voltage Detection Threshold Hysteresis  */
   EXTERN VOLATILE BYTE xdata  COMPCFG       _AT_   0xA017;

   EXTERN VOLATILE BYTE xdata  FLSHCMD       _AT_   0xA020;   /* Flash Controller Command                           */
   EXTERN VOLATILE BYTE xdata  FLSHDAT       _AT_   0xA021;   /* Flash Controller Data                              */
   EXTERN VOLATILE BYTE xdata  FLSHADH       _AT_   0xA022;   /* Flash Controller High Address Data                 */
   EXTERN VOLATILE BYTE xdata  FLSHADL       _AT_   0xA023;   /* Flash Controller Low Address Data                  */
   EXTERN VOLATILE BYTE xdata  ISPCLKF       _AT_   0xA024;   /* Flash Command Clock Scaler                         */
   EXTERN VOLATILE BYTE xdata  CNTPCTL       _AT_   0xA025;   /* Flash Content Protection Low Zone                  */
   EXTERN VOLATILE BYTE xdata  CNTPCTH       _AT_   0xA026;   /* Flash Content Protection High Zone                 */

   EXTERN VOLATILE BYTE xdata  PIOEDGR0      _AT_   0xA028;   /* Port0 IO Input Rising Edge Detection               */
   EXTERN VOLATILE BYTE xdata  PIOEDGR1      _AT_   0xA029;   /* Port1 IO Input Rising Edge Detection               */
   EXTERN VOLATILE BYTE xdata  GPWKCFG       _AT_   0xA02E;   /* GPIO Wakeup Configuration                          */

   EXTERN VOLATILE BYTE xdata  CMPCFGAB      _AT_   0xA030;   /* Analog Comparator A/B Configuration                */
   EXTERN VOLATILE BYTE xdata  CMPCFGCD      _AT_   0xA031;   /* Analog Comparator C/D Configuration                */
   EXTERN VOLATILE BYTE xdata  CMPVTH0       _AT_   0xA032;   /* Analog Comparator Threshold Control                */
   EXTERN VOLATILE BYTE xdata  CMPVTH1       _AT_   0xA033;   /* Analog Comparator Threshold Control                */
   EXTERN VOLATILE BYTE xdata  DACL          _AT_   0xA036;   /* DAC Low                                            */
   EXTERN VOLATILE BYTE xdata  DACH          _AT_   0xA037;   /* DAC High                                           */

   EXTERN VOLATILE BYTE xdata  PIOEDGF0      _AT_   0xA038;   /* Port0 IO Input Falling Edge Detection              */
   EXTERN VOLATILE BYTE xdata  PIOEDGF1      _AT_   0xA039;   /* Port1 IO Input Falling Edge Detection              */

   EXTERN VOLATILE BYTE xdata  IOCFGP0_0     _AT_   0xA040;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_1     _AT_   0xA041;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_2     _AT_   0xA042;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_3     _AT_   0xA043;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_4     _AT_   0xA044;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_5     _AT_   0xA045;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_6     _AT_   0xA046;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP0_7     _AT_   0xA047;   /* IO Buffer Configuration                            */

   EXTERN VOLATILE BYTE xdata  IOCFGP1_0     _AT_   0xA048;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_1     _AT_   0xA049;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_2     _AT_   0xA04A;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_3     _AT_   0xA04B;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_4     _AT_   0xA04C;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_5     _AT_   0xA04D;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_6     _AT_   0xA04E;   /* IO Buffer Configuration                            */
   EXTERN VOLATILE BYTE xdata  IOCFGP1_7     _AT_   0xA04F;   /* IO Buffer Configuration                            */

   EXTERN VOLATILE BYTE xdata  MFCFGP0_0     _AT_   0xA050;   /* GPIO P0.0 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_1     _AT_   0xA051;   /* GPIO P0.1 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_2     _AT_   0xA052;   /* GPIO P0.2 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_3     _AT_   0xA053;   /* GPIO P0.3 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_4     _AT_   0xA054;   /* GPIO P0.4 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_5     _AT_   0xA055;   /* GPIO P0.5 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_6     _AT_   0xA056;   /* GPIO P0.6 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP0_7     _AT_   0xA057;   /* GPIO P0.7 Function Configuration                   */

   EXTERN VOLATILE BYTE xdata  MFCFGP1_0     _AT_   0xA058;   /* GPIO P1.0 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_1     _AT_   0xA059;   /* GPIO P1.1 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_2     _AT_   0xA05A;   /* GPIO P1.2 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_3     _AT_   0xA05B;   /* GPIO P1.3 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_4     _AT_   0xA05C;   /* GPIO P1.4 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_5     _AT_   0xA05D;   /* GPIO P1.5 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_6     _AT_   0xA05E;   /* GPIO P1.6 Function Configuration                   */
   EXTERN VOLATILE BYTE xdata  MFCFGP1_7     _AT_   0xA05F;   /* GPIO P1.7 Function Configuration                   */

   EXTERN VOLATILE BYTE xdata  IOCFGP2_0     _AT_   0xA060;
   EXTERN VOLATILE BYTE xdata  IOCFGP2_1     _AT_   0xA061;
   EXTERN VOLATILE BYTE xdata  IOCFGP2_2     _AT_   0xA062;
   EXTERN VOLATILE BYTE xdata  IOCFGP2_3     _AT_   0xA063;

   EXTERN VOLATILE BYTE xdata  MFCFGP2_0     _AT_   0xA070;
   EXTERN VOLATILE BYTE xdata  MFCFGP2_1     _AT_   0xA071;
   EXTERN VOLATILE BYTE xdata  MFCFGP2_2     _AT_   0xA072;
   EXTERN VOLATILE BYTE xdata  MFCFGP2_3     _AT_   0xA073;

   EXTERN VOLATILE BYTE xdata  PWMCFG1       _AT_   0xA080;   /* PWM0 Clock Scaling Setting                         */
   EXTERN VOLATILE BYTE xdata  PWMCFG2       _AT_   0xA081;   /* PWM0/1 Interrupt Enable and Flag                   */
   EXTERN VOLATILE BYTE xdata  PWM0DTY       _AT_   0xA082;   /* PWM0 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM1DTY       _AT_   0xA083;   /* PWM1 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM2DTY       _AT_   0xA084;   /* PWM2 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM3DTY       _AT_   0xA085;   /* PWM3 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM4DTY       _AT_   0xA086;   /* PWM4 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM5DTY       _AT_   0xA087;   /* PWM5 Duty                                          */

   EXTERN VOLATILE BYTE xdata  PWM6DTY       _AT_   0xA088;   /* PWM6 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM7DTY       _AT_   0xA089;   /* PWM7 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM8DTY       _AT_   0xA08A;   /* PWM8 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM9DTY       _AT_   0xA08B;   /* PWM9 Duty                                          */
   EXTERN VOLATILE BYTE xdata  PWM10DTY      _AT_   0xA08C;   /* PWM10 Duty                                         */
   EXTERN VOLATILE BYTE xdata  PWM11DTY      _AT_   0xA08D;   /* PWM11 Duty                                         */

   EXTERN VOLATILE BYTE xdata  LINCTRL       _AT_   0xA090;   /* LIN Status/Control                                 */
   EXTERN VOLATILE BYTE xdata  LINCNTRH      _AT_   0xA091;   /* LIN Timer High                                     */
   EXTERN VOLATILE BYTE xdata  LINCNTRL      _AT_   0xA092;   /* LIN Time Low                                       */
   EXTERN VOLATILE BYTE xdata  LINSBRH       _AT_   0xA093;   /* EUART/LIN Baud Rate High                           */
   EXTERN VOLATILE BYTE xdata  LINSBRL       _AT_   0xA094;   /* EUART/LIN Baud Rate Low                            */
   EXTERN VOLATILE BYTE xdata  LININT        _AT_   0xA095;   /* LIN Interrupt Flag                                 */
   EXTERN VOLATILE BYTE xdata  LININTEN      _AT_   0xA096;   /* LIN Interrupt Enable                               */

   EXTERN VOLATILE BYTE xdata  DBPCIDL       _AT_   0xA098;   /* Debug Program Counter Address Low                  */
   EXTERN VOLATILE BYTE xdata  DBPCIDH       _AT_   0xA099;   /* Debug Program Counter Address High                 */
   EXTERN VOLATILE BYTE xdata  DBPCIDT       _AT_   0xA09A;   /* Debug Program Counter Address Top                  */
   EXTERN VOLATILE BYTE xdata  DBPCNXL       _AT_   0xA09B;   /* Debug Program Counter Next Address Low             */
   EXTERN VOLATILE BYTE xdata  DBPCNXH       _AT_   0xA09C;   /* Debug Program Counter Next Address High            */
   EXTERN VOLATILE BYTE xdata  DBPCNXT       _AT_   0xA09D;   /* Debug Program Counter Next Address Top             */

   EXTERN VOLATILE BYTE xdata  PCACPS        _AT_   0xA0A5;
   EXTERN VOLATILE BYTE xdata  CLRLD         _AT_   0xA0A6;   /* PCA Counter CL Reload Value                        */
   EXTERN VOLATILE BYTE xdata  CHRLD         _AT_   0xA0A7;   /* PCA Counter CH Reload Value                        */

   EXTERN VOLATILE BYTE xdata  BPINTF        _AT_   0xA0E0;   /* Break Point Interrupt Flag                         */
   EXTERN VOLATILE BYTE xdata  BPINTE        _AT_   0xA0E1;   /* Break Point Interrupt Enable                       */
   EXTERN VOLATILE BYTE xdata  BPINTC        _AT_   0xA0E2;   /* Break Point Interrupt Control                      */
   EXTERN VOLATILE BYTE xdata  BPCTRL        _AT_   0xA0E3;   /* DBG and BKP ISR Control and Status                 */

   EXTERN VOLATILE BYTE xdata  PC5AL         _AT_   0xA0E4;   /* Program Counter Break Point 5 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC5AH         _AT_   0xA0E5;   /* Program Counter Break Point 5 High Address         */
   EXTERN VOLATILE BYTE xdata  PC5AT         _AT_   0xA0E6;   /* Program Counter Break Point 5 Top Address          */

   EXTERN VOLATILE BYTE xdata  PC6AL         _AT_   0xA0E8;   /* Program Counter Break Point 6 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC6AH         _AT_   0xA0E9;   /* Program Counter Break Point 6 High Address         */
   EXTERN VOLATILE BYTE xdata  PC6AT         _AT_   0xA0EA;   /* Program Counter Break Point 6 Top Address          */

   EXTERN VOLATILE BYTE xdata  PC7AL         _AT_   0xA0EC;   /* Program Counter Break Point 7 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC7AH         _AT_   0xA0ED;   /* Program Counter Break Point 7 High Address         */
   EXTERN VOLATILE BYTE xdata  PC7AT         _AT_   0xA0EE;   /* Program Counter Break Point 7 Top Address          */

   EXTERN VOLATILE BYTE xdata  SI2CDBGID     _AT_   0xA0EF;   /* Slave I2C Debug ID                                 */

   EXTERN VOLATILE BYTE xdata  PC1AL         _AT_   0xA0F0;   /* Program Counter Break Point 1 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC1AH         _AT_   0xA0F1;   /* Program Counter Break Point 1 High Address         */
   EXTERN VOLATILE BYTE xdata  PC1AT         _AT_   0xA0F2;   /* Program Counter Break Point 1 Top Address          */

   EXTERN VOLATILE BYTE xdata  PC2AL         _AT_   0xA0F4;   /* Program Counter Break Point 2 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC2AH         _AT_   0xA0F5;   /* Program Counter Break Point 2 High Address         */
   EXTERN VOLATILE BYTE xdata  PC2AT         _AT_   0xA0F6;   /* Program Counter Break Point 2 Top Address          */

   EXTERN VOLATILE BYTE xdata  PC3AL         _AT_   0xA0F8;   /* Program Counter Break Point 3 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC3AH         _AT_   0xA0F9;   /* Program Counter Break Point 3 High Address         */
   EXTERN VOLATILE BYTE xdata  PC3AT         _AT_   0xA0FA;   /* Program Counter Break Point 3 Top Address          */

   EXTERN VOLATILE BYTE xdata  PC4AL         _AT_   0xA0FC;   /* Program Counter Break Point 4 Low Address          */
   EXTERN VOLATILE BYTE xdata  PC4AH         _AT_   0xA0FD;   /* Program Counter Break Point 4 High Address         */
   EXTERN VOLATILE BYTE xdata  PC4AT         _AT_   0xA0FE;   /* Program Counter Break Point 4 Top Address          */

   EXTERN VOLATILE BYTE xdata  STEPCTR       _AT_   0xA0FF;   /* Single Step Break Point Interrupt Control          */

   EXTERN VOLATILE BYTE xdata  BZFRQ         _AT_   0xA128;   /* Buzzer frequency controlled                        */
   EXTERN VOLATILE BYTE xdata  BZFMCFG       _AT_   0xA129;   /* Buzzer Frame Configuration                         */
   EXTERN VOLATILE BYTE xdata  BZSNFMCT      _AT_   0xA12A;   /* Buzzer Session Frame Count                         */
   EXTERN VOLATILE BYTE xdata  BZCFG         _AT_   0xA12B;   /* Buzzer Configure                                   */
   EXTERN VOLATILE BYTE xdata  BZSNMUTE      _AT_   0xA12C;   /* Buzzer Session MUTE Frame                          */

   EXTERN VOLATILE BYTE xdata  TKCCFG        _AT_   0xA130;   /* Touch Key Controller Configuration                 */
   EXTERN VOLATILE BYTE xdata  TKCAFG        _AT_   0xA131;   /* Touch Key Controller Analog Configuration          */
   EXTERN VOLATILE BYTE xdata  TKCFFG        _AT_   0xA132;   /* Touch Key Controller Filter Configuration          */
   EXTERN VOLATILE BYTE xdata  TKCATH0       _AT_   0xA133;   /* Touch Key Auto Detect Threshold 0                  */
   EXTERN VOLATILE BYTE xdata  TKCATH1       _AT_   0xA134;   /* Touch Key Auto Detect Threshold 1                  */
   EXTERN VOLATILE BYTE xdata  TKCATH2       _AT_   0xA135;   /* Touch Key Auto Detect Threshold 2                  */

   EXTERN VOLATILE BYTE xdata  CAPMVFT       _AT_   0xA138;
   EXTERN VOLATILE BYTE xdata  CAPMVFH       _AT_   0xA139;
   EXTERN VOLATILE BYTE xdata  CAPMVFM       _AT_   0xA13A;
   EXTERN VOLATILE BYTE xdata  CAPMVFL       _AT_   0xA13B;
   EXTERN VOLATILE BYTE xdata  CAPMVST       _AT_   0xA13C;
   EXTERN VOLATILE BYTE xdata  CAPMVSH       _AT_   0xA13D;
   EXTERN VOLATILE BYTE xdata  CAPMVSM       _AT_   0xA13E;
   EXTERN VOLATILE BYTE xdata  CAPMVSL       _AT_   0xA13F;

   EXTERN VOLATILE BYTE xdata  TKCTMR0       _AT_   0xA140;   /* Touch Key Timer Register 0                         */
   EXTERN VOLATILE BYTE xdata  TKCTMR1       _AT_   0xA141;   /* Touch Key Timer Register 1                         */
   EXTERN VOLATILE BYTE xdata  TKCTMR2       _AT_   0xA142;   /* Touch Key Timer Register 2                         */
   EXTERN VOLATILE BYTE xdata  TKCVAL0       _AT_   0xA144;   /* Touch Key Value Register 0                         */
   EXTERN VOLATILE BYTE xdata  TKCVAL1       _AT_   0xA145;   /* Touch Key Value Register 1                         */
   EXTERN VOLATILE BYTE xdata  TKCVAL2       _AT_   0xA146;   /* Touch Key Value Register 2                         */

   EXTERN VOLATILE BYTE xdata  TKCMVF0       _AT_   0xA148;   /* Touch Key Fast Moving Average Register 0           */
   EXTERN VOLATILE BYTE xdata  TKCMVF1       _AT_   0xA149;   /* Touch Key Fast Moving Average Register 1           */
   EXTERN VOLATILE BYTE xdata  TKCMVF2       _AT_   0xA14A;   /* Touch Key Fast Moving Average Register 2           */
   EXTERN VOLATILE BYTE xdata  TKCMVS0       _AT_   0xA14C;   /* Touch Key Slow Moving Average Register 0           */
   EXTERN VOLATILE BYTE xdata  TKCMVS1       _AT_   0xA14D;   /* Touch Key Slow Moving Average Register 1           */
   EXTERN VOLATILE BYTE xdata  TKCMVS2       _AT_   0xA14E;   /* Touch Key Slow Moving Average Register 2           */

   EXTERN VOLATILE BYTE xdata  TKCCFGII      _AT_   0xA150;   /* Touch Key Controller II Configuration              */
   EXTERN VOLATILE BYTE xdata  TKCAFGII      _AT_   0xA151;   /* Touch Key Controller II Configuration              */
   EXTERN VOLATILE BYTE xdata  TKCCMDII      _AT_   0xA152;   /* Touch Key Controller II Command and Interrupt      */
   EXTERN VOLATILE BYTE xdata  TKCCNTL       _AT_   0xA153;   /* Touch Key Controller II Count Low                  */
   EXTERN VOLATILE BYTE xdata  TKCCNTH       _AT_   0xA154;   /* Touch Key Controller II Count High                 */



#endif                      /*               __IS31CS8973_XRAM_H__              */