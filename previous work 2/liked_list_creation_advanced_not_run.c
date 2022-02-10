#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next ;            // structer type pointer is formed lik int *a;integer type pointer 
};
void show(struct node *ptr)             // we ARE USING VALUE OF VARIABLE
{   
    printf("my data in link list\n");
    while(ptr!=NULL)
    {
          printf("%d ",ptr->data);
          ptr=ptr->next;
    }
}
int main()
{
    int n=5,i=0;
     struct node *a[i];
    for (int i = 0; i < n; i++)
    {   
        // all the struct is formed
        struct node *a[i];
        a[i]=(struct node*)malloc(sizeof(struct node));
    
    }
    while(a[i]!=NULL)
    {
      printf("enter the element");
      scanf("%d",&a[i]->data);
     
      a[i]=a[i]->next;
       i++;
    }
    
    
    
   show(a[i]);
   
    
   

         
   return 0;
}