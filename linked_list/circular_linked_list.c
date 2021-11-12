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
    t->next=first;
}
void Display(struct Node *p)
{
    static int flag=0;
    if (p!= first || flag==0)
    {
        flag=1;
        printf("%d ",p->data);
        Display(p->next);
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    Display(first);
    return 0;
}