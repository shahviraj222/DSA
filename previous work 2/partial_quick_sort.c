#include <stdio.h>
#include<stdlib.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int partition(int h,int a[])
{
    int i=0,pivot=a[i];
    int j=h+1;
while (i<j)
{
    


    do
    {
        i++;
    }while (pivot>a[i+1]);
    
    
   do
    {
        j--;
    } while (pivot<a[j]);
    swap(&a[i],&a[j]);
}
  swap(&pivot,&a[j]);  
  return j;
}
int main()
{
    int n;
    int *a = (int *)malloc(n * sizeof(int));
    printf("enter the element:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d:", i);
        scanf("%d", &a[i]);
    }
    int postion=partition(n-1,a);

     for (int i = 0; i < n; i++)
    {
        printf( "%d:", a[i]);
    }
    return 0;

}