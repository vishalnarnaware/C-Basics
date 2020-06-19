//Write a C program to print the factorial of a number
#include<stdio.h>

int fact(int);

int main()
{
    long int num, factorial;
    printf("Enter value of num: ");
    scanf("%d", &num);
    if(num >= 0)    {
        factorial = fact(num);
        printf("Factorial of %ld is %ld", num, factorial);
    }
    else    {
        printf("Factorial is not defined for negative numbers!");
    }

    return 0;
}

int fact(int n)
{
    if(n<=1)    {
        return 1;
    }
    return n*fact(n-1);
}
