#include <stdio.h>

int main()
{
    int id, work_hours, pay_per_hour;
    int salary;

    printf("Enter the Employee ID\n");
    scanf("%d", &id);

    
    printf("Enter the Work hours\n");
    scanf("%d", &work_hours);

    
    printf("Enter the Pay per hour\n");
    scanf("%d", &pay_per_hour);

    salary = work_hours * pay_per_hour;
    printf("Employee ID: %d\n", id);
    printf("Salary: %d US$", salary);

    return 0;
}