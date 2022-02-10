#include <stdio.h>
int main()
{
   
    int i, j, n;
    int k=1;
    printf("Enter No of lines::");
    scanf("%d",&n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-1; j++)
        {   
            printf("   ");
            
        }
        for ( j = 1; j <=i; j++)
        {
         
        //  printf("%d ",k);//for print the numbers
        //  k++;
       printf("* ");
        
        }
        printf("\n");
        

        
    }

    return 0;
}
 