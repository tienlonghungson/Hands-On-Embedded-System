/******************************************************************************/
/*                                                                            */
/*   TRAFFIC.H:  Project specific header for the Traffic example              */
/*                                                                            */
/******************************************************************************/


extern void getline (char idata *, char);  /* external function:  input line       */
extern void serial_init (void);            /* external function:  init serial UART */

#define INIT      0                   /* task number of task:  init           */
#define COMMAND   1                   /* task number of task:  command        */
#define CLOCK     2                   /* task number of task:  clock          */
#define BLINKING  3                   /* task number of task:  blinking       */
#define LIGHTS    4                   /* task number of task:  signal         */
#define KEYREAD   5                   /* task number of task:  keyread        */
#define GET_ESC   6                   /* task number of task:  get_escape     */

struct time  {                        /* structure of the time record         */
  unsigned char hour;                 /* hour                                 */
  unsigned char min;                  /* minute                               */
  unsigned char sec;                  /* second                               */
};

