#include <stdio.h>
#define MAX 5

void push() {

}
void pop()  {

}
void check()    {

}
void display()  {

}

int main(int argc, char const *argv[]) {
    int i, top, ch;
    int stack[MAX];

    while(1)    {
        printf("\n------**MENU**------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Palindrome Check");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)  {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: check();
                    break;
            case 4: display();
                    break;
            case 5: return 0;
            default: printf("\nWrong Choice!!! \t Enter between 1 to 5");
                    break;
        }
    }
    return 0;
}
