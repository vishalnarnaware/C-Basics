//Write a C program to find if the entered number is a palindrome
#include<stdio.h>

void palindrome(int);

int main()
{
    long int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}

void palindrome(int n)
{
    int arr[10];
    int rem, quo;
    int i, j=0;
    int forward, backward, flag = 0;

    for(i=0; n!=0; i++) {
        rem = n%10;
        quo = n/10;
        n = quo;
        arr[i] = rem;
        j++;
    }

    forward = 0;
    backward = j-1;
    for(i=0; i<j/2; i++) {
        if(arr[forward] != arr[backward])   {
            flag = 1;
        }
    }

    if(flag) {
        printf("\nNumber is not palindrome...");
    }
    else    {
        printf("\nNumber is palindrome.");
    }

}
