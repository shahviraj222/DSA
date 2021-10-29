#include <stdio.h>
#include <stdlib.h>
struct arr
{
    int a[10];
    int size;
    int length;
};
void display(struct arr a1)
{
    for (int i = 0; i < a1.length; i++)
    {
        printf("%d ", a1.a[i]);
    }
}
int sorted_or_not(struct arr a1)
{
    for (int i = 0; i < a1.length - 1; i++)
    {
        if (a1.a[i] > a1.a[i + 1])
        {
            printf("Your array is not sorted");
            return -1;
        }
    }
    printf("Your array is sorted");
    return 1;

}
int main()
{
    struct arr a1 = {{1, 5, 6, 10, 50, 100, 200}, 10, 7};
    sorted_or_not(a1);
    return 0;
}