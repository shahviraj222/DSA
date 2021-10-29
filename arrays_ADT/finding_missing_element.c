#include <stdio.h>
#include <stdlib.h>
// if one element is missing elemeent then
int missing_element(int a[])
{
    int diff = 10, count = 0;
    int missing_ele[5];
    for (int i = 1, j = 0; i < 5; j++, i++)
    {
        if (a[i] - i != diff)
        {
            return diff + i;
        }
    }
    return 1;
}
// if missing one or more missing element
int missing_element2(int a[])
{
    int diff = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] - i != diff)
        {
            while (diff < a[i] - i)
            {
                printf("%d ", diff + i);
                diff++;
            }
        }
    }
}
int main()
{
    int arr[10] = {10, 11, 12, 14, 15, 17, 18, 19, 21, 23};
    printf("%d", missing_element2(arr));
    return 0;
}