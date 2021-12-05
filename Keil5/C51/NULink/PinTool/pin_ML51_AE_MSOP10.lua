local e=debug.getinfo(1).source:gsub("^@",""):gsub("(.+[\\/])[^\\/]+$","%1")
dofile(e.."ML51.lua")
function get_chip_status_ML51_AE_MSOP10(i,e,e)
local a={}
local t=read_ML51_Registers()
local e
local o=ext.rshift(ext.band(t[2]["P2MF32"],240),4)
e={}
e["pin_no"]="5"
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
a[5]=e
local o=ext.band(t[2]["P2MF10"],15)
e={}
e["pin_no"]="6"
e["texts"]={"PWM1_BRAKE","PWM1_CH5","PWM0_CH5","I2C1_SDA","UART2_RXD","ACMP0_N1,ADC_CH5","P2.0"}
if o==0 then
fill_ML51_GPIO(e,t,2,0)
elseif o==1 then
fill_ML51_Analog(e,t,2,0,"ACMP0_N1,ADC_CH5",{},{0})
elseif o==7 then
fill_ML51_SC(e,t,2,0,"UART2_RXD",0)
elseif o==9 then
fill_ML51_I2C(e,t,2,0,"I2C1_SDA",1)
elseif o==11 then
fill_ML51_PWM(e,t,2,0,"PWM0_CH5",0,5)
elseif o==12 then
fill_ML51_PWM(e,t,2,0,"PWM1_CH5",1,5)
elseif o==13 then
fill_ML51_PWM(e,t,2,0,"PWM1_BRAKE",1)
else
fill_invalid_GPIO(e,t,2,0)
end
a[6]=e
local o=ext.rshift(ext.band(t[2]["P0MF10"],240),4)
e={}
e["pin_no"]="7"
e["texts"]={"PWM0_CH4","UART0_TXD","SPI1_MISO","SPI0_MISO","P0.1"}
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
a[7]=e
local o=ext.band(t[2]["P0MF10"],15)
e={}
e["pin_no"]="8"
e["texts"]={"PWM0_CH5","UART0_RXD","SPI1_MOSI","SPI0_MOSI","P0.0"}
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
a[8]=e
e={}
e["pin_no"]="9"
e["texts"]={"RST"}
fill_ML51_Normal(e,t,nil,nil,"RST")
e["direction"]=kPinDirection_In
a[9]=e
local o=ext.band(t[2]["P5MF10"],15)
e={}
e["pin_no"]="10"
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
a[10]=e
local o=ext.rshift(ext.band(t[2]["P5MF10"],240),4)
e={}
e["pin_no"]="1"
e["texts"]={"P5.1","UART1_RXD","I2C1_SDA","ICE_CLK"}
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
a[1]=e
e={}
e["pin_no"]="2"
e["texts"]={"VSS"}
fill_ML51_Normal(e,t,nil,nil,"VSS")
a[2]=e
local o=ext.band(t[2]["P4MF76"],15)
e={}
e["pin_no"]="3"
e["texts"]={"P4.6","PWM1_BRAKE","PWM0_CH0","T0","CLO","INT0"}
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
a[3]=e
e={}
e["pin_no"]="4"
e["texts"]={"VDD"}
fill_ML51_Normal(e,t,nil,nil,"VDD")
a[4]=e
return{name=i,information="",pins=a}
end
