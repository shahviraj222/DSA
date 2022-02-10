#include<stdio.h>
int  sort(int n , int *a)
{   printf("function works");
    int temp;
    for (int i = 0; i < n; i++)
    {
        printf("enter your element %d",a[i]);
    }
    
   return 0;

}
int search(int n,int *a,int k)
{
    return 0;
}
int main()
{
    int n,k; 
    printf("enter the number of element:");
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        printf("enter your %d element",i);
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search:");
    scanf("%d",k);
    sort(n , a);
    //search(n,a[0],k);

    
}

