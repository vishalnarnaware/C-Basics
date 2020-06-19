//Write a C program to print if the entered number is even or odd
#include<stdio.h>

void even_or_odd(int);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    even_or_odd(num);
    return 0;
}

void even_or_odd(int num)
{
    if(num%2 == 0)  {
        printf("Entered number %d is 'EVEN'", num);
    }
    else    {
        printf("Entered number %d is 'ODD'", num);
    }
}
