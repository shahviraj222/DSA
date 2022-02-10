#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next ;                                 // structer type pointer is formed like int *a;integer type pointer 
};
void show(struct node *head)                            // we ARE USING VALUE OF VARIABLE
{   struct node* ptr=head;
    // here best case for do while loops
    printf("My element is %d\n",ptr->data);             // traversing of linked list 
    ptr=ptr->next;
    while(ptr!=head)                                   // run still the last element to reach..
    {
          printf("My element is %d\n",ptr->data);      // using liked list data..
          ptr=ptr->next;                               // changing the ptr data.pointing to the next nodee
    }
    
   
}
struct node* insertion_at_first(struct node*head,int data)
{
     struct node* ptr,*q=head;
     ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
     do                                  // run still the last element to reach..
    {
            ptr=ptr->next;                                   // changing the ptr data.pointing to the next nodee
    }while(ptr->next!=q) ;
   ptr->next=head;
   return head;
}
struct  node* insert_at_index(struct node* head,int data,int index)
{
   struct node *ptr;              //creating new node
     struct node *p=head;           //creating temp node point to head or temp head for comparing
     int i=0;
     ptr=(struct node *)malloc(sizeof(struct node));//provide memory in heap
    
    //finding the address of given index or point to given index 
     while (i!=index-1)             
     {
        p=p->next;   
        i++;
     }
     
    // crating network as per theory
     ptr->next=p->next; // giving address of next node to new node
     p->next=ptr;       // pointing address of new node to previous one 
     ptr->data=data;    // saving data in new node
     return head;

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
   third->next=head;            // here is end of my node or liked list
  
   show(head); 
   // head= insertion_at_first(head,55);
   head=insert_at_index(head,45,1);
    show(head); 
   return 0;
}