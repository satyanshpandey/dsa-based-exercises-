#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main(){

/////--------this is brute force approach to remove duplicates from an arrays-------
//////////---let's see better approach for find the duplicate. ---------------

    // unordered_set<int> myNewSet;

    // vector<int>arr {1,2,1,2,2,2,2,1,1,2,2,4,3,6,6,4};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     myNewSet.insert(arr[i]);
    // }

    // for(auto nw_st : myNewSet){
    //     cout<<nw_st<<" ";
    // }

/////////////------------------------better approach-----------------------------///////////////////////
    
    vector<int>arr {0,1,1,2,3,4,5,5,6};
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
        
    }
    // return i+1;
for(auto x : arr){
    cout<<x<<" ";
}
}