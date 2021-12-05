Load traffic.dmo

PORT2 &= ~0x20;            /* set P2.5 to zero: Key Input */

/* define a debug function for the pedestrian push button */
signal void push_key (void)  {
  PORT2 |=  0x20;          /* set P2.5       */
  twatch (`Clock*0.05);    /* wait 50 msec   */
  PORT2 &= ~0x20;          /* reset P2.5     */
}

/* define a toolbar button to call push_key */
define button "Push for Walk", "push_key ()"

RADIX=10 // decimal output in watch window
