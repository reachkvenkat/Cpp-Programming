#include<stdio.h>

#define PI 3.14

int main()
{
    int radius = 6;
    float pi = 3.14;
    float perimeter = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("Perimeter of the circle: %.2f inches\n", perimeter);
    printf("Area of the circle = %.2f square inches \n", area);

    return 0;
}