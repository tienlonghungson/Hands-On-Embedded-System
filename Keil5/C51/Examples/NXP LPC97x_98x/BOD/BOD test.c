/*------------------------------------------------------------------------------
BOD test.C - adapted for the P89LPC98x 
Demonstration for Enhanced BOD of LPC98x
Copyright NXP Semiconductors.
Rev.01, 2009 Jun 25.
------------------------------------------------------------------------------*/

#include <REG98x.H>               /* special function register declarations   */
                                  /* for the NXP P89LPC98x device           */

#include <stdio.h>                /* prototype declarations for I/O functions */

/* The delay C function is a for loop that
needs about 0.2 seconds execution time */
static void delay (void)  {
  unsigned long i;

  for (i = 0; i < 25000; i++)  {  /* waste time and */
    ;                              /* do notthing */
  }
}

/* The BOD interrupt function config. */
/* RST voltage is set to 2.25V fall and 2.4V rise by setting UCFG1 when programming chip.
So Interrupt voltage could be set to 2.55V fall and 2.7V rise  by this function*/

void BOD_Int_Config(void){

BODCFG=0xFA;          /*Set BODCFG.2,1,0= 0,1,0 ,so the BOD int voltage is 2.55V fall and 2.7V rise*/
EA=1;                 /*Set EA  */
EBO=1;                /*Set BOD enable  */
PCON |=0x10;          /*Set BOD interrupt enable  */

printf ("Setting BODCFG.2,1,0=010,...\n");    
printf ("Setting compleated! BOD interrupt voltage is 2.55V fall and 2.7V rise.\n");   

}


/*------------------------------------------------
BOD interrupt routine.
------------------------------------------------*/
void BOD_ISR(void) interrupt 5
{
RSTSRC &= 0xbf;                                           /*clr BOIF at RSTSRC.6*/
printf ("\n");                                            /*print BOD interrupt information*/
printf ("BOD interrupt! Please note the voltage! \n");   
printf ("\n");                                            
P2^=0xff;                                                 /* Blinky LEDs */
delay();
}

/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/
void main() {
  int  a;
  P2M1 = 0;
  P1M1 = 0;

  SCON   = 0x52;                 /* initialize UART */
  BRGR0  = 0xF0;                 /* 9600 baud, 8 bit, no parity, 1 stop bit */
  BRGR1  = 0x02;
  BRGCON = 0x03;
  P2=0x55;
  
 printf ("-------------------------------------------------------------------\n");  
 printf ("Hello! \n");   
 printf ("This is a BOD test programme for NXP MCU LPC98x\n");    
 printf ("Reading the orignal UCFG1 configuration after reset,please wait... \n");    
 printf ("-------------------------------------------------------------------\n");   

  a=BODCFG;              /* Print UCFG1.5 to 1.3,which are load to BODCFG when reset */ 
  switch(a)
	{

        case 0xfa:   printf("UCFG1.5 to 1.3=010\n");break;
        case 0xfb:   printf("UCFG1.5 to 1.3=011\n");break;
        case 0xfc:   printf("UCFG1.5 to 1.3=100\n");break;
        case 0xfd:   printf("UCFG1.5 to 1.3=101\n");break;
        case 0xfe:   printf("UCFG1.5 to 1.3=110\n");break;
	case 0xff:   printf("UCFG1.5 to 1.3=111\n");break;
		
	}	
printf ("\n");  
  
printf ("For test,please adjust the LPC98x Vdd to below 2.55V... and wait for alarm...\n");    

BOD_Int_Config();    /* Initialize BOD interrupt */

printf ("\n");   

  while(1);        /* Please  adjust the Vdd 3.0V to > 2.7V,and  Wait for BOD interrupt*/
}

