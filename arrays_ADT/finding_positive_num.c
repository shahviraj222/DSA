#include<stdio.h>
#include<stdlib.h>
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
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void find_postive(struct arr *a1)
{
    int i=0;
    int j=a1->length-1;
  while (i<j)
  {
     while (a1->a[i]<0)            //stop this loop when postive number find
     {
         i++;
     }
    
     while (a1->a[j]>=0)           // stop when negative number find
     {
        j--;
     }

     if(i<j)
     {
         swap(&a1->a[i],&a1->a[j]);
     }
     
  }
  
}

int main()
{
    struct arr a1={{-1,-2,5,20,6,-5,20,60,-6,10},10,10};
    find_postive(&a1);
    display(a1);
    return 0;

}