#include <stdio.h>
int main()
{
    int *arr[10];             // arry index is 9 and first elememt is arr[0]
                              // last element of arry is arr[9] also arr[n-1]
                              // where n is length of arry
    int length = sizeof(arr) / sizeof(arr[0]); //// this function give number of arry present or length of arry
    printf("%d",length);
    return 0;
}