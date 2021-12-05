/*------------------------------------------------------------------------------
upsd3300_lcd.c

Version:
November 30, 2004 - 2.0 - Initial Release.


Dependencies:
English font loaded into flash mapped into XDATA space at: ENGLISH_FONT_PAGE,
FONT_BASE_ADDRESS
Chinese font loaded into flash mapped into XDATA space at: 
CHINESE_FONT_PAGE, FONT_BASE_ADDRESS
Note: The Chinese font only needs to be loaded into flash if the option
ENGLISH_CHINESE_FONT is specified.

Description:
The uPSD3300 Enhanced LCD (ELCD) device driver is intended to provide functions 
to initialize the ELCD (GXM12232-1SL) and to display English ASCII characters
only or also Chinese characters.  The default compile option is for English 
only, but defining "ENGLISH_CHINESE_FONT" results in code compiled to support 
English characters and Chinese characters.

The font bit maps for English ASCII characters (0 to 127) are stored in flash
memory and is accessed via a standard lookup.  The font bit maps for user
defined Chinese characters are accessed via a special lookup operation.

Note: The lcd_init() function checks the first couple of bytes in the appropriate
location in flash memory to determine if the English font (and Chinese font, if
ENGLISH_CHINESE_FONT is defined) is loaded.  If it is not, the message "no font" 
is displayed on the LCD and the program execution loops forever in the lcd_init()
function.  In this case, the English font file (and the Chinese font file, if 
ENGLISH_CHINESE_FONT is defined) should be specified for placement in the 
appropriate flash sector in the PSDsoft project under "Merge MCU / DSP Firmware 
with PSD".  For messages to be displayed on the LCD, the appropriate font files
must be programmed into the flash for use by the printfLCD() function.


Copyright (c) 2005 STMicroelectronics Inc.

This example demo code is provided as is and has no warranty,
implied or otherwise.  You are free to use/modify any of the provided
code at your own risk in your applications with the expressed limitation
of liability (see below) so long as your product using the code contains
at least one uPSD product (device).

LIMITATION OF LIABILITY:   NEITHER STMicroelectronics NOR ITS VENDORS OR 
AGENTS SHALL BE LIABLE FOR ANY LOSS OF PROFITS, LOSS OF USE, LOSS OF DATA,
INTERRUPTION OF BUSINESS, NOR FOR INDIRECT, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES OF ANY KIND WHETHER UNDER THIS AGREEMENT OR
OTHERWISE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
------------------------------------------------------------------------------*/

#include "upsd3300.h"
#include "upsd3300_hardware.h"
#include "stdarg.h"

//#define ENGLISH_CHINESE_FONT  // This should be defined if the English/Chinese font 
                                 //  is supported.  If this is not defined, then the 
						         //  default is English only support.

//#define ST_LOGO_SUPPORT  // This should be defined if the ST logo will be
                           //  displayed on the LCD.

//#define FONT_BASE_ADDRESS  0x8000L
#define FONT_BASE_ADDRESS  0xE000L

#define E_FONT_DETECT_BYTE_0 0x1F  //English font
#define E_FONT_DETECT_BYTE_1 0xE0

#define C_FONT_DETECT_BYTE_0 0x80  //Chinese font
#define C_FONT_DETECT_BYTE_1 0x00

//#define ENGLISH_FONT_PAGE  5
#define ENGLISH_FONT_PAGE  0
#define CHINESE_FONT_PAGE  6

xdata  unsigned char wm_data      _at_   LCD_BASE_ADDR + 0x02;   //write data address
xdata  unsigned char rm_status    _at_   LCD_BASE_ADDR + 0x01;   //read command status address
xdata  unsigned char wm_command   _at_   LCD_BASE_ADDR + 0x00;   //write command address

xdata  unsigned char ws_data      _at_   LCD_BASE_ADDR + 0x06;   //write data address
xdata  unsigned char rs_status    _at_   LCD_BASE_ADDR + 0x05;   //read command status address
xdata  unsigned char ws_command   _at_   LCD_BASE_ADDR + 0x04;   //write command address


#ifndef ENGLISH_CHINESE_FONT
unsigned char dot_buffer[14];
#else
unsigned char dot_buffer[32];
#endif

