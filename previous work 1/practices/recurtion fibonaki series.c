#include <stdio.h>
int fibonaki(int a);
int main()
{   int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("The value of given nutural number is %d \n",fibonaki(a));
} 
int fibonaki(int a)
{  
    if (a==1)
    {
        return 0;
    }
      else if(a==2)
    {
        return 1;
    }
    
    else 
    {
        return fibonaki(a-1)+fibonaki(a-2);
    }
    
}