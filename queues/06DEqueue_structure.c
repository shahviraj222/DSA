#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL; //only you have to change this put this into main function by creating the object 
// and also make all function to take the as struct Node* pointer

// adding element in list from the back of queues
void enqueue_back(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

// deleting element from front of list
int dequeue_front()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        // automatically first node delete wala case is covered
        front = front->next;
        free(t);
    }
    return x;
}

// deleting element from back of list
int dequeue_back()
{
    int x = -1;
    struct Node *t=front;
    struct Node *q=front->next;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        // time complexity=o(n)
      while (q!=rear && q!=NULL)
      {
          q=q->next;
          t=t->next;
      }
      t->next=NULL;
      //this condition belongs to delete first node or head node
      if(t==front && q==NULL)
      {
          front=rear=NULL;
          x=t->data;
          free(t);
      }
      else
      {
          rear=t;
          x=q->data;
          free(q);
      }
       
    }
    return x;
}

void Display()
{
    struct Node *p = front;
    if(p==NULL)
    {
        printf("EMPTY");
    }
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    enqueue_back(10);
    enqueue_back(20);
    enqueue_back(30);
    Display();
    return 0;
}