#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSum %d + %d: %d", a, b, a+b);
    printf("\nDifference %d - %d: %d", a, b, a-b);
    printf("\nProduct %d * %d: %d", a, b, a*b);
    printf("\nQuotient %d / %d: %d", a, b, a/b);
    printf("\nRemainder %d modulo %d: %d", a, b, a%b);
    return 0;
}
