#include <at89x51.h>
#define TH0_50ms 0x3C	
#define TL0_50ms 0xB0
//Khai bao bien toan cuc
int count=0;

void display_number(int iNum);

//Chuong trinh tao do tre
void delay(int interval)
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<interval;j++);
	}
}
//7-seg only
void output_7seg(unsigned char value)
{
	unsigned char const mask[10]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	if(value < 10){
		P0=mask[value];
	}		 
}
//7-seg with dot
void output_7seg_dot(unsigned char value)
{
	unsigned char const mask[10]={0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
	if(value < 10){
		P0=mask[value];
	}		 
}
//Timer 0 interrupt handler
void TMR0_Process() interrupt TF0_VECTOR{
	TF0  = 0; 			//clear flag
	TR0  = 0; 			//stop timer
	TH0  = TH0_50ms;	//reset T0 value
	TL0  = TL0_50ms;	//
	
	TR0  = 1; 			//restart timer
}

//EXT 0 interrupt handler
void EXT0_Process() interrupt IE0_VECTOR{
	EA=0;	//Cam ngat
	count++;	
	EA=1;	//Cho phep ngat
}
//display 4 digits
void display_number(int iNum){
	int i;
	unsigned char pos=0x08;
	unsigned char temp;
	for(i=0; i<4; i++){
		temp = iNum % 10;
		iNum = iNum / 10;
		P2 = pos;
		output_7seg(temp);
		delay(5);
		pos = pos>>1;
	}
}
//system initialization
void init(){
	P3_2 = 1; 		//Thiet lap chan P3_2 lam chan vao
	//ext int 0
	EX0  = 1; 		//Cho phep ngat ngoai 0
	IT0  = 1;		//Ngat theo suon
	//timer 0
	TMOD = TMOD & 0xF0;	
	TMOD = TMOD | 0x01;
	TH0  = 0x3C;		//Khoi tao T0
	TL0  = 0xB0;		//Tuong duong 15536
	TF0  = 0; 			//Xoa co tran timer 0
	TR0  = 1; 			//Khoi dong timer 0
	ET0  = 1;			//cho phep ngat
	EA   = 1;			//global interrupt enable
}

void main(){
	init();
	while(1){
			display_number(count);
	}	
}