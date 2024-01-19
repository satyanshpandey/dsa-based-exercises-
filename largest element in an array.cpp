#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int>arr {11,2,54,2,4};

    int l = INT_MIN;
    for (int  i = 0; i < arr.size(); i++)
    {
        /* code */
        if (arr[i]>l)
        {
            /* code */
            l = arr[i];
        }
        
    }
    cout<<" LArgest element of the array is: "<<l<<endl;
}