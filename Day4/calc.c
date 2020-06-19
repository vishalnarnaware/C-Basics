#include<stdio.h>

int main()
{
    int a, b, ch, res;

    while(1)
    {
        printf("\n--------Main Menu--------");
        printf("\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Remainder \n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        if(ch == 6) {
            break;
        }
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);
        switch(ch)
        {
            case 1: {
                res = a+b;
                printf("\nAnswer is: %d", res);
                break;
            }
            case 2: {
                res = a-b;
                printf("\nAnswer is: %d", res);
                break;
            }
            case 3: {
                res = a*b;
                printf("\nAnswer is: %d", res);
                break;
            }
            case 4: {
                res = a/b;
                printf("\nAnswer is: %d", res);
                break;
            }
            case 5: {
                res = a%b;
                printf("\nAnswer is: %d", res);
                break;
            }
            default: {
                printf("Wrong choice!!");
            }
        }
    }
    return 0;
}
