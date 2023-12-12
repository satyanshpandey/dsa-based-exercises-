#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {11,22,33,44,55};

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            /* code */
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
        
    }
    

}