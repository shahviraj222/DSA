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
// before head
struct node* insert(struct node *t,int data)
{
    struct node *temp;
    temp=(struct node *) malloc(sizeof(struct node));
    temp->data=data;
    temp->next=t;
    t=temp;                  //because t is pointing it became local variable
    printf("\nValue is add %d\n",t->data);
    return temp;  
}

// value is add at the given index 
void insert_at_index(struct node *t,int data,int index)
{
    int i=0;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
 while (i<index-1 && t->next)
 {
    t=t->next;
    i++;
 }
 if(t->next)
 {
 temp->next=t->next;
 temp->data=data;
 t->next=temp;
  printf("the value at index is %d\n",t->data); 
 }  
 printf("this is runing");
 }
int main()
{
     int a[10]={12,2,0,50,621,564,451,451,45,230};
    int data=85;
    struct node *head;
    craet_node(head,a);
    display(head);
    // head= insert(head,data);
    insert_at_index(head,data,10);      //here index num = position-1
    display(head);
}