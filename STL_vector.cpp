#include<iostream>
// using STL Vector Library
#include<vector>
using namespace std;

int main(){
// we does not require to give the size in the vector it can manage by the no of element enter in it.
vector<int > vec;
cout<<"Capacity or space pesent -> "<<vec.capacity()<<endl;

vec.push_back(5);
cout<<"Capacity or space pesent -> "<<vec.capacity()<<endl;
cout<<"size -> "<<vec.size()<<endl;

vec.push_back(4);
cout<<"Capacity or space pesent -> "<<vec.capacity()<<endl;
cout<<"size -> "<<vec.size()<<endl;

vec.push_back(2);  
cout<<"Capacity or space pesent -> "<<vec.capacity()<<endl;  // here it doubles the size of the vector;
cout<<"size -> "<<vec.size()<<endl;

cout<<" Vector at First Index "<<vec.at(1)<<endl;
cout<<"The First Number of the vector "<<vec.front()<<endl;

for(int i:vec){
    cout<<i<<" ";
}
cout<<endl;

vec.pop_back();
// After pop back it will remove it's last element without a index 

for(int i:vec){
    cout<<i<<" ";
}
cout<<endl;

cout<<vec.size()<<endl;
vec.clear();
// when we apply clear it will remove all its element aand size become 0 but capacity ramain same;

cout<<"Capacity or space pesent -> "<<vec.capacity()<<endl;
cout<<"size -> "<<vec.size()<<endl;

vector<int> ve(5,2);
// we have given the size so it will not exceed it where 5 is a size 

cout<<"Capacity or space pesent at last -> "<<ve.capacity()<<endl;
cout<<"size -> "<<ve.size()<<endl;
    

vector<int> last(ve);
// It will help to copy the ve vector indide it
for(int j:ve){
    cout<<j<<" ";
}
cout<<endl;




//*********************************** Taking input of a vector **********************************
int n;
cin>>n;
int a;
vector <int> vo;
for(int i =0;i<n;i++){
    cin>>a;
    vo.push_back(a);
    // cout<<vo[i]<<" ";
}

for(int p : vo){
    cout<<p<<" ";
}
cout<<endl;
return 0;



}

