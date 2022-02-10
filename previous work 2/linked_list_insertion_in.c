#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next ;                 // structer type pointer is formed like int *a;integer type pointer 
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
// insertion a node at start 
struct  node* insert(struct node* head,int data)
{
    struct node *ptr;                                    // creatinging a new node 
     ptr=(struct node *)malloc(sizeof(struct node));     // give memory to heap
     ptr->next=head;                                     // point the next to head
     ptr->data=data;                                     // saving data in new node
     return ptr;
}
// insertion at a given index here we don't take element at first index 
// always my first node is head remains same
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
struct  node* insert_at_end(struct node* head,int data)
{
    
   struct node *ptr;                //creating new node
     struct node *p=head;           //creating temp node point to head or temp head for comparing
     ptr=(struct node *)malloc(sizeof(struct node));
     // finding address of last element
       while (p!=NULL)             
     {
        p=p->next;   
        p++;
     }
     p->next=ptr;
     ptr->data=data;
     ptr->next=NULL;

   return head;
}

int main()
{
    int a,index=3;
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
  
   //head=insert(head,550);       // creating element at **before head**
   head=insert_at_index(head,0,index-1);
  // head = insert_at_end(head,0);
   show(head); 
   return 0;
}