#include<stdio.h>

int main()
{
    float s1, s2, s3;
    float perimeter = 0;

    printf("Enter Side 1\n");
    scanf("%f", &s1);

    printf("Enter Side 2\n");
    scanf("%f", &s2);

    printf("Enter Side 3\n");
    scanf("%f", &s3);

    if ((s1 < (s2 + s3)) && (s2 < (s3+s1)) && (s3 < (s1+s2)))
    {
        perimeter = s1 + s2 + s3;
        printf("Perimeter: %.2f", perimeter);
    }
    else
    {
        printf("Invalid triangle coordinates");
    }

    return 0;
}