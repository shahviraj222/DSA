#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
//modifying create giving size when it is called
void create(struct stack *st)
{

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
//giving data which is present at that position 
int peek(struct stack st,int pos)
{   int index=st.top-pos+1;
    if(index<0)
    {
        printf("Invalid Index");
        return -1;
    }
    else
    {
        return st.S[index];
    }
}
//here new function created 
int IsFull(struct stack st)
{
    return st.top==st.size-1 ? 1:0;
}
//here new function created 
int IsEmpty(struct stack st)
{
    return st.top==-1 ? 1:0;
}
void Display(struct stack st)
{
    for (int i = st.top; i>=0; i--)
    {
        printf("%d\n",st.S[i]);
    }
    
}
//we also use this by using stack make by linked list 
int IsParenthesis(char *s)
{
    struct stack a;
    a.size=strlen(s);
    create(&a);
    //here my loop is runing for when string's end
    for (int i = 0;s[i]!='\0'; i++)
    {
        if (s[i]=='(')
        {
            push(&a,s[i]);
        }
        else if(s[i]==')')
        {
            if(IsEmpty(a))
            {
                printf("Value of match:");
                return 0;
            }
            else
            {
                pop(&a);
            }
        }
        
        
    }
    printf("Value of match:");
    return IsEmpty(a);

}
int main()
{
    char s[100];
    struct stack st;
    st.size=10;                             //fixed size of all array
    printf("Enter you string to match parenthesis:");
    scanf("%s",&s);
    create(&st);
    // printf("%d",IsEmpty(st));
    printf("%d",IsParenthesis(s));          //strings always call by address only and arrays also 
    // Display(st);
    return 0;
}