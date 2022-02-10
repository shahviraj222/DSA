#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    int *arry = (int *)malloc(n * sizeof(int));
    printf("Enter the total size of arry");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array");
        scanf("%d", &arry[i]);
    }
    int temp, j = 1;
    for (int k = 0; k < n ; k++)
    {   // int j=1; declaration here            ***imp***
        for (int i = 0; i < n-k-1; i++)
        {
            if (arry[i] > arry[i+1])
            {
                temp = arry[i];
                arry[i] = arry[i+1];
                arry[i+1] = temp;
                //j++;
                // very imp if you want to use j inside of i+1
                //first you will be declare j inside the first for loop**
         
            }
            // j++; increment here             ***imp***
        }
    }
    for (int i = 0; i < n; i++)

    {
        printf("%d\n", arry[i]);
    }

    return 0;
}