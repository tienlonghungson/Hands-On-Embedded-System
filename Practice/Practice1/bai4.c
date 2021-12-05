#include <at89x51.h>
#define TH0_50ms 0xD8; //0x3C;
#define TL0_50ms 0xF0; //0xB0;
#
//Buzzer (speaker) connects on P1^5 
sbit SPK  = P1^5;	//Buzzer on/off
sbit LED7SEG_0 = P1^0;  //Led 7-seq 1 not
sbit LED7SEG_1 = P1^1;  //Led 7-seq 2 not
sbit LED7SEG_2 = P1^2;	//Led 7-seg 3 anot
sbit LED7SEG_3 = P1^3;	//Led 7-seg 4 anot

int time = 0; // current time

void init(){
	// thiet lap ngat ngoai
	P3_2 = 1; //3_2 input for interrupt 0
	P3_3 = 1;
	EX0 = 1; //Cho phep ngat ngoai 0
	IT0 = 1; //Ngat theo suon
	EX1 = 1;
	IT1 = 1;
	
	EA   = 1;			//global interrupt enable
}



void delay(unsigned int time){
		int i,j;
		for (i=0;i<100;++i){
				for (j=0;j<time;++j);
		}
}

void display(unsigned int time){
		unsigned char const mask[10]={0xC0, 0xF9, 
		0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
		
		unsigned char const mask_dot[10]={0x40, 0x79,
		0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
		unsigned int digit, num=time;
		
		const unsigned int D_DISPLAY =10;
		// SET LED 3
		LED7SEG_3 = 0;
		digit = num % 10;
		num = num / 10;
		P0 = mask[digit];
		delay(D_DISPLAY);
		LED7SEG_3 = 1;
		
		// SET LED 2
		LED7SEG_2 = 0;
		digit = num % 10;
		num = num / 10;
		P0 = mask[digit];
		delay(D_DISPLAY);
		LED7SEG_2 = 1;

		// SET LED 1
		LED7SEG_1 = 0;
		digit = num % 10;
		num = num / 10;
		P0 = mask_dot[digit];
		delay(D_DISPLAY);
		LED7SEG_1 = 1;
		
		// SET LED 0
		LED7SEG_0 = 0;
		digit = num % 10;
		num = num / 10;
		P0 = mask[digit];
		delay(D_DISPLAY);
		LED7SEG_0 = 1;
}



void EX0_Handler() interrupt IE0_VECTOR {
		EA=0; //Cam ngat
		
		/*turn on timer 0*/
		//timer 0
		TMOD = TMOD & 0xF0;	
		TMOD = TMOD | 0x01;
		TH0  = TH0_50ms;		//Khoi tao T0
		TL0  = TL0_50ms;		//Tuong duong 55536
		TF0  = 0; 			//Xoa co tran timer 0
		TR0  = 1; 			//Khoi dong timer 0
		ET0  = 1;			//cho phep ngat
		
		
		EA=1; //Cho phep ngat
		
}

void EX1_Handler() interrupt IE1_VECTOR {
		EA=0; //Cam ngat
	
		/*stop timer 0*/
		TF0  = 0; 			//clear flag
		TR0  = 0; 			//stop timer
		ET0  = 0;       //cam ngat
	
		EA=1; //Cho phep ngat
		
}

void TMR0_Handler() interrupt TF0_VECTOR{
	TF0  = 0; 			//clear flag
	TR0  = 0; 			//stop timer
	TH0  = TH0_50ms;	//reset T0 value
	TL0  = TL0_50ms;	
	
	time+= 1;
	
	TR0  = 1; 			//restart timer
}


void main(){
		SPK=0;
		init();
		
		while(1){
				display(time);
		}
}