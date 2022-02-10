#include<stdio.h>
int main()
{
    int n,a,sum=0,m;
    printf("Enter the number");
    scanf("%d",&n);//               DONT FORGET & 
    while (n!=0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("The sum of all digits %d\n",sum);
    return 0;
    
}