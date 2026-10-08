#include <stdio.h>
#include <float.h>

int main(void) {
    printf("FLOAT: size=%zu, digits=%d, max=%e\n",
        sizeof(float), FLT_DIG, (double)FLT_MAX);
    printf("DOUBLE: size=%zu, digits=%d, max=%e\n",
        sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%zu, digits=%d, max=%Le\n",
        sizeof(long double), LDBL_DIG, LDBL_MAX);

    return 0;
}

/*Количество цифр показателя степени в выводе %e и %Le может
       отличаться в зависимости от системы (например, e+38 или e+038).
       На некоторых платформах (например, Windows MSVC) long double
       совпадает по размеру с double, поэтому LDBL_DIG и LDBL_MAX
       будут такими же, как у double.*/