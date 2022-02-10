#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number you want to print");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int b = i + 1;
        printf("Enter the %d number:", b);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    free(arr);
    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}