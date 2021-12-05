/* BLINKY.C - LED Flasher for the Keil MCBx51 Evaluation Board with 80C51 device*/
                  
#include <REG51F.H>

// When you have enabled the option Stop Program Execution with Serial
// Interrupt, the Monitor-51 uses the serial interrupt of the UART.
// It is therefore required to reserve the memory locations for the interrupt
// vector.  You can do this by adding one of the following code lines:

// char code reserve [3] _at_ 0x23;   // when using on-chip UART for communication
// char code reserve [3] _at_  0x3;   // when using off-chip UART for communication

void wait (void)  {                   /* wait function */
  ;                                   /* only to delay for LED flashes */
}

void main (void)  {
  unsigned int i;                     /* Delay var */
  unsigned char j;                    /* LED var */

  while (1) {                         /* Loop forever */
    for (j=0x01; j< 0x80; j<<=1)  {   /* Blink LED 0, 1, 2, 3, 4, 5, 6 */
      P1 = j;                         /* Output to LED Port */
      for (i = 0; i < 10000; i++)  {  /* Delay for 10000 Counts */
       wait ();                       /* call wait function */
      }
    }

    for (j=0x80; j> 0x01; j>>=1)  {   /* Blink LED 6, 5, 4, 3, 2, 1 */
      P1 = j;                         /* Output to LED Port */
      for (i = 0; i < 10000; i++)  {  /* Delay for 10000 Counts */
       wait ();                       /* call wait function */
      }
    }
  }
}
