#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse_ll(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Data in the Node is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    fourth->data = 72;
    fourth->next = NULL;

    traverse_ll(head);

    return 0;
}