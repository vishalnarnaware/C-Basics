#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5   // maximum 5 elements can be inserted

void push(int stack[MAX], int *top, int ele) {
    // function to insert element into Stack
    if (*top >= MAX) {
        printf("\n\tOverflow! Resetting Stack...");
        *top = 0;       // reset top to 0
    }
    else    {
        stack[*top] = ele;
        *top += 1;      // increment top by 1
    }
}
int pop(int stack[MAX], int *top)  {
    // function to delete element from Stack
    if(*top <= 0)   {
        printf("\nUnderflow! Enter elements in Stack...");
        return -1;
    }
    else    {
        *top -= 1;      // decrement top
        return stack[*top];
    }
}
void check()    {
    // function to check if given number is palindrome or not
    char s[MAX];
    int stack[MAX];
    int i, flag=0, top=0, temp;
    printf("\nEnter any number: ");
    scanf("%s", &s);
    for (i=0; i<strlen(s); i++)    {
        temp = s[i];
        push(stack, &top, temp);
    }

    for (i=0; i<strlen(s)/2; i++)  {
        if (stack[i] != pop(stack, &top))   {
            flag = 1;
            break;
        }
    }
    if (flag == 1)  {
        printf("\nNumber isn't Palindrome");
    }
    else    {
        printf("\nNumber is Palindrome");
    }

}
void display(int stack[MAX], int *top)  {
    // function to show elements of Stack
    int i;
    printf("\nStack : ");
    for(i=0; i<*top; i++)   {
        printf("%d ", stack[i]);
    }
}

int main(int argc, char const *argv[]) {
    int i, top=0, ch, temp;
    int stack[MAX];

    while(1)    {       // Repeat again and again
        printf("\n------**MENU**------");           // The driving Menu
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Palindrome Check");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");            // Ask user for operation
        scanf("%d", &ch);                           // Get in ch
        switch(ch)  {                               // Driving block
            case 1: printf("\nEnter element: ");
                    scanf("%d", &temp);
                    push(stack, &top, temp);
                    break;
            case 2: temp = pop(stack, &top);
                    printf("\nPopped off element: %d", temp);   // display deleted
                    break;
            case 3: check();
                    break;
            case 4: display(stack, &top);
                    break;
            case 5: return 0;                       // No need to write break
            default: printf("\nWrong Choice!!! \t Enter between 1 to 5");
                    break;
        }
    }
    return 0;
}
