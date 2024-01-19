#include<iostream>
#include<vector>
using namespace std;

int main(){

    //marking all values which is present at the array ,
    // only position of missing element will be positive.
    // vector<int> arr {1,4,4,4,4}; //o/p : 2 3 5 
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int index = arr[i];
    //     if (arr[index-1]>0)
    //     {
    //         arr[index-1] *= -1;
    //     }        
    // }
    // //printing all marking array element 
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // //printing missing element of the array which is positive +ve in the array.
    // for (int i = 0; i < arr.size(); i++)
    // {
    // if (arr[i]>0)
    // {
    //     cout<<i+1<<" ";
    // }
    
    // }
    
     vector<int>arr = {1,5,3,5,5};
     int i = 0;
     while (i<arr.size())
     {
         int index = arr[i]-1; 
         if (arr[i] == arr[index])
         {
            i++;
         }
         else if (arr[i] != arr[index])
         {
            swap(arr[i],arr[index]);
         }
         
         
     }
     for (int i = 0; i < arr.size(); i++)
     {
        if (arr[i]!= i+1)
        {
            cout<<i+1<<" ";
        }
        
     }
     
          
    
}