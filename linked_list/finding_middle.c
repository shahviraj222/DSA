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
//finding middle element there are three way 
//1]finding length of list and n/2 print that node using loop
//2]using stack of all address of node we calculate total address and then pop of 1/2 of the element in this        methode we scan the list once and then scan address of stack
//3]created below using two pointer one is dubble of other if first complete then other at 1/2 of list

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
    int a[10]={10,1,12,5,1,12,2011,2,210,50};
    create(a,10);
    int b=find_middle(first);
    Display(first);
}