#include<stdio.h>
int pattern(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j <=i; j++)
        {
           printf("*\t");
        }
        printf("\n");
        
    }
    return 0;
    
}

int main()
{   int n;
    printf("Enter the value to print number of stars");
    scanf("%d",&n);
    pattern(n);
    return	0;
}