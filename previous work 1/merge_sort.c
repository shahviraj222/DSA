#include<stdio.h>
#include<stdlib.h>
mergesort(int arr[],int l,int h)
{ int mid;
    if(l<h)
{
    mid=(l+h)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,h);
    merge(l,mid,h,arr);
}
}
merge(int l, int mid, int h, int arr[] )
{
 int i, j, k;
    int n1 = mid - l + 1;
    int n2 = h - mid;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}



int main()
{
    int l=0,h,mid,n;
    int *a=(int*)(malloc((n+1)*sizeof(int)));
    printf("enter the total number of element:");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        printf("enter the vlaue of element %d:",i);
        scanf("%d",&a[i]);
    }
    h=n-1;
    mergesort(a,l,h);
    printf("after the merging element become\n");
     for (int i = 0; i <n; i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}