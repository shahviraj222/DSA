#include<stdio.h>
int main()
{
    int arr [2][3]={{23,54,65},{54,45,66}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the value of matrix is %d%d is%d\n ",i,j,arr[i][j]);
        }
        
    }
    
    return 0;

}