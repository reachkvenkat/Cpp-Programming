#include<stdio.h>
#include<math.h>


int main()
{
    int x1, x2, y1, y2;
    float distance;

    printf("Enter the x coordinate of point 1\n");
    scanf("%d", &x1);

    printf("Enter the x coordinate of point 2\n");
    scanf("%d", &x2);

    printf("Enter the y coordinate of point 1\n");
    scanf("%d", &y1);

    printf("Enter the y coordinate of point 2\n");
    scanf("%d", &y2);

    distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

    printf("Distance between two points: %.2f", distance);


    return 0;
}