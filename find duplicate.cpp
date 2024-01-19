#include<iostream>
#include<vector>
using namespace std;

int returnDuplicate(vector<int>&arr){

    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]); // hum yaha par array ke element ko utha kar usko index man kar phir us index wale element ko jaakr
        // -ve se mark kar rhe hai aaur agar check bhi kar rhe hai ki agar koi element already -ve se mark hai to usko target karne 
        // wala index hi hamara duplicate hoga , q ki agar koi ek baar mark ho gya hai kisi index se
        // to ussse again try karna means same element present hai.

        // check for is it already visited ? , if yes then return its index.
        if (arr[index]<0)
        {
                return index;
        }
        
        // maark visited !!
        arr[index] *= -1;

    }
    return -1;
    
}

int main(){

    vector<int> arr {1,3,4,3,2};

    int duplicate = returnDuplicate(arr);
    cout<<"Duplicate element is :"<<duplicate<<endl;

}