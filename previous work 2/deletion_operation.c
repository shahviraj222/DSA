#include<stdio.h>
int main()
{
     int  index,temp;
    int a[100]={52,5,3,6,50,5,70};
    int store = 7;
     for (int i = 0; i <store; i++)
    {
        printf("%d ",a[i]);
    }
    // this technic is only use for sorted arry
    // case 1: time complexity is order of n or bigO(n)
    printf("\nenter the deleting index number:");
    scanf("%d",&index);
    int i=index;
    while (i<store)   
    {
        a[i]=a[i+1];
        i++;
    }
    store--;
    for (int i = 0; i <store; i++)
    {
        printf("%d ",a[i]);
    }
}