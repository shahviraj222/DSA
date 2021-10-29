#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int a[10];
    int size;
    int length;
};
void display(struct arr a1)
{
    for (int i = 0; i < a1.length; i++)
    {
        printf("%d ", a1.a[i]);
    }
}
void insert(int data,struct arr *a1)
{
    if(a1->length>a1->size)
    {
        printf("Your array is full");
    }    
    else
    {
       // direct check from last element and also star shifting 
        int i=a1->length-1;
        while (data < a1->a[i])
        {
            a1->a[i+1]=a1->a[i];
            i--;
        }
        a1->a[i+1]=data;
        a1->length++;
    }
}
int main()
{
    int data=21;
    struct arr a1={{1,5,9,11,12,15,20,45,60},10,9};
    insert(data,&a1);
    display(a1);
    return 0;
}