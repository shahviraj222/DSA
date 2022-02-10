#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rem,rev=0;
    printf("enter the num:");
    scanf("%d",&n);
    printf("the number after reversing ");
 while (n!=0)
 {
   rem=n%10;
   n=n/10;
   rev=(rev*10)+rem;
 }
 printf("%d",rev);
 return 0;   
}