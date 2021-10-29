#include<iostream>
#include<conio.h>
using namespace std;
int neasted_recursion(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return neasted_recursion(neasted_recursion(n+11));
    }
}
int main()
{   int r;
    cout<<"your out put is "<<neasted_recursion(97);
    return 0;
}