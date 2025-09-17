#include "bitops.h"
#include "stdbool.h"
bool SetBit(uint32_t *value, int bitNumber)
{
    if (value == 0) return false;
    if (bitNumber < 0 || bitNumber >= 32) return false;
    *value |= ((uint32_t)1 << bitNumber);
    return true;
}
bool clearBit(uint32_t *value, int bitNumber)
{
    if(value == 0) return false;
    if(bitNumber < 0 || bitNumber >=32 ) return false;
    *value &= ~(1 << bitNumber);
     return true;
}
bool toggleBit(uint32_t *value, int bitNumber)
{
    if(value == 0) return false;
    if(bitNumber < 0 || bitNumber >=32 ) return false;
    *value ^= ( 1 << bitNumber );
     return true;
}

