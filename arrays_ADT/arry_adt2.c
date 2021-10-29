#include<stdio.h>
#include<stdlib.h>
struct arr
{
    int *a;
    int size;
    int length;

};
void display(struct arr a1)              //passing throug array
  {
    printf("Your element:");
    for (int  i = 0; i<a1.length; i++)
    {
       printf("%d ",a1.a[i]);
    }
        
}
int main()
{
    struct arr a1;
    printf("Enter the size of array:");
    scanf("%d",&a1.size);
    printf("Enter the total number of array:");
    scanf("%d",&a1.length);
    a1.a=(int *) malloc(a1.size*(sizeof(int)));
   for (int  i = 0; i <a1.length; i++)
   {
       printf("Enter element:");
       scanf("%d",&a1.a[i]);
   }
   display(a1);
    return 0;
}