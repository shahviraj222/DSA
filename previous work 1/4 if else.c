# include <stdio.h>
int main()
{
  int a,b;
  printf("\nEnter your age\n");
  scanf("%d",&a);
  if (a<90 && a>18)

  {
      printf("You are able to process further\n");
    
  }

  else {
  if (a>90)
  {
      printf("You are able to process further\n");
      
  }
  else
  {
      /* code */
  
  
  b=18-a;
  if (b==0)
  {
      printf("Apply above 18 year\n");
  }
  else
  
  {
      printf("apply after %d years\n",b);
  }
  }
  }

  
  return 0;
}