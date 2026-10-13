#include <stdio.h>

#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR 3600

int main(void) {
    int years = 52;
    long long days = years * DAYS_PER_YEAR;
    long long hours = days * HOURS_PER_DAY;
    long long seconds = hours * SECONDS_PER_HOUR;

    printf("Тики: %lld | Часы: %lld | Дни: %lld | Годы: %d\n",
           seconds, hours, days, years);

    return 0;
}