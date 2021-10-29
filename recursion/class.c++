
#include <iostream>
#include<conio.h>
#include<stdio.h>
// use this line to excute the cout and cin functions
using namespace std;
class rectangle
{
    private:
    int length,breath;
    public:
    rectangle(int l,int b)
    {
        length=l;
        breath=b;
    }
    int area()
    {
        return (length*breath);
    }
};

int main()
{
    rectangle r(10,50);
    int z=r.area();
    cout << "your out put is" << z ;
    return 0;
}