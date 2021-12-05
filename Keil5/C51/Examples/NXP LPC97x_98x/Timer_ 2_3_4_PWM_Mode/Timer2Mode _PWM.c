// timer2 mode_pwm.c - adapted for LPC97x/98x

//
// This sample creates a PWM signal on port P0.3 using extended timer 2. 
// It sets up the mode 2 (PWM mode) and varies the duty cycle.
// The PWM signal can be observed through oscillograph. 
 
#include <REG98x.h> 				// file name
#include <stdio.h>
 
void msec(int x);
void init(void);
void Timer2_init(void);

unsigned char n=0;
 	
void main(void)
{
	init();			// configure ports 
	Timer2_init();		// set up timer2 PWM

 	while(1)
	{	
		for(n=0; n<99;n++) 	// vary duty cycle
		{
			
			PWMD2H=n;
			PWMD2L=n;
				
			msec(15);
		}
		msec(100);
	
		for(n=99; n>0; n--) 
		{
			
			PWMD2H=n;
			PWMD2L=n;

			msec(15);
		}
		msec(100);
	}		
}

void init(void)
{
	P0M1 = 0x00;				// push pull output P0
	P0M2 = 0xFF;

	
} 		
 
	
void msec(int x)				// @ 11.0592 MHz
{
	int j=0;
	while(x>=0)
	{
		for (j=0; j<1350; j++);
		x--;
	}	
}

void Timer2_init(void)
{
	T2CON =0x60;				// timer2 mode PWM

	RCAP2H=500;                             // initialize the duty cycle
	RCAP2L=0;
	PWMD2H=500;
	PWMD2L=0;

        T2CON|=0x14;	                       // start timer 2	            
}

