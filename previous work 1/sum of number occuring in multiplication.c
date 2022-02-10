#include <stdio.h>
int main()
{
    int i,a,b,c;
    c=0;
    printf("ENTER THE NUMBER TO FIND THE SUM OF IT'S TABLE \n");
    scanf("%d",&a);
    printf("The table of %d \n",a);
    for (i=1;i<11;i++)
    {
        b=a*i;
        printf(" %dx%d=%d\n",a,i,b);
        c+=b;

    }
    printf("THE SUM OF ALL OF THE ABOVE IS %d \n",c);
    return 0;
}