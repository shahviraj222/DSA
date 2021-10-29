#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int a[10];
    int size;
    int length;
};
int set(int index , int data, struct arr *a1)
{
 if(index >= 0 && index < a1->length)   
   a1->a[index]=data;
 else
 printf("Your index is invalid");  
}
int get(int index,struct arr *a1)
{
 if(index >= 0 && index < a1->length)   
   return a1->a[index];
 else
 printf("Your index is invalid");  
}
    void display(struct arr *a1)
{
    for (int i = 0; i < a1->length; i++)
    {
        printf("%d ", a1->a[i]);
    }
}
int main()
{
    int x,index=5;
    struct arr a1 = {{1, 2, 50, 55, 56, 450, 451, 623, 625, 800}, 10, 10};
    x=get(index,&a1);
    printf("Your value at given index is %d\n",x);
    set(index,5000,&a1);
    display(&a1);
    return 0;
}