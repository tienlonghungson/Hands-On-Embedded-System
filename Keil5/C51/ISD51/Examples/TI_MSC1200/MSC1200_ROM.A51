;
; MSC1200  BootROM Jump Table
; 12/3/03 HC

PUBLIC	sfr_rd			; char sfr_rd(void);
PUBLIC	_sfr_wr			; void sfr_wr(char d);
PUBLIC	monitor_isr		; void monitor(void)
PUBLIC	cmd_parser		; void cmd_parser(void)
PUBLIC	_put_string		; void put_string(char code *string);
PUBLIC	_page_erase		; char page_erase (int faddr, char fdata, char fdm)
PUBLIC	write_flash		; char write_flash (int faddr, char fdata, char fdm)
PUBLIC	_write_flash_chk	; char write_flash_chk (int faddr, char fdata, char fdm)
PUBLIC	_write_flash_byte	; char write_flash_byte (int faddr, char fdata, char fdm)
PUBLIC	_faddr_data_read	; char faddr_data_read(char);
PUBLIC	_data_x_c_read		; char data_x_c_read(int addr, char);
PUBLIC	_tx_byte			; void tx_byte(char);
PUBLIC	_tx_hex			; void tx_hex(char);
PUBLIC   putx				; void putx(unsigned char);
PUBLIC	rx_byte			; char rx_byte(void);
PUBLIC	rx_byte_echo	; char rx_byte_echo(void);
PUBLIC	rx_hex_echo		; char rx_hex_echo(void);
PUBLIC	rx_hex_double_echo	; char rx_double_echo(void);
PUBLIC	rx_hex_word_echo	; char rx_word_echo(void);
PUBLIC   autobaud			; void autobaud(void);
PUBLIC	putspace1		; void putspace1(void)
PUBLIC   putcr				; void putcr(void);


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; Interface to C compatible Boot ROM Build In Routines
;
	cseg	at 0f802h
sfr_rd:	; char sfr_rd(void);
	cseg	at 0f805h
_sfr_wr:	; void sfr_wr(char d);
   CSEG at 0FbD8h; 1H
monitor_isr:
	CSEG at 0FbDah; 3H
cmd_parser:
	CSEG AT 0FbDch; 5H
_put_string:			; void put_string(char *string);

	CSEG AT 0FbDeh; 7H
_page_erase:			; char page_erase (int faddr, char fdata, char fdm)

	CSEG AT 0Fbe0h; D9H	
write_flash:			; DPTR = address, acc = data (Not callable by C programs)	 

	CSEG AT 0Fbe2h; DBH
_write_flash_chk:		; char write_flash_chk (int faddr, char fdata, char fdm)

	CSEG AT 0Fbe4h; DDH
_write_flash_byte:	; char write_flash_byte (int faddr, char fdata, char fdm)

	CSEG AT 0Fbe6h; DFH
_faddr_data_read:		; char faddr_data_read(char);

	CSEG AT 0Fbe8h; E1H
_data_x_c_read:			; char data_x_c_read(int addr);

	CSEG AT 0Fbeah; E3H
_tx_byte:			; void tx_byte(char);

	CSEG AT 0Fbech; CE5H
_tx_hex:			; void tx_hex(char);

	CSEG AT 0Fbeeh; CE7H
putx:				; void putx(void);

	CSEG AT 0Fbf0H
rx_byte:			; char rx_byte(void);

	CSEG AT 0Fbf2H
rx_byte_echo:			; char rx_byte_echo(void);

	CSEG AT 0Fbf4H
rx_hex_echo:			; char rx_hex_echo(void);

	CSEG AT 0Fbf6H
rx_hex_double_echo:			; char rx_double_echo(void);

	CSEG AT 0Fbf8H
rx_hex_word_echo:			; char rx_word_echo(void);

	CSEG AT 0FbfaH
autobaud:			; void autobaud(void);

	CSEG AT 0FbfcH
putspace1:			; void putspace1(void)

	CSEG AT 0FbfeH
putcr:				; void putcr(void);
	END

 
