#include<stdio.h>
int main()
{
  int m1,n1,n2,m2,sum=0;
  printf("enter the matrix dimension m*n\n");
  scanf("%d %d",&m1,&n1);
  printf("enter the matrix dimension m*n\n");
  scanf("%d %d",&m2,&n2);
  if(n1==m2)
  {
  int a[m1][n1],b[m2][n2],result[m1][n2];
  printf("enter your first matrix\n");
  for(int i=0;i<m1;i++)                    //if  my matrix is 3*4 then firt loop is  <3
  {                                       // and second loop is <4
      for(int j=0;j<n1;j++)
      {
          //printf("enter the element %d %d of your matrix\n",i,j);
          scanf("%d",&a[i][j]);
        //   printf("\t");
      }
    //   printf("\n");
  }
   printf("enter your second matrix\n");
  for(int i=0;i<m2;i++)                    //if  my matrix is 3*4 then firt loop is  <3
  {                                       // and second loop is <4
      for(int j=0;j<n2;j++)
      {
       //   printf("enter the element %d %d of your matrix",i,j);
          scanf("%d",&b[i][j]);
        //   printf("\t");
      }
    //   printf("\n");
  }

  for(int i=0;i<n1;i++)                    
  {                                      
      for(int j=0;j<m2;j++)
      {  // calculate multiplication of matrix
         for (int k=0;k<n1;k++)
         {
             sum=sum+(a[i][k])*(b[k][j]);
         }
         result[i][j]=sum;
         sum=0; 
      }
    
  }
   // printing the resultant 
   printf("the result of matrix\n");
       for(int i=0;i<m1;i++)                 
  {                                   
      for(int j=0;j<n2;j++)
      {
          printf("%d \t",result[i][j]);
      }
      printf("\n");
          
  }
  }
  else
  {
      printf("matrix multiplication is not valid \n");
  }

  return 0;
}