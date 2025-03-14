#ifndef ONEWIRE_H
#define ONEWIRE_H

#include "def.h"

void onewire_init(void) {
  DQ = 0;
  delay480();
  DQ = 1;
  delay480();
}

void onewire_send(u8 byte) {
  u8 i;
  for (i = 8; i--; byte >>= 1, delay60(), DQ = 1) {
    DQ = 0, delay(0);
    DQ = byte & 1;
  }
}

u8 onewire_recv(void) {
  u8 i, byte = 0;
  for (i = 8; i--; rr(byte), delay60(), DQ = 1) {
    DQ = 0, delay(0);
    DQ = 1, byte |= DQ;
  }
  return byte;
}

void init18b20(void) {
  onewire_init();
  onewire_send(0xcc);
  onewire_send(0x4e);
  onewire_send(0);
  onewire_send(0);
  onewire_send(0x1f);
}

u8 gettemp(void) {
  u8 res;
  onewire_init();
  onewire_send(0xcc);
  onewire_send(0x44);

  onewire_init();
  onewire_send(0xcc);
  onewire_send(0xbe);
  res = onewire_recv() >> 4;
  res |= onewire_recv() << 4;
  return res;
}
#endif
