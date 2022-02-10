#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(int n,int m,int a[],int b[])
{  int temp;
   for (int  i = 0; i < n-1; i++)
   {
       for (int  j = 0; j <n-i-1; j++)
       {
         if(a[j]>a[j+1])
         {   // if you call bubble sort using function call by refrence then use this type of 
             //  swaping with addres
            // temp=a[j] ;
            // a[j]=a[j+1];                  
            // a[j+1]=a[j];
             swap(&a[j], &a[j+1]);
         }

       }
       
   }
     for (int  i = 0; i < m-1; i++)
   {
       for (int  j = 0; j <m-i-1; j++)
       {
         if(b[j]>b[j+1])
         {
           
            swap(&b[j], &b[j+1]);
         }

       }
       
   }
    
}
void merge(int n,int m,int a[],int b[])         // if two given arry is sorted then the resulten 
 {                                              // arry is also sorted
  int c[m+n];  
  int i=0,j=0,k=0;
  while (i<n && j<m)
  {
      if (a[i]<b[j])
      {
          c[k]=a[i];
          i++;
          k++;
      }
      else if(a[i]>b[j])
      {
          c[k]=b[j];
          j++;
          k++;
        
      }
      else
      {
          c[k]=b[j];
          j++;
          k++; 
      }
  }
  while (i<n)
  {
      c[k]=a[i];
      i++;
      k++;
  }
   while (j<m)
  {
      c[k]=b[j];
      j++;
      k++;
  }
  printf("\nafter merging arrys look like\n");
 for (int i = 0; i < m+n; i++)
 {
     printf("%d ",c[i]);
 }
  
  
}
int main()
{
    int n,m;
    int arra[] = {90,50,60,33,20,10};
    int arrb[] = {2,54,20,60,32};
    n= sizeof(arra)/sizeof(arra[0]);
    m= sizeof(arrb)/sizeof(arrb[0]);
    sort(n,m,arra,arrb);
    // printf("value of m=%d",m);
    // printf("value of n=%d",n);
    printf("arrys of before merge look like\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arra[i]);
    }
    printf("\n");
     for (int i = 0; i < m; i++)
    {
        printf("%d ",arrb[i]);
    }

    
    merge(n,m,arra,arrb);
}