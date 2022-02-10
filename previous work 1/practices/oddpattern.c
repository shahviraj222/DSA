#include <stdio.h>
void printpattern (int a);
int main()
{
    int a;
    printf("Enter the numer of line of pettern\n");
    scanf("%d",&a);
    printpattern (a);
    return 0;
}
void printpattern (int a)
{
    int i,j;
    for (i=0;i<a;i=i++)
    {  //i=i+1;for simple pattern
    //i=i+2;for even pattern
    i=i+3;
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
}