#include<stdio.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No: 16\n");
    printf("Q6:Program to get and print id and salary of an employee.\n");  

    int employee_id, total_worked_hours, amt_per_hour;

    printf("Enter Employee id:");
    scanf("%d",&employee_id);
    printf("\nEnter Total Worked Hours of Employee in a month:");
    scanf("%d",&total_worked_hours);
    printf("\nEnter the Amount Received by an Employee per hour:");
    scanf("%d",&amt_per_hour);

    printf("Employee id: %d\n",employee_id);
    float total_salary=total_worked_hours*amt_per_hour;
    printf("Salary: %.2f",total_salary);
}