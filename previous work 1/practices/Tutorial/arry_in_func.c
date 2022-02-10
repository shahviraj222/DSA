#include <stdio.h>
int fun(int b[50])
{   int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        /* code */

        
        sum = sum + b[i];
       
    }
     return sum;
}
int main()

{
    int
        ans;
    int arr[50] = {12, 23, 23, 43, 344, 1, 2, 98, 0, 790};
    ans = fun(arr);              // Passing arry in function

    printf("The value of all the sum is %d\n", ans);

    return 0;
}