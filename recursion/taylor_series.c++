#include<iostream>
#include<conio.h>
using namespace std;
float e(int x, int n)
{
    float r;
    static float p=1;
    static float f=1;
    if (n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return (r+float(p/f));
    }
    
}
int main()
{
    int x=5,n=1;
    printf("%.2f",e(x,n));
    return 0;
}