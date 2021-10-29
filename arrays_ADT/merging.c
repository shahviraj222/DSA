#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int a[20];         // when you call struct inside heap then array is create *******a[20]********* 
    int size;
    int length;
};
void display(struct arr *a1)
{
    for (int i = 0; i < a1->length; i++)
    {
        printf("%d ", a1->a[i]);
    }
}
struct arr* merge(struct arr a1,struct arr a2)
{
    struct arr *a3;
    int i=0,j=0,k=0;
    a3=(struct arr*) malloc(sizeof(struct arr));         // as per structure defination all the variables and array is created in heap
    a3->length = a1.length + a2.length;

    while (i< a1.length && j< a2.length)
    {
        // finding which one is smaller and then printed 
        if (a1.a[i]<a2.a[j])
        {
            a3->a[k]=a1.a[i];
            k++;
            i++;
        }
        else
        {
            a3->a[k]=a2.a[j];
            j++;
            k++;
        }
        
    }
    for (; i < a1.length; i++)
    {
        a3->a[k++]=a1.a[i];
    }

     for (; j < a1.length; j++)
    {
        a3->a[k++]=a2.a[j];
    }
    
    return a3;
}
int main()
{
    // both list must be sorted
    struct arr a1={{0,55,66,520,550,660,745,750},10,8};
    struct arr a2={{1,50,61,510,600},10,5};
    struct arr *a3;
    a3=merge(a1,a2);
    display(a3);
    return 0;
}