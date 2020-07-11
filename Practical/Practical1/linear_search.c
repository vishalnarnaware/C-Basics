#include<stdio.h>

int main()
{
    int arr[100];
    int i, n, search;
    printf("Enter number of Elements in the Array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)  {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to be searched: ");
    scanf("%d", &search);

    for(i=0; i<n; i++)  {
        if(arr[i] == search)    {
            printf("\nElement found at position %d", i+1);
            break;
        }
        else    {
            if(i == n-1)    {
                printf("\nElement not found!");
            }
        }
    }

    return 0;
}
