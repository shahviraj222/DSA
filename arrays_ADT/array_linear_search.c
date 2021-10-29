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
int search(struct arr a1, int data)
{
    for (int i = 0; i < a1.length; i++)
    {
        if ( a1.a[i] == data)
        {
            return i;
        }
       
    }

     return -1;
        
}
int main()
{
    int key = 50;
    int index;
    struct arr a1 = {{10, 5, 6, 1, 51, 515, 54, 84, 50, 60}, 10, 10};
    display(&a1);
    index = search(a1, key);
    // here my compilare always go from right to left approach
    // first my index=1 is printed then index incremented and then index=2 is printed 
    //                              <<<<<<--------- right left compilar behavior  -------<<<<<<
    // printf("your elemetn find at index %d and postion is %d", index ,index++ );
    printf("\nyour elemetn find at postion %d and index is %d", index ,index++ );
    return 0;
}
