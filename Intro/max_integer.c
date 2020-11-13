#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter A\n");
    scanf("%d", &a);

    printf("Enter B\n");
    scanf("%d", &b);

    printf("Enter c\n");
    scanf("%d", &c);

    int max = a;

    if( max < a){
        max = a;
    }
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    printf("MAX : %d", max);
    return 0;
}