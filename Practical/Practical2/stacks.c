#include <stdio.h>
#define MAX 5   // maximum 5 elements can be inserted

void push(int stack[MAX], int *top) {
    // function to insert element into Stack
    if (*top >= MAX) {
        printf("\n\tOverflow! Resetting Stack...");
        *top = 0;       // reset top to 0
    }
    else    {
        printf("\nEnter element: ");
        scanf("%d", &stack[*top]);
        *top += 1;      // increment top by 1
    }
}
void pop(int stack[MAX], int *top)  {
    // function to delete element from Stack
    if(*top <= 0)   {
        printf("\nUnderflow! Enter elements in Stack...");
    }
    else    {
        *top -= 1;      // decrement top
        printf("\nPopping off element: %d", stack[*top]);   // display deleted
    }
}
void check()    {
    // function to check if given number is palindrome or not
}
void display()  {
    // function to show elements of Stack
}

int main(int argc, char const *argv[]) {
    int i, top=0, ch;
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
            case 1: push(stack, &top);
                    break;
            case 2: pop(stack, &top);
                    break;
            case 3: check();
                    break;
            case 4: display();
                    break;
            case 5: return 0;                       // No need to write break
            default: printf("\nWrong Choice!!! \t Enter between 1 to 5");
                    break;
        }
    }
    return 0;
}
