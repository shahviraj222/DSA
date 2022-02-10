#include<stdio.h>
int main() 
{
    int a, b;
    printf("Enter the two numbers:");
    scanf("%d\n%d", &a, &b);
  	// Complete the code.) {
          int arr[2]={a,b};
          for (int i=0; i<2;i++) 
          {
          
    if(arr[i]==1)
    {   
        printf("one\n");
    }
    else if (arr[i]==2)
    {
        printf("two\n");
    }
      else if (arr[i]==3)
    {
        printf("three\n");
    }
      else if (arr[i]==4)
    {
        printf("four\n");
    }
      else if (arr[i]==5)
    {
        printf("five\n");
    }
      else if (arr[i]==6)
    {
        printf("six\n");
    }
      else if (arr[i]==7)
    {
        printf("seven\n");
    }
      else if (arr[i]==8)
    {
        printf("eight\n");
    }
      else if (arr[i]==9)
    {
        printf("nine\n");
    }
      else if (arr[i]>9)
    {
        printf("nine\n");
    }
    
          }
          for (int i=0;i<2; i++) {
         int c,d;
         c=arr[i]%2;
         if (c==1)
         {
             printf("odd\n");
         }
         else {
         printf("even\n");
         }
          }
    return 0;
}