unsigned char ucol = 0;   //ucol is a global variable,this point is very important.
unsigned char ulayer = 0; //ulayer is also a global variable,this point is very important.
unsigned char mode = 0;   //set the positive or negative display here

#ifdef ST_LOGO_SUPPORT

code unsigned char STlogo[32] = {0x03,0x40,0xc3,0x40,0xe3,0x41,0x33,0x43,0x33,0x46,0x33,0x6c,0x33,0x38,0x33,0x00,0x33,
                                 0x60,0x33,0x7c,0x33,0x1f,0xf3,0x03,0xf3,0x00,0x33,0x00,0x33,0x00,0x33,0x00};
#endif



// Define the bitmaps for  letters used to display "no font" if the font is not detected in memory.
code unsigned char nn[14] = {0x80,0x10,0x80,0x1f,0x00,0x11,0x80,0x00,0x80,0x10,0x00,0x1f,0x00,0x10}; // n
code unsigned char oo[14] = {0x00,0x00,0x00,0x0f,0x80,0x10,0x80,0x10,0x80,0x10,0x00,0x0f,0x00,0x00}; // o
code unsigned char ff[14] = {0x00,0x00,0x80,0x10,0xc0,0x1f,0xa0,0x10,0xa0,0x10,0xa0,0x10,0x00,0x00}; // f
code unsigned char tt[14] = {0x00,0x00,0x80,0x00,0xc0,0x0f,0x80,0x10,0x80,0x10,0x80,0x10,0x00,0x08}; // t

#ifdef ENGLISH_CHINESE_FONT
code unsigned char index[159]={//0xB1 & 0xB0 is the internal code of the Chinese character  "备" which is the first one in the user self-defined lib 
   0xB1, 0xB8, 0x00, 0xB1, 0xCF, 0x01, 0xB1, 0xE0, 0x02, 0xB2, 0xE9, 0x03, 0xB4, 0xA2, 0x04, 0xB4, 0xA5, 0x05, 0xB4, 0xD3, 0x06, 0xB4, 0xE6, 0x07,   //备毕编查储触从存
   0xB5, 0xBD, 0x08, 0xB5, 0xDA, 0x09, 0xB5, 0xF7, 0x0a, 0xB6, 0xAF, 0x0b, 0xB7, 0xA2, 0x0c, 0xB9, 0xAB, 0x0d, 0xB9, 0xB2, 0x0e, 0xBA, 0xCD, 0x0f,   //到第调动发公共和
   0xBA, 0xCF, 0x10, 0xBB, 0xBB, 0x11, 0xBB, 0xD8, 0x12, 0xBB, 0xF9, 0x13, 0xBC, 0xC7, 0x14, 0xBC, 0xE4, 0x15, 0xBC, 0xFE, 0x16, 0xBE, 0xAD, 0x17,  //合换回基记间件经
   0xBF, 0xB4, 0x18, 0xC1, 0xEE, 0x19, 0xC2, 0xBC, 0x1a, 0xC2, 0xEB, 0x1b, 0xC3, 0xC7, 0x1c, 0xC6, 0xDA, 0x1d, 0xC6, 0xF7, 0x1e, 0xC7, 0xD0, 0x1f,  //看令录码们期器切
   0xC7, 0xF8, 0x20, 0xC8, 0xD5, 0x21, 0xC9, 0xBE, 0x22, 0xC9, 0xE8, 0x23, 0xCA, 0xB1, 0x24, 0xCA, 0xBE, 0x25, 0xCA, 0xC2, 0x26, 0xCD, 0xEA, 0x27,  //区日删设时示事完
   0xCE, 0xC4, 0x28, 0xCE, 0xD2, 0x29, 0xCF, 0xD6, 0x2a, 0xD0, 0xC2, 0x2b, 0xD1, 0xDD, 0x2c, 0xD2, 0xD1, 0x2d, 0xD4, 0xDA, 0x2e, 0xD6, 0xB8, 0x2f,  //文我现新演已在指
   0xD6, 0xC3, 0x30, 0xD6, 0xD0, 0x31, 0xD7, 0xAA, 0x32, 0xD7, 0xBC, 0x33, 0xD7, 0xE9, 0x34                    //置中转准组
};
#endif



