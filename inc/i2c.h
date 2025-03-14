#ifndef IIC_H
#define IIC_H

#include "def.h"

void iic_start(void) { SDA = 0, delay5(), SCL = 0, delay5(); }
void iic_stop(void) { SCL = 1, delay5(), SDA = 1, delay5(); }

void iic_send(u8 byte) {
  u8 i;
  for (i = 8; i--; SCL = 1, delay5(), SCL = 0, delay5())
    SDA = byte >> i & 1;
  SCL = 1, delay5(), SCL = 0, delay5();
  SDA = 0;
}

u8 iic_recv(void) {
  u8 i, byte = 0;
  SDA = 1;
  for (i = 8; i--; SCL = 1, delay5(), SCL = 0, delay5())
    byte |= (u8)SDA << i;
  SDA = 0;
  SCL = 1, delay5(), SCL = 0, delay5();
  return byte;
}

u8 adc(u8 ch) {
  u8 res;
  iic_start();
  iic_send(0x90);
  iic_send(ch);
  iic_stop();

  iic_start();
  iic_send(0x91);
  iic_recv();
  res = iic_recv();
  iic_stop();

  return res;
}

void dac(u8 val) {
  iic_start();
  iic_send(0x90);
  iic_send(0x40);
  iic_send(val);
  iic_send(val);
  iic_stop();
}

void dump(void) {
  iic_start();
  iic_send(0xa0);
  iic_send(1);
  iic_send(time.s);
  iic_send(time.m);
  iic_send(time.h);
  iic_stop();
}

void load(void) {
  iic_start();
  iic_send(0xa0);
  iic_send(1);
  iic_stop();

  iic_start();
  iic_send(0xa1);
  time.s = iic_recv();
  time.m = iic_recv();
  time.h = iic_recv();
  iic_stop();
}

#endif
