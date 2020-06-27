//Write a program that reads number until a negative number is read
//and prints the number of values read, the largest values,
//smallest value and the range
#include<stdio.h>

int read(int *);
void display(int *, int);

int main()
{
    int arr[100];
    int i, size;
    size = read(arr);
    display(arr, size);

    return 0;
}

int read(int *ptr)
{
    int num=1, size=-1;
    while(num>=0)    {
        printf("\nEnter any number: ");
        scanf("%d", &num);
        *ptr = num;
        ptr++;
        size++;
    }
    return size;
}

void display(int *ptr, int size)
{
    int i;
    int min=*ptr, max=*ptr;
    printf("\nEntered numbers: \n");
    for(i=0; i<size; i++)   {
        printf("%d ", *ptr);
        if(min > *ptr)  {
            min = *ptr;
        }
        if(max < *ptr)  {
            max = *ptr;
        }
        ptr++;
    }

    printf("\nNumber of values read: %d", size);
    printf("\nSmallest element: %d \t Largest element: %d \t Range: [%d, %d]", min, max, min, max);
}
