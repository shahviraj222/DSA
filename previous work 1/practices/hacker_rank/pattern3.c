#include <stdio.h>
int main()
{
    int n;
    printf("length of sequre:");
    scanf("%d", &n);
    int t = n;
    int p = t;
    // for row
    for (int i = 1; i <= 2 * n - 1; i++)
    {                if (i>1 && i<n)
                    {
                        /* code */
                        p--;
        
                    } 
                    else if (i>n+1)
                    {
                        p++;
                    }
                    
        // for printing column
        for (int j = 0; j < 2 * n - 1; j++)
        {   
            if (j == 0 || j == 2 * n - 2 || i == 1 || i == 2 * n - 1)
            {
                printf("%d ", t);
            }
            else
            {
                if (i == n && j == n - 1)
                {
                    printf("%d ", 1);
                   
                }
                else
                { 
                    
                    printf("%d ", p);
                }
            }
        }
        printf("\n");
    }

    return 0;
}