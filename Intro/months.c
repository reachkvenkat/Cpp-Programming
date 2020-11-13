#include <stdio.h>

#define DAYS_IN_YEARS 365
#define DAYS_IN_MONTH 30


int main()
{
    int data = 2535;
    int rest = data;
    int years = 0 ,months = 0, days = 0;
    if (data >= 365)
    {
        years = data / DAYS_IN_YEARS;
        rest = data % DAYS_IN_YEARS;
    }
    if (rest >= 30)
    {
        months = rest / DAYS_IN_MONTH;
        rest = rest % DAYS_IN_MONTH;
    }
    if (rest > 0)
    {
        days = rest;
    }
    printf("Total number of days: %d\n", data);
    printf("years: %d\n",years);
    printf("months: %d\n",months);
    printf("days: %d\n",days);
}