//-----------------------------------------------------FOR LCD68------------------------------

/*---------------------------------------------------------------------------------------
Function:
	check whether master LCD is  busy or not .
Parameters:
	none 
Note:
	none  

----------------------------------------------------------------------------------------*/
void BusyCheck(void)			// wait until BF is cleared
{
	while ((rm_status & 0X80));
	
}

/*---------------------------------------------------------------------------------------
Function:
	check whether slave LCD is  busy or not .
Parameters:
	none 
Note:
	none  

----------------------------------------------------------------------------------------*/
void BusyCheckSlave(void)			// wait until BF is cleared
{
	while ((rs_status & 0X80));
	
}

/*---------------------------------------------------------------------------------------
Function:
	send one byte command to master LCD.
Parameters:
	i is  the user expected command to send to master LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void OutMasterCom( unsigned char i )   //   write master command
{

	BusyCheck();
	wm_command = i;

}

/*---------------------------------------------------------------------------------------
Function:
	send one byte command to slave LCD. 
Parameters:
	i is  the user expected command to send to slave LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void OutSlaveCom( unsigned char i )  //write slave command
{
	
	BusyCheckSlave();
	ws_command = i;

}

/*---------------------------------------------------------------------------------------
Function:
	display one byte data to master LCD. 
Parameters:
	i is  the user expected data to disply on master LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void OutMasterDat( unsigned char i )  //write master data
{

	BusyCheck();
	wm_data  = i;

}

/*---------------------------------------------------------------------------------------
Function:
	display one byte data to slave LCD. 
Parameters:
	i is  the user expected data to disply on slave LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void OutSlaveDat( unsigned char i )  //write slave data
{

	BusyCheckSlave();
	ws_data = i;

}



/*---------------------------------------------------------------------------------------
Function:
	this function is used to initialize master and slave LCD. 
Parameters:
	none 
Note:
	none  

----------------------------------------------------------------------------------------*/
void LcdConfig ( void )  //lcd initialization
{

	OutMasterCom ( 0xE2 );//software reset
	OutSlaveCom ( 0xE2 );

	OutMasterCom ( 0xAE );//display off
	OutSlaveCom ( 0xAE );

	OutMasterCom ( 0xA4 );//dynamic drive(normal)
	OutSlaveCom ( 0xA4  );
	
	OutMasterCom ( 0xA9 );//duty cycle
	OutSlaveCom ( 0xA9  );
	
	OutMasterCom ( 0xA0 );//clockwise output
	OutSlaveCom ( 0xA0 );
	
	OutMasterCom ( 0xEE );//read-modify-write off
	OutSlaveCom ( 0xEE );
	
	OutMasterCom( 0x00 ); //display column address	
	OutMasterCom ( 0xC0 );//display start line 	

	OutSlaveCom ( 0x00 );
	OutSlaveCom ( 0xC0 );
	
	OutMasterCom ( 0xAF ); //display on
	OutSlaveCom ( 0xAF );
	
}

/*---------------------------------------------------------------------------------------
Function:
	set the display page of master LCD and slave LCD simultaneously,the page range is 0 to 3,make sure the input
	will not exceed this range ,otherwise it will reach a undecided result.
Parameters:
	page0 is the user expected display page of slave LCD and page1 is that of master LCD. 
Note:
	the parameter page0 and page1 is ORed with 0xB0 respectively, the reason is to meet "set page address" command 
	requirement of LCD controler SED1520,Please refer to SED1520 series spec . 

----------------------------------------------------------------------------------------*/
void SetPage( unsigned char page0, unsigned char page1 )    //set page
{

	OutSlaveCom ( 0xB8|page0 );
	OutMasterCom( 0xB8|page1);

}

/*---------------------------------------------------------------------------------------
Function:
	set the display column of master LCD and slave LCD simultaneously,the column range is 0 to 61.
Parameters:
	address0 is the user expected display column of slave LCD and address1 is that of master LCD. 
Note:
	the parameter address0 and address1 is ANDed with 0x7f respectively, the reason is to meet "set column address" command 
	requirement of LCD controler SED1520,Please refer to SED1520 series spec  

----------------------------------------------------------------------------------------*/

