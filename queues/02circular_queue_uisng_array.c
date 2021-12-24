// diffrence in circular queue is only the enqueue and dequeue funntion is diffrent way
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
// here the increment of pointer is in modulus way so it cover the circular case also
void enqueue(struct queue *a, int x)
{
    
    if ((a->rear+1)% a->size == a->top)
    {
        printf("Queue is Full");
    }
    else
    {
        // incrementing of pointer 
        a->rear=((a->rear+1)% a->size);
        a->q[a->rear]=x; //storing the value in the array
    }
    
}
// this is use to create the queue this is not runing
// if size is n then element is stored is n-1
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
    for (int i = 0; i < q1->size-1; i++)
    {
        printf("Enter the value of queues:");
        scanf("%d", &x);
        enqueue(q1, x);
    }
    return q1;
}

int dequeue(struct queue *q)
{ 
    int x=-1;
    if(q->top==q->rear)
    {
        printf("Queue is Empty!");
    }
    else
    {
        q->top=((q->top+1)%q->size);
        x=q->q[q->top];
    }
    return x;
}
void Display(struct queue *q1)
{
    int i=(q1->top+1)%q1->size; //because q1.top is pointing on -1
    printf("\nQueues values are:");
   do
   {
       printf("%d ",q1->q[i]);
       i=(i+1)%q1->size;         //this is done because we have to consider the circular  
   } while (i != (q1->rear+1)%q1->size);//this condition falls when my pointer goes to second revolution
   
   
}
int main()
{
    struct queue *q1;
    q1 = create(q1);
    dequeue(q1);
    enqueue(q1,1);
    Display(q1);
}