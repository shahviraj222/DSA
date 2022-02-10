#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // structer type pointer is formed like int *a;integer type pointer
};
void traversin(struct node *ptr) // we ARE USING VALUE OF VARIABLE
{
    printf("my data in link list\n"); // traversing of linked list
    while (ptr != NULL)               // run still the last element to reach..
    {
        printf("%d ", ptr->data); // using liked list data..
        ptr = ptr->next;          // changing the ptr data.pointing to the next nodee
    }
}
// case1:
struct node *deletion_at_first(struct node *head)
{
    struct node *ptr;
    struct node *p = head;
    ptr = head->next; // for pointing new head
    free(p);          // for clearing data saving value
    return ptr;
}
//case2:

struct node *deletion_at_index(struct node *head, int index) // alwas ',' in between the in function
{
    struct node *ptr = head;     //pointing first node
    struct node *q = head->next; //pointing second node
    int i = 0;
    //finding deleting node and save it in q
    // if i want to delete my first node than i have to do various step
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next; // linking to next node
    free(q);
    return head;
}
//case3:
struct node *deletion_at_last(struct node* head)
{
    struct node *p = head;         // pointing first node
    struct node *q = head->next; //pointing next node
    // finding last and second last node
    while (q->next != NULL)       // ensure that q ka next jo hai wo null hoga
    {
        q = q->next;            //last node save
        p = p->next;                
    }
    p->next = NULL;                 

    free(q);
    return head;
}
int main()
{
    int a;
    struct node *head;
    struct node *second;
    struct node *third;

    // all memory are stored in heap layout

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // creating first node

    head->data = 455;
    head->next = second; // pointing to next node giving address of second node

    // creating second node

    second->data = 50;
    second->next = third;

    // the last node or terminating node or last node

    third->data = 10;
    third->next = NULL; // here is end of my node or liked list
    printf("before deleting linked list");
    traversin(head);
    printf("\nafter the deleting element");
    // head = deletion_at_first(head);

    //head=deletion_at_index(head,1);

    head = deletion_at_last(head);
    traversin(head);
    return 0;
}