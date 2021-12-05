#include "reg51.h"

void delay(unsigned int time){
		while(time--){};
}

void blink_all(){
		P2= 0xFF;
		delay(50000);
		P2=0x00;
		delay(50000);
		P2=0xFF;
		delay(50000);
}

void blink_cycle_left_to_right(){
		unsigned char i;
		P2=0xFF;
		for(i=0;i<8;++i){
				P2<<=1;
				if(i>0) P2+=1;
				delay(50000);
		}
		P2=0xFF;
}

void blink_cycle_right_to_left(){
		unsigned int i;
		P2=0xFF;
		for(i=0;i<8;++i){
				P2>>=1;
				if(i>0) P2+=1<<7;
				delay(50000);
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
				delay(50000);
		}
		P2=0xFF;
		delay(50000);
		P2>>=2;
		delay(50000);
		for (i=0;i<6;++i){
				P2>>=1;
				P2+=1<<7;
				delay(50000);
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
						delay(50000);
				}
		}
		tmp=P2;
		for (i=0;i<8;++i){
				tmp>>=1;
				tmp+=(1<<7);
				P2|=tmp;
				delay(50000);
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
				delay(50000);
		}
		P2 = 0xFF;
}


void main(){
		while(1){
				blink_all();
				delay(50000);
				blink_cycle_left_to_right();
				delay(50000);
				blink_cycle_right_to_left();
				delay(50000);
				blink_pair_cycle();
			  delay(50000);
				blink_accumulative();
				bumping();
				delay(50000);
		}
}