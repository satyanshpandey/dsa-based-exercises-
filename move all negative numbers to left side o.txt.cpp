#include<iostream>
#include<vector>
using namespace std;

int moveAll_leftSide(vector<int>arr){
    int l = 0;
    int h = arr.size()-1;
    while (l<=h)    
    {
        if (arr[l]<0)
        {
            l++; //agar l pointer par already -ve value hai to hum usko aage value ke liye check karenge 
        }
        else if (arr[l]>0)
        {
            swap(arr[l],arr[h]);
            h--;
        }
    }
        //printing array after sorting 
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int>arr {1,2,3,4,-1,-2,2,3,4,5,6,6};

    moveAll_leftSide(arr);
}