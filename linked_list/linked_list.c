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
void diplay_recursive(struct node *temp)
{
    if(temp->next!=NULL)
    {
        printf("%d ",temp->data);
        diplay_recursive(temp->next);
    }
}
int main()
{
    struct node *head;
    head=(struct node *) malloc(sizeof(struct node));
    int a[10]={10,20,2,6,262,5,1,15,205,45};
    craet_node(head,a);
    display(head);
    diplay_recursive(head);
    return 0;
}
