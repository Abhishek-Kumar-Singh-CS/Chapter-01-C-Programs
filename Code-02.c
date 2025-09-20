/* This is a program to calculate the area of a circle based on the number input by the user.
This is a formula. [A = P * R * R] */

#include<stdio.h>
int main()
{
    float pai = 3.14;

    float radius;
    printf("Enter the radius value : ");
    scanf("%f",&radius);

    float area = pai * radius * radius;
    printf("The area of a circle is : %f",area);
    return 0;
}
