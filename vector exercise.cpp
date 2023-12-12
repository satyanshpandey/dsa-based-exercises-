#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int>ar(10);
    vector<int>arr(11,-5);
    vector<int>arrr = {1,2,3,4,5,6,7};
    vector<int>arrrr = {11,22,33,44,55,66,77,88,99,00};

    cout<<"vector<int>ar(10); "<<ar.size()<<endl;
    cout<<"vector<int>arr(11,-5); "<<arr.size()<<endl;
    cout<<"vector<int>arrr = {1,2,3,4,5,6,7}; "<<arrr.size()<<endl;
    cout<<"vector<int>arrrr = {11,22,33,44,55,66,77,88,99,00}; "<<arrrr.size()<<endl;

    cout<<"\n\n";
    vector<int>arr1  {11,22,33,44};
    cout<<"lllll"<<arr1[2];



    





    return 0;
}