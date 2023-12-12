#include<iostream>
#include<vector>
using namespace std;

int main(){

    int sum = 5;
    vector<int>arr = {1,2,3,4,5,6,7,8,9,12};

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            /* code */
            // printing all posible pair of the arrays 
            // cout<<"("<<element<<","<<arr[j]<<")"<<endl;

            if(element + arr[j] == sum){
                cout<<"Pair found: "<<element<<","<<arr[j]<<endl;
            }
        }
        
    }
    

}