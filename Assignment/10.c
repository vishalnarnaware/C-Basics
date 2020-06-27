//Write a C Program to print the sum of cube of digits of a number
//JUST TO BE CLEARER IT'S WRITTEN 'CUBE' IN QUESTION.
//Therefore new example should be (n=123, sum = 1+8+27 = 36)
#include<stdio.h>

int sum_of_cubes(int);
int cube(int);

int main()
{
    long int num, sum;
    printf("Enter any number: ");
    scanf("%d", &num);
    sum = sum_of_cubes(num);
    printf("\nSum is: %d", sum);
    return 0;
}

int sum_of_cubes(int n)
{
    int arr[10];
    int rem, quo;
    int i, j=0;
    int sum=0, c;

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
        c = cube(arr[i]);
        sum += c;
    }

    return sum;
}

int cube(int n)
{
    return n*n*n;
}
