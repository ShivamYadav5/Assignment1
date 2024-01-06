#include<stdio.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No: 16\n");
    printf("Q5:Program to calculate Product of two integer number given by the user.\n");  
    // Decleration of Variables Used in this Program.
    int num1,num2,product;

    // Taking two integer value as input from the user to Multiply them.
    printf("Enter the First Number which you want to add: \n");
    scanf("%d",&num1);
    printf("Enter the Second Number which you want to add: \n");
    scanf("%d",&num2);

    //Multiplying two integer value and printing on the console. 
    product=num1*num2;
    printf("Product of %d * %d = %d",num1,num2,product);

}