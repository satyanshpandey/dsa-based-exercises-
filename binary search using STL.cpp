#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>arr{1,2,3,4,5,6,7,8,9,99,999};

    //using STL for binary search 
    if (binary_search(arr.begin(), arr.end() , 3 /** this last is the target element*/))
    {
        cout<<"Found"<<endl;
    }
    else
        cout<<"Not found!";
    
}