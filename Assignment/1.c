//Write a C program to print the first 100 natural numbers
#include<stdio.h>

int main()
{
    int num = 1;
    printf("First 100 Natural numbers: \n");
    for( ; num<=100; num++) {
        printf("%d ", num);
    }
    return 0;
}
