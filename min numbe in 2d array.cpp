#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;
int main(){
    int min = INT_MAX;
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (min>arr[i][j])
            {
                min = arr[i][j];
            }
            
        }
    }
        cout<<"Minimum number in arrays is:"<<min;
    
}