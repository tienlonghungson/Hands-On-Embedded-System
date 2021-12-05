#ifndef AS8218_H__
#define AS8218_H__

#ifdef ALLOCATE_EXTERN
#define EXTERN
#define AT _at_
#else
#define EXTERN extern
#define AT ;/##/
#endif

//sfr IE = 0xA8;
//sfr IP = 0xB8;

//sfr SCON = 0x98;
//sfr SBUF = 0x99;
sfr SOVR = 0x90;
sfr SBaudL = 0x9A;
sfr SBaudH = 0x9B;

sfr SCON2 = 0xC0;
sfr SBUF2 = 0xC1;
sfr SOVR2 = 0xB0;
sfr SBaudL2 = 0xC2;
sfr SBaudH2 = 0xC3;

sfr sqrt_in0  =  0xE8;  // sqrtroot block registers
sfr sqrt_in1  =  0xE9;
sfr sqrt_in2  =  0xEA;
sfr sqrt_in3  =  0xEB;
sfr sqrt_in4  =  0xEC;
sfr sqrt_out0 =  0xED;
sfr sqrt_out1 =  0xEE;
sfr sqrt_out2 =  0xEF;

/*********************************************************************
* SCT                                                                *
*********************************************************************/
EXTERN unsigned char xdata enable_signals    AT 0x9001;
EXTERN unsigned char xdata clkdiv            AT 0x9002;

/*********************************************************************
* RTC                                                                *
*********************************************************************/
EXTERN unsigned char xdata rtc_second        AT 0x9100;
EXTERN unsigned char xdata rtc_minute        AT 0x9101;
EXTERN unsigned char xdata rtc_hour          AT 0x9102;
EXTERN unsigned char xdata rtc_day           AT 0x9103;
EXTERN unsigned char xdata rtc_day_of_week   AT 0x9104;
EXTERN unsigned char xdata rtc_month         AT 0x9105;
EXTERN unsigned char xdata rtc_year          AT 0x9106;

EXTERN unsigned char xdata rtc_status1       AT 0x9110;
EXTERN unsigned char xdata rtc_status2       AT 0x9111;

EXTERN unsigned char xdata rtc_seconds_timer[2] AT 0x9112;

EXTERN unsigned char xdata rtc_alarm1_minute AT 0x9114;
EXTERN unsigned char xdata rtc_alarm1_hour   AT 0x9115;
EXTERN unsigned char xdata rtc_alarm1_day    AT 0x9116;
EXTERN unsigned char xdata rtc_alarm1_month  AT 0x9117;
EXTERN unsigned char xdata rtc_alarm1_year   AT 0x9118;

EXTERN unsigned char xdata rtc_alarm2_minute AT 0x9119;
EXTERN unsigned char xdata rtc_alarm2_hour   AT 0x911A;
EXTERN unsigned char xdata rtc_alarm2_day    AT 0x911B;
EXTERN unsigned char xdata rtc_alarm2_month  AT 0x911C;
EXTERN unsigned char xdata rtc_alarm2_year   AT 0x911D;

EXTERN unsigned char xdata rtc_divider[3]    AT 0x9130;
EXTERN unsigned char xdata rtc_freq_trim     AT 0x9133;

/*********************************************************************
* WDT                                                                *
*********************************************************************/
EXTERN unsigned char xdata wdt_enable    	 AT 0x9180;
EXTERN unsigned char xdata wdt_clk		     AT 0x9181;

/*********************************************************************
* LCDD                                                               *
*********************************************************************/
EXTERN unsigned char xdata LCD_0  AT  0x9200;
EXTERN unsigned char xdata LCD_1  AT  0x9201;
EXTERN unsigned char xdata LCD_2  AT  0x9202;
EXTERN unsigned char xdata LCD_3  AT  0x9203;
EXTERN unsigned char xdata LCD_4  AT  0x9204; 
EXTERN unsigned char xdata LCD_5  AT  0x9205;
EXTERN unsigned char xdata LCD_6  AT  0x9206;
EXTERN unsigned char xdata LCD_7  AT  0x9207;   
EXTERN unsigned char xdata LCD_8  AT  0x9208;
EXTERN unsigned char xdata LCD_9  AT  0x9209;
EXTERN unsigned char xdata LCD_10 AT  0x920A;
EXTERN unsigned char xdata LCD_11 AT  0x920B;

EXTERN unsigned char xdata LCD_20 AT  0x9210;
EXTERN unsigned char xdata LCD_21 AT  0x9211;
EXTERN unsigned char xdata LCD_22 AT  0x9212;
EXTERN unsigned char xdata LCD_23 AT  0x9213;
EXTERN unsigned char xdata LCD_24 AT  0x9214; 
EXTERN unsigned char xdata LCD_25 AT  0x9215;
EXTERN unsigned char xdata LCD_26 AT  0x9216;
EXTERN unsigned char xdata LCD_27 AT  0x9217;   
EXTERN unsigned char xdata LCD_28 AT  0x9228;
EXTERN unsigned char xdata LCD_29 AT  0x9219;
EXTERN unsigned char xdata LCD_30 AT  0x921A;
EXTERN unsigned char xdata LCD_31 AT  0x921B;

