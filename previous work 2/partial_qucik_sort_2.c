#include<stdio.h>
#include<stdlib.h>
int swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    return 0;
}
int partition(int l,int h,int a[])
{
int pivot;
pivot=a[l];
int i=l,j=h;
while (i<j)
{
    do 
    {
        i++;
    }while (a[i]<=pivot);
    do
    {
        j--;
    } while (a[j]>pivot);
    if (i<j)
    {
        swap(&a[i],&a[j]);       // always use address of arry's in swaping not use  direct values
    }
    
    
}
swap(&a[l],&a[j]);              // always use address of arry's in swaping not use  direct values
return j;
}

int quick_sort(int l,int h,int a[])
{
    if(l<h)
    {
       int j;
       j =partition(l,h,a);
        quick_sort(l,j,a);
        quick_sort(j+1,h,a);
    }
    return 0;
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
   quick_sort(0,n,a);
    printf("after calling quick sor tfor a num\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d:",a[i]);
    }
    return 0;
    
}