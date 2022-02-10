#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\nEnter the number\n");
    scanf("%d",&a);
    b=a%97;
    if(b==0)
    {
        printf("the %d is devisible by 97 \n",a);
    }
    else
    {
        printf("the %d is not devisible by 97\n",a);
    }
    return 0;

}