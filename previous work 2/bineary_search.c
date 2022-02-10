#include<stdio.h>
#include<stdlib.h>
int binear()
{
return 0;
}
void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
void sort(int n , int a[])               // passing array in this function like this!!
{
    for (int  i = 0; i < n-1; i++)
    {   for (int  j = 0; i <n-1-i; j++)
    {
        if( a[j]>a[j+1])
        {
            swap(&a[j],&a[j+1]);
        }

    
    }
        
    }
    
}
int main()
{
int n,k;
printf("enter the element:");
scanf("%d",&n);
int a[n];
for (int i=0; i < n; i++)
{
    printf("\nenter element %d:",i);
    scanf("%d",&a[i]);
}
printf("enter the search key:");
scanf("%d",&k);
sort(n,a);
printf("after sorting arry become\n");
for (int  i = 0; i < n; i++)
{
    printf(" %d ",a[i]);
}

return 0;
}