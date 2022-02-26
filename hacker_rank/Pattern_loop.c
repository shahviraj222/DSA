                            // 4 4 4 4 4 4 4  
                            // 4 3 3 3 3 3 4   
                            // 4 3 2 2 2 3 4   
                            // 4 3 2 1 2 3 4   mirror line above and below pattern is same 
                            // 4 3 2 2 2 3 4   
                            // 4 3 3 3 3 3 4   
                            // 4 4 4 4 4 4 4   

// breaking above problem in two diffrent way
// part1            part2                    part3
//                  4 4 4 4 4 4 4         
// 4                3 3 3 3 3                  4 
// 4 3              2 2 2                      3 4    
// 4 3 2            1                          3 2  4 

// and after the mirror part we have to copy same logic with some changes
#include<stdio.h>
int main()
{
    int i,j,k,n;
    n=5;
    for (i = n; i>=1; i--)
    {
        // part1
        for (k =n; k>i; k--)
        {
            printf("%d",k);
        }
        // part2
        for ( j =1; j<=2*i-1; j++)
        {
            printf("%d",i);
        }
        // part3
        for (int m=i+1; m<=n;m++)
        {
            printf("%d",m);
        }    
        printf("\n");
    }
    
     for (i =1; i<n; i++)
    {
        for (j=n ; j>i ; j--)
        {
            printf("%d",j);
        }
        for (int m=0;m<2*i-1; m++)
        {
            printf("%d",i+1);
        }
         for ( int a =i+1; a<=n; a++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    
    return 0;
}