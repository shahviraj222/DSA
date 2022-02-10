#include<stdio.h>
int print(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("element : %d",a[i]);
    }
    a++;   // increment of pointer
    printf("\n%d",*a);
    // *a[3]     == this is not use as this type 
    //  a is use as pointer there for increment a by a=a+3
    //  then use value by *A
    return 0;
    
}
int main()
{
    int n;
    printf("total number of element:");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        printf("element of %d",i);
        scanf("%d",&arr[i]);
    }
    
    print(arr,n);

}