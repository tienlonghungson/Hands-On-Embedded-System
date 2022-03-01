#include <at89x51.h>
#define KEYPAD_INTERRUPT 0
sbit HA=P2^0;
sbit HB=P2^1;
sbit HC=P2^2;
sbit HD=P2^3;
sbit CO1=P2^4;
sbit CO2=P2^5;
sbit CO3=P2^6;
sbit CO4=P2^7;
//Prototypes
void init_system();
void delay(int interval);
void output_7seg(unsigned char value);
unsigned char parse_key();
//Global vars
unsigned char num=0;
//Main prog
void main()
{
	init_system();	
	while(1){	
	}
}
//system initialization
void init_system()
{
	IT0=1; 		//Edge-triggered int 0
				//Keypad interface
	P2=0xF0; 	//4 bit thap -> chan ra
			 	//4 bit cao -> chan vao
	IE=0x81;	//Enable EXT0
}
//Chuong trinh tao do tre
void delay(int interval)
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<interval;j++);
	}
}
//7-seg display
void output_7seg(unsigned char value)
{
	unsigned char const mask[10]={0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
	if(value < 10){
		P0=mask[value];
	}		 
}
//Keypad scanning
unsigned char parse_key()
{	
	//row A
	HA=0; HB=HC=HD=1;	
	if(CO1==0){
		return 7;
	}else if(CO2==0){
		return 8;
	}else if(CO3==0){
		return 9;
	}
	//Row B
	HA=HC=HD=1; HB=0;
	if(CO1==0){
		return 4;
	}else if(CO2==0){
		return 5;
	}else if(CO3==0){
		return 6;
	}

	//Row C
	HA=HB=HD=1; HC=0;
	if(CO1==0){
		return 1;
	}else if(CO2==0){
		return 2;
	}else if(CO3==0){
		return 3;
	}

	//Row D
	HA=HB=HC=1; HD=0;
	if(CO1==0){
		return 1;
	}else if(CO2==0){
		return 0;
	}else if(CO3==0){
		return 3;
	}
}
//EXT0 for keypressed
void process_keypad() interrupt KEYPAD_INTERRUPT
{
	unsigned char key;
	EA  = 0; 			//Cam ngat
	key = parse_key(); 	//Do xem phim nao duoc nhan
	//Tra ve trang thai cu de cho phim moi duoc nhan
	HA = HB = HC = HD = 0;
	output_7seg(key);	
	EA = 1; 			//Cho phep ngat tro lai
}