#include<iostream>
#include<vector>
using namespace std;

int nearlySortedArray(vector<int>arr, int target){

        int s = 0;
        int e = arr.size()-1;

        int m = s + (e-s)/2;

        while (s<=e)
        {
            if (arr[m] == target)
            {
                return m; 
            }
            if (arr[m-1]>0 && arr[m-1] == target)
            {
                return m-1;
            }
            if(arr[m+1]<e && arr[m+1] == target){
                return m+1;
            }
            

            // if answer is not found in above condition then start searching in left and right 
            else if (arr[m]>target)
            {
                //then start searching in left
                e = m-2;
            }
            else if (arr[m]<target)
            {
                // right search 
                s = m + 2;
            }
            
            m = s + (e - s)/2;
             return -1; //if target is not in array  
        }
                 
}


int main()
{

    vector<int>arr {10,3,40,30,50,80,70,90};

    int target = 5;

    int searchIndex = nearlySortedArray(arr, target);

    cout<<"Index of "<<target<< " is "<<searchIndex<<endl;

    return 0;

}