EXTERN unsigned char xdata use_reg AT 0x921E;
EXTERN unsigned char xdata selvlcd AT 0x921F;
EXTERN unsigned char xdata lcd_pddown AT 0x9220;


/*********************************************************************
* MPIO                                                               *
*********************************************************************/
EXTERN unsigned char xdata make_irq0  AT  0x9500;
EXTERN unsigned char xdata make_irq1  AT  0x9501;

EXTERN unsigned char xdata out_mux0   AT  0x9502;
EXTERN unsigned char xdata out_mux1   AT  0x9503;
EXTERN unsigned char xdata out_mux2   AT  0x9504;

EXTERN unsigned char xdata set_en0    AT  0x9505;
EXTERN unsigned char xdata set_en1    AT  0x9506;

EXTERN unsigned char xdata sel_drv0   AT  0x9507;
EXTERN unsigned char xdata sel_drv1   AT  0x9508;

EXTERN unsigned char xdata sel_pupd0  AT  0x9509;
EXTERN unsigned char xdata sel_pupd1  AT  0x950A;

EXTERN unsigned char xdata sel_in     AT  0x950B;
EXTERN unsigned char xdata sel_refp   AT  0x950C;

EXTERN unsigned char xdata in0        AT 0x950D;
EXTERN unsigned char xdata in1        AT 0x950E;

EXTERN unsigned char xdata out0          AT 0x950F;
EXTERN unsigned char xdata out1          AT 0x9510;
EXTERN unsigned char xdata out2          AT 0x9511;
EXTERN unsigned char xdata out3          AT 0x9512;
EXTERN unsigned char xdata out4          AT 0x9513;
EXTERN unsigned char xdata out5          AT 0x9514;
EXTERN unsigned char xdata out6          AT 0x9515;
EXTERN unsigned char xdata out7          AT 0x9516;
EXTERN unsigned char xdata out8          AT 0x9517;
EXTERN unsigned char xdata out9          AT 0x9518;
EXTERN unsigned char xdata out10         AT 0x9519;
EXTERN unsigned char xdata out11         AT 0x951A;

EXTERN unsigned char xdata pcnt0         AT 0x951B;
EXTERN unsigned char xdata pcnt1         AT 0x951C;
EXTERN unsigned char xdata pcnt2         AT 0x951D;

EXTERN unsigned char xdata mpio_status0  AT 0x951E;
EXTERN unsigned char xdata mpio_status1  AT 0x951F;


/*********************************************************************
* MDR (Meter Data Register)                                          *
*********************************************************************/

EXTERN unsigned char xdata samptoend[2]  AT 0x9300;
EXTERN unsigned char xdata np[4]         AT 0x9302;
EXTERN unsigned char xdata sos_v[5]      AT 0x9306;
EXTERN unsigned char xdata sos_i1[7]     AT 0x930B;
EXTERN unsigned char xdata sos_i2[7]     AT 0x9312;


/*********************************************************************
* SREG (Settings Register)                                           *
*********************************************************************/

EXTERN unsigned char xdata pcorr_i1[2]    AT 0x9320;
EXTERN unsigned char xdata pcorr_i2[2]    AT 0x9322;
EXTERN unsigned char xdata cal_v[2]       AT 0x9324;
EXTERN unsigned char xdata cal_i1[2]      AT 0x9326;
EXTERN unsigned char xdata cal_i2[2]      AT 0x9328;
EXTERN unsigned char xdata pulselev_i1[3] AT 0x932A;
EXTERN unsigned char xdata pulselev_i2[3] AT 0x932D;
EXTERN unsigned char xdata mconst         AT 0x9330;
EXTERN unsigned char xdata nsamp[2]       AT 0x9332;
EXTERN unsigned char xdata vconst[2]      AT 0x9334;
EXTERN unsigned char xdata dsp_select     AT 0x9336;
EXTERN unsigned char xdata dsp_gain       AT 0x9337;
EXTERN unsigned char xdata dsp_status     AT 0x9338;


/*********************************************************************
* SPI                                                                *
*********************************************************************/

EXTERN unsigned char xdata sspcon     AT 0x9400;
EXTERN unsigned char xdata sspclkdiv  AT 0x9401;
EXTERN unsigned char xdata sspstat    AT 0x9402;
EXTERN unsigned char xdata sspbuf     AT 0x9403;


/*********************************************************************
* Temperature Sensor                                                 *
*********************************************************************/

EXTERN unsigned char xdata ts_status     AT 0x9600;
EXTERN unsigned char xdata ts_result0    AT 0x9601;
EXTERN unsigned char xdata ts_result1    AT 0x9602;
EXTERN unsigned char xdata ts_offsetcor0 AT 0x9603;
EXTERN unsigned char xdata ts_offsetcor1 AT 0x9604;

/*********************************************************************
* FLASH				                                                 *
*********************************************************************/

EXTERN unsigned char xdata flash_stat    AT 0x9700;
EXTERN unsigned char xdata flash_att	 AT 0x9701;



#endif // AS8218_H__

