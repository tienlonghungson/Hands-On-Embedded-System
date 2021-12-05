/* Blinky.C - LED Flasher for the Keil MCB950 Evaluation Board */

#include <REG952.H>               // register definition
#include <stdio.h>

/*
 * delay execution depending on A/D value
 */
static void delay (void)  {
  unsigned long i;
  unsigned int  v;

  v = AD0DAT2L * 50 + 2000;       // read A/D value from potentiometer
  for (i = 0; i < v; i++)  {      // waste time and 
    ;                             // do nothing 
  }
}

bit uart_port;                     // UART port select: 0=UART0, 1=UART1

/*
 * character output function for UART0 or UART1
 */
char putchar (char c) {
  if (uart_port == 0)  {          // UART0
    if (c == '\n')  {             // expand '\n' into CR/LF
      while (!TI_0);
      TI_0 = 0;
      S0BUF = 0x0D;               // output CR
    }
    while (!TI_0);
    TI_0 = 0;
    S0BUF = c;
  }
  else  {						  // UART1
    if (c == '\n')  {             // expand '\n' into CR/LF
      while (!(S1CON & 0x02));
      S1CON &= ~0x02;
      S1BUF = 0x0D;               // output CR
    }
    while (!(S1CON & 0x02));
    S1CON &= ~0x02;
    S1BUF = c;
  }
  return (c);
}


/*
 * main program
 */
void main(void) {
  unsigned char i;
  unsigned int  v;

  P1M1 = 0xFE;                    // Configure P1.0 (TxD) as Output (UART0)

  P4M1 = 0x00;
  P4M2 = 0x00;
  P4   = 0xFF;

  P5M1 = 0x00;                    // Config Port 5 as Quasi-bidirectional PORT
  P5M2 = 0x00;

  S0CON    = 0x52;                // initialize UART 0
  BRGR0_0  = 0xF0;                // 9600 baud, 8 bit, no parity, 1 stop bit
  BRGR1_0  = 0x02;
  BRGCON_0 = 0x03;

  S1CON    = 0x52;                // initialize UART 1
  BRG0_1   = 0xF0;                // 9600 baud, 8 bit, no parity, 1 stop bit
  BRG1_1   = 0x02;
  BRGCON_1 = 0x03;

                                  // configure A/D converter
  ADMODA  = 0x30;                // SCAN=1 single conversion
  AD0INS  = 0x04;                // Enable AD12 input
  ADMODB  = 0x60;                // CLK: 1.5MHz for 12MHz XTAL
  AD0CON  = 0x05;                // Enable+start A/D converter

  while(1) {
    for (i = 0x01; i; i <<= 1) { 
      P5 = i;                     // output LED pattern
      delay ();
      uart_port = 0;              // switch to serial UART 0
	                              // read and print A/D input value
      v = ((AD0DAT2L<<2)&0x300) | AD0DAT2R;
      printf ("UART0: AD12=0x%X\n", v);
    }
    for (i = 0x80; i; i >>= 1) { 
      P5 = i;
      delay ();
      uart_port = 1;              // switch to serial UART 1
	                              // read and print A/D input value
      v = ((AD0DAT2L<<2)&0x300) | AD0DAT2R;
      printf ("UART1: AD12=0x%X\n", v);
    }
  }
}
