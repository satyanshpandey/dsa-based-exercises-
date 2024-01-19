#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    // vector<int>arr {1,2,3,4,5,6,7,8,8};
    // vector<int>arr {1,7,7,7,7,7,7,7,7,7};
    // int largest = arr[arr.size()-1];
    // cout<<"LArgest:"<<largest<<endl;
    // for (int i = arr.size()-2; i >= 0; i--)
    // {
    //     if (arr[i]!=largest)
    //     {
    //         cout<<"Second LArgest: "<<arr[i];
    //         break;
    //     }
        
    // }


    // -------------------------------------------------------------------------
    // another way to find the second largest element of the array with O(n) TC 

    // vector<int>arr {1,2,3,4,5,6,7,8,8};
    // int largest = arr[0];
    // for (int  i = 0; i < arr.size(); i++)
    // {
    //     if (largest<arr[i])
    //     {
    //         largest = arr[i];
    //     }
        
    // }
    
    // cout<<" LArgest :"<<largest<<endl;

    // // lets find the Second largest 
    // int s_largest = -1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (s_largest<arr[i] && largest!=arr[i])
    //     {
    //         s_largest = arr[i];
    //     }
        
    // }
    // cout<<"This is Second largest element of the array: "<<s_largest;






    // ------------------------------------------------------------------------------------------------------
    // another way of printing second largest element of the array 
// if array is sorted then only this method will work other wise it will not work 
    vector<int>arr {1,2,3,4,5,6,7,8,8};
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        
    }
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Second largest element is: "<<secondLargest<<endl;
    
}