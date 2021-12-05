;//****************************************************************************
;// @Module        
;// @Filename      CONFIG_NAC_NAD.A51
;//----------------------------------------------------------------------------
;// @Controller    Infineon XC8xx
;// @Compiler      Keil
;// @Description:  This file configures the NAC and NAD.
;//----------------------------------------------------------------------------
;// @Date          12.05.2009
;//****************************************************************************

	CSEG	AT	 0x7FFC

	DB	0x01				; NAC - Non Activity Counter - jump to USER Code (time = ((NAC&0x7F)-1)*5ms)
	DB	0xFE				; NAC - inverse value

;	DB	0x08				; NAC - Non Activity Counter	35 ms (max. 40 ms allowed)
;	DB	0xF7				; NAC - inverse value
	
	DB  0x01				; NAD - Lin address
	DB  0xFE			    ; NAD - inverse value of the NAD

	END