#include<stdio.h>


int main()
{
    int number1, number2;

    printf("Enter the number 1");
    scanf("%d", &number1);

    printf("Enter the number 2");
    scanf("%d", &number2);

    if(number1 > number2)
    {
        if (number1%number2 == 0)
        {
            printf("Multiplied!!");
        } 
        else
        {
            printf("Not Multiplied");
        }
        
    } else
    {
        if (number2%number1 == 0)
        {
            printf("Multiplied!!");
        } 
        else
        {
            printf("Not Multiplied!!");
        }
        
    }
    return 0;
    
}