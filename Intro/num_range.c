#include<stdio.h>

int main()
{
    int number;

    printf("Enter the number");
    scanf("%d", &number);

    if (number < 0 || number > 80)
    {
        printf("Error!! Wrong number");
    } 
    else
    {
        if(number < 20) printf("Range [0,20]");
        else if (number < 40) printf("Range [20,40]");
        else if (number < 60) printf("Range [40,60]");
        else if (number < 80) printf("Range [60,80]");
    }

    return 0;
}