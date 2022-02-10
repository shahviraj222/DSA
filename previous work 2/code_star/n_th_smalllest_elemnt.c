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
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
int main()
{
   int a[5];
   printf("enter 5 element of array:");
   for (int  i = 0; i <5; i++)
   {
      scanf("%d",&a[i]);
   }
   bubbleSort(a,5);
   printf("second smallest element is:%d",a[1]);
   return 0;
}