#include <stdio.h>
#include <stdint.h>

int main(void) {
    int x;
    scanf("%d", &x);

    uint8_t v = (uint8_t)x;

    uint8_t add = (uint8_t)(v + v);
    uint8_t mul2 = (uint8_t)(v * 2);
    uint8_t sqr = (uint8_t)(v * v);

    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}

//uint8_t хранит 8 бит, то есть 0…255; что больше — отбрасывается, это то же самое, что остаток по модулю 256; 250+250=500 → 244, 250*2=500 → 244, 250*250=62500 → 36; ADD и MUL2 совпадают, потому что v+v и v*2 — одно и то же.