#include<iostream>
#include<conio.h>
using namespace std;
int fibona(int n)
{
    if(n<=1)
{
    return n;
}
else
{
    return fibona(n-2)+fibona(n-1);
}
}
int main()
{
    int n=8,a=0,b=1,c=0;
    printf("%d\n",fibona(n));
    // using itterative method
    // printing fibonaci series
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i<n-1; i++)
    {   
        c=a+b;
        printf("%d ",c);
        //if you want to print fibonaci series
        a=b;
        b=c;
    }
    printf("\n%d",c);
    return 0;
}
