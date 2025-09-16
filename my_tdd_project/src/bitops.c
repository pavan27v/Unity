#include "bitops.h"

int SetBit(uint32_t *value, int bitNumber)
{
    if (value == 0) return -1;
    if (bitNumber < 0 || bitNumber >= 32) return -1;
    *value |= ((uint32_t)1 << bitNumber);
    return 0;
}
