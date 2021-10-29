#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
// here 'r' is for rows and 'c' is for colums
int r=4,c=5;
vector<vector<int>> arr(r,vector<int>(c));
// we can access element in vector by using 
// arr[3][4];
// also access by anothere way is
auto row = arr[2];

int main()
{
    row[0]=200;                       // we can give value to the a[2][0] element by this way
    cout<<"a[2][0]="<<row[0];
    cout<<"size of vector's row is:"<<arr.size()<<endl;
    cout<<"size of vector's colums is:"<<arr[1].size();
}