#include <stdio.h>
#include <stdlib.h>
// self referential structur
struct Node
{
    int data;
    struct Node *next;   //this statement become self referential structur 
} *first = NULL;          //this is structure pointer created globally
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;                                //here my first ka next is changed
        last = t;                                      
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int find_middle(struct Node* p)
{   struct Node *q=p;
    while (p!=NULL)
    {
        p=p->next;
        if(p!=NULL){
        p=p->next;
        }
        if (p)
        {
            q=q->next;
        }
        
    }
    printf("Your middle element is %d\n",q->data);
    return q->data;
    
}
int main()
{
    int a[10]={10,1,12,5,1,12,2011,2,210};
    create(a,8);
    int b=find_middle(first);
    Display(first);
}