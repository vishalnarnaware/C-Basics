//Write a C program to find the sum of odd numbers and even numbers of n natural numbers
#include<stdio.h>

int even_or_odd(int);

int main()
{
    int n, i;
    int even_sum = 0, odd_sum = 0;
    printf("Enter number n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        if(even_or_odd(i))  {
            even_sum += i;
        }
        else    {
            odd_sum += i;
        }
    }
    printf("\nSum of even numbers: %d", even_sum);
    printf("\nSum of odd numbers: %d", odd_sum);

    return 0;
}

int even_or_odd(int num)
{
    if(num%2 == 0)  {
        return 1;
    }
    else    {
        return 0;
    }
}
