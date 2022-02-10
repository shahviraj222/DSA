#include <stdio.h>
int revpattern(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = number; j > i; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
int pattern(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n, i;
    printf("To print in reverse order 0, to print in star order 1::");
    scanf("%d", &i);
    printf("Enter the value to print number of stars::");
    scanf("%d", &n);
    if (i == 0)
    {
        revpattern(n);
    }
    else
    {
        pattern(n);
    }

    return 0;
}