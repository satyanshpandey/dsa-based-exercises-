#include<iostream>
#include<vector>
using namespace std;

// ---------this program is solve using Dutch Flag algo-----------------

int main(){

    vector<int>arr {6,-7,8,7,-1};
    int l = 0;
    int h = arr.size()-1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[l]<0)
        {
            l++;
        }
        else if (arr[h]>0)
        {
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    

/**
 * same thing you can do also with while loop .
while(l<h){
    if (arr[l]<0)
        {
            l++;
        }
        else if (arr[h]>0)
        {
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
*/

    //printing sorted array 
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }