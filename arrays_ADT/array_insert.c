#include <stdio.h>
#include <stdlib.h>
// ARRAY STRUCTURE
struct arr
{
    int *a;
    int size;
    int length;
};
// DISPLAY ELEMENT INSIDE THE HEAP MEMORY
void display(struct arr a1) //passing throug array
{
    printf("Your element:");
    for (int i = 0; i < a1.length; i++)
    {
        printf("%d ", a1.a[i]);
    }
}
// INSERTING AT ANY INDEX 
void insert(struct arr *a1, int index, int data)
{
    if (index > a1->size)
    {
        printf("invalid index OVER FLOW");
    }
    else
    {
       
    }
}
int change(struct arr *a1,int index, int data)
{
    int temp;
    if(index > a1->length)
    {
        printf("INVALID OVER FLOW");
    }
    else
    {
        a1->a[index] = data;
    }
    return temp;
}
int main()
{
    struct arr a1;
    printf("Enter the size of array:");
    scanf("%d", &a1.size);
    printf("Enter the total number of array:");
    scanf("%d", &a1.length);
    if (a1.length > a1.size)
    {
        printf("ERROR OVER FLOW");
    }
    else
    {
        a1.a = (int *)malloc(a1.size * (sizeof(int)));
        for (int i = 0; i < a1.length; i++)
        {
            printf("Enter element:");
            scanf("%d", &a1.a[i]);
        }
        insert(&a1, 5, 50);
        display(a1);
        

    }
    // change(&a1,4,1000);
    return 0;
}