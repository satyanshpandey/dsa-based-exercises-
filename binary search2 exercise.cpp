#include<iostream>
#include<vector>
using namespace std;

//binary search function declaration 
int BinarySearch(vector<int>arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;
    

    while (start<=end)
    {   
        int element = arr[mid];
        if (target == element)
        {
            return mid ;
        }
        else if (target>element)
        {
            start = mid +1;
        }
        else if (target<element)
        {
            end = mid+1;
        }
        mid = (start+end)/2;
        
        
    }

    return -1;
}


int main(){
    vector<int>arr {1,2,3,4,5,6,7,8,9,99,111};
    int target = 111;

    int indexOf_element = BinarySearch(arr, target);

    if (indexOf_element == -1)
    {
        cout<<"Element is not found!"<<endl;
    }
    else{
        cout<<"Element found at index:"<<indexOf_element<<endl;
    }
    
    

    return 0;
}