#include<stdio.h>
int main()
{
    int  index,temp;
    int a[100]={52,5,3,6,50,5,70};
    int store = 7;
    // this technic is only use for sorted arry
    // case 1: time complexity is order of n or bigO(n)
    printf("enter the inserting index number and value of num:");
    scanf("%d  %d",&index,&temp);
    int i=store;
    while (i!=index-1)   
    {
        a[i]=a[i-1];
        i--;
    }
    a[index]=temp;
    for (int i = 0; i <store; i++)
    {
        printf("%d ",a[i]);
    }
    // this technic is only for unsorted arry
    // case 2: time complexity is order of 1 or bigO(1)
    /* a[store]=a[index];
    a[index]=a[temp];
      for (int i = 0; i <store; i++)
    {
        printf("%d ",a[i]);
    }*/
    return 0;
}