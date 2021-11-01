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
int max(struct arr a1)
{
    int max;
    max=a1.a[0];
    for (int i = 0; i < a1.length; i++)
    {
        if(max<a1.a[i])
        {
            max=a1.a[i];
        }
    }
    return max;
}
int min(struct arr a1)
{
    int max;
    max=a1.a[0];
    for (int i = 0; i < a1.length; i++)
    {
        if(max>a1.a[i])
        {
            max=a1.a[i];
        }
    }
    return max;
}
//finding both element max and min in one scan
int max_min(int *a)
{
    int min=a[0],max=a[0];
    int i=0;
    while (i<10)
    {
      if (a[i]<min)
      {
          min=a[i];

      }
      else if (a[i]>max)
      {
         max=a[i];
      }
        i++;
    }
    printf("max=%d min=%d",max,min);
    
}
int main()
{
    struct arr a1 = {{0, 5, 6, 1, 51, 20, 54, 84, 50,0 }, 10, 10};
    int x;
    int a[10]={0, 5, 6, 1, 51, 20, 154, 84, 50,0 };
    x=min(a1);
    printf("Your maximum number in array is:%d\n",x);
    max_min(a);
    return 0;
}