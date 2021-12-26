#include<stdio.h>
#include<stdlib.h>
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
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
// this is use to find key element from descanding order  
int binarySearch_de(int arr[], int N, int X)
{
    // Store the first index of the
    // subarray in which X lies
    int start = 0;
 
    // Store the last index of the
    // subarray in which X lies
    int end = N;
 
    while (start <= end) {
 
        // Store the middle index
        // of the subarray
        int mid = start
                  + (end - start) / 2;
 
        // Check if value at middle index
        // of the subarray equal to X
        if (X == arr[mid]) {
 
            // Element is found
            return mid;
        }
 
        // If X is smaller than the value
        // at middle index of the subarray
        else if (X < arr[mid]) {
 
            // Search in right
            // half of subarray
            start = mid + 1;
        }
        else {
 
            // Search in left
            // half of subarray
            end = mid - 1;
        }
    }
 
    // If X not found
    return -1;
}
int max(int a[],int n)
{
    int max=a[0];
    int index=0;
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
            index=i;
        }
        
    }
    return index;   
}
int bitsearch(int arr[],int n,int k)
{
    int max_index;
    int r1,r2;
    if (checkBitonic(arr,n))
    {
        max_index=max(arr,n);
        r1=binarySearch(arr,0,max_index-1,k);
        if (r1==-1)
        {
            r1=binarySearch_de(&arr[max_index],n-max_index,k)+max_index;
        }
        return r1;
    }
    else
    {
        printf("Your arry is not bitonic array");
    }
    return -1;
}
int main()
{
    int k,n;
    printf("Entre the total element in Array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       printf("Enter the %dth element:",i+1);
       scanf("%d",&arr[i]);
    }
    printf("Enter the key element:");
    scanf("%d",&k);
    printf("Your element find at index number:%d",bitsearch(arr,n,k));
    return 0;
}