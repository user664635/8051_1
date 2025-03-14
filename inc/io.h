#ifndef IO_H
#define IO_H

#include "sfr.h"
#include "def.h"

u8 LED = 0xff;
//sbit(L1, LED ^ 0);

code u8 segmap[] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8,
                    0x80, 0x90, 0x88, 0x83, 0xc6, 0xa1, 0x86, 0x8e};

idata u8 segbuf[8];
u8 ioc;
void io(void) interrupt(3) {
  ioc = ioc + 1 & 7;

  A0 = A1 = 0;
  P0 = LED;
  A2 = 1, A2 = 0;

  A1 = 1;
  P0 = 1 << ioc;
  A2 = 1, A2 = 0;

  A0 = 1;
  P0 = segbuf[ioc];
  A2 = 1, A2 = 0;
}

void keydt(u8 p, u8 i) {}

#endif
