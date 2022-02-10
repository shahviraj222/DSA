#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter the to print the numbers table\n");
    scanf("%d",&a);
    
    for ( b = 1;b<11;b++)
    {c=a*b;
      printf("%d x %d = %d \n",a,b,c);

    }
    
    return 0 ;

}