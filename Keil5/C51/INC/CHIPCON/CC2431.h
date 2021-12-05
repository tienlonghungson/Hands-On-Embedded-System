/**************************************************************************************************
 *                                        - CC2431.h -
 *
 * Header file for the Chipcon CC2431 System on Chip.
 *
 **************************************************************************************************
 */

#ifndef IOCC2431_H
#define IOCC2431_H

#include <CC2430.h>

/* ------------------------------------------------------------------------------------------------
 *                                       Xdata Radio Registers
 * ------------------------------------------------------------------------------------------------
 */
#define  REFCOORD    XREG( 0xDF55 )  /*  Location Engine, Reference Coordinates Input        */
#define  MEASPARM    XREG( 0xDF56 )  /*  Location Engine, Measured Parameters Input          */
#define  LOCENG      XREG( 0xDF57 )  /*  Location Engine, Location Engine Control and Status */
#define  LOCX        XREG( 0xDF58 )  /*  Location Engine, Location Estimate X Coordinate     */
#define  LOCY        XREG( 0xDF59 )  /*  Location Engine, Location Estimate Y Coordinate     */
#define  LOCMIN      XREG( 0xDF5A )  /*  Location Engine, Minimum Function Estimate          */

/**************************************************************************************************
 */
#endif
