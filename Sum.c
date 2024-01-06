#include<stdio.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No: 16\n");
    printf("Q4:Program to calculate Sum of two integer number given by the user.\n");  
    // Decleration of Variables Used in this Program.
    int num1,num2,sum;

    // Taking two integer value as input from the user to sum them.
    printf("Enter the First Number which you want to add: \n");
    scanf("%d",&num1);
    printf("Enter the Second Number which you want to add: \n");
    scanf("%d",&num2);

    //Adding two integer value and printing on the console. 
    sum=num1+num2;
    printf("Sum of %d + %d = %d",num1,num2,sum);

}