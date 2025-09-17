#include "unity.h"
#include "bitops.h"
#include <stdint.h>

void setUp(void) {}
void tearDown(void) {}

void test_SetBit_SetsLeastSignificantBit(void) 
{
    uint32_t v = 0x7 ;
   // TEST_ASSERT_EQUAL_INT(1, SetBit(&v, 31));
  //  TEST_ASSERT_EQUAL_UINT32(2147483650u, v);

  //  TEST_ASSERT_EQUAL_INT(1, clearBit(&v, 1));
   // TEST_ASSERT_EQUAL_UINT32(5u, v);


   TEST_ASSERT_EQUAL_INT(1, toggleBit(&v, 1));
    TEST_ASSERT_EQUAL_UINT32(5u, v);

}

int main(void) 
{
    UNITY_BEGIN();
    RUN_TEST(test_SetBit_SetsLeastSignificantBit);
    return UNITY_END();
}

