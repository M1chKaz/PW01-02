#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    int range_ok = ((unsigned)INT_MAX + 1u == 0u) ? 1 : 0;
    printf("RANGE_OK: %d\n", range_ok);

    return 0;
}

/*INT_MAX + 1 для знакового int — переполнение и неопределённое поведение,
  поэтому приводят к unsigned; тогда (unsigned)INT_MAX + 1 = 0, и RANGE_OK = 1.*/