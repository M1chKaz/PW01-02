#include <stdio.h>

int main(void) {
    long double ld;
    scanf("%Lf", &ld);

    double d = (double)ld;
    float  f = (float)ld;

    printf("FLOAT: %.6f\n", (double)f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);

    printf("FLOAT+1: %.6f\n", (double)(f + 1.0f));
    printf("DOUBLE+1: %.6f\n", d + 1.0);
    printf("LDOUBLE+1: %.6Lf\n", ld + 1.0L);

    return 0;
}

//float помнит ~6–7 цифр, double ~15–16, long double ~18–19; число 123456789 в float округляется до 123456792, и +1 не видно; у double и long double точности хватает, поэтому +1 видно; для long double спецификатор %Lf.