#include<stdio.h>
#include<stdlib.h>
// time complexity = O(n^2)
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
// time complexity = O(n) , hash method or hash table
void pair_hash(int *a, int key , int n)
{
    int h[513]={0};
  
   for (int i = 0; i < n-1; i++)
    {
        if(key-a[i]<0)
        {
            
        }
        else
        {
       if (h[key-a[i]]==1)
       {
           printf("%d,%d\n",(key-a[i]),a[i]);
       }
        }
       h[a[i]]=1;                            //we also write h[a[i]]++;
    }
    printf("&&&%d",h[key-a[3]]); //if element in hash array assign 1 auto matically then problem is created
}
// finding pair of element which is sorted
void pair_sorted(int *a , int n , int key)
{
    int i=0,j=9;
    while (i<j)
    {
        if(a[i]+a[j]==key)
        {
            printf("(%d,%d)",a[i],a[j]);
            j--;
            i++;
        }
        else if (a[i]+a[j]>key)
        {
            j--;
        }
        else
        {
            i++;
        }
        
    }
    
}
int main()
{ 
    int a[10]={9,10,5,52,512,4,210,6,56,40};          //     don't give duplicates 
    int s[10]={1,5,7,8,9,10,12,32,45,50};
    int k=14,n=10,h=512;                                   // finding element after processing procesure on pair of element
    pair_sorted(a,n,k);
    return 0;
}