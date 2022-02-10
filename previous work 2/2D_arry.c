#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[3][3],b[3][3],c[3][3];
  printf("enter 3*3 matrix 1:\n");
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
         scanf("%d",&a[i][j]);      
      }
      
  }
  printf("enter 3*3 matrix 2:\n");
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
         scanf("%d",&b[i][j]);      
      }
      
  }
  // Multipying two matrix 
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          int sum=0;
          for(int k=0;k<3;k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j]=sum;
      }
      
  }
  printf("your resulten matrix is\n");
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
         printf("%d  ",c[i][j]);      
      }
      printf("\n");
  }
  return 0;
}