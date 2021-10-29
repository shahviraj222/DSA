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
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
// **** transpostion method ***
// use transposition method to reduce time when same element is search agian
// here key element goes to to front when search again and agian
int search(struct arr *a1, int data)
{
    for (int i = 0; i < a1->length; i++)
    {
        if ( a1->a[i] == data)
        {
            swap(&a1->a[i],&a1->a[i-1]);
            return i-1;
        }
       
    }

     return -1;
        
}

//**** move to front ****   
// in this method key element put at index 0,so if they call again then noo time waste to search
// this is how relevant search work

int search_move(struct arr *a1, int data)
{
    for (int i = 0; i < a1->length; i++)
    {
        if ( a1->a[i] == data)
        {
            swap(&a1->a[i],&a1->a[0]);
            return 0;
        }
       
    }

     return -1;
        
}
int main()
{
    int key = 50;
    int index;
    struct arr a1 = {{10, 5, 6, 1, 51, 515, 54, 84, 50, 60}, 10, 10};
    index = search_move(&a1, key);
    display(&a1);
    // here my compilare always go from right to left approach
    // first my index=1 is printed then index incremented and then index=2 is printed 
    //                              <<<<<<--------- right left compilar behavior  -------<<<<<<
    // printf("your elemetn find at index %d and postion is %d", index ,index++ );
    printf("\nyour elemetn find at postion %d and index is %d", index ,index++ );
    return 0;
}
