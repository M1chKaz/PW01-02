#include <stdio.h>

int main(void) {
    int dec = 10;
    int oct = 010;
    int hex = 0x10;

    printf("DEC_10: %d\n", dec);
    printf("OCT_10: %d\n", oct);
    printf("HEX_10: %d\n", hex);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",
        sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));

    printf("FLOAT_SUFFIX: %zu %zu %zu\n",
        sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n",
        sizeof('A'), sizeof(ch), sizeof("A"));

    return 0;
}

//10 — десятичное, 010 — восьмеричное (=8), 0x10 — шестнадцатеричное (=16); суффиксы u, LL, ULL задают тип, поэтому размеры 4, 4, 8, 8; у дробных f — float (4), без суффикса — double (8), L — long double (Linux 16, Windows 8); 0.1f ≠ 0.1 из-за разной точности; 'A' в Си — это int (4 байта), char — 1 байт, "A" — 2 байта; 'A', '\x41' и '\101' — одно и то же число 65.