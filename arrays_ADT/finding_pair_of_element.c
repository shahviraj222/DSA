#include<stdio.h>
#include<stdlib.h>
void pair(int *a, int key , int n)
{
    for (int i = 0; i < n-1; i++)
    {
       for (int j =i+1; j < n-1; j++)             //j=i+1 ,means after the 'i' we will check  
       {
           if(a[i]+a[j]==key)                    //all the procesure to find modify here
           {
               printf("%d,%d\n",a[i],a[j]);        //elelment pair is perinted    
           }
       }
       
    }
    
}
int main()
{ 
    int a[10]={9,10,5,52,512,4,210,6,56,40}; //     don't give duplicates 
    int k=14,n=10;              // finding element after processing procesure on pair of element
    pair(a,k,n);
    return 0;
}