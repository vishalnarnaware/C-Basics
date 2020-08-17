#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main(int argc, char const *argv[]) {
    struct Node* head = NULL;
    int temp, n, i;

    printf("\n Program Author: Vishal Narnaware");
    printf("\n Branch: Artificial Intelligence Engineering");
    printf("\n Section: A \t Semester: III");
    printf("\n Roll Number: 63");

    printf("\n Enter number of elements to be inserted: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)  {
        printf(" Enter element %d: ", i+1);
        scanf("%d", &temp);
        insert(&head, temp);
    }
    return 0;
}
