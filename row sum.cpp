#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
        int rowsum = 0;
    // printing row eum 
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            rowsum = rowsum+arr[i][j];
        }
        cout<<"Row sum is:"<<rowsum<<endl;   
        rowsum = 0;        
    }
    
}