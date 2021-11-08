// two method to revers linked list 
// 1]using element
// 2]using link
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void craet_node(struct node *temp,int a[])
{
    
    for ( int i = 0; i <10 ; i++)
    {
        // printf("runing");
        temp->next=(struct node *) malloc(sizeof(struct node)); //here one extra node is created
        temp->data=a[i];
        temp=temp->next;
    }
    temp->next=NULL;                                //we have to assign the end of node 
    
}
void display(struct node *temp)
{ 
    while (temp!= 0)                             //proof of extra node is created if you want hide extra node then make change in condition put"temp->next" **if you make this then link reverse not work
    {
          printf("%d ",temp->data); 
          temp=temp->next;
    }
    
}
void reverse_ele(struct node *first)
{
    struct node *p=first;
    int a[10];
    int i=0;
    while (p->next!=NULL)
    {
        a[i]=p->data;
        p=p->next;
        i++;
    }
    i=i-1;
    p=first;
    while (p->next!=NULL)
    {
       p->data=a[i];
       p=p->next;
       i--;
    }
    
}
//reversing link list and also having data of next node and previous node or have point on it
struct node * revers_link(struct node *first)
{
    struct node *p=first;
    struct node *q=NULL;
    struct node *r=NULL;
    while (p->next!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    // printf("value of first after reverse%d",q->data); //to confirm where q is pointing
    return q;

}
int main()
{
    int a[10]={1,2,23,50,62,66,71,85,95,230};
    struct node *head;
    int data=85;
    craet_node(head,a);
    // head=revers_link(head);
    display(head);
    printf("\n");
    reverse_ele(head);
    display(head);
    return 0;
}