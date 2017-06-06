#include <stdlib.h>
#include <stdio.h>

#include "testkit.h"
#include "../src/pstdint.h"

TEST_START(rc)
    TEST_EQUAL(sizeof(int8_t),  1u);
    TEST_EQUAL(sizeof(int16_t), 2u);
    TEST_EQUAL(sizeof(int32_t), 4u);
    TEST_EQUAL(sizeof(int64_t), 8u);

    TEST_EQUAL(sizeof(uint8_t),  1u);
    TEST_EQUAL(sizeof(uint16_t), 2u);
    TEST_EQUAL(sizeof(uint32_t), 4u);
    TEST_EQUAL(sizeof(uint64_t), 8u);

    TEST_EQUAL(UINT8_MAX,  0xffU);
    TEST_EQUAL(UINT16_MAX, 0xffffU);
    TEST_EQUAL(UINT32_MAX, 0xffffffffUL);
    TEST_EQUAL(UINT64_MAX, 0xffffffffffffffffULL);

    TEST_EQUAL(INT8_MAX,  0xffU >> 1);
    TEST_EQUAL(INT16_MAX, 0xffffU >> 1);
    TEST_EQUAL(INT32_MAX, 0xffffffffUL >> 1);
    TEST_EQUAL(INT64_MAX, 0xffffffffffffffffULL >> 1);

    TEST_EQUAL(INT8_MIN,  -1 * (0xff >> 1) - 1);
    TEST_EQUAL(INT16_MIN, -1 * (0xffff >> 1) - 1);
    TEST_EQUAL(INT32_MIN, -1 * (0xffffffffL >> 1) - 1);
    TEST_EQUAL(INT64_MIN, -1 * (0xffffffffffffffffLL >> 1) - 1);
TEST_STOP(rc)
