#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the no to you print\n");
    scanf("%d",&a);
    a++;
    b=0;
    do
    {
    printf("%d \n",b);
    b++;
    } while (b<a);
    
    return 0;

}