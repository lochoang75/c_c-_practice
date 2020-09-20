#define ABS(x) (((x) < 0) ? -(x) : (x))
#include "stdio.h"

void function(int n) {
    ++n;
    printf("Value receive receive %d \n", n);
    /* Variable that n is within the desired range */
    int m = ABS(n);
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