void SetAddress( unsigned char address0,  unsigned char address1 )  //set column
{

	OutSlaveCom ( address0&0x7F );
	OutMasterCom( address1&0x7F );
	
}

/*---------------------------------------------------------------------------------------
Function:
	display one byte data to slave LCD. 
Parameters:
	ch is  the user expected data to disply on slave LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void PutChar0 ( unsigned char ch )   
{
	OutSlaveDat ( ch );
}

/*---------------------------------------------------------------------------------------
Function:
	display one byte data to master LCD. 
Parameters:
	ch is  the user expected data to disply on master LCD. 
Note:
	none  

----------------------------------------------------------------------------------------*/
void PutChar1( unsigned char ch )
{
	OutMasterDat ( ch );
}

/*---------------------------------------------------------------------------------------
Function:
	this function will clear the LCD disply,both slave and master LCD.
Parameters:
	none 
Note:
	none  

----------------------------------------------------------------------------------------*/
void lcd_clear ( void )   //clear screen
{
	unsigned char i;	
	unsigned char page;
	unsigned char orig_buscon;
           orig_buscon = BUSCON;   // Save buscon value
           BUSCON |= 0x3C;           // Set Xdata Read/Write to max wait states 
	for (page = 0;page<4;page++)
	{
		SetPage( page,page );
		SetAddress( 0,0 );
		for (i=0;i<61;i++)
		{
			PutChar0 ( 0 );
			PutChar1 ( 0 );
		}
	}
		ucol = 0;
		ulayer = 0;
		BUSCON = orig_buscon;  // Restore buscon value
}	


/*---------------------------------------------------------------------------------------
Function:
	this function is used to display a Chinese word. 
Parameters:
	x0:		start column address.
    layer:	if layer = 0,display the first line Chinese word,otherwise display the second line.
	width:	the number of column of a Chinese word dot matrix.
	bmp:	the pointer of the  dot matrix data.
Note:
	the LCD can only display two line Chinese word,so page 0 and 1 is to display the first line,page2
    and page 3 is to display the second line.

----------------------------------------------------------------------------------------*/
void DrawBmp ( unsigned char x0,bit layer,unsigned char width,unsigned char *bmp)   
{
	unsigned char x, address;
	unsigned char * dat;
	
	unsigned char i=0;
	unsigned char page =0; // if layer = 0;page = 0,so it will disply the first line Chinese word
	
	bit window = 0;  //display on master LCD
    dat = bmp;

	if(layer)
 		page=2;   //if layer >=0;then page = 2, it will disply the second line Chinese word

	for(x=x0;x<x0+width;x++)
	{
		if(x>121)
			 return;  //the column exceeded 121 will be ignored
		if (x>60) 	
		{ 
			window =1; //disply on slave LCD
			address = x%61;
		}
 		else 
		address = x;  //display on master LCD

		SetPage (page,page);      //disply the upper part of a Chinese word
		SetAddress(address,address);

		if (window) 
			PutChar0(dat[i]);
		else 
			PutChar1(dat[i]);


		SetPage (page+1,page+1);  //disply the lower part of a Chinese word
		SetAddress(address,address);

		if (window) 
			PutChar0(dat[i+1]);
		else 
			PutChar1(dat[i+1]);

		i+=2;  
	}
}

#ifdef STlogo_support
void DrawSTlogo (unsigned char *bmp)   
{
	unsigned char orig_buscon;
           orig_buscon = BUSCON;   // Save buscon value
           BUSCON |= 0x3C;           // Set Xdata Read/Write to max wait states

	DrawBmp(ucol,ulayer,16,bmp);//display  logo here
	ucol+=16; 
	BUSCON = orig_buscon;  // Restore buscon value
}
#endif

