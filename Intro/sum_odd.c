#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int sum = 0;

    printf("Enter number 1\n");
    scanf("%d", &num1);

    printf("Enter number 2\n");
    scanf("%d", &num2);

    printf("Enter number 3\n");
    scanf("%d", &num3);

    printf("Enter number 4\n");
    scanf("%d", &num4);

    printf("Enter number 5\n");
    scanf("%d", &num5);

    if (num1 %2 != 0) sum = sum + num1;
    if (num2 %2 != 0) sum = sum + num2;
    if (num3 %2 != 0) sum = sum + num3;
    if (num4 %2 != 0) sum = sum + num4;
    if (num5 %2 != 0) sum = sum + num5;

    printf("Sum of odd values: %d", sum);

    return 0;
}