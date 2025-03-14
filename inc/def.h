#ifndef DEF_H
#define DEF_H

#include "sfr.h"
#ifdef __C51__
#define interrupt(x) interrupt x
#define using(x) using x
#define sbit(id, addr) sbit id = addr
#endif

typedef unsigned char u8;
typedef unsigned int u16;
typedef unsigned long u32;

typedef signed char i8;
typedef signed int i16;
typedef signed long i32;

typedef float f32;

#define A0 P25
#define A1 P26
#define A2 P27

#define D P0

#define SIG P34

#define SCL P20
#define SDA P21

#define TX P10
#define RX P11

#define IO P23
#define CE P13
#define SCK P17

#define R1 P30
#define R2 P31
#define R3 P32
#define R4 P33
#define C1 P44
#define C2 P42
#define C3 P35
#define C4 P34

#define DQ P14

#define rr(x) (x = x >> 1 | x << 7)

u16 th;
struct {
  u8 h, m, s;
} time;

void system_clock(void) interrupt(1) { ++th; }
#define clk() ((u16)TH0 << 8 | TL0)
#define clkl() ((i32)th << 16 | clk())

void delay(u8 t) {
  u8 t0 = TL0;
  while ((u8)(TL0 - t0) < t)
    ;
}

void delayl(u16 t) {
  t += clk();
  while ((clk() - t) >> 15)
    ;
}

#define delay5() delay(3)
#define delay12() delay(10)
#define delay60() delay(57)
#define delay480() delayl(473)

#define debug 1

#if debug
idata char buf[16];
struct {
  u8 b : 4, t : 4;
} so;
bit busy;

void sio(void) interrupt(4) {
  if (TI) {
    TI = 0;
    busy = so.t != so.b;
    if (busy)
      SBUF = buf[so.b++];
  }
}

void putc(char c) {
  ES = 0;
  if (busy)
    buf[so.t++] = c;
  else
    busy = 1, SBUF = c;
  ES = 1;
}

#define dbg() putc('_')
void puts(char *s) {
  while (*s)
    putc(*s++);
}
#define putd(x) putc((u8)(x) + '0')
#define putn() putc('\n')
#define putdn(x) putd(x), putn()

#define h2a(x) ((x) < 10 ? (x) + '0' : (x) + '7')
void put8(u8 x) {
  putc(h2a(x >> 4));
  putc(h2a(x & 15));
}
#define put8n(x) put8(x), putn()

void put16(u16 x) {
  putc(h2a(x >> 12));
  putc(h2a(x >> 8 & 15));
  putc(h2a(x >> 4 & 15));
  putc(h2a(x & 15));
}
#define put16n(x) put16(x), putn()

void put32d(u32 x) {
  putd(x / 1000000000);
  putd(x / 100000000 % 10);
  putd(x / 10000000 % 10);
  putd(x / 1000000 % 10);
  putd(x / 100000 % 10);
  putd(x / 10000 % 10);
  putd(x / 1000 % 10);
  putd(x / 100 % 10);
  putd(x / 10 % 10);
  putd(x % 10);
}
#define put32dn(x) put32d(x), putn()

void putf(f32 x) {
  
}

#endif

#endif
