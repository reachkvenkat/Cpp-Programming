#include <stdio.h>

int main()
{
    int a,b,product=1;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);

    product = a * b;

    printf("a * b = %d", product);

    return 0;
}