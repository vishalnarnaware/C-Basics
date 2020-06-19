//Write a C program to find the sum of first n natural numbers
#include<stdio.h>

int main()
{
    int n, sum;
    printf("Enter last number: ");
    scanf("%d", &n);
    sum = (n*(n+1))/2;
    printf("\nSum of first %d natural numbers is %d.", n, sum);
    return 0;
}
