#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int *a;
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
        a1->a[i]=a1->a[i-1];
    }
    a1->a[x]=data;
    a1->length++;
    }
}
int main()
{
    struct arr a1;
    int n;
    printf("Enter total size of array:");
    scanf("%d",&n);
    a1.length=0;
    a1.size=n;
    a1.a=(int *) malloc(n*sizeof(int));

    return 0;
}