#include<iostream>
#include<vector>
using namespace std;


int Occurence(vector<int>arr , int target){
    int s = 0; // first element of array
    int e = arr.size()-1; // last element off the array

    int m = s + (e-s)/2; // middle element

    //strore answer 
    int ans = -1; 

    while (s<=e)
    {
        /* code */
        if (target == arr[m])
        {
            ans = m;
            //start searching in the left side of the arrays for more possiblety of occuring same element.
            //left search 
            e = m-1;
        }
        //if target < middle element   --- then start searching in the 
        else if (target < arr[m])
        {
            e = m-1; //search in left 
        }
        //search in right 
        else if (target > arr[m])
        {
            s = m+1;
        }
         m = s + (e-s)/2;
        
    }
    return ans;
    
}

int main(){

    vector<int>arr {1,2,3,4,4,4,4,4,5,5,5,5,5,5,6};
    int target = 5;

    int firstOcc = Occurence(arr, target);

    cout<<"First Occurence is at "<<firstOcc<<" index."<<endl;

    return 0;
}