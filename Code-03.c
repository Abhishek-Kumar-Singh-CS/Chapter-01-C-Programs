/* This program to calculates the perimeter of a rectangle using the number input by the user.
This is a formula. [P = (L + W) * 2] */

#include<stdio.h>
int main()
{
    int length;
    printf("Enter the length value : ");
    scanf("%d",&length);

    int width;
    printf("Enter the width value : ");
    scanf("%d",&width);

    int perimeter = (length + width) * 2;
    printf("The perimeter of a rectangle is : %d",perimeter);
    return 0;
}
