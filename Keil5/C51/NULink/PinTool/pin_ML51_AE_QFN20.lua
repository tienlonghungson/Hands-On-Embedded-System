local e=debug.getinfo(1).source:gsub("^@",""):gsub("(.+[\\/])[^\\/]+$","%1")
dofile(e.."ML51.lua")
function get_chip_status_ML51_AE_QFN20(i,e,e)
local a={}
local t=read_ML51_Registers()
local e
local o=ext.rshift(ext.band(t[2]["P2MF54"],240),4)
e={}
e["pin_no"]="1"
e["texts"]={"P2.5","ADC_CH0,ACMP0_P0,ACMP1_P0","I2C0_SCL","PWM0_CH0","UART2_TXD","T0","INT0"}
if o==0 then
fill_ML51_GPIO(e,t,2,5)
elseif o==1 then
fill_ML51_Analog(e,t,2,5,"ADC_CH0,ACMP0_P0,ACMP1_P0",{},{})
elseif o==6 then
fill_ML51_I2C(e,t,2,5,"I2C0_SCL",0)
elseif o==11 then
fill_ML51_PWM(e,t,2,5,"PWM0_CH0",0,0)
elseif o==13 then
fill_ML51_SC(e,t,2,5,"UART2_TXD",0)
elseif o==14 then
fill_ML51_TM(e,t,2,5,"T0",0)
elseif o==15 then
fill_ML51_Normal(e,t,2,5,"INT0")
e["highlight_color"]=kColor_EINT
e["pin_bg_color"]=kBgColor_EINT
else
fill_invalid_GPIO(e,t,2,5)
end
a[1]=e
local o=ext.band(t[2]["P2MF54"],15)
e={}
e["pin_no"]="2"
e["texts"]={"P2.4","ADC_CH1,ACMP0_N0","I2C0_SDA","PWM0_CH1","UART2_RXD","T1","INT1"}
if o==0 then
fill_ML51_GPIO(e,t,2,4)
elseif o==1 then
fill_ML51_Analog(e,t,2,4,"ADC_CH1,ACMP0_N0",{},{0})
elseif o==6 then
fill_ML51_I2C(e,t,2,4,"I2C0_SDA",0)
elseif o==11 then
fill_ML51_PWM(e,t,2,4,"PWM0_CH1",0,1)
elseif o==13 then
fill_ML51_SC(e,t,2,4,"UART2_RXD",0)
elseif o==14 then
fill_ML51_TM(e,t,2,4,"T1",1)
elseif o==15 then
fill_ML51_Normal(e,t,2,4,"INT1")
e["highlight_color"]=kColor_EINT
e["pin_bg_color"]=kBgColor_EINT
else
fill_invalid_GPIO(e,t,2,4)
end
a[2]=e
local o=ext.rshift(ext.band(t[2]["P2MF32"],240),4)
e={}
e["pin_no"]="3"
e["texts"]={"P2.3","ADC_CH2,ACMP0_P1,ACMP1_P1","I2C1_SCL","UART1_TXD","PWM0_CH2","PWM0_BRAKE"}
if o==0 then
fill_ML51_GPIO(e,t,2,3)
elseif o==1 then
fill_ML51_Analog(e,t,2,3,"ADC_CH2,ACMP0_P1,ACMP1_P1",{},{})
elseif o==4 then
fill_ML51_I2C(e,t,2,3,"I2C1_SCL",1)
elseif o==6 then
fill_ML51_UART(e,t,2,3,"UART1_TXD",1)
elseif o==11 then
fill_ML51_PWM(e,t,2,3,"PWM0_CH2",0,2)
elseif o==13 then
fill_ML51_PWM(e,t,2,3,"PWM0_BRAKE",0)
else
fill_invalid_GPIO(e,t,2,3)
end
a[3]=e
local o=ext.band(t[2]["P2MF32"],15)
e={}
e["pin_no"]="4"
e["texts"]={"P2.2","ADC_CH3,ACMP1_N0","I2C1_SDA","UART1_RXD","PWM0_CH3"}
if o==0 then
fill_ML51_GPIO(e,t,2,2)
elseif o==1 then
fill_ML51_Analog(e,t,2,2,"ADC_CH3,ACMP1_N0",{},{1})
elseif o==4 then
fill_ML51_I2C(e,t,2,2,"I2C1_SDA",1)
elseif o==6 then
fill_ML51_UART(e,t,2,2,"UART1_RXD",1)
elseif o==11 then
fill_ML51_PWM(e,t,2,2,"PWM0_CH3",0,3)
else
fill_invalid_GPIO(e,t,2,2)
end
a[4]=e
local o=ext.rshift(ext.band(t[2]["P2MF10"],240),4)
e={}
e["pin_no"]="5"
e["texts"]={"P2.1","ADC_CH4,ACMP0_P2,ACMP1_P2","UART2_TXD","I2C1_SCL","PWM0_CH4","PWM1_CH4","PWM0_BRAKE"}
if o==0 then
fill_ML51_GPIO(e,t,2,1)
elseif o==1 then
fill_ML51_Analog(e,t,2,1,"ADC_CH4,ACMP0_P2,ACMP1_P2",{},{})
elseif o==7 then
fill_ML51_SC(e,t,2,1,"UART2_TXD",0)
elseif o==9 then
fill_ML51_I2C(e,t,2,1,"I2C1_SCL",1)
elseif o==11 then
fill_ML51_PWM(e,t,2,1,"PWM0_CH4",0,4)
elseif o==12 then
fill_ML51_PWM(e,t,2,1,"PWM1_CH4",1,4)
elseif o==13 then
fill_ML51_PWM(e,t,2,1,"PWM0_BRAKE",0)
else
fill_invalid_GPIO(e,t,2,1)
end
a[5]=e
local o=ext.rshift(ext.band(t[2]["P0MF32"],240),4)
e={}
e["pin_no"]="6"
e["texts"]={"P0.3","SPI0_SS","SPI1_SS","UART1_TXD","I2C1_SCL","STADC","PWM0_CH2","PWM1_BRAKE"}
if o==0 then
fill_ML51_GPIO(e,t,0,3)
elseif o==3 then
fill_ML51_SPI(e,t,0,3,"SPI0_SS",0)
elseif o==4 then
fill_ML51_SPI(e,t,0,3,"SPI1_SS",1)
elseif o==8 then
fill_ML51_UART(e,t,0,3,"UART1_TXD",1)
elseif o==9 then
fill_ML51_I2C(e,t,0,3,"I2C1_SCL",1)
elseif o==11 then
fill_ML51_ADC(e,t,0,3,"STADC")
elseif o==13 then
fill_ML51_PWM(e,t,0,3,"PWM0_CH2",0,2)
elseif o==15 then
fill_ML51_PWM(e,t,0,3,"PWM1_BRAKE",1)
else
fill_invalid_GPIO(e,t,0,3)
end
a[6]=e
local o=ext.band(t[2]["P0MF32"],15)
e={}
e["pin_no"]="7"
e["texts"]={"P0.2","SPI0_CLK","SPI1_CLK","UART1_RXD","I2C1_SDA","PWM0_CH3"}
if o==0 then
fill_ML51_GPIO(e,t,0,2)
elseif o==3 then
fill_ML51_SPI(e,t,0,2,"SPI0_CLK",0)
elseif o==4 then
fill_ML51_SPI(e,t,0,2,"SPI1_CLK",1)
elseif o==8 then
fill_ML51_UART(e,t,0,2,"UART1_RXD",1)
elseif o==9 then
fill_ML51_I2C(e,t,0,2,"I2C1_SDA",1)
elseif o==13 then
fill_ML51_PWM(e,t,0,2,"PWM0_CH3",0,3)
else
fill_invalid_GPIO(e,t,0,2)
end
a[7]=e
local o=ext.rshift(ext.band(t[2]["P0MF10"],240),4)
e={}
e["pin_no"]="8"
e["texts"]={"P0.1","SPI0_MISO","SPI1_MISO","UART0_TXD","PWM0_CH4"}
if o==0 then
fill_ML51_GPIO(e,t,0,1)
elseif o==3 then
fill_ML51_SPI(e,t,0,1,"SPI0_MISO",0)
elseif o==4 then
fill_ML51_SPI(e,t,0,1,"SPI1_MISO",1)
elseif o==7 then
fill_ML51_UART(e,t,0,1,"UART0_TXD",0)
elseif o==13 then
fill_ML51_PWM(e,t,0,1,"PWM0_CH4",0,4)
else
fill_invalid_GPIO(e,t,0,1)
end
a[8]=e
local o=ext.band(t[2]["P0MF10"],15)
e={}
e["pin_no"]="9"
e["texts"]={"P0.0","SPI0_MOSI","SPI1_MOSI","UART0_RXD","PWM0_CH5"}
if o==0 then
fill_ML51_GPIO(e,t,0,0)
elseif o==3 then
fill_ML51_SPI(e,t,0,0,"SPI0_MOSI",0)
elseif o==4 then
fill_ML51_SPI(e,t,0,0,"SPI1_MOSI",1)
elseif o==7 then
fill_ML51_UART(e,t,0,0,"UART0_RXD",0)
elseif o==13 then
fill_ML51_PWM(e,t,0,0,"PWM0_CH5",0,5)
else
fill_invalid_GPIO(e,t,0,0)
end
a[9]=e
e={}
e["pin_no"]="10"
e["texts"]={"RST"}
fill_ML51_Normal(e,t,nil,nil,"RST")
e["direction"]=kPinDirection_In
a[10]=e
local o=ext.band(t[2]["P5MF10"],15)
e={}
e["pin_no"]="11"
e["texts"]={"ICE_DAT","UART0_TXD","I2C1_SCL","UART1_TXD","P5.0"}
if o==0 then
fill_ML51_GPIO(e,t,5,0)
elseif o==2 then
fill_ML51_UART(e,t,5,0,"UART1_TXD",1)
elseif o==3 then
fill_ML51_I2C(e,t,5,0,"I2C1_SCL",1)
elseif o==4 then
fill_ML51_UART(e,t,5,0,"UART0_TXD",0)
elseif o==14 then
fill_ML51_Normal(e,t,5,0,"ICE_DAT")
else
fill_invalid_GPIO(e,t,5,0)
end
a[11]=e
local o=ext.rshift(ext.band(t[2]["P5MF10"],240),4)
e={}
e["pin_no"]="12"
e["texts"]={"ICE_CLK","I2C1_SDA","UART1_RXD","P5.1"}
if o==0 then
fill_ML51_GPIO(e,t,5,1)
elseif o==2 then
fill_ML51_UART(e,t,5,1,"UART1_RXD",1)
elseif o==3 then
fill_ML51_I2C(e,t,5,1,"I2C1_SDA",1)
elseif o==14 then
fill_ML51_Normal(e,t,5,1,"ICE_CLK")
else
fill_invalid_GPIO(e,t,5,1)
end
a[12]=e
local o=ext.rshift(ext.band(t[2]["P4MF10"],240),4)
e={}
e["pin_no"]="13"
e["texts"]={"ACMP0_O","PWM1_CH4","I2C0_SCL","UART2_TXD","P4.1"}
if o==0 then
fill_ML51_GPIO(e,t,4,1)
elseif o==8 then
fill_ML51_SC(e,t,4,1,"UART2_TXD",0)
elseif o==9 then
fill_ML51_I2C(e,t,4,1,"I2C0_SCL",0)
elseif o==12 then
fill_ML51_PWM(e,t,4,1,"PWM1_CH4",1,4)
elseif o==14 then
fill_ML51_ACMP(e,t,4,1,"ACMP0_O",0)
else
fill_invalid_GPIO(e,t,4,1)
end
a[13]=e
local o=ext.band(t[2]["P4MF10"],15)
e={}
e["pin_no"]="14"
e["texts"]={"INT1","ACMP1_O","PWM1_CH5","I2C0_SDA","UART2_RXD","P4.0"}
if o==0 then
fill_ML51_GPIO(e,t,4,0)
elseif o==8 then
fill_ML51_SC(e,t,4,0,"UART2_RXD",0)
elseif o==9 then
fill_ML51_I2C(e,t,4,0,"I2C0_SDA",0)
elseif o==12 then
fill_ML51_PWM(e,t,4,0,"PWM1_CH5",1,5)
elseif o==14 then
fill_ML51_ACMP(e,t,4,0,"ACMP1_O",1)
elseif o==15 then
fill_ML51_Normal(e,t,4,0,"INT1")
e["highlight_color"]=kColor_EINT
e["pin_bg_color"]=kBgColor_EINT
else
fill_invalid_GPIO(e,t,4,0)
end
a[14]=e
local o=ext.rshift(ext.band(t[2]["P1MF76"],240),4)
e={}
e["pin_no"]="15"
e["texts"]={"UART0_RXD","P1.7"}
if o==0 then
fill_ML51_GPIO(e,t,1,7)
elseif o==3 then
fill_ML51_UART(e,t,1,7,"UART0_RXD",0)
else
fill_invalid_GPIO(e,t,1,7)
end
a[15]=e
e={}
e["pin_no"]="16"
e["texts"]={"VSS"}
fill_ML51_Normal(e,t,nil,nil,"VSS")
a[16]=e
local o=ext.band(t[2]["P4MF76"],15)
e={}
e["pin_no"]="17"
e["texts"]={"INT0","CLO","T0","PWM0_CH0","PWM1_BRAKE","P4.6"}
if o==0 then
fill_ML51_GPIO(e,t,4,6)
elseif o==11 then
fill_ML51_PWM(e,t,4,6,"PWM1_BRAKE",1)
elseif o==12 then
fill_ML51_PWM(e,t,4,6,"PWM0_CH0",0,0)
elseif o==13 then
fill_ML51_TM(e,t,4,6,"T0",0)
elseif o==14 then
fill_ML51_CLKO(e,t,4,6,"CLO")
elseif o==15 then
fill_ML51_Normal(e,t,4,6,"INT0")
e["highlight_color"]=kColor_EINT
e["pin_bg_color"]=kBgColor_EINT
else
fill_invalid_GPIO(e,t,4,6)
end
a[17]=e
e={}
e["pin_no"]="18"
e["texts"]={"VDD"}
fill_ML51_Normal(e,t,nil,nil,"VDD")
a[18]=e
local o=ext.rshift(ext.band(t[2]["P3MF10"],240),4)
e={}
e["pin_no"]="19"
e["texts"]={"IC2","PWM1_CH2","UART0_TXD","UART3_TXD","SPI1_MISO","ACMP1_P3,ACMP0_P3,ADC_CH6","P3.1"}
if o==0 then
fill_ML51_GPIO(e,t,3,1)
elseif o==1 then
fill_ML51_Analog(e,t,3,1,"ACMP1_P3,ACMP0_P3,ADC_CH6",{},{})
elseif o==4 then
fill_ML51_SPI(e,t,3,1,"SPI1_MISO",1)
elseif o==5 then
fill_ML51_SC(e,t,3,1,"UART3_TXD",1)
elseif o==6 then
fill_ML51_UART(e,t,3,1,"UART0_TXD",0)
elseif o==11 then
fill_ML51_PWM(e,t,3,1,"PWM1_CH2",1,2)
elseif o==13 then
fill_ML51_TM(e,t,3,1,"IC2",2)
else
fill_invalid_GPIO(e,t,3,1)
end
a[19]=e
local o=ext.band(t[2]["P3MF10"],15)
e={}
e["pin_no"]="20"
e["texts"]={"IC0","PWM1_CH3","UART0_RXD","SPI1_MOSI","P3.0"}
if o==0 then
fill_ML51_GPIO(e,t,3,0)
elseif o==4 then
fill_ML51_SPI(e,t,3,0,"SPI1_MOSI",1)
elseif o==6 then
fill_ML51_UART(e,t,3,0,"UART0_RXD",0)
elseif o==11 then
fill_ML51_PWM(e,t,3,0,"PWM1_CH3",1,3)
elseif o==13 then
fill_ML51_TM(e,t,3,0,"IC0",2)
else
fill_invalid_GPIO(e,t,3,0)
end
a[20]=e
return{name=i,information="",pins=a}
end
