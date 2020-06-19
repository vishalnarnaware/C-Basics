//Write a C program to print a pyramid of stars.
#include<stdio.h>

void pattern(int);

int main()
{
    int size;
    printf("Enter size of pyramid: ");
    scanf("%d", &size);
    pattern(size);
    return 0;
}

void pattern(int size)
{
    int i, j;
    int sp = size/2;
    int loop = sp+1;
    for(i=0; i<size; i++)   {
        for(j=0; j<loop; j++)   {
            if(j<sp)   {
                printf("  ");
            }
            else    {
                printf("* ");
            }
        }
        loop += 1;
        printf("\n");
        sp -= 1;
        if(loop > size)    {
            break;
        }
    }
}
