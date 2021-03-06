#include <at89x51.h>
//Bien luu toc do chu chay
int speed=5;

//Khai bao font chu cai va chu so
//Chu cai tu A->E
const unsigned char chu_cai[5][8]={
{0x20, 0x50, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88},
{0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0x88, 0xF0},
{0x70, 0x88, 0x80, 0x80, 0x80, 0x80, 0x88, 0x70},
{0xE0, 0x90, 0x88, 0x88, 0x88, 0x88, 0x90, 0xE0},
{0xF8, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80, 0xF8}};
//Chu so tu 0->4
const unsigned char chu_so[5][8]={
{0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70},	  //So 0
{0x18, 0x28, 0x48, 0x88, 0x08, 0x08, 0x08, 0x08},	  //So 1
{0x70, 0x88, 0x88, 0x10, 0x20, 0x40, 0x80, 0xF8},	  //So 2
{0xF8, 0x10, 0x20, 0x70, 0x08, 0x08, 0x08, 0xF0},	  //So 3
{0x10, 0x20, 0x40, 0x90, 0xF8, 0x10, 0x10, 0x10}};	  //So 4
//Ham tao tre
void Delay_ms(int interval)
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<interval;j++);
	}
}
// Display with running
// method = 0: run left->right, method = 1: run right->left
void Shift_Effect(unsigned char method){
	int i=0;
	int j=0;
	int k=0;
	unsigned char hang;	
	
	for(j=0;j<5;j++){
		//display the number and hold
		for(k=0;k<20;k++){
			hang=0x01;
			for(i=0;i<8;i++){			
				P0=~hang; 				
				P2=chu_so[j][i];
				Delay_ms(1);
				hang=hang<<1;
			}
		}
		//then run left/right
		for(k=0;k<8;k++){
			hang=0x01;
			for(i=0;i<8;i++){			
				P0=~hang;
				if(method==0){
					P2=chu_so[j][i]>>k;
				}else{
					P2=chu_so[j][i]<<k;
				}
				Delay_ms(3);
				hang=hang<<1;
			}
			Delay_ms((10-speed)*10);
		}			
		Delay_ms(100);	
	}	
}

void init_system(){
	//Thiet lap	toc do
	speed=5;	 
}
//Chuong trinh chinh
void main(){	
	init_system();
		
	while(1){
		Shift_Effect(0);		
	}
}				  