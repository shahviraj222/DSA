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
int * max_min(struct node *temp)
{
    int max=temp->data,min=temp->data;
    static int a[2];
    while (temp->next!=NULL)
    {
        if (max<temp->data)
        {
            max=temp->data;
        }
        else if (min>temp->data)
        {
            min=temp->data;
        }
       temp=temp->next;
    }
     printf("value of max=%d and min=%d ",max,min);
        a[0]=max;
        a[1]=min;
        return a;

}
int main()
{
    struct node *head;
    head=(struct node *) malloc(sizeof(struct node));
    int a[10]={12,2,0,50,621,564,451,451,45,230};
    craet_node(head,a);
    display(head);
    int *p = max_min(head);
    printf("Max=%d,Min=%d",p[0],p[1]);
    return 0;
}