#include <stdio.h>
#include <string.h>

int main(void) {
    const char *name = "Kazakov";
    const char *group = "IV-623\tXL434";

    printf("%s\t{%zu}\n%s\t{%zu}\n",
           name, strlen(name) + 1,
           group, strlen(group) + 1);

    return 0;
}