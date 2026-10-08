#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("INT8: size=%zu, min=%d, max=%d, values=%llu\n",
        sizeof(int8_t), INT8_MIN, INT8_MAX,
        (unsigned long long)INT8_MAX - (unsigned long long)INT8_MIN + 1ULL);

    printf("UINT8: size=%zu, min=%u, max=%u, values=%llu\n",
        sizeof(uint8_t), 0u, UINT8_MAX,
        (unsigned long long)UINT8_MAX - 0ULL + 1ULL);

    printf("INT16: size=%zu, min=%d, max=%d, values=%llu\n",
        sizeof(int16_t), INT16_MIN, INT16_MAX,
        (unsigned long long)INT16_MAX - (unsigned long long)INT16_MIN + 1ULL);

    printf("UINT16: size=%zu, min=%u, max=%u, values=%llu\n",
        sizeof(uint16_t), 0u, UINT16_MAX,
        (unsigned long long)UINT16_MAX - 0ULL + 1ULL);

    printf("INT32: size=%zu, min=%d, max=%d, values=%llu\n",
        sizeof(int32_t), INT32_MIN, INT32_MAX,
        (unsigned long long)INT32_MAX - (unsigned long long)INT32_MIN + 1ULL);

    printf("UINT32: size=%zu, min=%u, max=%u, values=%llu\n",
        sizeof(uint32_t), 0u, UINT32_MAX,
        (unsigned long long)UINT32_MAX - 0ULL + 1ULL);

    return 0;
}

//любой тип N байт хранит 2 в степени 8N значений; int8 и uint8 оба хранят 256 значений, но int8 от -128 до 127, а uint8 от 0 до 255.