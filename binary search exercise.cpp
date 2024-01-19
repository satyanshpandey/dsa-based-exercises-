#include<iostream>
#include<vector>
using namespace std;

int binarySearchFun(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;
  
    while (start<=end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target<arr[mid])
        {
            end = mid-1;
        }
        else if (target>arr[mid])
        {
            start = mid+1;
        }
        mid = (start+end)/2;
           
    }
    
    return -1;
}

int main(){
    
    vector<int>arr {1,2,3,4,5,6,7,8,9};
    int target = 9;
    // int target = 9; 

    int indexofElement = binarySearchFun(arr, target);
    if (indexofElement == -1)
    {
        cout<<"Not found!!"<<endl;
    }
    else{
        cout<<"Taarget found!!"<<"index: "<<indexofElement;
    }
    return 0;
}

