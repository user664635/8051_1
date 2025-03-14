#ifndef PCA_H
#define PCA_H

#include "sfr.h"
#include "def.h"

u16 s0, st;
void pca(void) interrupt(7) {
  if (CCF0)
    CCF0 = 0, st = clk() - s0;
}

#endif
