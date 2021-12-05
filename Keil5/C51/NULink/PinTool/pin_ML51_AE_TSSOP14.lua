local e=debug.getinfo(1).source:gsub("^@",""):gsub("(.+[\\/])[^\\/]+$","%1")
dofile(e.."ML51.lua")
function get_chip_status_ML51_AE_TSSOP14(i,e,e)
local a={}
local t=read_ML51_Registers()
local e
local o=ext.rshift(ext.band(t[2]["P2MF54"],240),4)
e={}
e["pin_no"]="6"
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
a[6]=e
local o=ext.band(t[2]["P2MF54"],15)
e={}
e["pin_no"]="7"
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
a[7]=e
local o=ext.rshift(ext.band(t[2]["P5MF32"],240),4)
e={}
e["pin_no"]="8"
e["texts"]={"XT1_IN","I2C0_SCL","UART0_TXD","P5.3"}
if o==0 then
fill_ML51_GPIO(e,t,5,3)
elseif o==3 then
fill_ML51_UART(e,t,5,3,"UART0_TXD",0)
elseif o==4 then
fill_ML51_I2C(e,t,5,3,"I2C0_SCL",0)
elseif o==10 then
fill_ML51_Normal(e,t,5,3,"XT1_IN")
else
fill_invalid_GPIO(e,t,5,3)
end
a[8]=e
local o=ext.band(t[2]["P5MF32"],15)
e={}
e["pin_no"]="9"
e["texts"]={"XT1_OUT","I2C0_SDA","UART0_RXD","P5.2"}
if o==0 then
fill_ML51_GPIO(e,t,5,2)
elseif o==3 then
fill_ML51_UART(e,t,5,2,"UART0_RXD",0)
elseif o==4 then
fill_ML51_I2C(e,t,5,2,"I2C0_SDA",0)
elseif o==10 then
fill_ML51_Normal(e,t,5,2,"XT1_OUT")
else
fill_invalid_GPIO(e,t,5,2)
end
a[9]=e
local o=ext.rshift(ext.band(t[2]["P0MF32"],240),4)
e={}
e["pin_no"]="10"
e["texts"]={"PWM1_BRAKE","PWM0_CH2","STADC","I2C1_SCL","UART1_TXD","SPI1_SS","SPI0_SS","P0.3"}
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
a[10]=e
local o=ext.band(t[2]["P0MF32"],15)
e={}
e["pin_no"]="11"
e["texts"]={"PWM0_CH3","I2C1_SDA","UART1_RXD","SPI1_CLK","SPI0_CLK","P0.2"}
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
a[11]=e
e={}
e["pin_no"]="12"
e["texts"]={"RST"}
fill_ML51_Normal(e,t,nil,nil,"RST")
e["direction"]=kPinDirection_In
a[12]=e
local o=ext.band(t[2]["P5MF10"],15)
e={}
e["pin_no"]="13"
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
a[13]=e
local o=ext.rshift(ext.band(t[2]["P5MF10"],240),4)
e={}
e["pin_no"]="14"
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
a[14]=e
e={}
e["pin_no"]="1"
e["texts"]={"VSS"}
fill_ML51_Normal(e,t,nil,nil,"VSS")
a[1]=e
local o=ext.band(t[2]["P4MF76"],15)
e={}
e["pin_no"]="2"
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
a[2]=e
e={}
e["pin_no"]="3"
e["texts"]={"VDD"}
fill_ML51_Normal(e,t,nil,nil,"VDD")
a[3]=e
local o=ext.rshift(ext.band(t[2]["P3MF10"],240),4)
e={}
e["pin_no"]="4"
e["texts"]={"P3.1","ADC_CH6,ACMP0_P3,ACMP1_P3","SPI1_MISO","UART3_TXD","UART0_TXD","PWM1_CH2","IC2"}
if o==0 then
fill_ML51_GPIO(e,t,3,1)
elseif o==1 then
fill_ML51_Analog(e,t,3,1,"ADC_CH6,ACMP0_P3,ACMP1_P3",{},{})
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
a[4]=e
local o=ext.band(t[2]["P3MF10"],15)
e={}
e["pin_no"]="5"
e["texts"]={"P3.0","SPI1_MOSI","UART0_RXD","PWM1_CH3","IC0"}
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
a[5]=e
return{name=i,information="",pins=a}
end
