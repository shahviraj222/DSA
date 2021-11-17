// last in first out (LIFO) aproch is taken 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*top=NULL;                   //here we are creating pointer of structure and pointing null


//creating or pushing node is looking like
// top                    pointing on first node of linked list but is created in last
// [5]-->[6]-->[52]
void push(int data)
{
    struct Node* t;
    t=(struct Node*) malloc(sizeof(struct Node));  
    if(t==NULL)
    {
        printf("Stack over flow");
    }
    else
    {
        t->data=data;
        t->next=top; //here i am creating new node before the head so linking (t->next) node to head or top
        top=t;       //now changing head or top to t
    }
}
//returning -1 if stack is empty else returning value of stored at that point
int pop()
{
    struct Node*t=top;
    if (top==NULL)
    {
        printf("Stack under flow");
        return -1;
    }
    else
    { 
        int x=top->data;      //store data in x
        top=top->next;       //here we pointing top to next node 
        free(t);
        return x;
    }
    
}
void Display()
{   
    struct Node *st=top;
    while (st != NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
    
}
//returning data at that positition and if index is not valid then return -1
int peek(int pos)
{
    struct Node *t=top;
    int i=0;
    while (i<pos-1)
    {
        if (t==NULL)
        {
            printf("\nNot peek invalid index number!!");
            return -1;
        }
        
        t=t->next;
    }
    if (t)
    {
        return t->data;
    }
    printf("invalid index number");
    return -1;
    
}
int main()
{
    push(51);
    push(91);
    push(45);
    push(501);
    Display();
    peek(512);
    return 0;
}