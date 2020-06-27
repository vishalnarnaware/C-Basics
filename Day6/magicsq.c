//INCOMPLETE
#include<stdio.h>

void print(int);

int main()
{
    int size;
    printf("Enter size of magic square (max 10): ");
    scanf("%d", &size);
    print(size);
    return 0;
}

void print(int size)
{
    int arr[10][10];
    int row, column;
    int i, j;
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++)   {
            arr[i][j] = 0;
        }
    }

    row = 0;
    column = size/2;

    for(i=1; i<=size*size; i++)  {
        again:  {
        if(row<0)   {
            row = size-1;
        }
        if(column>size-1)    {
            column = 0;
        }
        if(arr[row][column] == 0)  {
            arr[row][column] = i;
        }
        else
            if(arr[row][column] != 0)    {
                row += 2;
                column -= 1;
                goto again;
            }
        row -= 1;
        column += 1;
        }
    }
    printf("\nArray is: \n");
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++)   {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
