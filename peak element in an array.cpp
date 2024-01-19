#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s = mid+1;
        }
        else if (arr[mid]>arr[mid+1])
        {
                e = mid;
        }
        //update middle index 
        mid = s + (e - s)/2;

    }
    return mid;
    
}

int main(){
    
    vector<int>arr {0,6,7,8,10,5,2};
    int peak___ele = peakElement(arr);
    cout<<"Peak element is at: "<<peak___ele<<endl;
    return 0;
}