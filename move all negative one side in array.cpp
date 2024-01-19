#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr {0,1,-2,5,-1,6,3,-4,1,-34,1};

    // we can check number is negative or positive comparing with 0
    // like num>0 then +ve  || num<0 then -ve 

    int i = 0;
    int end = arr.size()-1;

    while (i<=end)
    {
        /* code */
        if (arr[i]>=0)
        {
            /* code */
            i++;
        }
        else if(arr[i]<=0){
            swap(arr[i],arr[end]);
            end--;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    

}