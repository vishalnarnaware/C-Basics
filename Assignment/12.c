//A perfect square is an integer which is the square of another integer.
//Write a program that reads
//a number and computes the first perfect square larger than this number.
#include<stdio.h>

int perfect_sq(int);

int main()
{
    int num, p_sq;
    printf("Enter any number: ");
    scanf("%d", &num);
    p_sq = perfect_sq(num);
    printf("First Perfect Square larger than %d: %d", num, p_sq);

    return 0;
}

int perfect_sq(int n)
{
    int num=1;
    int square=1;
    while(n>=square) {
        square = num*num;
        num++;
    }
    return square;
}
