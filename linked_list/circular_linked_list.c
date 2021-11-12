#include <stdio.h>
#include <stdlib.h>
// self referential structur
struct Node
{
    int data;
    struct Node *next; //this statement become self referential structur
} *first = NULL;       //this is structure pointer created globally
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
        last->next = t; //here my first ka next is changed
        last = t;
    }
    t->next = first;
}
void Display(struct Node *p)
{
    static int flag = 0;
    if (p != first || flag == 0)
    {
        flag = 1;
        printf("%d ", p->data);
        Display(p->next);
    }
}
//inserting element in circular linked list
void insert(int position, struct Node *p, int data)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;
    if (position == 0)
    {
        while (p->next != first)
        {
            p = p->next;
        }

        t->next = first;
        p->next = t; //this statement make my node as last node
        // t->next=first;
        // return t;
    }
    else
    {
        for (int i = 0; i < position - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
// DELETE MY NODE 
// here my linked node start from 0th index 0 1 2 3 4 
void delete (struct Node *p, int position)
{
    struct Node *q=p->next;    
    if (position == 0)
    {
        
    }
    else
    {
        for (int i = 0; i < position-2; i++)
        {
            p=p->next;
            q=q->next; 
        }
        p->next=q->next;
        free(q);
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    // zero th position make my last node
   //  insert(2, first, 1000); //index mens nth element position+1
    delete(first,5);         //here nth position is deleted
    Display(first);
    return 0;
}