// remove * and leftmost charater of string
// input = viraj**
// output = vir

#include <stdio.h>
#include <stdlib.h>

void removeStars(char *s)
{
    int i = 0;
    while (s[i])
    {
        i = i + 1;
    }
    int j = 0,k=0,temp,n=i;
    char ptr[n];
    i = 0;

    while (s[i])
    {
        if (s[i] == '*')
        {
            k = k + 1;
            if (j > 0)
            {
                temp = j;          // original value
                j = j - 1;
                if (ptr[j] == '*') // previous one is start than
                {
                    do
                    {
                        j = j - 1;
                    } while (ptr[j] == '*');
                    ptr[j] = '*';
                    j = temp;
                }
                else
                {
                    ptr[j] = '*';
                    j = temp;
                }
            }
        }

        ptr[j] = s[i];
        j = j + 1;
        i = i + 1;
    }

    printf("Ptr\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", ptr[i]);
    }

    i = 0, j = 0;
    int total = k * 2;

    k = n - total;
    char result[k];

    while (s[i])
    {
        if (ptr[i] != '*')
        {
            result[j] = ptr[i];
            j = j + 1;
        }
        i = i + 1;
    }
    printf("\nResult\n");
    for (int i = 0; i < k; i++)
    {
        printf("%c", result[i]);
    }
}

int main()
{
    char s[] = "leetcode****vghjbnm";
    char *a;
    removeStars(s);
    return 0;
}
