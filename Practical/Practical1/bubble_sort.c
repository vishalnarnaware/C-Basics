#include<stdio.h>

void swap(int *, int *);
void bubble(int *, int);
void display(int *, int);
int main()
{
    int arr[100], i, siz;
    printf("Program Author: Vishal Narnaware");
    printf("\nEnter the size of array: ");
    scanf("%d", &siz);
    for(i=0; i<siz; i++)  {
        printf("\nEnter element %d :", i+1);
        scanf("%d", &arr[i]);
    }
    bubble(arr, siz);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int arr[], int siz)
{
    int i, j;
    for(i=0; i<siz-1; i++)  {
        for(j=0; j<siz-1-i; j++)    {
            if(arr[j] > arr[j+1])   {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    display(arr, siz);
}
void display(int *arr, int siz)
{
    int i;
    printf("\n");
    for(i=0; i<siz; i++) {
        printf("%d ", arr[i]);
    }
}
