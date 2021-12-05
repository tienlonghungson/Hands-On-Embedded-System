/* Operations Using CPU and SFRs */

#include <REG_IS208x.H>

/* List of Blink Test Function */
extern void blink_test(void);

void main (void)                              /* main program */
{
	//  init serial interface 19200 baud @ 40MHz for IS208x
  PCON  |= 0x80;
  S0CON  = 0x50;		         
  TMOD  |= 0x21;           
  TH1    = 0xF8;   
  CKCON |= 0x10;
  TCON   = 0x50;              
  S0TXIF = 1; 

	blink_test();

  while (1)  {                                 /* repeat forever */
  }
}

