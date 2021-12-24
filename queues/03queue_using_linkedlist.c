// this program is not runing it give error
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// check point 1
struct queue
{
    struct Node* front;
    struct Node* rear;   
};

struct queue* enqueue(struct queue *a1,int x)
{
    struct Node* ne=(struct Node*)malloc(sizeof(struct Node));
    ne->data=x;
    ne->next=NULL;//when heap becomes full then queue is also Full
    if(ne==NULL)
    {
        printf("Queue is Full");
    }
    else{
    // check point 2
    if(a1->front==NULL)
    {
        a1->front=a1->rear=ne;
    }
    else
    {
        a1->rear->next=ne;
        a1->rear=a1->rear->next;
    }
    }
    return a1;
}
int dequeue(struct queue *a1)
{
    int x;
    struct Node*p;
    if(a1->front==NULL)
    {
        printf("Queue is Empty!");
    }
    else
    {
        p=a1->front;
        a1->front=a1->front->next;
        x=p->data;
        free(p);
    }
    return x;
}
void Display(struct queue *a1)
{
     printf("Values of queues:");
    struct Node *temp = a1->front;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
   
}
int main()
{
    struct queue *q1=NULL;
    int n,t;
    printf("Enter the total element in queue:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       printf("Enter the value of queue:");
       scanf("%d",&t);
       q1=enqueue(q1,t);
    }
    Display(q1);

    return 0;
}