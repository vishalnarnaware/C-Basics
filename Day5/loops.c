#include<stdio.h>

int main()
{
    int i;

    for(i=0; i<10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    while(i>0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    do  {
        printf("%d ", i);
        i++;
    }while(i<10);
    return 0;
}
