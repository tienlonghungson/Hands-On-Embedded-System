;------------------------------------------------------------------------------
;  This file is for defining BootROM Routine Addresses
;  Startup Code for the BootROM Routine Address definitions of Infineon 
;  XC82x/XC83x device
;  Copyright (c) .
;  Version 1.00
;
;------------------------------------------------------------------------------
;  BOOTROM_ADDR.A51: 
;  This file should not be modified by the user.
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;   EXPORTED FUNCTIONS & DATA
;------------------------------------------------------------------------------

; Define BootROM address for clock mode switching routine
PUBLIC _BR_FEATURE_SETTING
_BR_FEATURE_SETTING  CODE  0xDFE4  

; Define BootROM address for autobaud routine
PUBLIC BR_AUTO_BAUD
BR_AUTO_BAUD CODE  0xDFE7  

; Define BootROM addresses for EEPROM routines



; Define BootROM addresses for MATHLIB routines

; Define BootROM addresses for LEDTS library routines
PUBLIC       _SET_LDLINE_CMP
PUBLIC       FINDTOUCHEDPAD
_SET_LDLINE_CMP         CODE 0xDFCF
FINDTOUCHEDPAD          CODE 0xDFCC



END  


