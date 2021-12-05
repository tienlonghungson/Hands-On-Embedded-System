#include "reg51.h"

//led 7-seg output data 0-9 
code unsigned char LEDfont[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char LEDpos=0;	//choose led 7-seg position	

unsigned char oldkey=0xff;	//push button data (release status)

//Define led 7-seg anot control (on/off):	
sbit LED7SEG_0 = P1^0;	//Led 7-seg 1 anot 
sbit LED7SEG_1 = P1^1;	//Led 7-seg 2 anot
sbit LED7SEG_2 = P1^2;	//Led 7-seg 3 anot
sbit LED7SEG_3 = P1^3;	//Led 7-seg 4 anot

//Buzzer (speaker) connects on P1^5 
sbit SPK  = P1^5;	//Buzzer on/off

//Define 6 push buttons on Port P3
sbit key1 = P3^7;	//Push button 1
sbit key2 = P3^6;	//Push button 2
sbit key3 = P3^5;	//Push button 3
sbit key4 = P3^4;	//Push button 4
sbit key5 = P3^3;	//Push button 5
sbit key6 = P3^2;	//Push button 6
			
//Delay 0-65536
void delay(unsigned int time)   
{							    
	while(time--);
}

void display(unsigned int da)
{
	P0=0xFF;			//Port 0 data off
	da=da%10000;	 	//output data for led 7-seg (4-digits)
	switch(LEDpos){
	case 0:		//choose led 7-seg 1
		LED7SEG_0=0;
		LED7SEG_1=1;	
		LED7SEG_2=1;		
		LED7SEG_3=1;
		P0=LEDfont[da/1000];	//Chu so hang nghin
		break;
	case 1:		//choose led 7-seg 2
		LED7SEG_0=1;
		LED7SEG_1=0;	
		LED7SEG_2=1;		
		LED7SEG_3=1;
		P0=LEDfont[da%1000/100]; //Chu so hang tram
		break;
	case 2:		//choose led 7-seg 3
		LED7SEG_0=1;
		LED7SEG_1=1;	
		LED7SEG_2=0;		
		LED7SEG_3=1;
		P0=LEDfont[da%100/10];  //Chu so hang chuc
		break;
	case 3:		//choose led 7-seg 4
		LED7SEG_0=1;
		LED7SEG_1=1;	
		LED7SEG_2=1;		
		LED7SEG_3=0;
		P0=LEDfont[da%10];	 //Chu so hang don vi
		break;
	}
	LEDpos++;		//turn around
	if(LEDpos>3)
		LEDpos=0;	
}
//Read buttons 1-> 6 on P3
unsigned char ReadKey(void)	
{
	unsigned char lkey=0;
	if((P3&0xfc)!=0xfc){	//if any buttons pressed

		SPK=1;				//turn on buzzer

		delay(10);			//delay for buzzer pulse
		if(oldkey!=(P3&0xfc)){//if any buttons pressed
			oldkey=P3&0xfc;		//update buttons values		
			if(key1==0)
				lkey=1;		//press button 1
			else if(key2==0)
				lkey=2;		//press button 2
			else if(key3==0)
				lkey=3;		//press button 3
			else if(key4==0)
				lkey=4;		//press button 4
			else if(key5==0)
				lkey=5;		//press button 5
			else if(key6==0)
				lkey=6;		//press button 6
		}
	}
	else{
		oldkey=0xfc;		//default data of buttons port

		SPK=0;				//turn off buzzer
	}
	return lkey;
}

//Chuong trinh chinh				
void main(void) 
{
	unsigned int LEDdata=1234;		//led-7seg 4 digits data 
	unsigned char i;
	SPK = 0;
	for(i=0;i<8;i++){
		P2<<=1;		//shift left all leds		
		delay(5000);
	}

	P1 = 0x0f;
	P2 = 0xff;		//all LED off
	
	P0 = 0;			//Port 0 connect LCD
	LED7SEG_3=0;		//turn on leg 7-seg 4
	delay(50000);
	LED7SEG_3=1;		//turn off leg 7-seg 4

	LED7SEG_2=0;		//turn on leg 7-seg 3
	delay(50000);
	LED7SEG_2=1;		//turn off leg 7-seg 3

	LED7SEG_1=0;		//turn on leg 7-seg 2
	delay(50000);
	LED7SEG_1=1;		//turn off leg 7-seg 2

	LED7SEG_0=0;		//turn on leg 7-seg 1
	delay(50000);
	LED7SEG_0=1;		////turn off leg 7-seg 1
	
	while(1){					//loop forever
		P2 = 0x55;				//8 leds on Port 2
		switch(ReadKey()){		//Polling push buttons
		case 1:LEDdata++;			//button 1 pressed
			break;
		case 2:LEDdata--;			//button 2 pressed
			break;
		case 3:LEDdata+=10;		//button 3 pressed
			break;
		case 4:LEDdata-=10;		//button 4 pressed
			break;
		case 5:LEDdata+=100;		//button 5 pressed
			break;
		case 6:LEDdata-=100;		//button 6 pressed
			break;
		}		
		display(LEDdata);		//display 4 digits led 7-seg
		delay(100);
	}
}
