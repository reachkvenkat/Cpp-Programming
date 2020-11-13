#include <stdio.h>

int main()
{
    int a,b,sum=0;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);

    sum = a + b;

    printf("a + b = %d", sum);

    return 0;
}