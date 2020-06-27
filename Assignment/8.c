//Write a C program to find the sum of digits of the entered number.
//(n=123 , sum=1+2+3=6)
#include<stdio.h>

int sum_of_digits(int);

int main()
{
    long int num, sum;
    printf("Enter any number: ");
    scanf("%d", &num);
    sum = sum_of_digits(num);
    printf("\nSum is: %d", sum);
    return 0;
}

int sum_of_digits(int n)
{
    int arr[10];
    int rem, quo;
    int i, j=0;
    int sum=0;

    if(n<0) {
        n *= -1;
    }
    for(i=0; n!=0; i++) {
        rem = n%10;
        quo = n/10;
        n = quo;
        arr[i] = rem;
        j++;
    }

    for(i=0; i<j; i++)  {
        sum += arr[i];
    }

    return sum;
}
