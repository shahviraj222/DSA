#include<iostream>
#include<conio.h>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}
int main()
{
    int n=2; 
    // this is take fist num as : 1,2,3 
    cout<<"your sum of all number is "<<fun(n); 
    // here below my formula take first term 0 :  0,1,2,3
    n++;
    cout<<"your sum of all number is "<<(n*(n-1))/2;  
}