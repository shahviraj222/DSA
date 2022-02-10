#include <stdio.h>
int factorial(int a);
int main()
{   int a;
    printf("Enter the value of to find the factorial   ");
    scanf("%d",&a);
    printf("%d",factorial(a));
    return 0;
}
// we use the recurstion due to  we have  direct formula
// factorial(x)=x*factorial(x-1)
//  4!=4*3!
// //
int factorial(int a)
{
    if (a==0 || a==1)
    {
        return 1;
    }
    else
    {
       
        return a*factorial(a-1);
        printf("\n %d* %d\n",a,factorial(a-1));
        
    }
    
}