#ifdef ENGLISH_CHINESE_FONT
void DrawBmpAsc ( unsigned char x0,unsigned char layer,unsigned char width,unsigned char *bmp)
{
	unsigned char x, address;
	unsigned char * dat;
	
	unsigned char i=0;
	unsigned char page =0; // if layer = 0;page = 0,so it will disply the first line Chinese word
	
	bit window = 0;  //display on master LCD
    dat = bmp;

	if(layer)
 		page=2;   //if layer >=0;then page = 2, it will disply the second line Chinese word

	for(x=x0;x<x0+width;x++)
	{
		if(x>121)
			 return;  //the column exceeded 121 will be ignored
		if (x>60) 	
		{ 
			window =1; //disply on slave LCD
			address = x%61;
		}
 		else 
		address = x;  //display on master LCD

		SetPage (page,page);      //disply the upper part of a Chinese word
		SetAddress(address,address);

		if (window) 
			PutChar0(dat[i]);
		else 
			PutChar1(dat[i]);


		SetPage (page+1,page+1);  //disply the lower part of a Chinese word
		SetAddress(address,address);

		if (window) 
			PutChar0(dat[i+1]);
		else 
			PutChar1(dat[i+1]);

		i+=2;  
	}
}
#endif


void disp_one_asc(unsigned char col,unsigned char layer,unsigned char ascii_code,unsigned char mode)
{

	unsigned char  i,j;
	unsigned char xdata *ascii;
	extern xdata PSD_REGS PSD_reg;

	j = PSD_reg.PAGE;  // page number will be changed in fetching ASC font data, so reserve page number first
	PSD_reg.PAGE =ENGLISH_FONT_PAGE; 

	ascii = (unsigned char xdata *)(FONT_BASE_ADDRESS);

	for (i=0;i<14;i++)
	{
		if(mode) 
		{
			if(i%2==0)
			{
				dot_buffer[i] =	~ascii[ascii_code*14+i+1];
					
			}
			else 
 			{
				dot_buffer[i] =	~ascii[ascii_code*14+i-1];	
  			}
		 }
		else
		{
			if(i%2==0)
			{
				dot_buffer[i] =	ascii[ascii_code*14+i+1];
					
			}
			else 
 			{
				dot_buffer[i] =	ascii[ascii_code*14+i-1];	
  			}
		}
	}

		DrawBmp(col,layer,7,dot_buffer);  //disply the asc code after conversion
		PSD_reg.PAGE = j; //restore page number
}

#ifdef ENGLISH_CHINESE_FONT
void disp_one_asc2(unsigned char width,unsigned char length,unsigned char *pic)
{
	unsigned long i;
	for (i=0;i<width*length;i++)
	{
		if(mode) 
		{
			if(i%2==0)
			{
				dot_buffer[i] =	~pic[i+1];
					
			}
			if(i%2==1)
			{
				dot_buffer[i] =	~pic[i-1];
					
			}
		
		 }
		else
		{
			if(i%2==0)
			{
			dot_buffer[i] =	pic[i+1];
					
			}
			if(i%2==1)
			{
				dot_buffer[i] =	pic[i-1];
			
			}
	
		}
	}
}

void disp_one_asc3(unsigned char width,unsigned char length,unsigned char *pic)
{
	unsigned long  i;
	for (i=0;i<width*length;i++)
	{
		if(mode) 
		{
			if(i%3==0)
			{
				dot_buffer[i] =	~pic[i+2];
					
			}
			if(i%3==1)
			{
				dot_buffer[i] =	~pic[i];
					
			}
			if(i%3==2)
			{
				dot_buffer[i] =	~pic[i-2];
					
			}		
		 }
		else
		{
			if(i%3==0)
			{
				dot_buffer[i] =	pic[i+2];
					
			}
			if(i%3==1)
			{
				dot_buffer[i] =	pic[i];
					
			}
			if(i%3==2)
			{
				dot_buffer[i] =	pic[i-2];
					
			}
		}
	}
}

void disp_one_asc4(unsigned char width, unsigned char *pic)
{
	unsigned long  i;
	for (i=0;i<width*4;i++)
	{
		if(mode) 
		{
			if(i%4==0)
			{
				dot_buffer[i] =	~pic[i+3];
					
			}
			if(i%4==1)
			{
				dot_buffer[i] =	~pic[i+1];
					
			}
			if(i%4==2)
			{
				dot_buffer[i] =	~pic[i-1];				
			}	
			if(i%4==3)
			{
				dot_buffer[i] =	~pic[i-3];
			}		
        }
		else
		{
			if(i%4==0)
			{
				dot_buffer[i] =	*(pic+i+3);
			}
			if(i%4==1)
			{
				dot_buffer[i] =	*(pic+i+1);
					
			}
			if(i%4==2)
			{
				dot_buffer[i] =	*(pic+i-1);				
			}	
			if(i%4==3)
			{
				dot_buffer[i] =	*(pic+i-3);
			}		
		}
	}
}


