#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   // it stores address of next structer
   struct node * next ;            // structer type pointer is formed like int *a;integer type pointer 
};
void show(struct node *ptr)             // we ARE USING VALUE OF VARIABLE
{   
    printf("my data in link list\n");   // traversing of linked list 
    while(ptr!=NULL)                    // run still the last element to reach..
    {
          printf("%d ",ptr->data);      // using liked list data..
          ptr=ptr->next;                // changing the ptr data.pointing to the next nodee
    }
    
   
}
struct  node* insert(struct node* head,int data)
{
    struct node *ptr;
     ptr=(struct node *)malloc(sizeof(struct node));
     ptr->next=head;
     ptr->data=data;
     return ptr;
}

int main()
{
    int a,n=5;
    struct node *head;
    struct node *first;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
   head->data=0;
  for (int i = 0; i < n; i++)
  {
      printf("enter the %d element:",i);
      scanf("%d",&a);                     
      head=insert(head,a);                   // creating new node ***before head***
  }
   show(head); 
   return 0;
}