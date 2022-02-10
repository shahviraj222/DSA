#include <stdio.h>
int main()

{
    int i,a,b;
    b = 1;
    printf("ENTER THE NUMBER TO PRINT FACTORIAL \n");
    scanf("%d",&a);
    

    for(i=a;i>0;i--)
    {
       b*=i;

    }
    printf("the factorial of %d!=%d\n",a,b);
    return 0;

}