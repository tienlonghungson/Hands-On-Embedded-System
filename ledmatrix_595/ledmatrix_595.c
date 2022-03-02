#include <at89x51.h>
sbit MR=P2^3;
sbit OE=P2^4;
sbit SH_CP=P2^5;
sbit ST_CP=P2^6;
sbit DS1=P2^7;
bit dl=0;
//Khai bao font chu cai va chu so
//Chu cai tu A->E
unsigned char chu_cai[5][8]={
{0x20, 0x50, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88},
{0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0x88, 0xF0},
{0x70, 0x88, 0x80, 0x80, 0x80, 0x80, 0x88, 0x70},
{0xE0, 0x90, 0x88, 0x88, 0x88, 0x88, 0x90, 0xE0},
{0xF8, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80, 0xF8}};
//Chu so tu 0->4
unsigned char chu_so[5][8]={
{0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70},
{0x18, 0x28, 0x48, 0x88, 0x08, 0x08, 0x08, 0x08},
{0x70, 0x88, 0x88, 0x10, 0x20, 0x40, 0x80, 0xF8},
{0xF8, 0x10, 0x20, 0x70, 0x08, 0x08, 0x08, 0xF0},
{0x10, 0x20, 0x40, 0x90, 0xF8, 0x10, 0x10, 0x10}};
//Ham tao tre
void Delay_ms(int interval)
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<interval;j++);
	}
}
void Hien_duong_ke()
{
	int i;
	MR=0; //Xoa trang cac thanh ghi
	Delay_ms(10);
	MR=1;
	OE=0; //Chan du lieu
	for(i=0;i<32;i++){
		dl=~dl;
		DS1=dl;
		SH_CP=0;
		ST_CP=0;
		Delay_ms(5);
		SH_CP=1;
		ST_CP=1;
		Delay_ms(5);
	}
	OE=0; //Xuat du lieu
	P0=0;
	Delay_ms(1);
}
void Hien_ABCD(){
	int i,j,k;
	unsigned char hang;
	unsigned char temp;			
	MR=0; //Xoa trang cac thanh ghi
	Delay_ms(1);
	MR=1;
	hang=0x01;
	//8 rows
	for(i=0; i<8; i++)
	{			
	  OE=1; //High-Z output
		for(j=0;j<4;j++)
		{
			for(k=0;k<8;k++)
			{
				temp=chu_cai[3-j][i]>>k;
				if(temp&0x01){
					DS1=1;
				}else{
					DS1=0;
				}
				//shift one bit
				SH_CP=0;
				ST_CP=0;				
				SH_CP=1;
				ST_CP=1;					
			}
		}	
		P0=~hang;
		hang=hang<<1;	
		OE=0; //now display one row
		Delay_ms(1);			
	}				  	
}
void main(){
	int i;
	while(1){
		P0 = 0xff;
		Delay_ms(100);
		P0 = 0xff;
		for (i=0;i<10;++i){
			Hien_ABCD();
		}
		Hien_duong_ke();
	}
}
