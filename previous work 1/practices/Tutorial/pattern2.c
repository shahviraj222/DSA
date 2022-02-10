#include<stdio.h>
int pattern(int number)
{
    for (int i = 0; i <=number; i++)
    {
        for (int j = 0; j <(2*i); j++)//odd ke liye (2*i)+1 
        {
           printf("*\t");
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