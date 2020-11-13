#include<stdio.h>

int main()
{
    int seconds =  25300;
    int hours, minutes, second;

    hours = seconds/3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    second = seconds;

    printf("H:M:S - %d:%d:%d", hours, minutes, second);

    return 0;

}