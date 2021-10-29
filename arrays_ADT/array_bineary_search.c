#include <stdio.h>
#include <stdlib.h>
struct arr
{
    int a[10];
    int size;
    int length;
};
void display(struct arr *a1)
{
    for (int i = 0; i < a1->length; i++)
    {
        printf("%d ", a1->a[i]);
    }
}
// itterative method
int bineary_search(struct arr a1, int key)
{
    int l = 0, h = a1.length - 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a1.a[mid])
        {
            return mid;
        }
        else if (key < a1.a[mid])
        {
            h = mid - 1;
        }
        else
        {

            l = mid + 1;
        }
    }
    return -1;
}

// recursive method
int binear_searchr(struct arr a1, int l, int h, int key)
{
    int mid = (l + h) / 2;
    if (l > h)
    {
        return -1;
    }

    else if (key == a1.a[mid])
    {
        return mid;
    }
    else if (key > a1.a[mid])
    {
        binear_searchr(a1, mid + 1, h, key);
    }
    else
    {
         binear_searchr(a1, l, mid-1, key);
    }
}
int main()
{
    // in bineary search yout take sorted array
    struct arr a1 = {{1, 2, 50, 55, 56, 450, 451, 623, 625, 800}, 10, 10};
    int result;
    result = bineary_search(a1, 625);
    display(&a1);
    printf("\nyour key element is find at index %d", result);
    result=binear_searchr(a1,0,a1.length,50);
    printf("\nyour key element is find at index %d", result);
    return 0;
}
