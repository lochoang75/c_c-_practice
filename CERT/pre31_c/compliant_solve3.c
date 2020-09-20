#include "stdio.h"
#include "complex.h"
#include "math.h"

static inline int iabs(int x) {
    return x < 0 ? -x : x;
}

static inline long long llabs(long x) {
    return x < 0 ? -x : x;
}

static inline long labs(long x) {
    return x < 0 ? -x : x;
}

static inline int sabs(short x) {
    return x < 0 ? -x : x;
}

static inline int scabs(signed char x) {
    return x < 0 ? -x : x;
}

#define ABS(x) _Generic(x, signed char : scabs, \
                            short: sabs, \
                            int : iabs, \
                            long : labs, \
                            long long : llabs, \
                            float: fabs, \
                            double: fabs, \
                            long double: fabsl, \
                            double complex: cabs, \
                            float complex: cabsf, \
                            long double complex: cabsl)(x)
void function(int n) {
    printf("Value receive receive %d \n", n);
    /* Variable that n is within the desired range */
    int m = ABS(++n);
    printf("Value output after convert %d \n", m);
}

int main(int argc, char*argv[]) {
    /* Test 0 value input =0 */
    printf("TEST: 0\n");
    function(0);

    /* Test Max value input */
    printf("TEST: 0x7fffffff \n");
    function(0x7fffffff);

    /* Test Simple negative value */
    printf("TEST: -1\n");
    function(-1);

    /* Test simple positive value */
    printf("TEST: 1\n");
    function(1);

    return 0;
}
