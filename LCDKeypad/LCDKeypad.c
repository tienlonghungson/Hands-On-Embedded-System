#include <at89x51.h>
#include <string.h>
// global var
int n_char_on_line=0;

// Prototypes for keypad
#define KEYPAD_INTERRUPT 0
sbit HA=P1^0;
sbit HB=P1^1;
sbit HC=P1^2;
sbit HD=P1^3;
sbit CO1=P1^4;
sbit CO2=P1^5;
sbit CO3=P1^6;
sbit CO4=P1^7;

void init_system();
void delay_ms(int interval);
unsigned char parse_key();

// Prototypes for LCD 
#define LCD_DATA P2
sbit EN=P0^2;
sbit RS=P0^0;
sbit RW=P0^1;

void LCD_init();
void Wait_For_LCD();
void LCD_Send_Command(unsigned char x);
void LCD_Write_One_Char(unsigned char c);
void LCD_Write_String(unsigned char *s);

//Global vars
unsigned char num=0;
//Main prog
void main()
{
	init_system();	
	LCD_init();
	LCD_Write_String("CTTN CNTT K63");
	while(1){}
}
//system initialization
void init_system()
{
	IT0=1; 		//Edge-triggered int 0
				//Keypad interface
	P1=0xF0; 	//4 bit thap -> chan ra
			 	//4 bit cao -> chan vao
	IE=0x81;	//Enable EXT0
	
	RW=1;	//Thiet lap LCD o che do doc
}
//Chuong trinh tao do tre
void delay_ms(int interval)
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<interval;j++);
	}
}

// ----------- implements keypad prototypes -----------
// Keypad scanning
unsigned char parse_key()
{	
	//row A
	HA=0; HB=HC=HD=1;	
	if(CO1==0){
		return 55;
	}else if(CO2==0){
		return 56;
	}else if(CO3==0){
		return 57;
	}else if(CO4==0){
		return 47;
	}
	
	//Row B
	HA=HC=HD=1; HB=0;
	if(CO1==0){
		return 52;
	}else if(CO2==0){
		return 53;
	}else if(CO3==0){
		return 54;
	}else if(CO4==0){
		return 42;
	}

	//Row C
	HA=HB=HD=1; HC=0;
	if(CO1==0){
		return 49;
	}else if(CO2==0){
		return 50;
	}else if(CO3==0){
		return 51;
	}else if(CO4==0){
		return 45;
	}
		
		

	//Row D
	HA=HB=HC=1; HD=0;
	if(CO1==0){
		return 0;
	}else if(CO2==0){
		return 48;
	}else if(CO3==0){
		return 61;
	}else if(CO4==0){
		return 43;
	}
}
//EXT0 for keypressed
void process_keypad() interrupt KEYPAD_INTERRUPT
{
	unsigned char key=0;
	EA  = 0; 			//Cam ngat
	key = parse_key(); 	//Do xem phim nao duoc nhan
	
	if (key==0){
		LCD_init();
		n_char_on_line=0;
	} else {
		if (n_char_on_line==16){
			LCD_Send_Command(0xC0); //Chuyen con tro xuong dong thu 2
		}
		n_char_on_line++;
		LCD_Write_One_Char(key);
	}
	
	//Tra ve trang thai cu de cho phim moi duoc nhan
	HA = HB = HC = HD = 0;
	
	EA = 1; 			//Cho phep ngat tro lai
}

// ----------- implements LCD  prototypes -----------
// Ham thuc hien gui mot lenh xuong LCD
void LCD_Send_Command(unsigned char x)
{
	LCD_DATA=x;
	RS=0; //Chon thanh ghi lenh
	RW=0; //De ghi du lieu
	EN=1;
	delay_ms(1);
	EN=0;		
	Wait_For_LCD(); //Doi cho LCD san sang
	EN=1;		  
}
//Ham khoi tao LCD o che do ghi
//Ham kiem tra va cho den khi LCD san sang
void Wait_For_LCD()
{
	//Delay_By_Timer_0(80);
	delay_ms(1);
}
void LCD_init()
{
	LCD_Send_Command(0x38); //Chon che do 8 bit, 2 hang cho LCD
	LCD_Send_Command(0x0E); //Bat hien thi, nhap nhay con tro	
	LCD_Send_Command(0x01); //Xoa man hinh	
	LCD_Send_Command(0x80); //Ve dau dong
	
}
//Ham de LCD hien thi mot ky tu
void LCD_Write_One_Char(unsigned char c)
{
	LCD_DATA=c; //Dua du lieu vao thanh ghi 
	RS=1; //Chon thanh ghi du lieu
	RW=0;
	EN=1;
	delay_ms(1);	
	EN=0;
	Wait_For_LCD();	
	EN=1;
}

//Ham de LCD hien thi mot xau
void LCD_Write_String(unsigned char *s)
{
	unsigned char length;
	length=strlen(s); //Lay do dai xau
	while(length!=0)
	{
		LCD_Write_One_Char(*s); //Ghi ra LCD gia tri duoc tro boi con tro
		s++; //Tang con tro
		length--;	  		 
	}
}
