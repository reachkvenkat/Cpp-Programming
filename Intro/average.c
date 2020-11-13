#include<stdio.h>

int main()
{
    float prod1, prod2;
    int freq1, freq2;
    float average;

    printf("Enter the price of product 1\n");
    scanf("%f", &prod1);

    printf("Enter the price of product 2\n");
    scanf("%f", &prod2);

    printf("Enter the number of product 1\n");
    scanf("%d", &freq1);

    printf("Enter the number of product 2\n");
    scanf("%d", &freq2);

    average = ((prod1 * freq1) + (prod2 * freq2))/(freq1 + freq2);

    printf("Average: %.2f", average);

    return 0;
}