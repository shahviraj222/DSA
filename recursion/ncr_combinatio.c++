#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    int result=1;
    for (int i=n; i >0; i--)
    {
        result=result*i;
    }
    return result;
}
// itterative methode
float combination(int n,int r)
{
    int a,b,c;
    a=factorial(n);
    b=factorial(n-r);
    c=factorial(r);
    return a/(b*c);
}
int combination_recursion(int n,int r)
{
    if(r==0 || n==r)
    {
        return 1;
    }
    else
    {
        return combination_recursion(n-1,r-1)+combination_recursion(n-1,r);
    }
}
int main()
{
    int n=6,r=1;
    cout<<"your answer is "<<combination(n,r);
    cout<<"\nyour answer is "<<combination_recursion(n,r);
    return 0;
}