#include<stdio.h>
#include<stdlib.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}
int search(int n,int a[],int k)
{
    int l=0,h=n-1,mid=(l+h)/2,index_num=-1;
    while (l<=h)
    {
       if(a[mid]==k)
       {
           index_num=mid;
           break;
       }
       else if (a[mid]>k)
       {
           h=mid-1;
           mid=(l+h)/2;
       }
       else
       {
           l=mid+1;
           mid=(l+h)/2;
       }

       
    }
    if (index_num==-1)
    {
       printf("\nelement not find");
    }
    else
    {
        printf("\nelement find at index %d",index_num);
    }
    
   return index_num; 
}
int sort(int n,int a[])                           // how you use this pointer 
{
    for (int i=0;i<n;i++)
    {
        for (int  j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);              // passing two arry for swaping
            }
        }
        
    }
    a[0]=100000;              
     return 0;
}
int main()
{
int n,k;
printf("enter the element:");
scanf("%d",&n);
int arr[n];
for (int i=0; i < n; i++)
{
    printf("\nenter element %d:",i);
    scanf("%d",&arr[i]);
}
printf("\nenter the search key:");
scanf("%d",&k);
sort(n,arr);                                      // here arr is given by refrance call
printf("after swaping num\n");
for (int i=0; i < n; i++)
{
    printf("%d:",arr[i]);
  
}
search(n,arr,k);
return 0;
}