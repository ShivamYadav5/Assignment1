// Write a program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
#include<stdio.h>

int main(){
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No.: 16\n");
    printf("Q2: Program to get the perimeter and area of a circle of a rectangle with height of 7 and width of 5 inches.");
    
    int l =5 , b = 7;
    int per = 2*(l+b);
    int area = l*b;
    printf("Perimeter: %d\n",per);
    printf("Area: %d\n",area);
    return 0;
}