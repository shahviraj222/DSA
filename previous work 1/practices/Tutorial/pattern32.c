#include<stdio.h>
int pattern(int number)
{
    for (int i = 0; i <number; i++)
    {     for (int k = i; k <number-1; k++)
        {
            printf("\t");
        }   
        
        for (int j = number; j >i; j--)
        {
        
        
           printf("*");
        }
        printf("\n");
        
        
    }
    return 0;
    
}

int main()
{   int n;
    printf("Enter the value to print line of stars");
    scanf("%d",&n);
    pattern(n);
    return	0;
}