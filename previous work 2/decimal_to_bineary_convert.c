#include<stdio.h>
int main()
{
    int n,remainder;
    printf("enter the number to convertiion:");
    scanf("%d",&n);
    int quotient=n;
    int i=0; 
    int a[10];
    while (quotient) // whlie run for 1
    {
        remainder=quotient%2;
        quotient=quotient/2;
        a[i]=(remainder);
        i++;
    } 

  printf("your number in bit's is:");//  yoc can not use both loops togather there must be a seprator line 
  if (n==0)
  {
      for (int i = 0; i < 8; i++)
      {
      printf("%d ",0);
          /* code */
      }
      
  }
  else{
    for (int j =8; j >= 0; j--)
    {
        if(j<=i-1)
        {
        printf("%d ",a[j]);
        }
        else
        printf("%d ",0);
    }
  }
    return 0; 
    
}