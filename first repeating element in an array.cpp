#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr {44,77,33,44,34,77};
   

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<"This is first repeating element in an array::"<<arr[i]<<endl;
            }         
        } 
        break;       
    }
}