void DrawPic ( unsigned char x0,unsigned char y0,unsigned char width,unsigned char length,unsigned char *bmp)
{
	unsigned char x, address;
	unsigned char * dat;

	unsigned char m;		
	unsigned long i=0;
	unsigned char page =0; // if layer = 0;page = 0,so it will disply the first line Chinese word
	
	bit window = 0;  //display on master LCD
		unsigned char orig_buscon;
           orig_buscon = BUSCON;   // Save buscon value
           BUSCON |= 0x3C;           // Set Xdata Read/Write to max wait states


	if(length%8==0)
	m = length/8;
	else
	m = length/8 + 1;

	if(m==2)
	disp_one_asc2(width, length, bmp);
	if(m==3)
	disp_one_asc3(width, length, bmp);
	if(m==4)
	disp_one_asc4(width, bmp);

    dat = dot_buffer;

	OutMasterCom( 0X00 ); //display column address	
	OutMasterCom ( 0XC0|y0 );//display start line 	

	OutSlaveCom ( 0X00 );
	OutSlaveCom ( 0XC0|y0);

	for(x=x0;x<x0+width;x++)
	{
		if(x>121)
			 return;  //the column exceeded 121 will be ignored
		if (x>60) 	
		{ 
			window =1; //disply on slave LCD
			address = x%61;
		}
 		else 
		address = x;  //display on master LCD

		SetPage (page,page);      //disply the upper part of a Chinese word
		SetAddress(address,address);

		if (window) 
			PutChar0(dat[i]);
		else 
			PutChar1(dat[i]);
				i+=1; 

		if(m>=2)
		{
			SetPage (page+1,page+1);  //disply the lower part of a Chinese word
			SetAddress(address,address);

			if (window) 
				PutChar0(dat[i]);
			else 
				PutChar1(dat[i]);
				i+=1; 
		 }

		 if(m>=3)
		{
			SetPage (page+2,page+2);  //disply the lower part of a Chinese word
			SetAddress(address,address);

			if (window) 
				PutChar0(dat[i]);
			else 
				PutChar1(dat[i]);
				i+=1; 
		 }

		 if(m>=4)
		{
			SetPage (page+3,page+3);  //disply the lower part of a Chinese word
			SetAddress(address,address);

			if (window) 
				PutChar0(dat[i]);
			else 
				PutChar1(dat[i]);
				i+=1; 
		 }
	}
	BUSCON = orig_buscon;  // Restore buscon value
}


/*---------------------------------------------------------------------------------------
Function:
	this function is used to display a Chinese word. 
Parameters:
	x0:		start column address.
    layer:	if layer = 0,display the first line Chinese word,otherwise display the second line.
	width:	the number of column of a Chinese word dot matrix.
	bmp:	the pointer of the  dot matrix data.
Note:
	the LCD can only display two line Chinese word,so page 0 and 1 is to display the first line,page2
    and page 3 is to display the second line.

----------------------------------------------------------------------------------------*/

