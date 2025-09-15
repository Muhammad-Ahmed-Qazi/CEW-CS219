// Write a C program that accepts an employee's ID, total hours worked in a month, and the amount received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_id;
    float monthly_hrs, amount_pr_hr, salary;

    // Getting inputs from the user
    printf("Employee's ID: ");
    scanf("%d", &emp_id);
    printf("Total hours worked this month: ");
    scanf("%f", &monthly_hrs);
    printf("Amount received per hour: $");
    scanf("%f", &amount_pr_hr);

    // Calculating salary
    salary = amount_pr_hr * monthly_hrs;

    // Printing salary
    printf("\nSalary for Emp. ID %d: $%.2f\n", emp_id, salary);

    return 0;
}