/*------------------------------------------------------------------------------
Clock.C - adapted for the P89LPC98x and the Keil MCB900 Microcontroller Board
Demonstration for clock switching on the fly of LPC98x
Rev.01, 2009 Aug 25.
------------------------------------------------------------------------------*/

#include <REG98x.H>			// register definition

void delay (unsigned int cnt)
{
  while (--cnt);
}

void main()
{
  unsigned char i;

  P2M1 = 0;

  P2 = CLKCON;
  delay(5000);
  delay(5000);
  delay(5000);
  delay(5000);

  for(;;)
  { 
	/* IRC Clock: 011 Internal RC oscillator, 7.373 MHz +/- 1 %. */
	if (CLKCON & 0x80)
	{
		CLKCON = (CLKCON | 0x07) & 0xF3;

		P2 = 0x0f;
		delay(5000);
	}				 

	while((CLKCON & 0x80) == 0);

  	for (i = 0x01; i; i <<= 1)
    { 
	  P2 = i;				// simulate running lights
      delay (50000);
    }




     /* IRC Clock: 011 Internal RC oscillator with clock doubler, 14 MHz +/- 1 %. */
	if (CLKCON & 0x80)
	{
		CLKCON = (CLKCON | 0x0B) & 0xFB;

		P2 = 0x0f;
		delay(5000);
	}				 

	while((CLKCON & 0x80) == 0);

  	for (i = 0x01; i; i <<= 1)
    { 
	  P2 = i;				// simulate running lights
      delay (50000);
    }	




	/* Watch dog Clock: 100 Watchdog Oscillator, 400 kHz. */
  	if (CLKCON & 0x80)
	{
		WDCON |=0x01;
		CLKCON = 0x04;

		P2 = 0xff;		
		delay(5000);
	}

	while((CLKCON & 0x80) == 0);
		 
  	for (i = 0x01; i; i <<= 1)
    { 
	  P2 = i;				// simulate running lights
      delay (10000);
    }






       /* Watch dog Clock: 100 Watchdog Oscillator, 25 kHz . */
  	if (CLKCON & 0x80)
	{
		WDCON |=0x01;
		CLKCON =0x24;

		P2 = 0xff;		
		delay(5000);
	}

	while((CLKCON & 0x80) == 0);
		 
  	for (i = 0x01; i; i <<= 1)
    { 
	  P2 = i;				// simulate running lights
      delay (10000);
    }



    /* Ext Osc Clock: 	000 High frequency crystal or resonator, 4 MHz to 18 MHz.*/
    /*  if (CLKCON & 0x80)
	{
		CLKCON &= 0xf0;

		P2 = 0xf0;
		delay(5000);
	}

	while((CLKCON & 0x80) == 0);

	for (i = 0x01; i; i <<= 1)
    { 
	  P2 = i;				// simulate running lights
      delay (50000);
    }  */

  }
}




