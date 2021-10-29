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
void leftshift(struct arr *a1,int time)
{
    for (int j = 0; j < time; j++)
    {
        
        for (int i = 0; i <a1->length-1; i++)
        {
              swap(&a1->a[i],&a1->a[i+1]);
        }
          
    }  
     
        
        for (int i = 0; i <time; i++)
        {
              a1->a[a1->length-1-i]=-1;
        }
     
}
void left_rotation(struct arr *a1,int time)
{
      for (int j = 0; j < time; j++)
    {
        
        for (int i = 0; i <a1->length-1; i++)
        {
              swap(&a1->a[i],&a1->a[i+1]);
        }
          
    }  
}
int main()
{
    int x=1;
    struct arr a1 = {{1, 2, 50, 55, 56, 450, 451, 623, 625, 800}, 10, 10};
    left_rotation(&a1,x);
    display(a1);
    return 0;
}   