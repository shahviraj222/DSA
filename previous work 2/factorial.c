#include<stdio.h>
#include<stdlib.h>
float factorial(int n)
{
    if( n==1 || n==0)
    {   if(n==0)
        printf("%d",n);
        else
        printf("%d*",n);
        return 1;
    }
    else
    {
        printf("%d*",n);
        return n*factorial(n-1);
    }
   
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    printf(" = %.0f",factorial(num));
    return 0;
}