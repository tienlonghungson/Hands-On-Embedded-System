REG=
{
SFRS=145,
P0MF10=249,
P1MF10=253,
P2MF10=242,
P3MF10=246,
P4MF10=235,
P5MF10=239,
P0MF32=250,
P1MF32=254,
P2MF32=243,
P3MF32=247,
P4MF32=236,
P5MF32=225,
P0MF54=251,
P1MF54=255,
P2MF54=244,
P3MF54=233,
P4MF54=237,
P5MF54=226,
P0MF76=252,
P1MF76=241,
P2MF76=245,
P3MF76=234,
P4MF76=238,
P5MF76=227,
P0M1=177,
P0M2=178,
P1M1=179,
P1M2=180,
P2M1=181,
P2M2=182,
P3M1=194,
P3M2=195,
P4M1=185,
P4M2=186,
P5M1=189,
P5M2=190,
P0=128,
P1=144,
P2=160,
P3=176,
P4=216,
P5=177,
P0S=153,
P0SR=154,
P1S=155,
P1SR=156,
P2S=157,
P2SR=158,
P3S=172,
P3SR=173,
P4S=187,
P4SR=188,
P5S=191,
P5SR=174,
ADCCON1=225,
ACMPCR0=210,
ACMPCR1=211,
I2C0CON=192,
I2C1CON=232,
I2C0CLK=190,
I2C1CLK=181,
ACMPCR2=171,
PWM0CON0=209,
PWM1CON0=197,
PWM0CON1=223,
PWM1CON1=198,
CKCON=142,
SCON=152,
S1CON=248,
PCON=135,
T3CON=196,
SPI0CR0=243,
SPI1CR0=249,
SC0CR0=214,
SC0CR1=215,
SC0ETURD0=219,
SC0ETURD1=220,
SC1CR0=228,
SC1CR1=229,
SC1ETURD0=219,
SC1ETURD1=220,
TCON=136,
T2CON=200,
T2MOD=201,
TMOD=137,
CKEN=151,
CAPCON0=225,
}
g_ML51_regs=REG
function read_ML51_Registers(e,e,e,e)
local e={}
e[0]={}
e[1]={}
e[2]={}
function WriteMem8(t,e)
ice:WriteMem(536870912+t,{e})
end
function ReadMem8(a,t)
if not t then t=1 end
return unpack(ice:ReadMem(536870912+a,t))
end
e[0]["SFRS"]=ReadMem8(g_ML51_regs.SFRS)
e[1]["SFRS"]=e[0]["SFRS"]
e[2]["SFRS"]=e[0]["SFRS"]
e[0]["P0"]=ReadMem8(g_ML51_regs.P0)
e[0]["P1"]=ReadMem8(g_ML51_regs.P1)
e[0]["P2"]=ReadMem8(g_ML51_regs.P2)
e[0]["P3"]=ReadMem8(g_ML51_regs.P3)
e[0]["P4"]=ReadMem8(g_ML51_regs.P4)
e[1]["P0"]=e[0]["P0"]
e[1]["P1"]=e[0]["P1"]
e[1]["P2"]=e[0]["P2"]
e[1]["P3"]=e[0]["P3"]
e[1]["P4"]=e[0]["P4"]
e[2]["P0"]=e[0]["P0"]
e[2]["P1"]=e[0]["P1"]
e[2]["P2"]=e[0]["P2"]
e[2]["P3"]=e[0]["P3"]
e[2]["P4"]=e[0]["P4"]
e[0]["SCON"]=ReadMem8(g_ML51_regs.SCON)
e[1]["SCON"]=e[0]["SCON"]
e[2]["SCON"]=e[0]["SCON"]
e[0]["S1CON"]=ReadMem8(g_ML51_regs.S1CON)
e[1]["S1CON"]=e[0]["S1CON"]
e[2]["S1CON"]=e[0]["S1CON"]
e[0]["PCON"]=ReadMem8(g_ML51_regs.PCON)
e[1]["PCON"]=e[0]["PCON"]
e[2]["PCON"]=e[0]["PCON"]
e[0]["TCON"]=ReadMem8(g_ML51_regs.TCON)
e[1]["TCON"]=e[0]["TCON"]
e[2]["TCON"]=e[0]["TCON"]
e[0]["T2CON"]=ReadMem8(g_ML51_regs.T2CON)
e[1]["T2CON"]=e[0]["T2CON"]
e[2]["T2CON"]=e[0]["T2CON"]
local t=ReadMem8(g_ML51_regs.SFRS)
WriteMem8(g_ML51_regs.SFRS,2)
e[2]["P0MF10"],
e[2]["P0MF32"],
e[2]["P0MF54"],
e[2]["P0MF76"],
e[2]["P1MF10"],
e[2]["P1MF32"],
e[2]["P1MF54"]=ReadMem8(g_ML51_regs.P0MF10,7)
e[2]["P1MF76"],
e[2]["P2MF10"],
e[2]["P2MF32"],
e[2]["P2MF54"],
e[2]["P2MF76"],
e[2]["P3MF10"],
e[2]["P3MF32"]=ReadMem8(g_ML51_regs.P1MF76,7)
e[2]["P3MF54"],
e[2]["P3MF76"],
e[2]["P4MF10"],
e[2]["P4MF32"],
e[2]["P4MF54"],
e[2]["P4MF76"],
e[2]["P5MF10"]=ReadMem8(g_ML51_regs.P3MF54,7)
e[2]["P5MF32"],
e[2]["P5MF54"],
e[2]["P5MF76"]=ReadMem8(g_ML51_regs.P5MF32,3)
e[2]["PWM1CON0"]=ReadMem8(g_ML51_regs.PWM1CON0)
e[2]["PWM1CON1"]=ReadMem8(g_ML51_regs.PWM1CON1)
e[2]["SC1CR0"],
e[2]["SC1CR1"]=ReadMem8(g_ML51_regs.SC1CR0,2)
e[2]["SC1ETURD0"],
e[2]["SC1ETURD1"]=ReadMem8(g_ML51_regs.SC1ETURD0,2)
WriteMem8(g_ML51_regs.SFRS,1)
e[1]["P0M1"],
e[1]["P0M2"],
e[1]["P1M1"],
e[1]["P1M2"],
e[1]["P2M1"],
e[1]["P2M2"]=ReadMem8(g_ML51_regs.P0M1,6)
e[1]["P3M1"],
e[1]["P3M2"]=ReadMem8(g_ML51_regs.P3M1,2)
e[1]["P4M1"],
e[1]["P4M2"]=ReadMem8(g_ML51_regs.P4M1,2)
e[1]["P5M1"],
e[1]["P5M2"]=ReadMem8(g_ML51_regs.P5M1,2)
e[1]["P0S"],
e[1]["P0SR"],
e[1]["P1S"],
e[1]["P1SR"],
e[1]["P2S"],
e[1]["P2SR"]=ReadMem8(g_ML51_regs.P0S,6)
e[1]["P3S"],
e[1]["P3SR"],
e[1]["P5SR"]=ReadMem8(g_ML51_regs.P3S,3)
e[1]["P4S"],
e[1]["P4SR"]=ReadMem8(g_ML51_regs.P4S,2)
e[1]["P5S"]=ReadMem8(g_ML51_regs.P5S)
e[1]["PWM0CON1"]=ReadMem8(g_ML51_regs.PWM0CON1)
e[1]["ACMPCR2"]=ReadMem8(g_ML51_regs.ACMPCR2)
e[1]["CAPCON0"]=ReadMem8(g_ML51_regs.CAPCON0)
WriteMem8(g_ML51_regs.SFRS,0)
e[0]["P5"]=ReadMem8(g_ML51_regs.P5)
e[0]["ADCCON1"]=ReadMem8(g_ML51_regs.ADCCON1)
e[0]["ACMPCR0"],
e[0]["ACMPCR1"]=ReadMem8(g_ML51_regs.ACMPCR0,2)
e[0]["I2C0CON"]=ReadMem8(g_ML51_regs.I2C0CON)
e[0]["I2C1CON"]=ReadMem8(g_ML51_regs.I2C1CON)
e[0]["I2C0CLK"]=ReadMem8(g_ML51_regs.I2C0CLK)
e[0]["I2C1CLK"]=ReadMem8(g_ML51_regs.I2C1CLK)
e[0]["PWM0CON0"]=ReadMem8(g_ML51_regs.PWM0CON0)
e[0]["CKCON"]=ReadMem8(g_ML51_regs.CKCON)
e[0]["T3CON"]=ReadMem8(g_ML51_regs.T3CON)
e[0]["SPI0CR0"]=ReadMem8(g_ML51_regs.SPI0CR0)
e[0]["SPI1CR0"]=ReadMem8(g_ML51_regs.SPI1CR0)
e[0]["SC0CR0"],
e[0]["SC0CR1"]=ReadMem8(g_ML51_regs.SC0CR0,2)
e[0]["SC0ETURD0"],
e[0]["SC0ETURD1"]=ReadMem8(g_ML51_regs.SC0ETURD0,2)
e[0]["CKEN"]=ReadMem8(g_ML51_regs.CKEN)
e[0]["T2MOD"]=ReadMem8(g_ML51_regs.T2MOD)
e[0]["TMOD"]=ReadMem8(g_ML51_regs.TMOD)
WriteMem8(g_ML51_regs.SFRS,t)
return e
end
local t={
[0]=kPinDirection_Bi,
[1]=kPinDirection_PushPullOut,
[2]=kPinDirection_In,
[3]=kPinDirection_OpenDrainOut,
}
local e={
[0]="Quasi-bidirectional",
[1]="OUTPUT",
[2]="INPUT",
[3]="Open-Drain",
}
function get_mfp_regs(a,t,e)
local e=ext.rshift(e,1)
local e={string.format("P%dMF%d%d",t,e*2+1,e*2)}
return reg2str("Multi-Function registers",g_ML51_regs,a[2],e,true)
end
function get_ctrl_informnation(t,e)
return reg2str("Control setting registers",g_ML51_regs,t,e,true)
end
function get_ML51_GPIO_direction(o,a,e)
local i=o[1][string.format("P%dM1",a)]
local a=o[1][string.format("P%dM2",a)]
local o=ext.band(ext.rshift(i,e),1)
local e=ext.band(ext.rshift(a,e),1)
return t[2*o+e]
end
function fill_ML51_GPIO(o,s,e,a,h)
if h==nil then h=string.format("P%d.%d",e,a)end
local n={}
local i={}
o["highlight_text"]=h
o["normal_color"]=kColor_Invalid
o["highlight_color"]=kColor_GPIO
o["pin_bg_color"]=kBgColor_GPIO
table.insert(i,string.format("P%dM1",e))
table.insert(i,string.format("P%dM2",e))
local r=s[1][string.format("P%dM1",e)]
local d=s[1][string.format("P%dM2",e)]
n[string.format("P%dM1",e)]=r
n[string.format("P%dM2",e)]=d
local l=ext.band(ext.rshift(r,a),1)
local r=ext.band(ext.rshift(d,a),1)
o["direction"]=t[2*l+r]
local t=""
table.insert(i,string.format("P%d",e))
local r=s[0][string.format("P%d",e)]
n[string.format("P%d",e)]=r
if ext.band(r,ext.lshift(1,a))==0 then
o["status"]=kPinStatus_Low
t=t.."Pin I/O <b>low</b><br>"
else
o["status"]=kPinStatus_High
t=t.."Pin I/O <b>high</b><br>"
end
table.insert(i,string.format("P%dS",e))
local r=s[1][string.format("P%dS",e)]
n[string.format("P%dS",e)]=r
if ext.band(r,ext.lshift(1,a))==0 then
t=t..string.format("P%d.%d Schmitt triggered input <b>disabled</b><br>",e,a)
else
t=t..string.format("P%d.%d Schmitt triggered input <b>enabled</b><br>",e,a)
end
table.insert(i,string.format("P%dSR",e))
local r=s[1][string.format("P%dSR",e)]
n[string.format("P%dSR",e)]=r
if ext.band(r,ext.lshift(1,a))==0 then
t=t..string.format("P%d.%d <b>normal</b> output slew rate<br>",e,a)
else
t=t..string.format("P%d.%d <b>high-speed</b> output slew rate<br>",e,a)
end
local r=""
if r~=""then
o["pin_no_color"]=kBgColor_Error
r="<font color=red>"..r.."</font>"
end
local i=reg2str("GPIO setting registers",g_ML51_regs,n,i,true)
o["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s"..
"<b>Information</b><br>"..
"%s",
h,
r,
get_mfp_regs(s,e,a),
i,
t)
end
function fill_invalid_GPIO(e,o,t,a)
e["highlight_text"]=string.format("P%d.%d",t,a)
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_Invalid
e["pin_bg_color"]=kBgColor_Invalid
e["direction"]=kPinDirection_Unknown
e["status"]=kPinStatus_Unknown
e["pin_no_color"]=kBgColor_Error
local i="<font color=red>Undefined setting in Multi-Function registers for this pin.</font><br>"
e["information"]=string.format(
"<b>P%d.%d</b><br>%s<br>"..
"%s",
t,a,
i,
get_mfp_regs(o,t,a))
end
function fill_ML51_ADC(e,a,n,h,s)
local r=""
local t=""
local o={}
local i={}
e["highlight_text"]=s
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_ADC
e["pin_bg_color"]=kBgColor_ADC
e["direction"]=get_ML51_GPIO_direction(a,n,h)
e["status"]=kPinStatus_Unknown
table.insert(o,"ADCCON1")
i["ADCCON1"]=a[0]["ADCCON1"]
local d=ext.band(a[0]["ADCCON1"],1)
if d==0 then
t="ADC circuit off<br>"
end
if t~=""then
t="<font color=red>"..t.."</font>"
e["pin_no_color"]=kBgColor_Error
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
s,
t,
get_mfp_regs(a,n,h),
get_ctrl_informnation(i,o))
return r,t,o,i
end
function fill_ML51_ACMP(e,i,s,h,n,t)
local r=""
local o=""
local a={}
local t={}
e["highlight_text"]=n
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_CMP
e["pin_bg_color"]=kBgColor_CMP
e["direction"]=get_ML51_GPIO_direction(i,s,h)
e["status"]=kPinStatus_Unknown
table.insert(a,"ACMPCR0")
t["ACMPCR0"]=i[0]["ACMPCR0"]
table.insert(a,"ACMPCR1")
t["ACMPCR1"]=i[0]["ACMPCR1"]
table.insert(a,"ACMPCR2")
t["ACMPCR2"]=i[1]["ACMPCR2"]
if o~=""then
o="<font color=red>"..o.."</font>"
e["pin_no_color"]=kBgColor_Error
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
n,
o,
get_mfp_regs(i,s,h),
get_ctrl_informnation(t,a))
return r,o,a,t
end
function fill_ML51_I2C(e,o,s,n,h,r)
local t=""
local t=""
local a={}
a[0]={}
a[1]={}
a[2]={}
e["highlight_text"]=h
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_I2C
e["pin_bg_color"]=kBgColor_I2C
e["direction"]=get_ML51_GPIO_direction(o,s,n)
e["status"]=kPinStatus_Unknown
local i=string.format("I2C%dCON",r)
table.insert(a[0],i)
local i=ext.band(ext.rshift(o[0][i],6),1)
if i==0 then
t="I2C bus disabled<br>"
else
local e=string.format("I2C%dCLK",r)
table.insert(a[0],e)
local a=o[0][e]
if a<2 then
t=string.format("Invalid %s value, %s must >= 2.<br>",e,e)
else
end
end
if t~=""then
t="<font color=red>"..t.."</font>"
e["pin_no_color"]=kBgColor_Error
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
h,
t,
get_mfp_regs(o,s,n),
get_ctrl_informnation(o[0],a[0]))
end
function fill_ML51_PWM(e,t,d,r,l,h)
local a=""
local s=""
local a={}
local n={}
e["highlight_text"]=l
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_PWM
e["pin_bg_color"]=kBgColor_PWM
e["direction"]=get_ML51_GPIO_direction(t,d,r)
e["status"]=kPinStatus_Unknown
local i=string.format("PWM%dCON0",h)
local o=string.format("PWM%dCON1",h)
if h==0 then
table.insert(a,i)
n[i]=t[0][i]
table.insert(a,o)
n[o]=t[1][o]
elseif h==1 then
table.insert(a,i)
n[i]=t[2][i]
table.insert(a,o)
n[o]=t[2][o]
end
table.insert(a,"CKCON")
n["CKCON"]=t[0]["CKCON"]
if s~=""then
s="<font color=red>"..s.."</font>"
e["pin_no_color"]=kBgColor_Error
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
l,
s,
get_mfp_regs(t,d,r),
get_ctrl_informnation(n,a))
end
function fill_ML51_UART(t,o,n,s,h,i)
local e=""
local a=""
local e={}
e[0]={}
e[1]={}
e[2]={}
t["highlight_text"]=h
t["normal_color"]=kColor_Invalid
t["highlight_color"]=kColor_UART
t["pin_bg_color"]=kBgColor_UART
t["direction"]=get_ML51_GPIO_direction(o,n,s)
t["status"]=kPinStatus_Unknown
if i==0 then
table.insert(e[0],"SCON")
table.insert(e[0],"PCON")
table.insert(e[0],"TMOD")
table.insert(e[0],"TCON")
table.insert(e[0],"CKCON")
elseif i==1 then
table.insert(e[0],"S1CON")
table.insert(e[0],"T3CON")
end
if a~=""then
a="<font color=red>"..a.."</font>"
t["pin_no_color"]=kBgColor_Error
end
t["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
h,
a,
get_mfp_regs(o,n,s),
get_ctrl_informnation(o[0],e[0]))
end
function fill_ML51_SC(o,e,r,h,d,i)
local n=""
local s=""
local t={}
local a={}
o["highlight_text"]=d
o["normal_color"]=kColor_Invalid
o["highlight_color"]=kColor_SC
o["pin_bg_color"]=kBgColor_SC
o["direction"]=get_ML51_GPIO_direction(e,r,h)
o["status"]=kPinStatus_Unknown
if i<2 then
local o=string.format("SC%dCR0",i)
local o=string.format("SC%dCR1",i)
local o=string.format("SC%dETURD0",i)
local o=string.format("SC%dETURD1",i)
if i==0 then
table.insert(t,"SC0CR0")
a["SC0CR0"]=e[0]["SC0CR0"]
table.insert(t,"SC0CR1")
a["SC0CR1"]=e[0]["SC0CR1"]
table.insert(t,"SC0ETURD0")
a["SC0ETURD0"]=e[0]["SC0ETURD0"]
table.insert(t,"SC0ETURD1")
a["SC0ETURD1"]=e[0]["SC0ETURD1"]
elseif i==1 then
table.insert(t,"SC1CR0")
a["SC1CR0"]=e[2]["SC1CR0"]
table.insert(t,"SC1CR1")
a["SC1CR1"]=e[2]["SC1CR1"]
table.insert(t,"SC0CR0")
a["SC0CR0"]=e[0]["SC0CR0"]
table.insert(t,"SC0CR1")
a["SC0CR1"]=e[0]["SC0CR1"]
table.insert(t,"SC0ETURD0")
a["SC0ETURD0"]=e[0]["SC0ETURD0"]
table.insert(t,"SC0ETURD1")
a["SC0ETURD1"]=e[0]["SC0ETURD1"]
end
end
if s~=""then
s="<font color=red>"..s.."</font>"
o["pin_no_color"]=kBgColor_Error
end
if n~=""then
n="<b>Information</b><br>"..n
end
o["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s%s",
d,
s,
get_mfp_regs(e,r,h),
get_ctrl_informnation(a,t),
n)
end
function fill_ML51_SPI(e,i,d,r,h,s)
local t=""
local a=""
local o={}
o[0]={}
o[1]={}
o[2]={}
e["highlight_text"]=h
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_SPI
e["pin_bg_color"]=kBgColor_SPI
e["direction"]=get_ML51_GPIO_direction(i,d,r)
e["status"]=kPinStatus_Unknown
local n=string.format("SPI%dCR0",s)
table.insert(o[0],n)
local l=ext.band(ext.rshift(i[0][n],6),1)
local n=ext.band(ext.rshift(i[0][n],4),1)
if l==0 then
a="SPI function disabled<br>"
else
if n~=0 then
t=string.format("SPI%d is in <b>master</b> mode.<br>",s)
else
t=string.format("SPI%d is in <b>slave</b> mode.<br>",s)
end
end
if a~=""then
a="<font color=red>"..a.."</font>"
e["pin_no_color"]=kBgColor_Error
end
if t~=""then
t="<b>Information</b><br>"..t
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s%s",
h,
a,
get_mfp_regs(i,d,r),
get_ctrl_informnation(i[0],o[0]),
t)
end
function fill_ML51_CLKO(e,o,s,i,n)
local t=""
local a=""
local t={}
t[0]={}
t[1]={}
t[2]={}
e["highlight_text"]=n
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_CLK
e["pin_bg_color"]=kBgColor_CLK
e["direction"]=get_ML51_GPIO_direction(o,s,i)
e["status"]=kPinStatus_Unknown
table.insert(t[0],"CKCON")
local h=ext.band(ext.rshift(o[0]["CKCON"],1),1)
if h==0 then
a="System clock output disabled<br>"
end
if a~=""then
a="<font color=red>"..a.."</font>"
e["pin_no_color"]=kBgColor_Error
end
e["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
n,
a,
get_mfp_regs(o,s,i),
get_ctrl_informnation(o[0],t[0]))
end
function fill_ML51_TM(t,e,n,s,r,h)
local a=""
local i=""
local o={}
local a={}
t["highlight_text"]=r
t["normal_color"]=kColor_Invalid
t["highlight_color"]=kColor_TM
t["pin_bg_color"]=kBgColor_TM
t["direction"]=get_ML51_GPIO_direction(e,n,s)
t["status"]=kPinStatus_Unknown
if h<2 then
table.insert(o,"TMOD")
a["TMOD"]=e[0]["TMOD"]
table.insert(o,"TCON")
a["TCON"]=e[0]["TCON"]
table.insert(o,"CKCON")
a["CKCON"]=e[0]["CKCON"]
elseif h==2 then
table.insert(o,"T2MOD")
a["T2MOD"]=e[0]["T2MOD"]
table.insert(o,"T2CON")
a["T2CON"]=e[0]["T2CON"]
table.insert(o,"CAPCON0")
a["CAPCON0"]=e[1]["CAPCON0"]
end
if i~=""then
i="<font color=red>"..i.."</font>"
t["pin_no_color"]=kBgColor_Error
end
t["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
r,
i,
get_mfp_regs(e,n,s),
get_ctrl_informnation(a,o))
end
function fill_ML51_Normal(e,n,i,t,o)
local a={}
a[0]={}
a[1]={}
a[2]={}
if i~=nil and t~=nil then
e["highlight_text"]=o
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_Normal
e["pin_bg_color"]=kBgColor_Normal
e["direction"]=get_ML51_GPIO_direction(n,i,t)
e["status"]=kPinStatus_Unknown
if i==5 then
if t==2 or t==3 then
table.insert(a[0],"CKEN")
elseif t==4 or t==5 then
table.insert(a[0],"CKEN")
end
end
e["information"]=string.format(
"<b>%s</b><br><br>"
.."%s%s",
o,
get_mfp_regs(n,i,t),
get_ctrl_informnation(n[0],a[0]))
else
e["highlight_text"]=o
e["normal_color"]=kColor_Invalid
e["highlight_color"]=kColor_Normal
e["pin_bg_color"]=kBgColor_Normal
e["direction"]=kPinDirection_Unknown
e["status"]=kPinStatus_Unknown
e["information"]=string.format(
"<b>%s</b>",
o)
end
end
function fill_ML51_Analog(t,h,n,i,s,w,f)
local e=""
local a=""
local l={}
local d={}
local o={}
local r=""
local m=""
local c={}
local u={}
if w~=nil then
r,m,c,u=fill_ML51_ADC(o,h,n,i,s,unpack(w))
for t,e in ipairs(c)do
table.insert(l,e)
end
for t,e in pairs(u)do
d[t]=e
end
if r~=""then
if e~=""then e=e.."<br><br>"end
e=e.."<b>ADC</b> "..r
end
a=a..m
end
local w={}
local r=""
local m=""
local u={}
local c={}
if f~=nil then
r,m,u,c=fill_ML51_ACMP(w,h,n,i,s,unpack(f))
for t,e in ipairs(u)do
table.insert(l,e)
end
for t,e in pairs(c)do
d[t]=e
end
if r~=""then
if e~=""then e=e.."<br><br>"end
e=e.."<b>ACMP</b> "..r
end
a=a..m
end
t["highlight_text"]=s
t["normal_color"]=o["normal_color"]
t["highlight_color"]=o["highlight_color"]
t["pin_bg_color"]=o["pin_bg_color"]
t["direction"]=get_ML51_GPIO_direction(h,n,i)
t["status"]=kPinStatus_Unknown
t["information"]=string.format(
"<b>%s</b><br>%s<br>"..
"%s%s",
s,
a,
get_mfp_regs(h,n,i),
get_ctrl_informnation(d,l))
end
