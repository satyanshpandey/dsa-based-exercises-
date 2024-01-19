#include<iostream>
#include<vector>
using namespace std;

int Occurence(vector<int>arr, int target ){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start<=end)  
    {
        if (target == arr[mid])
        {
                ans = mid;
                //search in right side for last occurence , if any same element will be there then 'ans' will store that's index value. 
                start = mid+1;
        }
        else if (target < arr[mid])  //then search in left part of the array.
        {
            end = mid-1;
        }
        else if (target>arr[mid]) // search in the right side of the aarray
        {
            start = mid+1;
        }
        //update the middle element of the arrays , after every iterations. 
        mid = start + (end - start)/2;
        
        
    }
    return mid;
    
}




int main(){

    vector<int>arr {1,2,3,4,4,4,4,4,4,4,4,4,9};
    int target = 4;

    int lastOccurance = Occurence(arr, target);

    cout<<"Last occurance of the element is "<<lastOccurance<<endl;

    return 0;
}