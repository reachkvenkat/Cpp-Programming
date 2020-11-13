#include<stdio.h>

int main()
{
    int amount = 375;
    if(amount >= 100)
    {
        printf("%d notes of 100.0\n",amount/100);
        amount = amount % 100;
    }
    if (amount >= 50)
    {
        printf("%d notes of 50.0\n", amount/50);
        amount = amount %50;
    }
    if (amount >= 20)
    {
        printf("%d notes of 20.0\n", amount/20);
        amount = amount % 20;
    }
    if (amount >= 10)
    {
        printf("%d notes of 10.0\n", amount/10);
        amount = amount %10;
    }
    if (amount >= 5)
    {
        printf("%d notes of 5.0\n", amount/5);
        amount = amount %5;
    }
    if (amount >= 1)
    {
        printf("%d notes of 1.0\n", amount);
    }

    return 0;
}