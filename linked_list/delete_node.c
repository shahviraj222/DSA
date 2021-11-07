#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// struct node *head;          //global structure is created for delete porpose only
// don't use for display and othere unwanted things because head change
void craet_node(struct node *temp, int a[])
{

    for (int i = 0; i < 10; i++)
    {
        // printf("runing");
        temp->next = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp = temp->next;
    }
    temp->next = NULL; //we have to assign the end of node
}
void display(struct node *temp)
{
    while (temp->next != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
// head is directly use because we want to delete node
int delete (struct node *head, int position)
{
    int x;
    struct node *p;
    struct node *q;
    p = head;
    q = head;
    if (position == 1)
    {
        head = head->next;
        x = p->data;
        free(p);
        // return head;       if you want to delete first then return head
    }
    else
    {
        for (int i = 0; i < position - 1; i++)
        {
            p = q;
            q = q->next;
        }
    }
    if (p)
    {
        p->next = q->next;
        x = q->data;
        free(q);
        return x;
    }
}
//if duplicate is side by side then it delete duplicates
void duplicate(struct node *p)
{
    struct node *q = p->next;
    while (q->next != NULL)
    {

        if (p->data == q->data)
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
}
int main()
{
    struct node *head;
    int a[10] = {66, 2, 23, 50, 62, 66, 66, 95, 95, 230};
    int data = 85, x;
    craet_node(head, a);
    x = delete (head, 10); //you can not delete head because it must return pointer
    duplicate(head);
    display(head);
    return 0;
}