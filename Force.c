 // Write a C program to calculate the force of attraction between two objects using Newton's Law of Gravitation.
#include<stdio.h>
#include<math.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Shivam Kumar Yadav\n");
    printf("Roll No: 16\n");
    printf("Q9:Program to calculate force of attraction between two objects.\n"); 

    
    int m1,m2,d;
    double force;
    // double p = pow(10,-11);
    const double G = 6.67e-11;
    // printf("The value of G: %g\n",G);
    // Request to Please enter mass atleast or greater then a 10 thousand otherwise it gives 0.0000N value.
    printf("Enter the Mass of first object: ");
    scanf("%d",&m1);
    printf("Enter the mass of second object: ");
    scanf("%d",&m2);
    printf("Enter the distance between two objects: ");
    scanf("%d",&d);

    force=(G*m1*m2)/(d*d);

    printf("Force of attraction between two object: %lf N",force);
}