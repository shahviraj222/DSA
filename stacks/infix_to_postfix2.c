// only for + , - , * , / this precidions are taken bracket's wala not cover 
// pushing the operators (+ - * /)only not oprand(like a,b,c) 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node* next;
};
char popdata;
// in stack we insert the element at first or replace head
struct node* push(struct node* head,int data)
{
    struct node* t;
    t=(struct node*) malloc(sizeof(struct node));  
    t->next=NULL;
    if(t==NULL)
    {
        printf("Stack over flow");
    }
    else
    {
        t->data=data;
        t->next=head; //here i am creating new node before the head so linking (t->next) node to head or top
        head=t;       //now changing head or top to t
    }
    return head;
}
struct node* pop(struct node* t)
{
    if (t==NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        struct node* a=t;
        t=t->next;
        popdata=a->data;
        free(a);
    }
    return t;
} 
void Display(struct node *a)
{
    struct node *temp=a;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
int Isempty(struct node*p)
{
    if(p==NULL)
    {
        return 1;
    }
    return 0;
}
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
int isOperator(char x)
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
// this can only convert the +,-,*,/
void convert(char *p)
{
    char *q=(char*)malloc(sizeof(char)*(strlen(p)+1));                     //to store postfix converstion  
    struct node*a=NULL;         //stack for storing the operators
    printf("%s",p);
    int i=0,j=0;
    while (p[i]!='\0')
    {
        if(!isOperator(p[i]))
        {
            q[j++]=p[i++];
        }
        else
        {
            if (Isempty(a))
            {
                a=push(a,p[i++]);
            }
            else
            {
                if (pre(p[i])>pre(a->data))
                {
                    a=push(a,p[i++]);
                }
                else
                {
                    a=pop(a);
                    q[j++]=popdata;
                }
            }
            
        }
    }
    while (a!=NULL)
    {
        a=pop(a);
        q[j++]=popdata;
    }
    q[j]='\0';
    int k=0;
    printf("\nAfter converting into postfix:");
    while (q[k]!='\0')
    {
        printf("%c",q[k]);
        k++;
    }
}
int main()
{ 
    char *a="(A+B*C)-{A+B}";
    convert(a);
    // printf("%d",isOperator('+'));
}