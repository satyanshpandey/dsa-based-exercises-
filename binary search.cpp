#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int>arr, int size , int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;

    while (start<=end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid; 
        }
        else if (target < element)
        {
            end =mid + 1;
        }
        else if (target > element)
        {
            start = mid + 1;
        }
        
        mid = (start + end)/2;
        
    }

    return -1;

}

int main(){
    vector<int>arr {1,2,3,4,5,66,77,88,99};
    

    int target = 88;
    int size = arr.size();

    int indexofTarget = binarySearch(arr, size , target);

    if (indexofTarget == -1)
    {
            cout<<"Target not found!"<<endl;    
    }
    else{
        cout<<"Target found at "<<indexofTarget<<endl;
    }
    return 0;
    

}