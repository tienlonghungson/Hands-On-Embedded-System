#include <REG_IS208x.H>

void wait(void)												/* wait function */
{
  unsigned int i;                     /* Delay var */

	for (i = 0; i < 10000; i++)					/* Delay for 10000 Counts */
		;                                 /* only to delay for LED flashes */
}

void blink_test(void)
{
  unsigned int i;                     /* Delay var */
  unsigned char j;                    /* LED var */

	for (j = 0x01; j < 0x80; j <<= 1) { /* Blink LED 0, 1, 2, 3, 4, 5, 6 */
		P0 = j;
		P1 = j;  
		P2 = j;
		P3 = j; 													/* Output to LED Port */
		for (i = 0; i < 100; i++) {				/* Delay for 1000000 Counts */
			wait();													/* call wait function */
		}
	}

	for (j = 0xFF; j > 0x01; j >>=1 ) {	/* Blink LED 6, 5, 4, 3, 2, 1 */
		P0 = j;
		P1 = j;  
		P2 = j;
		P3 = j; 													/* Output to LED Port */
		for (i = 0; i < 100; i++) {				/* Delay for 1000000 Counts */
			wait();													/* call wait function */
		}
	}
}