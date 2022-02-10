#include<stdio.h>
#include<stdlib.h>
// -> this is use for only indicate any pointer 
// what it's mean 
// here 's' is used as struct pointer 
// s->=10
// my *s become 10 
struct node
{
   int data;
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

int main()
{
    int a;
    struct node *head;
    struct node *second;
    struct node *third;

   // all memory are stored in heap layout

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

   // creating first node 

   head->data=455;
   head->next=second;           // pointing to next node giving address of second node

   // creating second node

   second->data=50;
   second->next=third;

   // the last node or terminating node or last node

   third->data=10;
   third->next=NULL;            // here is end of my node or liked list
  
   show(head); 
   return 0;
}