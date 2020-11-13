#include<stdio.h>

int main()
{
    int distance, fuel;

    printf("Enter the distance covered\n");
    scanf("%d", &distance);

    printf("Enter the fuel consumed\n");
    scanf("%d", &fuel);

    float mileage; 
    mileage = (distance/fuel) * 1.00;

    printf("Average fuel consumption: %2f", mileage);

    return 0;
}
