//WAP to interchange values of two variables
//Author: Vishal Narnaware
#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("\nEnter y: ");
    scanf("%d", &y);
    //Doing without third variable
    x = x+y;
    y = x-y;
    x = x-y;
    //Swapping done :)
    printf("\nAfter Swapping: ");
    printf("\nx = %d", x);
    printf("\ty = %d", y);
    return 0;
}
