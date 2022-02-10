#include<stdio.h>
int main()
{int a,p,b;
p=1;
printf("Enter number to check weather the number is prime or not\n");
scanf("%d",&a);
for(int i=2;i<a;i++)
{
    b=a%i;
    if (b==0 )
    {
      p=0;
      break;
    }
   
     
}
if (p==0)
{
    printf("The number is not a prime number \n  ");
}
else
{
   printf("The number is a prime numb\n  ");
}

     return 0;
}
 