#include <at89x51.h>
#define T_DELAY 10000
unsigned int time=0;

void init(){
	P3_2 = 1; //3_2 input for interrupt 0
	P3_3 = 1;
	EX0 = 1; //Cho phep ngat ngoai 0
	IT0 = 1; //Ngat theo suon
	EX1 = 1;
	IT1 = 1;
	EA = 1; //Global interrupt
}

void display_7seg(unsigned char value){
	unsigned char const mask[10]={0xC0, 0xF9, 
	0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	if(value < 10){
			P0=mask[value];
	}
	P1 = 0x07;
}

void delay(unsigned int time){
		while(time--){};
}

void blink_all(){
		P2= 0xFF;
		delay(T_DELAY);
		P2=0x00;
		delay(T_DELAY);
		P2=0xFF;
		delay(T_DELAY);
}

void blink_cycle_left_to_right(){
		unsigned char i;
		P2=0xFF;
		for(i=0;i<8;++i){
				P2<<=1;
				if(i>0) P2+=1;
				delay(T_DELAY);
		}
		P2=0xFF;
}

void blink_cycle_right_to_left(){
		unsigned int i;
		P2=0xFF;
		for(i=0;i<8;++i){
				P2>>=1;
				if(i>0) P2+=1<<7;
				delay(T_DELAY);
		}
		P2=0xFF;
}

void blink_pair_cycle(){
		unsigned int i;
		P2=0xFF;
		P2<<=2;
		for(i=0;i<6;++i){
				P2<<=1;
				P2+=1;
				delay(T_DELAY);
		}
		P2=0xFF;
		delay(T_DELAY);
		P2>>=2;
		delay(T_DELAY);
		for (i=0;i<6;++i){
				P2>>=1;
				P2+=1<<7;
				delay(T_DELAY);
		}
		P2=0xFF;
}

void blink_accumulative(){
		unsigned char sta = 0xFF;
		unsigned char tmp=0xFF;
		unsigned int i,j,k;
		P2=0xFF;
		for (i=0;i<8;++i){
				j=8-i;
				sta=P2;
				for (k=0;k<j;++k){
						tmp<<=1;
						if(k>0) tmp+=1;
						P2=tmp&sta;
						delay(T_DELAY);
				}
		}
		tmp=P2;
		for (i=0;i<8;++i){
				tmp>>=1;
				tmp+=(1<<7);
				P2|=tmp;
				delay(T_DELAY);
		}
}

void bumping() {
		unsigned char i;
		unsigned char left = 0xFF;
		unsigned char right = 0xFF;
		P2 = 0xFF;
		for (i = 0; i < 8; i++) {
				left >>= 1;
				right <<= 1;
				if (i > 0) {
						left += 1 << 7;
						right += 1;
				}
				P2 = left & right;
				delay(T_DELAY);
		}
		P2 = 0xFF;
}

void EX0_Process() interrupt IE0_VECTOR {
		EA=0; //Cam ngat
		
		/*short job here*/
		time = (time+1)%6;
		EA=1; //Cho phep ngat
		
}

void EX1_Process() interrupt IE1_VECTOR {
		EA=0; //Cam ngat
		/*short job here*/
		time = (time+5)%6;
		EA=1; //Cho phep ngat
		
}

void main(){
		IE=0x84;
		init();
		
		while(1){
				display_7seg(time+1);
				switch(time){
						case 0: blink_all(); delay(T_DELAY); break;
						case 1: blink_cycle_left_to_right();delay(T_DELAY); break;
						case 2: blink_cycle_right_to_left();delay(T_DELAY); break;
						case 3: blink_pair_cycle();delay(T_DELAY); break;
						case 4: blink_accumulative();delay(T_DELAY); break;
						case 5: bumping();delay(T_DELAY);break;
						default: break;
				}	
		}
}