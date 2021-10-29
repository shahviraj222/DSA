#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    if(n>0)
    {   
        printf("%d *",n);
        return factorial(n-1)*n;
    }
    return 1;
}
int main()
{
    int n=4,temp=1;
    cout<<"value of your factorial is "<<factorial(n);
    // using for loop
    // for (int  i=1; i <=n; i++)
    // {
    //    temp=temp*i; 
    // }
    cout<<"value of your factorial is "<<temp;
    return 0;
}