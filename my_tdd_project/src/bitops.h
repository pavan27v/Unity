#ifndef BITOPS_H
#define BITOPS_H

#include <stdint.h>
#include "stdbool.h"

bool SetBit(uint32_t *value, int bitNumber);
bool clearBit(uint32_t *value, int bitNumber);
bool toggleBit(uint32_t *value, int bitNumber);

#endif

