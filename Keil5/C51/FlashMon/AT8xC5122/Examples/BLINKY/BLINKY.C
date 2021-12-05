/* BLINKY.C - LED Flasher for the Keil MCBx51 Evaluation Board with 80C51 device*/
                  
#include <REG5122.H>

char code reserve [3] _at_ 0x23;

sbit LED = P3^6;

// When you have enabled the option Stop Program Execution with Serial
// Interrupt, the Monitor-51 uses the serial interrupt of the UART.
// It is therefore required to reserve the memory locations for the interrupt
// vector.  You can do this by adding one of the following code lines:

// char code reserve [3] _at_ 0x23;   // when using on-chip UART for communication
// char code reserve [3] _at_  0x3;   // when using off-chip UART for communication

void wait (void)  {                   /* wait function */
  int i;
  for (i = 0; i < 10000; i++);
                                     /* only to delay for LED flashes */
}

void main (void)  {


  LED = 1;
  while (1) {                         /* Loop forever */
   
   wait();
   LED = ~LED; 

  }
}
