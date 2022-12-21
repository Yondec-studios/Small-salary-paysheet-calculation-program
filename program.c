#include <stdio.h>

int main()
{
    float regular_hours;
    float overtime;
    float reg_rate = 250.00;
    float overtime_rate = 300.00;
    float regular_total;
    float overtime_total;
    float net_salary;

    printf("\n\n\n\n------ WELCOME -----\n\n\n");
    printf("Enter the regular hours:\t");
    scanf("%f", &regular_hours);

    printf("Enter the over time hours:\t");
    scanf("%f", &overtime);

    // CALCULATION
    regular_total = reg_rate * regular_hours;
    overtime_total = overtime * overtime_rate;
    net_salary = regular_total + overtime_total;

    printf("\n\n\n\t\t\t--- PAYSHEET ----\n\n");
    printf("\nRegular Salary  = %.2f x %.1f  = \t%.2f", reg_rate, regular_hours, regular_total);
    printf("\nOvertime Salary = %.2f x %.1f  = \t%.2f", overtime_rate, overtime, overtime_total);
    printf("\nNet Salary \t\t\t= \t%.2f", net_salary);

    printf("\n\n\nThank you\n\n\n");

    return 0;
}