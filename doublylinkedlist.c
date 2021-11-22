#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void printList(struct Node* node)
{
    struct Node* temp;
	
    printf("\nIn Forward Direction :\n");
    while (node != NULL)
    {
		
        printf(" %d\t ", node->data);
		temp = node;
		node = node->next;
    }
    
    printf("\nIn Reverse Direction :\n");
    while (temp != NULL)
    {
		
        printf(" %d\t ", temp->data);
		temp = temp->prev;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fivth = NULL;
    struct Node* sixth = NULL;
    struct Node* seventh = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fivth = (struct Node*)malloc(sizeof(struct Node));
    sixth = (struct Node*)malloc(sizeof(struct Node));
    seventh = (struct Node*)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 4;
    fourth->next = fivth;

    fivth->prev = fourth;
    fivth->data = 5;
    fivth->next = sixth;

    sixth->prev = fivth;
    sixth->data = 6;
    sixth->next = seventh;

    seventh->prev = sixth;
    seventh->data = 7;
    seventh->next = NULL;

    printList(head);

    return 0;
}