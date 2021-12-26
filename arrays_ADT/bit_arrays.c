// my give array is bitonic or not
#include<stdio.h>
//here my logic is it is check for array + 1 then my pointer 
int Isbitonic(int *A,int n)
{
    int i,j;
    for (int i = 0; i <n; i++)
    {
        if (A[i]<A[i+1])
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
    // whole array is reached or scan
    if (i>n-1)
    {
        return 1;
    }
    for (j =i;j<n-1;j++)    
    {
        if (A[j]>A[j+1])
        {
            continue;
        }
        else
        {
           break;
        }
    }
    if (j != n-1)
    {
        return 0;
    }
    return 1;
    
}
// in this logic my array is check behind then my pointer 
int checkBitonic(int arr[], int n)
{
    int i, j;
    // Check for increasing sequence
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            continue;
 
        if (arr[i] <= arr[i - 1])
            break;
    }
 
    if (i > n - 1)
        return 1;
 
    // Check for decreasing sequence
    // here my j=i+1 is game changer 
    for (j = i + 1; j < n; j++) {
        if (arr[j] < arr[j - 1])
            continue;
 
        if (arr[j] >= arr[j - 1])
            break;
    }
 
    i = j;
 
    if (i != n)
        return 0;
 
    return 1;
}
int main()
{
    int arr[]={1,5,8,8,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=Isbitonic(arr,n);
    if (i)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
     i=checkBitonic(arr,n);
    if (i)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
     return 0;
}