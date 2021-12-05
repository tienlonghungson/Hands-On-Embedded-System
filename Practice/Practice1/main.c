#include "reg51.h"

void delay(unsigned int  time){
	while(time--){};
}

void blink_all(){
	P2=0xff;
	delay(50000);
	P2=0x00;
	delay(50000);
	P2=0xff;
	delay(50000);
}

void blink_cycle_right_to_left() {
	unsigned char i;
	P2 = 0xFF;
	for (i = 0; i < 8; i++) {
		P2<<=1;
		if(i > 0) P2 += 1;
		delay(50000);
	}
	P2 = 0xff;
}


void main(){
	while(1){
		blink_cycle_right_to_left;
		delay(50000);
	}
}