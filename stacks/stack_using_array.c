#include<stdio.h>
#include<stdlib.h>
//size of array
//top is linke pointer logically but here we use the index number so that's why it integer type
//pointer pointing array
struct stack
{
    int size;
    int top;
    int *S;
};
// first creating stack in memory
void create(struct stack *st)
{
    printf("Enter the size of stack:");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*) malloc(sizeof(st->size*sizeof(int)));
}
//adding element inside created stack
void push(struct stack *st,int data)
{
    //checking the size empty in stack 
    if(st->top==st->size-1)
    {
        printf("stack over flow");
    }
    else
    {
        st->top++;
        st->S[st->top]=data;
    }
}
//deleting element and also return that data 
int pop(struct stack *st)
{   
    int x=-1;
    //checking stack is not empty
    if(st->top==-1)
    {
        printf("stack under flow");
        return x;
    }
    else
    {
        x=st->S[st->top];
        st->top--;
    }
    return x;
}


void Display(struct stack st)
{
    for (int i = st.top; i>=0; i--)
    {
        printf("%d ",st.S[i]);
    }
    
}
int main()
{ 
    struct stack st;
    create(&st);
    push(&st,551);
    Display(st);
    return 0;
}