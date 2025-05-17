#include <iostream>
// using STL array Library 
#include <array>

using namespace std;

int main(){
    // u need to define a static array before a STL array 
    int stat[]={1,3,5};
    // WE have no need to perform any task on static array 


    array<int,4> arr = {1,2,3,4};
    cout<<arr.size()<<endl;
    cout<<"Give the element on 2nd array is "<<arr.at(2)<<endl;
    cout<<"Empty or not "<<arr.empty()<<endl;
    cout<<"Print the first element "<<arr.front()<<endl;



}

