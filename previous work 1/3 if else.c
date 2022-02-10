#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("\nEnter the number to check weather is even or odd ");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
    printf("\n the number is even\n ");
    }
    else
    {
     printf("\nThe number is odd\n");   
    }
    
}
