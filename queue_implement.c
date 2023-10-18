#include <stdio.h>
#include <malloc.h>

struct queue
{
    int *arr;
    int f;
    int r;
    int size;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int n)
{
    if (isFull(q))
    {
        printf("No more space in the queue.\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = n;
    }
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("The queue is empty at the moment.\n");
        return -9999;
    }
    else
    {
        q->f = q->f + 1;
        return q->arr[q->f];
    }
}

void queue_traversal(struct queue *q)
{
    int i = q->f;
    while (i < q->r)
    {
        printf("%d ", q->arr[++i]);
    }
    printf("\n");
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter the size of the queue: ");
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size*sizeof(int));
    q->f = -1;
    q->r = -1;

    // Operations on the formed queue
    printf("%d", dequeue(q));
    queue_traversal(q);

    enqueue(q, 45);
    enqueue(q, 34);
    enqueue(q, 8);

    queue_traversal(q);
    printf("%d\n", dequeue(q));
    queue_traversal(q);

    enqueue(q, 14);
    queue_traversal(q);

    return 0;
}