void disp_one_ch(unsigned char col,unsigned char layer,unsigned int ch_code,unsigned char mode)
{
	unsigned char i,j,c2,c1;
	extern PSD_REGS PSD_reg;
	unsigned char xdata *ptr;
	
	j = PSD_reg.PAGE ; //reserve page number first
	PSD_reg.PAGE = CHINESE_FONT_PAGE;

	c2 = (unsigned char)((ch_code&0xff00)>>8);  
	c1 = (unsigned char)(ch_code&0x00ff);


	for(i=0;i<159;i++)  //check index table to get the specific location
	{
		if ((c2 == index[i])&&(c1 == index[i+1]))
		{
			ptr = (unsigned char xdata *)((index[i+2])*32);
			break;
		 }
	}

	for(i=0;i<32;i++)
	{
		dot_buffer[i] = *(FONT_BASE_ADDRESS+ptr+i);  //fetch font data from internal flash directly
	}

	if (mode)
	{
		for(i=0;i<32;i++)
		{	
			dot_buffer[i] = ~ dot_buffer[i];
		}
	}
		DrawBmp(col,layer,16,dot_buffer);//display the Chinese word after get the data from flash
		PSD_reg.PAGE = j;  //restore page number
}
#endif
/*---------------------------------------------------------------------------------------
Function:
	this function is used to converts low nibble of unsigned byte.
Parameters:
	byte: this unsigned byte is ready to converting.
Note:
	none

----------------------------------------------------------------------------------------*/
char htoa_lo(unsigned char byte)	 
					 // (0-F hex) to ascii   
{
	{
	byte = byte & 0x0F;	// keep lower nibble only   
	if (byte <= 0x09)
		return(byte + 0x30);
	else
		return (byte + 0x37);
	}
}


/*---------------------------------------------------------------------------------------
Function:
	this function is used to converts low nibble of unsigned byte.
Parameters:
	byte: this unsigned byte is ready to converting.
Note:
	none

----------------------------------------------------------------------------------------*/
char htoa_hi(unsigned char byte)	 // converts hi nibble of unsigned byte
					 // (0-F hex) to ascii   
{
	{
	byte = byte & 0xF0;	// keep upper nibble only   
	byte = byte >> 4;
	if (byte <= 0x09)
		return(byte + 0x30);
	else
		return (byte + 0x37);
	}
}

