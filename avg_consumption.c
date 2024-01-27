// Write a Program to calculate a bike's average consumption from the given total distance(integer value) travelled (in km) and spent fuel (in liters,float number 2 decimal points).

#include<stdio.h>
int main()
{
    int total_distance,spent_fuel;
    printf("Enter the total distance travelled in Km:");
    scanf("%d",&total_distance);
    printf("Enter the total fuel spent in liter:");
    scanf("%d",&spent_fuel);
    float result = (float) total_distance/spent_fuel;
    printf("Average consumption of bike is: %.2f km/l",result);
    return 0;
}
