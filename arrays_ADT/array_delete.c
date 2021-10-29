#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int a[10];
    int size;
    int length;
};
void display(struct arr *a1)
{
    for (int i = 0; i <a1->length; i++)
    {
        printf("%d ",a1->a[i]);
    }
    
}
void delete(struct arr *a1,int index)
{
    if(index>a1->length)
    {
        printf("invalid index");
    }
    else
    {
        for (int i = index; i<a1->length-1; i++)
        {
            a1->a[i]=a1->a[i+1];
        }
        a1->length--;
    }
}
int main()
{
    int n=4;        //giving index number index starts from 0
    struct arr a1={{10,1,2,3,4,5},10,6};
    display(&a1);
    printf("\n");
    delete(&a1,n);
    display(&a1);
    return 0;
}