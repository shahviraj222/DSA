#include<stdio.h>
int main()
{
    int h[11]={0};      //here total element of h is decided by max value of inside in array a
    int a[10]={7,2,3,4,6,8,9,5};
    for (int i = 0; i <10; i++)
    {
       h[a[i]]++;      //here making 1 as whatever element is present 
    }
    printf("missing element is/are:");
    for (int i = 0; i < 11; i++)
    {
        if (h[i]==0)
        {
             printf("%d ",i);
        }
        
      
    }
    
    
}