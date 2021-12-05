/*
 *  TEST_XC.C:  Demonstration of several Evatronix R8051XC features
 *  Copyright KEIL, An ARM Company, 2006
 */

#include <REG515.H>

#include <string.h>
#include <absacc.h>

#define PERIOD     -10

xdata char xc1[] = "XData World";
xdata char dd1[25];

xdata char xc2[] = "Interrupt XData World";
xdata char dd2[30];

// use enhanced xdata memcpy with auto increment features
extern void xcpy (void xdata *dest, void xdata *src, unsigned int sz);


/*
 * Interrupt function uses the Data Pointer Register Banking feature
 * which is enabled with the BSE Compiler and Simulator directive
 */
void timer0 (void) interrupt 1 using 1 {
  xcpy (dd2, xc2, sizeof (dd2));    // use multiple DPTR in interrupt
}

volatile unsigned int  ui1, ui2, ui3;
volatile   signed int  si1, si2, si3;
volatile unsigned long ul1, ul2, ul3;
volatile   signed long sl1, sl2, sl3;

char xdata xs1[10];
char xdata xs2[10];
char code  cs0[10] = "0123456789";

void error (void)  {
  while (1);
}

void MDU_Test ()  {
  ui1 = 234; ui2 = 43;
  ui3 = ui1 * ui2;                    // unsigned int mul
  if (ui3 != (234 * 43))         error ();
  ui2 = ui3 / 14;                     // unsigned int div
  if (ui2 != ((234 * 43)/14))    error ();

  si1 = -234; si2 = 36;
  si3 = si1 * si2;                     // signed int mul
  if (si3 != (-234 * 36))        error ();
  si2 = si3 / -17;                     // signed int div
  if (si2 != ((-234 * 36)/-17))  error ();

  ui1 = 23467;
  ul3 = (unsigned long) ui1 * 123;     // unsigned long mul
  if (ul3 != (23467L*123))      error ();

  ul1 = 23467L; ul2 = 434L;
  ul3 = ul1 * ul2;                    // unsigned long mul
  if (ul3 != (23467L*434L))      error ();
  ul2 = ul3 / 144L;                   // unsigned long div
  if (ul2 != ((23467L*434L)/144L))  error ();
  ul2 = ul1 << 8;
  if (ul2 !=(23467L << 8))  error ();
  ul1 = ul1 >> 6;
  if (ul1 !=(23467L >> 6))  error ();

  sl1 = -23467L; sl2 = 3434L;
  sl3 = sl1 * sl2;                    // signed long mul
  if (sl3 != (-23467L*3434L))      error ();
  sl2 = sl3 / 414L;                   // signed long div
  if (sl2 != ((-23467L*3434L)/414L))  error ();
  sl2 = sl1 << 5;
  if (sl2 !=(-23467L << 5))  error ();
  sl1 = sl1 >> 3;
  if (sl1 !=(-23467L >> 3))  error ();
}



void DPTR2_Test (void)  {
  xcpy (dd1, xc1, sizeof (dd1));
  strcpy (xs1, "Test");
  strcpy (xs2, xs1);
  if (strcmp (xs1, "Test") != 0) error ();  
  if (strcmp (xs2, "Test") != 0) error ();  
  if (strcmp (xs1, xs2) != 0) error ();  
  memmove (&xs2[1], &xs2[0], sizeof (xs2)-1);
  if (strcmp (xs2, "TTest") != 0) error ();  
  memmove (&xs2[0], &xs2[1], sizeof (xs2)-1);
  if (strcmp (xs2, "Test") != 0) error ();  
  memcpy (xs1, cs0, sizeof (xs1));
  memcpy (xs2, xs1, sizeof (xs2));
  if (memcmp (xs1, cs0, sizeof (xs1)) != 0) error ();  
  if (memcmp (xs2, cs0, sizeof (xs2)) != 0) error ();  
  if (memcmp (xs1, xs2, sizeof (xs1)) != 0) error ();
}

unsigned char c1;

void main (void)  {
  PCON |= 0x10;                                // enable write to CODE memory

  XBYTE[0x4000] = 0x21;
  c1 = PBYTE[0x49];
  c1 = XBYTE[0x4000];
  PCON &= ~0x10;                               // normal XDATA access

  MDU_Test ();                                 // Test MDU without Interrupts
  DPTR2_Test ();  

  DPSEL = 8;                                   // enable BSE (Data Pointer Register Banking)
  // setup the timer 0 interrupt: 
  TH0 = (unsigned char) PERIOD;                // set timer period
  TL0 = (unsigned char) PERIOD;
  TMOD = TMOD | 0x02;                          // select mode 2
  TR0 = 1;                                     // start timer 0
  ET0 = 1;                                     // enable timer 0 interrupt
  EAL = 1;                                     // global interrupt enable

  while (1)  {
    MDU_Test ();                               // Test MDU with Interrupts
    DPTR2_Test ();  
  }
}
