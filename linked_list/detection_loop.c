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
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
// here time complexity is order of n. T(n)=O(n)
//it is more for some case by using hash table we reduce time
int has_cycle(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = p->next;
    while (p != q)
    {
        p = q;
        q = q->next;
        if (q == NULL)
        {
            printf("\nNot repeating cycle");
            return 0;
        }
    }
    printf("\nrepeating cycle");
    return 1;
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    Display(first);
    has_cycle(first);
    return 0;
}