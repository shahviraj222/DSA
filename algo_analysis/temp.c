#include <stdio.h>

struct jobSeq
{
    int jobID, deadline, profit;
};

// typdef struct jobSeq js;

int main()
{
    int n, max = -1;
    printf("Enter a number: ");
    scanf("%d", &n);
    struct jobSeq s[1000], temp;

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the job number: ");
        scanf("%d", &s[i].jobID);
        printf("Enter the Deadline: ");
        scanf("%d", &s[i].deadline);
        printf("Enter the Profit: ");
        scanf("%d", &s[i].profit);

        if (max < s[i].deadline)
        {
            max = s[i].deadline;
        }
    }

    // Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].profit < s[j + 1].profit)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    int final[max];
    for (int i = 0; i < max; i++)
    {
        final[i] = -1;
    }

    // for(int i = 0; i < max; i++) {
    //     printf("%d ", s[i].profit);
    // }

    for (int i = 0; i < n; i++)
    {
        if (final[s[i].deadline - 1] == -1)
        {
            final[s[i].deadline - 1] = s[i].jobID;
            // printf("hello: %d", s[i].jobID);
        }
        else
        {
            for (int j = 0; j < s[i].deadline - 1; j++)
            {
                if (final[j] == -1)
                {
                    final[j] = s[i].jobID;
                    // printf("hello: %d", s[i].jobID);
                }
            }
        }
    }

    for (int i = 0; i < max; i++)
    {
        printf("%d ", final[i]);
    }

    return 0;
}