#include "unity.h"
#include "bitops.h"
#include <stdint.h>

void setUp(void) {}
void tearDown(void) {}

void test_SetBit_SetsLeastSignificantBit(void) {
    uint32_t v = 0x2;
    TEST_ASSERT_EQUAL_INT(1, SetBit(&v, 4));
    
    TEST_ASSERT_EQUAL_UINT32(18u, v);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_SetBit_SetsLeastSignificantBit);
    return UNITY_END();
}

