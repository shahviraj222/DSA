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
    for (int i = 1; i < a1->length; i++)
    {
        printf("%d ", a1->a[i]);
    }
}
int sum(struct arr a1)
{
    int temp=0;
    for (int i = 0; i < a1.length; i++)
    {
        temp=temp+a1.a[i];
        // printf("%d ",temp );
    }
    return temp;
    
}
int sum_recursive(struct arr a1,int n)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        return sum_recursive(a1,n-1)+a1.a[n];
    }
    
}
float avg(struct arr a1)
{
     int temp=0;
     float avg;
    for (int i = 0; i <a1.length; i++)
    {
        temp=temp+a1.a[i];
    }
    return avg = (float)temp/a1.length;
}
int main()
{
      struct arr a1 = {{0, 5, 6, 1, 51, 20, 54, 84, 50,0 }, 10, 10};
      printf("Total Sum is %d\n",sum(a1));
      printf("Total Sum is %d\n",sum_recursive(a1,9));
      printf("Average is %.2f",avg(a1));
      
}