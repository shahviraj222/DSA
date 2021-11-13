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
int main()
{
    int a[10]={4,51,6,5,51,54,514,45,4104,44};
    create(a,10);
    Display(first);
    return 0;
}