#include <stdio.h>
#include <stdlib.h>
#include <time.h>
clock_t start_t, end_t, total_t;
void quicksort(int *number, int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
void merge(int l, int mid, int h, int arr[]);
void mergesort(int arr[], int l, int h)
{
    int mid;

    if (l < h)

    {

        mid = (l + h) / 2;

        mergesort(arr, l, mid);

        mergesort(arr, mid + 1, h);

        merge(l, mid, h, arr);
    }
}
void merge(int l, int mid, int h, int arr[])
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

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {

            arr[k] = L[i];

            i++;
        }
        else
        {

            arr[k] = R[j];

            j++;
        }

        k++;
    }

    /* Copy the remaining elements of L[], if there

    are any */

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there

    are any */

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

int main()
{

    int l = 0, h, mid, n;
    clock_t t;
    printf("enter the total number of element:");
    scanf("%d", &n);
    int *a = (int *)(malloc((n + 1) * sizeof(int)));
    for (int i = n; i > 1; i--)
    {
        a[i - 1] = i;
    }
    h = n - 1;
    t = clock();
    mergesort(a, l, h);
    t = clock() - t;
    double time_consumed = ((double)t) / CLOCKS_PER_SEC;
    printf("merge() took %f seconds for execution of some value.. \n", time_consumed);
    
    for (int i = n; i > 1; i--)
    {
        a[i - 1] = i;
    }
    t = clock();
    quicksort(a,0,n-1);
    t = clock() - t;
    time_consumed = ((double)t) / CLOCKS_PER_SEC;
    printf("quick() took %f seconds for execution of some value.. \n", time_consumed);
    // printf("after the merging element become\n");
    for (int i = 0; i < n; i++)
    {
        //    printf("%d ", a[i]);
    }
    return 0;
}