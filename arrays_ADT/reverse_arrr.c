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
// auxilary method
void reverse(struct arr *A1)
{
    int b[A1->length];
    for (int i = A1->length-1, j=0; i>=0;j++,i--)
    {
        b[j]=A1->a[i];
    }
    printf("\n");
    for (int i = 0; i < A1->length; i++)
    {
      A1->a[i]=b[i];
    }
    
    
}
// inter changed method 
void reverse_inter(struct arr *A1)
{
   int temp;
   int i=0;
   int j=A1->length-1;
   while (i<j)
   {
    // printf("performig this ");   
    temp=A1->a[i];   
    A1->a[i]=A1->a[j];
    A1->a[j]=temp;
    i++;
    j--;
   }
    
}
int main()
{
    struct arr a1 = {{10, 5, 6, 1, 51, 515, 54, 84, 50}, 10, 9 };
    reverse_inter(&a1);
    display(&a1);
    return 0;
}