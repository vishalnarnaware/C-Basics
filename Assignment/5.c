//Write a C program to print the Fibonacci series
#include<stdio.h>

void fibonacci(int);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    long int num = 0;
    long int next = 1;
    long int sum = 0;
    int i;

    printf("\nFibonacci Series: \n");
    printf("%ld %ld ", num, next);
    for(i=2; i<n; i++)  {
        sum = num+next;
        num = next;
        next = sum;
        printf("%ld ", next);
    }
}
