#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int top;
    int rear;
    int *q;
};
struct queue *create(struct queue *a)
{
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue));
    int x;
    printf("Enter your size of the queues:");
    scanf("%d", &q1->size);
    q1->rear = q1->top = -1;
    q1->q = (int *)malloc(sizeof(int) * q1->size);
    printf("Enter the value of queues one by one:");
    for (int i = 0; i < q1->size; i++)
    {
        printf("\nEnter the value of queues:");
        scanf("%d", &x);
        enqueue(q1, x);
    }
    return q1;
}
void enqueue(struct queue *a, int x)
{
    if (a->top == a->size - 1)
    {
        printf("Queues is Full");
    }
    else
    {
        a->rear++;
        a->q[a->rear] = x;
    }
}
Display(struct queue *q1)
{
    struct queue *temp;
    temp = q1;
    printf("Value of queues\n");
    for (int i = 0; i < q1->size; i++)
    {
        printf("%d ", q1->q[i]);
    }
}
int main()
{
    struct queue *q1;
    q1 = create(q1);
    Display(q1);
}