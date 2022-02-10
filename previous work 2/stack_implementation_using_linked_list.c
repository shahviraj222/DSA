#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
int isFull(struct node*top)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    //n=NULL;
    if(n==NULL)
    {
        printf("stack overflow");
        return 1;
    }
    else
    return 0;

}
int isEmpty(struct node*top)
{   
    if (top==NULL)
    {
        printf("stack is empty");
        return 1;
    }
    return 0;
    
}
//push at start of stack which follo **'LIFO'** rule.
struct node* push(struct node*top, int data)     //return type is structure pointer
{
    if (isFull(top))
    {
        return top;
    }
    else
    {
       struct node*n=(struct node*)malloc(sizeof(struct node));
       n->next=top;
       top=n;
       n->data=data;
       return top;
    }
    
}
//pop from the starting node
int pop(struct node**top)
{
    int temp;
  if (isEmpty(*top)==0)
  {
      struct node*n=(*top);
      *top=(*top)->next;
      temp=n->data;
      return temp;
  }
  else{
      printf("stack is empty");
      return 0;
  }
    
}
int peek(struct node *ptr,int position)
{
    int i=1,temp;
    while (i != position)
    {
        ptr=ptr->next;
        i++;
        if(ptr==NULL)
        {
            printf("Eroor 'you are out of stack' ");
            return -1;
        }
    }
    temp=ptr->data;
    return temp;
}
int main()
{   int n;
    struct node *top=NULL;
    int data;
    printf("enter the stack length:");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
       printf("enter the elemnt in stack:");
       scanf("%d",&data);
       top=push(top,data);
    }
    linkedListTraversal(top);
    // pop(&top);           //another implementation is using global variable as top      //address of pointer of pointer
    // printf("after poping the element\n");
    // linkedListTraversal(top);
    printf("peeked value is %d at postion 3\n",peek(top,3));
    printf("%d",peek(top,10));
    return 0;

}
