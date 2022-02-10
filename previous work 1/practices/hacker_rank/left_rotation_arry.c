#include<stdio.h>
#include <stdlib.h>
int main()
{
  int n,d;
  printf("enter the total length of arry and no of rotation:");
  scanf("%d %d",&n,&d);
  int *arr=(int*)malloc(n * (sizeof (int)));
  for (int i = 0; i < n; i++)
  {
      printf("enter your %d element:",i+1);
      scanf("%d",&arr[i]);
  }
  
  int *a,*b;
  a=&arr[0];
  b=&arr[n-1];
  for (int  i = 0; i < d; i++)
  {
     int temp;
    b++;
    *b=*a;
    a++;

  }
    printf("the vlaue of element after changing is\n");
    n=n+d;

    for (int i = d; i < n; i++)
  {
      printf("%d",arr[i]);
  }
  
  return 0;
}