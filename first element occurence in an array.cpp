#include<iostream>
#include<vector>
using namespace std;

int FirstOccurenceFunction(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            // end = mid - 1; // for find the first occurence of target element of the array
            start = mid+1; // for find the las  t occurence of the array element 
        }
        else if (arr[mid] > target)
        {
            end = mid-1;
        }
        else if (arr[mid]<target)
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;       
    }
    return ans;
}



int main(){

    vector<int>arr {1,2,3,3,3,4,4,4,4,4,4,6};
    int target = 4;
    int indexFirstOccurence = FirstOccurenceFunction(arr, target);

    cout<<"ans is: "<<indexFirstOccurence;
    

}