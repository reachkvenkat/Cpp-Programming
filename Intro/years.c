#include <stdio.h>

#define DAYS_IN_YEARS 365
#define DAYS_IN_WEEK 7


int main()
{
    int data = 1329;
    int rest = data;
    int years = 0 ,weeks = 0, days = 0;
    if (data > 365)
    {
        years = data / DAYS_IN_YEARS;
        rest = data % DAYS_IN_YEARS;
    }
    if (rest > 7)
    {
        weeks = rest / DAYS_IN_WEEK;
        rest = rest % DAYS_IN_WEEK;
    }
    if (rest > 0)
    {
        days = rest;
    }
    printf("Total number of days: %d\n", data);
    printf("years: %d\n",years);
    printf("weeks: %d\n",weeks);
    printf("days: %d\n",days);
}