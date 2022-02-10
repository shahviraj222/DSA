// 1 2  4 5 6
//missing element is 3
#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        {if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
        }
       
  
} 
void missing_element(int a[],int n)
{
     int j=1;
         for (int i =0; i < n; i++)
    {
       
        if(a[i] != j)
        {
            printf("\nmissin element is:%d",j);    
            break;
        }
                
        j++;
    }
    
}
int main()
{
    int a[5];
    printf("enter 5 element in series wise:");
    for (int  i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,5);
    missing_element(a,5);
   
    
    
    return 0;
}