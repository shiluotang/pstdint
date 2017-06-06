#ifndef TESTKIT_H_INCLUDED
#define TESTKIT_H_INCLUDED

#include <stdio.h>

#   define PRINTF(FMT, VALUE) printf("%s = " FMT "\n", #VALUE, VALUE)
#   define FPRINTF(FP, FMT, VALUE) fprintf(FP, "%s = " FMT "\n", #VALUE, VALUE)

#   define TEST_ASSERT(CONDITION) \
       do { \
           if (!(CONDITION)) { \
               fprintf(stdout, "Test Assertion failed (%s:%d): %s\n", __FILE__, __LINE__, #CONDITION); \
               goto failure; \
           } else { \
               /* fprintf(stdout, "Test Assertion succeeded: %s\n", #CONDITION); */ \
           } \
       } while (0)

#   define TEST_EQUAL(A, B)     TEST_ASSERT((A) == (B))
#   define TEST_NEQUAL(A, B)    TEST_ASSERT((A) != (B))
#   define TEST_LT(A, B)        TEST_ASSERT((A) <  (B))
#   define TEST_NLT(A, B)       TEST_ASSERT((A) >= (B))
#   define TEST_GT(A, B)        TEST_ASSERT((A) >  (B))
#   define TEST_NGT(A, B)       TEST_ASSERT((A) <= (B))
#   define TEST_NULL(X)         TEST_EQUAL(X, NULL)
#   define TEST_NNULL(X)        TEST_NEQUAL(X, NULL)
#   define TEST_MASK_ON(V, M)   TEST_EQUAL((V) & (M), M)
#   define TEST_MASK_OFF(V, M)  TEST_NEQUAL((V) & (M), M)
#   define TEST_BIT_ON(V, B)    TEST_EQUAL(((V) >> (B)) & 0x1, 0x1)
#   define TEST_BIT_OFF(V, B)   TEST_EQUAL(((V) >> (B)) & 0x1, 0x0)

#   define TEST_START(rc) \
    int main(int argc, char* *argv) { \
        int rc = 0;
#   define TEST_STOP_WITH_CLEANUP(rc, CLEANUP_BLOCK) \
        goto success; \
    exit: \
        return rc; \
    failure: \
        rc = EXIT_FAILURE; \
        goto cleanup; \
    success: \
        rc = EXIT_SUCCESS; \
        goto cleanup; \
    cleanup: \
        { CLEANUP_BLOCK } \
        goto exit; \
    }
#define TEST_STOP(rc) TEST_STOP_WITH_CLEANUP(rc, {})

#endif /* TESTKIT_H_INCLUDED */

