// last in first out (LIFO) aproch is taken 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char data;
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
int isEmpty(struct Node* st)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    {
        return 1; //take care
    }
    else
    {
        return 0;
    }
}
// here my pre is given like
// +,-    #1       second priority
// *,/    #2       first priority
int pre(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    
     return 0;
} 
//returning the postfix char array 
char *convert(char *infix)
{
    //and also always new structure is created and top pointer is also declere always 
    struct Node st;
    char *postfix= (char*) malloc((strlen(infix)+1)*sizeof(char));
    int i=0,j=0;
    while (infix[i]!='\0')         //end of the string
    {
        if (isOperand(infix[i]))
        {
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
        else
        {
            postfix[i++]=infix[j++];
        }
        
    }
    while(top!=NULL)
           {postfix[j++]=pop();}
        
     postfix[j]='\0';
     return postfix;
      
}
int main()
{
    char *A="a+12*5-6";
    A=convert(A);
    printf("After converting infix=%s",A);
    return 0;
}