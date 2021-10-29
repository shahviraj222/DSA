#include<iostream>
#include<conio.h>
using namespace std;
// here multipication is doing for m times or 10 (m=10) times.
int fun(int n,int m)
{
    if(m>0)
    {
        return fun(n,m-1)*n;
    }
    return 1;
}
// this is powerfull verison because it take only 6 multipyer 
int fun1(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    if(m%2==0)
    {
        return fun1(n*n,m/2);
    }
    else
    {
        return n*fun1(n*n,m/2);
    }
}
int main()
{
   int n=2,m=0,temp=1; 
//    here n^m is calculated
   cout<<"your answer is "<<fun1(n,m);  
//    for (int  i = 0; i < m; i++)
//    {
//        temp=temp*n;
//    }
//     cout<<"your answer is "<<temp;
}