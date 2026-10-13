#include <stdio.h>

void load_mem(void) {
    printf("MEM_OK");
}

void load_cpu(void) {
    printf("CPU_OK");
}

int main(void) {
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END\n");

    return 0;
}