#include<stdio.h>
int main()
{
    int a[]={1,2,2,2,2,0,2,2,2};
    int c0=0,c1=0,c2=0;
    // count of number
    for (int i = 0; i < 9; i++)
    {
        if(a[i]==0)
        {
            c0++;
        }
        else if(a[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("after sorting element ");
    // sorting element
    for (int i = 0; i < c0+c1+c2; i++)
    {
        if(i<c0)
        {
            a[i]=0;
        }
        else if(i<c0+c1 && i>c0-1)
        {
            a[i]=1;
        }
        else 
        {
            a[i]=2;
        }
    }
    //printing element
    for (int  i = 0; i < c0+c1+c2; i++)
    {
        printf("%d ",a[i]);
    }
    
    
  return 0;  

}