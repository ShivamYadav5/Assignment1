// Write a C program that accepts an employee's ID, total worked hours in a month and the amount of he received per hour.Print the ID and salary (with two decimal places) of the employee for a particular month.
#include<stdio.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No: 16\n");
    printf("Q6:Program to get and print id and salary of an employee.\n");  

    int employee_id, total_worked_hours, total_worked_days, amt_per_hour;

    printf("Enter Employee id:");
    scanf("%d",&employee_id);
    printf("\nEnter Total Working days of an Employee in a month:");
    scanf("%d",&total_worked_days);
    printf("\nEnter Total Working hours in a days of an Employee:");
    scanf("%d",&total_worked_hours);
    printf("\nEnter the Amount Received by an Employee per hour:");
    scanf("%d",&amt_per_hour);

    printf("Employee id: %d\n",employee_id);
    float total_salary=total_worked_days*total_worked_hours*amt_per_hour;
    printf("Salary:Rs. %.2f",total_salary);
}