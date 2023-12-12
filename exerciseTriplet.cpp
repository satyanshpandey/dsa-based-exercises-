#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int>arr = {10,20,30,40,50};
    for (int i = 0; i < arr.size(); i++)
    {
        
        int j = i+1;
        int k = j+1;
        int element1 = arr[i];
        int element2 = arr[j];
        int element3 = arr[k];

        cout<<"arr[i]:"<<arr[i]<<" arr[j]:"<<arr[j]<<" arr[k]:"<<arr[k]<<endl;

    }
    
}