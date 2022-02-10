#include<stdio.h>
int factorial(int number)
{   
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);
        
    }

}
int main()
{   int n,ans;
    printf("Enter the number");
    scanf("%d",&n);
    ans=factorial(n);
    printf("%d!=%d",n,ans);
    return 0;
}