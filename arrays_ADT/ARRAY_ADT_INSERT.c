#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int A[10];
    int size;
    int length;
};
void display(struct arr *a1)
{
    for (int i = 0; i < a1->length; i++)
    {
        printf("%d ",a1->A[i]);
    }
    
}
void insert(struct arr *a1, int x, int data )
{
    if(x > a1->length)
    {
        printf("Element not inserted");
    }
    else
    {
    for (int i = a1->length; i >x; i--)
    {
        a1->A[i]=a1->A[i-1];
    }
    a1->A[x]=data;
    a1->length++;
    }
}
int main()
{
    struct arr a1={{1,2,3,5,6},10,5};
    insert(&a1,3,1000);
    display(&a1);

    return 0;
}