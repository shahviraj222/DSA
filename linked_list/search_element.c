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
struct node* search(struct node *temp,int key)
{
    while (temp!=NULL)
    {
        if (key==temp->data)
        {
           return temp;
        }
        temp=temp->next;
    }
    return(NULL);
}
// also we can add two method to decrease time for next search 
// transpositon and move to head 
// here we change positon of key element  
struct node* search_rec(struct node *temp,int key)
{
    if(temp->data==key)
    {
        return temp;
    }
    if (temp->next==NULL)
    {
       return NULL;
    }
    search_rec(temp->next,key);
}
int main()
{
    int a[10]={12,2,0,50,621,564,451,451,45,230};
    int key=50;
    struct node *head;
    craet_node(head,a);
    display(head);
    struct node *p =search_rec(head,key);
    if (p==NULL)
    {
        printf("\n!!element not find!!");
    }
    else
    {
        printf("\nyour element found %d",p->data);
    }
    
    return 0;
}