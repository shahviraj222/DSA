#include <stdio.h>
#include <stdlib.h>
int checkBitonic(int arr[], int n)
{
    int i, j;
    // Check for increasing sequence
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            continue;

        if (arr[i] <= arr[i - 1])
            break;
    }

    if (i > n - 1)
        return 1;
    // Check for decreasing sequence
    // here my j=i+1 is game changer
    for (j = i + 1; j < n; j++)
    {
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
    if (r >= l)
    {
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
int descendingBinarySearch(int arr[], int low, int high, int key)
{
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int max(int a[], int n)
{
    int max = a[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}
int bitsearch(int arr[], int n, int k)
{
    int max_index;
    int r1;
    printf("Your bitonic array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    max_index = max(arr, n);
    r1 = binarySearch(arr, 0, max_index - 1, k);
    if (r1 == -1)
    {
        r1 = descendingBinarySearch(arr, max_index, n - 1, k);
    }

    return r1;
}
int main()
{
    int k, n, r;
    printf("Entre the total element in Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element:", i + 1);
        scanf("%d", &arr[i]);
    }
    r = checkBitonic(arr, n);
    if (r == 0)
    {
        printf("Your array is not bitonic");
    }
    else
    {
        printf("Enter the key element:");
        scanf("%d", &k);
        r = bitsearch(arr, n, k);
        if (r == -1)
        {
            printf("Your element not find the array");
        }
        else
        {
            printf("Your element find at index number:%d", r);
        }
    }

    return 0;
}