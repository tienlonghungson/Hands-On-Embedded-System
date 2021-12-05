/*-----------------------------------------------------------------------------
  REGCY8C32.H

Header file for Cypress CY8C32 PSoC3 devices.
Copyright (c) 2012 ARM Ltd and ARM Germnay GmbH.
All rights reserved.
-----------------------------------------------------------------------------*/

#ifndef __REGCY8C32_H__
#define __REGCY8C32_H__

/* Byte Registers */
/* SFRs all pages */
sfr SFRPRT0DR   = 0x80;            /* Port 0 Latch                           */
sfr SP          = 0x81;            /* Stack Pointer                          */
sfr DPL0        = 0x82;            /* Data Pointer 0 Low                     */
sfr DPH0        = 0x83;            /* Data Pointer 0 High                    */
sfr DPL1        = 0x84;            /* Data Pointer 1 Low                     */
sfr DPH1        = 0x85;            /* Data Pointer 1 High                    */
sfr DPS         = 0x86;            /* Data Pointer Selector                  */

sfr SFRPRT0PS   = 0x89;            /**/
sfr SFRPRT0SEL  = 0x8A;            /**/

sfr SFRPRT1DR   = 0x90;            /**/
sfr SFRPRT1PS   = 0x91;            /**/
sfr DPX0        = 0x93;            /**/
sfr DPX1        = 0x95;            /**/

sfr SFRPRT2DR   = 0x98;            /**/
sfr SFRPRT2PS   = 0x99;            /**/
sfr SFRPRT2SEL  = 0x9A;            /**/

sfr P2AX        = 0xA0;            /**/
sfr SFRPRT1SEL  = 0xA2;            /**/

sfr IE          = 0xA8;            /**/

sfr SFRPRT3DR   = 0xB0;            /**/
sfr SFRPRT3PS   = 0xB1;            /**/
sfr SFRPRT3SEL  = 0xB2;            /**/

sfr SFRPRT4DR   = 0xC0;            /**/
sfr SFRPRT4PS   = 0xC1;            /**/
sfr SFRPRT4SEL  = 0xC2;            /**/

sfr SFRPRT5DR   = 0xC8;            /**/
sfr SFRPRT5PS   = 0xC9;            /**/
sfr SFRPRT5SEL  = 0xCA;            /**/

sfr PSW         = 0xD0;            /**/

sfr SFRPRT6DR   = 0xD8;            /**/
sfr SFRPRT6PS   = 0xD9;            /**/
sfr SFRPRT6SEL  = 0xDA;            /**/

sfr ACC         = 0xE0;            /**/

sfr SFRPRT12DR  = 0xE8;            /**/
sfr SFRPRT12PS  = 0xE9;            /**/
sfr MXAX        = 0xEA;            /**/


sfr B           = 0xF0;            /**/
sfr SFRPRT12SEL = 0xF2;            /**/

sfr SFRPRT15DR  = 0xF8;            /**/
sfr SFRPRT15PS  = 0xF9;            /**/
sfr SFRPRT15SEL = 0xFA;            /**/


#endif                                /* #define __REGCY8C32_H__             */
