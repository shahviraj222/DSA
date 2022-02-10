#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, n3;
    printf("\nEnter the length of fibonacci series::");
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        if (n == 1)
        {
            printf("%d", 0);
            goto label;
        }
        else
        {
            printf("%d    %d", 0, 1);
            goto label;
        }
    }

    printf("%d    %d     ", 0, 1);
    for (int i = 2; i < n; i++)
    {

        n3 = n1 + n2;
        //  printf("%d",n3);
        n1 = n2;
        n2 = n3;
        printf("%d    ", n3);
    }

label:
    printf("\n");
    return 0;
    
    
}