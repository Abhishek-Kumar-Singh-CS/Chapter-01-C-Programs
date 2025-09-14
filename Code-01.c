/* This is a program to calculate the area of a square based on the number input by the user.
This is a formula. [A = S * S] */

#include<stdio.h>

int main()
{
    int side;
    printf("Enter the side value : ");
    scanf("%d",&side);

    int area = side * side;
    printf("The area of a square is : %d",area);
    return 0;
}
