/* This program to calculates the cube of a number input by the user.
This is a formula. [C = N * N * N] */

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    int cube = number * number * number;
    printf("The cube of a number is : %d",cube);
    return 0;
}
