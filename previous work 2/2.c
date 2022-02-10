#include<stdio.h>
int working_while(int a)
{
    printf("\n");
    while (a >= 5)          // "!=" and ">" both are meaning or uses in this way
    {
        printf("%d  ",a);
        a--;
    }
    
}
int main()
{
    int a=9;
    working_while(a);
    return 0;
}