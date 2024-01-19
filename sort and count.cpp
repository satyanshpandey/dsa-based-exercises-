#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


    vector<int>arr {3,43,4,33,3,3,3,434,54,66,74,556,78,2,31,1};

    int num = count(arr.begin() , arr.end() , 3);
    cout<<num<<endl;
    return 0;
}