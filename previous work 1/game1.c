#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

int main()

{
    int a,n,g1,g2,ng1,ng2;
    ng1=0;
    ng2=0;
    srand(time(0));
    n=rand()%10+1;
    char x[200];
    char t[200];
    printf("%d the random number\n",n);
  
    printf("\n                        WELCOME IN THE GAME POWER BY VIRAJ                              \n");
  
    printf("Enter the name of first plyer   ");
    scanf("%s",x);
    printf("Enter the name of second plyer  ");
    scanf("%s",t);
  if (strcmp(x,t) == 0) // x-t == 0
  {
    printf("Enter the name of second  other then first plyer  ");      
    scanf("%s",t);
  }
  do
  { printf("guess the number");
    
    scanf("%d",&g1);
    if (g1>n)
    {
        printf("Enter lower one\n");
    }
    else if (n>g1)
    {
         printf("Enter higer one\n");
    }
    else
    {
         printf("you got it\n");
    }
    
    ng1++;
  } while (g1!=n);
  // printf("you're guess are %d\n",ng1);

   printf("now the dain of second plyer\n");
      srand(time(0));
    n=rand()%10+1;
  
    printf("%d the random number\n",n );
   do
  { printf("guess the number");
    
    scanf("%d",&g2);
    if (g2>n)
    {
        printf("Enter lower one\n");
    }
    else if (n>g2)
    {
         printf("Enter higer one\n");
    }
    else
    {
         printf("you got it\n");
    }
    
    ng2++;
  } while (g2!=n);
   printf("%s the guess atepmnt of %d    ",x,ng1);
   printf("%s the guess atepmnt of %d",t,ng2);
   
  if (ng1>ng2)
  {
    printf("\n%s is winner\n",t);
  }
else if (ng2>ng1)
{
   printf("\n%s is winne\nr",x);
}
else
{
    
    printf("\nTIE TRY AGINE\n");
}


    return 0;
}