// this function is used to understand how i create my first tree 
#include <stdio.h>
#include <stdlib.h>
// this is use for creating tree
struct Node
{
    struct Node* left_child;
    int data;
    struct Node* right_child;
};
// this queue is used store the address of all the tree
struct queue
{
   struct Node* p;
   struct queue* next; 
};
struct queue* enqueue(struct Node* p,struct queue* q)
{
    struct queue *t;
    struct queue *r;
    struct queue *temp=q;
    // // this is reason why we have to give return pointer also don't write
    // struct queue *last; //to avoid the unaessary loop
    t = (struct queue *)malloc(sizeof(struct queue));
    t->next=NULL;
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->p = p; //here tree pointinf is done
        if (q == NULL)
            {
                q=t;
                q->next=NULL;
            }
        else
        {
            while (temp->next)
            {
              temp=temp->next;    
            }
            temp->next=t;
        }
    }
    r=q;
    return r;
}
// this function deleting the dequeue
struct Node* dequeue(struct queue* q1)
{
     struct Node *r;
    struct Node *t;
    if (q1==NULL)
        printf("Queue is Empty\n");
    else
    {
        r=q1->p;
        t=q1->p;
        q1=q1->next;
        free(t);
    }
    return r;
}
void create(struct Node* root)
{

} 
int main()
{
    // this is creation of tree only for understanding and checking of functions
    struct Node *t1;
    struct Node *t2;
    struct Node *t3;
    struct Node *t4;

    t1=(struct Node*) malloc(sizeof(struct Node));
    t3=(struct Node*) malloc(sizeof(struct Node));
    t2=(struct Node*) malloc(sizeof(struct Node));
    t4=(struct Node*) malloc(sizeof(struct Node));
    t1->data=65;
    t2->data=5;
    t4->data=55;
    t3->data=75;

// this is type of list which store the address of all tree which is created 
    struct queue q1;
    q1.p=t1;
    struct queue *q2;
    q2=NULL;

    //only in fisrt case you have save q2 because you are giving by value 
      q2=enqueue(t1,q2); //this is imp
       enqueue(t2,q2);
       enqueue(t3,q2);
       enqueue(t4,q2);
    
    for (int i =1 ; i <5; i++)
    {
        printf("%d ",q2->p->data);
        q2=q2->next;
    }
    return 0;
}