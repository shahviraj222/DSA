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
        temp->next=(struct node *) malloc(sizeof(struct node));
        temp->data=a[i];
        temp=temp->next;
    }
    temp->next=NULL;                                //we have to assign the end of node 
    
}
void display(struct node *temp)
{
    while (temp->next != 0)
    {
          printf("%d ",temp->data);
          temp=temp->next;
    }
    
}
void insert(struct node *temp,int data)
{
    // struct node *temp=temp;
    struct node *q;
    struct node *w;
    w=(struct node*) malloc(sizeof(struct node));
    //when you get sengmention fault then also check the loop condition
    while (temp && data > temp->data)
    {
       q=temp;
       temp=temp->next;
    }
    w->data=data;
    w->next = q->next;
    q->next = w;
}
int main()
{
    struct node *head;
    head=(struct node *) malloc(sizeof(struct node));
    int a[10]={12,20,40,50,301,302,401,451,600};           //array must be sorted
    craet_node(head,a);
    display(head);
    insert(head,45);
    printf("\n");
    display(head);
    return 0;
}