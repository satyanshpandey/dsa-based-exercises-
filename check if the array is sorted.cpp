#include<iostream>
#include<vector>
using namespace std;

int checkSortedArray(vector<int>arr){
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i-1]<=arr[i])
        {
            // return true; 
        }
        else{
            return false;
        }        
    }
    return true;
}

int main(){

    // vector<int>arr {1,2,3,4,5,4,8};
    vector<int>arr {1,2,3,4,5,66,77,78};
    int sortedCheck = checkSortedArray(arr);
    if (sortedCheck)
    {
        /* code */
        cout<<"array is sorted!!"<<endl;
    }
    else{
        cout<<"Not sorted!"<<endl;
    }
}