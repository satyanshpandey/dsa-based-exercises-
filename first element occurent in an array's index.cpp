#include<iostream>
#include<vector>
using namespace std;

int firstOccurenceIndex( vector<int> arr, int target){
        int start = 0;
        int end = arr.size()-1;
        int ans = -1;
        int mid = (start+end)/2;

        while (start<=end)
        {
            if (target == arr[mid])
            {
                ans = mid;
                //check in left side of arrays for first occurence 
                end = mid - 1;
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
        return ans;
            
}

int main(){


    vector<int> arr{1,2,3,4,4,4,4,4,4,4,5,6,7};
    int target = 4;

    int index = firstOccurenceIndex(arr, target);
    cout<<"first occurence element index is:"<<index<<endl;
    return 0;
}