// vector is superset of arrays 
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
// vextor is used when we don't know the size of array
// vector is advanced option
vector<int> arr ={10,2,4,6,45,80};
int main()
{
    cout<<"your elements are printed as"<<endl;
    for (int i = 0; i <arr.size(); i++)
    {
        cout<<arr[i]<<"  ";
    }
 


    // many function of vector is simplify in one line of code
    // front()
    // empty()
    // back()
    // clear()
    // sort()
    // size()
    // push_back()
    // pop_back()
    cout<<"\nsize of your array is"<<arr.size();
    cout<<"\nusing clear function and then print value of size ";
    // arr.clear()
    cout<<"\nafter using clear function value of size is:"<<arr.size();
    cout<<"\nyour last element is:"<<arr.back();                              //  give last element of array
    cout<<"\nusing empty return value:"<<arr.empty();                        // if array doesn't have value then it return 1  
    cout<<"\nfront function give:"<<arr.front();                            //value at index zero
    arr.push_back(156);                                                     //adding element
    arr.push_back(210);
    arr.pop_back();                                                        //deleting element from array or vector 
    // sorting array using sort function
    cout<<"\nsorted arrays is ";
    sort(arr.begin(),arr.end());
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    // arr.begin() is a pointer variable it points starting element of vector/array
        cout<<"\npointing beging of array or vector:"<<*arr.begin();
   
    // don't use as value it give error some times
        cout<<"\npointing end of array or vector:"<<*arr.end(); 
}