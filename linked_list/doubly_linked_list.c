#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node* pre;
    int data;
    struct Node* next;
}*first;
void create(int a[],int n)
{
    struct Node* t;
    struct Node* last;
    first=(struct Node*) malloc(sizeof(struct Node));
    first->data=a[0];
    first->pre=first->next=NULL;
    last=first;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        last->next=t;
        t->pre=last;
        t->next=NULL;
        last=t;

    }
    
}
void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ",p->data);
        p=p->next;
    }

}
void insert(int data,int p)
{
    struct Node*q;
    struct Node *t=(struct Node*) malloc(sizeof(struct Node));
    if(p==0)
    {
        first->pre=t;
        t->next=first;
        t->data=data;
        t->pre=NULL;
        first=t;
    }
    else
    {
        q=first;
        int i=0;
        while (i<p-1)
        {
            i++;
            q=q->next;
        }
        t->next=q->next;
        t->pre=q;
        q->next=t;
        t->data=data;

    }
}
// deleting doubly linked list using one pointer because one node contains it's previouse and next node address
//node start from 0,1,2.. index
void delete(struct Node *p,int po)
{
    if(po==0)
    {
        first=first->next;
        first->pre=NULL;
        free(p);
    }
    //here we delete doubly linked list by using ONLY ONE POINTER
    else
    {
        for (int i = 0; i <po; i++)
        {
            p=p->next;
        }
        p->pre->next=p->next;        //here i am saying that my perivious node ka next point to next node
        if(p->next)
        {
        p->next->pre=p->pre;    
        }      
        free(p);
        
    }
}
//we have to inter change next to pre
void reverse(struct Node *p)
{
    struct Node *temp;
    while (p!=NULL)
    {
        //inter change process done here 
        temp=p->next;     
        p->next=p->pre;
        p->pre=temp;
        p=p->pre;              //pointing to next node
        //pointing first to last node 
        if (p!=NULL && p->next==NULL)         // here one extra case run if we don't write p!=NULL
        {
            first=p;
        }
        
    }
    
}
int main()
{
    int a[10]={4,51,6,5,51,54,514,45,4104,44};
    create(a,10);
    // insert(500,2);       //taking data and index number
    delete(first,9);        //taking data and index number not position    
    reverse(first);
    Display(first);
    return 0;
}