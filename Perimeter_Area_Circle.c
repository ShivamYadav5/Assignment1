#include<stdio.h>

void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No.: 16\n");
    printf("Q3:Program to get the perimeter and area of a circle.\n");

    // Decleration of Variables Used in this Program.
    int r=5;
    float per,area;
    const float pi = 3.14;
    // Taking value of radius of a circle as the input from the user.
    // printf("Enter the radius of a circle: \n");
    // scanf("%d",&r);
    // calculating perimeter and area of a circle.
    per = 2*pi*r;
    area = pi*r*r;
    // printing perimeter and area of a circle.
    printf("The perimeter of a circle is %.2f.\n",per);
    printf("The area of a circle is %.2f.\n",area);

}