/*---------------------------------------------------------------------------------------
printfLCD(chr_ptr) 

This function is used to display a string of Chinese words and standard ASCII codes on
the LCD display.

chr_ptr - unsigned char*
		- pointer to string to display on LCD.
----------------------------------------------------------------------------------------*/
void printfLCD(unsigned char *ptr, ...) 
{
	unsigned char c1,c2;
	unsigned int  c3;

	//unsigned char *var_ptr=&ptr+1;
	unsigned char var;
	unsigned char orig_buscon;
	#ifdef __RC51__	//use ANSI stdarg
	va_list var_ptr;
	va_start(var_ptr,0);
	#else	
	unsigned char *var_ptr=&ptr+1;
	#endif
   orig_buscon = BUSCON;   // Save buscon value
   BUSCON |= 0x3C;           // Set Xdata Read/Write to max wait states


	if(ulayer >3)  //if page exceed the range 0 to 3,force it to 0.
		ulayer = 0;

	while (*ptr != NULL) 
	{
		c1 = *ptr;
		c2 = *(ptr+1);
		c3 = c1;
		c3 = (c3<<8)|c2;
		if(c1 <= 128)   // deal with asc code , if c1<=128 ,it will deal with asc code,otherwise Chinese word.
		{
			if ( *ptr == '\r')
			{
				ptr++;
				ucol = 0;
			}
			else if( *ptr == '\n')
			{
				ptr++;
				ucol = 0;
				ulayer++;
			}
			else if( *ptr == '%')
			{
				ptr++;
				
				if (*ptr == 'd')
				{
					ptr++;
			 		#ifdef __RC51__	//use ANSI stdarg
 					var = *var_ptr--;
 					var_ptr--;
	            #else	
					var = *var_ptr++;
					#endif
					c1 = (var & 0x0F)+'0';
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
				}
				else if (*ptr == 'x')
			 	{  
			 		#ifdef __RC51__	//use ANSI stdarg
 					var = *var_ptr--;
 					var_ptr--;
	            #else	
					var = *var_ptr++;
					#endif
					c1 = htoa_hi(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
					c1 = htoa_lo(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
					ptr++;
				}
				else if (*ptr == 'w')
				{
					ptr++;
			 		#ifdef __RC51__	//use ANSI stdarg
 					var_ptr--;
 					var = *var_ptr;
 					
 					#else	
					var = *var_ptr++;
					#endif
					c1 = htoa_hi(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
					c1 = htoa_lo(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
			 		#ifdef __RC51__	//use ANSI stdarg
			 		var_ptr++;
 					var = *var_ptr;
			 		var_ptr-=2;			
 					#else	
					var = *var_ptr++;
					#endif
					c1 = htoa_hi(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
					c1 = htoa_lo(var);
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;

				}
				else 
				{
					c1 = *ptr;
					disp_one_asc(ucol,ulayer,c1,mode);
					ucol+=7;
					ptr++;
				}
			}
			else
			{				
				disp_one_asc(ucol,ulayer,c1,mode);
				ucol+=7;
				ptr++;    // one asc need one byte in computer system
			}
		
		 }
		#ifdef ENGLISH_CHINESE_FONT
		 else    //deal with Chinese, if c1<=128 ,it will deal with asc code, otherwise Chinese word.
		 {

			if(mode) 
				disp_one_ch(ucol,ulayer,c3,1);
			else    
				disp_one_ch(ucol,ulayer,c3,0);
			ucol+=16;  //16*16 Chinese dot matrix
			ptr += 2;  //one Chinese word need two byte in computer system
		
		  }
		#endif
	}
	BUSCON = orig_buscon;  // Restore buscon value
}


unsigned char font_detection(void) 
{
	unsigned char xdata j,a,b;	
	unsigned char xdata *ascii;

	#ifdef ENGLISH_CHINESE_FONT
	unsigned char xdata c,d;	
	unsigned char xdata *chchar;
    #endif

	extern xdata PSD_REGS PSD_reg;

	j = PSD_reg.PAGE;  // page number  will be changed in fetching ASC font data,so reserve page number first

	#ifndef ENGLISH_CHINESE_FONT
	ascii = (unsigned char xdata *)(FONT_BASE_ADDRESS);
	PSD_reg.PAGE =ENGLISH_FONT_PAGE; 
	a = ascii[0];
	b = ascii[1];
	#else
	ascii = (unsigned char xdata *)(FONT_BASE_ADDRESS);
	chchar = (unsigned char xdata *)(FONT_BASE_ADDRESS);
	PSD_reg.PAGE =ENGLISH_FONT_PAGE; 
	a = ascii[0];
	b = ascii[1];
	PSD_reg.PAGE =CHINESE_FONT_PAGE;
	c = chchar[0];
	d = chchar[1];
	#endif


    // If the font is not detected in the flash 
    // then display a bitmapped "no font" message on the LCD

	#ifndef ENGLISH_CHINESE_FONT
		if ((a == E_FONT_DETECT_BYTE_0) && (b == E_FONT_DETECT_BYTE_1)) 
	#else
		if (  (a == E_FONT_DETECT_BYTE_0) && (b == E_FONT_DETECT_BYTE_1)  && 
          		(c == C_FONT_DETECT_BYTE_0) && (d == C_FONT_DETECT_BYTE_1) )  
	#endif

	{
		return(0);        // Indicate the font was detected.
	}
    else              // Font not detected, so display bitmapped messaged.
	{ 
		DrawBmp(0,0,7,nn);    // n    
		DrawBmp(8,0,7,oo);    // o

		DrawBmp(24,0,7,ff);   // f
		DrawBmp(32,0,7,oo);   // o   
		DrawBmp(40,0,7,nn);   // n
		DrawBmp(48,0,7,tt);   // t

		return(1);    // Indicate the font was not detected.
	}
} 

/*---------------------------------------------------------------------------------------
Function:
	this function is used to merge LCD initialization and set display start line and column address. 
Parameters:
	ptr: none
Note:
	this function only used once just before user start using void printfLCD(unsigned char *ptr, ...).

----------------------------------------------------------------------------------------*/

void lcd_init(void)  
{
	unsigned char orig_buscon;
    orig_buscon = BUSCON;   // Save buscon value
    BUSCON |= 0x3C;           // Set Xdata Read/Write to max wait states 
	///////////////////////LCD initialization/////////
	BusyCheck();
	LcdConfig ( );	
	lcd_clear ( );	
	//////////////////////////set display start line and column address/////////
	OutMasterCom ( 0xC0 );
	OutSlaveCom ( 0xC0 );
	OutMasterCom ( 0x00 );
	OutSlaveCom ( 0x00 );

    if (font_detection())  // If font not detected,
	{
	while(1);              // wait here forever.
	}
	BUSCON = orig_buscon;  // Restore buscon value
}





