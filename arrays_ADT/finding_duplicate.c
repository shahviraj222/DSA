#include<stdio.h>
#include<stdlib.h>
void duplicate(int *a,int n)
{
    int last_duplicate=0;
    for (int i = 0; i < n; i++)
    {
        //comapring current element with next element 
        if(a[i]==a[i+1] && a[i]!=last_duplicate)
        {
            printf("%d ",a[i]);
            last_duplicate=a[i];
        }
    }
    
}
// counting how many time data is aapering
void duplicate2(int *a,int n)
{
    int last_duplicate=0,j;
    for (int i = 0; i < n; i++)
    {
        //comapring current element with next element 
        if(a[i]==a[i+1])
        {
            j=i+1;
            while (a[i]==a[j])
            {
               j++;
            }
            
            printf("Duplicate is %d appering for %d times\n",a[i],j-i);
            i=j-1;
        }
    }
    
}
// FOR "unsorted" element
// THIS IS FOR UNSORTED ELEMENT ALSO HASH METHOD TO FIND DUPLICATE
void duplicate3(int *a,int n,int n2)
{
     int *p;
     p=(int *) calloc(n2,sizeof(int));
     for (int i = 0; i <n; i++)
    {
       p[a[i]]++;      //here making 1 as whatever element is present 
    }
    printf("duplicates and reapeat count\n");

    for (int i = 0; i < n2; i++)
    {
        if (p[i]>1)
        {
             printf("%d and %d\n",i,p[i]);
        }
  
    }
}
int main()
{
    int a[10]={10,12,64,12,54,63,64,12,87,87};
    int h=88;
    duplicate3(a,10,h);
    return 0;
}
