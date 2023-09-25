#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert_between(struct Node *ptr, int n, int index)
{
    struct Node *new;
    int i=1;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = n;
    while(i != index-1)
    {
        ptr = ptr->next;
        i++;
    }
    new->next = ptr->next;
    ptr->next = new;

}

void insert_end(struct Node *ptr, int n)
{
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = n;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    new->next = NULL;
}

struct Node *insert_begin(struct Node *ptr, int n)
{
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = n;
    new->next = ptr;
    return new; 
}

void traverse_ll(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
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

    head = insert_begin(head, 1);
    traverse_ll(head);
    
    insert_between(head, 32, 2);
    traverse_ll(head);
    
    insert_end(head, 45);
    traverse_ll(head);

    return 0;
}