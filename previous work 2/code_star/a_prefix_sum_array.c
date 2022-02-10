//Enter the elements: 1 2 3 4 5
//Prefix sum array is: 1 3 6 10 15
#include<stdio.h>
void prefix_sum(int a[])
{
    int sum=0;
    for (int i = 0; i <5 ; i++)
    {
        sum=sum+a[i];
        printf("%d ",sum);
    }
    //sum from given prefix
    //     for (int i = 0; i <5 ; i++)
    // {
    //     sum=sum+a[i];
    //     printf("%d ",sum);
    // }
}
int main()
{
    int a[5];
    printf("enter 5 element in series wise:\n");
    for (int  i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    prefix_sum(a);
    return 0;
}