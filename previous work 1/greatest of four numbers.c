#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four number \n");
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);
       scanf("%d",&d);
       if (a>b && a>c && a>d)
       {
           printf("%d the number is greaters",a);

       }
       else if (b>c && b>d && b>a)
       {
            printf("%d the number is greaters",b);
       }
       else if (c>a && c>b && c>d)
       {
            printf("%d the number is greaters",c);
       }
       else if (d>a && d>b && d>c)
       {
            printf("%d the number is greaters",d);
       }
    return 0;

}