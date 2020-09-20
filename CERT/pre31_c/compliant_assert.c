#include "assert.h"
#include "stddef.h"
#include "stdio.h"

void process(size_t index) {
    printf("Index before assert %d \n", index);
    /* Fix assert side effect in debug mode */
    assert(index > 0); /* Side effect */
    ++index;
    printf("Index after assert %d \n", index);
}

int main(void) {
#ifdef NDEBUG
    printf("This code is build in debug mode\n");
#else
    printf("This code is build in Relese mode \n");
#endif

    /* Test call  > 0 */
    process((size_t) 1);

    /* Test call 0 */
    process((size_t) 0);

    /* Test call < 0 */
    process((size_t) -2);
    return 0;
}
