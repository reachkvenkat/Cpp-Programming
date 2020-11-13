#include<stdio.h>

int main()
{
    int p,q,r,s;

    printf("Enter the first integer\n");
    scanf("%d", &p);

    printf("Enter the second integer\n");
    scanf("%d", &q);

    printf("Enter the third integer\n");
    scanf("%d", &r);

    printf("Enter the fourth integer\n");
    scanf("%d", &s);

    if (r > 0 && s > 0 && p%2 == 0)
    {
        if (p > r && s > p && (r+s) > (p+q))
        {
            printf("Correct Values");
            return 0;
        }
    }
    printf("Wrong Values");

    return 0;

}