#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
	struct Node* temp = *head_ref, *prev;
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		free(temp);
		return;
	}
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) return;
	prev->next = temp->next;

	free(temp);
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}

int main()
{
	struct Node* head = NULL;
    int var, n, i;
    printf("\n Program Author: Vishal Narnaware");
    printf("\n Branch: Artificial Intelligence Engineering");
    printf("\n Section: A \t Semester: III");
    printf("\n Roll Number: 63");
    printf("\n Enter size of list: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)  {
        printf(" Enter element %d: ", i+1);
        scanf("%d", &var);
        push(&head, var);
    }

	printf(" Created Linked List: ");
	printList(head);
    printf("\n Enter element to be deleted: ");
    scanf("%d", &var);
	deleteNode(&head, var);
	printf("\n Linked List after Deletion of %d: ", var);
	printList(head);
	return 0;
}
