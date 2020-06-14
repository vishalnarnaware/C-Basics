/* WAP in C to display octal, hexa and binary form of the number */
//Author: Vishal Narnaware
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, a[10], i;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("\nOctal form: %o", num);
    printf("\nHexa form: %x", num);
    for(i=0;num>0;i++)
    {
        a[i]=num%2;
        num=num/2;
    }
    printf("\nBinary form: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
