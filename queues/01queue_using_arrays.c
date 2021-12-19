// implementing the queues using the array
#include <stdio.h>
#include <stdlib.h>
int x; //use for pop data
// here the structure of queue is design
struct queue
{
    int size; // size store the value of total element in queue
    int top;  //this is logical pointer it point's top of the queue
    int rear; // this is logical pointer it point's end of the queue or last element of queue
    int *q;   // this is integer type pointer to show the array which is physically created in the create function
};
void enqueue(struct queue *a, int x)
{
    if (a->top == a->size - 1)
    {
        printf("Queues is Full");
    }
    else
    {
        // increasing my pointer and then
        a->rear++;
        a->q[a->rear] = x; //storing the value inside the array
    }
}
// this is use to create the queue this is not runing
struct queue *create(struct queue *a)
{
    // the pointer points the memory inside heap
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue));
    int x;
    printf("Enter your size of the queues:");
    scanf("%d", &q1->size);
    q1->rear = q1->top = -1;                       //initializing the rear and top logical pointer
    q1->q = (int *)malloc(sizeof(int) * q1->size); //here array is created dyanamically and store pointing to my queues pointer
    printf("Enter the value of queues one by one:");
    // here all the values of queues is taken and pass to the enqueue function
    for (int i = 0; i < q1->size; i++)
    {
        printf("\nEnter the value of queues:");
        scanf("%d", &x);
        enqueue(q1, x);
    }
    return q1;
}

int dequeue(struct queue *q)
{ 
    if (q->top == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->top++;
        x = q->q[q->top];
    }
    return x;
}
void Display(struct queue *q1)
{
    struct queue *temp;
    temp = q1;
    temp->top++;
    printf("Value of queues\n");
    while (temp->top != q1->size)
    {
        printf("%d ", q1->q[temp->top]);
        temp->top++;
    }
}
int main()
{
    struct queue *q1;
    q1 = create(q1);
    dequeue(q1);
    printf("Q1=tep %d", q1->top);
    Display(q1);
}