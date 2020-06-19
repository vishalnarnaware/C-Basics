#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("---BEFORE SWAP---");
    printf("\nValue of a : %d", a);
    printf("\nValue of b : %d", b);

    swap(&a, &b);

    printf("\n---AFTER SWAP---");
    printf("\nValue of a : %d", a);
    printf("\nValue of b : %d", b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
