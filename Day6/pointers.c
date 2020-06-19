#include<stdio.h>

int main()
{
    int num, *ptr;
    printf("Enter any value: ");
    scanf("%d", &num);
    ptr = &num;
    printf("\nValue of variable num: %d", num);
    printf("\nAddress of variable num: %d", &num);
    printf("\nValue of pointer ptr: %d", ptr);
    printf("\nAddress of pointer ptr: %d", &ptr);
    return 0;
}
