#include <stdio.h>
#include <malloc.h>

struct stack
{
    int *arr;
    int size;
    int top;
};

int isFull(struct stack *q)
{
    if (q->top == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *q)
{
    if (q->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *q, int n)
{
    if (isFull(q))
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        q->arr[++q->top] = n;
    }
}

void pop(struct stack *q)
{
    if (isEmpty(q))
    {
        printf("Stack Underflow.\n");
    }
    else
    {
        (q->top)--;
    }
}

int stack_top(struct stack *q)
{
    if (isEmpty(q))
    {
        printf("Stack UnderFlow\n");
        return -9999;
    }
    else
    {
        return q->arr[q->top];
    }
}

int stack_bottom(struct stack *q)
{
    if (isEmpty(q))
    {
        printf("Stack UnderFlow\n");
        return -9999;
    }
    else
    {
        return q->arr[0];
    }
}

int peek(struct stack *q, int deep)
{
    int i = q->top;
    while (deep > 1)
    {
        i--;
        deep--;
    }
    return q->arr[i];
}

void traverse(struct stack *q)
{
    int i = q->top;
    while (i != -1)
    {
        printf("%d ", q->arr[i--]);
    }
    printf("\n");
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the length of stack: ");
    scanf("%d", &s->size);
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;

    stack_top(s);
    stack_bottom(s);

    pop(s);
    traverse(s);

    push(s, 34);
    push(s, 12);
    push(s, 45);
    push(s, 3);

    traverse(s);
    printf("%d\n", peek(s, 2));
    pop(s);
    pop(s);

    traverse(s);

    stack_top(s);
    stack_bottom(s);

    return 0;
}