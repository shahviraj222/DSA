#include<stdio.h>
#include<stdlib.h>
//using structure making stack
struct stack
{
    int size;
    int *arr;
    int top;
};
int isFull(struct stack *ptr)
{
    //ptr->top=6;
    int t= (ptr->top >= ptr->size-1) ?  1 :  0 ;
    //(t==1)?printf("yes full") : printf("not fill");
    return t;
} 
int isEmpty(struct stack *ptr)
{
   return (ptr->top == -1) ?  1 :  0 ;  // ternary operator
}
// stack pop
int pop(struct stack *p)
{
    int value;
    if(isEmpty(p))
    {
        printf("stack is empty");
    }
    else
    {
        
        value=p->arr[p->top];       // a[i] me value assign kardo
        p->top--;
    }
    return value;
}
// stack push 
void push(struct stack *p,int value)
{
    if(isFull(p))
    {
        printf("Error! stack overflow Error\n");
    }
    else
    {
        p->top++;
        p->arr[p->top]=value;       // a[i] me value assign kardo
    }
}
int main()
{   
    int n,v;
    struct stack *s=(struct stack*)malloc(sizeof(struct stack ));      //creating by struct pointer // struct stack s; by direct without pointer              
    s->size=5;     
    s->top=-1;                    // this shows stack is empty
    s->arr=(int*)malloc(s->size*sizeof(int));    // allocate memory of arry in heap..
    printf("stack is run successfully\nEnter the total number of arry:");
    scanf("%d",&n);
    //entering the element in stack
    int i=0;
    while(i<=s->size)
    {    
         printf("enter the elemnt to push:");
         scanf("%d",&v);
         push(s,v); 
         i++;     
    }

    // printing the value store in stack
    // printf("**entering value of stack\n");
    //  s->top=0;
    // for (int i = 0; i <n; i++)
    // { 
    //   printf( "%d\n",s->arr[s->top]);
    //   s->top++;
    // }
    int value;
    value=pop(s);
    printf("poping first element %d",value);
    return 0;
}