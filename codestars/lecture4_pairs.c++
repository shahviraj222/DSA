// standard templet library
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
vector<pair<string,int>> comboinfo;
string name;
int score;
int main()
{
    cout<<"Enter the name and score of 5 students:";
    for (int i = 0; i < 5; i++)
    {
      cin>>name>>score;
      comboinfo.push_back(make_pair(name,score)); 
    }
    // printing your input 
    cout<<endl<<"your input is saved in vvector like"; 
     for (int i = 0; i < 5; i++)
    {
        cout<<"your ";
      
    }
    return 0;
    
}