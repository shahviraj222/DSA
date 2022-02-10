// diffrence between the linear search and bianry search is that in binary search array must be
// in sorted form bubble sorted element all
// where as in linear search the data is unorderd like random but binary searrch is very usefull
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    int *arry = (int *)malloc(n * sizeof(int));
    printf("\a Enter the total size of arry\a \a \a");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array");
        scanf("%d", &arry[i]);
    }
    int temp, j = 1;
    for (int k = 0; k < n; k++)
    { // int j=1; declaration here            ***imp***
        for (int i = 0; i < n - k - 1; i++)
        {
            if (arry[i] > arry[i + 1])
            {
                temp = arry[i];
                arry[i] = arry[i + 1];
                arry[i + 1] = temp;
                //j++;
                // very imp if you want to use j inside of i+1
                //first you will be declare j inside the first for loop**
            }
            // j++; increment here             ***imp***
        }
    }
   
    
    int s;
    printf("Enter the number to find in the given arry");
    scanf("%d", &s);
    int h, l, m;
    l = 0; //not write using ','
    h = n - 1;
    //printf("h=%d",h);
    //printf("\nn=%d\n",n);
    m = (l + h) / 2;//
    // imp ********************* DONT FORGET BEHAVIOR OF COMPILER ***************************************
    // ********* If you write m=l+h/2; then compiler first divied h/2 then add to l whole answer will change
    int q = 0;
    for (int i = 0; i < n; i++)
    { // printf("m= %d",m);
        if (s == arry[m])
        {
            printf("your element is find in postion[]\n");
            q = 1;
            break;
        }
        else if (s > arry[m])
        {
            l = m + 1;
            m =( l + h) / 2;
        }
        else if (s < arry[m])
        {
            h = m - 1;
            m = (l + h) / 2;
        }
    }
    if (q == 0)
    {
        printf("element not in array\n");
    }
    return 0;
}