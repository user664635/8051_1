#ifndef DS1302_H
#define DS1302_H

#include "def.h"

void w1302(u8 byte) {
  u8 i;
  for (i = 8; i--; SCK = 1, SCK = 0)
    IO = byte & 1, byte >>= 1;
}

u8 r1302(void) {
  u8 i, byte = 0;
  for (i = 8; i--; SCK = 1, SCK = 0)
    byte |= IO, rr(byte);
  return byte;
}

void init1302(void) {
  CE = 1;
  w1302(0x8e);
  w1302(0);
  CE = 0;

  CE = 1;
  w1302(0xbe);
  w1302(0);
  w1302(1);
  w1302(3);

  w1302(1);
  w1302(1);
  w1302(1);

  w1302(1);
  w1302(0);
  CE = 0;
}

void gettime(void) {
  CE = 1;
  w1302(0xbf);
  time.s = r1302();
  time.m = r1302();
  time.h = r1302();
  CE = 0;
}

#endif
