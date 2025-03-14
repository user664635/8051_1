#include "def.h"
#include "ds1302.h"
#include "i2c.h"
#include "io.h"
#include "onewire.h"
#include "pca.h"

#define MCLK 100000
int main(void) {
  i32 mclk = 0;
  u16 c0 = 0, c1;

#if debug
  u8 t0, t1;
  u16 tl0, tl1;
  SCON = 0x50;
  TH2 = 255;
  TL2 = 255;
  PS = 1;
  puts("debug");
#endif

  AUXR = 0x15;
  TMOD = 3;
  AUXR1 = 0x00;
  CMOD = 6;

  TH1 = 0xfb;
  TL1 = 0x1e;

  EA = 1;
  ET0 = 1;
  ET1 = 1;

  CCAPM0 = 0x11;

  TR0 = 1;
  TR1 = 1;
  CR = 1;

  P0 = 0;
  A1 = 0;
  A2 = 0;

  LED = 255;
  segbuf[0] = segmap[0];
  init1302();
  init18b20();

  while (1) {
    if (mclk - clkl() < 0) {
      mclk += MCLK;

#if debug
      // t0 = TL0;
      // L1 = !L1;
      // t1 = TL0;
      // put8n(t1 - t0);

      tl0 = clk();

      // put32dn((u32)st * 17);
      // TX = 0;
      // delay12();
      // TX = 1;
      // delay12();
      // TX = 0;
      // delay12();
      // TX = 1;
      // delay12();
      // s0 = clk();

      load();
      put8(time.h);
      put8(time.m);
      put8n(time.s);
      gettime();
      dump();

      // put8n(gettemp());

      put8n(adc(1));
      dac(0xc0);

      // c1 = CH << 8 | CL;
      // put16n(c1 - c0);
      // c0 = c1;

      tl1 = clk();
      put16n(tl1 - tl0);
#endif
    }
  }
}
