#include<iostream>
#include<conio.h>
using namespace std;
int e(int x , int n)
{   static float s=1;
    if(n==0)
    {
        return s;
    }
    else
    {
        s=1+float(x/n)*s;
        e(x,n-1);
    }
}
int main()
{
    int x,n;
    float s=1;
    cout<<"Enter the value of x and n:";
    cin>>x>>n;
    cout<<"Answer of your taylor series is:"<<e(x,n);
    // iterative method
    for ( ; n>0 ; n--)
    {
        s=1+(((float)x/n))*s;
    }
    cout<<"\nusing iterative methode:"<<s;
    
    return 0;
}