#include <at89x51.h>
#define TH0_50ms 0x3C;
#define TL0_50ms 0xB0;

//Buzzer (speaker) connects on P1^5 
sbit SPK  = P1^5;	//Buzzer on/off
sbit LED7SEG_2 = P1^2;	//Led 7-seg 3 anot
sbit LED7SEG_3 = P1^3;	//Led 7-seg 4 anot

int count = 0; // count number of interupt
int time = 0; // current time

void init(){
	//ext int 0
	EX0  = 1; 		//Cho phep ngat ngoai 0
	IT0  = 1;		//Ngat theo suon
	//timer 0
	TMOD = TMOD & 0xF0;	
	TMOD = TMOD | 0x01;
	TH0  = TH0_50ms;		//Khoi tao T0
	TL0  = TL0_50ms;		//Tuong duong 55536
	TF0  = 0; 			//Xoa co tran timer 0
	TR0  = 1; 			//Khoi dong timer 0
	ET0  = 1;			//cho phep ngat
	EA   = 1;			//global interrupt enable
}

void display_7seg(unsigned char value){
	unsigned char const mask[10]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	if(value < 10){
		P0=mask[value];
	}		 
}

void delay(int interval){
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<interval;j++);
	}
}

void TMR0_Handler() interrupt TF0_VECTOR{
	TF0  = 0; 			//clear flag
	TR0  = 0; 			//stop timer
	TH0  = TH0_50ms;	//reset T0 value
	TL0  = TL0_50ms;	
	if(count>20){
		count = 0;
		time+= 1;
	}else{
		count+=1;
	}
	
	TR0  = 1; 			//restart timer
}

void main(){
	int num, digit;
	SPK = 0;
	LED7SEG_3 = 1;
	LED7SEG_2 = 1;
	init();
	while(1){
		num = time;
		// SET LED 3
		LED7SEG_3 = 0;
		digit = num % 10;
		num = num / 10;
		display_7seg(digit);
		delay(25);
		LED7SEG_3 = 1;
		
		// SET LED 2
		LED7SEG_2 = 0;
		digit = num % 10;
		num = num / 10;
		display_7seg(digit);
		delay(25);
		LED7SEG_2 = 1;
	};
}